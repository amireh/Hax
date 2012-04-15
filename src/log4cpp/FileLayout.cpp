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

#include "Hax/log4cpp/FileLayout.hpp"
#include "log4cpp/Priority.hh"
#include "log4cpp/FactoryParams.hh"

#ifdef LOG4CPP_HAVE_SSTREAM
#include <sstream>
#endif
#include <iostream>
#include <iomanip>
#include <time.h>

namespace Hax {

  FileLayout::FileLayout()
  {
  }

  FileLayout::~FileLayout() {
  }

  std::string FileLayout::format(const LoggingEvent& event) {

		std::ostringstream message;

    const std::string& priorityName = Priority::getPriorityName(event.priority);

    // no need to print timestamps if we're using syslog
    struct tm *pTime;
    time_t ctTime; time(&ctTime);
    pTime = localtime( &ctTime );
    message << std::setw(2) << std::setfill('0') << pTime->tm_hour
        << ":" << std::setw(2) << std::setfill('0') << pTime->tm_min
        << ":" << std::setw(2) << std::setfill('0') << pTime->tm_sec
        << " ";

		// start off with priority
		message << "[" << priorityName[0]	<< "] ";

		// append NDC
		if (event.ndc != "")
			message << event.ndc << ": ";

		message << event.message << "\n";

    return message.str();
  }
}
