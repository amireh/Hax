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

#include "Hax/Event.hpp"
#include "Hax/Utility.hpp"
#include <boost/thread/mutex.hpp>

namespace Hax {

  using Utility::stringify;
  
  boost::mutex global_stream_lock;

  const char* Event::Footer = "\r\n\r\n";
  const uint32_t Event::MaxLength = 65563;

	Event::Event() {
    reset();
  }

  Event::Event(const unsigned char inUID, const unsigned char inFeedback, unsigned char inFlags)
  : UID(inUID),
    Options(inFlags),
    Feedback(inFeedback),
    Length(0),
    Checksum(0),
    Rawsize(0),
    Any(0)
  {
		Properties.clear();
	}

	Event::~Event()
  {
		//std::cout << "Event " << mName << " destroyed\n";
		//reset();
  }

	void Event::reset() {
    UID = EventUID::Unassigned;
    Options = 0;
		Feedback = EventFeedback::Unassigned;
    Length = 0;
    Checksum = 0;
    Rawsize = 0;
    Any = 0;
    if (!Properties.empty())
      Properties.clear();
	}

	Event::Event(const Event& src) {
		__clone(src);
	}

	Event& Event::operator=(const Event& rhs) {
		if (this != &rhs)
			__clone(rhs);

		return *this;
	}

	void Event::__clone(const Event& src) {
		reset();

		this->UID = src.UID;
    this->Options = src.Options;
		this->Feedback = src.Feedback;
    this->Length = src.Length;
    this->Rawsize = src.Rawsize;
    this->Checksum = src.Checksum;
    this->Any = src.Any;

    if (!src.Properties.empty())
      for (property_t::const_iterator property = src.Properties.begin();
           property != src.Properties.end();
           ++property)
        setProperty(property->first, property->second);
	}

	void Event::setProperty(const std::string inName, const std::string inValue) {
		if ( hasProperty(inName) ) {
			Properties.find(inName)->second = inValue;
			return;
		}

		Properties.insert( std::make_pair(inName, inValue) );
	}

	void Event::setProperty(const std::string inName, int inValue) {
		if ( hasProperty(inName) ) {
			Properties.find(inName)->second = stringify(inValue);
			return;
		}

		Properties.insert( std::make_pair(inName, stringify(inValue)) );
	}

	std::string const& Event::getProperty(const std::string inName) const {
		return Properties.find(inName)->second;
	}

	bool Event::hasProperty(const std::string inName) const {
		return (Properties.find(inName) != Properties.end());
	}

	void Event::dump(std::ostream& inStream) const {
		inStream
      << "uid: " << (int)UID << "\n"
      << "unformatted? " << ((Options & Event::NoFormat) == Event::NoFormat ? "yes" : "no")
      << ", compressed? " << ((Options & Event::Compressed) == Event::Compressed ? "yes" : "no")
      << ", broadcast? " << ((Options & Event::Broadcast) == Event::Broadcast ? "yes" : "no")
      << ", local? " << ((Options & Event::IsLocal) == Event::IsLocal ? "yes" : "no")
      << "\n"
      << "feedback: " << (Feedback == EventFeedback::Error ? "error" : "ok")
        << "(" << (int)Feedback << ")" << "\n"
      << "length: " << Length << "\n"
      << "CRC: " << Checksum << "\n"
      << "properties count: " << Properties.size() << "\n";

		inStream << "properties: \n";
    for (property_t::const_iterator property = this->Properties.begin();
         property != this->Properties.end();
         ++property)
			inStream << "\t" << property->first << " : " << property->second << "\n";

	}

  int Event::__CRC32(const std::string& my_string) {
    boost::crc_32_type result;
    result.process_bytes(my_string.data(), my_string.size());
    return result.checksum();
  }


