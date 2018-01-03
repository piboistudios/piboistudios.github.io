// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxNestedSprite
#include <flixel/addons/display/FlxNestedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxZoomCamera
#include <flixel/addons/display/FlxZoomCamera.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_math_MoreMath
#include <math/MoreMath.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_DemoState
#include <states/DemoState.h>
#endif
#ifndef INCLUDED_util_control_Controller
#include <util/control/Controller.h>
#endif
#ifndef INCLUDED_util_interfaces_ICollider
#include <util/interfaces/ICollider.h>
#endif
#ifndef INCLUDED_util_mechanica_ArmUnits
#include <util/mechanica/ArmUnits.h>
#endif
#ifndef INCLUDED_util_mechanica_CarrierUnit
#include <util/mechanica/CarrierUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_CoreUnit
#include <util/mechanica/CoreUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_HeadUnit
#include <util/mechanica/HeadUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_IPart
#include <util/mechanica/IPart.h>
#endif
#ifndef INCLUDED_util_mechanica_LegUnits
#include <util/mechanica/LegUnits.h>
#endif
#ifndef INCLUDED_util_mechanica_MechGroup
#include <util/mechanica/MechGroup.h>
#endif
#ifndef INCLUDED_util_mechanica_Mechanica
#include <util/mechanica/Mechanica.h>
#endif
#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif
#ifndef INCLUDED_util_mechanica_ThrusterUnit
#include <util/mechanica/ThrusterUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_20_new,"states.DemoState","new",0x84abd194,"states.DemoState.new","states/DemoState.hx",20,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_29_create,"states.DemoState","create",0x0a4d1e48,"states.DemoState.create","states/DemoState.hx",29,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_37_setupEnvironment,"states.DemoState","setupEnvironment",0x8bde8aa2,"states.DemoState.setupEnvironment","states/DemoState.hx",37,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_67_buildTestMech,"states.DemoState","buildTestMech",0xb44d40f1,"states.DemoState.buildTestMech","states/DemoState.hx",67,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_75_setupDebugger,"states.DemoState","setupDebugger",0xaefbddf2,"states.DemoState.setupDebugger","states/DemoState.hx",75,0x61e5f9dd)
static const ::String _hx_array_data_83deb7a2_5[] = {
	HX_("speed",87,97,69,81),HX_("velocity",1d,02,fe,1e),HX_("drag",f4,2b,70,42),HX_("locomotionStatus",77,b4,46,94),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_85_registerMechanicaParts,"states.DemoState","registerMechanicaParts",0x918ad192,"states.DemoState.registerMechanicaParts","states/DemoState.hx",85,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_94_update,"states.DemoState","update",0x15433d55,"states.DemoState.update","states/DemoState.hx",94,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_108_collision,"states.DemoState","collision",0x396588a6,"states.DemoState.collision","states/DemoState.hx",108,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_129_fixJitter,"states.DemoState","fixJitter",0xb69bea15,"states.DemoState.fixJitter","states/DemoState.hx",129,0x61e5f9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_6ea8e8e6294606fe_132_placeEntities,"states.DemoState","placeEntities",0x8582f05c,"states.DemoState.placeEntities","states/DemoState.hx",132,0x61e5f9dd)
namespace states{

void DemoState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_20_new)
HXDLIN(  20)		super::__construct(MaxSize);
            	}

Dynamic DemoState_obj::__CreateEmpty() { return new DemoState_obj; }

void *DemoState_obj::_hx_vtable = 0;

Dynamic DemoState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DemoState_obj > _hx_result = new DemoState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DemoState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x3634c52c || inClassId==(int)0x56eeed0c;
	}
}

void DemoState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_29_create)
HXLINE(  30)		this->super::create();
HXLINE(  31)		this->playerMech = ::Global_obj::player->getMechanica();
HXLINE(  32)		this->setupEnvironment();
HXLINE(  33)		this->setupDebugger();
            	}


void DemoState_obj::setupEnvironment(){
            	HX_GC_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_37_setupEnvironment)
