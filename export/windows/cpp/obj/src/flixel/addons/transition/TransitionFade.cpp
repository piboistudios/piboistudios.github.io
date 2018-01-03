// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionFade
#include <flixel/addons/transition/TransitionFade.h>
#endif
#ifndef INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient
#include <flixel/addons/transition/_TransitionFade/GraphicDiagonalGradient.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85f0573c4a29b283_22_new,"flixel.addons.transition.TransitionFade","new",0x4927e913,"flixel.addons.transition.TransitionFade.new","flixel/addons/transition/TransitionFade.hx",22,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_41_destroy,"flixel.addons.transition.TransitionFade","destroy",0x16001b2d,"flixel.addons.transition.TransitionFade.destroy","flixel/addons/transition/TransitionFade.hx",41,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_47_start,"flixel.addons.transition.TransitionFade","start",0xbc9d5fd5,"flixel.addons.transition.TransitionFade.start","flixel/addons/transition/TransitionFade.hx",47,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_77_setTweenValues,"flixel.addons.transition.TransitionFade","setTweenValues",0x069b0e58,"flixel.addons.transition.TransitionFade.setTweenValues","flixel/addons/transition/TransitionFade.hx",77,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_143_makeSprite,"flixel.addons.transition.TransitionFade","makeSprite",0x080a6440,"flixel.addons.transition.TransitionFade.makeSprite","flixel/addons/transition/TransitionFade.hx",143,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_192_getGradient,"flixel.addons.transition.TransitionFade","getGradient",0xadab8059,"flixel.addons.transition.TransitionFade.getGradient","flixel/addons/transition/TransitionFade.hx",192,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_210_finishTween,"flixel.addons.transition.TransitionFade","finishTween",0x9dee50cb,"flixel.addons.transition.TransitionFade.finishTween","flixel/addons/transition/TransitionFade.hx",210,0x307a6abc)
namespace flixel{
namespace addons{
namespace transition{

void TransitionFade_obj::__construct( ::flixel::addons::transition::TransitionData data){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_22_new)
HXLINE(  30)		this->tweenValEnd2 = ((Float)0);
HXLINE(  29)		this->tweenValEnd = ((Float)0);
HXLINE(  28)		this->tweenValStart2 = ((Float)0);
HXLINE(  27)		this->tweenValStart = ((Float)0);
HXLINE(  26)		this->tweenStr2 = HX_("",00,00,00,00);
HXLINE(  25)		this->tweenStr = HX_("",00,00,00,00);
HXLINE(  34)		super::__construct(data);
HXLINE(  36)		this->back = this->makeSprite(data->direction->x,data->direction->y);
HXLINE(  37)		this->back->scrollFactor->set((int)0,(int)0);
HXLINE(  38)		this->add(this->back);
            	}

Dynamic TransitionFade_obj::__CreateEmpty() { return new TransitionFade_obj; }

void *TransitionFade_obj::_hx_vtable = 0;

Dynamic TransitionFade_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TransitionFade_obj > _hx_result = new TransitionFade_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TransitionFade_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x282173df) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x282173df;
		}
	} else {
		if (inClassId<=(int)0x2e105115) {
			return inClassId==(int)0x29bc10ca || inClassId==(int)0x2e105115;
		} else {
			return inClassId==(int)0x38c830d9;
		}
	}
}

void TransitionFade_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_41_destroy)
HXLINE(  42)		this->super::destroy();
HXLINE(  43)		this->back = null();
            	}


