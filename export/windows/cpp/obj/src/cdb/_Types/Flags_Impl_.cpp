// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_cdb__Types_FlagsIterator
#include <cdb/_Types/FlagsIterator.h>
#endif
#ifndef INCLUDED_cdb__Types_Flags_Impl_
#include <cdb/_Types/Flags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_68__new,"cdb._Types.Flags_Impl_","_new",0xb9fffaaf,"cdb._Types.Flags_Impl_._new","cdb/Types.hx",68,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_73_has,"cdb._Types.Flags_Impl_","has",0xe674fdcc,"cdb._Types.Flags_Impl_.has","cdb/Types.hx",73,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_77_set,"cdb._Types.Flags_Impl_","set",0xe67d5a14,"cdb._Types.Flags_Impl_.set","cdb/Types.hx",77,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_81_unset,"cdb._Types.Flags_Impl_","unset",0xb0d6b1db,"cdb._Types.Flags_Impl_.unset","cdb/Types.hx",81,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_85_iterator,"cdb._Types.Flags_Impl_","iterator",0xaa92ee3c,"cdb._Types.Flags_Impl_.iterator","cdb/Types.hx",85,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_822136b741208de0_89_toInt,"cdb._Types.Flags_Impl_","toInt",0x1df97d26,"cdb._Types.Flags_Impl_.toInt","cdb/Types.hx",89,0xc287d473)
namespace cdb{
namespace _Types{

void Flags_Impl__obj::__construct() { }

Dynamic Flags_Impl__obj::__CreateEmpty() { return new Flags_Impl__obj; }

void *Flags_Impl__obj::_hx_vtable = 0;

Dynamic Flags_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Flags_Impl__obj > _hx_result = new Flags_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Flags_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x71bd296c;
}

int Flags_Impl__obj::_new(int x){
            	HX_STACKFRAME(&_hx_pos_822136b741208de0_68__new)
HXDLIN(  68)		int this1 = x;
HXDLIN(  68)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Flags_Impl__obj,_new,return )

bool Flags_Impl__obj::has(int this1, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_822136b741208de0_73_has)
HXDLIN(  73)		return (((int)this1 & (int)((int)(int)1 << (int)( (int)(t) ))) != (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Flags_Impl__obj,has,return )

void Flags_Impl__obj::set(int this1, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_822136b741208de0_77_set)
HXDLIN(  77)		this1 = ((int)this1 | (int)((int)(int)1 << (int)( (int)(t) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Flags_Impl__obj,set,(void))

void Flags_Impl__obj::unset(int this1, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_822136b741208de0_81_unset)
HXDLIN(  81)		this1 = ((int)this1 & (int)~(((int)(int)1 << (int)( (int)(t) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Flags_Impl__obj,unset,(void))

 ::cdb::_Types::FlagsIterator Flags_Impl__obj::iterator(int this1){
            	HX_GC_STACKFRAME(&_hx_pos_822136b741208de0_85_iterator)
HXDLIN(  85)		int this2 = this1;
HXDLIN(  85)		return  ::cdb::_Types::FlagsIterator_obj::__alloc( HX_CTX ,this2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Flags_Impl__obj,iterator,return )

int Flags_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_822136b741208de0_89_toInt)
HXDLIN(  89)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Flags_Impl__obj,toInt,return )


Flags_Impl__obj::Flags_Impl__obj()
{
}

bool Flags_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unset") ) { outValue = unset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Flags_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Flags_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Flags_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Flags_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Flags_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Flags_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Flags_Impl__obj::__mClass;

static ::String Flags_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unset","\xe9","\xf2","\xee","\xa6"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	::String(null())
};

void Flags_Impl__obj::__register()
{
	hx::Object *dummy = new Flags_Impl__obj;
	Flags_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cdb._Types.Flags_Impl_","\xe0","\x7d","\xf9","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Flags_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Flags_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Flags_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Flags_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Flags_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Flags_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Flags_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cdb
} // end namespace _Types