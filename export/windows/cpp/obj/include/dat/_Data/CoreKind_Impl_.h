// Generated by Haxe 3.4.4
#ifndef INCLUDED_dat__Data_CoreKind_Impl_
#define INCLUDED_dat__Data_CoreKind_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(dat,_Data,CoreKind_Impl_)

namespace dat{
namespace _Data{


class HXCPP_CLASS_ATTRIBUTES CoreKind_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CoreKind_Impl__obj OBJ_;
		CoreKind_Impl__obj();

	public:
		enum { _hx_ClassId = 0x198b0405 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dat._Data.CoreKind_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"dat._Data.CoreKind_Impl_"); }

		hx::ObjectPtr< CoreKind_Impl__obj > __new() {
			hx::ObjectPtr< CoreKind_Impl__obj > __this = new CoreKind_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CoreKind_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CoreKind_Impl__obj *__this = (CoreKind_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CoreKind_Impl__obj), false, "dat._Data.CoreKind_Impl_"));
			*(void **)__this = CoreKind_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoreKind_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CoreKind_Impl_","\x53","\x37","\x40","\x4a"); }

		static void __boot();
		static ::String standardCore;
		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace dat
} // end namespace _Data

#endif /* INCLUDED_dat__Data_CoreKind_Impl_ */ 