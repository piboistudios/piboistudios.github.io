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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIColorSwatch
#include <flixel/addons/ui/FlxUIColorSwatch.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#include <flixel/addons/ui/FlxUIDropDownMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrNameLabel
#include <flixel/addons/ui/StrNameLabel.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_states_BuildSchematicState
#include <states/BuildSchematicState.h>
#endif
#ifndef INCLUDED_states_DemoState
#include <states/DemoState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_util_control_Controller
#include <util/control/Controller.h>
#endif
#ifndef INCLUDED_util_control_PlayerController
#include <util/control/PlayerController.h>
#endif
#ifndef INCLUDED_util_mechanica_Mechanica
#include <util/mechanica/Mechanica.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_14_new,"states.BuildSchematicState","new",0x70eec578,"states.BuildSchematicState.new","states/BuildSchematicState.hx",14,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_30_create,"states.BuildSchematicState","create",0xe8d8b0e4,"states.BuildSchematicState.create","states/BuildSchematicState.hx",30,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_41_setupInputField,"states.BuildSchematicState","setupInputField",0xebb12645,"states.BuildSchematicState.setupInputField","states/BuildSchematicState.hx",41,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_61_fetchDropDownMenus,"states.BuildSchematicState","fetchDropDownMenus",0x91244951,"states.BuildSchematicState.fetchDropDownMenus","states/BuildSchematicState.hx",61,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_72_setupDropDownMenus,"states.BuildSchematicState","setupDropDownMenus",0x0f53412e,"states.BuildSchematicState.setupDropDownMenus","states/BuildSchematicState.hx",72,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_87_reinsertUIElements,"states.BuildSchematicState","reinsertUIElements",0xa3f254bf,"states.BuildSchematicState.reinsertUIElements","states/BuildSchematicState.hx",87,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_110_update,"states.BuildSchematicState","update",0xf3cecff1,"states.BuildSchematicState.update","states/BuildSchematicState.hx",110,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_114_getRequest,"states.BuildSchematicState","getRequest",0x6e7ec341,"states.BuildSchematicState.getRequest","states/BuildSchematicState.hx",114,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_117_backToMain,"states.BuildSchematicState","backToMain",0x9731e6c3,"states.BuildSchematicState.backToMain","states/BuildSchematicState.hx",117,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_121_startDemo,"states.BuildSchematicState","startDemo",0xcc1da9bd,"states.BuildSchematicState.startDemo","states/BuildSchematicState.hx",121,0x014759b9)
HX_LOCAL_STACK_FRAME(_hx_pos_e0aa4ff746a7eb92_125_getEvent,"states.BuildSchematicState","getEvent",0xfeb96b8c,"states.BuildSchematicState.getEvent","states/BuildSchematicState.hx",125,0x014759b9)
namespace states{

void BuildSchematicState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_14_new)
HXLINE(  20)		this->canBuild = true;
HXLINE(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic BuildSchematicState_obj::__CreateEmpty() { return new BuildSchematicState_obj; }

void *BuildSchematicState_obj::_hx_vtable = 0;

Dynamic BuildSchematicState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BuildSchematicState_obj > _hx_result = new BuildSchematicState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BuildSchematicState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3634c52c) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x2335d9a7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x3634c52c;
		}
	} else {
		if (inClassId<=(int)0x606b918c) {
			return inClassId==(int)0x55c33fb8 || inClassId==(int)0x606b918c;
		} else {
			return inClassId==(int)0x743878ee;
		}
	}
}

void BuildSchematicState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_30_create)
HXLINE(  31)		this->_xml_id = HX_("build_schematic",3c,a8,9f,37);
HXLINE(  32)		this->super::create();
HXLINE(  33)		this->fetchDropDownMenus();
HXLINE(  34)		this->setupDropDownMenus();
HXLINE(  35)		this->setupInputField();
HXLINE(  37)		this->reinsertUIElements();
            	}


void BuildSchematicState_obj::setupInputField(){
            	HX_GC_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_41_setupInputField)
