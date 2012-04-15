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

#ifndef H_HAX_UTILITY_H
#define H_HAX_UTILITY_H

#include "Hax/Hax.hpp"

#include <typeinfo>
#include <sstream>
#include <vector>
#include <iostream>

#if HAX_PLATFORM == HAX_PLATFORM_APPLE
# include <CoreFoundation/CoreFoundation.h>
#else
# include <malloc.h>
#endif

namespace Hax {
namespace Utility {
  
	template<typename T>
	inline std::string stringify(const T& x)
	{
		std::ostringstream o;
		if (!(o << x))
			throw BadConversion(std::string("stringify(")
								+ typeid(x).name() + ")");
		return o.str();
	}

	// helper; converts an integer-based type to a string
	template<typename T>
	inline void convert(const std::string& inString, T& inValue,
						bool failIfLeftoverChars = true)
	{
		std::istringstream _buffer(inString);
		char c;
		if (!(_buffer >> inValue) || (failIfLeftoverChars && _buffer.get(c)))
			throw BadConversion(inString);
	}

	template<typename T>
	inline T convertTo(const std::string& inString,
					   bool failIfLeftoverChars = true)
	{
		T _value;
		convert(inString, _value, failIfLeftoverChars);
		return _value;
	}


#if HAX_PLATFORM == HAX_PLATFORM_APPLE && !defined(H_HAX_UTILITY_H)

	// This function will locate the path to our application on OS X,
	// unlike windows you cannot rely on the current working directory
	// for locating your configuration files and resources.
	std::string macBundlePath()
	{
		char path[1024];
		CFBundleRef mainBundle = CFBundleGetMainBundle();
		assert(mainBundle);

		CFURLRef mainBundleURL = CFBundleCopyBundleURL(mainBundle);
		assert(mainBundleURL);

		CFStringRef cfStringRef = CFURLCopyFileSystemPath( mainBundleURL, kCFURLPOSIXPathStyle);
		assert(cfStringRef);

		CFStringGetCString(cfStringRef, path, 1024, kCFStringEncodingASCII);

		CFRelease(mainBundleURL);
		CFRelease(cfStringRef);

		return std::string(path);
	}
#endif

  /* splits a string s using the delimiter delim */
  inline static
  std::vector<std::string> split(const std::string &s, char delim) {
      std::vector<std::string> elems;
      std::stringstream ss(s);
      std::string item;
      while(std::getline(ss, item, delim)) {
          elems.push_back(item);
      }
      return elems;
  }

  inline static
  void ijoin(const std::vector<string_t>& tokens, string_t &out, char delim) {
    for (std::vector<string_t>::const_iterator token = tokens.begin();
    token != tokens.end();
    ++token)
    {
      out += *token;
      out.push_back(delim);
    }
  }

  inline static
  string_t join(const std::vector<string_t>& tokens, char delim) {
    string_t out;
    ijoin(tokens, out, delim);
    return out;
  }

  inline static
  void trimi(string_t &s) {
    int ws_ctr = 0;
    for (char c : s)
    {
      if (c == ' ' || c == '\t')
        ++ws_ctr;
      else
        break;
    }

    int reverse_ws_ctr = 0;
    char c;
    for (int i=s.size()-1; i >= 0; --i)
    {
      c = s[i];
      if (c == ' ' || c == '\t')
        ++reverse_ws_ctr;
      else
        break;
    }

    if (ws_ctr > 0 || reverse_ws_ctr > 0)
      s = s.substr(ws_ctr, s.size() - (ws_ctr + reverse_ws_ctr));
  }

  inline static
  string_t trim(string_t const& in)
  {
    string_t out(in);
    trimi(out);
    return out;
  }
  
  inline static
  void toloweri(string_t& in)
  {
    std::transform(in.begin(), in.end(), in.begin(), ::tolower);
  }

  inline static
  string_t tolower(string_t const& in)
  {
    string_t out(in);
    toloweri(out);
    return out;
  }
  
  inline static
  void toupperi(string_t& in)
  {
    std::transform(in.begin(), in.end(), in.begin(), ::toupper);
  }

  inline static
  string_t toupper(string_t const& in)
  {
    string_t out(in);
    toupperi(out);
    return out;
  }

  inline static bool
  boolify(const string_t& str)
  {
    //
    string_t s = tolower(str);
    
    if (s == "true") return true;
    else if (s == "yes") return true;
    else if (s == "on") return true;
    
    return false;
  }
    
  inline static
  void iremove_in_string(string_t& in, char delim)
  {
    size_t idx;
    while ((idx = in.find(delim)) != string_t::npos)
      in.erase(idx, 1);
  }

