// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient
#define INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,transition,_TransitionFade,GraphicDiagonalGradient)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace transition{
namespace _TransitionFade{


class HXCPP_CLASS_ATTRIBUTES GraphicDiagonalGradient_obj : public  ::openfl::_legacy::display::BitmapData_obj
{
	public:
		typedef  ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicDiagonalGradient_obj OBJ_;
		GraphicDiagonalGradient_obj();

	public:
		enum { _hx_ClassId = 0x0f45ea21 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition._TransitionFade.GraphicDiagonalGradient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.transition._TransitionFade.GraphicDiagonalGradient"); }
		static hx::ObjectPtr< GraphicDiagonalGradient_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static hx::ObjectPtr< GraphicDiagonalGradient_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicDiagonalGradient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicDiagonalGradient","\xad","\xe6","\x35","\x6b"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace addons
} // end namespace transition
} // end namespace _TransitionFade

#endif /* INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient */ 