HXLINE(  43)		this->input =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)200,HX_("Schematic Name",be,8f,7e,a1),null(),null(),null(),null());
HXLINE(  44)		this->input->screenCenter(null());
HXLINE(  45)		 ::flixel::addons::ui::FlxUIInputText _hx_tmp = this->input;
HXDLIN(  45)		_hx_tmp->set_y((this->headDrop->y - (int)32));
HXLINE(  46)		{
HXLINE(  46)			 ::flixel::addons::ui::FlxUIInputText _g = this->input;
HXDLIN(  46)			_g->set_x((_g->x - (int)16));
            		}
HXLINE(  47)		Float _hx_tmp1 = this->input->x;
HXDLIN(  47)		Float _hx_tmp2 = ((_hx_tmp1 + this->input->get_width()) + (int)16);
HXDLIN(  47)		Float _hx_tmp3 = this->input->y;
HXLINE(  48)		 ::flixel::addons::ui::StrNameLabel _hx_tmp4 =  ::flixel::addons::ui::StrNameLabel_obj::__alloc( HX_CTX ,HX_("1",31,00,00,00),HX_("1",31,00,00,00));
HXDLIN(  48)		 ::flixel::addons::ui::StrNameLabel _hx_tmp5 =  ::flixel::addons::ui::StrNameLabel_obj::__alloc( HX_CTX ,HX_("2",32,00,00,00),HX_("2",32,00,00,00));
HXLINE(  47)		::Array< ::Dynamic> _hx_tmp6 = ::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp4)->init(1,_hx_tmp5)->init(2, ::flixel::addons::ui::StrNameLabel_obj::__alloc( HX_CTX ,HX_("3",33,00,00,00),HX_("3",33,00,00,00)));
HXDLIN(  47)		this->slotDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp3,_hx_tmp6,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)48,null(),null(),null()),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,setupInputField,(void))

void BuildSchematicState_obj::fetchDropDownMenus(){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_61_fetchDropDownMenus)
HXLINE(  63)		this->headDrop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("headdrop",4f,71,96,43),null()));
HXLINE(  64)		this->legsDrop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("legsdrop",94,17,87,31),null()));
HXLINE(  65)		this->armsDrop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("armsdrop",46,62,17,3f),null()));
HXLINE(  66)		this->coreDrop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("coredrop",0e,91,e8,24),null()));
HXLINE(  67)		this->thrusterDrop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("thrusterdrop",b4,7b,24,00),null()));
HXLINE(  68)		this->equip1Drop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("equip1drop",30,90,57,6d),null()));
HXLINE(  69)		this->equip2Drop = hx::TCast<  ::flixel::addons::ui::FlxUIDropDownMenu >::cast(this->_ui->getAsset(HX_("equip2drop",b1,24,be,00),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,fetchDropDownMenus,(void))

void BuildSchematicState_obj::setupDropDownMenus(){
            	HX_GC_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_72_setupDropDownMenus)
HXLINE(  74)		Float _hx_tmp = this->headDrop->x;
HXDLIN(  74)		Float _hx_tmp1 = this->headDrop->y;
HXDLIN(  74)		::Array< ::Dynamic> _hx_tmp2 = ::Global_obj::player->getPartsOfType((int)0);
HXDLIN(  74)		this->headDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  75)		Float _hx_tmp3 = this->legsDrop->x;
HXDLIN(  75)		Float _hx_tmp4 = this->legsDrop->y;
HXDLIN(  75)		::Array< ::Dynamic> _hx_tmp5 = ::Global_obj::player->getPartsOfType((int)2);
HXDLIN(  75)		this->legsDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp3,_hx_tmp4,_hx_tmp5,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  76)		Float _hx_tmp6 = this->armsDrop->x;
HXDLIN(  76)		Float _hx_tmp7 = this->armsDrop->y;
HXDLIN(  76)		::Array< ::Dynamic> _hx_tmp8 = ::Global_obj::player->getPartsOfType((int)3);
HXDLIN(  76)		this->armsDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp6,_hx_tmp7,_hx_tmp8,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  77)		Float _hx_tmp9 = this->coreDrop->x;
HXDLIN(  77)		Float _hx_tmp10 = this->coreDrop->y;
HXDLIN(  77)		::Array< ::Dynamic> _hx_tmp11 = ::Global_obj::player->getPartsOfType((int)1);
HXDLIN(  77)		this->coreDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp9,_hx_tmp10,_hx_tmp11,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  78)		Float _hx_tmp12 = this->thrusterDrop->x;
HXDLIN(  78)		Float _hx_tmp13 = this->thrusterDrop->y;
HXDLIN(  78)		::Array< ::Dynamic> _hx_tmp14 = ::Global_obj::player->getPartsOfType((int)4);
HXDLIN(  78)		this->thrusterDrop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp12,_hx_tmp13,_hx_tmp14,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  79)		Float _hx_tmp15 = this->equip1Drop->x;
HXDLIN(  79)		Float _hx_tmp16 = this->equip1Drop->y;
HXDLIN(  79)		::Array< ::Dynamic> _hx_tmp17 = ::Global_obj::player->getPartsOfType((int)5);
HXDLIN(  79)		this->equip1Drop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp15,_hx_tmp16,_hx_tmp17,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
HXLINE(  80)		Float _hx_tmp18 = this->equip2Drop->x;
HXDLIN(  80)		Float _hx_tmp19 = this->equip2Drop->y;
HXDLIN(  80)		::Array< ::Dynamic> _hx_tmp20 = ::Global_obj::player->getPartsOfType((int)5);
HXDLIN(  80)		this->equip2Drop =  ::flixel::addons::ui::FlxUIDropDownMenu_obj::__alloc( HX_CTX ,_hx_tmp18,_hx_tmp19,_hx_tmp20,null(), ::flixel::addons::ui::FlxUIDropDownHeader_obj::__alloc( HX_CTX ,(int)200,null(),null(),null()),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,setupDropDownMenus,(void))

