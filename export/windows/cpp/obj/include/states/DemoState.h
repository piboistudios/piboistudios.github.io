// Generated by Haxe 3.4.4
#ifndef INCLUDED_states_DemoState
#define INCLUDED_states_DemoState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxNestedSprite)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,DemoState)
HX_DECLARE_CLASS2(util,mechanica,Mechanica)

namespace states{


class HXCPP_CLASS_ATTRIBUTES DemoState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef DemoState_obj OBJ_;
		DemoState_obj();

	public:
		enum { _hx_ClassId = 0x56eeed0c };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.DemoState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"states.DemoState"); }
		static hx::ObjectPtr< DemoState_obj > __new( ::Dynamic MaxSize);
		static hx::ObjectPtr< DemoState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DemoState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DemoState","\xce","\x6d","\x80","\xc6"); }

		 ::flixel::addons::editors::ogmo::FlxOgmoLoader mapData;
		 ::flixel::tile::FlxTilemap map;
		 ::util::mechanica::Mechanica playerMech;
		 ::util::mechanica::Mechanica testMech;
		 ::util::mechanica::Mechanica testMech2;
		void create();

		void setupEnvironment();
		::Dynamic setupEnvironment_dyn();

		 ::util::mechanica::Mechanica buildTestMech();
		::Dynamic buildTestMech_dyn();

		void setupDebugger();
		::Dynamic setupDebugger_dyn();

		void registerMechanicaParts();
		::Dynamic registerMechanicaParts_dyn();

		void update(Float elapsed);

		void collision( ::Dynamic col1, ::Dynamic col2);
		::Dynamic collision_dyn();

		void fixJitter();
		::Dynamic fixJitter_dyn();

		void placeEntities(::String entName, ::Xml entDat);
		::Dynamic placeEntities_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_DemoState */ 
