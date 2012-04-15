/*
** Lua binding: OIS
** Generated automatically by tolua++-1.0.92 on Sun Apr 15 19:43:11 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_OIS_open (lua_State* tolua_S);

#include "OIS.h"
typedef std::string string_t;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"OIS::Keyboard");
 tolua_usertype(tolua_S,"OIS::KeyEvent");
}

/* get function: key of class  OIS::KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_OIS__KeyEvent_key
static int tolua_get_OIS__KeyEvent_key(lua_State* tolua_S)
{
  OIS::KeyEvent* self = (OIS::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'key'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->key);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  OIS::KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_OIS__KeyEvent_unsigned_text
static int tolua_get_OIS__KeyEvent_unsigned_text(lua_State* tolua_S)
{
  OIS::KeyEvent* self = (OIS::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->text);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  OIS::KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_OIS__KeyEvent_unsigned_text
static int tolua_set_OIS__KeyEvent_unsigned_text(lua_State* tolua_S)
{
  OIS::KeyEvent* self = (OIS::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->text = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_OIS_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"OIS",0);
  tolua_beginmodule(tolua_S,"OIS");
   tolua_constant(tolua_S,"KC_UNASSIGNED",OIS::KC_UNASSIGNED);
   tolua_constant(tolua_S,"KC_ESCAPE",OIS::KC_ESCAPE);
   tolua_constant(tolua_S,"KC_1",OIS::KC_1);
   tolua_constant(tolua_S,"KC_2",OIS::KC_2);
   tolua_constant(tolua_S,"KC_3",OIS::KC_3);
   tolua_constant(tolua_S,"KC_4",OIS::KC_4);
   tolua_constant(tolua_S,"KC_5",OIS::KC_5);
   tolua_constant(tolua_S,"KC_6",OIS::KC_6);
   tolua_constant(tolua_S,"KC_7",OIS::KC_7);
   tolua_constant(tolua_S,"KC_8",OIS::KC_8);
   tolua_constant(tolua_S,"KC_9",OIS::KC_9);
   tolua_constant(tolua_S,"KC_0",OIS::KC_0);
   tolua_constant(tolua_S,"KC_MINUS",OIS::KC_MINUS);
   tolua_constant(tolua_S,"KC_EQUALS",OIS::KC_EQUALS);
   tolua_constant(tolua_S,"KC_BACK",OIS::KC_BACK);
   tolua_constant(tolua_S,"KC_TAB",OIS::KC_TAB);
   tolua_constant(tolua_S,"KC_Q",OIS::KC_Q);
   tolua_constant(tolua_S,"KC_W",OIS::KC_W);
   tolua_constant(tolua_S,"KC_E",OIS::KC_E);
   tolua_constant(tolua_S,"KC_R",OIS::KC_R);
   tolua_constant(tolua_S,"KC_T",OIS::KC_T);
   tolua_constant(tolua_S,"KC_Y",OIS::KC_Y);
   tolua_constant(tolua_S,"KC_U",OIS::KC_U);
   tolua_constant(tolua_S,"KC_I",OIS::KC_I);
   tolua_constant(tolua_S,"KC_O",OIS::KC_O);
   tolua_constant(tolua_S,"KC_P",OIS::KC_P);
   tolua_constant(tolua_S,"KC_LBRACKET",OIS::KC_LBRACKET);
   tolua_constant(tolua_S,"KC_RBRACKET",OIS::KC_RBRACKET);
   tolua_constant(tolua_S,"KC_RETURN",OIS::KC_RETURN);
   tolua_constant(tolua_S,"KC_LCONTROL",OIS::KC_LCONTROL);
   tolua_constant(tolua_S,"KC_A",OIS::KC_A);
   tolua_constant(tolua_S,"KC_S",OIS::KC_S);
   tolua_constant(tolua_S,"KC_D",OIS::KC_D);
   tolua_constant(tolua_S,"KC_F",OIS::KC_F);
   tolua_constant(tolua_S,"KC_G",OIS::KC_G);
   tolua_constant(tolua_S,"KC_H",OIS::KC_H);
   tolua_constant(tolua_S,"KC_J",OIS::KC_J);
   tolua_constant(tolua_S,"KC_K",OIS::KC_K);
   tolua_constant(tolua_S,"KC_L",OIS::KC_L);
   tolua_constant(tolua_S,"KC_SEMICOLON",OIS::KC_SEMICOLON);
   tolua_constant(tolua_S,"KC_APOSTROPHE",OIS::KC_APOSTROPHE);
   tolua_constant(tolua_S,"KC_GRAVE",OIS::KC_GRAVE);
   tolua_constant(tolua_S,"KC_LSHIFT",OIS::KC_LSHIFT);
   tolua_constant(tolua_S,"KC_BACKSLASH",OIS::KC_BACKSLASH);
   tolua_constant(tolua_S,"KC_Z",OIS::KC_Z);
   tolua_constant(tolua_S,"KC_X",OIS::KC_X);
   tolua_constant(tolua_S,"KC_C",OIS::KC_C);
   tolua_constant(tolua_S,"KC_V",OIS::KC_V);
   tolua_constant(tolua_S,"KC_B",OIS::KC_B);
   tolua_constant(tolua_S,"KC_N",OIS::KC_N);
   tolua_constant(tolua_S,"KC_M",OIS::KC_M);
   tolua_constant(tolua_S,"KC_COMMA",OIS::KC_COMMA);
   tolua_constant(tolua_S,"KC_PERIOD",OIS::KC_PERIOD);
   tolua_constant(tolua_S,"KC_SLASH",OIS::KC_SLASH);
   tolua_constant(tolua_S,"KC_RSHIFT",OIS::KC_RSHIFT);
   tolua_constant(tolua_S,"KC_MULTIPLY",OIS::KC_MULTIPLY);
   tolua_constant(tolua_S,"KC_LMENU",OIS::KC_LMENU);
   tolua_constant(tolua_S,"KC_SPACE",OIS::KC_SPACE);
   tolua_constant(tolua_S,"KC_CAPITAL",OIS::KC_CAPITAL);
   tolua_constant(tolua_S,"KC_F1",OIS::KC_F1);
   tolua_constant(tolua_S,"KC_F2",OIS::KC_F2);
   tolua_constant(tolua_S,"KC_F3",OIS::KC_F3);
   tolua_constant(tolua_S,"KC_F4",OIS::KC_F4);
   tolua_constant(tolua_S,"KC_F5",OIS::KC_F5);
   tolua_constant(tolua_S,"KC_F6",OIS::KC_F6);
   tolua_constant(tolua_S,"KC_F7",OIS::KC_F7);
   tolua_constant(tolua_S,"KC_F8",OIS::KC_F8);
   tolua_constant(tolua_S,"KC_F9",OIS::KC_F9);
   tolua_constant(tolua_S,"KC_F10",OIS::KC_F10);
   tolua_constant(tolua_S,"KC_NUMLOCK",OIS::KC_NUMLOCK);
   tolua_constant(tolua_S,"KC_SCROLL",OIS::KC_SCROLL);
   tolua_constant(tolua_S,"KC_NUMPAD7",OIS::KC_NUMPAD7);
   tolua_constant(tolua_S,"KC_NUMPAD8",OIS::KC_NUMPAD8);
   tolua_constant(tolua_S,"KC_NUMPAD9",OIS::KC_NUMPAD9);
   tolua_constant(tolua_S,"KC_SUBTRACT",OIS::KC_SUBTRACT);
   tolua_constant(tolua_S,"KC_NUMPAD4",OIS::KC_NUMPAD4);
   tolua_constant(tolua_S,"KC_NUMPAD5",OIS::KC_NUMPAD5);
   tolua_constant(tolua_S,"KC_NUMPAD6",OIS::KC_NUMPAD6);
   tolua_constant(tolua_S,"KC_ADD",OIS::KC_ADD);
   tolua_constant(tolua_S,"KC_NUMPAD1",OIS::KC_NUMPAD1);
   tolua_constant(tolua_S,"KC_NUMPAD2",OIS::KC_NUMPAD2);
   tolua_constant(tolua_S,"KC_NUMPAD3",OIS::KC_NUMPAD3);
   tolua_constant(tolua_S,"KC_NUMPAD0",OIS::KC_NUMPAD0);
   tolua_constant(tolua_S,"KC_DECIMAL",OIS::KC_DECIMAL);
   tolua_constant(tolua_S,"KC_OEM_102",OIS::KC_OEM_102);
   tolua_constant(tolua_S,"KC_F11",OIS::KC_F11);
   tolua_constant(tolua_S,"KC_F12",OIS::KC_F12);
   tolua_constant(tolua_S,"KC_F13",OIS::KC_F13);
   tolua_constant(tolua_S,"KC_F14",OIS::KC_F14);
   tolua_constant(tolua_S,"KC_F15",OIS::KC_F15);
   tolua_constant(tolua_S,"KC_KANA",OIS::KC_KANA);
   tolua_constant(tolua_S,"KC_ABNT_C1",OIS::KC_ABNT_C1);
   tolua_constant(tolua_S,"KC_CONVERT",OIS::KC_CONVERT);
   tolua_constant(tolua_S,"KC_NOCONVERT",OIS::KC_NOCONVERT);
   tolua_constant(tolua_S,"KC_YEN",OIS::KC_YEN);
   tolua_constant(tolua_S,"KC_ABNT_C2",OIS::KC_ABNT_C2);
   tolua_constant(tolua_S,"KC_NUMPADEQUALS",OIS::KC_NUMPADEQUALS);
   tolua_constant(tolua_S,"KC_PREVTRACK",OIS::KC_PREVTRACK);
   tolua_constant(tolua_S,"KC_AT",OIS::KC_AT);
   tolua_constant(tolua_S,"KC_COLON",OIS::KC_COLON);
   tolua_constant(tolua_S,"KC_UNDERLINE",OIS::KC_UNDERLINE);
   tolua_constant(tolua_S,"KC_KANJI",OIS::KC_KANJI);
   tolua_constant(tolua_S,"KC_STOP",OIS::KC_STOP);
   tolua_constant(tolua_S,"KC_AX",OIS::KC_AX);
   tolua_constant(tolua_S,"KC_UNLABELED",OIS::KC_UNLABELED);
   tolua_constant(tolua_S,"KC_NEXTTRACK",OIS::KC_NEXTTRACK);
   tolua_constant(tolua_S,"KC_NUMPADENTER",OIS::KC_NUMPADENTER);
   tolua_constant(tolua_S,"KC_RCONTROL",OIS::KC_RCONTROL);
   tolua_constant(tolua_S,"KC_MUTE",OIS::KC_MUTE);
   tolua_constant(tolua_S,"KC_CALCULATOR",OIS::KC_CALCULATOR);
   tolua_constant(tolua_S,"KC_PLAYPAUSE",OIS::KC_PLAYPAUSE);
   tolua_constant(tolua_S,"KC_MEDIASTOP",OIS::KC_MEDIASTOP);
   tolua_constant(tolua_S,"KC_VOLUMEDOWN",OIS::KC_VOLUMEDOWN);
   tolua_constant(tolua_S,"KC_VOLUMEUP",OIS::KC_VOLUMEUP);
   tolua_constant(tolua_S,"KC_WEBHOME",OIS::KC_WEBHOME);
   tolua_constant(tolua_S,"KC_NUMPADCOMMA",OIS::KC_NUMPADCOMMA);
   tolua_constant(tolua_S,"KC_DIVIDE",OIS::KC_DIVIDE);
   tolua_constant(tolua_S,"KC_SYSRQ",OIS::KC_SYSRQ);
   tolua_constant(tolua_S,"KC_RMENU",OIS::KC_RMENU);
   tolua_constant(tolua_S,"KC_PAUSE",OIS::KC_PAUSE);
   tolua_constant(tolua_S,"KC_HOME",OIS::KC_HOME);
   tolua_constant(tolua_S,"KC_UP",OIS::KC_UP);
   tolua_constant(tolua_S,"KC_PGUP",OIS::KC_PGUP);
   tolua_constant(tolua_S,"KC_LEFT",OIS::KC_LEFT);
   tolua_constant(tolua_S,"KC_RIGHT",OIS::KC_RIGHT);
   tolua_constant(tolua_S,"KC_END",OIS::KC_END);
   tolua_constant(tolua_S,"KC_DOWN",OIS::KC_DOWN);
   tolua_constant(tolua_S,"KC_PGDOWN",OIS::KC_PGDOWN);
   tolua_constant(tolua_S,"KC_INSERT",OIS::KC_INSERT);
   tolua_constant(tolua_S,"KC_DELETE",OIS::KC_DELETE);
   tolua_constant(tolua_S,"KC_LWIN",OIS::KC_LWIN);
   tolua_constant(tolua_S,"KC_RWIN",OIS::KC_RWIN);
   tolua_constant(tolua_S,"KC_APPS",OIS::KC_APPS);
   tolua_constant(tolua_S,"KC_POWER",OIS::KC_POWER);
   tolua_constant(tolua_S,"KC_SLEEP",OIS::KC_SLEEP);
   tolua_constant(tolua_S,"KC_WAKE",OIS::KC_WAKE);
   tolua_constant(tolua_S,"KC_WEBSEARCH",OIS::KC_WEBSEARCH);
   tolua_constant(tolua_S,"KC_WEBFAVORITES",OIS::KC_WEBFAVORITES);
   tolua_constant(tolua_S,"KC_WEBREFRESH",OIS::KC_WEBREFRESH);
   tolua_constant(tolua_S,"KC_WEBSTOP",OIS::KC_WEBSTOP);
   tolua_constant(tolua_S,"KC_WEBFORWARD",OIS::KC_WEBFORWARD);
   tolua_constant(tolua_S,"KC_WEBBACK",OIS::KC_WEBBACK);
   tolua_constant(tolua_S,"KC_MYCOMPUTER",OIS::KC_MYCOMPUTER);
   tolua_constant(tolua_S,"KC_MAIL",OIS::KC_MAIL);
   tolua_constant(tolua_S,"KC_MEDIASELECT",OIS::KC_MEDIASELECT);
   tolua_cclass(tolua_S,"KeyEvent","OIS::KeyEvent","",NULL);
   tolua_beginmodule(tolua_S,"KeyEvent");
    tolua_variable(tolua_S,"key",tolua_get_OIS__KeyEvent_key,NULL);
    tolua_variable(tolua_S,"text",tolua_get_OIS__KeyEvent_unsigned_text,tolua_set_OIS__KeyEvent_unsigned_text);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Keyboard","OIS::Keyboard","",NULL);
   tolua_beginmodule(tolua_S,"Keyboard");
    tolua_constant(tolua_S,"Shift",OIS::Keyboard::Shift);
    tolua_constant(tolua_S,"Ctrl",OIS::Keyboard::Ctrl);
    tolua_constant(tolua_S,"Alt",OIS::Keyboard::Alt);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_OIS (lua_State* tolua_S) {
 return tolua_OIS_open(tolua_S);
};
#endif