void BuildSchematicState_obj::reinsertUIElements(){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_87_reinsertUIElements)
HXLINE(  88)		this->remove(this->equip2Drop,null());
HXLINE(  89)		this->remove(this->headDrop,null());
HXLINE(  90)		this->remove(this->legsDrop,null());
HXLINE(  91)		this->remove(this->armsDrop,null());
HXLINE(  92)		this->remove(this->coreDrop,null());
HXLINE(  93)		this->remove(this->equip1Drop,null());
HXLINE(  94)		this->remove(this->thrusterDrop,null());
HXLINE(  95)		this->add(this->equip2Drop);
HXLINE(  96)		this->add(this->equip1Drop);
HXLINE(  97)		this->add(this->thrusterDrop);
HXLINE(  98)		this->add(this->armsDrop);
HXLINE(  99)		this->add(this->legsDrop);
HXLINE( 100)		this->add(this->coreDrop);
HXLINE( 101)		this->add(this->headDrop);
HXLINE( 102)		this->add(this->slotDrop);
HXLINE( 103)		this->add(this->input);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,reinsertUIElements,(void))

void BuildSchematicState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_110_update)
HXDLIN( 110)		this->super::update(elapsed);
            	}


 ::Dynamic BuildSchematicState_obj::getRequest(::String id, ::Dynamic target, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_114_getRequest)
HXDLIN( 114)		return null();
            	}


void BuildSchematicState_obj::backToMain(){
            	HX_GC_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_117_backToMain)
HXDLIN( 117)		 ::flixel::FlxState nextState =  ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 117)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 117)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,backToMain,(void))

void BuildSchematicState_obj::startDemo(){
            	HX_GC_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_121_startDemo)
HXDLIN( 121)		 ::flixel::FlxState nextState =  ::states::DemoState_obj::__alloc( HX_CTX ,null());
HXDLIN( 121)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 121)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BuildSchematicState_obj,startDemo,(void))

