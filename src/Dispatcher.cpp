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

#include "Hax/Dispatcher.hpp"

namespace Hax {

  dispatcher::dispatcher(boost::asio::io_service& io_service)
  : strand_(io_service) {
  }

  dispatcher::~dispatcher() {
    events.clear();
  }

  void dispatcher::deliver(const Event& evt, bool immediate) {
    events.push_back(Event(evt));
    if (!immediate)
      strand_.post( boost::bind( &dispatcher::dispatch, this ) );
    else
      dispatch();
  }

  void dispatcher::dispatch() {
    assert(!events.empty());
    //const Event& evt = events.front();
    Event evt(events.front());
    events.pop_front();

    std::cout << "dispatching event: " << evt << "\n";
    evt_handlers_t::const_iterator handlers = evt_handlers_.find(evt.UID);
    std::vector<evt_handler_t>::const_iterator handler;
    if (handlers != evt_handlers_.end())
      for (handler = handlers->second.begin();
           handler != handlers->second.end();
           ++handler)
        (*handler)( evt );

    handlers = evt_handlers_.find(EventUID::Unassigned);
    if (handlers != evt_handlers_.end())
      for (handler = handlers->second.begin();
           handler != handlers->second.end();
           ++handler)
        (*handler)( evt );

  }

  void dispatcher::unbind(unsigned char evt)
  {
    assert(evt_handlers_.find(evt) != evt_handlers_.end());

    evt_handlers_.find(evt)->second.clear();
  }

  void dispatcher::reset()
  {
    evt_handlers_.clear();
    //events.clear();
  }
}
