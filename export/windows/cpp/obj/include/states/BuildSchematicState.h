// Generated by Haxe 3.4.4
#ifndef INCLUDED_states_BuildSchematicState
#define INCLUDED_states_BuildSchematicState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIColorSwatch)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS1(states,BuildSchematicState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES BuildSchematicState_obj : public  ::flixel::addons::ui::FlxUIState_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIState_obj super;
		typedef BuildSchematicState_obj OBJ_;
		BuildSchematicState_obj();

	public:
		enum { _hx_ClassId = 0x606b918c };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.BuildSchematicState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"states.BuildSchematicState"); }
		static hx::ObjectPtr< BuildSchematicState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static hx::ObjectPtr< BuildSchematicState_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BuildSchematicState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BuildSchematicState","\xb2","\x8e","\xb4","\xbd"); }

		 ::flixel::addons::ui::FlxUIInputText input;
		 ::flixel::addons::ui::FlxUIDropDownMenu headDrop;
		 ::flixel::addons::ui::FlxUIDropDownMenu legsDrop;
		bool canBuild;
		 ::flixel::addons::ui::FlxUIDropDownMenu armsDrop;
		 ::flixel::addons::ui::FlxUIDropDownMenu coreDrop;
		 ::flixel::addons::ui::FlxUIDropDownMenu thrusterDrop;
		 ::flixel::addons::ui::FlxUIDropDownMenu equip1Drop;
		 ::flixel::addons::ui::FlxUIDropDownMenu equip2Drop;
		 ::flixel::addons::ui::FlxUIDropDownMenu slotDrop;
		 ::haxe::Timer timer;
		 ::flixel::addons::ui::FlxUIColorSwatch lineTest;
		void create();

		void setupInputField();
		::Dynamic setupInputField_dyn();

		void fetchDropDownMenus();
		::Dynamic fetchDropDownMenus_dyn();

		void setupDropDownMenus();
		::Dynamic setupDropDownMenus_dyn();

		void reinsertUIElements();
		::Dynamic reinsertUIElements_dyn();

		void update(Float elapsed);

		 ::Dynamic getRequest(::String id, ::Dynamic target, ::Dynamic data,::cpp::VirtualArray params);

		void backToMain();
		::Dynamic backToMain_dyn();

		void startDemo();
		::Dynamic startDemo_dyn();

		void getEvent(::String id, ::Dynamic target, ::Dynamic data,::cpp::VirtualArray params);

};

} // end namespace states

#endif /* INCLUDED_states_BuildSchematicState */ 