void BuildSchematicState_obj::getEvent(::String id, ::Dynamic target, ::Dynamic data,::cpp::VirtualArray params){
            	HX_GC_STACKFRAME(&_hx_pos_e0aa4ff746a7eb92_125_getEvent)
HXDLIN( 125)		if (hx::IsNotNull( params )) {
HXLINE( 127)			::String _hx_switch_0 = id;
            			if (  (_hx_switch_0==HX_("click_button",49,90,30,6d)) ){
HXLINE( 131)				::String _g = ::Std_obj::string(params->__get((int)0));
HXDLIN( 131)				::String _hx_switch_1 = _g;
            				if (  (_hx_switch_1==HX_("back",27,da,10,41)) ){
HXLINE( 160)					 ::flixel::FlxState nextState =  ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 160)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 160)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
HXDLIN( 160)					goto _hx_goto_11;
            				}
            				if (  (_hx_switch_1==HX_("build",2e,db,ea,ba)) ){
HXLINE( 135)					if (!(this->canBuild)) {
HXLINE( 135)						return;
            					}
HXLINE( 136)					this->canBuild = false;
HXLINE( 137)					::flixel::FlxG_obj::log->advanced(HX_("Building mech...",85,46,62,43),::Global_obj::logStyle,null());
HXLINE( 138)					 ::util::mechanica::Mechanica playerMech = ::Global_obj::player->getMechanica();
HXLINE( 139)					 ::Player _hx_tmp = ::Global_obj::player;
HXDLIN( 139)					_hx_tmp->setMechanica(::Std_obj::parseInt(this->slotDrop->get_selectedId()));
HXLINE( 141)					::String _hx_tmp1 = this->headDrop->get_selectedId();
HXDLIN( 141)					::String _hx_tmp2 = this->coreDrop->get_selectedId();
HXDLIN( 141)					::String _hx_tmp3 = this->armsDrop->get_selectedId();
HXDLIN( 141)					::String _hx_tmp4 = this->legsDrop->get_selectedId();
HXLINE( 142)					::String _hx_tmp5 = this->thrusterDrop->get_selectedId();
HXDLIN( 142)					::String _hx_tmp6 = this->equip1Drop->get_selectedId();
HXLINE( 140)					if (playerMech->buildFromParts(_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,_hx_tmp5,_hx_tmp6,this->equip2Drop->get_selectedId())) {
HXLINE( 145)						::flixel::FlxG_obj::log->advanced(HX_("Build succeeded",cf,3a,26,16),::Global_obj::logStyle,null());
HXLINE( 146)						playerMech->name = this->input->text;
HXLINE( 147)						playerMech->enable();
HXLINE( 148)						playerMech->controller = ::Global_obj::player->controller;
HXLINE( 149)						::haxe::Timer_obj::delay(this->startDemo_dyn(),(int)10);
            					}
            					else {
HXLINE( 154)						::flixel::FlxG_obj::log->advanced(HX_("Build failed",8f,f0,c6,27),::Global_obj::logStyle,null());
            					}
HXLINE( 134)					goto _hx_goto_11;
            				}
            				_hx_goto_11:;
HXLINE( 131)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("click_dropdown",28,26,a9,27)) ){
HXLINE( 163)				goto _hx_goto_10;
            			}
            			_hx_goto_10:;
            		}
            	}



hx::ObjectPtr< BuildSchematicState_obj > BuildSchematicState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	hx::ObjectPtr< BuildSchematicState_obj > __this = new BuildSchematicState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

hx::ObjectPtr< BuildSchematicState_obj > BuildSchematicState_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	BuildSchematicState_obj *__this = (BuildSchematicState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BuildSchematicState_obj), true, "states.BuildSchematicState"));
	*(void **)__this = BuildSchematicState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

BuildSchematicState_obj::BuildSchematicState_obj()
{
}