  inline static
  string_t remove_in_string(string_t const& in, char delim)
  {
    string_t out(in);
    iremove_in_string(out, delim);
    return out;
  }

  inline static
  bool is_decimal_nr(string_t const& in)
  {
    for (auto c : in)
      if (c < '0' || c > '9')
        return false;

    return true;
  }

  /**
   * suffixes given string with `fill` until it spans `size` characters
   **/
  inline static
  string_t expand(string_t const& in, size_t size, char fill)
  {
    if (in.size() >= size)
      return in;

    string_t out(in);
    while (out.size() < size)
      out.push_back(fill);

    return out;
  }

  inline static
  string_t rexpand(string_t const& in, size_t size, char fill)
  {
    if (in.size() >= size)
      return in;

    string_t out;
    size_t pad = size - in.size();
    while (out.size() < pad)
      out.push_back(fill);
    out += in;
    return out;
  }

  inline static
  void ishrink(string_t& in, char lsd)
  {
    size_t offset = 0;
    while (in.at(offset) == lsd)
      ++offset;

    in = in.substr(offset, in.size());
  }

  inline static
  bool is_operator(char c)
  {
    switch (c)
    {
      case '(':
      case ')':
      case '+':
      case '-':
      case '*':
      case '/':
      case '%':
      case '^':
      return true;
      default:
      return false;
    }

    return false;
  }

  template<typename IntType>
  inline static IntType overwrite_bits(IntType dst, IntType src, int pos, int len) {
      IntType mask = (((IntType)1 << len) - 1) << pos;
      return (dst & ~mask) | (src & mask);
  }

  /**
   * perform a locale-agnostic case insensitive search of a substring in a string
   **/
  inline static size_t
  ci_find_substr( const string_t& str, const string_t& substr, const std::locale& loc = std::locale() )
  {
    string_t::const_iterator it = std::search(
      str.begin(), str.end(),
      substr.begin(), substr.end(),
      [&loc](char ch1, char ch2) -> bool {
        return std::toupper(ch1, loc) == std::toupper(ch2, loc);
      });

    if ( it != str.end() )
      return it - str.begin();

    return std::string::npos; // not found
  }
  
  inline static void
  json_escapei( string_t& str )
  {
    for (size_t i=0; i < str.size(); ++i)
      if (str[i] == '"')
        str.insert(i++, 1, '\\');
      else if (str[i] == '\n') {
        std::cout << "FOUND A NEWLINE IN TERM\n";
        str[i] = ' ';
      }
  }
  
  inline static string_t
  json_escape(const string_t& str)
  {
    string_t out(str);
    json_escapei(out);
    return out;
  }

  /**
   * converts a human-readable time string into numerical seconds, format:
   * [number][s|m|h|d|w], eg: 5s, 10m, 30h, 4d
   */
  inline static bool 
  string_to_seconds(const string_t& str, timespec* ts)
  {
    if (str == "0") {
      ts->tv_sec = 0;
      return true;
    }
      
    int modifier = 1;
    switch(str.back())
    {
      case 's': case 'S': modifier = 1;   break;
      case 'm': case 'M': modifier = 60;  break;
      case 'h': case 'H': modifier = 3600;  break;
      case 'd': case 'D': modifier = 86400;  break;
      case 'w': case 'W': modifier = 604800;  break;
      default: return false;
    }
    
    string_t repl(str.begin(), str.end() - 1);
    try {
      unsigned int orig_nr = convertTo<unsigned int>(repl);
      ts->tv_sec = orig_nr * modifier;
    } catch (Hax::BadConversion& e) {
      return false;
    }
    
    return true;
  }
  
  /**
   * converts a human-readable filesize string into numerical bytes, format:
   * [number][b|k|m|g|t], eg: 5M, 10K, 1G, 3T
   */
  inline static bool 
  string_to_bytes(const string_t& str, uint64_t *sz)
  {
    if (str == "0") {
      (*sz) = 0;
      return true;
    }
      
    uint64_t modifier = 1;
    switch(str.back())
    {
      case 'b': case 'B': modifier = 1;   break;
      case 'k': case 'K': modifier = 1024;  break;
      case 'm': case 'M': modifier = 1048576;  break;
      case 'g': case 'G': modifier = 1073741824;  break;
      case 't': case 'T': modifier = 1099511627776;  break;
      default: return false;
    }
    
    string_t repl(str.begin(), str.end() - 1);
    try {
      unsigned int orig_nr = convertTo<unsigned int>(repl);
      (*sz) = orig_nr * modifier;
    } catch (Hax::BadConversion& e) {
      return false;
    }
    
    return true;
  }
}
}
#endif
