// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_dat__Data_LegsKind_Impl_
#include <dat/_Data/LegsKind_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0eced820e81014c9_331_toString,"dat._Data.LegsKind_Impl_","toString",0x79a629c5,"dat._Data.LegsKind_Impl_.toString","cdb/Module.hx",331,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_0eced820e81014c9_206_boot,"dat._Data.LegsKind_Impl_","boot",0x73d81ccb,"dat._Data.LegsKind_Impl_.boot","cdb/Module.hx",206,0x02d48d44)
namespace dat{
namespace _Data{

void LegsKind_Impl__obj::__construct() { }

Dynamic LegsKind_Impl__obj::__CreateEmpty() { return new LegsKind_Impl__obj; }

void *LegsKind_Impl__obj::_hx_vtable = 0;

Dynamic LegsKind_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LegsKind_Impl__obj > _hx_result = new LegsKind_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LegsKind_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x710e330b;
}

::String LegsKind_Impl__obj::standard;

::String LegsKind_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_0eced820e81014c9_331_toString)
HXDLIN( 331)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LegsKind_Impl__obj,toString,return )


LegsKind_Impl__obj::LegsKind_Impl__obj()
{
}

bool LegsKind_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LegsKind_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo LegsKind_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &LegsKind_Impl__obj::standard,HX_HCSTRING("standard","\x3d","\x37","\x78","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LegsKind_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LegsKind_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LegsKind_Impl__obj::standard,"standard");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LegsKind_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LegsKind_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LegsKind_Impl__obj::standard,"standard");
};

#endif

hx::Class LegsKind_Impl__obj::__mClass;

static ::String LegsKind_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("standard","\x3d","\x37","\x78","\xea"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void LegsKind_Impl__obj::__register()
{
	hx::Object *dummy = new LegsKind_Impl__obj;
	LegsKind_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("dat._Data.LegsKind_Impl_","\x75","\x8e","\xb0","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LegsKind_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LegsKind_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LegsKind_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LegsKind_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LegsKind_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LegsKind_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LegsKind_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LegsKind_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0eced820e81014c9_206_boot)
HXDLIN( 206)		standard = HX_("standard",3d,37,78,ea);
            	}
}

} // end namespace dat
} // end namespace _Data
