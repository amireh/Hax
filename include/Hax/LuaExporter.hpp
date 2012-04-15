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
#ifndef H_HAX_LUA_EXPORTER_H
#define H_HAX_LUA_EXPORTER_H

#include "Hax/ScriptEngine.hpp"
// #include "Hax/Entity.hpp"

#include <vector>
#include <list>

namespace Hax {

  template <typename T>
  class LuaExporter {
    public:
      LuaExporter() { }
      virtual ~LuaExporter() {}

      inline virtual void
      __export(T const& container, const char* data_type, const char* out_table)
      {
        lua_State *lua = ScriptEngine::getSingleton().getLuaState();

        lua_newtable(lua); // declare the empty table out_table

        typename T::const_iterator cursor;
        int count = 0;
        for (cursor = container.begin(); cursor != container.end(); ++cursor)
        {
          lua_pushinteger(lua, (++count));
          tolua_pushusertype(lua, (void*)(*cursor), data_type);
          lua_settable(lua, -3);
        }

        lua_setglobal(lua, out_table);
      }
  };
}

#endif