HXLINE(  38)		::Global_obj::setup();
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(  40)			_this->x = (int)720;
HXDLIN(  40)			_this->y = (int)720;
HXDLIN(  40)			_this->width = (int)0;
HXDLIN(  40)			_this->height = (int)0;
            		}
HXLINE(  41)		this->mapData =  ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__alloc( HX_CTX ,HX_("assets/data/TestZone.oel",5f,20,6e,a7));
HXLINE(  42)		this->map = this->mapData->loadTilemap(HX_("assets/images/environment/demozone.png",31,91,ad,d0),(int)32,(int)32,HX_("environment",d3,0b,50,ad));
HXLINE(  44)		this->map->setTileProperties((int)1,(int)0,null(),null(),null());
HXLINE(  45)		this->map->setTileProperties((int)2,(int)4369,null(),null(),null());
HXLINE(  46)		::Global_obj::map = this->map;
HXLINE(  47)		this->add(this->map);
HXLINE(  49)		::Global_obj::add(this->playerMech);
HXLINE(  50)		this->testMech = this->buildTestMech();
HXLINE(  51)		this->testMech2 = this->buildTestMech();
HXLINE(  52)		this->testMech->enable();
HXLINE(  53)		this->testMech2->enable();
HXLINE(  54)		::Global_obj::add(this->testMech);
HXLINE(  55)		::Global_obj::add(this->testMech2);
HXLINE(  56)		this->mapData->loadEntities(this->placeEntities_dyn(),HX_("entities",41,96,95,92));
HXLINE(  58)		::flixel::FlxG_obj::cameras->remove(::flixel::FlxG_obj::camera,null());
HXLINE(  59)		 ::flixel::_hx_system::frontEnds::CameraFrontEnd _hx_tmp = ::flixel::FlxG_obj::cameras;
HXDLIN(  59)		::flixel::FlxG_obj::camera = _hx_tmp->add( ::flixel::addons::display::FlxZoomCamera_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)640,(int)480,((Float)1.4))).StaticCast<  ::flixel::addons::display::FlxZoomCamera >();
HXLINE(  61)		::flixel::FlxG_obj::camera->follow(this->playerMech->core,null(),null());
HXLINE(  62)		::Global_obj::mechGroupA->add(this->playerMech).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  63)		::Global_obj::mechGroupA->add(this->testMech2).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  64)		::Global_obj::mechGroupB->add(this->testMech).StaticCast<  ::flixel::FlxSprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DemoState_obj,setupEnvironment,(void))

 ::util::mechanica::Mechanica DemoState_obj::buildTestMech(){
            	HX_GC_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_67_buildTestMech)
HXLINE(  68)		 ::util::mechanica::Mechanica mech =  ::util::mechanica::Mechanica_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  69)		mech->buildFromParts(HX_("standardBrainCase",89,59,7d,f2),HX_("standardKernel",da,8c,83,89),HX_("standardCarrier",3b,68,26,e6),HX_("standardLocomote",1f,99,85,0d),HX_("standardThruster",62,d5,bf,2b),HX_("standardPistol",94,79,94,d7),HX_("standardPistol",94,79,94,d7));
HXLINE(  70)		return mech;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DemoState_obj,buildTestMech,return )

void DemoState_obj::setupDebugger(){
            	HX_GC_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_75_setupDebugger)
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::_hx_system::frontEnds::DebuggerFrontEnd _this = ::flixel::FlxG_obj::debugger;
HXDLIN(  76)			 ::flixel::_hx_system::debug::watch::TrackerProfile Profile =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,hx::ClassOf< ::util::mechanica::Mechanica >(),::Array_obj< ::String >::fromData( _hx_array_data_83deb7a2_5,4),null());
HXDLIN(  76)			if (hx::IsNotNull( Profile )) {
HXLINE(  76)				::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  76)				::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile);
            			}
            		}
