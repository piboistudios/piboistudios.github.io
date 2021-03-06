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
#ifndef INCLUDED_flixel_addons_display_FlxNestedSprite
#include <flixel/addons/display/FlxNestedSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_util_mechanica_IPart
#include <util/mechanica/IPart.h>
#endif
#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif
#ifndef INCLUDED_util_mechanica_ThrusterUnit
#include <util/mechanica/ThrusterUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_504816f1f05062ac_103_new,"util.mechanica.ThrusterUnit","new",0x646e94d8,"util.mechanica.ThrusterUnit.new","util/mechanica/Part.hx",103,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_504816f1f05062ac_118_ready,"util.mechanica.ThrusterUnit","ready",0x9a6972db,"util.mechanica.ThrusterUnit.ready","util/mechanica/Part.hx",118,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_504816f1f05062ac_122_fire,"util.mechanica.ThrusterUnit","fire",0x770cf83e,"util.mechanica.ThrusterUnit.fire","util/mechanica/Part.hx",122,0x51e4a40c)
namespace util{
namespace mechanica{

void ThrusterUnit_obj::__construct( ::Dynamic X, ::Dynamic Y){
            	HX_STACKFRAME(&_hx_pos_504816f1f05062ac_103_new)
HXLINE( 110)		this->canFire = true;
HXLINE( 113)		super::__construct(X,Y);
HXLINE( 114)		this->type = HX_("thruster",05,dd,80,0e);
            	}

Dynamic ThrusterUnit_obj::__CreateEmpty() { return new ThrusterUnit_obj; }

void *ThrusterUnit_obj::_hx_vtable = 0;

Dynamic ThrusterUnit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThrusterUnit_obj > _hx_result = new ThrusterUnit_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ThrusterUnit_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x2e105115;
		}
	} else {
		if (inClassId<=(int)0x5f54aa24) {
			return inClassId==(int)0x4ae160ee || inClassId==(int)0x5f54aa24;
		} else {
			return inClassId==(int)0x6706dc1b;
		}
	}
}

bool ThrusterUnit_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_504816f1f05062ac_118_ready)
HXDLIN( 118)		return this->canFire;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThrusterUnit_obj,ready,return )

void ThrusterUnit_obj::fire(){
            	HX_STACKFRAME(&_hx_pos_504816f1f05062ac_122_fire)
HXDLIN( 122)		this->canFire = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThrusterUnit_obj,fire,(void))


hx::ObjectPtr< ThrusterUnit_obj > ThrusterUnit_obj::__new( ::Dynamic X, ::Dynamic Y) {
	hx::ObjectPtr< ThrusterUnit_obj > __this = new ThrusterUnit_obj();
	__this->__construct(X,Y);
	return __this;
}

hx::ObjectPtr< ThrusterUnit_obj > ThrusterUnit_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y) {
	ThrusterUnit_obj *__this = (ThrusterUnit_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ThrusterUnit_obj), true, "util.mechanica.ThrusterUnit"));
	*(void **)__this = ThrusterUnit_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

ThrusterUnit_obj::ThrusterUnit_obj()
{
}

void ThrusterUnit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThrusterUnit);
	HX_MARK_MEMBER_NAME(ignitionEnUsage,"ignitionEnUsage");
	HX_MARK_MEMBER_NAME(driveEnUsage,"driveEnUsage");
	HX_MARK_MEMBER_NAME(topSpeed,"topSpeed");
	HX_MARK_MEMBER_NAME(_acceleration,"_acceleration");
	HX_MARK_MEMBER_NAME(flareSprite,"flareSprite");
	HX_MARK_MEMBER_NAME(canFire,"canFire");
	 ::util::mechanica::Part_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ThrusterUnit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ignitionEnUsage,"ignitionEnUsage");
	HX_VISIT_MEMBER_NAME(driveEnUsage,"driveEnUsage");
	HX_VISIT_MEMBER_NAME(topSpeed,"topSpeed");
	HX_VISIT_MEMBER_NAME(_acceleration,"_acceleration");
	HX_VISIT_MEMBER_NAME(flareSprite,"flareSprite");
	HX_VISIT_MEMBER_NAME(canFire,"canFire");
	 ::util::mechanica::Part_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ThrusterUnit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return hx::Val( fire_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canFire") ) { return hx::Val( canFire ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topSpeed") ) { return hx::Val( topSpeed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flareSprite") ) { return hx::Val( flareSprite ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"driveEnUsage") ) { return hx::Val( driveEnUsage ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { return hx::Val( _acceleration ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignitionEnUsage") ) { return hx::Val( ignitionEnUsage ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ThrusterUnit_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canFire") ) { canFire=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topSpeed") ) { topSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flareSprite") ) { flareSprite=inValue.Cast<  ::flixel::addons::display::FlxNestedSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"driveEnUsage") ) { driveEnUsage=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { _acceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignitionEnUsage") ) { ignitionEnUsage=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThrusterUnit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ignitionEnUsage","\x8b","\xc9","\xbf","\x1a"));
	outFields->push(HX_HCSTRING("driveEnUsage","\x0e","\xac","\x72","\x2a"));
	outFields->push(HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf"));
	outFields->push(HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c"));
	outFields->push(HX_HCSTRING("flareSprite","\x73","\x13","\x1b","\x3e"));
	outFields->push(HX_HCSTRING("canFire","\xe6","\xbb","\x13","\x62"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ThrusterUnit_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ThrusterUnit_obj,ignitionEnUsage),HX_HCSTRING("ignitionEnUsage","\x8b","\xc9","\xbf","\x1a")},
	{hx::fsFloat,(int)offsetof(ThrusterUnit_obj,driveEnUsage),HX_HCSTRING("driveEnUsage","\x0e","\xac","\x72","\x2a")},
	{hx::fsFloat,(int)offsetof(ThrusterUnit_obj,topSpeed),HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf")},
	{hx::fsFloat,(int)offsetof(ThrusterUnit_obj,_acceleration),HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c")},
	{hx::fsObject /*::flixel::addons::display::FlxNestedSprite*/ ,(int)offsetof(ThrusterUnit_obj,flareSprite),HX_HCSTRING("flareSprite","\x73","\x13","\x1b","\x3e")},
	{hx::fsBool,(int)offsetof(ThrusterUnit_obj,canFire),HX_HCSTRING("canFire","\xe6","\xbb","\x13","\x62")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ThrusterUnit_obj_sStaticStorageInfo = 0;
#endif

static ::String ThrusterUnit_obj_sMemberFields[] = {
	HX_HCSTRING("ignitionEnUsage","\x8b","\xc9","\xbf","\x1a"),
	HX_HCSTRING("driveEnUsage","\x0e","\xac","\x72","\x2a"),
	HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf"),
	HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c"),
	HX_HCSTRING("flareSprite","\x73","\x13","\x1b","\x3e"),
	HX_HCSTRING("canFire","\xe6","\xbb","\x13","\x62"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void ThrusterUnit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThrusterUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThrusterUnit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThrusterUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class ThrusterUnit_obj::__mClass;

void ThrusterUnit_obj::__register()
{
	hx::Object *dummy = new ThrusterUnit_obj;
	ThrusterUnit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.ThrusterUnit","\xe6","\x88","\x25","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ThrusterUnit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ThrusterUnit_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThrusterUnit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThrusterUnit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThrusterUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThrusterUnit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
