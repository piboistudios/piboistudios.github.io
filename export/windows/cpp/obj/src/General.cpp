// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_General
#include <General.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ffa4323a868920ef_5_findInList_dat_Part,"General","findInList_dat_Part",0x61daddb8,"General.findInList_dat_Part","General.hx",5,0x3f9e44b6)

void General_obj::__construct() { }

Dynamic General_obj::__CreateEmpty() { return new General_obj; }

void *General_obj::_hx_vtable = 0;

Dynamic General_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< General_obj > _hx_result = new General_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool General_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3315bb40;
}

int General_obj::findInList_dat_Part( ::Dynamic item,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_ffa4323a868920ef_5_findInList_dat_Part)
HXLINE(   6)		{
HXLINE(   6)			int _g1 = (int)0;
HXDLIN(   6)			int _g = list->length;
HXDLIN(   6)			while((_g1 < _g)){
HXLINE(   6)				_g1 = (_g1 + (int)1);
HXDLIN(   6)				int i = (_g1 - (int)1);
HXLINE(   8)				if (hx::IsEq( list->__get(i),item )) {
HXLINE(   9)					return i;
            				}
            			}
            		}
HXLINE(  11)		return (int)-1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(General_obj,findInList_dat_Part,return )


General_obj::General_obj()
{
}

bool General_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"findInList_dat_Part") ) { outValue = findInList_dat_Part_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *General_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *General_obj_sStaticStorageInfo = 0;
#endif

static void General_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(General_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void General_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(General_obj::__mClass,"__mClass");
};

#endif

hx::Class General_obj::__mClass;

static ::String General_obj_sStaticFields[] = {
	HX_HCSTRING("findInList_dat_Part","\x1e","\x02","\xe2","\x20"),
	::String(null())
};

void General_obj::__register()
{
	hx::Object *dummy = new General_obj;
	General_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("General","\x08","\x93","\xac","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &General_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = General_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(General_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< General_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = General_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = General_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = General_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