void BuildSchematicState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BuildSchematicState);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(headDrop,"headDrop");
	HX_MARK_MEMBER_NAME(legsDrop,"legsDrop");
	HX_MARK_MEMBER_NAME(canBuild,"canBuild");
	HX_MARK_MEMBER_NAME(armsDrop,"armsDrop");
	HX_MARK_MEMBER_NAME(coreDrop,"coreDrop");
	HX_MARK_MEMBER_NAME(thrusterDrop,"thrusterDrop");
	HX_MARK_MEMBER_NAME(equip1Drop,"equip1Drop");
	HX_MARK_MEMBER_NAME(equip2Drop,"equip2Drop");
	HX_MARK_MEMBER_NAME(slotDrop,"slotDrop");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(lineTest,"lineTest");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BuildSchematicState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(headDrop,"headDrop");
	HX_VISIT_MEMBER_NAME(legsDrop,"legsDrop");
	HX_VISIT_MEMBER_NAME(canBuild,"canBuild");
	HX_VISIT_MEMBER_NAME(armsDrop,"armsDrop");
	HX_VISIT_MEMBER_NAME(coreDrop,"coreDrop");
	HX_VISIT_MEMBER_NAME(thrusterDrop,"thrusterDrop");
	HX_VISIT_MEMBER_NAME(equip1Drop,"equip1Drop");
	HX_VISIT_MEMBER_NAME(equip2Drop,"equip2Drop");
	HX_VISIT_MEMBER_NAME(slotDrop,"slotDrop");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(lineTest,"lineTest");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BuildSchematicState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return hx::Val( timer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headDrop") ) { return hx::Val( headDrop ); }
		if (HX_FIELD_EQ(inName,"legsDrop") ) { return hx::Val( legsDrop ); }
		if (HX_FIELD_EQ(inName,"canBuild") ) { return hx::Val( canBuild ); }
		if (HX_FIELD_EQ(inName,"armsDrop") ) { return hx::Val( armsDrop ); }
		if (HX_FIELD_EQ(inName,"coreDrop") ) { return hx::Val( coreDrop ); }
		if (HX_FIELD_EQ(inName,"slotDrop") ) { return hx::Val( slotDrop ); }
		if (HX_FIELD_EQ(inName,"lineTest") ) { return hx::Val( lineTest ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDemo") ) { return hx::Val( startDemo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"equip1Drop") ) { return hx::Val( equip1Drop ); }
		if (HX_FIELD_EQ(inName,"equip2Drop") ) { return hx::Val( equip2Drop ); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return hx::Val( getRequest_dyn() ); }
		if (HX_FIELD_EQ(inName,"backToMain") ) { return hx::Val( backToMain_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"thrusterDrop") ) { return hx::Val( thrusterDrop ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setupInputField") ) { return hx::Val( setupInputField_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fetchDropDownMenus") ) { return hx::Val( fetchDropDownMenus_dyn() ); }
		if (HX_FIELD_EQ(inName,"setupDropDownMenus") ) { return hx::Val( setupDropDownMenus_dyn() ); }
		if (HX_FIELD_EQ(inName,"reinsertUIElements") ) { return hx::Val( reinsertUIElements_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BuildSchematicState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headDrop") ) { headDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"legsDrop") ) { legsDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBuild") ) { canBuild=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"armsDrop") ) { armsDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coreDrop") ) { coreDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slotDrop") ) { slotDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineTest") ) { lineTest=inValue.Cast<  ::flixel::addons::ui::FlxUIColorSwatch >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"equip1Drop") ) { equip1Drop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equip2Drop") ) { equip2Drop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"thrusterDrop") ) { thrusterDrop=inValue.Cast<  ::flixel::addons::ui::FlxUIDropDownMenu >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BuildSchematicState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("headDrop","\x6f","\x9d","\x6f","\x2e"));
	outFields->push(HX_HCSTRING("legsDrop","\xb4","\x43","\x60","\x1c"));
	outFields->push(HX_HCSTRING("canBuild","\xfe","\x1c","\x7e","\x29"));
	outFields->push(HX_HCSTRING("armsDrop","\x66","\x8e","\xf0","\x29"));
	outFields->push(HX_HCSTRING("coreDrop","\x2e","\xbd","\xc1","\x0f"));
	outFields->push(HX_HCSTRING("thrusterDrop","\xd4","\xa7","\xfd","\xea"));
	outFields->push(HX_HCSTRING("equip1Drop","\x50","\xbc","\x30","\x58"));
	outFields->push(HX_HCSTRING("equip2Drop","\xd1","\x50","\x97","\xeb"));
	outFields->push(HX_HCSTRING("slotDrop","\x4d","\x19","\x19","\x96"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("lineTest","\x66","\x16","\x23","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BuildSchematicState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::FlxUIInputText*/ ,(int)offsetof(BuildSchematicState_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,headDrop),HX_HCSTRING("headDrop","\x6f","\x9d","\x6f","\x2e")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,legsDrop),HX_HCSTRING("legsDrop","\xb4","\x43","\x60","\x1c")},
	{hx::fsBool,(int)offsetof(BuildSchematicState_obj,canBuild),HX_HCSTRING("canBuild","\xfe","\x1c","\x7e","\x29")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,armsDrop),HX_HCSTRING("armsDrop","\x66","\x8e","\xf0","\x29")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,coreDrop),HX_HCSTRING("coreDrop","\x2e","\xbd","\xc1","\x0f")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,thrusterDrop),HX_HCSTRING("thrusterDrop","\xd4","\xa7","\xfd","\xea")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,equip1Drop),HX_HCSTRING("equip1Drop","\x50","\xbc","\x30","\x58")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,equip2Drop),HX_HCSTRING("equip2Drop","\xd1","\x50","\x97","\xeb")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownMenu*/ ,(int)offsetof(BuildSchematicState_obj,slotDrop),HX_HCSTRING("slotDrop","\x4d","\x19","\x19","\x96")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(BuildSchematicState_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIColorSwatch*/ ,(int)offsetof(BuildSchematicState_obj,lineTest),HX_HCSTRING("lineTest","\x66","\x16","\x23","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BuildSchematicState_obj_sStaticStorageInfo = 0;
#endif

static ::String BuildSchematicState_obj_sMemberFields[] = {
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("headDrop","\x6f","\x9d","\x6f","\x2e"),
	HX_HCSTRING("legsDrop","\xb4","\x43","\x60","\x1c"),
	HX_HCSTRING("canBuild","\xfe","\x1c","\x7e","\x29"),
	HX_HCSTRING("armsDrop","\x66","\x8e","\xf0","\x29"),
	HX_HCSTRING("coreDrop","\x2e","\xbd","\xc1","\x0f"),
	HX_HCSTRING("thrusterDrop","\xd4","\xa7","\xfd","\xea"),
	HX_HCSTRING("equip1Drop","\x50","\xbc","\x30","\x58"),
	HX_HCSTRING("equip2Drop","\xd1","\x50","\x97","\xeb"),
	HX_HCSTRING("slotDrop","\x4d","\x19","\x19","\x96"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("lineTest","\x66","\x16","\x23","\x8a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("setupInputField","\x2d","\xed","\xee","\x39"),
	HX_HCSTRING("fetchDropDownMenus","\x69","\xc3","\x9f","\x80"),
	HX_HCSTRING("setupDropDownMenus","\x46","\xbb","\xce","\xfe"),
	HX_HCSTRING("reinsertUIElements","\xd7","\xce","\x6d","\x93"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getRequest","\x59","\x65","\xe6","\x93"),
	HX_HCSTRING("backToMain","\xdb","\x88","\x99","\xbc"),
	HX_HCSTRING("startDemo","\xa5","\xd2","\x59","\xfb"),
	HX_HCSTRING("getEvent","\xa4","\xd7","\x9b","\xd5"),
	::String(null()) };

static void BuildSchematicState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuildSchematicState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BuildSchematicState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuildSchematicState_obj::__mClass,"__mClass");
};

#endif

hx::Class BuildSchematicState_obj::__mClass;

void BuildSchematicState_obj::__register()
{
	hx::Object *dummy = new BuildSchematicState_obj;
	BuildSchematicState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.BuildSchematicState","\x86","\xe9","\x58","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BuildSchematicState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BuildSchematicState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BuildSchematicState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BuildSchematicState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BuildSchematicState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BuildSchematicState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