  /* splits a string s using the delimiter delim */
  std::vector<std::string>
  split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
  }

  bool Event::fromStream(boost::asio::streambuf& in) {

    int bytes_received = in.size();
    if (bytes_received < Event::HeaderLength + Event::FooterLength -2 /* debug */) {
      global_stream_lock.lock();
      std::cerr
        << "message is too short (" << bytes_received
        << " out of " << Event::HeaderLength + Event::FooterLength << "!!\n";
      global_stream_lock.unlock();
      return false;
    }

    global_stream_lock.lock();
    //~ std::cout << " + received " << bytes_received << "bytes of data\n";
    global_stream_lock.unlock();

    //char sp1;
    unsigned char uid, feedback, flags;
    uint32_t length;
    //char clength[2] = {0};
    //char header[3] = {0};

    std::istream is(&in);
    is.unsetf(std::ios_base::skipws);
    is >> uid >> flags >> feedback >> length;
    //is.rdbuf()->sgetn(header,3);
    //is.rdbuf()->sgetn(clength, 2);
    //clength[2] = '\0';
    is.get();

    this->UID = (unsigned char)uid;
    this->Options = flags;
    this->Feedback = (unsigned char)feedback;
    this->Length = length;

    // check header's sanity
    if ((this->UID <= EventUID::Unassigned || this->UID >= EventUID::SanityCheck)
        || (this->Length > Event::MaxLength)
        || (this->Feedback < EventFeedback::Unassigned || this->Feedback >= EventFeedback::SanityCheck)) {
      global_stream_lock.lock();
      std::cerr << "request failed header sanity check\n";
      global_stream_lock.unlock();
      return false;
    }

    // there must be N+sizeof(int) bytes of properties where N > in_bytes - signature
    if (this->Length > 0 && (bytes_received - Event::HeaderLength - Event::FooterLength < this->Length+sizeof(int))) {
      global_stream_lock.lock();
      std::cerr << "invalid properties length: " << this->Length << "\n";
      global_stream_lock.unlock();
      return false;
    }

    global_stream_lock.lock();
    //std::cout << " + received event uid : " << (int)this->UID << "(" << __uidToString(this->UID) << ")" << " and length: " << this->Length << "\n";
    global_stream_lock.unlock();

    // parse properties
    if (this->Length > 0) {
      if ((this->Options & Event::Compressed) == Event::Compressed) {
        is >> this->Rawsize;
        is.get();

        global_stream_lock.lock();
        //std::cout << "a compressed event, raw size: " << this->Rawsize << "\n";
        global_stream_lock.unlock();
      }

      int checksum;
      is >> checksum;
      is.get();

      std::string props;
      for (int i=0; i < this->Length; ++i)
        props.push_back(is.get());

      // verify CRC checksum
      this->Checksum = Event::__CRC32(props);
      if (this->Checksum != checksum) {
        global_stream_lock.lock();
        std::cerr << "CRC mismatch, aborting: " << this->Checksum << " vs " << checksum << " for " << props << " => " << props.size() << "\n";
        global_stream_lock.unlock();
        //delete props;
        return false;
      }

      if ((this->Options & Event::NoFormat) == Event::NoFormat) {
        this->setProperty("Data", std::string(props));

        //std::cout << "oh loook its an unformatted msg: " << std::string(props) << "\n";
      } else {
        std::vector<std::string> elems = split(props, ',');
        assert(elems.size() > 0 && elems.size() % 2 == 0);

        for (unsigned int i=0; i < elems.size(); i+=2)
          this->setProperty(elems[i], elems[i+1]);
      }

      //delete props;
    }

    // skip the footer
    //global_stream_lock.lock();
    //std::cout << in.size() << " bytes left\n";
    //global_stream_lock.unlock();
    //assert(in.size() == Event::FooterLength);
    in.consume(Event::FooterLength);

    //this->dump();

    return true;
  }

  void Event::toStream(boost::asio::streambuf& out) const {

    //std::cout << "pre-message dump: buffer has " << out.size() << "(expected 0), ";
    std::ostream stream(&out);

    std::string props = "";
    if (!this->Properties.empty()) {
      // if the event is raw, we've to dump only one property
      if ((this->Options & Event::NoFormat) == Event::NoFormat) {
        // must have this, otherwise discard
        assert(this->hasProperty("Data"));
        if (this->hasProperty("Data"))
          props = this->getProperty("Data");
      } else {
        // flatten properties
        property_t::const_iterator property;
        for (property = this->Properties.begin();
             property != this->Properties.end();
             ++property)
          props += property->first + "," + property->second + ",";

        props.erase(props.end()-1);
      }
    }

    stream << (unsigned char)this->UID;
    stream << (unsigned char)this->Options;
    stream << (unsigned char)this->Feedback;
    //stream.rdbuf()->sputn(stringify((uint16_t)props.size()).c_str(), 2);
    stream << (uint32_t)props.size() << " ";
    if (!props.empty()) {
      if ((this->Options & Event::Compressed) == Event::Compressed) {
        stream << (uint32_t)this->Rawsize << " ";
        global_stream_lock.lock();
        //std::cout << "dumping raw size of compressed event: " << this->Rawsize << "\n";
        global_stream_lock.unlock();
      }

      stream << Event::__CRC32(props) << " ";
      stream << props;
    }

    //std::cout << "outbound -> " << props << "\n";

    //~ std::cout << "Event properties: "
      //~ << props << " (size: " << (uint16_t)props.size()
      //~ << "->" << stringify((uint16_t)props.size()) << ")\n";

    stream << Event::Footer;
    //global_stream_lock.lock();
    //std::cout << "post-dump: " << out.size() << "bytes \n";
    //global_stream_lock.unlock();
  }

  std::string Event::__uidToString(unsigned char uid) {
    std::string suid = "";
    switch (uid) {
      case EventUID::Unassigned: suid = "Unassigned"; break;
      case EventUID::SanityCheck: suid = "SanityCheck"; break;
      default:
        suid = "Unknown event!!";
    }
    return suid;
  }

  std::ostream& operator<<(std::ostream& inStream, const Event& inE)
  {
    inStream << Event::__uidToString(inE.UID) << "#" << (int)inE.UID;
    return inStream;
  }

}
