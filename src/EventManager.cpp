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

#include "Hax/EventManager.hpp"
#include "Hax/EventListener.hpp"

namespace Hax {

	EventManager* EventManager::mInstance = NULL;

	EventManager::EventManager()
  : Logger("EventMgr")
  {
		mLog->noticeStream() << "up and running";
	}

	EventManager::~EventManager()
	{
		mLog->infoStream() << "shutting down";

		// clean up events
		while (!mEvents.empty())
			mEvents.pop();

		// clean up Listeners

		mInstance = 0;

		if (mLog)
			delete mLog;

		mLog = 0;
		//mIdCounter = 0;
	}

	EventManager* EventManager::getSingletonPtr() {
		return mInstance = (!mInstance) ? new EventManager() : mInstance;
	}

	EventManager& EventManager::getSingleton() {
		return *getSingletonPtr();
	}

	void EventManager::shutdown() {
		delete mInstance;
	}

  void EventManager::unsubscribe(unsigned char evt, EventListener* inListener)
  {
    if (mSubscriptions.find(evt) == mSubscriptions.end())
    {
      mLog->warnStream() << "attempting to unbind an unsubscribed event " << (int)evt;
      return;
    }

    subscribers_t& handlers = mSubscriptions.find(evt)->second;
    for (subscribers_t::iterator handler = handlers.begin();
      handler != handlers.end();
      ++handler)
      if ((*handler) == inListener)
      {
        handlers.erase(handler);
        break;
      }

  }
  void EventManager::update() {
    if (!mEvents.empty())
    {
      subscription_t::iterator subs = mSubscriptions.find(mEvents.front().UID);
      if (subs != mSubscriptions.end()) {
        subscribers_t *handlers = &(subs->second);
        subscribers_t::iterator handler;
        for (handler = handlers->begin();
             handler != handlers->end();
             ++handler) {
             //~ std::cout
              //~ << "enqueued an evt " << (int)mEvents.front().UID
              //~ << " to a listener " << (*handler)->getUID() << "\n";
             (*handler)->enqueue(mEvents.front());
           }
         }

      subs = mSubscriptions.find(EventUID::Unassigned);
      if (subs != mSubscriptions.end()) {
        subscribers_t *handlers = &(subs->second);
        subscribers_t::iterator handler;
        for (handler = handlers->begin();
             handler != handlers->end();
             ++handler) {
          //~ std::cout
            //~ << "enqueued an evt " << (int)mEvents.front().UID
            //~ << " to a full listener " << (*handler)->getUID() << "\n";
          (*handler)->enqueue(mEvents.front());
        }
      }

      mEvents.pop();
    }
  }

  void EventManager::clear()
  {
    while (!mEvents.empty())
      mEvents.pop();
  }
}
