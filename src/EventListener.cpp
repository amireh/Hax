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

#include "Hax/EventListener.hpp"
#include "Hax/EventManager.hpp"

namespace Hax {

  int EventListener::gUIDGenerator = 0;

	EventListener::EventListener() {
    mUID = ++gUIDGenerator;
	}

	EventListener::~EventListener() {
    mEvtHandlers.clear();
    mTracker.clear();
    //while (!mEvents.empty())
    //  mEvents.pop();
	}

	bool EventListener::processEvents() {
    if (mEvents.empty())
      return true;

    const Event& evt = mEvents.front();

    //~ std::cout << "processing an evt " << (int)evt.UID << ": " << Event::_uid_to_string(evt.UID) << "\n";
    // fill our tracker with the handlers listening to this event
    if (mEvtHandlers.find(evt.UID) == mEvtHandlers.end() &&
        mEvtHandlers.find(EventUID::Unassigned) == mEvtHandlers.end()) {
      std::cout << "ERROR!! found no handlers!!\n";
      mEvents.pop();
      return true; // there r no handlers
    }

    // if the tracker isn't empty, it means one of the handlers wasn't done with
    // an earlier event
    if (mTracker.empty()) {
      EventHandlers_T::iterator finder = mEvtHandlers.find(evt.UID);
      if (finder != mEvtHandlers.end()) {
        std::vector<EventHandler_T>* handlers = &(finder->second);
        std::vector<EventHandler_T>::const_iterator handler;
        for (handler = handlers->begin();
             handler != handlers->end();
             ++handler)
          mTracker.push_back(*handler);

      }

      std::vector<EventHandler_T>::const_iterator handler;
      // handlers listening to all events
      for (handler = mEvtHandlers.find(EventUID::Unassigned)->second.begin();
           handler != mEvtHandlers.find(EventUID::Unassigned)->second.end();
           ++handler)
        mTracker.push_back((*handler));
    }

    // now call all the handlers, and remove the event only if they're all done
    bool done = true;
    for (tracker_t::iterator handler = mTracker.begin(); handler != mTracker.end(); ++handler)
      if ( (*handler)(evt) ) {
        tracker_t::iterator tmp = handler;
        ++handler;
        mTracker.erase(tmp);
      } else
        done = false;

    if (done)
      mEvents.pop();

    return done;
  }

  void EventListener::doSubscribe(EventUID_T evt) {
    EventManager::getSingleton().subscribe(evt, this);
  }
  void EventListener::doUnsubscribe(EventUID_T evt) {
    EventManager::getSingleton().unsubscribe(evt, this);
  }

  void EventListener::enqueue(const Event& inEvt) {
    mEvents.push(inEvt);
  }

  void EventListener::bind(EventUID_T inUID, EventHandler_T inHandler) {
    // register message if it isn't already
    EventHandlers_T::iterator lBinder = mEvtHandlers.find(inUID);

    if (lBinder == mEvtHandlers.end())
    {
      lBinder = mEvtHandlers.insert(make_pair(inUID, std::vector<EventHandler_T>())).first;
    }

    lBinder->second.push_back( inHandler );
    doSubscribe(inUID);
  }


  void EventListener::unbind(EventUID_T inUID) {
    mEvtHandlers.erase(inUID);
    doUnsubscribe(inUID);
  }

  void EventListener::unbindAll()
  {
    for (EventHandlers_T::iterator pair = mEvtHandlers.begin();
      pair != mEvtHandlers.end();
      ++pair)
    {
      EventManager::getSingleton().unsubscribe(pair->first, this);
    }
    mEvtHandlers.clear();
  }

  int EventListener::getUID() const { 
    return mUID;
  }

  bool EventListener::isBound(EventUID_T inUID) const {
    return mEvtHandlers.find(inUID) != mEvtHandlers.end();
  }

}
