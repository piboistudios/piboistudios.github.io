// Generated by Haxe 3.4.4
#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxNestedSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,StrNameLabel)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(util,control,Controller)
HX_DECLARE_CLASS2(util,control,PlayerController)
HX_DECLARE_CLASS2(util,mechanica,Mechanica)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x6c4d5f81 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Player"); }
		static hx::ObjectPtr< Player_obj > __new();
		static hx::ObjectPtr< Player_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		 ::util::control::PlayerController controller;
		::Array< ::Dynamic> partList;
		::Array< ::Dynamic> mechanica;
		int current;
		bool setMechanica(int slot);
		::Dynamic setMechanica_dyn();

		 ::util::mechanica::Mechanica getMechanica();
		::Dynamic getMechanica_dyn();

		bool addPart(::String _part);
		::Dynamic addPart_dyn();

		bool removePart(::String _part);
		::Dynamic removePart_dyn();

		::Array< ::Dynamic> getPartsOfType(int type);
		::Dynamic getPartsOfType_dyn();

};


#endif /* INCLUDED_Player */ 