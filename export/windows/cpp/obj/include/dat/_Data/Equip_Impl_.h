// Generated by Haxe 3.4.4
#ifndef INCLUDED_dat__Data_Equip_Impl_
#define INCLUDED_dat__Data_Equip_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(dat,_Data,Equip_Impl_)

namespace dat{
namespace _Data{


class HXCPP_CLASS_ATTRIBUTES Equip_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Equip_Impl__obj OBJ_;
		Equip_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1d408b5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dat._Data.Equip_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"dat._Data.Equip_Impl_"); }

		hx::ObjectPtr< Equip_Impl__obj > __new() {
			hx::ObjectPtr< Equip_Impl__obj > __this = new Equip_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Equip_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Equip_Impl__obj *__this = (Equip_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Equip_Impl__obj), false, "dat._Data.Equip_Impl_"));
			*(void **)__this = Equip_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Equip_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Equip_Impl_","\x30","\xcf","\xc4","\xf8"); }

		static ::String get_id( ::Dynamic this1);
		static ::Dynamic get_id_dyn();

		static bool get_twoHanded( ::Dynamic this1);
		static ::Dynamic get_twoHanded_dyn();

		static Float get_recoil( ::Dynamic this1);
		static ::Dynamic get_recoil_dyn();

		static Float get_bulletLifespan( ::Dynamic this1);
		static ::Dynamic get_bulletLifespan_dyn();

		static Float get_bulletSpeed( ::Dynamic this1);
		static ::Dynamic get_bulletSpeed_dyn();

		static Float get_firingRate( ::Dynamic this1);
		static ::Dynamic get_firingRate_dyn();

		static ::String get_bulletType( ::Dynamic this1);
		static ::Dynamic get_bulletType_dyn();

};

} // end namespace dat
} // end namespace _Data

#endif /* INCLUDED_dat__Data_Equip_Impl_ */ 
