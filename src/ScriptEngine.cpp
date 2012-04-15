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

#include "Hax/ScriptEngine.hpp"
#include "Hax/EventManager.hpp"
#include "Hax/Utility.hpp"

#include <stdarg.h>
#include <boost/bind.hpp>

TOLUA_API int  tolua_Hax_open (lua_State* tolua_S);

namespace Hax {

	ScriptEngine::ScriptEngine()
  : Logger("Script Engine"),
    Configurable({ "Script Engine" })
  {
    mLuaState = 0;
    fCorruptState = false;
		fSetup = false;
	}

	ScriptEngine::~ScriptEngine() {
		cleanup();

    mLog->infoStream() << "shutting down.";
	}

	bool ScriptEngine::setup() {
		if (fSetup)
			return true;

		mLog->infoStream() << "Setting up";

		// mLuaState = mCEGUILua->getLuaState();
    tolua_Hax_open(mLuaState);

    if (mConfig.InterceptEvents)
      bind(EventUID::Unassigned, boost::bind(&ScriptEngine::passToLua, this, _1));

		fSetup = true;

		return fSetup;
	}

	bool ScriptEngine::cleanup() {
    if (!fSetup)
      return true;

    if (isBound(EventUID::Unassigned))
      unbind(EventUID::Unassigned);
    
    // unbindAll();

    // Destroy the lua state
		mLuaState = 0;

    fSetup = false;

		return true;
	}

	void ScriptEngine::update( unsigned long lTimeElapsed ) {
		processEvents();

    if (mConfig.TickScript)
		  passToLua("Hax.update", 1, "unsigned long", lTimeElapsed);
	}

	lua_State* ScriptEngine::getLuaState() {
		return mLuaState;
	}

	void ScriptEngine::runScript(string_t const& inScript) {
    mLog->infoStream() << "Running script '" << inScript << "'";

    int lErrorCode = luaL_dofile(mLuaState, inScript.c_str());
    if (lErrorCode == 1) {
      string_t lError = lua_tostring(mLuaState, -1);
      mLog->errorStream() << "Lua: " << lError;
      lua_pop(mLuaState, -1);

      throw ScriptError("Unable to load script '" + inScript + "'; cause: " + lError);
    }
		try {

		} catch (std::exception& e) {
			mLog->errorStream() << "Could not execute script `" << inScript
				<< "' out of an unexpected exception; " << e.what();
		}
	}

	bool ScriptEngine::passToLua(const Event& inEvt) {
    return passToLua("Hax.onEvent", 1, "Hax::Event", &inEvt);
	}

  bool ScriptEngine::passToLua(const char* inFunc, int argc, ...) {
    if (fCorruptState)
    {
      mLog->warnStream() << "Lua state is corrupt, bailing out on method call " << inFunc;
      return false;
    }

    va_list argp;
    va_start(argp, argc);

		lua_getfield(mLuaState, LUA_GLOBALSINDEX, "Hax.arbitrary");
		if(!lua_isfunction(mLuaState, 1))
		{
			mLog->errorStream() << "could not find Lua arbitrary functor " << inFunc << "!";
      onError();
      return false;
		}

    lua_pushfstring(mLuaState, inFunc);
    for (int i=0; i < argc; ++i) {
      const char* argtype = (const char*)va_arg(argp, const char*);
      void* argv = (void*)va_arg(argp, void*);
      tolua_pushusertype(mLuaState,argv,argtype);
    }

    int ec = lua_pcall(mLuaState, argc+1, 1, 0);
    if (ec != 0)
    {
      // there was a lua error, dump the state and shut down the instance
      onError();
      return false;
    }

		bool result = lua_toboolean(mLuaState, lua_gettop(mLuaState));
		lua_remove(mLuaState, lua_gettop(mLuaState));

    va_end(argp);
    return result;
  }

  void ScriptEngine::onError()
  {
    // pop the error msg from the stack
    string_t lError = lua_tostring(mLuaState, lua_gettop(mLuaState));

    fCorruptState = true;

    // unbind any lua callers
    unbind(EventUID::Unassigned);

    mLog->errorStream() << "Lua Error: " << lError;

    // DEBUG: just die
    switch (mConfig.ErrorHandling) {
      case CATCH_AND_DIE:
        assert(false);
        break;
      case CATCH_AND_THROW:
        throw ScriptError("A Lua error occured: " + lError);
        break;
      case CATCH_AND_HOOK:
        {
          Event lEvt(EventUID::LuaError);
          lEvt.setProperty("Error", lError);
          EventManager::getSingleton().hook(lEvt);
        }
        break;
    }

    return;
  }

  void ScriptEngine::setDefaults() {
    mConfig.TickScript = true;
    mConfig.InterceptEvents = true;
    mConfig.ErrorHandling = CATCH_AND_DIE;
  }

  void ScriptEngine::setOption(string_t const& k, string_t const& v) {
    if (k == "Intercept Events") {
      mConfig.InterceptEvents = Utility::boolify(v);
    }
    else if (k == "Error Handling") {
      if (v == "Exception")
        mConfig.ErrorHandling = CATCH_AND_THROW;
      else if (v == "Notify")
        mConfig.ErrorHandling = CATCH_AND_HOOK;
      else if (v == "Die")
        mConfig.ErrorHandling = CATCH_AND_DIE;
      else {
        mLog->noticeStream() << "Invalid 'Error Handling' setting '" << v << "', defaulting to 'Die'";
      }
    }
    else if (k == "Tick Script") {
      mConfig.TickScript = Utility::boolify(v);
    }
    else {
      mLog->noticeStream() << "Unknown Script Engine setting '" << k << "', ignoring.";
    }
  }

}
