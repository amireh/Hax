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
 
#ifndef H_HAX_SCRIPT_ENGINE_H
#define H_HAX_SCRIPT_ENGINE_H

#include "Hax/Engine.hpp"
#include "Hax/Logger.hpp"
#include "Hax/EventListener.hpp"
#include "Hax/Configurable.hpp"

// Lua
extern "C" {
	#include "lua.h"
	#include "lualib.h"
}

#include "tolua++.h"

namespace Hax {
  
	/**
   * @class ScriptEngine
	 * Manages the Lua state, loads scripts, injects Lua with events, 
   * and provides an interface for invoking Lua methods.
   *
   * The ScriptEngine subscribes to the "Script Engine" configuration context.
	 */
	class ScriptEngine
  : public Engine, 
    public EventListener, 
    public Logger, 
    public Configurable {
	public:

    ScriptEngine();
    ScriptEngine(const ScriptEngine& src) = delete;
    ScriptEngine& operator=(const ScriptEngine& rhs) = delete;
		virtual ~ScriptEngine();

    /** Builds the Lua state. */
		virtual bool setup();

    /** 
     * Injects the EventListener, processing any pending events and calls
     * the Lua tick method, "Hax.update" with the delta time as an argument.
     *
     * Invoking the tick method can be turned off by setting "Tick Script"
     * to "False" in the config.
     */
		virtual void update(unsigned long lTimeElapsed);

    /** Destroys the Lua state. */
		virtual bool cleanup();

    /** 
     * Loads and runs a Lua script found at the given path.
     *
     * Throws an exception of type Hax::ScriptError if the script
     * could not be loaded.
     */
		void runScript(string_t const& inScriptPath);

    /**
     * Invokes a Lua method called inFunc with the given argument set.
     *
     * Argument passing should be done in pairs for every argument: its type
     * as a string, then a pointer to the actual argument. 
     *
     * For example, to pass 1 argument of type "Hax::Object" to the function "Greet":
     * @code 
     *   passToLua("Greet", 1, "Hax::Object", &my_object);
     *
     * An exception of type ScriptError will be thrown if the specified
     * method could not be found, or there was a problem invoking it.
     *
     * @remarks
     * The actual invocation is done by a "router" method called Hax.arbitrator
     * that does the job of locating a method and passing the arguments in a
     * manner Lua understands.
     *
     * @return whatever the Lua method returns as boolean
     */
    virtual bool passToLua(const char* inFunc, int argc, ...);

    /** The underlying Lua state. */
    lua_State* getLuaState();

    /** Overriden from Hax::Configurable. */
    virtual void setOption(string_t const&, string_t const&);
    virtual void setDefaults();

  protected:
    lua_State* mLuaState;

    /** 
     * All events are automatically bound to be passed to Lua.
     * The Lua event handler is called "Hax.onEvent"
     *
     * If you want to override this default behaviour, set "Intercept Events" to "False"
     * in the "Script Engine" configuration context.
     */
		virtual bool passToLua(const Event& inEvt);

    /**
     * Retrieves the error message from the Lua stack, then decides
     * what to do with it based on the "Error Handling" setting.
     *
     * This is the behaviour based on the "Error Handling" setting:
     *  When it is set to "Exception", an exception of type ScriptError will be thrown
     *  When it is set to "Notify", an Event with UID::LuaError will be hooked
     *  When it is set to "Die", an assert(false) will be forced (default)
     **/
    virtual void onError();

    enum {
      CATCH_AND_DIE = 0,
      CATCH_AND_THROW,
      CATCH_AND_HOOK
    };

    /** Is the Lua state corrupt? */
    bool fCorruptState;

    struct {
      char ErrorHandling;
      bool InterceptEvents;
      bool TickScript;
    } mConfig;
	};
}
#endif
