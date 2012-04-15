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

#ifndef H_HAX_EXCEPTION_H
#define H_HAX_EXCEPTION_H

#include <exception>
#include <stdexcept>

namespace Hax {

	class BadConversion : public std::runtime_error {
	public:
		inline BadConversion(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class BadStream : public std::runtime_error {
	public:
		inline BadStream(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class UnknownEvent : public std::runtime_error {
	public:
		inline UnknownEvent(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class UnknownEventSender : public std::runtime_error {
	public:
		inline UnknownEventSender(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class BadEvent : public std::runtime_error {
	public:
		inline BadEvent(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class BadFormat : public std::runtime_error {
	public:
		inline BadFormat(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class UnassignedProfile : public std::runtime_error {
	public:
		inline UnassignedProfile(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class UnknownSpell : public std::runtime_error {
	public:
		inline UnknownSpell(const std::string& s)
		: std::runtime_error(s)
		{ }
	};

	class UnidentifiedResource : public std::runtime_error {
  public:
    inline UnidentifiedResource(const std::string& s)
    : std::runtime_error(s)
    { }
  };

  class ScriptError : public std::runtime_error {
	public:
		inline ScriptError(const std::string& s)
		: std::runtime_error(s)
		{ }
	};
  
  class request_incomplete : public std::runtime_error {
    public:

    request_incomplete(std::string msg, int in_bytes_left)
    : std::runtime_error(msg),
      bytes_left(in_bytes_left) {
    }
    virtual ~request_incomplete() throw() {
    }

    int bytes_left;
  };

  class bad_request : public std::runtime_error {
    public:

    bad_request(std::string msg)
    : std::runtime_error(msg) {
    }
    virtual ~bad_request() throw() {
    }

  };

  class invalid_uid : public std::runtime_error {
    public:

    invalid_uid(std::string msg)
    : std::runtime_error(msg) {
    }
    virtual ~invalid_uid() throw() {
    }
  };

  class integrity_violation : public std::runtime_error {
    public:

    integrity_violation(std::string msg)
    : std::runtime_error(msg) {
    }
    virtual ~integrity_violation() throw() {
    }
  };

  class invalid_property : public std::runtime_error {
    public:

    invalid_property(std::string msg)
    : std::runtime_error(msg) {
    }
    virtual ~invalid_property() throw() {
    }
  };

  class lua_runtime_error : public std::runtime_error {
    public:

    lua_runtime_error(std::string msg)
    : std::runtime_error(msg) {
    }
    virtual ~lua_runtime_error() throw() {
    }
  };
} // end of namespace Pixy

#endif
