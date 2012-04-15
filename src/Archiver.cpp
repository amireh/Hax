/*
 *  Copyright (c) 2011-2012 Ahmad Amireh <ahmad@amireh.net>
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 */

#include "Hax/Archiver.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <iostream>

#define IN_BUF_SIZE (1 << 16)
#define OUT_BUF_SIZE (1 << 16)

extern "C" SRes FileSeqInStream_Read(void *pp, void *buf, size_t *size);
/*extern static void *SzAlloc(void *p, size_t size);
extern static void SzFree(void *p, void *address);
extern static ISzAlloc g_Alloc;*/

namespace Hax {

  static void *SzAlloc(void *p, size_t size) { p = p; return malloc(size); }
  static void SzFree(void *p, void *address) { p = p; free(address); }
  static ISzAlloc g_Alloc = { SzAlloc, SzFree };
  char rs[800] = { 0 };

  const char *kCantReadMessage = "Can not read input file";
  const char *kCantWriteMessage = "Can not write output file";
  const char *kCantAllocateMessage = "Can not allocate memory";
  const char *kDataErrorMessage = "Data error";

  int PrintError(char *buffer, const char *message)
  {
    strcat(buffer, "\nError: ");
    strcat(buffer, message);
    strcat(buffer, "\n");
    return 1;
  }

  int PrintErrorNumber(char *buffer, SRes val)
  {
    sprintf(buffer + strlen(buffer), "\nError code: %x\n", (unsigned)val);
    return 1;
  }

  int PrintUserError(char *buffer)
  {
    return PrintError(buffer, "Incorrect command");
  }

  static SRes Encode(ISeqOutStream *outStream, ISeqInStream *inStream, UInt64 fileSize, char *rs)
  {
    CLzmaEncHandle enc;
    SRes res;
    CLzmaEncProps props;

    rs = rs;

    enc = LzmaEnc_Create(&g_Alloc);
    if (enc == 0)
      return SZ_ERROR_MEM;

    LzmaEncProps_Init(&props);
    res = LzmaEnc_SetProps(enc, &props);

    if (res == SZ_OK)
    {
      Byte header[LZMA_PROPS_SIZE + 8];
      size_t headerSize = LZMA_PROPS_SIZE;
      int i;

      res = LzmaEnc_WriteProperties(enc, header, &headerSize);
      for (i = 0; i < 8; i++)
        header[headerSize++] = (Byte)(fileSize >> (8 * i));
      if (outStream->Write(outStream, header, headerSize) != headerSize)
        res = SZ_ERROR_WRITE;
      else
      {
        if (res == SZ_OK)
          res = LzmaEnc_Encode(enc, outStream, inStream, NULL, &g_Alloc, &g_Alloc);
      }
    }
    LzmaEnc_Destroy(enc, &g_Alloc, &g_Alloc);
    return res;
  }

  static SRes Decode2(CLzmaDec *state, ISeqOutStream *outStream, ISeqInStream *inStream,
      UInt64 unpackSize)
  {
    int thereIsSize = (unpackSize != (UInt64)(Int64)-1);
    Byte inBuf[IN_BUF_SIZE];
    Byte outBuf[OUT_BUF_SIZE];
    size_t inPos = 0, inSize = 0, outPos = 0;
    LzmaDec_Init(state);
    for (;;)
    {
      if (inPos == inSize)
      {
        inSize = IN_BUF_SIZE;
        RINOK(inStream->Read(inStream, inBuf, &inSize));
        inPos = 0;
      }
      {
        SRes res;
        SizeT inProcessed = inSize - inPos;
        SizeT outProcessed = OUT_BUF_SIZE - outPos;
        ELzmaFinishMode finishMode = LZMA_FINISH_ANY;
        ELzmaStatus status;
        if (thereIsSize && outProcessed > unpackSize)
        {
          outProcessed = (SizeT)unpackSize;
          finishMode = LZMA_FINISH_END;
        }

        res = LzmaDec_DecodeToBuf(state, outBuf + outPos, &outProcessed,
          inBuf + inPos, &inProcessed, finishMode, &status);
        inPos += inProcessed;
        outPos += outProcessed;
        unpackSize -= outProcessed;

        if (outStream)
          if (outStream->Write(outStream, outBuf, outPos) != outPos)
            return SZ_ERROR_WRITE;

        outPos = 0;

        if (res != SZ_OK || thereIsSize && unpackSize == 0)
          return res;

        if (inProcessed == 0 && outProcessed == 0)
        {
          if (thereIsSize || status != LZMA_STATUS_FINISHED_WITH_MARK)
            return SZ_ERROR_DATA;
          return res;
        }
      }
    }
  }

  static SRes Decode(ISeqOutStream *outStream, ISeqInStream *inStream)
  {
    UInt64 unpackSize;
    int i;
    SRes res = 0;

    CLzmaDec state;

    /* header: 5 bytes of LZMA properties and 8 bytes of uncompressed size */
    unsigned char header[LZMA_PROPS_SIZE + 8];

    /* Read and parse header */

    RINOK(SeqInStream_Read(inStream, header, sizeof(header)));

    unpackSize = 0;
    for (i = 0; i < 8; i++)
      unpackSize += (UInt64)header[LZMA_PROPS_SIZE + i] << (i * 8);

    LzmaDec_Construct(&state);
    RINOK(LzmaDec_Allocate(&state, header, LZMA_PROPS_SIZE, &g_Alloc));
    res = Decode2(&state, outStream, inStream, unpackSize);
    LzmaDec_Free(&state, &g_Alloc);
    return res;
  }