void TransitionFade_obj::start(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_47_start)
HXLINE(  48)		this->super::start(NewStatus);
HXLINE(  50)		this->setTweenValues(NewStatus,this->_data->direction->x,this->_data->direction->y);
HXLINE(  52)		{
HXLINE(  52)			::String _g = this->tweenStr;
HXDLIN(  52)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("alpha",5e,a7,96,21)) ){
HXLINE(  54)				this->back->set_alpha(this->tweenValStart);
HXDLIN(  54)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE(  55)				this->back->set_x(this->tweenValStart);
HXDLIN(  55)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  56)				this->back->set_y(this->tweenValStart);
HXDLIN(  56)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
HXLINE(  58)		{
HXLINE(  58)			::String _g1 = this->tweenStr2;
HXDLIN(  58)			::String _hx_switch_1 = _g1;
            			if (  (_hx_switch_1==HX_("alpha",5e,a7,96,21)) ){
HXLINE(  60)				this->back->set_alpha(this->tweenValStart2);
HXDLIN(  60)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==HX_("x",78,00,00,00)) ){
HXLINE(  61)				this->back->set_x(this->tweenValStart2);
HXDLIN(  61)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==HX_("y",79,00,00,00)) ){
HXLINE(  62)				this->back->set_y(this->tweenValStart2);
HXDLIN(  62)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE(  65)		 ::Dynamic Values =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE(  66)		::Reflect_obj::setField(Values,this->tweenStr,this->tweenValEnd);
HXLINE(  67)		if ((this->tweenStr2 != HX_("",00,00,00,00))) {
HXLINE(  69)			::Reflect_obj::setField(Values,this->tweenStr2,this->tweenValEnd2);
            		}
HXLINE(  71)		this->_data->tweenOptions->__SetField(HX_("onComplete",f8,d4,7e,5d),this->finishTween_dyn(),hx::paccDynamic);
HXLINE(  72)		::flixel::tweens::FlxTween_obj::tween(this->back,Values,this->_data->duration,this->_data->tweenOptions);
            	}