HXLINE(  78)		::flixel::FlxG_obj::debugger->track(this->playerMech,null());
HXLINE(  80)		{
HXLINE(  80)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this1 = ::flixel::FlxG_obj::console;
HXDLIN(  80)			hx::Class cl = hx::ClassOf< ::Global >();
HXDLIN(  80)			{
HXLINE(  80)				 ::flixel::_hx_system::debug::console::Console _this2 = ::flixel::FlxG_obj::game->debugger->console;
HXDLIN(  80)				{
HXLINE(  80)					::String objectAlias = ::flixel::util::FlxStringUtil_obj::getClassName(cl,true);
HXDLIN(  80)					::haxe::IMap_obj::set(_this2->registeredObjects,objectAlias,( ( ::Dynamic)(cl) ));
HXDLIN(  80)					::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(objectAlias,cl);
            				}
            			}
            		}
HXLINE(  81)		this->registerMechanicaParts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DemoState_obj,setupDebugger,(void))

void DemoState_obj::registerMechanicaParts(){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_85_registerMechanicaParts)
HXLINE(  86)		{
HXLINE(  86)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this = ::flixel::FlxG_obj::console;
HXDLIN(  86)			 ::Dynamic AnyObject = this->playerMech->head;
HXDLIN(  86)			{
HXLINE(  86)				::haxe::IMap_obj::set(::flixel::FlxG_obj::game->debugger->console->registeredObjects,HX_("head",20,29,0b,45),AnyObject);
HXDLIN(  86)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(HX_("head",20,29,0b,45),AnyObject);
            			}
            		}
HXLINE(  87)		{
HXLINE(  87)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this1 = ::flixel::FlxG_obj::console;
HXDLIN(  87)			 ::Dynamic AnyObject1 = this->playerMech->core;
HXDLIN(  87)			{
HXLINE(  87)				::haxe::IMap_obj::set(::flixel::FlxG_obj::game->debugger->console->registeredObjects,HX_("core",5f,bd,c4,41),AnyObject1);
HXDLIN(  87)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(HX_("core",5f,bd,c4,41),AnyObject1);
            			}
            		}
HXLINE(  88)		{
HXLINE(  88)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this2 = ::flixel::FlxG_obj::console;
HXDLIN(  88)			 ::Dynamic AnyObject2 = this->playerMech->arms;
HXDLIN(  88)			{
HXLINE(  88)				::haxe::IMap_obj::set(::flixel::FlxG_obj::game->debugger->console->registeredObjects,HX_("arms",97,92,74,40),AnyObject2);
HXDLIN(  88)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(HX_("arms",97,92,74,40),AnyObject2);
            			}
            		}
HXLINE(  89)		{
HXLINE(  89)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this3 = ::flixel::FlxG_obj::console;
HXDLIN(  89)			 ::Dynamic AnyObject3 = this->playerMech->legs;
HXDLIN(  89)			{
HXLINE(  89)				::haxe::IMap_obj::set(::flixel::FlxG_obj::game->debugger->console->registeredObjects,HX_("legs",e5,08,b0,47),AnyObject3);
HXDLIN(  89)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(HX_("legs",e5,08,b0,47),AnyObject3);
            			}
            		}
HXLINE(  90)		{
HXLINE(  90)			 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this4 = ::flixel::FlxG_obj::console;
HXDLIN(  90)			 ::Dynamic AnyObject4 = this->playerMech->thruster;
HXDLIN(  90)			{
HXLINE(  90)				::haxe::IMap_obj::set(::flixel::FlxG_obj::game->debugger->console->registeredObjects,HX_("thruster",05,dd,80,0e),AnyObject4);
HXDLIN(  90)				::flixel::_hx_system::debug::console::ConsoleUtil_obj::registerObject(HX_("thruster",05,dd,80,0e),AnyObject4);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DemoState_obj,registerMechanicaParts,(void))

void DemoState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_94_update)
HXLINE(  96)		this->super::update(elapsed);
HXLINE(  97)		 ::util::mechanica::Mechanica mechanica = this->playerMech;
HXLINE(  98)		 ::flixel::FlxCamera _hx_tmp = ::flixel::FlxG_obj::camera;
HXDLIN(  98)		Float _hx_tmp1 = ::flixel::FlxG_obj::camera->angle;
HXDLIN(  98)		Float _hx_tmp2 = (mechanica->angle * (int)-1);
HXDLIN(  98)		_hx_tmp->set_angle(::math::MoreMath_obj::lerpAngle(_hx_tmp1,_hx_tmp2,(elapsed * (int)5)));
HXLINE( 101)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(::Global_obj::colliders) ),( ( ::flixel::FlxBasic)(this->map) ),null(),::flixel::FlxObject_obj::separate_dyn());
            	}


