// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireMode
#include <flixel/addons/weapon/FlxWeaponFireMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_AT_MOUSE;

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_AT_POSITION(Float x,Float y)
{
	return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_("FIRE_AT_POSITION",6c,bb,5a,be),0,2)->_hx_init(0,x)->_hx_init(1,y);
}

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_AT_TARGET( ::flixel::FlxSprite target)
{
	return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_("FIRE_AT_TARGET",54,e3,ee,41),1,1)->_hx_init(0,target);
}

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_FROM_ANGLE( ::flixel::util::helpers::FlxBounds angle)
{
	return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_("FIRE_FROM_ANGLE",07,1d,f3,0d),2,1)->_hx_init(0,angle);
}

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_FROM_PARENT_ANGLE( ::flixel::util::helpers::FlxBounds angleNoise)
{
	return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f),3,1)->_hx_init(0,angleNoise);
}

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_FROM_PARENT_FACING( ::flixel::util::helpers::FlxBounds angleNoise)
{
	return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11),4,1)->_hx_init(0,angleNoise);
}

bool FlxWeaponFireMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FIRE_AT_MOUSE",62,bb,33,e6)) { outValue = FlxWeaponFireMode_obj::FIRE_AT_MOUSE; return true; }
	if (inName==HX_("FIRE_AT_POSITION",6c,bb,5a,be)) { outValue = FlxWeaponFireMode_obj::FIRE_AT_POSITION_dyn(); return true; }
	if (inName==HX_("FIRE_AT_TARGET",54,e3,ee,41)) { outValue = FlxWeaponFireMode_obj::FIRE_AT_TARGET_dyn(); return true; }
	if (inName==HX_("FIRE_FROM_ANGLE",07,1d,f3,0d)) { outValue = FlxWeaponFireMode_obj::FIRE_FROM_ANGLE_dyn(); return true; }
	if (inName==HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f)) { outValue = FlxWeaponFireMode_obj::FIRE_FROM_PARENT_ANGLE_dyn(); return true; }
	if (inName==HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11)) { outValue = FlxWeaponFireMode_obj::FIRE_FROM_PARENT_FACING_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxWeaponFireMode_obj)

int FlxWeaponFireMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FIRE_AT_MOUSE",62,bb,33,e6)) return 5;
	if (inName==HX_("FIRE_AT_POSITION",6c,bb,5a,be)) return 0;
	if (inName==HX_("FIRE_AT_TARGET",54,e3,ee,41)) return 1;
	if (inName==HX_("FIRE_FROM_ANGLE",07,1d,f3,0d)) return 2;
	if (inName==HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f)) return 3;
	if (inName==HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxWeaponFireMode_obj,FIRE_AT_POSITION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_AT_TARGET,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_ANGLE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_PARENT_ANGLE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_PARENT_FACING,return)

int FlxWeaponFireMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FIRE_AT_MOUSE",62,bb,33,e6)) return 0;
	if (inName==HX_("FIRE_AT_POSITION",6c,bb,5a,be)) return 2;
	if (inName==HX_("FIRE_AT_TARGET",54,e3,ee,41)) return 1;
	if (inName==HX_("FIRE_FROM_ANGLE",07,1d,f3,0d)) return 1;
	if (inName==HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f)) return 1;
	if (inName==HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val FlxWeaponFireMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FIRE_AT_MOUSE",62,bb,33,e6)) return FIRE_AT_MOUSE;
	if (inName==HX_("FIRE_AT_POSITION",6c,bb,5a,be)) return FIRE_AT_POSITION_dyn();
	if (inName==HX_("FIRE_AT_TARGET",54,e3,ee,41)) return FIRE_AT_TARGET_dyn();
	if (inName==HX_("FIRE_FROM_ANGLE",07,1d,f3,0d)) return FIRE_FROM_ANGLE_dyn();
	if (inName==HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f)) return FIRE_FROM_PARENT_ANGLE_dyn();
	if (inName==HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11)) return FIRE_FROM_PARENT_FACING_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxWeaponFireMode_obj_sStaticFields[] = {
	HX_("FIRE_AT_POSITION",6c,bb,5a,be),
	HX_("FIRE_AT_TARGET",54,e3,ee,41),
	HX_("FIRE_FROM_ANGLE",07,1d,f3,0d),
	HX_("FIRE_FROM_PARENT_ANGLE",ca,a0,c9,3f),
	HX_("FIRE_FROM_PARENT_FACING",23,3a,8f,11),
	HX_("FIRE_AT_MOUSE",62,bb,33,e6),
	::String(null())
};

static void FlxWeaponFireMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWeaponFireMode_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxWeaponFireMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeaponFireMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWeaponFireMode_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
};
#endif

hx::Class FlxWeaponFireMode_obj::__mClass;

Dynamic __Create_FlxWeaponFireMode_obj() { return new FlxWeaponFireMode_obj; }

void FlxWeaponFireMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.addons.weapon.FlxWeaponFireMode","\xde","\x8f","\x06","\x35"), hx::TCanCast< FlxWeaponFireMode_obj >,FlxWeaponFireMode_obj_sStaticFields,0,
	&__Create_FlxWeaponFireMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWeaponFireMode_obj, FlxWeaponFireMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxWeaponFireMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxWeaponFireMode_obj::__GetStatic;
}

void FlxWeaponFireMode_obj::__boot()
{
FIRE_AT_MOUSE = hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6"),5,0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace weapon