void TransitionFade_obj::setTweenValues(int NewStatus,Float DirX,Float DirY){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_77_setTweenValues)
HXDLIN(  77)		bool _hx_tmp;
HXDLIN(  77)		if ((DirX == (int)0)) {
HXDLIN(  77)			_hx_tmp = (DirY == (int)0);
            		}
            		else {
HXDLIN(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  80)			this->tweenStr = HX_("alpha",5e,a7,96,21);
HXLINE(  81)			Float _hx_tmp1;
HXDLIN(  81)			if ((NewStatus == (int)0)) {
HXLINE(  81)				_hx_tmp1 = ((Float)0.0);
            			}
            			else {
HXLINE(  81)				_hx_tmp1 = ((Float)1.0);
            			}
HXDLIN(  81)			this->tweenValStart = _hx_tmp1;
HXLINE(  82)			Float _hx_tmp2;
HXDLIN(  82)			if ((NewStatus == (int)0)) {
HXLINE(  82)				_hx_tmp2 = ((Float)1.0);
            			}
            			else {
HXLINE(  82)				_hx_tmp2 = ((Float)0.0);
            			}
HXDLIN(  82)			this->tweenValEnd = _hx_tmp2;
            		}
            		else {
HXLINE(  84)			bool _hx_tmp3;
HXDLIN(  84)			if ((::Math_obj::abs(DirX) > (int)0)) {
HXLINE(  84)				_hx_tmp3 = (DirY == (int)0);
            			}
            			else {
HXLINE(  84)				_hx_tmp3 = false;
            			}
HXDLIN(  84)			if (_hx_tmp3) {
HXLINE(  87)				this->tweenStr = HX_("x",78,00,00,00);
HXLINE(  88)				if ((DirX > (int)0)) {
HXLINE(  90)					Float _hx_tmp4;
HXDLIN(  90)					if ((NewStatus == (int)0)) {
HXLINE(  90)						_hx_tmp4 = -(this->back->get_width());
            					}
            					else {
HXLINE(  90)						_hx_tmp4 = (int)0;
            					}
HXDLIN(  90)					this->tweenValStart = _hx_tmp4;
HXLINE(  91)					Float _hx_tmp5;
HXDLIN(  91)					if ((NewStatus == (int)0)) {
HXLINE(  91)						_hx_tmp5 = (int)0;
            					}
            					else {
HXLINE(  91)						_hx_tmp5 = -(this->back->get_width());
            					}
HXDLIN(  91)					this->tweenValEnd = _hx_tmp5;
            				}
            				else {
HXLINE(  95)					Float _hx_tmp6;
HXDLIN(  95)					if ((NewStatus == (int)0)) {
HXLINE(  95)						_hx_tmp6 = ::flixel::FlxG_obj::width;
            					}
            					else {
HXLINE(  95)						_hx_tmp6 = ((Float)-(this->back->get_width()) / (Float)(int)2);
            					}
HXDLIN(  95)					this->tweenValStart = _hx_tmp6;
HXLINE(  96)					Float _hx_tmp7;
HXDLIN(  96)					if ((NewStatus == (int)0)) {
HXLINE(  96)						_hx_tmp7 = ((Float)-(this->back->get_width()) / (Float)(int)2);
            					}
            					else {
HXLINE(  96)						_hx_tmp7 = ::flixel::FlxG_obj::width;
            					}
HXDLIN(  96)					this->tweenValEnd = _hx_tmp7;
            				}
            			}
            			else {
HXLINE(  99)				bool _hx_tmp8;
HXDLIN(  99)				if ((DirX == (int)0)) {
HXLINE(  99)					_hx_tmp8 = (::Math_obj::abs(DirY) > (int)0);
            				}
            				else {
HXLINE(  99)					_hx_tmp8 = false;
            				}
HXDLIN(  99)				if (_hx_tmp8) {
HXLINE( 102)					this->tweenStr = HX_("y",79,00,00,00);
HXLINE( 103)					if ((DirY > (int)0)) {
HXLINE( 105)						Float _hx_tmp9;
HXDLIN( 105)						if ((NewStatus == (int)0)) {
HXLINE( 105)							_hx_tmp9 = -(this->back->get_height());
            						}
            						else {
HXLINE( 105)							_hx_tmp9 = (int)0;
            						}
HXDLIN( 105)						this->tweenValStart = _hx_tmp9;
HXLINE( 106)						Float _hx_tmp10;
HXDLIN( 106)						if ((NewStatus == (int)0)) {
HXLINE( 106)							_hx_tmp10 = (int)0;
            						}
            						else {
HXLINE( 106)							_hx_tmp10 = -(this->back->get_height());
            						}
HXDLIN( 106)						this->tweenValEnd = _hx_tmp10;
            					}
            					else {
HXLINE( 110)						Float _hx_tmp11;
HXDLIN( 110)						if ((NewStatus == (int)0)) {
HXLINE( 110)							_hx_tmp11 = ::flixel::FlxG_obj::height;
            						}
            						else {
HXLINE( 110)							_hx_tmp11 = ((Float)-(this->back->get_height()) / (Float)(int)2);
            						}
HXDLIN( 110)						this->tweenValStart = _hx_tmp11;
HXLINE( 111)						Float _hx_tmp12;
HXDLIN( 111)						if ((NewStatus == (int)0)) {
HXLINE( 111)							_hx_tmp12 = ((Float)-(this->back->get_height()) / (Float)(int)2);
            						}
            						else {
HXLINE( 111)							_hx_tmp12 = ::flixel::FlxG_obj::height;
            						}
HXDLIN( 111)						this->tweenValEnd = _hx_tmp12;
            					}
            				}
            				else {
HXLINE( 114)					bool _hx_tmp13;
HXDLIN( 114)					if ((::Math_obj::abs(DirX) > (int)0)) {
HXLINE( 114)						_hx_tmp13 = (::Math_obj::abs(DirY) > (int)0);
            					}
            					else {
HXLINE( 114)						_hx_tmp13 = false;
            					}
HXDLIN( 114)					if (_hx_tmp13) {
HXLINE( 117)						this->tweenStr = HX_("x",78,00,00,00);
HXLINE( 118)						this->tweenStr2 = HX_("y",79,00,00,00);
HXLINE( 119)						if ((DirX > (int)0)) {
HXLINE( 121)							Float _hx_tmp14;
HXDLIN( 121)							if ((NewStatus == (int)0)) {
HXLINE( 121)								_hx_tmp14 = -(this->back->get_width());
            							}
            							else {
HXLINE( 121)								_hx_tmp14 = (int)0;
            							}
HXDLIN( 121)							this->tweenValStart = _hx_tmp14;
HXLINE( 122)							Float _hx_tmp15;
HXDLIN( 122)							if ((NewStatus == (int)0)) {
HXLINE( 122)								_hx_tmp15 = (int)0;
            							}
            							else {
HXLINE( 122)								_hx_tmp15 = -(this->back->get_width());
            							}
HXDLIN( 122)							this->tweenValEnd = _hx_tmp15;
            						}
            						else {
HXLINE( 126)							Float _hx_tmp16;
HXDLIN( 126)							if ((NewStatus == (int)0)) {
HXLINE( 126)								_hx_tmp16 = ::flixel::FlxG_obj::width;
            							}
            							else {
HXLINE( 126)								_hx_tmp16 = (-(this->back->get_width()) * ((Float)0.66666666666666663));
            							}
HXDLIN( 126)							this->tweenValStart = _hx_tmp16;
HXLINE( 127)							Float _hx_tmp17;
HXDLIN( 127)							if ((NewStatus == (int)0)) {
HXLINE( 127)								_hx_tmp17 = (-(this->back->get_width()) * ((Float)0.66666666666666663));
            							}
            							else {
HXLINE( 127)								_hx_tmp17 = ::flixel::FlxG_obj::width;
            							}
HXDLIN( 127)							this->tweenValEnd = _hx_tmp17;
            						}
HXLINE( 129)						if ((DirY > (int)0)) {
HXLINE( 131)							Float _hx_tmp18;
HXDLIN( 131)							if ((NewStatus == (int)0)) {
HXLINE( 131)								_hx_tmp18 = -(this->back->get_height());
            							}
            							else {
HXLINE( 131)								_hx_tmp18 = (int)0;
            							}
HXDLIN( 131)							this->tweenValStart2 = _hx_tmp18;
HXLINE( 132)							Float _hx_tmp19;
HXDLIN( 132)							if ((NewStatus == (int)0)) {
HXLINE( 132)								_hx_tmp19 = (int)0;
            							}
            							else {
HXLINE( 132)								_hx_tmp19 = -(this->back->get_height());
            							}
HXDLIN( 132)							this->tweenValEnd2 = _hx_tmp19;
            						}
            						else {
HXLINE( 136)							Float _hx_tmp20;
HXDLIN( 136)							if ((NewStatus == (int)0)) {
HXLINE( 136)								_hx_tmp20 = ::flixel::FlxG_obj::height;
            							}
            							else {
HXLINE( 136)								_hx_tmp20 = (-(this->back->get_height()) * ((Float)0.66666666666666663));
            							}
HXDLIN( 136)							this->tweenValStart2 = _hx_tmp20;
HXLINE( 137)							Float _hx_tmp21;
HXDLIN( 137)							if ((NewStatus == (int)0)) {
HXLINE( 137)								_hx_tmp21 = (-(this->back->get_height()) * ((Float)0.66666666666666663));
            							}
            							else {
HXLINE( 137)								_hx_tmp21 = ::flixel::FlxG_obj::height;
            							}
HXDLIN( 137)							this->tweenValEnd2 = _hx_tmp21;
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TransitionFade_obj,setTweenValues,(void))

 ::flixel::FlxSprite TransitionFade_obj::makeSprite(Float DirX,Float DirY){
            	HX_GC_STACKFRAME(&_hx_pos_85f0573c4a29b283_143_makeSprite)
HXLINE( 144)		 ::flixel::FlxSprite s =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(int)0,(int)0,null());
HXLINE( 145)		Float locX = (int)0;
HXLINE( 146)		Float locY = (int)0;
HXLINE( 147)		int angle = (int)0;
HXLINE( 148)		 ::openfl::_legacy::display::BitmapData pixels = null();
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if ((DirX == (int)0)) {
HXLINE( 149)			_hx_tmp = (DirY == (int)0);
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 152)			s->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,this->_data->color,null(),null());
            		}
            		else {
HXLINE( 154)			bool _hx_tmp1;
HXDLIN( 154)			if ((DirX == (int)0)) {
HXLINE( 154)				_hx_tmp1 = (::Math_obj::abs(DirY) > (int)0);
            			}
            			else {
HXLINE( 154)				_hx_tmp1 = false;
            			}
HXDLIN( 154)			if (_hx_tmp1) {
HXLINE( 157)				if ((DirY > (int)0)) {
HXLINE( 157)					locY = ::flixel::FlxG_obj::height;
            				}
            				else {
HXLINE( 157)					locY = (int)0;
            				}
HXLINE( 158)				if ((DirY > (int)0)) {
HXLINE( 158)					angle = (int)90;
            				}
            				else {
HXLINE( 158)					angle = (int)270;
            				}
HXLINE( 159)				s->makeGraphic((int)1,(::flixel::FlxG_obj::height * (int)2),this->_data->color,null(),null());
HXLINE( 160)				pixels = s->get_pixels();
HXLINE( 161)				 ::openfl::_legacy::display::BitmapData gvert = ::flixel::util::FlxGradient_obj::createGradientBitmapData((int)1,::flixel::FlxG_obj::height,::Array_obj< int >::__new(2)->init(0,this->_data->color)->init(1,(int)0),(int)1,angle,null());
HXLINE( 162)				 ::openfl::_legacy::geom::Rectangle _hx_tmp2 = gvert->get_rect();
HXDLIN( 162)				pixels->copyPixels(gvert,_hx_tmp2, ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,(int)0,locY),null(),null(),null());
HXLINE( 163)				s->set_pixels(pixels);
HXLINE( 164)				s->scale->set(::flixel::FlxG_obj::width,((Float)1.0));
HXLINE( 165)				s->updateHitbox();
            			}
            			else {
HXLINE( 167)				bool _hx_tmp3;
HXDLIN( 167)				if ((::Math_obj::abs(DirX) > (int)0)) {
HXLINE( 167)					_hx_tmp3 = (DirY == (int)0);
            				}
            				else {
HXLINE( 167)					_hx_tmp3 = false;
            				}
HXDLIN( 167)				if (_hx_tmp3) {
HXLINE( 170)					if ((DirX > (int)0)) {
HXLINE( 170)						locX = ::flixel::FlxG_obj::width;
            					}
            					else {
HXLINE( 170)						locX = (int)0;
            					}
HXLINE( 171)					if ((DirX > (int)0)) {
HXLINE( 171)						angle = (int)0;
            					}
            					else {
HXLINE( 171)						angle = (int)180;
            					}
HXLINE( 172)					s->makeGraphic((::flixel::FlxG_obj::width * (int)2),(int)1,this->_data->color,null(),null());
HXLINE( 173)					pixels = s->get_pixels();
HXLINE( 174)					 ::openfl::_legacy::display::BitmapData ghorz = ::flixel::util::FlxGradient_obj::createGradientBitmapData(::flixel::FlxG_obj::width,(int)1,::Array_obj< int >::__new(2)->init(0,this->_data->color)->init(1,(int)0),(int)1,angle,null());
HXLINE( 175)					 ::openfl::_legacy::geom::Rectangle _hx_tmp4 = ghorz->get_rect();
HXDLIN( 175)					pixels->copyPixels(ghorz,_hx_tmp4, ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,locX,(int)0),null(),null(),null());
HXLINE( 176)					s->set_pixels(pixels);
HXLINE( 177)					s->scale->set(((Float)1.0),::flixel::FlxG_obj::height);
HXLINE( 178)					s->updateHitbox();
            				}
            				else {
HXLINE( 180)					bool _hx_tmp5;
HXDLIN( 180)					if ((::Math_obj::abs(DirX) > (int)0)) {
HXLINE( 180)						_hx_tmp5 = (::Math_obj::abs(DirY) > (int)0);
            					}
            					else {
HXLINE( 180)						_hx_tmp5 = false;
            					}
HXDLIN( 180)					if (_hx_tmp5) {
HXLINE( 183)						if ((DirY > (int)0)) {
HXLINE( 183)							locY = ::flixel::FlxG_obj::height;
            						}
            						else {
HXLINE( 183)							locY = (int)0;
            						}
HXLINE( 184)						s->loadGraphic(this->getGradient(),null(),null(),null(),null(),null());
HXLINE( 185)						s->set_flipX((DirX < (int)0));
HXLINE( 186)						s->set_flipY((DirY < (int)0));
            					}
            				}
            			}
            		}