void DemoState_obj::collision( ::Dynamic col1, ::Dynamic col2){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_108_collision)
HXLINE( 109)		::Dynamic collider1 = null();
HXLINE( 110)		::Dynamic collider2 = null();
HXLINE( 111)		{
HXLINE( 111)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 111)			::String value = (::Std_obj::string(col1->toString()) + HX_(", ",74,26,00,00));
HXDLIN( 111)			 ::Dynamic value1 = (value + ::Std_obj::string(col2->toString()));
HXDLIN( 111)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 111)			_hx_tmp->add(HX_("Collision",52,88,0d,7d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(value1)));
            		}
HXLINE( 112)		if (::Std_obj::is(col1,hx::ClassOf< ::util::interfaces::ICollider >())) {
HXLINE( 114)			collider1 = col1;
HXLINE( 115)			::util::interfaces::ICollider_obj::collideWith(collider1,col2);
            		}
HXLINE( 118)		if (::Std_obj::is(col1,hx::ClassOf< ::util::interfaces::ICollider >())) {
HXLINE( 120)			collider2 = col1;
HXLINE( 121)			::util::interfaces::ICollider_obj::collideWith(collider2,col1);
            		}
HXLINE( 124)		if (hx::IsNotNull( collider1 )) {
HXLINE( 124)			::util::interfaces::ICollider_obj::postCollision(collider1);
            		}
HXLINE( 125)		if (hx::IsNotNull( collider2 )) {
HXLINE( 125)			::util::interfaces::ICollider_obj::postCollision(collider2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DemoState_obj,collision,(void))

void DemoState_obj::fixJitter(){
            	HX_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_129_fixJitter)
HXDLIN( 129)		::flixel::FlxG_obj::set_updateFramerate(::flixel::FlxG_obj::drawFramerate);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DemoState_obj,fixJitter,(void))

void DemoState_obj::placeEntities(::String entName, ::Xml entDat){
            	HX_GC_STACKFRAME(&_hx_pos_6ea8e8e6294606fe_132_placeEntities)
HXLINE( 133)		int x = ::Std_obj::parseInt(entDat->get(HX_("x",78,00,00,00)));
HXLINE( 134)		int y = ::Std_obj::parseInt(entDat->get(HX_("x",78,00,00,00)));
HXLINE( 135)		if ((entName == HX_("player",61,eb,b8,37))) {
HXLINE( 137)			this->playerMech->set_x(x);
HXLINE( 138)			this->playerMech->set_y(y);
            		}
HXLINE( 140)		if ((entName == HX_("testMech",6f,c1,8b,4b))) {
HXLINE( 142)			this->testMech->set_x(x);
HXLINE( 143)			this->testMech->set_y(y);
HXLINE( 144)			this->testMech->controller =  ::util::control::Controller_obj::__alloc( HX_CTX );
            		}
HXLINE( 146)		if ((entName == HX_("testMech2",e3,7f,bd,ce))) {
HXLINE( 149)			this->testMech2->set_x(x);
HXLINE( 150)			this->testMech2->set_y(y);
HXLINE( 151)			this->testMech2->controller =  ::util::control::Controller_obj::__alloc( HX_CTX );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DemoState_obj,placeEntities,(void))


hx::ObjectPtr< DemoState_obj > DemoState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< DemoState_obj > __this = new DemoState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< DemoState_obj > DemoState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	DemoState_obj *__this = (DemoState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DemoState_obj), true, "states.DemoState"));
	*(void **)__this = DemoState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

DemoState_obj::DemoState_obj()
{
}

