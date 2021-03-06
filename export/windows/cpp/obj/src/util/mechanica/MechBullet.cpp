// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxNestedSprite
#include <flixel/addons/display/FlxNestedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_util_interfaces_ICollider
#include <util/interfaces/ICollider.h>
#endif
#ifndef INCLUDED_util_mechanica_MechBullet
#include <util/mechanica/MechBullet.h>
#endif
#ifndef INCLUDED_util_mechanica_MechGroup
#include <util/mechanica/MechGroup.h>
#endif
#ifndef INCLUDED_util_mechanica_Mechanica
#include <util/mechanica/Mechanica.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ae93507672be849_11_new,"util.mechanica.MechBullet","new",0xa26eb28e,"util.mechanica.MechBullet.new","util/mechanica/MechBullet.hx",11,0x3f6d8c20)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae93507672be849_21_update,"util.mechanica.MechBullet","update",0x31cbb49b,"util.mechanica.MechBullet.update","util/mechanica/MechBullet.hx",21,0x3f6d8c20)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae93507672be849_27_collided,"util.mechanica.MechBullet","collided",0x55725638,"util.mechanica.MechBullet.collided","util/mechanica/MechBullet.hx",27,0x3f6d8c20)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae93507672be849_51_collideWith,"util.mechanica.MechBullet","collideWith",0x12e3a8d2,"util.mechanica.MechBullet.collideWith","util/mechanica/MechBullet.hx",51,0x3f6d8c20)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae93507672be849_56_postCollision,"util.mechanica.MechBullet","postCollision",0x122e1fa0,"util.mechanica.MechBullet.postCollision","util/mechanica/MechBullet.hx",56,0x3f6d8c20)
namespace util{
namespace mechanica{

void MechBullet_obj::__construct(Float lifespan, ::util::mechanica::Mechanica parent){
            	HX_STACKFRAME(&_hx_pos_0ae93507672be849_11_new)
HXLINE(  12)		this->parent = parent;
HXLINE(  13)		super::__construct();
HXLINE(  15)		::Global_obj::add(hx::ObjectPtr<OBJ_>(this));
HXLINE(  17)		this->lifespan = lifespan;
            	}

Dynamic MechBullet_obj::__CreateEmpty() { return new MechBullet_obj; }

void *MechBullet_obj::_hx_vtable = 0;

Dynamic MechBullet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MechBullet_obj > _hx_result = new MechBullet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MechBullet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15e89376) {
		if (inClassId<=(int)0x0b6ffd77) {
			if (inClassId<=(int)0x051614e1) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x051614e1;
			} else {
				return inClassId==(int)0x0b6ffd77;
			}
		} else {
			return inClassId==(int)0x15e89376;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

static ::flixel::IFlxSprite_obj _hx_util_mechanica_MechBullet__hx_flixel_IFlxSprite= {
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_active,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_visible,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_alive,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_exists,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::draw,
	( void (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::update,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::destroy,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::kill,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::revive,
	( ::String (hx::Object::*)())&::util::mechanica::MechBullet_obj::toString,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_x,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_y,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_angle,
	( int (hx::Object::*)(int))&::util::mechanica::MechBullet_obj::set_facing,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_moves,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::util::mechanica::MechBullet_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::util::mechanica::MechBullet_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_util_mechanica_MechBullet__hx_flixel_IFlxBasic= {
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_active,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_visible,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_alive,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_exists,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::draw,
	( void (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::update,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::destroy,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::kill,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::revive,
	( ::String (hx::Object::*)())&::util::mechanica::MechBullet_obj::toString,
};

static ::util::interfaces::ICollider_obj _hx_util_mechanica_MechBullet__hx_util_interfaces_ICollider= {
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_active,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_visible,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_alive,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_exists,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::draw,
	( void (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::update,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::destroy,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::kill,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::revive,
	( ::String (hx::Object::*)())&::util::mechanica::MechBullet_obj::toString,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_x,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_y,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::util::mechanica::MechBullet_obj::set_angle,
	( int (hx::Object::*)(int))&::util::mechanica::MechBullet_obj::set_facing,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_moves,
	( bool (hx::Object::*)(bool))&::util::mechanica::MechBullet_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::util::mechanica::MechBullet_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::util::mechanica::MechBullet_obj::setPosition,
	( void (hx::Object::*)( ::Dynamic))&::util::mechanica::MechBullet_obj::collideWith,
	( void (hx::Object::*)())&::util::mechanica::MechBullet_obj::postCollision,
};

void *MechBullet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_util_mechanica_MechBullet__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_util_mechanica_MechBullet__hx_flixel_IFlxBasic;
		case (int)0x626f6101: return &_hx_util_mechanica_MechBullet__hx_util_interfaces_ICollider;
	}
	return super::_hx_getInterface(inHash);
}

void MechBullet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0ae93507672be849_21_update)
HXLINE(  22)		this->super::update(elapsed);
HXLINE(  23)		::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),( ( ::flixel::FlxBasic)(::Global_obj::map) ),this->collided_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE(  24)		::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),::Global_obj::colliders,null(),this->collided_dyn());
            	}


bool MechBullet_obj::collided( ::Dynamic c1, ::Dynamic c2){
            	HX_STACKFRAME(&_hx_pos_0ae93507672be849_27_collided)
HXLINE(  28)		if (::Std_obj::is(c2,hx::ClassOf< ::util::mechanica::Mechanica >())) {
HXLINE(  30)			if (hx::IsEq( hx::TCast<  ::util::mechanica::Mechanica >::cast(c2)->team,this->parent->team )) {
HXLINE(  33)				return false;
            			}
            			else {
HXLINE(  38)				hx::TCast<  ::util::mechanica::Mechanica >::cast(c2)->struckBy(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE(  42)		if (::Std_obj::is(c2,hx::ClassOf< ::util::mechanica::MechBullet >())) {
HXLINE(  44)			return false;
            		}
HXLINE(  46)		this->kill();
HXLINE(  47)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MechBullet_obj,collided,return )

void MechBullet_obj::collideWith( ::Dynamic col){
            	HX_STACKFRAME(&_hx_pos_0ae93507672be849_51_collideWith)
            	}


HX_DEFINE_DYNAMIC_FUNC1(MechBullet_obj,collideWith,(void))

void MechBullet_obj::postCollision(){
            	HX_STACKFRAME(&_hx_pos_0ae93507672be849_56_postCollision)
HXDLIN(  56)		this->kill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MechBullet_obj,postCollision,(void))


hx::ObjectPtr< MechBullet_obj > MechBullet_obj::__new(Float lifespan, ::util::mechanica::Mechanica parent) {
	hx::ObjectPtr< MechBullet_obj > __this = new MechBullet_obj();
	__this->__construct(lifespan,parent);
	return __this;
}

hx::ObjectPtr< MechBullet_obj > MechBullet_obj::__alloc(hx::Ctx *_hx_ctx,Float lifespan, ::util::mechanica::Mechanica parent) {
	MechBullet_obj *__this = (MechBullet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MechBullet_obj), true, "util.mechanica.MechBullet"));
	*(void **)__this = MechBullet_obj::_hx_vtable;
	__this->__construct(lifespan,parent);
	return __this;
}

MechBullet_obj::MechBullet_obj()
{
}

void MechBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MechBullet);
	HX_MARK_MEMBER_NAME(parent,"parent");
	 ::flixel::addons::weapon::FlxBullet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MechBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	 ::flixel::addons::weapon::FlxBullet_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MechBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collided") ) { return hx::Val( collided_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideWith") ) { return hx::Val( collideWith_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postCollision") ) { return hx::Val( postCollision_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MechBullet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::util::mechanica::Mechanica >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MechBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MechBullet_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::util::mechanica::Mechanica*/ ,(int)offsetof(MechBullet_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MechBullet_obj_sStaticStorageInfo = 0;
#endif

static ::String MechBullet_obj_sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collided","\x26","\xdf","\xd5","\xc9"),
	HX_HCSTRING("collideWith","\xa4","\xe8","\xb5","\xc0"),
	HX_HCSTRING("postCollision","\xf2","\x77","\xed","\x88"),
	::String(null()) };

static void MechBullet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MechBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MechBullet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MechBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class MechBullet_obj::__mClass;

void MechBullet_obj::__register()
{
	hx::Object *dummy = new MechBullet_obj;
	MechBullet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.MechBullet","\x9c","\x13","\xab","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MechBullet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MechBullet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MechBullet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MechBullet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MechBullet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MechBullet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
