// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_dat__Data_ThrusterKind_Impl_
#include <dat/_Data/ThrusterKind_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_388459e7de4c245c_331_toString,"dat._Data.ThrusterKind_Impl_","toString",0x991bdba5,"dat._Data.ThrusterKind_Impl_.toString","cdb/Module.hx",331,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_388459e7de4c245c_206_boot,"dat._Data.ThrusterKind_Impl_","boot",0xe2575eab,"dat._Data.ThrusterKind_Impl_.boot","cdb/Module.hx",206,0x02d48d44)
namespace dat{
namespace _Data{

void ThrusterKind_Impl__obj::__construct() { }

Dynamic ThrusterKind_Impl__obj::__CreateEmpty() { return new ThrusterKind_Impl__obj; }

void *ThrusterKind_Impl__obj::_hx_vtable = 0;

Dynamic ThrusterKind_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThrusterKind_Impl__obj > _hx_result = new ThrusterKind_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ThrusterKind_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0159af8f;
}

::String ThrusterKind_Impl__obj::standardThruster;

::String ThrusterKind_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_388459e7de4c245c_331_toString)
HXDLIN( 331)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ThrusterKind_Impl__obj,toString,return )


ThrusterKind_Impl__obj::ThrusterKind_Impl__obj()
{
}

bool ThrusterKind_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ThrusterKind_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ThrusterKind_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ThrusterKind_Impl__obj::standardThruster,HX_HCSTRING("standardThruster","\x62","\xd5","\xbf","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ThrusterKind_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThrusterKind_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ThrusterKind_Impl__obj::standardThruster,"standardThruster");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThrusterKind_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThrusterKind_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThrusterKind_Impl__obj::standardThruster,"standardThruster");
};

#endif

hx::Class ThrusterKind_Impl__obj::__mClass;

static ::String ThrusterKind_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("standardThruster","\x62","\xd5","\xbf","\x2b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void ThrusterKind_Impl__obj::__register()
{
	hx::Object *dummy = new ThrusterKind_Impl__obj;
	ThrusterKind_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("dat._Data.ThrusterKind_Impl_","\x95","\x98","\x38","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThrusterKind_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ThrusterKind_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ThrusterKind_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ThrusterKind_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThrusterKind_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThrusterKind_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThrusterKind_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ThrusterKind_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_388459e7de4c245c_206_boot)
HXDLIN( 206)		standardThruster = HX_("standardThruster",62,d5,bf,2b);
            	}
}

} // end namespace dat
} // end namespace _Data
