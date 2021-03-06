// Generated by Haxe 3.4.4
#ifndef INCLUDED_util_mechanica_CarrierUnit
#define INCLUDED_util_mechanica_CarrierUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxNestedSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(util,mechanica,CarrierUnit)
HX_DECLARE_CLASS2(util,mechanica,IPart)
HX_DECLARE_CLASS2(util,mechanica,Part)

namespace util{
namespace mechanica{


class HXCPP_CLASS_ATTRIBUTES CarrierUnit_obj : public  ::util::mechanica::Part_obj
{
	public:
		typedef  ::util::mechanica::Part_obj super;
		typedef CarrierUnit_obj OBJ_;
		CarrierUnit_obj();

	public:
		enum { _hx_ClassId = 0x4880bdc9 };

		void __construct( ::Dynamic X, ::Dynamic Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="util.mechanica.CarrierUnit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"util.mechanica.CarrierUnit"); }
		static hx::ObjectPtr< CarrierUnit_obj > __new( ::Dynamic X, ::Dynamic Y);
		static hx::ObjectPtr< CarrierUnit_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CarrierUnit_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CarrierUnit","\x7c","\x50","\xef","\x4a"); }

		Float stability;
		Float weightCapacity;
		Float performanceWeightCapacity;
};

} // end namespace util
} // end namespace mechanica

#endif /* INCLUDED_util_mechanica_CarrierUnit */ 
