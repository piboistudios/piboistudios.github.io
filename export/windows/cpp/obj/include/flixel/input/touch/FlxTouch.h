// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)

namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES FlxTouch_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();

	public:
		enum { _hx_ClassId = 0x07f8ee8a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.touch.FlxTouch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.input.touch.FlxTouch"); }

		hx::ObjectPtr< FlxTouch_obj > __new() {
			hx::ObjectPtr< FlxTouch_obj > __this = new FlxTouch_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxTouch_obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxTouch_obj *__this = (FlxTouch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTouch_obj), false, "flixel.input.touch.FlxTouch"));
			*(void **)__this = FlxTouch_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxTouch","\x0d","\x22","\x0d","\xd1"); }

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 