void DemoState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DemoState);
	HX_MARK_MEMBER_NAME(mapData,"mapData");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(playerMech,"playerMech");
	HX_MARK_MEMBER_NAME(testMech,"testMech");
	HX_MARK_MEMBER_NAME(testMech2,"testMech2");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DemoState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapData,"mapData");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(playerMech,"playerMech");
	HX_VISIT_MEMBER_NAME(testMech,"testMech");
	HX_VISIT_MEMBER_NAME(testMech2,"testMech2");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DemoState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapData") ) { return hx::Val( mapData ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testMech") ) { return hx::Val( testMech ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testMech2") ) { return hx::Val( testMech2 ); }
		if (HX_FIELD_EQ(inName,"collision") ) { return hx::Val( collision_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixJitter") ) { return hx::Val( fixJitter_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerMech") ) { return hx::Val( playerMech ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildTestMech") ) { return hx::Val( buildTestMech_dyn() ); }
		if (HX_FIELD_EQ(inName,"setupDebugger") ) { return hx::Val( setupDebugger_dyn() ); }
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return hx::Val( placeEntities_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setupEnvironment") ) { return hx::Val( setupEnvironment_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerMechanicaParts") ) { return hx::Val( registerMechanicaParts_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DemoState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapData") ) { mapData=inValue.Cast<  ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testMech") ) { testMech=inValue.Cast<  ::util::mechanica::Mechanica >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testMech2") ) { testMech2=inValue.Cast<  ::util::mechanica::Mechanica >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerMech") ) { playerMech=inValue.Cast<  ::util::mechanica::Mechanica >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DemoState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mapData","\xe6","\x0a","\x5f","\x27"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("playerMech","\xfe","\x17","\x1b","\xab"));
	outFields->push(HX_HCSTRING("testMech","\x6f","\xc1","\x8b","\x4b"));
	outFields->push(HX_HCSTRING("testMech2","\xe3","\x7f","\xbd","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DemoState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(DemoState_obj,mapData),HX_HCSTRING("mapData","\xe6","\x0a","\x5f","\x27")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(DemoState_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::util::mechanica::Mechanica*/ ,(int)offsetof(DemoState_obj,playerMech),HX_HCSTRING("playerMech","\xfe","\x17","\x1b","\xab")},
	{hx::fsObject /*::util::mechanica::Mechanica*/ ,(int)offsetof(DemoState_obj,testMech),HX_HCSTRING("testMech","\x6f","\xc1","\x8b","\x4b")},
	{hx::fsObject /*::util::mechanica::Mechanica*/ ,(int)offsetof(DemoState_obj,testMech2),HX_HCSTRING("testMech2","\xe3","\x7f","\xbd","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DemoState_obj_sStaticStorageInfo = 0;
#endif

static ::String DemoState_obj_sMemberFields[] = {
	HX_HCSTRING("mapData","\xe6","\x0a","\x5f","\x27"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("playerMech","\xfe","\x17","\x1b","\xab"),
	HX_HCSTRING("testMech","\x6f","\xc1","\x8b","\x4b"),
	HX_HCSTRING("testMech2","\xe3","\x7f","\xbd","\xce"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("setupEnvironment","\x56","\x3c","\xae","\xae"),
	HX_HCSTRING("buildTestMech","\xbd","\x36","\x5c","\x46"),
	HX_HCSTRING("setupDebugger","\xbe","\xd3","\x0a","\x41"),
	HX_HCSTRING("registerMechanicaParts","\x46","\xc2","\xcc","\xcd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("fixJitter","\xe1","\x09","\x71","\x58"),
	HX_HCSTRING("placeEntities","\x28","\xe6","\x91","\x17"),
	::String(null()) };

static void DemoState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DemoState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DemoState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DemoState_obj::__mClass,"__mClass");
};

#endif

hx::Class DemoState_obj::__mClass;

void DemoState_obj::__register()
{
	hx::Object *dummy = new DemoState_obj;
	DemoState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.DemoState","\xa2","\xb7","\xde","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DemoState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DemoState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DemoState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DemoState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DemoState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DemoState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states