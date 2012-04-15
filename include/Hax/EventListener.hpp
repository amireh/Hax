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

#ifndef H_HAX_EVENT_LISTENER_H
#define H_HAX_EVENT_LISTENER_H

#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <list>
#include <queue>
#include <boost/bind.hpp>
#include <boost/function.hpp>

#include "Hax/Utility.hpp"
#include "Event.hpp"

using std::map;
using std::vector;
using std::pair;
using std::list;
using std::queue;
namespace Hax
{

  class EventManager;

  /** @class EventListener
   *
   *  @brief
   *  EventListener interfaces with EventManager for attaching events
   *	to handlers
   *
   *	Components interested in Events need to derive from this class.
   *	Using bind() children are able to register as many handlers
   *	as needed to a certain event.
   *
   *	@warning
   *	Modules subclassing EventListener MUST implement a VIRTUAL destructor!!!
   *
   *  @note
   *  Usage:
   *	You should never need to create or call an EventListener
   *  directly. Instead, derive from it and use bind()
   *
   *	Example:
   *
   *	@code
   *	class Foo : public EventListener {
   *		Foo();
   *		virtual ~Foo();
   *		bool bar(Event* inEvt);
   *	};
   *
   *	Foo::Foo() {
   *		bind<Foo>(EVT_SOMETHING, this, &Foo::bar);
   *	}
   *	\endcode
   *
   */
  class EventListener
  {
    public:
    typedef std::function<bool(const Event&)> EventHandler_T;

    EventListener();
    virtual ~EventListener();

    /** 
     * Injects the EventListener causing it to process any queued events,
     * you should do this when you update, step, or tick your components.
     *
     * @note
     * EventListeners MUST be injected (ticked, updated, whatever you call it)
     * or otherwise no handler will be called!
     */
    bool processEvents();

    /** Binds a handler to an event identified by the given UID. */
    void bind(EventUID_T, EventHandler_T);

    /** Unbinds all handlers assigned to an event. */
    void unbind(EventUID_T);

    /** Unbinds all event handlers. */
    void unbindAll();

    /** Are there any handlers bound for this event? */
    bool isBound(EventUID_T) const;

    /** An automatically generated UID for this EventListener. */
    int getUID() const;

  protected:
    friend class EventManager;
    
    /** 
     * Pushes an event to the end of this listener's event queue.
     *
     * This is done by the EventManager.
     */
    void enqueue(const Event& inEvt);

  private:
    static int gUIDGenerator;

    typedef std::map<EventUID_T, std::vector<EventHandler_T>> EventHandlers_T;
    EventHandlers_T mEvtHandlers;

    typedef std::list<EventHandler_T> tracker_t;
    tracker_t mTracker;

    queue<Event> mEvents; // processing queue

    int mUID;
  private:
    void doSubscribe(EventUID_T);
    void doUnsubscribe(EventUID_T);
  };
}
#endif // H_HAX_EVENT_LISTENER_H