  SRes OnProgress(void *p, UInt64 inSize, UInt64 outSize)
  {
    // Update progress bar.
    return SZ_OK;
  }
  static ICompressProgress g_ProgressCallback = { &OnProgress };

  int Archiver::encodeLzma(
    std::vector<unsigned char> &outBuf,
    const std::vector<unsigned char> &inBuf)
  {
    size_t propsSize = LZMA_PROPS_SIZE;
    size_t destLen = inBuf.size() + inBuf.size() / 3 + 128;
    outBuf.resize(propsSize + destLen);

    CLzmaEncProps props;
    LzmaEncProps_Init(&props);
    props.dictSize = 1 << 16; // 64 KB
    props.writeEndMark = 1; // 0 or 1

    int res = LzmaEncode(
      &outBuf[LZMA_PROPS_SIZE], &destLen,
      &inBuf[0], inBuf.size(),
      &props, &outBuf[0], &propsSize, props.writeEndMark,
      &g_ProgressCallback, &g_Alloc, &g_Alloc);
    assert(res == SZ_OK && propsSize == LZMA_PROPS_SIZE);
    if (res == SZ_OK)
      outBuf.resize(propsSize + destLen);

    return (res == SZ_OK && propsSize == LZMA_PROPS_SIZE) ? 1 : 0;
  }

  int Archiver::decodeLzma(
    std::vector<unsigned char> &outBuf,
    const std::vector<unsigned char> &inBuf,
    UInt64 srcSize)
  {
    outBuf.resize(srcSize);
    size_t dstLen = outBuf.size();
    size_t srcLen = inBuf.size() - LZMA_PROPS_SIZE;

    std::cout << "decoding " << srcLen << "b of encoded data out to " << dstLen << " predicted raw bytes\n";
    SRes res = LzmaUncompress(
      &outBuf[0], &dstLen,
      &inBuf[LZMA_PROPS_SIZE], &srcLen,
      &inBuf[0], LZMA_PROPS_SIZE);
    assert(res == SZ_OK);
    outBuf.resize(dstLen); // If uncompressed data can be smaller
    return res == SZ_OK ? 1 : 0;
  }
  Archiver::Archiver() {
  }

  Archiver::~Archiver() {
  }

  int Archiver::decodeLzma(const char* src, const char* dest) {

    CFileSeqInStream inStream;
    CFileOutStream outStream;

    FileSeqInStream_CreateVTable(&inStream);
    File_Construct(&inStream.file);

    FileOutStream_CreateVTable(&outStream);
    File_Construct(&outStream.file);

    if (InFile_Open(&inStream.file, src) != 0)
      return PrintError(rs, "Can not open input file");

    if (OutFile_Open(&outStream.file, dest) != 0)
      return PrintError(rs, "Can not open output file");

    int res = Decode(&outStream.s, &inStream.s);

    File_Close(&outStream.file);
    File_Close(&inStream.file);

    if (res != SZ_OK)
    {
      if (res == SZ_ERROR_MEM)
        return PrintError(rs, kCantAllocateMessage);
      else if (res == SZ_ERROR_DATA)
        return PrintError(rs, kDataErrorMessage);
      else if (res == SZ_ERROR_WRITE)
        return PrintError(rs, kCantWriteMessage);
      else if (res == SZ_ERROR_READ)
        return PrintError(rs, kCantReadMessage);
      return PrintErrorNumber(rs, res);
    }

    return 0;
  }

   int Archiver::encodeLzma(const char* src, const char* dest, UInt64 *srcSize, UInt64 *destSize) {

    CFileSeqInStream inStream;
    CFileOutStream outStream;

    FileSeqInStream_CreateVTable(&inStream);
    File_Construct(&inStream.file);

    FileOutStream_CreateVTable(&outStream);
    File_Construct(&outStream.file);

    if (InFile_Open(&inStream.file, src) != 0)
      return PrintError(rs, "Can not open input file");

    if (OutFile_Open(&outStream.file, dest) != 0)
      return PrintError(rs, "Can not open output file");

    if (!destSize) {
      destSize = new UInt64();
    }
    if (!srcSize) {
      srcSize = new UInt64();
    }
    File_GetLength(&inStream.file, srcSize);
    int res = Encode(&outStream.s, &inStream.s, *srcSize, rs);
    File_GetLength(&outStream.file, destSize);

    File_Close(&outStream.file);
    File_Close(&inStream.file);

    if (res != SZ_OK)
    {
      if (res == SZ_ERROR_MEM)
        return PrintError(rs, kCantAllocateMessage);
      else if (res == SZ_ERROR_DATA)
        return PrintError(rs, kDataErrorMessage);
      else if (res == SZ_ERROR_WRITE)
        return PrintError(rs, kCantWriteMessage);
      else if (res == SZ_ERROR_READ)
        return PrintError(rs, kCantReadMessage);
      return PrintErrorNumber(rs, res);
    }

    return 0;
   }

}
