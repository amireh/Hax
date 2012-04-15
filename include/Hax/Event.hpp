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

#ifndef H_HAX_EVENT_H
#define H_HAX_EVENT_H

#include <vector>
#include <exception>
#include <map>
#include <iostream>
#include <boost/crc.hpp>
#include <boost/asio.hpp>

namespace Hax {

  typedef unsigned char EventUID_T;
  typedef unsigned char EventFeedback_T;
  
  namespace EventUID {

    enum {
      Unassigned = 0,
      
      LuaError,

      EntitySelected,
      EntityDeselected,
      SanityCheck
    };
  }

  namespace EventFeedback {

    enum {
      Unassigned = 0,
      Ok,
      Error,
      InvalidRequest,
      SanityCheck
    };
  }

  /**
   * Base Event object that is used and handled to represent game events.
   */
  struct Event {

    enum {
      // if Length is small enough it will be cast to 1 byte thus we can't
      // depend on uint16_t being interpreted as 2 bytes long.. so we -1
      HeaderLength = 7, // "UIDOptionsFeedbackLength"
      FooterLength = 4 // "\r\n\r\n"
    };

    // event options
    enum {
      NoFormat    = 0x01, // events with no format will not be parsed per-property
      Compressed  = 0x02, // whether the content is compressed
      IsLocal     = 0x04, // local events will not be dispatched over the network
      Broadcast   = 0x08
    };

		typedef	std::map< std::string, std::string > property_t;

    Event();
    Event(const unsigned char inUID, const unsigned char = EventFeedback::Unassigned, unsigned char options=0);
    Event(const Event& src);
    Event& operator=(const Event& rhs);

		//! resets evt state
		~Event();

    bool fromStream(boost::asio::streambuf& in);
    void toStream(boost::asio::streambuf& out) const;

    //! resets event state
    void reset();

		std::string const& getProperty(std::string inName) const;

		void setProperty(const std::string inName, const std::string inValue);
    void setProperty(const std::string inName, int inValue);
    bool hasProperty(const std::string inName) const;

    friend std::ostream& operator<<(std::ostream&, const Event&);

    /// debug
		void dump(std::ostream& inStream = std::cout) const;

		unsigned char		      UID;
    unsigned char         Options;
    unsigned char	        Feedback;
    uint32_t              Length;
		int                   Checksum;
    property_t		        Properties;
    uint32_t              Rawsize;
    static const char     *Footer;
    static const uint32_t MaxLength; // no single message can be longer than this (2^32-1)
    void                  *Any;

    static int __CRC32(const std::string& my_string);
    static std::string __uidToString(unsigned char);
		void __clone(const Event& src);
	};

} // end of namespace
#endif // H_Event_H