HXLINE( 188)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TransitionFade_obj,makeSprite,return )

 ::openfl::_legacy::display::BitmapData TransitionFade_obj::getGradient(){
            	HX_GC_STACKFRAME(&_hx_pos_85f0573c4a29b283_192_getGradient)
HXLINE( 194)		 ::flixel::addons::transition::_TransitionFade::GraphicDiagonalGradient rawBmp =  ::flixel::addons::transition::_TransitionFade::GraphicDiagonalGradient_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null());
HXLINE( 195)		 ::openfl::_legacy::display::BitmapData gdiag = ( ( ::openfl::_legacy::display::BitmapData)(rawBmp) );
HXLINE( 196)		int gdiag_scaled = (::flixel::FlxG_obj::width * (int)2);
HXDLIN( 196)		 ::openfl::_legacy::display::BitmapData gdiag_scaled1 =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,gdiag_scaled,(::flixel::FlxG_obj::height * (int)2),true,null(),null());
HXLINE( 197)		 ::openfl::_legacy::geom::Matrix m =  ::openfl::_legacy::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 198)		int _hx_tmp = gdiag_scaled1->get_width();
HXDLIN( 198)		Float _hx_tmp1 = ((Float)_hx_tmp / (Float)gdiag->get_width());
HXDLIN( 198)		int _hx_tmp2 = gdiag_scaled1->get_height();
HXDLIN( 198)		m->scale(_hx_tmp1,((Float)_hx_tmp2 / (Float)gdiag->get_height()));
HXLINE( 199)		gdiag_scaled1->draw(gdiag,m,null(),null(),null(),true);
HXLINE( 200)		int theColor = this->_data->color;
HXLINE( 201)		int final_pixels = (::flixel::FlxG_obj::width * (int)3);
HXDLIN( 201)		 ::openfl::_legacy::display::BitmapData final_pixels1 =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,final_pixels,(::flixel::FlxG_obj::height * (int)3),true,theColor,null());
HXLINE( 202)		 ::openfl::_legacy::geom::Rectangle _hx_tmp3 = gdiag_scaled1->get_rect();
HXDLIN( 202)		int _hx_tmp4 = final_pixels1->get_width();
HXDLIN( 202)		int _hx_tmp5 = (_hx_tmp4 - gdiag_scaled1->get_width());
HXDLIN( 202)		int _hx_tmp6 = final_pixels1->get_height();
HXDLIN( 202)		final_pixels1->copyChannel(gdiag_scaled1,_hx_tmp3, ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp5,(_hx_tmp6 - gdiag_scaled1->get_height())),(int)1,(int)8);
HXLINE( 203)		gdiag->dispose();
HXLINE( 204)		gdiag_scaled1->dispose();
HXLINE( 205)		return final_pixels1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransitionFade_obj,getGradient,return )

