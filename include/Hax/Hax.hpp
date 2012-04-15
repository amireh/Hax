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

#ifndef H_HAX_HAX_H
#define H_HAX_HAX_H

#include "Hax/Platform.hpp"

#if HAX_PLATFORM == HAX_PLATFORM_WIN32
# include <boost/thread.hpp>
# include <boost/date_time.hpp>
#endif

#include <cmath>
#include <exception>
#if HAX_PLATFORM == HAX_PLATFORM_APPLE
#	include <stdint.h>
#else
#	include <stdint.h>
# include <malloc.h>
#endif
#include <cstdlib>
#include <string.h>
#include <signal.h>

// Hax
#include "Hax/Exception.hpp"
#include "Hax/Log.hpp"

#define HAX_APP_NAME          "Nebula X-42"
#define HAX_APP_NAME_STR      string_t(HAX_APP_NAME)
#define HAX_APP_NAME_CFG      "Nebula-X-42"
#define HAX_APP_NAME_CFG_STR  string_t(HAX_APP_NAME_CFG)

#define HAX_APP_VERSION_MAJOR "0"
#define HAX_APP_VERSION_MINOR "1"
#define HAX_APP_VERSION_PATCH "0"
#define HAX_APP_VERSION_BUILD "a1"
#define HAX_APP_VERSION       HAX_APP_VERSION_MAJOR + "." + \
                              HAX_APP_VERSION_MINOR + "." + \
                              HAX_APP_VERSION_PATCH + "-" + \
                              HAX_APP_VERSION_BUILD
#define HAX_APP_VERSION_STR   string_t(HAX_APP_VERSION)

namespace Hax
{
	typedef unsigned short  ushort;
  typedef std::string     string_t;
  
  void HaxInit();
  void HaxCleanup();

} // end of namespace Hax
#endif
