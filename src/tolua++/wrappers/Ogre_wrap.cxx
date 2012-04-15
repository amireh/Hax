/*
** Lua binding: Ogre
** Generated automatically by tolua++-1.0.92 on Sun Apr 15 19:43:11 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Ogre_open (lua_State* tolua_S);

#include <Ogre.h>
typedef std::string string_t;
#include "Ogre.h"
#include "Hax/Ogre/SdkCameraMan.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Ogre__Vector2 (lua_State* tolua_S)
{
 Ogre::Vector2* self = (Ogre::Vector2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__BillboardSet (lua_State* tolua_S)
{
 Ogre::BillboardSet* self = (Ogre::BillboardSet*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Plane (lua_State* tolua_S)
{
 Ogre::Plane* self = (Ogre::Plane*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__uint16 (lua_State* tolua_S)
{
 Ogre::uint16* self = (Ogre::uint16*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Radian (lua_State* tolua_S)
{
 Ogre::Radian* self = (Ogre::Radian*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__RenderWindow (lua_State* tolua_S)
{
 Ogre::RenderWindow* self = (Ogre::RenderWindow*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Quaternion (lua_State* tolua_S)
{
 Ogre::Quaternion* self = (Ogre::Quaternion*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__AxisAlignedBox (lua_State* tolua_S)
{
 Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__MeshPtr (lua_State* tolua_S)
{
 Ogre::MeshPtr* self = (Ogre::MeshPtr*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__ColourValue (lua_State* tolua_S)
{
 Ogre::ColourValue* self = (Ogre::ColourValue*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Any (lua_State* tolua_S)
{
 Ogre::Any* self = (Ogre::Any*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Angle (lua_State* tolua_S)
{
 Ogre::Angle* self = (Ogre::Angle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector3 (lua_State* tolua_S)
{
 Ogre::Vector3* self = (Ogre::Vector3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_OgreBites__SdkCameraMan (lua_State* tolua_S)
{
 OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Billboard (lua_State* tolua_S)
{
 Ogre::Billboard* self = (Ogre::Billboard*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Degree (lua_State* tolua_S)
{
 Ogre::Degree* self = (Ogre::Degree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__SharedPtr_Ogre__Resource_ (lua_State* tolua_S)
{
 Ogre::SharedPtr<Ogre::Resource>* self = (Ogre::SharedPtr<Ogre::Resource>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Light (lua_State* tolua_S)
{
 Ogre::Light* self = (Ogre::Light*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Camera (lua_State* tolua_S)
{
 Ogre::Camera* self = (Ogre::Camera*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Ogre::Vector2");
 tolua_usertype(tolua_S,"Ogre::RenderTarget");
 tolua_usertype(tolua_S,"Ogre::CompositorManager");
 tolua_usertype(tolua_S,"Ogre::Renderable");
 tolua_usertype(tolua_S,"Ogre::uint16");
 tolua_usertype(tolua_S,"Ogre::Radian");
 tolua_usertype(tolua_S,"Ogre::RenderWindow");
 tolua_usertype(tolua_S,"Ogre::SceneManager");
 tolua_usertype(tolua_S,"Ogre::AxisAlignedBox");
 tolua_usertype(tolua_S,"Ogre::ResourceGroupManager");
 tolua_usertype(tolua_S,"Ogre::Degree");
 tolua_usertype(tolua_S,"Ogre::CompositorLogic");
 tolua_usertype(tolua_S,"Ogre::Viewport");
 tolua_usertype(tolua_S,"size_t");
 tolua_usertype(tolua_S,"Ogre::Any");
 tolua_usertype(tolua_S,"Ogre::SubEntity");
 tolua_usertype(tolua_S,"Ogre::InstancedGeometry");
 tolua_usertype(tolua_S,"Ogre::RenderTarget::FrameStats");
 tolua_usertype(tolua_S,"Ogre::BillboardSet");
 tolua_usertype(tolua_S,"Ogre::Plane");
 tolua_usertype(tolua_S,"Ogre::RibbonTrail");
 tolua_usertype(tolua_S,"Ogre::CompositorInstance");
 tolua_usertype(tolua_S,"OgreBites::SdkCameraMan");
 tolua_usertype(tolua_S,"Ogre::Resource");
 tolua_usertype(tolua_S,"Ogre::Light");
 tolua_usertype(tolua_S,"Ogre::Quaternion");
 tolua_usertype(tolua_S,"Ogre::ResourceManager");
 tolua_usertype(tolua_S,"Ogre::SceneNode");
 tolua_usertype(tolua_S,"std::type_info");
 tolua_usertype(tolua_S,"Ogre::Billboard");
 tolua_usertype(tolua_S,"Ogre::ColourValue");
 tolua_usertype(tolua_S,"Ogre::SharedPtr<Ogre::Resource>");
 tolua_usertype(tolua_S,"Ogre::ManualResourceLoader");
 tolua_usertype(tolua_S,"Ogre::MeshManager");
 tolua_usertype(tolua_S,"Ogre::Angle");
 tolua_usertype(tolua_S,"Ogre::Vector3");
 tolua_usertype(tolua_S,"Ogre::MeshPtr");
 tolua_usertype(tolua_S,"Ogre::Entity");
 tolua_usertype(tolua_S,"Ogre::StaticGeometry");
 tolua_usertype(tolua_S,"Ogre::MovableObject");
 tolua_usertype(tolua_S,"Ogre::Node");
 tolua_usertype(tolua_S,"Ogre::Camera");
}

/* get function: x of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_x
static int tolua_get_Ogre__Vector2_x(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector2_x
static int tolua_set_Ogre__Vector2_x(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector2_y
static int tolua_get_Ogre__Vector2_y(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector2_y
static int tolua_set_Ogre__Vector2_y(lua_State* tolua_S)
{
  Ogre::Vector2* self = (Ogre::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new00
static int tolua_Ogre_Ogre_Vector2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(fX,fY));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new00_local
static int tolua_Ogre_Ogre_Vector2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(fX,fY));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new01
static int tolua_Ogre_Ogre_Vector2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scalar = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(scalar));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector2_new01_local
static int tolua_Ogre_Ogre_Vector2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scalar = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector2* tolua_ret = (Ogre::Vector2*)  Mtolua_new((Ogre::Vector2)(scalar));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_x
static int tolua_get_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_x
static int tolua_set_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_y
static int tolua_get_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_y
static int tolua_set_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_z
static int tolua_get_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_z
static int tolua_set_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_ZERO
static int tolua_get_Ogre__Vector3_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::ZERO,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_X
static int tolua_get_Ogre__Vector3_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Y
static int tolua_get_Ogre__Vector3_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Z
static int tolua_get_Ogre__Vector3_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_SCALE of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_SCALE
static int tolua_get_Ogre__Vector3_UNIT_SCALE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_SCALE,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new00
static int tolua_Ogre_Ogre_Vector3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new00_local
static int tolua_Ogre_Ogre_Vector3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float fX = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float fY = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float fZ = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new01
static int tolua_Ogre_Ogre_Vector3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scalar = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(scalar));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Vector3_new01_local
static int tolua_Ogre_Ogre_Vector3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float scalar = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(scalar));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Vector3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new00
static int tolua_Ogre_Ogre_Degree_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_new00_local
static int tolua_Ogre_Ogre_Degree_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueDegrees00
static int tolua_Ogre_Ogre_Degree_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueRadians00
static int tolua_Ogre_Ogre_Degree_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Degree_valueAngleUnits00
static int tolua_Ogre_Ogre_Degree_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new00
static int tolua_Ogre_Ogre_Radian_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float r = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new00_local
static int tolua_Ogre_Ogre_Radian_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float r = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new01
static int tolua_Ogre_Ogre_Radian_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_new01_local
static int tolua_Ogre_Ogre_Radian_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Radian_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueDegrees00
static int tolua_Ogre_Ogre_Radian_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueRadians00
static int tolua_Ogre_Ogre_Radian_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Radian_valueAngleUnits00
static int tolua_Ogre_Ogre_Radian_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle_new00
static int tolua_Ogre_Ogre_Angle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Angle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float angle = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Angle* tolua_ret = (Ogre::Angle*)  Mtolua_new((Ogre::Angle)(angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Angle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle_new00_local
static int tolua_Ogre_Ogre_Angle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Angle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   float angle = ((  float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Angle* tolua_ret = (Ogre::Angle*)  Mtolua_new((Ogre::Angle)(angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Angle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorRadian of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle__Radian00
static int tolua_Ogre_Ogre_Angle__Radian00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Angle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Angle* self = (const Ogre::Angle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorRadian'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator  Ogre::Radian();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Radian'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorDegree of class  Ogre::Angle */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Angle__Degree00
static int tolua_Ogre_Ogre_Angle__Degree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Angle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Angle* self = (const Ogre::Angle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorDegree'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator  Ogre::Degree();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.Degree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new00
static int tolua_Ogre_Ogre_Quaternion_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new00_local
static int tolua_Ogre_Ogre_Quaternion_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new01
static int tolua_Ogre_Ogre_Quaternion_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float fW = ((  float)  tolua_tonumber(tolua_S,2,0));
   float fX = ((  float)  tolua_tonumber(tolua_S,3,0));
   float fY = ((  float)  tolua_tonumber(tolua_S,4,0));
   float fZ = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new01_local
static int tolua_Ogre_Ogre_Quaternion_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float fW = ((  float)  tolua_tonumber(tolua_S,2,0));
   float fX = ((  float)  tolua_tonumber(tolua_S,3,0));
   float fY = ((  float)  tolua_tonumber(tolua_S,4,0));
   float fZ = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new02
static int tolua_Ogre_Ogre_Quaternion_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new02_local
static int tolua_Ogre_Ogre_Quaternion_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new03
static int tolua_Ogre_Ogre_Quaternion_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new03_local
static int tolua_Ogre_Ogre_Quaternion_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new04
static int tolua_Ogre_Ogre_Quaternion_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(akAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Quaternion_new04_local
static int tolua_Ogre_Ogre_Quaternion_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(akAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Quaternion_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_ZERO
static int tolua_get_Ogre__ColourValue_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::ZERO,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Black of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Black
static int tolua_get_Ogre__ColourValue_Black(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Black,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: White of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_White
static int tolua_get_Ogre__ColourValue_White(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::White,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Red of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Red
static int tolua_get_Ogre__ColourValue_Red(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Red,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Green of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Green
static int tolua_get_Ogre__ColourValue_Green(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Green,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Blue of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Blue
static int tolua_get_Ogre__ColourValue_Blue(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Blue,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_new00
static int tolua_Ogre_Ogre_ColourValue_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ColourValue_new00_local
static int tolua_Ogre_Ogre_ColourValue_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Plane_new00
static int tolua_Ogre_Ogre_Plane_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float fConstant = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,fConstant));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Plane_new00_local
static int tolua_Ogre_Ogre_Plane_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float fConstant = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,fConstant));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Plane_new01
static int tolua_Ogre_Ogre_Plane_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float a = ((  float)  tolua_tonumber(tolua_S,2,0));
   float b = ((  float)  tolua_tonumber(tolua_S,3,0));
   float c = ((  float)  tolua_tonumber(tolua_S,4,0));
   float d = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Plane_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Plane_new01_local
static int tolua_Ogre_Ogre_Plane_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float a = ((  float)  tolua_tonumber(tolua_S,2,0));
   float b = ((  float)  tolua_tonumber(tolua_S,3,0));
   float c = ((  float)  tolua_tonumber(tolua_S,4,0));
   float d = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Plane_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_new00
static int tolua_Ogre_Ogre_AxisAlignedBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_new00_local
static int tolua_Ogre_Ogre_AxisAlignedBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_getSize00
static int tolua_Ogre_Ogre_AxisAlignedBox_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaximum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_getMaximum00
static int tolua_Ogre_Ogre_AxisAlignedBox_getMaximum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaximum'", NULL);
#endif
  {
   Ogre::Vector3& tolua_ret = (Ogre::Vector3&)  self->getMaximum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaximum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinimum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_getMinimum00
static int tolua_Ogre_Ogre_AxisAlignedBox_getMinimum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinimum'", NULL);
#endif
  {
   Ogre::Vector3& tolua_ret = (Ogre::Vector3&)  self->getMinimum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinimum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenter of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_AxisAlignedBox_getCenter00
static int tolua_Ogre_Ogre_AxisAlignedBox_getCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenter'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getCenter();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRenderQueueGroup of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setRenderQueueGroup00
static int tolua_Ogre_Ogre_MovableObject_setRenderQueueGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
   int queueID = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRenderQueueGroup'", NULL);
#endif
  {
   self->setRenderQueueGroup(queueID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRenderQueueGroup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRenderQueueGroupAndPriority of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setRenderQueueGroupAndPriority00
static int tolua_Ogre_Ogre_MovableObject_setRenderQueueGroupAndPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
   int queueID = ((  int)  tolua_tonumber(tolua_S,2,0));
  unsigned short priority = (( unsigned short)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRenderQueueGroupAndPriority'", NULL);
#endif
  {
   self->setRenderQueueGroupAndPriority(queueID,priority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRenderQueueGroupAndPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_getBoundingBox00
static int tolua_Ogre_Ogre_MovableObject_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::MovableObject* self = (const Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
   Ogre::AxisAlignedBox& tolua_ret = (Ogre::AxisAlignedBox&)  self->getBoundingBox();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldBoundingBox of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_getWorldBoundingBox00
static int tolua_Ogre_Ogre_MovableObject_getWorldBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::MovableObject* self = (const Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
  bool derive = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldBoundingBox'", NULL);
#endif
  {
   Ogre::AxisAlignedBox tolua_ret = (Ogre::AxisAlignedBox)  self->getWorldBoundingBox(derive);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::AxisAlignedBox)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::AxisAlignedBox));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMovableType of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_getMovableType00
static int tolua_Ogre_Ogre_MovableObject_getMovableType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::MovableObject* self = (const Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMovableType'", NULL);
#endif
  {
     const std::string& tolua_ret = (   const std::string&)  self->getMovableType();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMovableType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setQueryFlags of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setQueryFlags00
static int tolua_Ogre_Ogre_MovableObject_setQueryFlags00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setQueryFlags'", NULL);
#endif
  {
   self->setQueryFlags(flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setQueryFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisibilityFlags of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setVisibilityFlags00
static int tolua_Ogre_Ogre_MovableObject_setVisibilityFlags00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisibilityFlags'", NULL);
#endif
  {
   self->setVisibilityFlags(flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisibilityFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserAny of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setUserAny00
static int tolua_Ogre_Ogre_MovableObject_setUserAny00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Any",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Any* anything = ((const Ogre::Any*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserAny'", NULL);
#endif
  {
   self->setUserAny(*anything);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserAny'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserAny of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_getUserAny00
static int tolua_Ogre_Ogre_MovableObject_getUserAny00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::MovableObject* self = (const Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserAny'", NULL);
#endif
  {
   const Ogre::Any& tolua_ret = (const Ogre::Any&)  self->getUserAny();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Any");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserAny'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCastShadows of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_setCastShadows00
static int tolua_Ogre_Ogre_MovableObject_setCastShadows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCastShadows'", NULL);
#endif
  {
   self->setCastShadows(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCastShadows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCastShadows of class  Ogre::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MovableObject_getCastShadows00
static int tolua_Ogre_Ogre_MovableObject_getCastShadows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MovableObject* self = (Ogre::MovableObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCastShadows'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getCastShadows();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCastShadows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getName00
static int tolua_Ogre_Ogre_Node_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
     const std::string& tolua_ret = (   const std::string&)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParent of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getParent00
static int tolua_Ogre_Ogre_Node_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParent'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->getParent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_setPosition00
static int tolua_Ogre_Ogre_Node_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* pos = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getPosition00
static int tolua_Ogre_Ogre_Node_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   Ogre::Vector3& tolua_ret = (Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_setScale00
static int tolua_Ogre_Ogre_Node_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* scale = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(*scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_setScale01
static int tolua_Ogre_Ogre_Node_setScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_setScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getScale00
static int tolua_Ogre_Ogre_Node_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getScale();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild00
static int tolua_Ogre_Ogre_Node_createChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild01
static int tolua_Ogre_Ogre_Node_createChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild(*translate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_createChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild02
static int tolua_Ogre_Ogre_Node_createChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Quaternion* rotate = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild(*translate,*rotate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_createChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild03
static int tolua_Ogre_Ogre_Node_createChild03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_createChild02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild04
static int tolua_Ogre_Ogre_Node_createChild04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild(name,*translate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_createChild03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_createChild05
static int tolua_Ogre_Ogre_Node_createChild05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rotate = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->createChild(name,*translate,*rotate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_createChild04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_addChild00
static int tolua_Ogre_Ogre_Node_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Node* child = ((Ogre::Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getChildAt00
static int tolua_Ogre_Ogre_Node_getChildAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->getChild(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: numChildren of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_numChildren00
static int tolua_Ogre_Ogre_Node_numChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'numChildren'", NULL);
#endif
  {
   int tolua_ret = (int)  self->numChildren();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'numChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_getChild00
static int tolua_Ogre_Ogre_Node_getChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Node",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Node* self = (const Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->getChild(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_removeChild00
static int tolua_Ogre_Ogre_Node_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  unsigned short index = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->removeChild(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_removeChild01
static int tolua_Ogre_Ogre_Node_removeChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Node* child = ((Ogre::Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->removeChild(child);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_removeChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_removeChild02
static int tolua_Ogre_Ogre_Node_removeChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   Ogre::Node* tolua_ret = (Ogre::Node*)  self->removeChild(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Node");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Node_removeChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  Ogre::Node */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Node_removeAllChildren00
static int tolua_Ogre_Ogre_Node_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Node* self = (Ogre::Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSubEntity of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_getSubEntity00
static int tolua_Ogre_Ogre_Entity_getSubEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Entity",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Entity* self = (const Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSubEntity'", NULL);
#endif
  {
   Ogre::SubEntity* tolua_ret = (Ogre::SubEntity*)  self->getSubEntity(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SubEntity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSubEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSubEntity of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_getSubEntity01
static int tolua_Ogre_Ogre_Entity_getSubEntity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Entity",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Entity* self = (const Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSubEntity'", NULL);
#endif
  {
   Ogre::SubEntity* tolua_ret = (Ogre::SubEntity*)  self->getSubEntity(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SubEntity");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Entity_getSubEntity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNumSubEntities of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_getNumSubEntities00
static int tolua_Ogre_Ogre_Entity_getNumSubEntities00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Entity* self = (const Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNumSubEntities'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getNumSubEntities();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNumSubEntities'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplaySkeleton of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_setDisplaySkeleton00
static int tolua_Ogre_Ogre_Entity_setDisplaySkeleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Entity",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Entity* self = (Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
  bool display = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplaySkeleton'", NULL);
#endif
  {
   self->setDisplaySkeleton(display);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplaySkeleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_setMaterialName00
static int tolua_Ogre_Ogre_Entity_setMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Entity",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Entity* self = (Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
  {
   self->setMaterialName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaterialName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  Ogre::Entity */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Entity_setMaterialName01
static int tolua_Ogre_Ogre_Entity_setMaterialName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Entity",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Entity* self = (Ogre::Entity*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
  {
   self->setMaterialName(name,groupName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Entity_setMaterialName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: yaw of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_yaw00
static int tolua_Ogre_Ogre_SceneNode_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree tolua_var_1 = *((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yaw'", NULL);
#endif
  {
   self->yaw(tolua_var_1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pitch of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_pitch00
static int tolua_Ogre_Ogre_SceneNode_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree tolua_var_2 = *((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pitch'", NULL);
#endif
  {
   self->pitch(tolua_var_2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: roll of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_roll00
static int tolua_Ogre_Ogre_SceneNode_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree tolua_var_3 = *((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'roll'", NULL);
#endif
  {
   self->roll(tolua_var_3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'roll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_attachObject00
static int tolua_Ogre_Ogre_SceneNode_attachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  Ogre::MovableObject* obj = ((Ogre::MovableObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachObject'", NULL);
#endif
  {
   self->attachObject(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'attachObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: numAttachedObjects of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_numAttachedObjects00
static int tolua_Ogre_Ogre_SceneNode_numAttachedObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneNode* self = (const Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'numAttachedObjects'", NULL);
#endif
  {
   unsigned short tolua_ret = (unsigned short)  self->numAttachedObjects();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'numAttachedObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttachedObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getAttachedObjectAt00
static int tolua_Ogre_Ogre_SceneNode_getAttachedObjectAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  unsigned short index = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttachedObject'", NULL);
#endif
  {
   Ogre::MovableObject* tolua_ret = (Ogre::MovableObject*)  self->getAttachedObject(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::MovableObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttachedObjectAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttachedObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getAttachedObject00
static int tolua_Ogre_Ogre_SceneNode_getAttachedObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttachedObject'", NULL);
#endif
  {
   Ogre::MovableObject* tolua_ret = (Ogre::MovableObject*)  self->getAttachedObject(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::MovableObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttachedObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_detachObject00
static int tolua_Ogre_Ogre_SceneNode_detachObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  unsigned short index = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachObject'", NULL);
#endif
  {
   Ogre::MovableObject* tolua_ret = (Ogre::MovableObject*)  self->detachObject(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::MovableObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'detachObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_detachObject01
static int tolua_Ogre_Ogre_SceneNode_detachObject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  Ogre::MovableObject* obj = ((Ogre::MovableObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachObject'", NULL);
#endif
  {
   self->detachObject(obj);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_detachObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachObject of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_detachObject02
static int tolua_Ogre_Ogre_SceneNode_detachObject02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachObject'", NULL);
#endif
  {
   Ogre::MovableObject* tolua_ret = (Ogre::MovableObject*)  self->detachObject(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::MovableObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_detachObject01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachAllObjects of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_detachAllObjects00
static int tolua_Ogre_Ogre_SceneNode_detachAllObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachAllObjects'", NULL);
#endif
  {
   self->detachAllObjects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'detachAllObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCreator of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getCreator00
static int tolua_Ogre_Ogre_SceneNode_getCreator00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneNode* self = (const Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCreator'", NULL);
#endif
  {
   Ogre::SceneManager* tolua_ret = (Ogre::SceneManager*)  self->getCreator();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCreator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode00
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createChildSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode01
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode(*translate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_createChildSceneNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode02
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Quaternion* rotate = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode(*translate,*rotate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_createChildSceneNode01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode03
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_createChildSceneNode02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode04
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode(name,*translate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_createChildSceneNode03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createChildSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_createChildSceneNode05
static int tolua_Ogre_Ogre_SceneNode_createChildSceneNode05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const Ogre::Vector3* translate = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rotate = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createChildSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createChildSceneNode(name,*translate,*rotate);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_createChildSceneNode04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAndDestroyChild of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild00
static int tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAndDestroyChild'", NULL);
#endif
  {
   self->removeAndDestroyChild(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAndDestroyChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAndDestroyChild of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild01
static int tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  unsigned short index = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAndDestroyChild'", NULL);
#endif
  {
   self->removeAndDestroyChild(index);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAndDestroyAllChildren of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_removeAndDestroyAllChildren00
static int tolua_Ogre_Ogre_SceneNode_removeAndDestroyAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAndDestroyAllChildren'", NULL);
#endif
  {
   self->removeAndDestroyAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAndDestroyAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showBoundingBox of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_showBoundingBox00
static int tolua_Ogre_Ogre_SceneNode_showBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool bShow = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showBoundingBox'", NULL);
#endif
  {
   self->showBoundingBox(bShow);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hideBoundingBox of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_hideBoundingBox00
static int tolua_Ogre_Ogre_SceneNode_hideBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool bHide = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hideBoundingBox'", NULL);
#endif
  {
   self->hideBoundingBox(bHide);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hideBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setDirection00
static int tolua_Ogre_Ogre_SceneNode_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,5,Ogre::Node::TS_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z,relativeTo);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setDirection01
static int tolua_Ogre_Ogre_SceneNode_setDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,5,0));
  const Ogre::Vector3* localDirectionVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z,relativeTo,*localDirectionVector);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setDirection02
static int tolua_Ogre_Ogre_SceneNode_setDirection02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,3,Ogre::Node::TS_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec,relativeTo);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setDirection01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setDirection03
static int tolua_Ogre_Ogre_SceneNode_setDirection03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,3,0));
  const Ogre::Vector3* localDirectionVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec,relativeTo,*localDirectionVector);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setDirection02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_lookAt00
static int tolua_Ogre_Ogre_SceneNode_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* targetPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(*targetPoint,relativeTo);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_lookAt01
static int tolua_Ogre_Ogre_SceneNode_lookAt01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* targetPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Node::TransformSpace relativeTo = ((Ogre::Node::TransformSpace) (int)  tolua_tonumber(tolua_S,3,0));
  const Ogre::Vector3* localDirectionVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(*targetPoint,relativeTo,*localDirectionVector);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_lookAt00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoTracking of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setAutoTracking00
static int tolua_Ogre_Ogre_SceneNode_setAutoTracking00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneNode",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoTracking'", NULL);
#endif
  {
   self->setAutoTracking(enabled,target);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoTracking'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoTracking of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setAutoTracking01
static int tolua_Ogre_Ogre_SceneNode_setAutoTracking01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* localDirectionVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoTracking'", NULL);
#endif
  {
   self->setAutoTracking(enabled,target,*localDirectionVector);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setAutoTracking00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoTracking of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setAutoTracking02
static int tolua_Ogre_Ogre_SceneNode_setAutoTracking02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* localDirectionVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector3* offset = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoTracking'", NULL);
#endif
  {
   self->setAutoTracking(enabled,target,*localDirectionVector,*offset);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setAutoTracking01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoTrackTarget of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getAutoTrackTarget00
static int tolua_Ogre_Ogre_SceneNode_getAutoTrackTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoTrackTarget'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getAutoTrackTarget();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoTrackTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoTrackOffset of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getAutoTrackOffset00
static int tolua_Ogre_Ogre_SceneNode_getAutoTrackOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoTrackOffset'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getAutoTrackOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoTrackOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoTrackLocalDirection of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getAutoTrackLocalDirection00
static int tolua_Ogre_Ogre_SceneNode_getAutoTrackLocalDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoTrackLocalDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getAutoTrackLocalDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoTrackLocalDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParentSceneNode of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_getParentSceneNode00
static int tolua_Ogre_Ogre_SceneNode_getParentSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneNode* self = (const Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParentSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getParentSceneNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParentSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setVisible00
static int tolua_Ogre_Ogre_SceneNode_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool cascade = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible,cascade);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: flipVisibility of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_flipVisibility00
static int tolua_Ogre_Ogre_SceneNode_flipVisibility00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  bool cascade = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'flipVisibility'", NULL);
#endif
  {
   self->flipVisibility(cascade);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'flipVisibility'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrientation of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setOrientation00
static int tolua_Ogre_Ogre_SceneNode_setOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* q = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrientation'", NULL);
#endif
  {
   self->setOrientation(*q);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrientation of class  Ogre::SceneNode */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneNode_setOrientation01
static int tolua_Ogre_Ogre_SceneNode_setOrientation01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneNode* self = (Ogre::SceneNode*)  tolua_tousertype(tolua_S,1,0);
   float w = ((  float)  tolua_tonumber(tolua_S,2,0));
   float x = ((  float)  tolua_tonumber(tolua_S,3,0));
   float y = ((  float)  tolua_tonumber(tolua_S,4,0));
   float z = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrientation'", NULL);
#endif
  {
   self->setOrientation(w,x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneNode_setOrientation00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_new00
static int tolua_Ogre_Ogre_Light_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  Mtolua_new((Ogre::Light)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_new00_local
static int tolua_Ogre_Ogre_Light_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  Mtolua_new((Ogre::Light)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_new01
static int tolua_Ogre_Ogre_Light_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  Mtolua_new((Ogre::Light)(name));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_new01_local
static int tolua_Ogre_Ogre_Light_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  Mtolua_new((Ogre::Light)(name));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_delete00
static int tolua_Ogre_Ogre_Light_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setType of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setType00
static int tolua_Ogre_Ogre_Light_setType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light::LightTypes type = ((Ogre::Light::LightTypes) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setType'", NULL);
#endif
  {
   self->setType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getType00
static int tolua_Ogre_Ogre_Light_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
  {
   Ogre::Light::LightTypes tolua_ret = (Ogre::Light::LightTypes)  self->getType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDiffuseColour00
static int tolua_Ogre_Ogre_Light_setDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float red = ((  float)  tolua_tonumber(tolua_S,2,0));
   float green = ((  float)  tolua_tonumber(tolua_S,3,0));
   float blue = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDiffuseColour'", NULL);
#endif
  {
   self->setDiffuseColour(red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDiffuseColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDiffuseColour01
static int tolua_Ogre_Ogre_Light_setDiffuseColour01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDiffuseColour'", NULL);
#endif
  {
   self->setDiffuseColour(*colour);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setDiffuseColour00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDiffuseColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDiffuseColour00
static int tolua_Ogre_Ogre_Light_getDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDiffuseColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getDiffuseColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDiffuseColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpecularColour00
static int tolua_Ogre_Ogre_Light_setSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float red = ((  float)  tolua_tonumber(tolua_S,2,0));
   float green = ((  float)  tolua_tonumber(tolua_S,3,0));
   float blue = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpecularColour'", NULL);
#endif
  {
   self->setSpecularColour(red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpecularColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpecularColour01
static int tolua_Ogre_Ogre_Light_setSpecularColour01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpecularColour'", NULL);
#endif
  {
   self->setSpecularColour(*colour);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setSpecularColour00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpecularColour of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpecularColour00
static int tolua_Ogre_Ogre_Light_getSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpecularColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getSpecularColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpecularColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttenuation of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setAttenuation00
static int tolua_Ogre_Ogre_Light_setAttenuation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float range = ((  float)  tolua_tonumber(tolua_S,2,0));
   float constant = ((  float)  tolua_tonumber(tolua_S,3,0));
   float linear = ((  float)  tolua_tonumber(tolua_S,4,0));
   float quadratic = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttenuation'", NULL);
#endif
  {
   self->setAttenuation(range,constant,linear,quadratic);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttenuation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationRange of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationRange00
static int tolua_Ogre_Ogre_Light_getAttenuationRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationRange'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationRange();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationConstant of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationConstant00
static int tolua_Ogre_Ogre_Light_getAttenuationConstant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationConstant'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationConstant();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationConstant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationLinear of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationLinear00
static int tolua_Ogre_Ogre_Light_getAttenuationLinear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationLinear'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationLinear();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationLinear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttenuationQuadric of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getAttenuationQuadric00
static int tolua_Ogre_Ogre_Light_getAttenuationQuadric00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttenuationQuadric'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getAttenuationQuadric();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttenuationQuadric'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPosition00
static int tolua_Ogre_Ogre_Light_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPosition01
static int tolua_Ogre_Ogre_Light_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getPosition00
static int tolua_Ogre_Ogre_Light_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDirection00
static int tolua_Ogre_Ogre_Light_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setDirection01
static int tolua_Ogre_Ogre_Light_setDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Light_setDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDirection00
static int tolua_Ogre_Ogre_Light_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightRange of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightRange00
static int tolua_Ogre_Ogre_Light_setSpotlightRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* innerAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* outerAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
   float falloff = ((  float)  tolua_tonumber(tolua_S,4,1.0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightRange'", NULL);
#endif
  {
   self->setSpotlightRange(*innerAngle,*outerAngle,falloff);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightInnerAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00
static int tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightInnerAngle'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->getSpotlightInnerAngle();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightInnerAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightOuterAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00
static int tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightOuterAngle'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->getSpotlightOuterAngle();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightOuterAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpotlightFalloff of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getSpotlightFalloff00
static int tolua_Ogre_Ogre_Light_getSpotlightFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpotlightFalloff'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getSpotlightFalloff();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpotlightFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightInnerAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00
static int tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* val = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightInnerAngle'", NULL);
#endif
  {
   self->setSpotlightInnerAngle(*val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightInnerAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightOuterAngle of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00
static int tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* val = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightOuterAngle'", NULL);
#endif
  {
   self->setSpotlightOuterAngle(*val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightOuterAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpotlightFalloff of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setSpotlightFalloff00
static int tolua_Ogre_Ogre_Light_setSpotlightFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float val = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpotlightFalloff'", NULL);
#endif
  {
   self->setSpotlightFalloff(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpotlightFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPowerScale of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setPowerScale00
static int tolua_Ogre_Ogre_Light_setPowerScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
   float power = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPowerScale'", NULL);
#endif
  {
   self->setPowerScale(power);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPowerScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPowerScale of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getPowerScale00
static int tolua_Ogre_Ogre_Light_getPowerScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPowerScale'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getPowerScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPowerScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getBoundingBox00
static int tolua_Ogre_Ogre_Light_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
   const Ogre::AxisAlignedBox& tolua_ret = (const Ogre::AxisAlignedBox&)  self->getBoundingBox();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::AxisAlignedBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMovableType of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getMovableType00
static int tolua_Ogre_Ogre_Light_getMovableType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMovableType'", NULL);
#endif
  {
     const std::string& tolua_ret = (   const std::string&)  self->getMovableType();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMovableType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedPosition of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDerivedPosition00
static int tolua_Ogre_Ogre_Light_getDerivedPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  bool cameraRelativeIfSet = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDerivedPosition(cameraRelativeIfSet);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDerivedDirection of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_getDerivedDirection00
static int tolua_Ogre_Ogre_Light_getDerivedDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Light* self = (const Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDerivedDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDerivedDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDerivedDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Ogre::Light */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Light_setVisible00
static int tolua_Ogre_Ogre_Light_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Light",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light* self = (Ogre::Light*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_new00
static int tolua_Ogre_Ogre_Camera_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Ogre::SceneManager* sm = ((Ogre::SceneManager*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  Mtolua_new((Ogre::Camera)(name,sm));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_new00_local
static int tolua_Ogre_Ogre_Camera_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Ogre::SceneManager* sm = ((Ogre::SceneManager*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  Mtolua_new((Ogre::Camera)(name,sm));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_delete00
static int tolua_Ogre_Ogre_Camera_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSceneManager of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getSceneManager00
static int tolua_Ogre_Ogre_Camera_getSceneManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSceneManager'", NULL);
#endif
  {
   Ogre::SceneManager* tolua_ret = (Ogre::SceneManager*)  self->getSceneManager();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSceneManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAspectRatio of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setAspectRatio00
static int tolua_Ogre_Ogre_Camera_setAspectRatio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float ratio = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAspectRatio'", NULL);
#endif
  {
   self->setAspectRatio(ratio);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAspectRatio'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNearClipDistance of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setNearClipDistance00
static int tolua_Ogre_Ogre_Camera_setNearClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float nearDist = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNearClipDistance'", NULL);
#endif
  {
   self->setNearClipDistance(nearDist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNearClipDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNearClipDistance of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getNearClipDistance00
static int tolua_Ogre_Ogre_Camera_getNearClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNearClipDistance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getNearClipDistance();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNearClipDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFarClipDistance of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setFarClipDistance00
static int tolua_Ogre_Ogre_Camera_setFarClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float farDist = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFarClipDistance'", NULL);
#endif
  {
   self->setFarClipDistance(farDist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFarClipDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFarClipDistance of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getFarClipDistance00
static int tolua_Ogre_Ogre_Camera_getFarClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFarClipDistance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getFarClipDistance();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFarClipDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPolygonMode of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setPolygonMode00
static int tolua_Ogre_Ogre_Camera_setPolygonMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  Ogre::PolygonMode sd = ((Ogre::PolygonMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPolygonMode'", NULL);
#endif
  {
   self->setPolygonMode(sd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPolygonMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPolygonMode of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getPolygonMode00
static int tolua_Ogre_Ogre_Camera_getPolygonMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPolygonMode'", NULL);
#endif
  {
   Ogre::PolygonMode tolua_ret = (Ogre::PolygonMode)  self->getPolygonMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPolygonMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setPosition00
static int tolua_Ogre_Ogre_Camera_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setPosition01
static int tolua_Ogre_Ogre_Camera_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getPosition00
static int tolua_Ogre_Ogre_Camera_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: move of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_move00
static int tolua_Ogre_Ogre_Camera_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'move'", NULL);
#endif
  {
   self->move(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveRelative of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_moveRelative00
static int tolua_Ogre_Ogre_Camera_moveRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveRelative'", NULL);
#endif
  {
   self->moveRelative(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveRelative'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setDirection00
static int tolua_Ogre_Ogre_Camera_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setDirection01
static int tolua_Ogre_Ogre_Camera_setDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getDirection00
static int tolua_Ogre_Ogre_Camera_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getDirection();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUp of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getUp00
static int tolua_Ogre_Ogre_Camera_getUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUp'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getUp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRight of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getRight00
static int tolua_Ogre_Ogre_Camera_getRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRight'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getRight();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_lookAt00
static int tolua_Ogre_Ogre_Camera_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* targetPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(*targetPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_lookAt01
static int tolua_Ogre_Ogre_Camera_lookAt01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_lookAt00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: roll of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_roll00
static int tolua_Ogre_Ogre_Camera_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'roll'", NULL);
#endif
  {
   self->roll(*angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'roll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yaw of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_yaw00
static int tolua_Ogre_Ogre_Camera_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yaw'", NULL);
#endif
  {
   self->yaw(*angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pitch of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_pitch00
static int tolua_Ogre_Ogre_Camera_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pitch'", NULL);
#endif
  {
   self->pitch(*angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_rotate00
static int tolua_Ogre_Ogre_Camera_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* axis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(*axis,*angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_rotate01
static int tolua_Ogre_Ogre_Camera_rotate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* q = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(*q);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_rotate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFixedYawAxis of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setFixedYawAxis00
static int tolua_Ogre_Ogre_Camera_setFixedYawAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool useFixed = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFixedYawAxis'", NULL);
#endif
  {
   self->setFixedYawAxis(useFixed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFixedYawAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFixedYawAxis of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setFixedYawAxis01
static int tolua_Ogre_Ogre_Camera_setFixedYawAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  bool useFixed = ((bool)  tolua_toboolean(tolua_S,2,0));
  const Ogre::Vector3* fixedAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFixedYawAxis'", NULL);
#endif
  {
   self->setFixedYawAxis(useFixed,*fixedAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Camera_setFixedYawAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getOrientation00
static int tolua_Ogre_Ogre_Camera_getOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOrientation'", NULL);
#endif
  {
   const Ogre::Quaternion& tolua_ret = (const Ogre::Quaternion&)  self->getOrientation();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrientation of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_setOrientation00
static int tolua_Ogre_Ogre_Camera_setOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* self = (Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* q = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrientation'", NULL);
#endif
  {
   self->setOrientation(*q);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getViewport of class  Ogre::Camera */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Camera_getViewport00
static int tolua_Ogre_Ogre_Camera_getViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Camera* self = (const Ogre::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getViewport'", NULL);
#endif
  {
   Ogre::Viewport* tolua_ret = (Ogre::Viewport*)  self->getViewport();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Viewport");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lastFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_lastFPS
static int tolua_get_Ogre__RenderTarget__FrameStats_lastFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lastFPS'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lastFPS);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lastFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_lastFPS
static int tolua_set_Ogre__RenderTarget__FrameStats_lastFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lastFPS'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lastFPS = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: avgFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_avgFPS
static int tolua_get_Ogre__RenderTarget__FrameStats_avgFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'avgFPS'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->avgFPS);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: avgFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_avgFPS
static int tolua_set_Ogre__RenderTarget__FrameStats_avgFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'avgFPS'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->avgFPS = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bestFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_bestFPS
static int tolua_get_Ogre__RenderTarget__FrameStats_bestFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bestFPS'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->bestFPS);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bestFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_bestFPS
static int tolua_set_Ogre__RenderTarget__FrameStats_bestFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bestFPS'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bestFPS = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: worstFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_worstFPS
static int tolua_get_Ogre__RenderTarget__FrameStats_worstFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worstFPS'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->worstFPS);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: worstFPS of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_worstFPS
static int tolua_set_Ogre__RenderTarget__FrameStats_worstFPS(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worstFPS'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->worstFPS = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bestFrameTime of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime
static int tolua_get_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bestFrameTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->bestFrameTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bestFrameTime of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime
static int tolua_set_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bestFrameTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bestFrameTime = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: worstFrameTime of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime
static int tolua_get_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worstFrameTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->worstFrameTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: worstFrameTime of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime
static int tolua_set_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worstFrameTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->worstFrameTime = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: triangleCount of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_triangleCount
static int tolua_get_Ogre__RenderTarget__FrameStats_triangleCount(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'triangleCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->triangleCount,"size_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: triangleCount of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_triangleCount
static int tolua_set_Ogre__RenderTarget__FrameStats_triangleCount(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'triangleCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"size_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->triangleCount = *((size_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: batchCount of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__RenderTarget__FrameStats_batchCount
static int tolua_get_Ogre__RenderTarget__FrameStats_batchCount(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'batchCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->batchCount,"size_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: batchCount of class  FrameStats */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__RenderTarget__FrameStats_batchCount
static int tolua_set_Ogre__RenderTarget__FrameStats_batchCount(lua_State* tolua_S)
{
  Ogre::RenderTarget::FrameStats* self = (Ogre::RenderTarget::FrameStats*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'batchCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"size_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->batchCount = *((size_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getName00
static int tolua_Ogre_Ogre_RenderTarget_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
     const std::string& tolua_ret = (   const std::string&)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMetrics of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getMetrics00
static int tolua_Ogre_Ogre_RenderTarget_getMetrics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int colourDepth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMetrics'", NULL);
#endif
  {
   self->getMetrics(width,height,colourDepth);
   tolua_pushnumber(tolua_S,(lua_Number)width);
   tolua_pushnumber(tolua_S,(lua_Number)height);
   tolua_pushnumber(tolua_S,(lua_Number)colourDepth);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMetrics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getWidth00
static int tolua_Ogre_Ogre_RenderTarget_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getHeight00
static int tolua_Ogre_Ogre_RenderTarget_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColourDepth of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getColourDepth00
static int tolua_Ogre_Ogre_RenderTarget_getColourDepth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColourDepth'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getColourDepth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColourDepth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeContentsToFile of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_writeContentsToFile00
static int tolua_Ogre_Ogre_RenderTarget_writeContentsToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeContentsToFile'", NULL);
#endif
  {
   self->writeContentsToFile(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeContentsToFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeContentsToTimestampedFile of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_writeContentsToTimestampedFile00
static int tolua_Ogre_Ogre_RenderTarget_writeContentsToTimestampedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const std::string filenamePrefix = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string filenameSuffix = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeContentsToTimestampedFile'", NULL);
#endif
  {
     std::string tolua_ret = (   std::string)  self->writeContentsToTimestampedFile(filenamePrefix,filenameSuffix);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeContentsToTimestampedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addViewport of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_addViewport00
static int tolua_Ogre_Ogre_RenderTarget_addViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
  int ZOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  float left = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float top = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  float width = ((float)  tolua_tonumber(tolua_S,6,1.0f));
  float height = ((float)  tolua_tonumber(tolua_S,7,1.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addViewport'", NULL);
#endif
  {
   Ogre::Viewport* tolua_ret = (Ogre::Viewport*)  self->addViewport(cam,ZOrder,left,top,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Viewport");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNumViewports of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getNumViewports00
static int tolua_Ogre_Ogre_RenderTarget_getNumViewports00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNumViewports'", NULL);
#endif
  {
   unsigned short tolua_ret = (unsigned short)  self->getNumViewports();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNumViewports'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getViewport of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getViewport00
static int tolua_Ogre_Ogre_RenderTarget_getViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  unsigned short index = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getViewport'", NULL);
#endif
  {
   Ogre::Viewport* tolua_ret = (Ogre::Viewport*)  self->getViewport(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Viewport");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getViewportByZOrder of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getViewportByZOrder00
static int tolua_Ogre_Ogre_RenderTarget_getViewportByZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  int ZOrder = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getViewportByZOrder'", NULL);
#endif
  {
   Ogre::Viewport* tolua_ret = (Ogre::Viewport*)  self->getViewportByZOrder(ZOrder);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Viewport");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getViewportByZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasViewportWithZOrder of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_hasViewportWithZOrder00
static int tolua_Ogre_Ogre_RenderTarget_hasViewportWithZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  int ZOrder = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasViewportWithZOrder'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasViewportWithZOrder(ZOrder);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasViewportWithZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeViewport of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_removeViewport00
static int tolua_Ogre_Ogre_RenderTarget_removeViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  int ZOrder = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeViewport'", NULL);
#endif
  {
   self->removeViewport(ZOrder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllViewports of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_removeAllViewports00
static int tolua_Ogre_Ogre_RenderTarget_removeAllViewports00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllViewports'", NULL);
#endif
  {
   self->removeAllViewports();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllViewports'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStatistics of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getStatistics00
static int tolua_Ogre_Ogre_RenderTarget_getStatistics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  float lastFPS = ((float)  tolua_tonumber(tolua_S,2,0));
  float avgFPS = ((float)  tolua_tonumber(tolua_S,3,0));
  float bestFPS = ((float)  tolua_tonumber(tolua_S,4,0));
  float worstFPS = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStatistics'", NULL);
#endif
  {
   self->getStatistics(lastFPS,avgFPS,bestFPS,worstFPS);
   tolua_pushnumber(tolua_S,(lua_Number)lastFPS);
   tolua_pushnumber(tolua_S,(lua_Number)avgFPS);
   tolua_pushnumber(tolua_S,(lua_Number)bestFPS);
   tolua_pushnumber(tolua_S,(lua_Number)worstFPS);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStatistics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStatistics of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getStatistics01
static int tolua_Ogre_Ogre_RenderTarget_getStatistics01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStatistics'", NULL);
#endif
  {
   const Ogre::RenderTarget::FrameStats& tolua_ret = (const Ogre::RenderTarget::FrameStats&)  self->getStatistics();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::RenderTarget::FrameStats");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_RenderTarget_getStatistics00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLastFPS of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getLastFPS00
static int tolua_Ogre_Ogre_RenderTarget_getLastFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLastFPS'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLastFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLastFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAverageFPS of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getAverageFPS00
static int tolua_Ogre_Ogre_RenderTarget_getAverageFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAverageFPS'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAverageFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAverageFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBestFPS of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getBestFPS00
static int tolua_Ogre_Ogre_RenderTarget_getBestFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBestFPS'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBestFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBestFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorstFPS of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getWorstFPS00
static int tolua_Ogre_Ogre_RenderTarget_getWorstFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorstFPS'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getWorstFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorstFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBestFrameTime of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getBestFrameTime00
static int tolua_Ogre_Ogre_RenderTarget_getBestFrameTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBestFrameTime'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBestFrameTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBestFrameTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorstFrameTime of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_getWorstFrameTime00
static int tolua_Ogre_Ogre_RenderTarget_getWorstFrameTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderTarget* self = (const Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorstFrameTime'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getWorstFrameTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorstFrameTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetStatistics of class  Ogre::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderTarget_resetStatistics00
static int tolua_Ogre_Ogre_RenderTarget_resetStatistics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderTarget* self = (Ogre::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetStatistics'", NULL);
#endif
  {
   self->resetStatistics();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetStatistics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFullscreen of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setFullscreen00
static int tolua_Ogre_Ogre_RenderWindow_setFullscreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  bool fullScreen = ((bool)  tolua_toboolean(tolua_S,2,0));
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFullscreen'", NULL);
#endif
  {
   self->setFullscreen(fullScreen,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFullscreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroy of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_destroy00
static int tolua_Ogre_Ogre_RenderWindow_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroy'", NULL);
#endif
  {
   self->destroy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_resize00
static int tolua_Ogre_Ogre_RenderWindow_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'", NULL);
#endif
  {
   self->resize(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: windowMovedOrResized of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_windowMovedOrResized00
static int tolua_Ogre_Ogre_RenderWindow_windowMovedOrResized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowMovedOrResized'", NULL);
#endif
  {
   self->windowMovedOrResized();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'windowMovedOrResized'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reposition of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_reposition00
static int tolua_Ogre_Ogre_RenderWindow_reposition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int top = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reposition'", NULL);
#endif
  {
   self->reposition(left,top);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reposition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVisible of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isVisible00
static int tolua_Ogre_Ogre_RenderWindow_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setVisible00
static int tolua_Ogre_Ogre_RenderWindow_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isHidden of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isHidden00
static int tolua_Ogre_Ogre_RenderWindow_isHidden00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHidden'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isHidden();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHidden'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHidden of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setHidden00
static int tolua_Ogre_Ogre_RenderWindow_setHidden00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  bool hidden = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHidden'", NULL);
#endif
  {
   self->setHidden(hidden);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHidden'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVSyncEnabled of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setVSyncEnabled00
static int tolua_Ogre_Ogre_RenderWindow_setVSyncEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  bool vsync = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVSyncEnabled'", NULL);
#endif
  {
   self->setVSyncEnabled(vsync);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVSyncEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVSyncEnabled of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isVSyncEnabled00
static int tolua_Ogre_Ogre_RenderWindow_isVSyncEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVSyncEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVSyncEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVSyncEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVSyncInterval of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setVSyncInterval00
static int tolua_Ogre_Ogre_RenderWindow_setVSyncInterval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  unsigned int interval = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVSyncInterval'", NULL);
#endif
  {
   self->setVSyncInterval(interval);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVSyncInterval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVSyncInterval of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_getVSyncInterval00
static int tolua_Ogre_Ogre_RenderWindow_getVSyncInterval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVSyncInterval'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getVSyncInterval();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVSyncInterval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isActive of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isActive00
static int tolua_Ogre_Ogre_RenderWindow_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClosed of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isClosed00
static int tolua_Ogre_Ogre_RenderWindow_isClosed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClosed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClosed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClosed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPrimary of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isPrimary00
static int tolua_Ogre_Ogre_RenderWindow_isPrimary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPrimary'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPrimary();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPrimary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFullScreen of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isFullScreen00
static int tolua_Ogre_Ogre_RenderWindow_isFullScreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFullScreen'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFullScreen();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFullScreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMetrics of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_getMetrics00
static int tolua_Ogre_Ogre_RenderWindow_getMetrics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int colourDepth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  int left = ((int)  tolua_tonumber(tolua_S,5,0));
  int top = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMetrics'", NULL);
#endif
  {
   self->getMetrics(width,height,colourDepth,left,top);
   tolua_pushnumber(tolua_S,(lua_Number)width);
   tolua_pushnumber(tolua_S,(lua_Number)height);
   tolua_pushnumber(tolua_S,(lua_Number)colourDepth);
   tolua_pushnumber(tolua_S,(lua_Number)left);
   tolua_pushnumber(tolua_S,(lua_Number)top);
  }
 }
 return 5;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMetrics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: suggestPixelFormat of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_suggestPixelFormat00
static int tolua_Ogre_Ogre_RenderWindow_suggestPixelFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'suggestPixelFormat'", NULL);
#endif
  {
   Ogre::PixelFormat tolua_ret = (Ogre::PixelFormat)  self->suggestPixelFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'suggestPixelFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDeactivatedOnFocusChange of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_isDeactivatedOnFocusChange00
static int tolua_Ogre_Ogre_RenderWindow_isDeactivatedOnFocusChange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::RenderWindow* self = (const Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDeactivatedOnFocusChange'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDeactivatedOnFocusChange();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDeactivatedOnFocusChange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeactivateOnFocusChange of class  Ogre::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_RenderWindow_setDeactivateOnFocusChange00
static int tolua_Ogre_Ogre_RenderWindow_setDeactivateOnFocusChange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::RenderWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::RenderWindow* self = (Ogre::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  bool deactivate = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeactivateOnFocusChange'", NULL);
#endif
  {
   self->setDeactivateOnFocusChange(deactivate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeactivateOnFocusChange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createCamera00
static int tolua_Ogre_Ogre_SceneManager_createCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->createCamera(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getCamera00
static int tolua_Ogre_Ogre_SceneManager_getCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->getCamera(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasCamera00
static int tolua_Ogre_Ogre_SceneManager_hasCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasCamera'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasCamera(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllCameras of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllCameras00
static int tolua_Ogre_Ogre_SceneManager_destroyAllCameras00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllCameras'", NULL);
#endif
  {
   self->destroyAllCameras();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllCameras'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyCamera of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyCamera00
static int tolua_Ogre_Ogre_SceneManager_destroyCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* tolua_var_4 = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyCamera'", NULL);
#endif
  {
   self->destroyCamera(tolua_var_4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createLight00
static int tolua_Ogre_Ogre_SceneManager_createLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createLight'", NULL);
#endif
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  self->createLight(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createLight01
static int tolua_Ogre_Ogre_SceneManager_createLight01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createLight'", NULL);
#endif
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  self->createLight();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createLight00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getLight00
static int tolua_Ogre_Ogre_SceneManager_getLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLight'", NULL);
#endif
  {
   Ogre::Light* tolua_ret = (Ogre::Light*)  self->getLight(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasLight00
static int tolua_Ogre_Ogre_SceneManager_hasLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasLight'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasLight(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyLight00
static int tolua_Ogre_Ogre_SceneManager_destroyLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyLight'", NULL);
#endif
  {
   self->destroyLight(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyLight01
static int tolua_Ogre_Ogre_SceneManager_destroyLight01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light* tolua_var_5 = ((Ogre::Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyLight'", NULL);
#endif
  {
   self->destroyLight(tolua_var_5);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyLight00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllLights of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllLights00
static int tolua_Ogre_Ogre_SceneManager_destroyAllLights00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllLights'", NULL);
#endif
  {
   self->destroyAllLights();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllLights'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAmbientLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setAmbientLight00
static int tolua_Ogre_Ogre_SceneManager_setAmbientLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAmbientLight'", NULL);
#endif
  {
   self->setAmbientLight(*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAmbientLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAmbientLight of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getAmbientLight00
static int tolua_Ogre_Ogre_SceneManager_getAmbientLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAmbientLight'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getAmbientLight();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAmbientLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWorldGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setWorldGeometry00
static int tolua_Ogre_Ogre_SceneManager_setWorldGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWorldGeometry'", NULL);
#endif
  {
   self->setWorldGeometry(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWorldGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearScene of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_clearScene00
static int tolua_Ogre_Ogre_SceneManager_clearScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearScene'", NULL);
#endif
  {
   self->clearScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createSceneNode00
static int tolua_Ogre_Ogre_SceneManager_createSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createSceneNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createSceneNode01
static int tolua_Ogre_Ogre_SceneManager_createSceneNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->createSceneNode(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createSceneNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroySceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroySceneNode00
static int tolua_Ogre_Ogre_SceneManager_destroySceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroySceneNode'", NULL);
#endif
  {
   self->destroySceneNode(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroySceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroySceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroySceneNode01
static int tolua_Ogre_Ogre_SceneManager_destroySceneNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::SceneNode* sn = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroySceneNode'", NULL);
#endif
  {
   self->destroySceneNode(sn);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroySceneNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRootSceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getRootSceneNode00
static int tolua_Ogre_Ogre_SceneManager_getRootSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRootSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getRootSceneNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRootSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getSceneNode00
static int tolua_Ogre_Ogre_SceneManager_getSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSceneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getSceneNode(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasSceneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasSceneNode00
static int tolua_Ogre_Ogre_SceneManager_hasSceneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasSceneNode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasSceneNode(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasSceneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createEntity00
static int tolua_Ogre_Ogre_SceneManager_createEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string entityName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string meshName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createEntity'", NULL);
#endif
  {
   Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->createEntity(entityName,meshName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createEntity01
static int tolua_Ogre_Ogre_SceneManager_createEntity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string entityName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string meshName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createEntity'", NULL);
#endif
  {
   Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->createEntity(entityName,meshName,groupName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createEntity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createEntity02
static int tolua_Ogre_Ogre_SceneManager_createEntity02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string meshName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createEntity'", NULL);
#endif
  {
   Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->createEntity(meshName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createEntity01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createPrefabEntity00
static int tolua_Ogre_Ogre_SceneManager_createPrefabEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string entityName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Ogre::SceneManager::PrefabType ptype = ((Ogre::SceneManager::PrefabType) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createEntity'", NULL);
#endif
  {
   Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->createEntity(entityName,ptype);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createPrefabEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getEntity00
static int tolua_Ogre_Ogre_SceneManager_getEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEntity'", NULL);
#endif
  {
   Ogre::Entity* tolua_ret = (Ogre::Entity*)  self->getEntity(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Entity");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasEntity00
static int tolua_Ogre_Ogre_SceneManager_hasEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasEntity'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasEntity(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyEntity00
static int tolua_Ogre_Ogre_SceneManager_destroyEntity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Entity",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Entity* ent = ((Ogre::Entity*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyEntity'", NULL);
#endif
  {
   self->destroyEntity(ent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyEntity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyEntity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyEntity01
static int tolua_Ogre_Ogre_SceneManager_destroyEntity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyEntity'", NULL);
#endif
  {
   self->destroyEntity(name);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyEntity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllEntities of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllEntities00
static int tolua_Ogre_Ogre_SceneManager_destroyAllEntities00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllEntities'", NULL);
#endif
  {
   self->destroyAllEntities();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllEntities'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyPlane of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyPlane00
static int tolua_Ogre_Ogre_SceneManager_setSkyPlane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,3,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
   float scale = ((  float)  tolua_tonumber(tolua_S,5,1000));
   float tiling = ((  float)  tolua_tonumber(tolua_S,6,10));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,7,true));
   float bow = ((  float)  tolua_tonumber(tolua_S,8,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,9,1));
  int ysegments = ((int)  tolua_tonumber(tolua_S,10,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyPlane'", NULL);
#endif
  {
   self->setSkyPlane(enable,*plane,materialName,scale,tiling,drawFirst,bow,xsegments,ysegments);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkyPlane'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyPlane of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyPlane01
static int tolua_Ogre_Ogre_SceneManager_setSkyPlane01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,11,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,3,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
   float scale = ((  float)  tolua_tonumber(tolua_S,5,0));
   float tiling = ((  float)  tolua_tonumber(tolua_S,6,0));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,7,0));
   float bow = ((  float)  tolua_tonumber(tolua_S,8,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,9,0));
  int ysegments = ((int)  tolua_tonumber(tolua_S,10,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,11,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyPlane'", NULL);
#endif
  {
   self->setSkyPlane(enable,*plane,materialName,scale,tiling,drawFirst,bow,xsegments,ysegments,groupName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setSkyPlane00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyPlaneEnabled of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyPlaneEnabled00
static int tolua_Ogre_Ogre_SceneManager_setSkyPlaneEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyPlaneEnabled'", NULL);
#endif
  {
   self->setSkyPlaneEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkyPlaneEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSkyPlaneEnabled of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_isSkyPlaneEnabled00
static int tolua_Ogre_Ogre_SceneManager_isSkyPlaneEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSkyPlaneEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSkyPlaneEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSkyPlaneEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSkyPlaneNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getSkyPlaneNode00
static int tolua_Ogre_Ogre_SceneManager_getSkyPlaneNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSkyPlaneNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getSkyPlaneNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSkyPlaneNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyBox of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyBox00
static int tolua_Ogre_Ogre_SceneManager_setSkyBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float distance = ((  float)  tolua_tonumber(tolua_S,4,5000));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,5,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyBox'", NULL);
#endif
  {
   self->setSkyBox(enable,materialName,distance,drawFirst);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkyBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyBox of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyBox01
static int tolua_Ogre_Ogre_SceneManager_setSkyBox01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float distance = ((  float)  tolua_tonumber(tolua_S,4,0));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,5,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyBox'", NULL);
#endif
  {
   self->setSkyBox(enable,materialName,distance,drawFirst,*orientation);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setSkyBox00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyBox of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyBox02
static int tolua_Ogre_Ogre_SceneManager_setSkyBox02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float distance = ((  float)  tolua_tonumber(tolua_S,4,0));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,5,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyBox'", NULL);
#endif
  {
   self->setSkyBox(enable,materialName,distance,drawFirst,*orientation,groupName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setSkyBox01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyBoxEnabled of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyBoxEnabled00
static int tolua_Ogre_Ogre_SceneManager_setSkyBoxEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyBoxEnabled'", NULL);
#endif
  {
   self->setSkyBoxEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkyBoxEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSkyBoxEnabled of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_isSkyBoxEnabled00
static int tolua_Ogre_Ogre_SceneManager_isSkyBoxEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSkyBoxEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSkyBoxEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSkyBoxEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSkyBoxNode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getSkyBoxNode00
static int tolua_Ogre_Ogre_SceneManager_getSkyBoxNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSkyBoxNode'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getSkyBoxNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSkyBoxNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyDome of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyDome00
static int tolua_Ogre_Ogre_SceneManager_setSkyDome00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float curvature = ((  float)  tolua_tonumber(tolua_S,4,10));
   float tiling = ((  float)  tolua_tonumber(tolua_S,5,8));
   float distance = ((  float)  tolua_tonumber(tolua_S,6,4000));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,7,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyDome'", NULL);
#endif
  {
   self->setSkyDome(enable,materialName,curvature,tiling,distance,drawFirst);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkyDome'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyDome of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyDome01
static int tolua_Ogre_Ogre_SceneManager_setSkyDome01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,8,&tolua_err) || !tolua_isusertype(tolua_S,8,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float curvature = ((  float)  tolua_tonumber(tolua_S,4,0));
   float tiling = ((  float)  tolua_tonumber(tolua_S,5,0));
   float distance = ((  float)  tolua_tonumber(tolua_S,6,0));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,7,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,8,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,9,16));
  int ysegments = ((int)  tolua_tonumber(tolua_S,10,16));
  int ysegments_keep = ((int)  tolua_tonumber(tolua_S,11,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyDome'", NULL);
#endif
  {
   self->setSkyDome(enable,materialName,curvature,tiling,distance,drawFirst,*orientation,xsegments,ysegments,ysegments_keep);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setSkyDome00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkyDome of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setSkyDome02
static int tolua_Ogre_Ogre_SceneManager_setSkyDome02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,8,&tolua_err) || !tolua_isusertype(tolua_S,8,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,12,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,13,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
  const std::string materialName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
   float curvature = ((  float)  tolua_tonumber(tolua_S,4,0));
   float tiling = ((  float)  tolua_tonumber(tolua_S,5,0));
   float distance = ((  float)  tolua_tonumber(tolua_S,6,0));
  bool drawFirst = ((bool)  tolua_toboolean(tolua_S,7,0));
  const Ogre::Quaternion* orientation = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,8,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,9,0));
  int ysegments = ((int)  tolua_tonumber(tolua_S,10,0));
  int ysegments_keep = ((int)  tolua_tonumber(tolua_S,11,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,12,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkyDome'", NULL);
#endif
  {
   self->setSkyDome(enable,materialName,curvature,tiling,distance,drawFirst,*orientation,xsegments,ysegments,ysegments_keep,groupName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setSkyDome01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFog of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setFog00
static int tolua_Ogre_Ogre_SceneManager_setFog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::FogMode mode = ((Ogre::FogMode) (int)  tolua_tonumber(tolua_S,2,Ogre::FOG_NONE));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFog'", NULL);
#endif
  {
   self->setFog(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFog of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setFog01
static int tolua_Ogre_Ogre_SceneManager_setFog01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::FogMode mode = ((Ogre::FogMode) (int)  tolua_tonumber(tolua_S,2,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,3,0));
   float expDensity = ((  float)  tolua_tonumber(tolua_S,4,0.001));
   float linearStart = ((  float)  tolua_tonumber(tolua_S,5,0.0));
   float linearEnd = ((  float)  tolua_tonumber(tolua_S,6,1.0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFog'", NULL);
#endif
  {
   self->setFog(mode,*colour,expDensity,linearStart,linearEnd);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_setFog00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFogMode of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getFogMode00
static int tolua_Ogre_Ogre_SceneManager_getFogMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFogMode'", NULL);
#endif
  {
   Ogre::FogMode tolua_ret = (Ogre::FogMode)  self->getFogMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFogMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFogColour of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getFogColour00
static int tolua_Ogre_Ogre_SceneManager_getFogColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFogColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getFogColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFogColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFogStart of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getFogStart00
static int tolua_Ogre_Ogre_SceneManager_getFogStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFogStart'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getFogStart();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFogStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFogEnd of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getFogEnd00
static int tolua_Ogre_Ogre_SceneManager_getFogEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFogEnd'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getFogEnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFogEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFogDensity of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getFogDensity00
static int tolua_Ogre_Ogre_SceneManager_getFogDensity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFogDensity'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getFogDensity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFogDensity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setShadowTechnique of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setShadowTechnique00
static int tolua_Ogre_Ogre_SceneManager_setShadowTechnique00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::ShadowTechnique technique = ((Ogre::ShadowTechnique) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShadowTechnique'", NULL);
#endif
  {
   self->setShadowTechnique(technique);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShadowTechnique'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getShadowTechnique of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getShadowTechnique00
static int tolua_Ogre_Ogre_SceneManager_getShadowTechnique00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getShadowTechnique'", NULL);
#endif
  {
   Ogre::ShadowTechnique tolua_ret = (Ogre::ShadowTechnique)  self->getShadowTechnique();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getShadowTechnique'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setShadowColour of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_setShadowColour00
static int tolua_Ogre_Ogre_SceneManager_setShadowColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShadowColour'", NULL);
#endif
  {
   self->setShadowColour(*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShadowColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getShadowColour of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getShadowColour00
static int tolua_Ogre_Ogre_SceneManager_getShadowColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getShadowColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getShadowColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getShadowColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createStaticGeometry00
static int tolua_Ogre_Ogre_SceneManager_createStaticGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createStaticGeometry'", NULL);
#endif
  {
   Ogre::StaticGeometry* tolua_ret = (Ogre::StaticGeometry*)  self->createStaticGeometry(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::StaticGeometry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStaticGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getStaticGeometry00
static int tolua_Ogre_Ogre_SceneManager_getStaticGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStaticGeometry'", NULL);
#endif
  {
   Ogre::StaticGeometry* tolua_ret = (Ogre::StaticGeometry*)  self->getStaticGeometry(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::StaticGeometry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStaticGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasStaticGeometry00
static int tolua_Ogre_Ogre_SceneManager_hasStaticGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasStaticGeometry'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasStaticGeometry(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasStaticGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry00
static int tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::StaticGeometry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::StaticGeometry* geom = ((Ogre::StaticGeometry*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyStaticGeometry'", NULL);
#endif
  {
   self->destroyStaticGeometry(geom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyStaticGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry01
static int tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyStaticGeometry'", NULL);
#endif
  {
   self->destroyStaticGeometry(name);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllStaticGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllStaticGeometry00
static int tolua_Ogre_Ogre_SceneManager_destroyAllStaticGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllStaticGeometry'", NULL);
#endif
  {
   self->destroyAllStaticGeometry();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllStaticGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createInstancedGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createInstancedGeometry00
static int tolua_Ogre_Ogre_SceneManager_createInstancedGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createInstancedGeometry'", NULL);
#endif
  {
   Ogre::InstancedGeometry* tolua_ret = (Ogre::InstancedGeometry*)  self->createInstancedGeometry(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::InstancedGeometry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createInstancedGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstancedGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getInstancedGeometry00
static int tolua_Ogre_Ogre_SceneManager_getInstancedGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInstancedGeometry'", NULL);
#endif
  {
   Ogre::InstancedGeometry* tolua_ret = (Ogre::InstancedGeometry*)  self->getInstancedGeometry(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::InstancedGeometry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstancedGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyInstancedGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry00
static int tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::InstancedGeometry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::InstancedGeometry* geom = ((Ogre::InstancedGeometry*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyInstancedGeometry'", NULL);
#endif
  {
   self->destroyInstancedGeometry(geom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyInstancedGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyInstancedGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry01
static int tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyInstancedGeometry'", NULL);
#endif
  {
   self->destroyInstancedGeometry(name);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllInstancedGeometry of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllInstancedGeometry00
static int tolua_Ogre_Ogre_SceneManager_destroyAllInstancedGeometry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllInstancedGeometry'", NULL);
#endif
  {
   self->destroyAllInstancedGeometry();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllInstancedGeometry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createRibbonTrail00
static int tolua_Ogre_Ogre_SceneManager_createRibbonTrail00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createRibbonTrail'", NULL);
#endif
  {
   Ogre::RibbonTrail* tolua_ret = (Ogre::RibbonTrail*)  self->createRibbonTrail(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::RibbonTrail");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createRibbonTrail'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createRibbonTrail01
static int tolua_Ogre_Ogre_SceneManager_createRibbonTrail01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createRibbonTrail'", NULL);
#endif
  {
   Ogre::RibbonTrail* tolua_ret = (Ogre::RibbonTrail*)  self->createRibbonTrail();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::RibbonTrail");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createRibbonTrail00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getRibbonTrail00
static int tolua_Ogre_Ogre_SceneManager_getRibbonTrail00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRibbonTrail'", NULL);
#endif
  {
   Ogre::RibbonTrail* tolua_ret = (Ogre::RibbonTrail*)  self->getRibbonTrail(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::RibbonTrail");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRibbonTrail'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasRibbonTrail00
static int tolua_Ogre_Ogre_SceneManager_hasRibbonTrail00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasRibbonTrail'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasRibbonTrail(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasRibbonTrail'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail00
static int tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::RibbonTrail",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::RibbonTrail* obj = ((Ogre::RibbonTrail*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyRibbonTrail'", NULL);
#endif
  {
   self->destroyRibbonTrail(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyRibbonTrail'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyRibbonTrail of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail01
static int tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyRibbonTrail'", NULL);
#endif
  {
   self->destroyRibbonTrail(name);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllRibbonTrails of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllRibbonTrails00
static int tolua_Ogre_Ogre_SceneManager_destroyAllRibbonTrails00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllRibbonTrails'", NULL);
#endif
  {
   self->destroyAllRibbonTrails();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllRibbonTrails'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createBillboardSet00
static int tolua_Ogre_Ogre_SceneManager_createBillboardSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int poolSize = ((unsigned int)  tolua_tonumber(tolua_S,3,20));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboardSet'", NULL);
#endif
  {
   Ogre::BillboardSet* tolua_ret = (Ogre::BillboardSet*)  self->createBillboardSet(name,poolSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::BillboardSet");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createBillboardSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_createBillboardSet01
static int tolua_Ogre_Ogre_SceneManager_createBillboardSet01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  unsigned int poolSize = ((unsigned int)  tolua_tonumber(tolua_S,2,20));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboardSet'", NULL);
#endif
  {
   Ogre::BillboardSet* tolua_ret = (Ogre::BillboardSet*)  self->createBillboardSet(poolSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::BillboardSet");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_createBillboardSet00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_getBillboardSet00
static int tolua_Ogre_Ogre_SceneManager_getBillboardSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBillboardSet'", NULL);
#endif
  {
   Ogre::BillboardSet* tolua_ret = (Ogre::BillboardSet*)  self->getBillboardSet(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::BillboardSet");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBillboardSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_hasBillboardSet00
static int tolua_Ogre_Ogre_SceneManager_hasBillboardSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::SceneManager* self = (const Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasBillboardSet'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasBillboardSet(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasBillboardSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyBillboardSet00
static int tolua_Ogre_Ogre_SceneManager_destroyBillboardSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::BillboardSet* set = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyBillboardSet'", NULL);
#endif
  {
   self->destroyBillboardSet(set);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyBillboardSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyBillboardSet of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyBillboardSet01
static int tolua_Ogre_Ogre_SceneManager_destroyBillboardSet01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyBillboardSet'", NULL);
#endif
  {
   self->destroyBillboardSet(name);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_SceneManager_destroyBillboardSet00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyAllBillboardSets of class  Ogre::SceneManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_SceneManager_destroyAllBillboardSets00
static int tolua_Ogre_Ogre_SceneManager_destroyAllBillboardSets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::SceneManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::SceneManager* self = (Ogre::SceneManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllBillboardSets'", NULL);
#endif
  {
   self->destroyAllBillboardSets();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllBillboardSets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActualDimensions of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getActualDimensions00
static int tolua_Ogre_Ogre_Viewport_getActualDimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int top = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActualDimensions'", NULL);
#endif
  {
   self->getActualDimensions(left,top,width,height);
   tolua_pushnumber(tolua_S,(lua_Number)left);
   tolua_pushnumber(tolua_S,(lua_Number)top);
   tolua_pushnumber(tolua_S,(lua_Number)width);
   tolua_pushnumber(tolua_S,(lua_Number)height);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActualDimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCamera of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getCamera00
static int tolua_Ogre_Ogre_Viewport_getCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->getCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCamera of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_setCamera00
static int tolua_Ogre_Ogre_Viewport_setCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Viewport",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Viewport* self = (Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCamera'", NULL);
#endif
  {
   self->setCamera(cam);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLeft of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getLeft00
static int tolua_Ogre_Ogre_Viewport_getLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLeft'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getLeft();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTop of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getTop00
static int tolua_Ogre_Ogre_Viewport_getTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTop'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getTop();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getWidth00
static int tolua_Ogre_Ogre_Viewport_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getHeight00
static int tolua_Ogre_Ogre_Viewport_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActualLeft of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getActualLeft00
static int tolua_Ogre_Ogre_Viewport_getActualLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActualLeft'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActualLeft();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActualLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActualTop of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getActualTop00
static int tolua_Ogre_Ogre_Viewport_getActualTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActualTop'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActualTop();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActualTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActualWidth of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getActualWidth00
static int tolua_Ogre_Ogre_Viewport_getActualWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActualWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActualWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActualWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActualHeight of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getActualHeight00
static int tolua_Ogre_Ogre_Viewport_getActualHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActualHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActualHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActualHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundColour of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_setBackgroundColour00
static int tolua_Ogre_Ogre_Viewport_setBackgroundColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Viewport",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Viewport* self = (Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColour'", NULL);
#endif
  {
   self->setBackgroundColour(*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundColour of class  Ogre::Viewport */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Viewport_getBackgroundColour00
static int tolua_Ogre_Ogre_Viewport_getBackgroundColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Viewport",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Viewport* self = (const Ogre::Viewport*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getBackgroundColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSingleton of class  Ogre::MeshManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MeshManager_getSingleton00
static int tolua_Ogre_Ogre_MeshManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::MeshManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::MeshManager& tolua_ret = (Ogre::MeshManager&)  Ogre::MeshManager::getSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::MeshManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createPlane of class  Ogre::MeshManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MeshManager_createPlane00
static int tolua_Ogre_Ogre_MeshManager_createPlane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MeshManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,9,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,13,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::MeshManager* self = (Ogre::MeshManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,4,0));
   float width = ((  float)  tolua_tonumber(tolua_S,5,0));
   float height = ((  float)  tolua_tonumber(tolua_S,6,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,7,1));
  int ysegments = ((int)  tolua_tonumber(tolua_S,8,1));
  bool normals = ((bool)  tolua_toboolean(tolua_S,9,true));
  unsigned short numTexCoordSets = ((unsigned short)  tolua_tonumber(tolua_S,10,1));
   float uTile = ((  float)  tolua_tonumber(tolua_S,11,1.0f));
   float vTile = ((  float)  tolua_tonumber(tolua_S,12,1.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createPlane'", NULL);
#endif
  {
   Ogre::MeshPtr tolua_ret = (Ogre::MeshPtr)  self->createPlane(name,groupName,*plane,width,height,xsegments,ysegments,normals,numTexCoordSets,uTile,vTile);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::MeshPtr)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::MeshPtr");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::MeshPtr));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::MeshPtr");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createPlane'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createPlane of class  Ogre::MeshManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_MeshManager_createPlane01
static int tolua_Ogre_Ogre_MeshManager_createPlane01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::MeshManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,13,&tolua_err) || !tolua_isusertype(tolua_S,13,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::MeshManager* self = (Ogre::MeshManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,4,0));
   float width = ((  float)  tolua_tonumber(tolua_S,5,0));
   float height = ((  float)  tolua_tonumber(tolua_S,6,0));
  int xsegments = ((int)  tolua_tonumber(tolua_S,7,0));
  int ysegments = ((int)  tolua_tonumber(tolua_S,8,0));
  bool normals = ((bool)  tolua_toboolean(tolua_S,9,0));
  unsigned short numTexCoordSets = ((unsigned short)  tolua_tonumber(tolua_S,10,0));
   float uTile = ((  float)  tolua_tonumber(tolua_S,11,0));
   float vTile = ((  float)  tolua_tonumber(tolua_S,12,0));
  const Ogre::Vector3* upVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,13,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createPlane'", NULL);
#endif
  {
   Ogre::MeshPtr tolua_ret = (Ogre::MeshPtr)  self->createPlane(name,groupName,*plane,width,height,xsegments,ysegments,normals,numTexCoordSets,uTile,vTile,*upVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::MeshPtr)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::MeshPtr");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::MeshPtr));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::MeshPtr");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_MeshManager_createPlane00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSingleton of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ResourceGroupManager_getSingleton00
static int tolua_Ogre_Ogre_ResourceGroupManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ResourceGroupManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::ResourceGroupManager& tolua_ret = (Ogre::ResourceGroupManager&)  Ogre::ResourceGroupManager::getSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::ResourceGroupManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: DEFAULT_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME
static int tolua_get_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
  tolua_pushcppstring(tolua_S,(const char*)Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: DEFAULT_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME
static int tolua_set_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: INTERNAL_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME
static int tolua_get_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
  tolua_pushcppstring(tolua_S,(const char*)Ogre::ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: INTERNAL_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME
static int tolua_set_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  Ogre::ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: AUTODETECT_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME
static int tolua_get_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
  tolua_pushcppstring(tolua_S,(const char*)Ogre::ResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: AUTODETECT_RESOURCE_GROUP_NAME of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME
static int tolua_set_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  Ogre::ResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS
static int tolua_get_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS,"size_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS of class  Ogre::ResourceGroupManager */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS
static int tolua_set_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"size_t",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  Ogre::ResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS = *((size_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  Ogre::ResourceManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ResourceManager_remove00
static int tolua_Ogre_Ogre_ResourceManager_remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ResourceManager* self = (Ogre::ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   self->remove(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resourceExists of class  Ogre::ResourceManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ResourceManager_resourceExists00
static int tolua_Ogre_Ogre_ResourceManager_resourceExists00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ResourceManager* self = (Ogre::ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resourceExists'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->resourceExists(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resourceExists'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: prepare of class  Ogre::ResourceManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ResourceManager_prepare00
static int tolua_Ogre_Ogre_ResourceManager_prepare00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ResourceManager* self = (Ogre::ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string group = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'prepare'", NULL);
#endif
  {
    Ogre::SharedPtr<Ogre::Resource> tolua_ret = (  Ogre::SharedPtr<Ogre::Resource>)  self->prepare(name,group);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::SharedPtr<Ogre::Resource>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::SharedPtr<Ogre::Resource>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::SharedPtr<Ogre::Resource>));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::SharedPtr<Ogre::Resource>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'prepare'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  Ogre::ResourceManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_ResourceManager_load00
static int tolua_Ogre_Ogre_ResourceManager_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ResourceManager* self = (Ogre::ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string group = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
    Ogre::SharedPtr<Ogre::Resource> tolua_ret = (  Ogre::SharedPtr<Ogre::Resource>)  self->load(name,group);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::SharedPtr<Ogre::Resource>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::SharedPtr<Ogre::Resource>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::SharedPtr<Ogre::Resource>));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::SharedPtr<Ogre::Resource>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initialise of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_initialise00
static int tolua_Ogre_Ogre_CompositorManager_initialise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initialise'", NULL);
#endif
  {
   self->initialise();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initialise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCompositor of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_addCompositor00
static int tolua_Ogre_Ogre_CompositorManager_addCompositor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Viewport",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Viewport* vp = ((Ogre::Viewport*)  tolua_tousertype(tolua_S,2,0));
  const std::string compositor = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  int addPosition = ((int)  tolua_tonumber(tolua_S,4,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCompositor'", NULL);
#endif
  {
   Ogre::CompositorInstance* tolua_ret = (Ogre::CompositorInstance*)  self->addCompositor(vp,compositor,addPosition);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::CompositorInstance");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCompositor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeCompositor of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_removeCompositor00
static int tolua_Ogre_Ogre_CompositorManager_removeCompositor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Viewport",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Viewport* vp = ((Ogre::Viewport*)  tolua_tousertype(tolua_S,2,0));
  const std::string compositor = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeCompositor'", NULL);
#endif
  {
   self->removeCompositor(vp,compositor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeCompositor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCompositorEnabled of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_setCompositorEnabled00
static int tolua_Ogre_Ogre_CompositorManager_setCompositorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Viewport",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Viewport* vp = ((Ogre::Viewport*)  tolua_tousertype(tolua_S,2,0));
  const std::string compositor = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  bool value = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCompositorEnabled'", NULL);
#endif
  {
   self->setCompositorEnabled(vp,compositor,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCompositorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: freePooledTextures of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_freePooledTextures00
static int tolua_Ogre_Ogre_CompositorManager_freePooledTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  bool onlyIfUnreferenced = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'freePooledTextures'", NULL);
#endif
  {
   self->freePooledTextures(onlyIfUnreferenced);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'freePooledTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerCompositorLogic of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_registerCompositorLogic00
static int tolua_Ogre_Ogre_CompositorManager_registerCompositorLogic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Ogre::CompositorLogic",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Ogre::CompositorLogic* logic = ((Ogre::CompositorLogic*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerCompositorLogic'", NULL);
#endif
  {
   self->registerCompositorLogic(name,logic);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerCompositorLogic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterCompositorLogic of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_unregisterCompositorLogic00
static int tolua_Ogre_Ogre_CompositorManager_unregisterCompositorLogic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterCompositorLogic'", NULL);
#endif
  {
   self->unregisterCompositorLogic(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterCompositorLogic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCompositorLogic of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_getCompositorLogic00
static int tolua_Ogre_Ogre_CompositorManager_getCompositorLogic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::CompositorManager* self = (Ogre::CompositorManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCompositorLogic'", NULL);
#endif
  {
   Ogre::CompositorLogic* tolua_ret = (Ogre::CompositorLogic*)  self->getCompositorLogic(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::CompositorLogic");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCompositorLogic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSingleton of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_getSingleton00
static int tolua_Ogre_Ogre_CompositorManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::CompositorManager& tolua_ret = (Ogre::CompositorManager&)  Ogre::CompositorManager::getSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::CompositorManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSingletonPtr of class  Ogre::CompositorManager */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_CompositorManager_getSingletonPtr00
static int tolua_Ogre_Ogre_CompositorManager_getSingletonPtr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::CompositorManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::CompositorManager* tolua_ret = (Ogre::CompositorManager*)  Ogre::CompositorManager::getSingletonPtr();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::CompositorManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingletonPtr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_new00
static int tolua_Ogre_Ogre_BillboardSet_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int poolSize = ((unsigned int)  tolua_tonumber(tolua_S,3,20));
  bool externalDataSource = ((bool)  tolua_toboolean(tolua_S,4,false));
  {
   Ogre::BillboardSet* tolua_ret = (Ogre::BillboardSet*)  Mtolua_new((Ogre::BillboardSet)(name,poolSize,externalDataSource));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::BillboardSet");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_new00_local
static int tolua_Ogre_Ogre_BillboardSet_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int poolSize = ((unsigned int)  tolua_tonumber(tolua_S,3,20));
  bool externalDataSource = ((bool)  tolua_toboolean(tolua_S,4,false));
  {
   Ogre::BillboardSet* tolua_ret = (Ogre::BillboardSet*)  Mtolua_new((Ogre::BillboardSet)(name,poolSize,externalDataSource));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::BillboardSet");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_delete00
static int tolua_Ogre_Ogre_BillboardSet_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_createBillboard00
static int tolua_Ogre_Ogre_BillboardSet_createBillboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboard'", NULL);
#endif
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  self->createBillboard(*position);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createBillboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_createBillboard01
static int tolua_Ogre_Ogre_BillboardSet_createBillboard01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboard'", NULL);
#endif
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  self->createBillboard(*position,*colour);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_BillboardSet_createBillboard00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_createBillboard02
static int tolua_Ogre_Ogre_BillboardSet_createBillboard02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboard'", NULL);
#endif
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  self->createBillboard(x,y,z);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_BillboardSet_createBillboard01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_createBillboard03
static int tolua_Ogre_Ogre_BillboardSet_createBillboard03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBillboard'", NULL);
#endif
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  self->createBillboard(x,y,z,*colour);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_BillboardSet_createBillboard02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNumBillboards of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getNumBillboards00
static int tolua_Ogre_Ogre_BillboardSet_getNumBillboards00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNumBillboards'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getNumBillboards();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNumBillboards'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoextend of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setAutoextend00
static int tolua_Ogre_Ogre_BillboardSet_setAutoextend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  bool autoextend = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoextend'", NULL);
#endif
  {
   self->setAutoextend(autoextend);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoextend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoextend of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getAutoextend00
static int tolua_Ogre_Ogre_BillboardSet_getAutoextend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoextend'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAutoextend();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoextend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSortingEnabled of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setSortingEnabled00
static int tolua_Ogre_Ogre_BillboardSet_setSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  bool sortenable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortingEnabled'", NULL);
#endif
  {
   self->setSortingEnabled(sortenable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSortingEnabled of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getSortingEnabled00
static int tolua_Ogre_Ogre_BillboardSet_getSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortingEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getSortingEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPoolSize of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setPoolSize00
static int tolua_Ogre_Ogre_BillboardSet_setPoolSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"size_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  size_t size = *((size_t*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPoolSize'", NULL);
#endif
  {
   self->setPoolSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPoolSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPoolSize of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getPoolSize00
static int tolua_Ogre_Ogre_BillboardSet_getPoolSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPoolSize'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getPoolSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPoolSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_clear00
static int tolua_Ogre_Ogre_BillboardSet_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getBillboard00
static int tolua_Ogre_Ogre_BillboardSet_getBillboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBillboard'", NULL);
#endif
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  self->getBillboard(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBillboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_removeBillboard00
static int tolua_Ogre_Ogre_BillboardSet_removeBillboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBillboard'", NULL);
#endif
  {
   self->removeBillboard(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBillboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBillboard of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_removeBillboard01
static int tolua_Ogre_Ogre_BillboardSet_removeBillboard01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Billboard* pBill = ((Ogre::Billboard*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBillboard'", NULL);
#endif
  {
   self->removeBillboard(pBill);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_BillboardSet_removeBillboard00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBillboardOrigin of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setBillboardOrigin00
static int tolua_Ogre_Ogre_BillboardSet_setBillboardOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  Ogre::BillboardOrigin origin = ((Ogre::BillboardOrigin) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBillboardOrigin'", NULL);
#endif
  {
   self->setBillboardOrigin(origin);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBillboardOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBillboardOrigin of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getBillboardOrigin00
static int tolua_Ogre_Ogre_BillboardSet_getBillboardOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBillboardOrigin'", NULL);
#endif
  {
   Ogre::BillboardOrigin tolua_ret = (Ogre::BillboardOrigin)  self->getBillboardOrigin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBillboardOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBillboardRotationType of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setBillboardRotationType00
static int tolua_Ogre_Ogre_BillboardSet_setBillboardRotationType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  Ogre::BillboardRotationType rotationType = ((Ogre::BillboardRotationType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBillboardRotationType'", NULL);
#endif
  {
   self->setBillboardRotationType(rotationType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBillboardRotationType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBillboardRotationType of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getBillboardRotationType00
static int tolua_Ogre_Ogre_BillboardSet_getBillboardRotationType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBillboardRotationType'", NULL);
#endif
  {
   Ogre::BillboardRotationType tolua_ret = (Ogre::BillboardRotationType)  self->getBillboardRotationType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBillboardRotationType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultDimensions of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setDefaultDimensions00
static int tolua_Ogre_Ogre_BillboardSet_setDefaultDimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
   float width = ((  float)  tolua_tonumber(tolua_S,2,0));
   float height = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultDimensions'", NULL);
#endif
  {
   self->setDefaultDimensions(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultDimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultWidth of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setDefaultWidth00
static int tolua_Ogre_Ogre_BillboardSet_setDefaultWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
   float width = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultWidth'", NULL);
#endif
  {
   self->setDefaultWidth(width);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDefaultWidth of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getDefaultWidth00
static int tolua_Ogre_Ogre_BillboardSet_getDefaultWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefaultWidth'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getDefaultWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefaultWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultHeight of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setDefaultHeight00
static int tolua_Ogre_Ogre_BillboardSet_setDefaultHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
   float height = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultHeight'", NULL);
#endif
  {
   self->setDefaultHeight(height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDefaultHeight of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getDefaultHeight00
static int tolua_Ogre_Ogre_BillboardSet_getDefaultHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefaultHeight'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getDefaultHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefaultHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setMaterialName00
static int tolua_Ogre_Ogre_BillboardSet_setMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
  {
   self->setMaterialName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaterialName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setMaterialName01
static int tolua_Ogre_Ogre_BillboardSet_setMaterialName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string groupName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
  {
   self->setMaterialName(name,groupName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_BillboardSet_setMaterialName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaterialName of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getMaterialName00
static int tolua_Ogre_Ogre_BillboardSet_getMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaterialName'", NULL);
#endif
  {
     const std::string& tolua_ret = (   const std::string&)  self->getMaterialName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaterialName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCullIndividually of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getCullIndividually00
static int tolua_Ogre_Ogre_BillboardSet_getCullIndividually00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCullIndividually'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getCullIndividually();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCullIndividually'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCullIndividually of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setCullIndividually00
static int tolua_Ogre_Ogre_BillboardSet_setCullIndividually00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  bool cullIndividual = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCullIndividually'", NULL);
#endif
  {
   self->setCullIndividually(cullIndividual);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCullIndividually'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBillboardType of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setBillboardType00
static int tolua_Ogre_Ogre_BillboardSet_setBillboardType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  Ogre::BillboardType bbt = ((Ogre::BillboardType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBillboardType'", NULL);
#endif
  {
   self->setBillboardType(bbt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBillboardType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBillboardType of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getBillboardType00
static int tolua_Ogre_Ogre_BillboardSet_getBillboardType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBillboardType'", NULL);
#endif
  {
   Ogre::BillboardType tolua_ret = (Ogre::BillboardType)  self->getBillboardType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBillboardType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCommonDirection of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setCommonDirection00
static int tolua_Ogre_Ogre_BillboardSet_setCommonDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCommonDirection'", NULL);
#endif
  {
   self->setCommonDirection(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCommonDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCommonDirection of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getCommonDirection00
static int tolua_Ogre_Ogre_BillboardSet_getCommonDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCommonDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getCommonDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCommonDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCommonUpVector of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_setCommonUpVector00
static int tolua_Ogre_Ogre_BillboardSet_setCommonUpVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCommonUpVector'", NULL);
#endif
  {
   self->setCommonUpVector(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCommonUpVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCommonUpVector of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_BillboardSet_getCommonUpVector00
static int tolua_Ogre_Ogre_BillboardSet_getCommonUpVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::BillboardSet* self = (const Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCommonUpVector'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getCommonUpVector();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCommonUpVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __Renderable__ of class  Ogre::BillboardSet */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__BillboardSet___Renderable__
static int tolua_get_Ogre__BillboardSet___Renderable__(lua_State* tolua_S)
{
  Ogre::BillboardSet* self = (Ogre::BillboardSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__Renderable__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<Ogre::Renderable*>(self), "Ogre::Renderable");
#else
   tolua_pushusertype(tolua_S,(void*)((Ogre::Renderable*)self), "Ogre::Renderable");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mPosition of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Billboard_mPosition
static int tolua_get_Ogre__Billboard_mPosition(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mPosition'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mPosition,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mPosition of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Billboard_mPosition
static int tolua_set_Ogre__Billboard_mPosition(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mPosition'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mPosition = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mDirection of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Billboard_mDirection
static int tolua_get_Ogre__Billboard_mDirection(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mDirection'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mDirection,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mDirection of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Billboard_mDirection
static int tolua_set_Ogre__Billboard_mDirection(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mDirection'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mDirection = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mParentSet of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Billboard_mParentSet_ptr
static int tolua_get_Ogre__Billboard_mParentSet_ptr(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mParentSet'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->mParentSet,"Ogre::BillboardSet");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mParentSet of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Billboard_mParentSet_ptr
static int tolua_set_Ogre__Billboard_mParentSet_ptr(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mParentSet'",NULL);
  if (!tolua_isusertype(tolua_S,2,"Ogre::BillboardSet",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mParentSet = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mColour of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Billboard_mColour
static int tolua_get_Ogre__Billboard_mColour(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mColour'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mColour,"Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mColour of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Billboard_mColour
static int tolua_set_Ogre__Billboard_mColour(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mColour'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mColour = *((Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mRotation of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Billboard_mRotation
static int tolua_get_Ogre__Billboard_mRotation(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mRotation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mRotation,"Ogre::Radian");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mRotation of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Billboard_mRotation
static int tolua_set_Ogre__Billboard_mRotation(lua_State* tolua_S)
{
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mRotation'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mRotation = *((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new00
static int tolua_Ogre_Ogre_Billboard_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new00_local
static int tolua_Ogre_Ogre_Billboard_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_delete00
static int tolua_Ogre_Ogre_Billboard_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new01
static int tolua_Ogre_Ogre_Billboard_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::BillboardSet* owner = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)(*position,owner));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Billboard_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new01_local
static int tolua_Ogre_Ogre_Billboard_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::BillboardSet* owner = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)(*position,owner));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Billboard_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new02
static int tolua_Ogre_Ogre_Billboard_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::BillboardSet* owner = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)(*position,owner,*colour));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Billboard_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_new02_local
static int tolua_Ogre_Ogre_Billboard_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Ogre::BillboardSet",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::BillboardSet* owner = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Billboard* tolua_ret = (Ogre::Billboard*)  Mtolua_new((Ogre::Billboard)(*position,owner,*colour));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Billboard");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Billboard_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getRotation00
static int tolua_Ogre_Ogre_Billboard_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   const Ogre::Radian& tolua_ret = (const Ogre::Radian&)  self->getRotation();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setRotation00
static int tolua_Ogre_Ogre_Billboard_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* rotation = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(*rotation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setPosition00
static int tolua_Ogre_Ogre_Billboard_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* position = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*position);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setPosition01
static int tolua_Ogre_Ogre_Billboard_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
   float x = ((  float)  tolua_tonumber(tolua_S,2,0));
   float y = ((  float)  tolua_tonumber(tolua_S,3,0));
   float z = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_Ogre_Billboard_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getPosition00
static int tolua_Ogre_Ogre_Billboard_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDimensions of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setDimensions00
static int tolua_Ogre_Ogre_Billboard_setDimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
   float width = ((  float)  tolua_tonumber(tolua_S,2,0));
   float height = ((  float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDimensions'", NULL);
#endif
  {
   self->setDimensions(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetDimensions of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_resetDimensions00
static int tolua_Ogre_Ogre_Billboard_resetDimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetDimensions'", NULL);
#endif
  {
   self->resetDimensions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetDimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColour of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setColour00
static int tolua_Ogre_Ogre_Billboard_setColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColour'", NULL);
#endif
  {
   self->setColour(*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColour of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getColour00
static int tolua_Ogre_Ogre_Billboard_getColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColour'", NULL);
#endif
  {
   const Ogre::ColourValue& tolua_ret = (const Ogre::ColourValue&)  self->getColour();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasOwnDimensions of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_hasOwnDimensions00
static int tolua_Ogre_Ogre_Billboard_hasOwnDimensions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasOwnDimensions'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasOwnDimensions();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasOwnDimensions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOwnWidth of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getOwnWidth00
static int tolua_Ogre_Ogre_Billboard_getOwnWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOwnWidth'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getOwnWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOwnWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOwnHeight of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getOwnHeight00
static int tolua_Ogre_Ogre_Billboard_getOwnHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOwnHeight'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getOwnHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOwnHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: _notifyOwner of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard__notifyOwner00
static int tolua_Ogre_Ogre_Billboard__notifyOwner00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::BillboardSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
  Ogre::BillboardSet* owner = ((Ogre::BillboardSet*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function '_notifyOwner'", NULL);
#endif
  {
   self->_notifyOwner(owner);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '_notifyOwner'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isUseTexcoordRect of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_isUseTexcoordRect00
static int tolua_Ogre_Ogre_Billboard_isUseTexcoordRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUseTexcoordRect'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isUseTexcoordRect();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUseTexcoordRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexcoordIndex of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setTexcoordIndex00
static int tolua_Ogre_Ogre_Billboard_setTexcoordIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::uint16",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
  Ogre::uint16 texcoordIndex = *((Ogre::uint16*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexcoordIndex'", NULL);
#endif
  {
   self->setTexcoordIndex(texcoordIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexcoordIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexcoordIndex of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_getTexcoordIndex00
static int tolua_Ogre_Ogre_Billboard_getTexcoordIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Billboard* self = (const Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexcoordIndex'", NULL);
#endif
  {
   Ogre::uint16 tolua_ret = (Ogre::uint16)  self->getTexcoordIndex();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::uint16)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::uint16");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::uint16));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::uint16");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexcoordIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexcoordRect of class  Ogre::Billboard */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Billboard_setTexcoordRect00
static int tolua_Ogre_Ogre_Billboard_setTexcoordRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Billboard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Billboard* self = (Ogre::Billboard*)  tolua_tousertype(tolua_S,1,0);
   float u0 = ((  float)  tolua_tonumber(tolua_S,2,0));
   float v0 = ((  float)  tolua_tonumber(tolua_S,3,0));
   float u1 = ((  float)  tolua_tonumber(tolua_S,4,0));
   float v1 = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexcoordRect'", NULL);
#endif
  {
   self->setTexcoordRect(u0,v0,u1,v1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexcoordRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_new00
static int tolua_Ogre_OgreBites_SdkCameraMan_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
  {
   OgreBites::SdkCameraMan* tolua_ret = (OgreBites::SdkCameraMan*)  Mtolua_new((OgreBites::SdkCameraMan)(cam));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"OgreBites::SdkCameraMan");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_new00_local
static int tolua_Ogre_OgreBites_SdkCameraMan_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
  {
   OgreBites::SdkCameraMan* tolua_ret = (OgreBites::SdkCameraMan*)  Mtolua_new((OgreBites::SdkCameraMan)(cam));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"OgreBites::SdkCameraMan");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCamera of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setCamera00
static int tolua_Ogre_OgreBites_SdkCameraMan_setCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* cam = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCamera'", NULL);
#endif
  {
   self->setCamera(cam);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCamera of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_getCamera00
static int tolua_Ogre_OgreBites_SdkCameraMan_getCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->getCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTarget of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setTarget00
static int tolua_Ogre_OgreBites_SdkCameraMan_setTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::SceneNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
  Ogre::SceneNode* target = ((Ogre::SceneNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTarget'", NULL);
#endif
  {
   self->setTarget(target);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTarget of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_getTarget00
static int tolua_Ogre_OgreBites_SdkCameraMan_getTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTarget'", NULL);
#endif
  {
   Ogre::SceneNode* tolua_ret = (Ogre::SceneNode*)  self->getTarget();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYawPitchDist of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist00
static int tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian yaw = *((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Radian pitch = *((Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
   float dist = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYawPitchDist'", NULL);
#endif
  {
   self->setYawPitchDist(yaw,pitch,dist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setYawPitchDist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYawPitchDist of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist01
static int tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Degree",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Degree yaw = *((Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Degree pitch = *((Ogre::Degree*)  tolua_tousertype(tolua_S,3,0));
   float dist = ((  float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYawPitchDist'", NULL);
#endif
  {
   self->setYawPitchDist(yaw,pitch,dist);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTopSpeed of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setTopSpeed00
static int tolua_Ogre_OgreBites_SdkCameraMan_setTopSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
   float topSpeed = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTopSpeed'", NULL);
#endif
  {
   self->setTopSpeed(topSpeed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTopSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTopSpeed of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_getTopSpeed00
static int tolua_Ogre_OgreBites_SdkCameraMan_getTopSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTopSpeed'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getTopSpeed();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTopSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStyle of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_setStyle00
static int tolua_Ogre_OgreBites_SdkCameraMan_setStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
  OgreBites::CameraStyle style = ((OgreBites::CameraStyle) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStyle'", NULL);
#endif
  {
   self->setStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStyle of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_getStyle00
static int tolua_Ogre_OgreBites_SdkCameraMan_getStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStyle'", NULL);
#endif
  {
   OgreBites::CameraStyle tolua_ret = (OgreBites::CameraStyle)  self->getStyle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: manualStop of class  OgreBites::SdkCameraMan */
#ifndef TOLUA_DISABLE_tolua_Ogre_OgreBites_SdkCameraMan_manualStop00
static int tolua_Ogre_OgreBites_SdkCameraMan_manualStop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"OgreBites::SdkCameraMan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  OgreBites::SdkCameraMan* self = (OgreBites::SdkCameraMan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'manualStop'", NULL);
#endif
  {
   self->manualStop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'manualStop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_new00
static int tolua_Ogre_Ogre_Any_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Any* tolua_ret = (Ogre::Any*)  Mtolua_new((Ogre::Any)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Any");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_new00_local
static int tolua_Ogre_Ogre_Any_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Any* tolua_ret = (Ogre::Any*)  Mtolua_new((Ogre::Any)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Any");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_new01
static int tolua_Ogre_Ogre_Any_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Any",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Any* other = ((const Ogre::Any*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Any* tolua_ret = (Ogre::Any*)  Mtolua_new((Ogre::Any)(*other));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Any");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Any_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_new01_local
static int tolua_Ogre_Ogre_Any_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Any",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Any* other = ((const Ogre::Any*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Any* tolua_ret = (Ogre::Any*)  Mtolua_new((Ogre::Any)(*other));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Any");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Ogre_Ogre_Any_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_delete00
static int tolua_Ogre_Ogre_Any_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Any* self = (Ogre::Any*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEmpty of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_isEmpty00
static int tolua_Ogre_Ogre_Any_isEmpty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Any* self = (const Ogre::Any*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEmpty'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEmpty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEmpty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_getType00
static int tolua_Ogre_Ogre_Any_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Any* self = (const Ogre::Any*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
  {
   const std::type_info& tolua_ret = (const std::type_info&)  self->getType();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::type_info");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroy of class  Ogre::Any */
#ifndef TOLUA_DISABLE_tolua_Ogre_Ogre_Any_destroy00
static int tolua_Ogre_Ogre_Any_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Any",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Any* self = (Ogre::Any*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroy'", NULL);
#endif
  {
   self->destroy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Ogre_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_constant(tolua_S,"PF_UNKNOWN",Ogre::PF_UNKNOWN);
   tolua_constant(tolua_S,"PF_L8",Ogre::PF_L8);
   tolua_constant(tolua_S,"PF_BYTE_L",Ogre::PF_BYTE_L);
   tolua_constant(tolua_S,"PF_L16",Ogre::PF_L16);
   tolua_constant(tolua_S,"PF_SHORT_L",Ogre::PF_SHORT_L);
   tolua_constant(tolua_S,"PF_A8",Ogre::PF_A8);
   tolua_constant(tolua_S,"PF_BYTE_A",Ogre::PF_BYTE_A);
   tolua_constant(tolua_S,"PF_A4L4",Ogre::PF_A4L4);
   tolua_constant(tolua_S,"PF_BYTE_LA",Ogre::PF_BYTE_LA);
   tolua_constant(tolua_S,"PF_R5G6B5",Ogre::PF_R5G6B5);
   tolua_constant(tolua_S,"PF_B5G6R5",Ogre::PF_B5G6R5);
   tolua_constant(tolua_S,"PF_R3G3B2",Ogre::PF_R3G3B2);
   tolua_constant(tolua_S,"PF_A4R4G4B4",Ogre::PF_A4R4G4B4);
   tolua_constant(tolua_S,"PF_A1R5G5B5",Ogre::PF_A1R5G5B5);
   tolua_constant(tolua_S,"PF_R8G8B8",Ogre::PF_R8G8B8);
   tolua_constant(tolua_S,"PF_B8G8R8",Ogre::PF_B8G8R8);
   tolua_constant(tolua_S,"PF_A8R8G8B8",Ogre::PF_A8R8G8B8);
   tolua_constant(tolua_S,"PF_A8B8G8R8",Ogre::PF_A8B8G8R8);
   tolua_constant(tolua_S,"PF_B8G8R8A8",Ogre::PF_B8G8R8A8);
   tolua_constant(tolua_S,"PF_R8G8B8A8",Ogre::PF_R8G8B8A8);
   tolua_constant(tolua_S,"PF_X8R8G8B8",Ogre::PF_X8R8G8B8);
   tolua_constant(tolua_S,"PF_X8B8G8R8",Ogre::PF_X8B8G8R8);
   tolua_constant(tolua_S,"PF_BYTE_RGB",Ogre::PF_BYTE_RGB);
   tolua_constant(tolua_S,"PF_BYTE_BGR",Ogre::PF_BYTE_BGR);
   tolua_constant(tolua_S,"PF_BYTE_BGRA",Ogre::PF_BYTE_BGRA);
   tolua_constant(tolua_S,"PF_BYTE_RGBA",Ogre::PF_BYTE_RGBA);
   tolua_constant(tolua_S,"PF_BYTE_RGB",Ogre::PF_BYTE_RGB);
   tolua_constant(tolua_S,"PF_BYTE_BGR",Ogre::PF_BYTE_BGR);
   tolua_constant(tolua_S,"PF_BYTE_BGRA",Ogre::PF_BYTE_BGRA);
   tolua_constant(tolua_S,"PF_BYTE_RGBA",Ogre::PF_BYTE_RGBA);
   tolua_constant(tolua_S,"PF_A2R10G10B10",Ogre::PF_A2R10G10B10);
   tolua_constant(tolua_S,"PF_A2B10G10R10",Ogre::PF_A2B10G10R10);
   tolua_constant(tolua_S,"PF_DXT1",Ogre::PF_DXT1);
   tolua_constant(tolua_S,"PF_DXT2",Ogre::PF_DXT2);
   tolua_constant(tolua_S,"PF_DXT3",Ogre::PF_DXT3);
   tolua_constant(tolua_S,"PF_DXT4",Ogre::PF_DXT4);
   tolua_constant(tolua_S,"PF_DXT5",Ogre::PF_DXT5);
   tolua_constant(tolua_S,"PF_FLOAT16_R",Ogre::PF_FLOAT16_R);
   tolua_constant(tolua_S,"PF_FLOAT16_RGB",Ogre::PF_FLOAT16_RGB);
   tolua_constant(tolua_S,"PF_FLOAT16_RGBA",Ogre::PF_FLOAT16_RGBA);
   tolua_constant(tolua_S,"PF_FLOAT32_R",Ogre::PF_FLOAT32_R);
   tolua_constant(tolua_S,"PF_FLOAT32_RGB",Ogre::PF_FLOAT32_RGB);
   tolua_constant(tolua_S,"PF_FLOAT32_RGBA",Ogre::PF_FLOAT32_RGBA);
   tolua_constant(tolua_S,"PF_FLOAT16_GR",Ogre::PF_FLOAT16_GR);
   tolua_constant(tolua_S,"PF_FLOAT32_GR",Ogre::PF_FLOAT32_GR);
   tolua_constant(tolua_S,"PF_DEPTH",Ogre::PF_DEPTH);
   tolua_constant(tolua_S,"PF_SHORT_RGBA",Ogre::PF_SHORT_RGBA);
   tolua_constant(tolua_S,"PF_SHORT_GR",Ogre::PF_SHORT_GR);
   tolua_constant(tolua_S,"PF_SHORT_RGB",Ogre::PF_SHORT_RGB);
   tolua_constant(tolua_S,"PF_PVRTC_RGB2",Ogre::PF_PVRTC_RGB2);
   tolua_constant(tolua_S,"PF_PVRTC_RGBA2",Ogre::PF_PVRTC_RGBA2);
   tolua_constant(tolua_S,"PF_PVRTC_RGB4",Ogre::PF_PVRTC_RGB4);
   tolua_constant(tolua_S,"PF_PVRTC_RGBA4",Ogre::PF_PVRTC_RGBA4);
   tolua_constant(tolua_S,"PF_COUNT",Ogre::PF_COUNT);
   tolua_constant(tolua_S,"PFF_HASALPHA",Ogre::PFF_HASALPHA);
   tolua_constant(tolua_S,"PFF_COMPRESSED",Ogre::PFF_COMPRESSED);
   tolua_constant(tolua_S,"PFF_FLOAT",Ogre::PFF_FLOAT);
   tolua_constant(tolua_S,"PFF_DEPTH",Ogre::PFF_DEPTH);
   tolua_constant(tolua_S,"PFF_NATIVEENDIAN",Ogre::PFF_NATIVEENDIAN);
   tolua_constant(tolua_S,"PFF_LUMINANCE",Ogre::PFF_LUMINANCE);
   tolua_constant(tolua_S,"PCT_BYTE",Ogre::PCT_BYTE);
   tolua_constant(tolua_S,"PCT_SHORT",Ogre::PCT_SHORT);
   tolua_constant(tolua_S,"PCT_FLOAT16",Ogre::PCT_FLOAT16);
   tolua_constant(tolua_S,"PCT_FLOAT32",Ogre::PCT_FLOAT32);
   tolua_constant(tolua_S,"PCT_COUNT",Ogre::PCT_COUNT);
   tolua_constant(tolua_S,"FOG_NONE",Ogre::FOG_NONE);
   tolua_constant(tolua_S,"FOG_EXP",Ogre::FOG_EXP);
   tolua_constant(tolua_S,"FOG_EXP2",Ogre::FOG_EXP2);
   tolua_constant(tolua_S,"FOG_LINEAR",Ogre::FOG_LINEAR);
   tolua_constant(tolua_S,"CULL_NONE",Ogre::CULL_NONE);
   tolua_constant(tolua_S,"CULL_CLOCKWISE",Ogre::CULL_CLOCKWISE);
   tolua_constant(tolua_S,"CULL_ANTICLOCKWISE",Ogre::CULL_ANTICLOCKWISE);
   tolua_constant(tolua_S,"MANUAL_CULL_NONE",Ogre::MANUAL_CULL_NONE);
   tolua_constant(tolua_S,"MANUAL_CULL_BACK",Ogre::MANUAL_CULL_BACK);
   tolua_constant(tolua_S,"MANUAL_CULL_FRONT",Ogre::MANUAL_CULL_FRONT);
   tolua_constant(tolua_S,"SHADOWTYPE_NONE",Ogre::SHADOWTYPE_NONE);
   tolua_constant(tolua_S,"SHADOWDETAILTYPE_ADDITIVE",Ogre::SHADOWDETAILTYPE_ADDITIVE);
   tolua_constant(tolua_S,"SHADOWDETAILTYPE_MODULATIVE",Ogre::SHADOWDETAILTYPE_MODULATIVE);
   tolua_constant(tolua_S,"SHADOWDETAILTYPE_INTEGRATED",Ogre::SHADOWDETAILTYPE_INTEGRATED);
   tolua_constant(tolua_S,"SHADOWDETAILTYPE_STENCIL",Ogre::SHADOWDETAILTYPE_STENCIL);
   tolua_constant(tolua_S,"SHADOWDETAILTYPE_TEXTURE",Ogre::SHADOWDETAILTYPE_TEXTURE);
   tolua_constant(tolua_S,"SHADOWTYPE_STENCIL_MODULATIVE",Ogre::SHADOWTYPE_STENCIL_MODULATIVE);
   tolua_constant(tolua_S,"SHADOWTYPE_STENCIL_ADDITIVE",Ogre::SHADOWTYPE_STENCIL_ADDITIVE);
   tolua_constant(tolua_S,"SHADOWTYPE_TEXTURE_MODULATIVE",Ogre::SHADOWTYPE_TEXTURE_MODULATIVE);
   tolua_constant(tolua_S,"SHADOWTYPE_TEXTURE_ADDITIVE",Ogre::SHADOWTYPE_TEXTURE_ADDITIVE);
   tolua_constant(tolua_S,"SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED",Ogre::SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED);
   tolua_constant(tolua_S,"SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED",Ogre::SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED);
   tolua_constant(tolua_S,"PM_POINTS",Ogre::PM_POINTS);
   tolua_constant(tolua_S,"PM_WIREFRAME",Ogre::PM_WIREFRAME);
   tolua_constant(tolua_S,"PM_SOLID",Ogre::PM_SOLID);
   tolua_constant(tolua_S,"RENDER_QUEUE_BACKGROUND",Ogre::RENDER_QUEUE_BACKGROUND);
   tolua_constant(tolua_S,"RENDER_QUEUE_SKIES_EARLY",Ogre::RENDER_QUEUE_SKIES_EARLY);
   tolua_constant(tolua_S,"RENDER_QUEUE_1",Ogre::RENDER_QUEUE_1);
   tolua_constant(tolua_S,"RENDER_QUEUE_2",Ogre::RENDER_QUEUE_2);
   tolua_constant(tolua_S,"RENDER_QUEUE_WORLD_GEOMETRY_1",Ogre::RENDER_QUEUE_WORLD_GEOMETRY_1);
   tolua_constant(tolua_S,"RENDER_QUEUE_3",Ogre::RENDER_QUEUE_3);
   tolua_constant(tolua_S,"RENDER_QUEUE_4",Ogre::RENDER_QUEUE_4);
   tolua_constant(tolua_S,"RENDER_QUEUE_MAIN",Ogre::RENDER_QUEUE_MAIN);
   tolua_constant(tolua_S,"RENDER_QUEUE_6",Ogre::RENDER_QUEUE_6);
   tolua_constant(tolua_S,"RENDER_QUEUE_7",Ogre::RENDER_QUEUE_7);
   tolua_constant(tolua_S,"RENDER_QUEUE_WORLD_GEOMETRY_2",Ogre::RENDER_QUEUE_WORLD_GEOMETRY_2);
   tolua_constant(tolua_S,"RENDER_QUEUE_8",Ogre::RENDER_QUEUE_8);
   tolua_constant(tolua_S,"RENDER_QUEUE_9",Ogre::RENDER_QUEUE_9);
   tolua_constant(tolua_S,"RENDER_QUEUE_SKIES_LATE",Ogre::RENDER_QUEUE_SKIES_LATE);
   tolua_constant(tolua_S,"RENDER_QUEUE_OVERLAY",Ogre::RENDER_QUEUE_OVERLAY);
   tolua_constant(tolua_S,"RENDER_QUEUE_MAX",Ogre::RENDER_QUEUE_MAX);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector2","Ogre::Vector2","",tolua_collect_Ogre__Vector2);
   #else
   tolua_cclass(tolua_S,"Vector2","Ogre::Vector2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector2");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector2_x,tolua_set_Ogre__Vector2_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector2_y,tolua_set_Ogre__Vector2_y);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector2_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector2_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector2_new01_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",tolua_collect_Ogre__Vector3);
   #else
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector3");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector3_x,tolua_set_Ogre__Vector3_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector3_y,tolua_set_Ogre__Vector3_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Vector3_z,tolua_set_Ogre__Vector3_z);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Vector3_ZERO,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_Ogre__Vector3_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_Ogre__Vector3_UNIT_Y,NULL);
    tolua_variable(tolua_S,"UNIT_Z",tolua_get_Ogre__Vector3_UNIT_Z,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_X",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Y",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Z",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z,NULL);
    tolua_variable(tolua_S,"UNIT_SCALE",tolua_get_Ogre__Vector3_UNIT_SCALE,NULL);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Vector3_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Vector3_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Vector3_new01_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",tolua_collect_Ogre__Degree);
   #else
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Degree");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Degree_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Degree_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Degree_new00_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Ogre_Ogre_Degree_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Ogre_Ogre_Degree_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Ogre_Ogre_Degree_valueAngleUnits00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",tolua_collect_Ogre__Radian);
   #else
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Radian");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Radian_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Radian_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Radian_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Radian_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Radian_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Radian_new01_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Ogre_Ogre_Radian_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Ogre_Ogre_Radian_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Ogre_Ogre_Radian_valueAngleUnits00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Angle","Ogre::Angle","",tolua_collect_Ogre__Angle);
   #else
   tolua_cclass(tolua_S,"Angle","Ogre::Angle","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Angle");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Angle_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Angle_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Angle_new00_local);
    tolua_function(tolua_S,".Radian",tolua_Ogre_Ogre_Angle__Radian00);
    tolua_function(tolua_S,".Degree",tolua_Ogre_Ogre_Angle__Degree00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",tolua_collect_Ogre__Quaternion);
   #else
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Quaternion");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new03);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Quaternion_new04);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Quaternion_new04_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Quaternion_new04_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",tolua_collect_Ogre__ColourValue);
   #else
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ColourValue");
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__ColourValue_ZERO,NULL);
    tolua_variable(tolua_S,"Black",tolua_get_Ogre__ColourValue_Black,NULL);
    tolua_variable(tolua_S,"White",tolua_get_Ogre__ColourValue_White,NULL);
    tolua_variable(tolua_S,"Red",tolua_get_Ogre__ColourValue_Red,NULL);
    tolua_variable(tolua_S,"Green",tolua_get_Ogre__ColourValue_Green,NULL);
    tolua_variable(tolua_S,"Blue",tolua_get_Ogre__ColourValue_Blue,NULL);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_ColourValue_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_ColourValue_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_ColourValue_new00_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Plane","Ogre::Plane","",tolua_collect_Ogre__Plane);
   #else
   tolua_cclass(tolua_S,"Plane","Ogre::Plane","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Plane");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Plane_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Plane_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Plane_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Plane_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Plane_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Plane_new01_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"AxisAlignedBox","Ogre::AxisAlignedBox","",tolua_collect_Ogre__AxisAlignedBox);
   #else
   tolua_cclass(tolua_S,"AxisAlignedBox","Ogre::AxisAlignedBox","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"AxisAlignedBox");
    tolua_constant(tolua_S,"EXTENT_NULL",Ogre::AxisAlignedBox::EXTENT_NULL);
    tolua_constant(tolua_S,"EXTENT_FINITE",Ogre::AxisAlignedBox::EXTENT_FINITE);
    tolua_constant(tolua_S,"EXTENT_INFINITE",Ogre::AxisAlignedBox::EXTENT_INFINITE);
    tolua_constant(tolua_S,"FAR_LEFT_BOTTOM",Ogre::AxisAlignedBox::FAR_LEFT_BOTTOM);
    tolua_constant(tolua_S,"FAR_LEFT_TOP",Ogre::AxisAlignedBox::FAR_LEFT_TOP);
    tolua_constant(tolua_S,"FAR_RIGHT_TOP",Ogre::AxisAlignedBox::FAR_RIGHT_TOP);
    tolua_constant(tolua_S,"FAR_RIGHT_BOTTOM",Ogre::AxisAlignedBox::FAR_RIGHT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_RIGHT_BOTTOM",Ogre::AxisAlignedBox::NEAR_RIGHT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_LEFT_BOTTOM",Ogre::AxisAlignedBox::NEAR_LEFT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_LEFT_TOP",Ogre::AxisAlignedBox::NEAR_LEFT_TOP);
    tolua_constant(tolua_S,"NEAR_RIGHT_TOP",Ogre::AxisAlignedBox::NEAR_RIGHT_TOP);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_AxisAlignedBox_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_AxisAlignedBox_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_AxisAlignedBox_new00_local);
    tolua_function(tolua_S,"getSize",tolua_Ogre_Ogre_AxisAlignedBox_getSize00);
    tolua_function(tolua_S,"getMaximum",tolua_Ogre_Ogre_AxisAlignedBox_getMaximum00);
    tolua_function(tolua_S,"getMinimum",tolua_Ogre_Ogre_AxisAlignedBox_getMinimum00);
    tolua_function(tolua_S,"getCenter",tolua_Ogre_Ogre_AxisAlignedBox_getCenter00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SubEntity","Ogre::SubEntity","",NULL);
   tolua_beginmodule(tolua_S,"SubEntity");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"MovableObject","Ogre::MovableObject","",NULL);
   tolua_beginmodule(tolua_S,"MovableObject");
    tolua_function(tolua_S,"setRenderQueueGroup",tolua_Ogre_Ogre_MovableObject_setRenderQueueGroup00);
    tolua_function(tolua_S,"setRenderQueueGroupAndPriority",tolua_Ogre_Ogre_MovableObject_setRenderQueueGroupAndPriority00);
    tolua_function(tolua_S,"getBoundingBox",tolua_Ogre_Ogre_MovableObject_getBoundingBox00);
    tolua_function(tolua_S,"getWorldBoundingBox",tolua_Ogre_Ogre_MovableObject_getWorldBoundingBox00);
    tolua_function(tolua_S,"getMovableType",tolua_Ogre_Ogre_MovableObject_getMovableType00);
    tolua_function(tolua_S,"setQueryFlags",tolua_Ogre_Ogre_MovableObject_setQueryFlags00);
    tolua_function(tolua_S,"setVisibilityFlags",tolua_Ogre_Ogre_MovableObject_setVisibilityFlags00);
    tolua_function(tolua_S,"setUserAny",tolua_Ogre_Ogre_MovableObject_setUserAny00);
    tolua_function(tolua_S,"getUserAny",tolua_Ogre_Ogre_MovableObject_getUserAny00);
    tolua_function(tolua_S,"setCastShadows",tolua_Ogre_Ogre_MovableObject_setCastShadows00);
    tolua_function(tolua_S,"getCastShadows",tolua_Ogre_Ogre_MovableObject_getCastShadows00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Node","Ogre::Node","",NULL);
   tolua_beginmodule(tolua_S,"Node");
    tolua_constant(tolua_S,"TS_LOCAL",Ogre::Node::TS_LOCAL);
    tolua_constant(tolua_S,"TS_PARENT",Ogre::Node::TS_PARENT);
    tolua_constant(tolua_S,"TS_WORLD",Ogre::Node::TS_WORLD);
    tolua_function(tolua_S,"getName",tolua_Ogre_Ogre_Node_getName00);
    tolua_function(tolua_S,"getParent",tolua_Ogre_Ogre_Node_getParent00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Node_setPosition00);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Node_getPosition00);
    tolua_function(tolua_S,"setScale",tolua_Ogre_Ogre_Node_setScale00);
    tolua_function(tolua_S,"setScale",tolua_Ogre_Ogre_Node_setScale01);
    tolua_function(tolua_S,"getScale",tolua_Ogre_Ogre_Node_getScale00);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild00);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild01);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild02);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild03);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild04);
    tolua_function(tolua_S,"createChild",tolua_Ogre_Ogre_Node_createChild05);
    tolua_function(tolua_S,"addChild",tolua_Ogre_Ogre_Node_addChild00);
    tolua_function(tolua_S,"getChildAt",tolua_Ogre_Ogre_Node_getChildAt00);
    tolua_function(tolua_S,"numChildren",tolua_Ogre_Ogre_Node_numChildren00);
    tolua_function(tolua_S,"getChild",tolua_Ogre_Ogre_Node_getChild00);
    tolua_function(tolua_S,"removeChild",tolua_Ogre_Ogre_Node_removeChild00);
    tolua_function(tolua_S,"removeChild",tolua_Ogre_Ogre_Node_removeChild01);
    tolua_function(tolua_S,"removeChild",tolua_Ogre_Ogre_Node_removeChild02);
    tolua_function(tolua_S,"removeAllChildren",tolua_Ogre_Ogre_Node_removeAllChildren00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Entity","Ogre::Entity","Ogre::MovableObject",NULL);
   tolua_beginmodule(tolua_S,"Entity");
    tolua_function(tolua_S,"getSubEntity",tolua_Ogre_Ogre_Entity_getSubEntity00);
    tolua_function(tolua_S,"getSubEntity",tolua_Ogre_Ogre_Entity_getSubEntity01);
    tolua_function(tolua_S,"getNumSubEntities",tolua_Ogre_Ogre_Entity_getNumSubEntities00);
    tolua_function(tolua_S,"setDisplaySkeleton",tolua_Ogre_Ogre_Entity_setDisplaySkeleton00);
    tolua_function(tolua_S,"setMaterialName",tolua_Ogre_Ogre_Entity_setMaterialName00);
    tolua_function(tolua_S,"setMaterialName",tolua_Ogre_Ogre_Entity_setMaterialName01);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SceneNode","Ogre::SceneNode","Ogre::Node",NULL);
   tolua_beginmodule(tolua_S,"SceneNode");
    tolua_function(tolua_S,"yaw",tolua_Ogre_Ogre_SceneNode_yaw00);
    tolua_function(tolua_S,"pitch",tolua_Ogre_Ogre_SceneNode_pitch00);
    tolua_function(tolua_S,"roll",tolua_Ogre_Ogre_SceneNode_roll00);
    tolua_function(tolua_S,"attachObject",tolua_Ogre_Ogre_SceneNode_attachObject00);
    tolua_function(tolua_S,"numAttachedObjects",tolua_Ogre_Ogre_SceneNode_numAttachedObjects00);
    tolua_function(tolua_S,"getAttachedObjectAt",tolua_Ogre_Ogre_SceneNode_getAttachedObjectAt00);
    tolua_function(tolua_S,"getAttachedObject",tolua_Ogre_Ogre_SceneNode_getAttachedObject00);
    tolua_function(tolua_S,"detachObject",tolua_Ogre_Ogre_SceneNode_detachObject00);
    tolua_function(tolua_S,"detachObject",tolua_Ogre_Ogre_SceneNode_detachObject01);
    tolua_function(tolua_S,"detachObject",tolua_Ogre_Ogre_SceneNode_detachObject02);
    tolua_function(tolua_S,"detachAllObjects",tolua_Ogre_Ogre_SceneNode_detachAllObjects00);
    tolua_function(tolua_S,"getCreator",tolua_Ogre_Ogre_SceneNode_getCreator00);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode00);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode01);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode02);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode03);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode04);
    tolua_function(tolua_S,"createChildSceneNode",tolua_Ogre_Ogre_SceneNode_createChildSceneNode05);
    tolua_function(tolua_S,"removeAndDestroyChild",tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild00);
    tolua_function(tolua_S,"removeAndDestroyChild",tolua_Ogre_Ogre_SceneNode_removeAndDestroyChild01);
    tolua_function(tolua_S,"removeAndDestroyAllChildren",tolua_Ogre_Ogre_SceneNode_removeAndDestroyAllChildren00);
    tolua_function(tolua_S,"showBoundingBox",tolua_Ogre_Ogre_SceneNode_showBoundingBox00);
    tolua_function(tolua_S,"hideBoundingBox",tolua_Ogre_Ogre_SceneNode_hideBoundingBox00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_SceneNode_setDirection00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_SceneNode_setDirection01);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_SceneNode_setDirection02);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_SceneNode_setDirection03);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_SceneNode_lookAt00);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_SceneNode_lookAt01);
    tolua_function(tolua_S,"setAutoTracking",tolua_Ogre_Ogre_SceneNode_setAutoTracking00);
    tolua_function(tolua_S,"setAutoTracking",tolua_Ogre_Ogre_SceneNode_setAutoTracking01);
    tolua_function(tolua_S,"setAutoTracking",tolua_Ogre_Ogre_SceneNode_setAutoTracking02);
    tolua_function(tolua_S,"getAutoTrackTarget",tolua_Ogre_Ogre_SceneNode_getAutoTrackTarget00);
    tolua_function(tolua_S,"getAutoTrackOffset",tolua_Ogre_Ogre_SceneNode_getAutoTrackOffset00);
    tolua_function(tolua_S,"getAutoTrackLocalDirection",tolua_Ogre_Ogre_SceneNode_getAutoTrackLocalDirection00);
    tolua_function(tolua_S,"getParentSceneNode",tolua_Ogre_Ogre_SceneNode_getParentSceneNode00);
    tolua_function(tolua_S,"setVisible",tolua_Ogre_Ogre_SceneNode_setVisible00);
    tolua_function(tolua_S,"flipVisibility",tolua_Ogre_Ogre_SceneNode_flipVisibility00);
    tolua_function(tolua_S,"setOrientation",tolua_Ogre_Ogre_SceneNode_setOrientation00);
    tolua_function(tolua_S,"setOrientation",tolua_Ogre_Ogre_SceneNode_setOrientation01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Light","Ogre::Light","Ogre::MovableObject",tolua_collect_Ogre__Light);
   #else
   tolua_cclass(tolua_S,"Light","Ogre::Light","Ogre::MovableObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Light");
    tolua_constant(tolua_S,"LT_POINT",Ogre::Light::LT_POINT);
    tolua_constant(tolua_S,"LT_DIRECTIONAL",Ogre::Light::LT_DIRECTIONAL);
    tolua_constant(tolua_S,"LT_SPOTLIGHT",Ogre::Light::LT_SPOTLIGHT);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Light_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Light_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Light_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Light_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Light_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Light_new01_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_Light_delete00);
    tolua_function(tolua_S,"setType",tolua_Ogre_Ogre_Light_setType00);
    tolua_function(tolua_S,"getType",tolua_Ogre_Ogre_Light_getType00);
    tolua_function(tolua_S,"setDiffuseColour",tolua_Ogre_Ogre_Light_setDiffuseColour00);
    tolua_function(tolua_S,"setDiffuseColour",tolua_Ogre_Ogre_Light_setDiffuseColour01);
    tolua_function(tolua_S,"getDiffuseColour",tolua_Ogre_Ogre_Light_getDiffuseColour00);
    tolua_function(tolua_S,"setSpecularColour",tolua_Ogre_Ogre_Light_setSpecularColour00);
    tolua_function(tolua_S,"setSpecularColour",tolua_Ogre_Ogre_Light_setSpecularColour01);
    tolua_function(tolua_S,"getSpecularColour",tolua_Ogre_Ogre_Light_getSpecularColour00);
    tolua_function(tolua_S,"setAttenuation",tolua_Ogre_Ogre_Light_setAttenuation00);
    tolua_function(tolua_S,"getAttenuationRange",tolua_Ogre_Ogre_Light_getAttenuationRange00);
    tolua_function(tolua_S,"getAttenuationConstant",tolua_Ogre_Ogre_Light_getAttenuationConstant00);
    tolua_function(tolua_S,"getAttenuationLinear",tolua_Ogre_Ogre_Light_getAttenuationLinear00);
    tolua_function(tolua_S,"getAttenuationQuadric",tolua_Ogre_Ogre_Light_getAttenuationQuadric00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Light_setPosition00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Light_setPosition01);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Light_getPosition00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Light_setDirection00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Light_setDirection01);
    tolua_function(tolua_S,"getDirection",tolua_Ogre_Ogre_Light_getDirection00);
    tolua_function(tolua_S,"setSpotlightRange",tolua_Ogre_Ogre_Light_setSpotlightRange00);
    tolua_function(tolua_S,"getSpotlightInnerAngle",tolua_Ogre_Ogre_Light_getSpotlightInnerAngle00);
    tolua_function(tolua_S,"getSpotlightOuterAngle",tolua_Ogre_Ogre_Light_getSpotlightOuterAngle00);
    tolua_function(tolua_S,"getSpotlightFalloff",tolua_Ogre_Ogre_Light_getSpotlightFalloff00);
    tolua_function(tolua_S,"setSpotlightInnerAngle",tolua_Ogre_Ogre_Light_setSpotlightInnerAngle00);
    tolua_function(tolua_S,"setSpotlightOuterAngle",tolua_Ogre_Ogre_Light_setSpotlightOuterAngle00);
    tolua_function(tolua_S,"setSpotlightFalloff",tolua_Ogre_Ogre_Light_setSpotlightFalloff00);
    tolua_function(tolua_S,"setPowerScale",tolua_Ogre_Ogre_Light_setPowerScale00);
    tolua_function(tolua_S,"getPowerScale",tolua_Ogre_Ogre_Light_getPowerScale00);
    tolua_function(tolua_S,"getBoundingBox",tolua_Ogre_Ogre_Light_getBoundingBox00);
    tolua_function(tolua_S,"getMovableType",tolua_Ogre_Ogre_Light_getMovableType00);
    tolua_function(tolua_S,"getDerivedPosition",tolua_Ogre_Ogre_Light_getDerivedPosition00);
    tolua_function(tolua_S,"getDerivedDirection",tolua_Ogre_Ogre_Light_getDerivedDirection00);
    tolua_function(tolua_S,"setVisible",tolua_Ogre_Ogre_Light_setVisible00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Camera","Ogre::Camera","",tolua_collect_Ogre__Camera);
   #else
   tolua_cclass(tolua_S,"Camera","Ogre::Camera","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Camera");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Camera_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Camera_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Camera_new00_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_Camera_delete00);
    tolua_function(tolua_S,"getSceneManager",tolua_Ogre_Ogre_Camera_getSceneManager00);
    tolua_function(tolua_S,"setAspectRatio",tolua_Ogre_Ogre_Camera_setAspectRatio00);
    tolua_function(tolua_S,"setNearClipDistance",tolua_Ogre_Ogre_Camera_setNearClipDistance00);
    tolua_function(tolua_S,"getNearClipDistance",tolua_Ogre_Ogre_Camera_getNearClipDistance00);
    tolua_function(tolua_S,"setFarClipDistance",tolua_Ogre_Ogre_Camera_setFarClipDistance00);
    tolua_function(tolua_S,"getFarClipDistance",tolua_Ogre_Ogre_Camera_getFarClipDistance00);
    tolua_function(tolua_S,"setPolygonMode",tolua_Ogre_Ogre_Camera_setPolygonMode00);
    tolua_function(tolua_S,"getPolygonMode",tolua_Ogre_Ogre_Camera_getPolygonMode00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Camera_setPosition00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Camera_setPosition01);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Camera_getPosition00);
    tolua_function(tolua_S,"move",tolua_Ogre_Ogre_Camera_move00);
    tolua_function(tolua_S,"moveRelative",tolua_Ogre_Ogre_Camera_moveRelative00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Camera_setDirection00);
    tolua_function(tolua_S,"setDirection",tolua_Ogre_Ogre_Camera_setDirection01);
    tolua_function(tolua_S,"getDirection",tolua_Ogre_Ogre_Camera_getDirection00);
    tolua_function(tolua_S,"getUp",tolua_Ogre_Ogre_Camera_getUp00);
    tolua_function(tolua_S,"getRight",tolua_Ogre_Ogre_Camera_getRight00);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_Camera_lookAt00);
    tolua_function(tolua_S,"lookAt",tolua_Ogre_Ogre_Camera_lookAt01);
    tolua_function(tolua_S,"roll",tolua_Ogre_Ogre_Camera_roll00);
    tolua_function(tolua_S,"yaw",tolua_Ogre_Ogre_Camera_yaw00);
    tolua_function(tolua_S,"pitch",tolua_Ogre_Ogre_Camera_pitch00);
    tolua_function(tolua_S,"rotate",tolua_Ogre_Ogre_Camera_rotate00);
    tolua_function(tolua_S,"rotate",tolua_Ogre_Ogre_Camera_rotate01);
    tolua_function(tolua_S,"setFixedYawAxis",tolua_Ogre_Ogre_Camera_setFixedYawAxis00);
    tolua_function(tolua_S,"setFixedYawAxis",tolua_Ogre_Ogre_Camera_setFixedYawAxis01);
    tolua_function(tolua_S,"getOrientation",tolua_Ogre_Ogre_Camera_getOrientation00);
    tolua_function(tolua_S,"setOrientation",tolua_Ogre_Ogre_Camera_setOrientation00);
    tolua_function(tolua_S,"getViewport",tolua_Ogre_Ogre_Camera_getViewport00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"StaticGeometry","Ogre::StaticGeometry","",NULL);
   tolua_beginmodule(tolua_S,"StaticGeometry");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"InstancedGeometry","Ogre::InstancedGeometry","",NULL);
   tolua_beginmodule(tolua_S,"InstancedGeometry");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Renderable","Ogre::Renderable","",NULL);
   tolua_beginmodule(tolua_S,"Renderable");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"RibbonTrail","Ogre::RibbonTrail","",NULL);
   tolua_beginmodule(tolua_S,"RibbonTrail");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"RenderTarget","Ogre::RenderTarget","",NULL);
   tolua_beginmodule(tolua_S,"RenderTarget");
    tolua_cclass(tolua_S,"FrameStats","Ogre::RenderTarget::FrameStats","",NULL);
    tolua_beginmodule(tolua_S,"FrameStats");
     tolua_variable(tolua_S,"lastFPS",tolua_get_Ogre__RenderTarget__FrameStats_lastFPS,tolua_set_Ogre__RenderTarget__FrameStats_lastFPS);
     tolua_variable(tolua_S,"avgFPS",tolua_get_Ogre__RenderTarget__FrameStats_avgFPS,tolua_set_Ogre__RenderTarget__FrameStats_avgFPS);
     tolua_variable(tolua_S,"bestFPS",tolua_get_Ogre__RenderTarget__FrameStats_bestFPS,tolua_set_Ogre__RenderTarget__FrameStats_bestFPS);
     tolua_variable(tolua_S,"worstFPS",tolua_get_Ogre__RenderTarget__FrameStats_worstFPS,tolua_set_Ogre__RenderTarget__FrameStats_worstFPS);
     tolua_variable(tolua_S,"bestFrameTime",tolua_get_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime,tolua_set_Ogre__RenderTarget__FrameStats_unsigned_bestFrameTime);
     tolua_variable(tolua_S,"worstFrameTime",tolua_get_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime,tolua_set_Ogre__RenderTarget__FrameStats_unsigned_worstFrameTime);
     tolua_variable(tolua_S,"triangleCount",tolua_get_Ogre__RenderTarget__FrameStats_triangleCount,tolua_set_Ogre__RenderTarget__FrameStats_triangleCount);
     tolua_variable(tolua_S,"batchCount",tolua_get_Ogre__RenderTarget__FrameStats_batchCount,tolua_set_Ogre__RenderTarget__FrameStats_batchCount);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"getName",tolua_Ogre_Ogre_RenderTarget_getName00);
    tolua_function(tolua_S,"getMetrics",tolua_Ogre_Ogre_RenderTarget_getMetrics00);
    tolua_function(tolua_S,"getWidth",tolua_Ogre_Ogre_RenderTarget_getWidth00);
    tolua_function(tolua_S,"getHeight",tolua_Ogre_Ogre_RenderTarget_getHeight00);
    tolua_function(tolua_S,"getColourDepth",tolua_Ogre_Ogre_RenderTarget_getColourDepth00);
    tolua_function(tolua_S,"writeContentsToFile",tolua_Ogre_Ogre_RenderTarget_writeContentsToFile00);
    tolua_function(tolua_S,"writeContentsToTimestampedFile",tolua_Ogre_Ogre_RenderTarget_writeContentsToTimestampedFile00);
    tolua_function(tolua_S,"addViewport",tolua_Ogre_Ogre_RenderTarget_addViewport00);
    tolua_function(tolua_S,"getNumViewports",tolua_Ogre_Ogre_RenderTarget_getNumViewports00);
    tolua_function(tolua_S,"getViewport",tolua_Ogre_Ogre_RenderTarget_getViewport00);
    tolua_function(tolua_S,"getViewportByZOrder",tolua_Ogre_Ogre_RenderTarget_getViewportByZOrder00);
    tolua_function(tolua_S,"hasViewportWithZOrder",tolua_Ogre_Ogre_RenderTarget_hasViewportWithZOrder00);
    tolua_function(tolua_S,"removeViewport",tolua_Ogre_Ogre_RenderTarget_removeViewport00);
    tolua_function(tolua_S,"removeAllViewports",tolua_Ogre_Ogre_RenderTarget_removeAllViewports00);
    tolua_function(tolua_S,"getStatistics",tolua_Ogre_Ogre_RenderTarget_getStatistics00);
    tolua_function(tolua_S,"getStatistics",tolua_Ogre_Ogre_RenderTarget_getStatistics01);
    tolua_function(tolua_S,"getLastFPS",tolua_Ogre_Ogre_RenderTarget_getLastFPS00);
    tolua_function(tolua_S,"getAverageFPS",tolua_Ogre_Ogre_RenderTarget_getAverageFPS00);
    tolua_function(tolua_S,"getBestFPS",tolua_Ogre_Ogre_RenderTarget_getBestFPS00);
    tolua_function(tolua_S,"getWorstFPS",tolua_Ogre_Ogre_RenderTarget_getWorstFPS00);
    tolua_function(tolua_S,"getBestFrameTime",tolua_Ogre_Ogre_RenderTarget_getBestFrameTime00);
    tolua_function(tolua_S,"getWorstFrameTime",tolua_Ogre_Ogre_RenderTarget_getWorstFrameTime00);
    tolua_function(tolua_S,"resetStatistics",tolua_Ogre_Ogre_RenderTarget_resetStatistics00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"RenderWindow","Ogre::RenderWindow","Ogre::RenderTarget",tolua_collect_Ogre__RenderWindow);
   #else
   tolua_cclass(tolua_S,"RenderWindow","Ogre::RenderWindow","Ogre::RenderTarget",NULL);
   #endif
   tolua_beginmodule(tolua_S,"RenderWindow");
    tolua_function(tolua_S,"setFullscreen",tolua_Ogre_Ogre_RenderWindow_setFullscreen00);
    tolua_function(tolua_S,"destroy",tolua_Ogre_Ogre_RenderWindow_destroy00);
    tolua_function(tolua_S,"resize",tolua_Ogre_Ogre_RenderWindow_resize00);
    tolua_function(tolua_S,"windowMovedOrResized",tolua_Ogre_Ogre_RenderWindow_windowMovedOrResized00);
    tolua_function(tolua_S,"reposition",tolua_Ogre_Ogre_RenderWindow_reposition00);
    tolua_function(tolua_S,"isVisible",tolua_Ogre_Ogre_RenderWindow_isVisible00);
    tolua_function(tolua_S,"setVisible",tolua_Ogre_Ogre_RenderWindow_setVisible00);
    tolua_function(tolua_S,"isHidden",tolua_Ogre_Ogre_RenderWindow_isHidden00);
    tolua_function(tolua_S,"setHidden",tolua_Ogre_Ogre_RenderWindow_setHidden00);
    tolua_function(tolua_S,"setVSyncEnabled",tolua_Ogre_Ogre_RenderWindow_setVSyncEnabled00);
    tolua_function(tolua_S,"isVSyncEnabled",tolua_Ogre_Ogre_RenderWindow_isVSyncEnabled00);
    tolua_function(tolua_S,"setVSyncInterval",tolua_Ogre_Ogre_RenderWindow_setVSyncInterval00);
    tolua_function(tolua_S,"getVSyncInterval",tolua_Ogre_Ogre_RenderWindow_getVSyncInterval00);
    tolua_function(tolua_S,"isActive",tolua_Ogre_Ogre_RenderWindow_isActive00);
    tolua_function(tolua_S,"isClosed",tolua_Ogre_Ogre_RenderWindow_isClosed00);
    tolua_function(tolua_S,"isPrimary",tolua_Ogre_Ogre_RenderWindow_isPrimary00);
    tolua_function(tolua_S,"isFullScreen",tolua_Ogre_Ogre_RenderWindow_isFullScreen00);
    tolua_function(tolua_S,"getMetrics",tolua_Ogre_Ogre_RenderWindow_getMetrics00);
    tolua_function(tolua_S,"suggestPixelFormat",tolua_Ogre_Ogre_RenderWindow_suggestPixelFormat00);
    tolua_function(tolua_S,"isDeactivatedOnFocusChange",tolua_Ogre_Ogre_RenderWindow_isDeactivatedOnFocusChange00);
    tolua_function(tolua_S,"setDeactivateOnFocusChange",tolua_Ogre_Ogre_RenderWindow_setDeactivateOnFocusChange00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SceneManager","Ogre::SceneManager","",NULL);
   tolua_beginmodule(tolua_S,"SceneManager");
    tolua_constant(tolua_S,"PT_PLANE",Ogre::SceneManager::PT_PLANE);
    tolua_constant(tolua_S,"PT_CUBE",Ogre::SceneManager::PT_CUBE);
    tolua_constant(tolua_S,"PT_SPHERE",Ogre::SceneManager::PT_SPHERE);
    tolua_function(tolua_S,"createCamera",tolua_Ogre_Ogre_SceneManager_createCamera00);
    tolua_function(tolua_S,"getCamera",tolua_Ogre_Ogre_SceneManager_getCamera00);
    tolua_function(tolua_S,"hasCamera",tolua_Ogre_Ogre_SceneManager_hasCamera00);
    tolua_function(tolua_S,"destroyAllCameras",tolua_Ogre_Ogre_SceneManager_destroyAllCameras00);
    tolua_function(tolua_S,"destroyCamera",tolua_Ogre_Ogre_SceneManager_destroyCamera00);
    tolua_function(tolua_S,"createLight",tolua_Ogre_Ogre_SceneManager_createLight00);
    tolua_function(tolua_S,"createLight",tolua_Ogre_Ogre_SceneManager_createLight01);
    tolua_function(tolua_S,"getLight",tolua_Ogre_Ogre_SceneManager_getLight00);
    tolua_function(tolua_S,"hasLight",tolua_Ogre_Ogre_SceneManager_hasLight00);
    tolua_function(tolua_S,"destroyLight",tolua_Ogre_Ogre_SceneManager_destroyLight00);
    tolua_function(tolua_S,"destroyLight",tolua_Ogre_Ogre_SceneManager_destroyLight01);
    tolua_function(tolua_S,"destroyAllLights",tolua_Ogre_Ogre_SceneManager_destroyAllLights00);
    tolua_function(tolua_S,"setAmbientLight",tolua_Ogre_Ogre_SceneManager_setAmbientLight00);
    tolua_function(tolua_S,"getAmbientLight",tolua_Ogre_Ogre_SceneManager_getAmbientLight00);
    tolua_function(tolua_S,"setWorldGeometry",tolua_Ogre_Ogre_SceneManager_setWorldGeometry00);
    tolua_function(tolua_S,"clearScene",tolua_Ogre_Ogre_SceneManager_clearScene00);
    tolua_function(tolua_S,"createSceneNode",tolua_Ogre_Ogre_SceneManager_createSceneNode00);
    tolua_function(tolua_S,"createSceneNode",tolua_Ogre_Ogre_SceneManager_createSceneNode01);
    tolua_function(tolua_S,"destroySceneNode",tolua_Ogre_Ogre_SceneManager_destroySceneNode00);
    tolua_function(tolua_S,"destroySceneNode",tolua_Ogre_Ogre_SceneManager_destroySceneNode01);
    tolua_function(tolua_S,"getRootSceneNode",tolua_Ogre_Ogre_SceneManager_getRootSceneNode00);
    tolua_function(tolua_S,"getSceneNode",tolua_Ogre_Ogre_SceneManager_getSceneNode00);
    tolua_function(tolua_S,"hasSceneNode",tolua_Ogre_Ogre_SceneManager_hasSceneNode00);
    tolua_function(tolua_S,"createEntity",tolua_Ogre_Ogre_SceneManager_createEntity00);
    tolua_function(tolua_S,"createEntity",tolua_Ogre_Ogre_SceneManager_createEntity01);
    tolua_function(tolua_S,"createEntity",tolua_Ogre_Ogre_SceneManager_createEntity02);
    tolua_function(tolua_S,"createPrefabEntity",tolua_Ogre_Ogre_SceneManager_createPrefabEntity00);
    tolua_function(tolua_S,"getEntity",tolua_Ogre_Ogre_SceneManager_getEntity00);
    tolua_function(tolua_S,"hasEntity",tolua_Ogre_Ogre_SceneManager_hasEntity00);
    tolua_function(tolua_S,"destroyEntity",tolua_Ogre_Ogre_SceneManager_destroyEntity00);
    tolua_function(tolua_S,"destroyEntity",tolua_Ogre_Ogre_SceneManager_destroyEntity01);
    tolua_function(tolua_S,"destroyAllEntities",tolua_Ogre_Ogre_SceneManager_destroyAllEntities00);
    tolua_function(tolua_S,"setSkyPlane",tolua_Ogre_Ogre_SceneManager_setSkyPlane00);
    tolua_function(tolua_S,"setSkyPlane",tolua_Ogre_Ogre_SceneManager_setSkyPlane01);
    tolua_function(tolua_S,"setSkyPlaneEnabled",tolua_Ogre_Ogre_SceneManager_setSkyPlaneEnabled00);
    tolua_function(tolua_S,"isSkyPlaneEnabled",tolua_Ogre_Ogre_SceneManager_isSkyPlaneEnabled00);
    tolua_function(tolua_S,"getSkyPlaneNode",tolua_Ogre_Ogre_SceneManager_getSkyPlaneNode00);
    tolua_function(tolua_S,"setSkyBox",tolua_Ogre_Ogre_SceneManager_setSkyBox00);
    tolua_function(tolua_S,"setSkyBox",tolua_Ogre_Ogre_SceneManager_setSkyBox01);
    tolua_function(tolua_S,"setSkyBox",tolua_Ogre_Ogre_SceneManager_setSkyBox02);
    tolua_function(tolua_S,"setSkyBoxEnabled",tolua_Ogre_Ogre_SceneManager_setSkyBoxEnabled00);
    tolua_function(tolua_S,"isSkyBoxEnabled",tolua_Ogre_Ogre_SceneManager_isSkyBoxEnabled00);
    tolua_function(tolua_S,"getSkyBoxNode",tolua_Ogre_Ogre_SceneManager_getSkyBoxNode00);
    tolua_function(tolua_S,"setSkyDome",tolua_Ogre_Ogre_SceneManager_setSkyDome00);
    tolua_function(tolua_S,"setSkyDome",tolua_Ogre_Ogre_SceneManager_setSkyDome01);
    tolua_function(tolua_S,"setSkyDome",tolua_Ogre_Ogre_SceneManager_setSkyDome02);
    tolua_function(tolua_S,"setFog",tolua_Ogre_Ogre_SceneManager_setFog00);
    tolua_function(tolua_S,"setFog",tolua_Ogre_Ogre_SceneManager_setFog01);
    tolua_function(tolua_S,"getFogMode",tolua_Ogre_Ogre_SceneManager_getFogMode00);
    tolua_function(tolua_S,"getFogColour",tolua_Ogre_Ogre_SceneManager_getFogColour00);
    tolua_function(tolua_S,"getFogStart",tolua_Ogre_Ogre_SceneManager_getFogStart00);
    tolua_function(tolua_S,"getFogEnd",tolua_Ogre_Ogre_SceneManager_getFogEnd00);
    tolua_function(tolua_S,"getFogDensity",tolua_Ogre_Ogre_SceneManager_getFogDensity00);
    tolua_function(tolua_S,"setShadowTechnique",tolua_Ogre_Ogre_SceneManager_setShadowTechnique00);
    tolua_function(tolua_S,"getShadowTechnique",tolua_Ogre_Ogre_SceneManager_getShadowTechnique00);
    tolua_function(tolua_S,"setShadowColour",tolua_Ogre_Ogre_SceneManager_setShadowColour00);
    tolua_function(tolua_S,"getShadowColour",tolua_Ogre_Ogre_SceneManager_getShadowColour00);
    tolua_function(tolua_S,"createStaticGeometry",tolua_Ogre_Ogre_SceneManager_createStaticGeometry00);
    tolua_function(tolua_S,"getStaticGeometry",tolua_Ogre_Ogre_SceneManager_getStaticGeometry00);
    tolua_function(tolua_S,"hasStaticGeometry",tolua_Ogre_Ogre_SceneManager_hasStaticGeometry00);
    tolua_function(tolua_S,"destroyStaticGeometry",tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry00);
    tolua_function(tolua_S,"destroyStaticGeometry",tolua_Ogre_Ogre_SceneManager_destroyStaticGeometry01);
    tolua_function(tolua_S,"destroyAllStaticGeometry",tolua_Ogre_Ogre_SceneManager_destroyAllStaticGeometry00);
    tolua_function(tolua_S,"createInstancedGeometry",tolua_Ogre_Ogre_SceneManager_createInstancedGeometry00);
    tolua_function(tolua_S,"getInstancedGeometry",tolua_Ogre_Ogre_SceneManager_getInstancedGeometry00);
    tolua_function(tolua_S,"destroyInstancedGeometry",tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry00);
    tolua_function(tolua_S,"destroyInstancedGeometry",tolua_Ogre_Ogre_SceneManager_destroyInstancedGeometry01);
    tolua_function(tolua_S,"destroyAllInstancedGeometry",tolua_Ogre_Ogre_SceneManager_destroyAllInstancedGeometry00);
    tolua_function(tolua_S,"createRibbonTrail",tolua_Ogre_Ogre_SceneManager_createRibbonTrail00);
    tolua_function(tolua_S,"createRibbonTrail",tolua_Ogre_Ogre_SceneManager_createRibbonTrail01);
    tolua_function(tolua_S,"getRibbonTrail",tolua_Ogre_Ogre_SceneManager_getRibbonTrail00);
    tolua_function(tolua_S,"hasRibbonTrail",tolua_Ogre_Ogre_SceneManager_hasRibbonTrail00);
    tolua_function(tolua_S,"destroyRibbonTrail",tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail00);
    tolua_function(tolua_S,"destroyRibbonTrail",tolua_Ogre_Ogre_SceneManager_destroyRibbonTrail01);
    tolua_function(tolua_S,"destroyAllRibbonTrails",tolua_Ogre_Ogre_SceneManager_destroyAllRibbonTrails00);
    tolua_function(tolua_S,"createBillboardSet",tolua_Ogre_Ogre_SceneManager_createBillboardSet00);
    tolua_function(tolua_S,"createBillboardSet",tolua_Ogre_Ogre_SceneManager_createBillboardSet01);
    tolua_function(tolua_S,"getBillboardSet",tolua_Ogre_Ogre_SceneManager_getBillboardSet00);
    tolua_function(tolua_S,"hasBillboardSet",tolua_Ogre_Ogre_SceneManager_hasBillboardSet00);
    tolua_function(tolua_S,"destroyBillboardSet",tolua_Ogre_Ogre_SceneManager_destroyBillboardSet00);
    tolua_function(tolua_S,"destroyBillboardSet",tolua_Ogre_Ogre_SceneManager_destroyBillboardSet01);
    tolua_function(tolua_S,"destroyAllBillboardSets",tolua_Ogre_Ogre_SceneManager_destroyAllBillboardSets00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Viewport","Ogre::Viewport","",NULL);
   tolua_beginmodule(tolua_S,"Viewport");
    tolua_function(tolua_S,"getActualDimensions",tolua_Ogre_Ogre_Viewport_getActualDimensions00);
    tolua_function(tolua_S,"getCamera",tolua_Ogre_Ogre_Viewport_getCamera00);
    tolua_function(tolua_S,"setCamera",tolua_Ogre_Ogre_Viewport_setCamera00);
    tolua_function(tolua_S,"getLeft",tolua_Ogre_Ogre_Viewport_getLeft00);
    tolua_function(tolua_S,"getTop",tolua_Ogre_Ogre_Viewport_getTop00);
    tolua_function(tolua_S,"getWidth",tolua_Ogre_Ogre_Viewport_getWidth00);
    tolua_function(tolua_S,"getHeight",tolua_Ogre_Ogre_Viewport_getHeight00);
    tolua_function(tolua_S,"getActualLeft",tolua_Ogre_Ogre_Viewport_getActualLeft00);
    tolua_function(tolua_S,"getActualTop",tolua_Ogre_Ogre_Viewport_getActualTop00);
    tolua_function(tolua_S,"getActualWidth",tolua_Ogre_Ogre_Viewport_getActualWidth00);
    tolua_function(tolua_S,"getActualHeight",tolua_Ogre_Ogre_Viewport_getActualHeight00);
    tolua_function(tolua_S,"setBackgroundColour",tolua_Ogre_Ogre_Viewport_setBackgroundColour00);
    tolua_function(tolua_S,"getBackgroundColour",tolua_Ogre_Ogre_Viewport_getBackgroundColour00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"MeshPtr","Ogre::MeshPtr","",tolua_collect_Ogre__MeshPtr);
   #else
   tolua_cclass(tolua_S,"MeshPtr","Ogre::MeshPtr","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"MeshPtr");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"MeshManager","Ogre::MeshManager","",NULL);
   tolua_beginmodule(tolua_S,"MeshManager");
    tolua_function(tolua_S,"getSingleton",tolua_Ogre_Ogre_MeshManager_getSingleton00);
    tolua_function(tolua_S,"createPlane",tolua_Ogre_Ogre_MeshManager_createPlane00);
    tolua_function(tolua_S,"createPlane",tolua_Ogre_Ogre_MeshManager_createPlane01);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"ResourceGroupManager","Ogre::ResourceGroupManager","",NULL);
   tolua_beginmodule(tolua_S,"ResourceGroupManager");
    tolua_function(tolua_S,"getSingleton",tolua_Ogre_Ogre_ResourceGroupManager_getSingleton00);
    tolua_variable(tolua_S,"DEFAULT_RESOURCE_GROUP_NAME",tolua_get_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME,tolua_set_Ogre__ResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME);
    tolua_variable(tolua_S,"INTERNAL_RESOURCE_GROUP_NAME",tolua_get_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME,tolua_set_Ogre__ResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME);
    tolua_variable(tolua_S,"AUTODETECT_RESOURCE_GROUP_NAME",tolua_get_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME,tolua_set_Ogre__ResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME);
    tolua_variable(tolua_S,"RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS",tolua_get_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS,tolua_set_Ogre__ResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"ManualResourceLoader","Ogre::ManualResourceLoader","",NULL);
   tolua_beginmodule(tolua_S,"ManualResourceLoader");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Resource","Ogre::Resource","",NULL);
   tolua_beginmodule(tolua_S,"Resource");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"ResourceManager","Ogre::ResourceManager","",NULL);
   tolua_beginmodule(tolua_S,"ResourceManager");
    tolua_function(tolua_S,"remove",tolua_Ogre_Ogre_ResourceManager_remove00);
    tolua_function(tolua_S,"resourceExists",tolua_Ogre_Ogre_ResourceManager_resourceExists00);
    tolua_function(tolua_S,"prepare",tolua_Ogre_Ogre_ResourceManager_prepare00);
    tolua_function(tolua_S,"load",tolua_Ogre_Ogre_ResourceManager_load00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CompositorInstance","Ogre::CompositorInstance","",NULL);
   tolua_beginmodule(tolua_S,"CompositorInstance");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CompositorLogic","Ogre::CompositorLogic","",NULL);
   tolua_beginmodule(tolua_S,"CompositorLogic");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CompositorManager","Ogre::CompositorManager","",NULL);
   tolua_beginmodule(tolua_S,"CompositorManager");
    tolua_function(tolua_S,"initialise",tolua_Ogre_Ogre_CompositorManager_initialise00);
    tolua_function(tolua_S,"addCompositor",tolua_Ogre_Ogre_CompositorManager_addCompositor00);
    tolua_function(tolua_S,"removeCompositor",tolua_Ogre_Ogre_CompositorManager_removeCompositor00);
    tolua_function(tolua_S,"setCompositorEnabled",tolua_Ogre_Ogre_CompositorManager_setCompositorEnabled00);
    tolua_function(tolua_S,"freePooledTextures",tolua_Ogre_Ogre_CompositorManager_freePooledTextures00);
    tolua_function(tolua_S,"registerCompositorLogic",tolua_Ogre_Ogre_CompositorManager_registerCompositorLogic00);
    tolua_function(tolua_S,"unregisterCompositorLogic",tolua_Ogre_Ogre_CompositorManager_unregisterCompositorLogic00);
    tolua_function(tolua_S,"getCompositorLogic",tolua_Ogre_Ogre_CompositorManager_getCompositorLogic00);
    tolua_function(tolua_S,"getSingleton",tolua_Ogre_Ogre_CompositorManager_getSingleton00);
    tolua_function(tolua_S,"getSingletonPtr",tolua_Ogre_Ogre_CompositorManager_getSingletonPtr00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   tolua_constant(tolua_S,"BBO_TOP_LEFT",Ogre::BBO_TOP_LEFT);
   tolua_constant(tolua_S,"BBO_TOP_CENTER",Ogre::BBO_TOP_CENTER);
   tolua_constant(tolua_S,"BBO_TOP_RIGHT",Ogre::BBO_TOP_RIGHT);
   tolua_constant(tolua_S,"BBO_CENTER_LEFT",Ogre::BBO_CENTER_LEFT);
   tolua_constant(tolua_S,"BBO_CENTER",Ogre::BBO_CENTER);
   tolua_constant(tolua_S,"BBO_CENTER_RIGHT",Ogre::BBO_CENTER_RIGHT);
   tolua_constant(tolua_S,"BBO_BOTTOM_LEFT",Ogre::BBO_BOTTOM_LEFT);
   tolua_constant(tolua_S,"BBO_BOTTOM_CENTER",Ogre::BBO_BOTTOM_CENTER);
   tolua_constant(tolua_S,"BBO_BOTTOM_RIGHT",Ogre::BBO_BOTTOM_RIGHT);
   tolua_constant(tolua_S,"BBR_VERTEX",Ogre::BBR_VERTEX);
   tolua_constant(tolua_S,"BBR_TEXCOORD",Ogre::BBR_TEXCOORD);
   tolua_constant(tolua_S,"BBT_POINT",Ogre::BBT_POINT);
   tolua_constant(tolua_S,"BBT_ORIENTED_COMMON",Ogre::BBT_ORIENTED_COMMON);
   tolua_constant(tolua_S,"BBT_ORIENTED_SELF",Ogre::BBT_ORIENTED_SELF);
   tolua_constant(tolua_S,"BBT_PERPENDICULAR_COMMON",Ogre::BBT_PERPENDICULAR_COMMON);
   tolua_constant(tolua_S,"BBT_PERPENDICULAR_SELF",Ogre::BBT_PERPENDICULAR_SELF);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"BillboardSet","Ogre::BillboardSet","Ogre::MovableObject",tolua_collect_Ogre__BillboardSet);
   #else
   tolua_cclass(tolua_S,"BillboardSet","Ogre::BillboardSet","Ogre::MovableObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"BillboardSet");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_BillboardSet_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_BillboardSet_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_BillboardSet_new00_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_BillboardSet_delete00);
    tolua_function(tolua_S,"createBillboard",tolua_Ogre_Ogre_BillboardSet_createBillboard00);
    tolua_function(tolua_S,"createBillboard",tolua_Ogre_Ogre_BillboardSet_createBillboard01);
    tolua_function(tolua_S,"createBillboard",tolua_Ogre_Ogre_BillboardSet_createBillboard02);
    tolua_function(tolua_S,"createBillboard",tolua_Ogre_Ogre_BillboardSet_createBillboard03);
    tolua_function(tolua_S,"getNumBillboards",tolua_Ogre_Ogre_BillboardSet_getNumBillboards00);
    tolua_function(tolua_S,"setAutoextend",tolua_Ogre_Ogre_BillboardSet_setAutoextend00);
    tolua_function(tolua_S,"getAutoextend",tolua_Ogre_Ogre_BillboardSet_getAutoextend00);
    tolua_function(tolua_S,"setSortingEnabled",tolua_Ogre_Ogre_BillboardSet_setSortingEnabled00);
    tolua_function(tolua_S,"getSortingEnabled",tolua_Ogre_Ogre_BillboardSet_getSortingEnabled00);
    tolua_function(tolua_S,"setPoolSize",tolua_Ogre_Ogre_BillboardSet_setPoolSize00);
    tolua_function(tolua_S,"getPoolSize",tolua_Ogre_Ogre_BillboardSet_getPoolSize00);
    tolua_function(tolua_S,"clear",tolua_Ogre_Ogre_BillboardSet_clear00);
    tolua_function(tolua_S,"getBillboard",tolua_Ogre_Ogre_BillboardSet_getBillboard00);
    tolua_function(tolua_S,"removeBillboard",tolua_Ogre_Ogre_BillboardSet_removeBillboard00);
    tolua_function(tolua_S,"removeBillboard",tolua_Ogre_Ogre_BillboardSet_removeBillboard01);
    tolua_function(tolua_S,"setBillboardOrigin",tolua_Ogre_Ogre_BillboardSet_setBillboardOrigin00);
    tolua_function(tolua_S,"getBillboardOrigin",tolua_Ogre_Ogre_BillboardSet_getBillboardOrigin00);
    tolua_function(tolua_S,"setBillboardRotationType",tolua_Ogre_Ogre_BillboardSet_setBillboardRotationType00);
    tolua_function(tolua_S,"getBillboardRotationType",tolua_Ogre_Ogre_BillboardSet_getBillboardRotationType00);
    tolua_function(tolua_S,"setDefaultDimensions",tolua_Ogre_Ogre_BillboardSet_setDefaultDimensions00);
    tolua_function(tolua_S,"setDefaultWidth",tolua_Ogre_Ogre_BillboardSet_setDefaultWidth00);
    tolua_function(tolua_S,"getDefaultWidth",tolua_Ogre_Ogre_BillboardSet_getDefaultWidth00);
    tolua_function(tolua_S,"setDefaultHeight",tolua_Ogre_Ogre_BillboardSet_setDefaultHeight00);
    tolua_function(tolua_S,"getDefaultHeight",tolua_Ogre_Ogre_BillboardSet_getDefaultHeight00);
    tolua_function(tolua_S,"setMaterialName",tolua_Ogre_Ogre_BillboardSet_setMaterialName00);
    tolua_function(tolua_S,"setMaterialName",tolua_Ogre_Ogre_BillboardSet_setMaterialName01);
    tolua_function(tolua_S,"getMaterialName",tolua_Ogre_Ogre_BillboardSet_getMaterialName00);
    tolua_function(tolua_S,"getCullIndividually",tolua_Ogre_Ogre_BillboardSet_getCullIndividually00);
    tolua_function(tolua_S,"setCullIndividually",tolua_Ogre_Ogre_BillboardSet_setCullIndividually00);
    tolua_function(tolua_S,"setBillboardType",tolua_Ogre_Ogre_BillboardSet_setBillboardType00);
    tolua_function(tolua_S,"getBillboardType",tolua_Ogre_Ogre_BillboardSet_getBillboardType00);
    tolua_function(tolua_S,"setCommonDirection",tolua_Ogre_Ogre_BillboardSet_setCommonDirection00);
    tolua_function(tolua_S,"getCommonDirection",tolua_Ogre_Ogre_BillboardSet_getCommonDirection00);
    tolua_function(tolua_S,"setCommonUpVector",tolua_Ogre_Ogre_BillboardSet_setCommonUpVector00);
    tolua_function(tolua_S,"getCommonUpVector",tolua_Ogre_Ogre_BillboardSet_getCommonUpVector00);
    tolua_variable(tolua_S,"__Renderable__",tolua_get_Ogre__BillboardSet___Renderable__,NULL);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Billboard","Ogre::Billboard","",tolua_collect_Ogre__Billboard);
   #else
   tolua_cclass(tolua_S,"Billboard","Ogre::Billboard","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Billboard");
    tolua_variable(tolua_S,"mPosition",tolua_get_Ogre__Billboard_mPosition,tolua_set_Ogre__Billboard_mPosition);
    tolua_variable(tolua_S,"mDirection",tolua_get_Ogre__Billboard_mDirection,tolua_set_Ogre__Billboard_mDirection);
    tolua_variable(tolua_S,"mParentSet",tolua_get_Ogre__Billboard_mParentSet_ptr,tolua_set_Ogre__Billboard_mParentSet_ptr);
    tolua_variable(tolua_S,"mColour",tolua_get_Ogre__Billboard_mColour,tolua_set_Ogre__Billboard_mColour);
    tolua_variable(tolua_S,"mRotation",tolua_get_Ogre__Billboard_mRotation,tolua_set_Ogre__Billboard_mRotation);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Billboard_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Billboard_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Billboard_new00_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_Billboard_delete00);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Billboard_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Billboard_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Billboard_new01_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Billboard_new02);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Billboard_new02_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Billboard_new02_local);
    tolua_function(tolua_S,"getRotation",tolua_Ogre_Ogre_Billboard_getRotation00);
    tolua_function(tolua_S,"setRotation",tolua_Ogre_Ogre_Billboard_setRotation00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Billboard_setPosition00);
    tolua_function(tolua_S,"setPosition",tolua_Ogre_Ogre_Billboard_setPosition01);
    tolua_function(tolua_S,"getPosition",tolua_Ogre_Ogre_Billboard_getPosition00);
    tolua_function(tolua_S,"setDimensions",tolua_Ogre_Ogre_Billboard_setDimensions00);
    tolua_function(tolua_S,"resetDimensions",tolua_Ogre_Ogre_Billboard_resetDimensions00);
    tolua_function(tolua_S,"setColour",tolua_Ogre_Ogre_Billboard_setColour00);
    tolua_function(tolua_S,"getColour",tolua_Ogre_Ogre_Billboard_getColour00);
    tolua_function(tolua_S,"hasOwnDimensions",tolua_Ogre_Ogre_Billboard_hasOwnDimensions00);
    tolua_function(tolua_S,"getOwnWidth",tolua_Ogre_Ogre_Billboard_getOwnWidth00);
    tolua_function(tolua_S,"getOwnHeight",tolua_Ogre_Ogre_Billboard_getOwnHeight00);
    tolua_function(tolua_S,"_notifyOwner",tolua_Ogre_Ogre_Billboard__notifyOwner00);
    tolua_function(tolua_S,"isUseTexcoordRect",tolua_Ogre_Ogre_Billboard_isUseTexcoordRect00);
    tolua_function(tolua_S,"setTexcoordIndex",tolua_Ogre_Ogre_Billboard_setTexcoordIndex00);
    tolua_function(tolua_S,"getTexcoordIndex",tolua_Ogre_Ogre_Billboard_getTexcoordIndex00);
    tolua_function(tolua_S,"setTexcoordRect",tolua_Ogre_Ogre_Billboard_setTexcoordRect00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"OgreBites",0);
  tolua_beginmodule(tolua_S,"OgreBites");
   tolua_constant(tolua_S,"CS_FREELOOK",OgreBites::CS_FREELOOK);
   tolua_constant(tolua_S,"CS_ORBIT",OgreBites::CS_ORBIT);
   tolua_constant(tolua_S,"CS_MANUAL",OgreBites::CS_MANUAL);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SdkCameraMan","OgreBites::SdkCameraMan","",tolua_collect_OgreBites__SdkCameraMan);
   #else
   tolua_cclass(tolua_S,"SdkCameraMan","OgreBites::SdkCameraMan","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SdkCameraMan");
    tolua_function(tolua_S,"new",tolua_Ogre_OgreBites_SdkCameraMan_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_OgreBites_SdkCameraMan_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_OgreBites_SdkCameraMan_new00_local);
    tolua_function(tolua_S,"setCamera",tolua_Ogre_OgreBites_SdkCameraMan_setCamera00);
    tolua_function(tolua_S,"getCamera",tolua_Ogre_OgreBites_SdkCameraMan_getCamera00);
    tolua_function(tolua_S,"setTarget",tolua_Ogre_OgreBites_SdkCameraMan_setTarget00);
    tolua_function(tolua_S,"getTarget",tolua_Ogre_OgreBites_SdkCameraMan_getTarget00);
    tolua_function(tolua_S,"setYawPitchDist",tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist00);
    tolua_function(tolua_S,"setYawPitchDist",tolua_Ogre_OgreBites_SdkCameraMan_setYawPitchDist01);
    tolua_function(tolua_S,"setTopSpeed",tolua_Ogre_OgreBites_SdkCameraMan_setTopSpeed00);
    tolua_function(tolua_S,"getTopSpeed",tolua_Ogre_OgreBites_SdkCameraMan_getTopSpeed00);
    tolua_function(tolua_S,"setStyle",tolua_Ogre_OgreBites_SdkCameraMan_setStyle00);
    tolua_function(tolua_S,"getStyle",tolua_Ogre_OgreBites_SdkCameraMan_getStyle00);
    tolua_function(tolua_S,"manualStop",tolua_Ogre_OgreBites_SdkCameraMan_manualStop00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Any","Ogre::Any","",tolua_collect_Ogre__Any);
   #else
   tolua_cclass(tolua_S,"Any","Ogre::Any","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Any");
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Any_new00);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Any_new00_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Any_new00_local);
    tolua_function(tolua_S,"new",tolua_Ogre_Ogre_Any_new01);
    tolua_function(tolua_S,"new_local",tolua_Ogre_Ogre_Any_new01_local);
    tolua_function(tolua_S,".call",tolua_Ogre_Ogre_Any_new01_local);
    tolua_function(tolua_S,"delete",tolua_Ogre_Ogre_Any_delete00);
    tolua_function(tolua_S,"isEmpty",tolua_Ogre_Ogre_Any_isEmpty00);
    tolua_function(tolua_S,"getType",tolua_Ogre_Ogre_Any_getType00);
    tolua_function(tolua_S,"destroy",tolua_Ogre_Ogre_Any_destroy00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Ogre (lua_State* tolua_S) {
 return tolua_Ogre_open(tolua_S);
};
#endif