void TransitionFade_obj::finishTween( ::flixel::tweens::FlxTween f){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_210_finishTween)
HXDLIN( 210)		this->delayThenFinish();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransitionFade_obj,finishTween,(void))


hx::ObjectPtr< TransitionFade_obj > TransitionFade_obj::__new( ::flixel::addons::transition::TransitionData data) {
	hx::ObjectPtr< TransitionFade_obj > __this = new TransitionFade_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< TransitionFade_obj > TransitionFade_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data) {
	TransitionFade_obj *__this = (TransitionFade_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TransitionFade_obj), true, "flixel.addons.transition.TransitionFade"));
	*(void **)__this = TransitionFade_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

TransitionFade_obj::TransitionFade_obj()
{
}

void TransitionFade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionFade);
	HX_MARK_MEMBER_NAME(back,"back");
	HX_MARK_MEMBER_NAME(tweenStr,"tweenStr");
	HX_MARK_MEMBER_NAME(tweenStr2,"tweenStr2");
	HX_MARK_MEMBER_NAME(tweenValStart,"tweenValStart");
	HX_MARK_MEMBER_NAME(tweenValStart2,"tweenValStart2");
	HX_MARK_MEMBER_NAME(tweenValEnd,"tweenValEnd");
	HX_MARK_MEMBER_NAME(tweenValEnd2,"tweenValEnd2");
	 ::flixel::addons::transition::TransitionEffect_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransitionFade_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(back,"back");
	HX_VISIT_MEMBER_NAME(tweenStr,"tweenStr");
	HX_VISIT_MEMBER_NAME(tweenStr2,"tweenStr2");
	HX_VISIT_MEMBER_NAME(tweenValStart,"tweenValStart");
	HX_VISIT_MEMBER_NAME(tweenValStart2,"tweenValStart2");
	HX_VISIT_MEMBER_NAME(tweenValEnd,"tweenValEnd");
	HX_VISIT_MEMBER_NAME(tweenValEnd2,"tweenValEnd2");
	 ::flixel::addons::transition::TransitionEffect_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TransitionFade_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return hx::Val( back ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tweenStr") ) { return hx::Val( tweenStr ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStr2") ) { return hx::Val( tweenStr2 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeSprite") ) { return hx::Val( makeSprite_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tweenValEnd") ) { return hx::Val( tweenValEnd ); }
		if (HX_FIELD_EQ(inName,"getGradient") ) { return hx::Val( getGradient_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishTween") ) { return hx::Val( finishTween_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenValEnd2") ) { return hx::Val( tweenValEnd2 ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenValStart") ) { return hx::Val( tweenValStart ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tweenValStart2") ) { return hx::Val( tweenValStart2 ); }
		if (HX_FIELD_EQ(inName,"setTweenValues") ) { return hx::Val( setTweenValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TransitionFade_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { back=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tweenStr") ) { tweenStr=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStr2") ) { tweenStr2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tweenValEnd") ) { tweenValEnd=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenValEnd2") ) { tweenValEnd2=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenValStart") ) { tweenValStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tweenValStart2") ) { tweenValStart2=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionFade_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("back","\x27","\xda","\x10","\x41"));
	outFields->push(HX_HCSTRING("tweenStr","\x06","\xcb","\xce","\x11"));
	outFields->push(HX_HCSTRING("tweenStr2","\x6c","\xda","\x22","\x83"));
	outFields->push(HX_HCSTRING("tweenValStart","\x4c","\xbf","\x69","\xc2"));
	outFields->push(HX_HCSTRING("tweenValStart2","\x66","\xa3","\x1d","\x5a"));
	outFields->push(HX_HCSTRING("tweenValEnd","\x45","\xe0","\xeb","\xf3"));
	outFields->push(HX_HCSTRING("tweenValEnd2","\x4d","\x5c","\x78","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TransitionFade_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(TransitionFade_obj,back),HX_HCSTRING("back","\x27","\xda","\x10","\x41")},
	{hx::fsString,(int)offsetof(TransitionFade_obj,tweenStr),HX_HCSTRING("tweenStr","\x06","\xcb","\xce","\x11")},
	{hx::fsString,(int)offsetof(TransitionFade_obj,tweenStr2),HX_HCSTRING("tweenStr2","\x6c","\xda","\x22","\x83")},
	{hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValStart),HX_HCSTRING("tweenValStart","\x4c","\xbf","\x69","\xc2")},
	{hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValStart2),HX_HCSTRING("tweenValStart2","\x66","\xa3","\x1d","\x5a")},
	{hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValEnd),HX_HCSTRING("tweenValEnd","\x45","\xe0","\xeb","\xf3")},
	{hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValEnd2),HX_HCSTRING("tweenValEnd2","\x4d","\x5c","\x78","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TransitionFade_obj_sStaticStorageInfo = 0;
#endif

static ::String TransitionFade_obj_sMemberFields[] = {
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("tweenStr","\x06","\xcb","\xce","\x11"),
	HX_HCSTRING("tweenStr2","\x6c","\xda","\x22","\x83"),
	HX_HCSTRING("tweenValStart","\x4c","\xbf","\x69","\xc2"),
	HX_HCSTRING("tweenValStart2","\x66","\xa3","\x1d","\x5a"),
	HX_HCSTRING("tweenValEnd","\x45","\xe0","\xeb","\xf3"),
	HX_HCSTRING("tweenValEnd2","\x4d","\x5c","\x78","\x7a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("setTweenValues","\x2b","\x80","\xce","\x9b"),
	HX_HCSTRING("makeSprite","\x93","\xb0","\x65","\x15"),
	HX_HCSTRING("getGradient","\xa6","\xfc","\x32","\x50"),
	HX_HCSTRING("finishTween","\x18","\xcd","\x75","\x40"),
	::String(null()) };

static void TransitionFade_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransitionFade_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TransitionFade_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransitionFade_obj::__mClass,"__mClass");
};

#endif

hx::Class TransitionFade_obj::__mClass;

void TransitionFade_obj::__register()
{
	hx::Object *dummy = new TransitionFade_obj;
	TransitionFade_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.transition.TransitionFade","\xa1","\x63","\xfb","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TransitionFade_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TransitionFade_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransitionFade_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TransitionFade_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionFade_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionFade_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition