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

#ifndef H_HAX_ARCHIVER_H
#define H_HAX_ARCHIVER_H

#include "Hax/Hax.hpp"

#include "lzma/LzmaEnc.h"
#include "lzma/LzmaDec.h"
#include "lzma/LzmaLib.h"
#include "lzma/Types.h"

#include <vector>

namespace Hax {

	/** @class Archiver
	 *	@brief
	 *	Provides compression and decompression services using Lzma and BZip2.
	 */
	class Archiver {
	public:

		Archiver();
		~Archiver();

    // encode & decode to file
    static int decodeLzma(const char* src, const char* dest);
    static int encodeLzma(const char* src, const char* dest, UInt64 *srcSize=0, UInt64 *destSize=0);
    
    // in-memory encode & decode
    static int encodeLzma(std::vector<unsigned char> &outBuf, const std::vector<unsigned char> &inBuf);
    static int decodeLzma(std::vector<unsigned char> &outBuf, const std::vector<unsigned char> &inBuf, UInt64 srcSize);

	protected:

	};
}

#endif
