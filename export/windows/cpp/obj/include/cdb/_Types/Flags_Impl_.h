// Generated by Haxe 3.4.4
#ifndef INCLUDED_cdb__Types_Flags_Impl_
#define INCLUDED_cdb__Types_Flags_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cdb,_Types,FlagsIterator)
HX_DECLARE_CLASS2(cdb,_Types,Flags_Impl_)

namespace cdb{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES Flags_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Flags_Impl__obj OBJ_;
		Flags_Impl__obj();

	public:
		enum { _hx_ClassId = 0x71bd296c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cdb._Types.Flags_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"cdb._Types.Flags_Impl_"); }

		hx::ObjectPtr< Flags_Impl__obj > __new() {
			hx::ObjectPtr< Flags_Impl__obj > __this = new Flags_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Flags_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Flags_Impl__obj *__this = (Flags_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Flags_Impl__obj), false, "cdb._Types.Flags_Impl_"));
			*(void **)__this = Flags_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Flags_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Flags_Impl_","\x07","\x2f","\xae","\x47"); }

		static int _new(int x);
		static ::Dynamic _new_dyn();

		static bool has(int this1, ::Dynamic t);
		static ::Dynamic has_dyn();

		static void set(int this1, ::Dynamic t);
		static ::Dynamic set_dyn();

		static void unset(int this1, ::Dynamic t);
		static ::Dynamic unset_dyn();

		static  ::cdb::_Types::FlagsIterator iterator(int this1);
		static ::Dynamic iterator_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace cdb
} // end namespace _Types

#endif /* INCLUDED_cdb__Types_Flags_Impl_ */ 
