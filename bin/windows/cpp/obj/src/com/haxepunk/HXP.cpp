#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace com{
namespace haxepunk{

Void HXP_obj::__construct()
{
	return null();
}

//HXP_obj::~HXP_obj() { }

Dynamic HXP_obj::__CreateEmpty() { return  new HXP_obj; }
hx::ObjectPtr< HXP_obj > HXP_obj::__new()
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

Dynamic HXP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

::String HXP_obj::VERSION;

Float HXP_obj::get_NUMBER_MAX_VALUE( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_NUMBER_MAX_VALUE",0x3fe5abf0,"com.haxepunk.HXP.get_NUMBER_MAX_VALUE","com/haxepunk/HXP.hx",71,0x4944a037)
	HX_STACK_LINE(71)
	Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	return ((int)179 * _g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_NUMBER_MAX_VALUE,return )

int HXP_obj::INT_MIN_VALUE;

int HXP_obj::INT_MAX_VALUE;

int HXP_obj::blackColor;

int HXP_obj::width;

int HXP_obj::height;

int HXP_obj::windowWidth;

int HXP_obj::windowHeight;

bool HXP_obj::fixed;

Float HXP_obj::frameRate;

Float HXP_obj::assignedFrameRate;

Float HXP_obj::elapsed;

Float HXP_obj::rate;

::com::haxepunk::Screen HXP_obj::screen;

::openfl::_v2::display::BitmapData HXP_obj::buffer;

::openfl::_v2::geom::Rectangle HXP_obj::bounds;

::String HXP_obj::defaultFont;

::openfl::_v2::geom::Point HXP_obj::camera;

::com::haxepunk::Tweener HXP_obj::tweener;

bool HXP_obj::focused;

Float HXP_obj::halfWidth;

Float HXP_obj::halfHeight;

Array< int > HXP_obj::orientations;

::com::haxepunk::RenderMode HXP_obj::renderMode;

::com::haxepunk::RenderMode HXP_obj::set_renderMode( ::com::haxepunk::RenderMode value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_renderMode",0x0245325d,"com.haxepunk.HXP.set_renderMode","com/haxepunk/HXP.hx",189,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	::com::haxepunk::HXP_obj::renderMode = value;
	HX_STACK_LINE(193)
	if (((::com::haxepunk::HXP_obj::screen == null()))){
		HX_STACK_LINE(194)
		::com::haxepunk::Screen _g = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		::com::haxepunk::HXP_obj::screen = _g;
	}
	else{
		HX_STACK_LINE(196)
		::com::haxepunk::HXP_obj::screen->init();
	}
	HX_STACK_LINE(198)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_renderMode,return )

Dynamic HXP_obj::choose;

::com::haxepunk::Scene HXP_obj::get_world( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_world",0x45db9442,"com.haxepunk.HXP.get_world","com/haxepunk/HXP.hx",233,0x4944a037)
	HX_STACK_LINE(233)
	return ::com::haxepunk::HXP_obj::engine->_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_world,return )

::com::haxepunk::Scene HXP_obj::set_world( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_world",0x292c804e,"com.haxepunk.HXP.set_world","com/haxepunk/HXP.hx",234,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(234)
	return ::com::haxepunk::HXP_obj::engine->set_scene(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_world,return )

::com::haxepunk::Scene HXP_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_scene",0xf048d73c,"com.haxepunk.HXP.get_scene","com/haxepunk/HXP.hx",241,0x4944a037)
	HX_STACK_LINE(241)
	return ::com::haxepunk::HXP_obj::engine->_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_scene,return )

::com::haxepunk::Scene HXP_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_scene",0xd399c348,"com.haxepunk.HXP.set_scene","com/haxepunk/HXP.hx",242,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(242)
	return ::com::haxepunk::HXP_obj::engine->set_scene(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_scene,return )

Void HXP_obj::resize( int width,int height){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resize",0x7723aebb,"com.haxepunk.HXP.resize","com/haxepunk/HXP.hx",250,0x4944a037)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(252)
		int _g = ::Std_obj::_int((Float(width) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		width = _g;
		HX_STACK_LINE(253)
		int _g1 = ::Std_obj::_int((Float(height) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		height = _g1;
		HX_STACK_LINE(254)
		::com::haxepunk::HXP_obj::width = width;
		HX_STACK_LINE(255)
		::com::haxepunk::HXP_obj::height = height;
		HX_STACK_LINE(256)
		::com::haxepunk::HXP_obj::halfWidth = (Float(width) / Float((int)2));
		HX_STACK_LINE(257)
		::com::haxepunk::HXP_obj::halfHeight = (Float(height) / Float((int)2));
		HX_STACK_LINE(258)
		::com::haxepunk::HXP_obj::bounds->width = width;
		HX_STACK_LINE(259)
		::com::haxepunk::HXP_obj::bounds->height = height;
		HX_STACK_LINE(260)
		::com::haxepunk::HXP_obj::screen->resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resize,(void))

Void HXP_obj::clear( Dynamic array){
{
		HX_STACK_FRAME("com.haxepunk.HXP","clear",0x11c012a6,"com.haxepunk.HXP.clear","com/haxepunk/HXP.hx",270,0x4944a037)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(270)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,clear,(void))

Void HXP_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","setCamera",0x4b015d80,"com.haxepunk.HXP.setCamera","com/haxepunk/HXP.hx",282,0x4944a037)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(283)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(284)
		::com::haxepunk::HXP_obj::camera->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,setCamera,(void))

Void HXP_obj::resetCamera( ){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resetCamera",0x534cc3ad,"com.haxepunk.HXP.resetCamera","com/haxepunk/HXP.hx",291,0x4944a037)
		HX_STACK_LINE(292)
		Float _g = ::com::haxepunk::HXP_obj::camera->y = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		::com::haxepunk::HXP_obj::camera->x = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,resetCamera,(void))

bool HXP_obj::get_fullscreen( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_fullscreen",0xf66eb64b,"com.haxepunk.HXP.get_fullscreen","com/haxepunk/HXP.hx",299,0x4944a037)
	HX_STACK_LINE(299)
	::openfl::display::StageDisplayState _g = ::com::haxepunk::HXP_obj::stage->get_displayState();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(299)
	return (_g == ::openfl::display::StageDisplayState_obj::FULL_SCREEN);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_fullscreen,return )

bool HXP_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_fullscreen",0x168e9ebf,"com.haxepunk.HXP.set_fullscreen","com/haxepunk/HXP.hx",301,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(302)
	if ((value)){
		HX_STACK_LINE(302)
		::com::haxepunk::HXP_obj::stage->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(303)
		::com::haxepunk::HXP_obj::stage->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(304)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_fullscreen,return )

Float HXP_obj::get_volume( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_volume",0x6ffa5dea,"com.haxepunk.HXP.get_volume","com/haxepunk/HXP.hx",311,0x4944a037)
	HX_STACK_LINE(311)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_volume,return )

Float HXP_obj::set_volume( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_volume",0x7377fc5e,"com.haxepunk.HXP.set_volume","com/haxepunk/HXP.hx",313,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(314)
	if (((value < (int)0))){
		HX_STACK_LINE(314)
		value = (int)0;
	}
	HX_STACK_LINE(315)
	if (((::com::haxepunk::HXP_obj::_volume == value))){
		HX_STACK_LINE(315)
		return value;
	}
	HX_STACK_LINE(316)
	Float _g = ::com::haxepunk::HXP_obj::_volume = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(316)
	::com::haxepunk::HXP_obj::_soundTransform->volume = _g;
	HX_STACK_LINE(320)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_volume,return )

Float HXP_obj::get_pan( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_pan",0x8b6bf34d,"com.haxepunk.HXP.get_pan","com/haxepunk/HXP.hx",327,0x4944a037)
	HX_STACK_LINE(327)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_pan,return )

Float HXP_obj::set_pan( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_pan",0x7e6d8459,"com.haxepunk.HXP.set_pan","com/haxepunk/HXP.hx",329,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(330)
	if (((value < (int)-1))){
		HX_STACK_LINE(330)
		value = (int)-1;
	}
	HX_STACK_LINE(331)
	if (((value > (int)1))){
		HX_STACK_LINE(331)
		value = (int)1;
	}
	HX_STACK_LINE(332)
	if (((::com::haxepunk::HXP_obj::_pan == value))){
		HX_STACK_LINE(332)
		return value;
	}
	HX_STACK_LINE(333)
	Float _g = ::com::haxepunk::HXP_obj::_pan = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(333)
	::com::haxepunk::HXP_obj::_soundTransform->pan = _g;
	HX_STACK_LINE(337)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_pan,return )

int HXP_obj::sign( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","sign",0xbdbb5544,"com.haxepunk.HXP.sign","com/haxepunk/HXP.hx",347,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(347)
	if (((value < (int)0))){
		HX_STACK_LINE(347)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(347)
		if (((value > (int)0))){
			HX_STACK_LINE(347)
			return (int)1;
		}
		else{
			HX_STACK_LINE(347)
			return (int)0;
		}
	}
	HX_STACK_LINE(347)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,sign,return )

Float HXP_obj::approach( Float value,Float target,Float amount){
	HX_STACK_FRAME("com.haxepunk.HXP","approach",0x3bccb1ef,"com.haxepunk.HXP.approach","com/haxepunk/HXP.hx",359,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(359)
	if (((value < (target - amount)))){
		HX_STACK_LINE(361)
		return (value + amount);
	}
	else{
		HX_STACK_LINE(363)
		if (((value > (target + amount)))){
			HX_STACK_LINE(365)
			return (value - amount);
		}
		else{
			HX_STACK_LINE(369)
			return target;
		}
	}
	HX_STACK_LINE(359)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,approach,return )

Float HXP_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","lerp",0xb917d77e,"com.haxepunk.HXP.lerp","com/haxepunk/HXP.hx",382,0x4944a037)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(382)
		return (a + (((b - a)) * t));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,lerp,return )

int HXP_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","colorLerp",0x56eb3f13,"com.haxepunk.HXP.colorLerp","com/haxepunk/HXP.hx",394,0x4944a037)
	HX_STACK_ARG(fromColor,"fromColor")
	HX_STACK_ARG(toColor,"toColor")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(394)
		if (((t <= (int)0))){
			HX_STACK_LINE(396)
			return fromColor;
		}
		else{
			HX_STACK_LINE(398)
			if (((t >= (int)1))){
				HX_STACK_LINE(400)
				return toColor;
			}
			else{
				HX_STACK_LINE(404)
				int a = (int((int(fromColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(405)
				int r = (int((int(fromColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(406)
				int g = (int((int(fromColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(407)
				int b = (int(fromColor) & int((int)255));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(408)
				int dA = (((int((int(toColor) >> int((int)24))) & int((int)255))) - a);		HX_STACK_VAR(dA,"dA");
				HX_STACK_LINE(409)
				int dR = (((int((int(toColor) >> int((int)16))) & int((int)255))) - r);		HX_STACK_VAR(dR,"dR");
				HX_STACK_LINE(410)
				int dG = (((int((int(toColor) >> int((int)8))) & int((int)255))) - g);		HX_STACK_VAR(dG,"dG");
				HX_STACK_LINE(411)
				int dB = (((int(toColor) & int((int)255))) - b);		HX_STACK_VAR(dB,"dB");
				HX_STACK_LINE(412)
				int _g = ::Std_obj::_int((dA * t));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(412)
				hx::AddEq(a,_g);
				HX_STACK_LINE(413)
				int _g1 = ::Std_obj::_int((dR * t));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(413)
				hx::AddEq(r,_g1);
				HX_STACK_LINE(414)
				int _g2 = ::Std_obj::_int((dG * t));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(414)
				hx::AddEq(g,_g2);
				HX_STACK_LINE(415)
				int _g3 = ::Std_obj::_int((dB * t));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(415)
				hx::AddEq(b,_g3);
				HX_STACK_LINE(416)
				return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
			}
		}
		HX_STACK_LINE(394)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,colorLerp,return )

Void HXP_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","stepTowards",0x0c706b49,"com.haxepunk.HXP.stepTowards","com/haxepunk/HXP.hx",428,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(429)
		::com::haxepunk::HXP_obj::point->x = (x - object->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(430)
		::com::haxepunk::HXP_obj::point->y = (y - object->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(431)
		Float _g = ::com::haxepunk::HXP_obj::point->get_length();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(431)
		if (((_g <= distance))){
			HX_STACK_LINE(433)
			object->__FieldRef(HX_CSTRING("x")) = x;
			HX_STACK_LINE(434)
			object->__FieldRef(HX_CSTRING("y")) = y;
			HX_STACK_LINE(435)
			return null();
		}
		HX_STACK_LINE(437)
		::com::haxepunk::HXP_obj::point->normalize(distance);
		HX_STACK_LINE(438)
		{
			HX_STACK_LINE(438)
			Dynamic _g1 = object;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(438)
			_g1->__FieldRef(HX_CSTRING("x")) = (_g1->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::point->x);
		}
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			Dynamic _g1 = object;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(439)
			_g1->__FieldRef(HX_CSTRING("y")) = (_g1->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::point->y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,stepTowards,(void))

Void HXP_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","anchorTo",0xf4091fd7,"com.haxepunk.HXP.anchorTo","com/haxepunk/HXP.hx",449,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(450)
		::com::haxepunk::HXP_obj::point->x = (object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(451)
		::com::haxepunk::HXP_obj::point->y = (object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(452)
		Float _g = ::com::haxepunk::HXP_obj::point->get_length();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(452)
		if (((_g > distance))){
			HX_STACK_LINE(452)
			::com::haxepunk::HXP_obj::point->normalize(distance);
		}
		HX_STACK_LINE(453)
		object->__FieldRef(HX_CSTRING("x")) = (anchor->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(454)
		object->__FieldRef(HX_CSTRING("y")) = (anchor->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,anchorTo,(void))

Float HXP_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_FRAME("com.haxepunk.HXP","angle",0xec46e4ec,"com.haxepunk.HXP.angle","com/haxepunk/HXP.hx",466,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_LINE(467)
	Float _g = ::Math_obj::atan2((y2 - y1),(x2 - x1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(467)
	Float a = (_g * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(468)
	if (((a < (int)0))){
		HX_STACK_LINE(468)
		return (a + (int)360);
	}
	else{
		HX_STACK_LINE(468)
		return a;
	}
	HX_STACK_LINE(468)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,angle,return )

Void HXP_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","angleXY",0xb77b44ed,"com.haxepunk.HXP.angleXY","com/haxepunk/HXP.hx",480,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(481)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			Float _g = ::Math_obj::cos(angle);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(482)
			Float _g1 = (_g * length);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(482)
			Float value = (_g1 + x);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(482)
			object->__FieldRef(HX_CSTRING("x")) = value;
		}
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			Float _g2 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(483)
			Float _g3 = (_g2 * length);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(483)
			Float value = (_g3 + y);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(483)
			object->__FieldRef(HX_CSTRING("y")) = value;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,angleXY,(void))

Float HXP_obj::angleDifference( Float angle1,Float angle2){
	HX_STACK_FRAME("com.haxepunk.HXP","angleDifference",0x61996409,"com.haxepunk.HXP.angleDifference","com/haxepunk/HXP.hx",493,0x4944a037)
	HX_STACK_ARG(angle1,"angle1")
	HX_STACK_ARG(angle2,"angle2")
	HX_STACK_LINE(494)
	Float diff = (angle2 - angle1);		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(495)
	while((true)){
		HX_STACK_LINE(495)
		if ((!(((diff < (int)-180))))){
			HX_STACK_LINE(495)
			break;
		}
		HX_STACK_LINE(495)
		hx::AddEq(diff,(int)360);
	}
	HX_STACK_LINE(496)
	while((true)){
		HX_STACK_LINE(496)
		if ((!(((diff > (int)180))))){
			HX_STACK_LINE(496)
			break;
		}
		HX_STACK_LINE(496)
		hx::SubEq(diff,(int)360);
	}
	HX_STACK_LINE(497)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,angleDifference,return )

Void HXP_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","rotateAround",0xaf210d0f,"com.haxepunk.HXP.rotateAround","com/haxepunk/HXP.hx",508,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(relative,"relative")
{
		HX_STACK_LINE(509)
		if ((relative)){
			HX_STACK_LINE(509)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				Float _g = ::Math_obj::atan2((object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true)),(object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(509)
				Float a = (_g * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(509)
				if (((a < (int)0))){
					HX_STACK_LINE(509)
					_g1 = (a + (int)360);
				}
				else{
					HX_STACK_LINE(509)
					_g1 = a;
				}
			}
			HX_STACK_LINE(509)
			hx::AddEq(angle,_g1);
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			HX_STACK_LINE(510)
			Float length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(510)
				Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(510)
				Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(510)
				Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(510)
				length = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
			}
			HX_STACK_LINE(510)
			hx::MultEq(angle1,(Float(::Math_obj::PI) / Float((int)-180)));
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				Float _g2 = ::Math_obj::cos(angle1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(510)
				Float _g3 = (_g2 * length);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(510)
				Float value = (_g3 + anchor->__Field(HX_CSTRING("x"),true));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(510)
				object->__FieldRef(HX_CSTRING("x")) = value;
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				Float _g4 = ::Math_obj::sin(angle1);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(510)
				Float _g5 = (_g4 * length);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(510)
				Float value = (_g5 + anchor->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(510)
				object->__FieldRef(HX_CSTRING("y")) = value;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,rotateAround,(void))

Float HXP_obj::round( Float num,int precision){
	HX_STACK_FRAME("com.haxepunk.HXP","round",0xb6ca9967,"com.haxepunk.HXP.round","com/haxepunk/HXP.hx",520,0x4944a037)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(521)
	Float exp = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(522)
	int _g = ::Math_obj::round((num * exp));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(522)
	return (Float(_g) / Float(exp));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,round,return )

Float HXP_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","distance",0x14f5e7bc,"com.haxepunk.HXP.distance","com/haxepunk/HXP.hx",535,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(535)
		return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distance,return )

Float HXP_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","distanceSquared",0x71d078cb,"com.haxepunk.HXP.distanceSquared","com/haxepunk/HXP.hx",548,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(548)
		return ((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distanceSquared,return )

Float HXP_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("com.haxepunk.HXP","distanceRects",0xe8463173,"com.haxepunk.HXP.distanceRects","com/haxepunk/HXP.hx",564,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(565)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(567)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(567)
			return (int)0;
		}
		HX_STACK_LINE(568)
		if (((y1 > y2))){
			HX_STACK_LINE(568)
			return (y1 - ((y2 + h2)));
		}
		HX_STACK_LINE(569)
		return (y2 - ((y1 + h1)));
	}
	HX_STACK_LINE(571)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(573)
		if (((x1 > x2))){
			HX_STACK_LINE(573)
			return (x1 - ((x2 + w2)));
		}
		HX_STACK_LINE(574)
		return (x2 - ((x1 + w1)));
	}
	HX_STACK_LINE(576)
	if (((x1 > x2))){
		HX_STACK_LINE(578)
		if (((y1 > y2))){
			HX_STACK_LINE(578)
			Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(578)
			Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
			HX_STACK_LINE(578)
			return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y21 - y1)) * ((y21 - y1)))));
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
			HX_STACK_LINE(579)
			Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(579)
			return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y2 - y11)) * ((y2 - y11)))));
		}
	}
	HX_STACK_LINE(581)
	if (((y1 > y2))){
		HX_STACK_LINE(581)
		Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
		HX_STACK_LINE(581)
		Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
		HX_STACK_LINE(581)
		return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y21 - y1)) * ((y21 - y1)))));
	}
	HX_STACK_LINE(582)
	Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
	HX_STACK_LINE(582)
	Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
	HX_STACK_LINE(582)
	return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y2 - y11)) * ((y2 - y11)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(HXP_obj,distanceRects,return )

Float HXP_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("com.haxepunk.HXP","distanceRectPoint",0x7f6fd530,"com.haxepunk.HXP.distanceRectPoint","com/haxepunk/HXP.hx",596,0x4944a037)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(597)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(599)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(599)
			return (int)0;
		}
		HX_STACK_LINE(600)
		if (((py > ry))){
			HX_STACK_LINE(600)
			return (py - ((ry + rh)));
		}
		HX_STACK_LINE(601)
		return (ry - py);
	}
	HX_STACK_LINE(603)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(605)
		if (((px > rx))){
			HX_STACK_LINE(605)
			return (px - ((rx + rw)));
		}
		HX_STACK_LINE(606)
		return (rx - px);
	}
	HX_STACK_LINE(608)
	if (((px > rx))){
		HX_STACK_LINE(610)
		if (((py > ry))){
			HX_STACK_LINE(610)
			Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(610)
			Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(610)
			return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((y2 - py)) * ((y2 - py)))));
		}
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(611)
			return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((ry - py)) * ((ry - py)))));
		}
	}
	HX_STACK_LINE(613)
	if (((py > ry))){
		HX_STACK_LINE(613)
		Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(613)
		return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((y2 - py)) * ((y2 - py)))));
	}
	HX_STACK_LINE(614)
	return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((ry - py)) * ((ry - py)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,distanceRectPoint,return )

Float HXP_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("com.haxepunk.HXP","clamp",0x11bd1414,"com.haxepunk.HXP.clamp","com/haxepunk/HXP.hx",626,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(626)
	if (((max > min))){
		HX_STACK_LINE(628)
		if (((value < min))){
			HX_STACK_LINE(628)
			return min;
		}
		else{
			HX_STACK_LINE(629)
			if (((value > max))){
				HX_STACK_LINE(629)
				return max;
			}
			else{
				HX_STACK_LINE(630)
				return value;
			}
		}
	}
	else{
		HX_STACK_LINE(635)
		if (((value < max))){
			HX_STACK_LINE(635)
			return max;
		}
		else{
			HX_STACK_LINE(636)
			if (((value > min))){
				HX_STACK_LINE(636)
				return min;
			}
			else{
				HX_STACK_LINE(637)
				return value;
			}
		}
	}
	HX_STACK_LINE(626)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,clamp,return )

Void HXP_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","clampInRect",0x2712fadd,"com.haxepunk.HXP.clampInRect","com/haxepunk/HXP.hx",651,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			Float value = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("x"),true),(x + padding),((x + width) - padding));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(652)
			object->__FieldRef(HX_CSTRING("x")) = value;
		}
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			Float value = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("y"),true),(y + padding),((y + height) - padding));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(653)
			object->__FieldRef(HX_CSTRING("y")) = value;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,clampInRect,(void))

Float HXP_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("com.haxepunk.HXP","scale",0x42336fa3,"com.haxepunk.HXP.scale","com/haxepunk/HXP.hx",667,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(667)
	return (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scale,return )

Float HXP_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("com.haxepunk.HXP","scaleClamp",0x89abe458,"com.haxepunk.HXP.scaleClamp","com/haxepunk/HXP.hx",680,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(681)
	value = (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
	HX_STACK_LINE(682)
	if (((max2 > min2))){
		HX_STACK_LINE(684)
		if (((value < max2))){
			HX_STACK_LINE(684)
			value = value;
		}
		else{
			HX_STACK_LINE(684)
			value = max2;
		}
		HX_STACK_LINE(685)
		if (((value > min2))){
			HX_STACK_LINE(685)
			return value;
		}
		else{
			HX_STACK_LINE(685)
			return min2;
		}
	}
	HX_STACK_LINE(687)
	if (((value < min2))){
		HX_STACK_LINE(687)
		value = value;
	}
	else{
		HX_STACK_LINE(687)
		value = min2;
	}
	HX_STACK_LINE(688)
	if (((value > max2))){
		HX_STACK_LINE(688)
		return value;
	}
	else{
		HX_STACK_LINE(688)
		return max2;
	}
	HX_STACK_LINE(688)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scaleClamp,return )

int HXP_obj::randomSeed;

int HXP_obj::set_randomSeed( int value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_randomSeed",0xd8fff598,"com.haxepunk.HXP.set_randomSeed","com/haxepunk/HXP.hx",696,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(697)
	Float _g = ::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(697)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(697)
	::com::haxepunk::HXP_obj::_seed = _g1;
	HX_STACK_LINE(698)
	::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
	HX_STACK_LINE(699)
	return ::com::haxepunk::HXP_obj::_seed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_randomSeed,return )

Void HXP_obj::randomizeSeed( ){
{
		HX_STACK_FRAME("com.haxepunk.HXP","randomizeSeed",0xb58b595b,"com.haxepunk.HXP.randomizeSeed","com/haxepunk/HXP.hx",707,0x4944a037)
		HX_STACK_LINE(707)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(707)
		Float _g1 = ((int)2147483647 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(707)
		int value = ::Std_obj::_int(_g1);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(707)
		Float _g2 = ::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(707)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(707)
		::com::haxepunk::HXP_obj::_seed = _g3;
		HX_STACK_LINE(707)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(707)
		::com::haxepunk::HXP_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,randomizeSeed,(void))

Float HXP_obj::random;

Float HXP_obj::get_random( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_random",0xc8365613,"com.haxepunk.HXP.get_random","com/haxepunk/HXP.hx",715,0x4944a037)
	HX_STACK_LINE(716)
	int _g = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(716)
	::com::haxepunk::HXP_obj::_seed = _g;
	HX_STACK_LINE(717)
	return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_random,return )

int HXP_obj::rand( int amount){
	HX_STACK_FRAME("com.haxepunk.HXP","rand",0xbd0c12ac,"com.haxepunk.HXP.rand","com/haxepunk/HXP.hx",726,0x4944a037)
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(727)
	int _g = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(727)
	::com::haxepunk::HXP_obj::_seed = _g;
	HX_STACK_LINE(728)
	return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647)) * amount));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,rand,return )

int HXP_obj::indexOf( Dynamic arr,Dynamic v){
	HX_STACK_FRAME("com.haxepunk.HXP","indexOf",0x45612222,"com.haxepunk.HXP.indexOf","com/haxepunk/HXP.hx",743,0x4944a037)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(743)
	return arr->__Field(HX_CSTRING("indexOf"),true)(v,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,indexOf,return )

Dynamic HXP_obj::next( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","next",0xba6a49fa,"com.haxepunk.HXP.next","com/haxepunk/HXP.hx",762,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(762)
		if ((loop)){
			HX_STACK_LINE(763)
			int _g = options->__Field(HX_CSTRING("indexOf"),true)(current,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(763)
			int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(763)
			int _g2 = hx::Mod(_g1,options->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(763)
			return options->__GetItem(_g2);
		}
		else{
			HX_STACK_LINE(765)
			int _g3 = options->__Field(HX_CSTRING("indexOf"),true)(current,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(765)
			int _g4 = (_g3 + (int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(765)
			Float _g5 = ::Math_obj::max(_g4,(options->__Field(HX_CSTRING("length"),true) - (int)1));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(765)
			int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(765)
			return options->__GetItem(_g6);
		}
		HX_STACK_LINE(762)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,next,return )

Dynamic HXP_obj::prev( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","prev",0xbbc683fa,"com.haxepunk.HXP.prev","com/haxepunk/HXP.hx",777,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(777)
		if ((loop)){
			HX_STACK_LINE(778)
			int _g = options->__Field(HX_CSTRING("indexOf"),true)(current,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(778)
			int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(778)
			int _g2 = (_g1 + options->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(778)
			int _g3 = hx::Mod(_g2,options->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(778)
			return options->__GetItem(_g3);
		}
		else{
			HX_STACK_LINE(780)
			int _g4 = options->__Field(HX_CSTRING("indexOf"),true)(current,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(780)
			int _g5 = (_g4 - (int)1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(780)
			Float _g6 = ::Math_obj::max(_g5,(int)0);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(780)
			int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(780)
			return options->__GetItem(_g7);
		}
		HX_STACK_LINE(777)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,prev,return )

Dynamic HXP_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_FRAME("com.haxepunk.HXP","swap",0xbdc5ef9a,"com.haxepunk.HXP.swap","com/haxepunk/HXP.hx",792,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(792)
	if (((current == a))){
		HX_STACK_LINE(792)
		return b;
	}
	else{
		HX_STACK_LINE(792)
		return a;
	}
	HX_STACK_LINE(792)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,swap,return )

Void HXP_obj::insertSortedKey( Dynamic list,Dynamic key,Dynamic compare){
{
		HX_STACK_FRAME("com.haxepunk.HXP","insertSortedKey",0x72ebda42,"com.haxepunk.HXP.insertSortedKey","com/haxepunk/HXP.hx",802,0x4944a037)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(compare,"compare")
		HX_STACK_LINE(803)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(804)
		int mid = (int)0;		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(805)
		int min = (int)0;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(806)
		int max = (list->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(807)
		while((true)){
			HX_STACK_LINE(807)
			if ((!(((max >= min))))){
				HX_STACK_LINE(807)
				break;
			}
			HX_STACK_LINE(809)
			int _g = ::Std_obj::_int((Float(((max - min))) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(809)
			int _g1 = (min + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(809)
			mid = _g1;
			HX_STACK_LINE(810)
			int _g2 = compare(list->__GetItem(mid),key).Cast< int >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(810)
			result = _g2;
			HX_STACK_LINE(811)
			if (((result > (int)0))){
				HX_STACK_LINE(811)
				max = (mid - (int)1);
			}
			else{
				HX_STACK_LINE(812)
				if (((result < (int)0))){
					HX_STACK_LINE(812)
					min = (mid + (int)1);
				}
				else{
					HX_STACK_LINE(813)
					return null();
				}
			}
		}
		HX_STACK_LINE(816)
		list->__Field(HX_CSTRING("insert"),true)((  (((result > (int)0))) ? int(mid) : int((mid + (int)1)) ),key);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,insertSortedKey,(void))

int HXP_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","getColorRGB",0xab8e81f9,"com.haxepunk.HXP.getColorRGB","com/haxepunk/HXP.hx",828,0x4944a037)
	HX_STACK_ARG(R,"R")
	HX_STACK_ARG(G,"G")
	HX_STACK_ARG(B,"B")
{
		HX_STACK_LINE(828)
		return (int((int((int(R) << int((int)16))) | int((int(G) << int((int)8))))) | int(B));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorRGB,return )

int HXP_obj::getColorHSV( Float h,Float s,Float v){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorHSV",0xab86f5f7,"com.haxepunk.HXP.getColorHSV","com/haxepunk/HXP.hx",839,0x4944a037)
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(840)
	int _g = ::Std_obj::_int((h * (int)360));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(840)
	h = _g;
	HX_STACK_LINE(841)
	int _g1 = ::Math_obj::floor((Float(h) / Float((int)60)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(841)
	int hi = hx::Mod(_g1,(int)6);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(842)
	int _g2 = ::Math_obj::floor((Float(h) / Float((int)60)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(842)
	Float f = ((Float(h) / Float((int)60)) - _g2);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(843)
	Float p = (v * (((int)1 - s)));		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(844)
	Float q = (v * (((int)1 - (f * s))));		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(845)
	Float t = (v * (((int)1 - ((((int)1 - f)) * s))));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(846)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(848)
			int _g3 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(848)
			int _g4 = (int(_g3) << int((int)16));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(848)
			int _g5 = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(848)
			int _g6 = (int(_g5) << int((int)8));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(848)
			int _g7 = (int(_g4) | int(_g6));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(848)
			int _g8 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(848)
			return (int(_g7) | int(_g8));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(849)
			int _g9 = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(849)
			int _g10 = (int(_g9) << int((int)16));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(849)
			int _g11 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(849)
			int _g12 = (int(_g11) << int((int)8));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(849)
			int _g13 = (int(_g10) | int(_g12));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(849)
			int _g14 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(849)
			return (int(_g13) | int(_g14));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(850)
			int _g15 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(850)
			int _g16 = (int(_g15) << int((int)16));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(850)
			int _g17 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(850)
			int _g18 = (int(_g17) << int((int)8));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(850)
			int _g19 = (int(_g16) | int(_g18));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(850)
			int _g20 = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(850)
			return (int(_g19) | int(_g20));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(851)
			int _g21 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(851)
			int _g22 = (int(_g21) << int((int)16));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(851)
			int _g23 = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(851)
			int _g24 = (int(_g23) << int((int)8));		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(851)
			int _g25 = (int(_g22) | int(_g24));		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(851)
			int _g26 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(851)
			return (int(_g25) | int(_g26));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(852)
			int _g27 = ::Std_obj::_int((t * (int)255));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(852)
			int _g28 = (int(_g27) << int((int)16));		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(852)
			int _g29 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(852)
			int _g30 = (int(_g29) << int((int)8));		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(852)
			int _g31 = (int(_g28) | int(_g30));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(852)
			int _g32 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(852)
			return (int(_g31) | int(_g32));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(853)
			int _g33 = ::Std_obj::_int((v * (int)255));		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(853)
			int _g34 = (int(_g33) << int((int)16));		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(853)
			int _g35 = ::Std_obj::_int((p * (int)255));		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(853)
			int _g36 = (int(_g35) << int((int)8));		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(853)
			int _g37 = (int(_g34) | int(_g36));		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(853)
			int _g38 = ::Std_obj::_int((q * (int)255));		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(853)
			return (int(_g37) | int(_g38));
		}
		;break;
		default: {
			HX_STACK_LINE(854)
			return (int)0;
		}
	}
	HX_STACK_LINE(856)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorHSV,return )

Float HXP_obj::getColorHue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorHue",0xab8713a4,"com.haxepunk.HXP.getColorHue","com/haxepunk/HXP.hx",865,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(866)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(867)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(868)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(870)
	Float _g = ::Math_obj::max(s,v);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(870)
	Float _g1 = ::Math_obj::max(h,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(870)
	int max = ::Std_obj::_int(_g1);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(871)
	Float _g2 = ::Math_obj::min(s,v);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(871)
	Float _g3 = ::Math_obj::min(h,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(871)
	int min = ::Std_obj::_int(_g3);		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(873)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(875)
	if (((max == min))){
		HX_STACK_LINE(877)
		hue = (int)0;
	}
	else{
		HX_STACK_LINE(879)
		if (((max == h))){
			HX_STACK_LINE(881)
			hue = hx::Mod((((Float(((int)60 * ((s - v)))) / Float(((max - min)))) + (int)360)),(int)360);
		}
		else{
			HX_STACK_LINE(883)
			if (((max == s))){
				HX_STACK_LINE(885)
				hue = ((Float(((int)60 * ((v - h)))) / Float(((max - min)))) + (int)120);
			}
			else{
				HX_STACK_LINE(887)
				if (((max == v))){
					HX_STACK_LINE(889)
					hue = ((Float(((int)60 * ((h - s)))) / Float(((max - min)))) + (int)240);
				}
			}
		}
	}
	HX_STACK_LINE(892)
	return (Float(hue) / Float((int)360));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorHue,return )

Float HXP_obj::getColorSaturation( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorSaturation",0x25478666,"com.haxepunk.HXP.getColorSaturation","com/haxepunk/HXP.hx",901,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(902)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(903)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(904)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(906)
	Float _g = ::Math_obj::max(s,v);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(906)
	Float _g1 = ::Math_obj::max(h,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(906)
	int max = ::Std_obj::_int(_g1);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(908)
	if (((max == (int)0))){
		HX_STACK_LINE(910)
		return (int)0;
	}
	else{
		HX_STACK_LINE(914)
		Float _g2 = ::Math_obj::min(s,v);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(914)
		Float _g3 = ::Math_obj::min(h,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(914)
		int min = ::Std_obj::_int(_g3);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(916)
		return (Float(((max - min))) / Float(max));
	}
	HX_STACK_LINE(908)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorSaturation,return )

Float HXP_obj::getColorValue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorValue",0xec97d55d,"com.haxepunk.HXP.getColorValue","com/haxepunk/HXP.hx",926,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(927)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(928)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(929)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(931)
	Float _g = ::Math_obj::max(s,v);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(931)
	Float _g1 = ::Math_obj::max(h,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(931)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(931)
	return (Float(_g2) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorValue,return )

int HXP_obj::getRed( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getRed",0x11ce6722,"com.haxepunk.HXP.getRed","com/haxepunk/HXP.hx",941,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(941)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getRed,return )

int HXP_obj::getGreen( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getGreen",0xa2c072d4,"com.haxepunk.HXP.getGreen","com/haxepunk/HXP.hx",951,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(951)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getGreen,return )

int HXP_obj::getBlue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getBlue",0x783dcba9,"com.haxepunk.HXP.getBlue","com/haxepunk/HXP.hx",961,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(961)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBlue,return )

::openfl::_v2::display::BitmapData HXP_obj::getBitmap( ::String name){
	HX_STACK_FRAME("com.haxepunk.HXP","getBitmap",0xa1303abe,"com.haxepunk.HXP.getBitmap","com/haxepunk/HXP.hx",971,0x4944a037)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(977)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(978)
		return ::com::haxepunk::HXP_obj::_bitmap->get(name);
	}
	HX_STACK_LINE(981)
	::openfl::_v2::display::BitmapData data = ::openfl::_v2::Assets_obj::getBitmapData(name,false);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(986)
	if (((data != null()))){
		HX_STACK_LINE(987)
		::com::haxepunk::HXP_obj::_bitmap->set(name,data);
	}
	HX_STACK_LINE(989)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBitmap,return )

Void HXP_obj::overwriteBitmapCache( ::String name,::openfl::_v2::display::BitmapData data){
{
		HX_STACK_FRAME("com.haxepunk.HXP","overwriteBitmapCache",0x2a3bfd8f,"com.haxepunk.HXP.overwriteBitmapCache","com/haxepunk/HXP.hx",998,0x4944a037)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(999)
		::com::haxepunk::HXP_obj::removeBitmap(name);
		HX_STACK_LINE(1000)
		::com::haxepunk::HXP_obj::_bitmap->set(name,data);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,overwriteBitmapCache,(void))

bool HXP_obj::removeBitmap( ::String name){
	HX_STACK_FRAME("com.haxepunk.HXP","removeBitmap",0x9b084f5a,"com.haxepunk.HXP.removeBitmap","com/haxepunk/HXP.hx",1009,0x4944a037)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1010)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(1012)
		::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::_bitmap->get(name);		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(1013)
		bitmap->dispose();
		HX_STACK_LINE(1014)
		bitmap = null();
		HX_STACK_LINE(1015)
		return ::com::haxepunk::HXP_obj::_bitmap->remove(name);
	}
	HX_STACK_LINE(1017)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,removeBitmap,return )

::openfl::_v2::display::BitmapData HXP_obj::createBitmap( int width,int height,Dynamic __o_transparent,Dynamic __o_color){
Dynamic transparent = __o_transparent.Default(false);
Dynamic color = __o_color.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","createBitmap",0x4e2ff412,"com.haxepunk.HXP.createBitmap","com/haxepunk/HXP.hx",1045,0x4944a037)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(1045)
		return ::openfl::_v2::display::BitmapData_obj::__new(width,height,transparent,color,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,createBitmap,return )

Float HXP_obj::timeFlag( ){
	HX_STACK_FRAME("com.haxepunk.HXP","timeFlag",0x8d1be2e0,"com.haxepunk.HXP.timeFlag","com/haxepunk/HXP.hx",1053,0x4944a037)
	HX_STACK_LINE(1054)
	Float t = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1055)
	Float e = (t - ::com::haxepunk::HXP_obj::_time);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(1056)
	::com::haxepunk::HXP_obj::_time = t;
	HX_STACK_LINE(1057)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,timeFlag,return )

::com::haxepunk::debug::Console HXP_obj::get_console( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_console",0x9a7c4547,"com.haxepunk.HXP.get_console","com/haxepunk/HXP.hx",1065,0x4944a037)
	HX_STACK_LINE(1066)
	if (((::com::haxepunk::HXP_obj::_console == null()))){
		HX_STACK_LINE(1066)
		::com::haxepunk::debug::Console _g = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1066)
		::com::haxepunk::HXP_obj::_console = _g;
	}
	HX_STACK_LINE(1067)
	return ::com::haxepunk::HXP_obj::_console;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_console,return )

bool HXP_obj::consoleEnabled( ){
	HX_STACK_FRAME("com.haxepunk.HXP","consoleEnabled",0x6cf95db1,"com.haxepunk.HXP.consoleEnabled","com/haxepunk/HXP.hx",1075,0x4944a037)
	HX_STACK_LINE(1075)
	return (::com::haxepunk::HXP_obj::_console != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,consoleEnabled,return )

Dynamic HXP_obj::log;

Dynamic HXP_obj::watch;

::com::haxepunk::tweens::misc::MultiVarTween HXP_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_FRAME("com.haxepunk.HXP","tween",0xe2d54b84,"com.haxepunk.HXP.tween","com/haxepunk/HXP.hx",1114,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(1114)
	Dynamic options1 = Dynamic( Array_obj<Dynamic>::__new().Add(options));		HX_STACK_VAR(options1,"options1");
	HX_STACK_LINE(1114)
	Array< Float > duration1 = Array_obj< Float >::__new().Add(duration);		HX_STACK_VAR(duration1,"duration1");
	HX_STACK_LINE(1114)
	Dynamic values1 = Dynamic( Array_obj<Dynamic>::__new().Add(values));		HX_STACK_VAR(values1,"values1");
	HX_STACK_LINE(1114)
	Dynamic object1 = Dynamic( Array_obj<Dynamic>::__new().Add(object));		HX_STACK_VAR(object1,"object1");
	HX_STACK_LINE(1116)
	if (((  (((options1->__GetItem((int)0) != null()))) ? bool(::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("delay"))) : bool(false) ))){
		HX_STACK_LINE(1118)
		Float delay = options1->__GetItem((int)0)->__Field(HX_CSTRING("delay"),true);		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(1119)
		::Reflect_obj::deleteField(options1->__GetItem((int)0),HX_CSTRING("delay"));

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,Dynamic,object1,Dynamic,options1,Array< Float >,duration1,Dynamic,values1)
		Void run(Dynamic o){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/haxepunk/HXP.hx",1120,0x4944a037)
			HX_STACK_ARG(o,"o")
			{
				HX_STACK_LINE(1120)
				::com::haxepunk::HXP_obj::tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),options1->__GetItem((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1120)
		::com::haxepunk::HXP_obj::alarm(delay, Dynamic(new _Function_2_1(object1,options1,duration1,values1)),null(),null());
		HX_STACK_LINE(1121)
		return null();
	}
	HX_STACK_LINE(1124)
	::com::haxepunk::TweenType type = ::com::haxepunk::TweenType_obj::OneShot;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(1125)
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	HX_STACK_LINE(1126)
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	HX_STACK_LINE(1127)
	::com::haxepunk::Tweener tweener = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(1128)
	if ((::Std_obj::is(object1->__GetItem((int)0),hx::ClassOf< ::com::haxepunk::Tweener >()))){
		HX_STACK_LINE(1128)
		::com::haxepunk::Tweener _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1128)
		_g = hx::TCast< com::haxepunk::Tweener >::cast(object1->__GetItem((int)0));
		HX_STACK_LINE(1128)
		tweener = _g;
	}
	HX_STACK_LINE(1129)
	if (((options1->__GetItem((int)0) != null()))){
		HX_STACK_LINE(1131)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("type")))){
			HX_STACK_LINE(1131)
			type = options1->__GetItem((int)0)->__Field(HX_CSTRING("type"),true);
		}
		HX_STACK_LINE(1132)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("complete")))){
			HX_STACK_LINE(1132)
			complete = options1->__GetItem((int)0)->__Field(HX_CSTRING("complete"),true);
		}
		HX_STACK_LINE(1133)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("ease")))){
			HX_STACK_LINE(1133)
			ease = options1->__GetItem((int)0)->__Field(HX_CSTRING("ease"),true);
		}
		HX_STACK_LINE(1134)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("tweener")))){
			HX_STACK_LINE(1134)
			tweener = options1->__GetItem((int)0)->__Field(HX_CSTRING("tweener"),true);
		}
	}
	HX_STACK_LINE(1136)
	::com::haxepunk::tweens::misc::MultiVarTween tween = ::com::haxepunk::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(1137)
	tween->tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),ease);
	HX_STACK_LINE(1138)
	tweener->addTween(tween,null());
	HX_STACK_LINE(1139)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,tween,return )

::com::haxepunk::tweens::misc::Alarm HXP_obj::alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener){
	HX_STACK_FRAME("com.haxepunk.HXP","alarm",0xeaefef6a,"com.haxepunk.HXP.alarm","com/haxepunk/HXP.hx",1153,0x4944a037)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(tweener,"tweener")
	HX_STACK_LINE(1154)
	if (((type == null()))){
		HX_STACK_LINE(1154)
		type = ::com::haxepunk::TweenType_obj::OneShot;
	}
	HX_STACK_LINE(1155)
	if (((tweener == null()))){
		HX_STACK_LINE(1155)
		tweener = ::com::haxepunk::HXP_obj::tweener;
	}
	HX_STACK_LINE(1157)
	::com::haxepunk::tweens::misc::Alarm alarm = ::com::haxepunk::tweens::misc::Alarm_obj::__new(delay,complete,type);		HX_STACK_VAR(alarm,"alarm");
	HX_STACK_LINE(1158)
	tweener->addTween(alarm,true);
	HX_STACK_LINE(1159)
	return alarm;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,alarm,return )

Array< int > HXP_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","frames",0x1b2e046d,"com.haxepunk.HXP.frames","com/haxepunk/HXP.hx",1171,0x4944a037)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(1172)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1173)
		(skip)++;
		HX_STACK_LINE(1174)
		if (((from < to))){
			HX_STACK_LINE(1176)
			while((true)){
				HX_STACK_LINE(1176)
				if ((!(((from <= to))))){
					HX_STACK_LINE(1176)
					break;
				}
				HX_STACK_LINE(1178)
				a->push(from);
				HX_STACK_LINE(1179)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(1184)
			while((true)){
				HX_STACK_LINE(1184)
				if ((!(((from >= to))))){
					HX_STACK_LINE(1184)
					break;
				}
				HX_STACK_LINE(1186)
				a->push(from);
				HX_STACK_LINE(1187)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(1190)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,frames,return )

Void HXP_obj::shuffle( Dynamic a){
{
		HX_STACK_FRAME("com.haxepunk.HXP","shuffle",0x497f1f52,"com.haxepunk.HXP.shuffle","com/haxepunk/HXP.hx",1198,0x4944a037)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(1199)
		int i = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1199)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1199)
		Dynamic t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1200)
		while((true)){
			HX_STACK_LINE(1200)
			int _g = --(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1200)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1202)
			t = a->__GetItem(i);
			HX_STACK_LINE(1203)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1203)
			{
				HX_STACK_LINE(1203)
				int _g1 = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1203)
				::com::haxepunk::HXP_obj::_seed = _g1;
				HX_STACK_LINE(1203)
				_g2 = ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647)) * ((i + (int)1))));
			}
			HX_STACK_LINE(1203)
			int _g3 = j = _g2;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1203)
			hx::IndexRef((a).mPtr,i) = a->__GetItem(_g3);
			HX_STACK_LINE(1204)
			hx::IndexRef((a).mPtr,j) = t;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,shuffle,(void))

Void HXP_obj::resizeStage( int width,int height){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resizeStage",0xbebae603,"com.haxepunk.HXP.resizeStage","com/haxepunk/HXP.hx",1215,0x4944a037)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1217)
		::com::haxepunk::HXP_obj::stage->resize(width,height);
		HX_STACK_LINE(1218)
		::com::haxepunk::HXP_obj::resize(width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resizeStage,(void))

Float HXP_obj::time;

Float HXP_obj::set_time( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_time",0x24113591,"com.haxepunk.HXP.set_time","com/haxepunk/HXP.hx",1225,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1226)
	::com::haxepunk::HXP_obj::_time = value;
	HX_STACK_LINE(1227)
	return ::com::haxepunk::HXP_obj::_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_time,return )

::com::haxepunk::debug::Console HXP_obj::_console;

Float HXP_obj::_time;

Float HXP_obj::_updateTime;

Float HXP_obj::_renderTime;

Float HXP_obj::_gameTime;

Float HXP_obj::_systemTime;

::haxe::ds::StringMap HXP_obj::_bitmap;

int HXP_obj::_seed;

Float HXP_obj::_volume;

Float HXP_obj::_pan;

::openfl::media::SoundTransform HXP_obj::_soundTransform;

Float HXP_obj::get_DEG( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_DEG",0x8b4a7796,"com.haxepunk.HXP.get_DEG","com/haxepunk/HXP.hx",1254,0x4944a037)
	HX_STACK_LINE(1254)
	return (Float((int)-180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_DEG,return )

Float HXP_obj::get_RAD( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_RAD",0x8b5513a5,"com.haxepunk.HXP.get_RAD","com/haxepunk/HXP.hx",1257,0x4944a037)
	HX_STACK_LINE(1257)
	return (Float(::Math_obj::PI) / Float((int)-180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_RAD,return )

::openfl::_v2::display::Stage HXP_obj::stage;

::com::haxepunk::Engine HXP_obj::engine;

::openfl::_v2::geom::Point HXP_obj::point;

::openfl::_v2::geom::Point HXP_obj::point2;

::openfl::_v2::geom::Point HXP_obj::zero;

::openfl::_v2::geom::Rectangle HXP_obj::rect;

::openfl::_v2::geom::Matrix HXP_obj::matrix;

::openfl::_v2::display::Sprite HXP_obj::sprite;

::com::haxepunk::Entity HXP_obj::entity;


HXP_obj::HXP_obj()
{
}

Dynamic HXP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"DEG") ) { return get_DEG(); }
		if (HX_FIELD_EQ(inName,"RAD") ) { return get_RAD(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"alarm") ) { return alarm_dyn(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_seed") ) { return _seed; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"choose") ) { return choose; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"random") ) { return inCallProp ? get_random() : random; }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames_dyn(); }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"focused") ) { return focused; }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"angleXY") ) { return angleXY_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"console") ) { return get_console(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"get_DEG") ) { return get_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RAD") ) { return get_RAD_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { return anchorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return timeFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return halfWidth; }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"set_world") ) { return set_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { return colorLerp_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return halfHeight; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { return renderMode; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { return scaleClamp_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return randomSeed; }
		if (HX_FIELD_EQ(inName,"get_random") ) { return get_random_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { return resetCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { return stepTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { return clampInRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { return getColorRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHSV") ) { return getColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHue") ) { return getColorHue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_console") ) { return get_console_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeStage") ) { return resizeStage_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
		if (HX_FIELD_EQ(inName,"orientations") ) { return orientations; }
		if (HX_FIELD_EQ(inName,"rotateAround") ) { return rotateAround_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBitmap") ) { return removeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return createBitmap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { return distanceRects_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { return randomizeSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorValue") ) { return getColorValue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_renderMode") ) { return set_renderMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_randomSeed") ) { return set_randomSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"consoleEnabled") ) { return consoleEnabled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleDifference") ) { return angleDifference_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"insertSortedKey") ) { return insertSortedKey_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { return assignedFrameRate; }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { return distanceRectPoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorSaturation") ) { return getColorSaturation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE_dyn(); }
		if (HX_FIELD_EQ(inName,"overwriteBitmapCache") ) { return overwriteBitmapCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HXP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp) return set_time(inValue);time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { return set_world(inValue); }
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_seed") ) { _seed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::_v2::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::com::haxepunk::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"choose") ) { choose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::haxepunk::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::com::haxepunk::debug::Console >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { if (inCallProp) return set_renderMode(inValue);renderMode=inValue.Cast< ::com::haxepunk::RenderMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { if (inCallProp) return set_randomSeed(inValue);randomSeed=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientations") ) { orientations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { assignedFrameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HXP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION"),
	HX_CSTRING("get_NUMBER_MAX_VALUE"),
	HX_CSTRING("INT_MIN_VALUE"),
	HX_CSTRING("INT_MAX_VALUE"),
	HX_CSTRING("blackColor"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("windowWidth"),
	HX_CSTRING("windowHeight"),
	HX_CSTRING("fixed"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("assignedFrameRate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("rate"),
	HX_CSTRING("screen"),
	HX_CSTRING("buffer"),
	HX_CSTRING("bounds"),
	HX_CSTRING("defaultFont"),
	HX_CSTRING("camera"),
	HX_CSTRING("tweener"),
	HX_CSTRING("focused"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("orientations"),
	HX_CSTRING("renderMode"),
	HX_CSTRING("set_renderMode"),
	HX_CSTRING("choose"),
	HX_CSTRING("get_world"),
	HX_CSTRING("set_world"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("resize"),
	HX_CSTRING("clear"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("resetCamera"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("sign"),
	HX_CSTRING("approach"),
	HX_CSTRING("lerp"),
	HX_CSTRING("colorLerp"),
	HX_CSTRING("stepTowards"),
	HX_CSTRING("anchorTo"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleXY"),
	HX_CSTRING("angleDifference"),
	HX_CSTRING("rotateAround"),
	HX_CSTRING("round"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("distanceRects"),
	HX_CSTRING("distanceRectPoint"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampInRect"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleClamp"),
	HX_CSTRING("randomSeed"),
	HX_CSTRING("set_randomSeed"),
	HX_CSTRING("randomizeSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("get_random"),
	HX_CSTRING("rand"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("swap"),
	HX_CSTRING("insertSortedKey"),
	HX_CSTRING("getColorRGB"),
	HX_CSTRING("getColorHSV"),
	HX_CSTRING("getColorHue"),
	HX_CSTRING("getColorSaturation"),
	HX_CSTRING("getColorValue"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("overwriteBitmapCache"),
	HX_CSTRING("removeBitmap"),
	HX_CSTRING("createBitmap"),
	HX_CSTRING("timeFlag"),
	HX_CSTRING("get_console"),
	HX_CSTRING("consoleEnabled"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("tween"),
	HX_CSTRING("alarm"),
	HX_CSTRING("frames"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("resizeStage"),
	HX_CSTRING("time"),
	HX_CSTRING("set_time"),
	HX_CSTRING("_console"),
	HX_CSTRING("_time"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_systemTime"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_seed"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("get_DEG"),
	HX_CSTRING("get_RAD"),
	HX_CSTRING("stage"),
	HX_CSTRING("engine"),
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	HX_CSTRING("zero"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("sprite"),
	HX_CSTRING("entity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(HXP_obj::INT_MIN_VALUE,"INT_MIN_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_MARK_MEMBER_NAME(HXP_obj::width,"width");
	HX_MARK_MEMBER_NAME(HXP_obj::height,"height");
	HX_MARK_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_MARK_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_MARK_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_MARK_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_MARK_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_MARK_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_MARK_MEMBER_NAME(HXP_obj::random,"random");
	HX_MARK_MEMBER_NAME(HXP_obj::log,"log");
	HX_MARK_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(HXP_obj::time,"time");
	HX_MARK_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_MARK_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_MARK_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(HXP_obj::point,"point");
	HX_MARK_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(HXP_obj::entity,"entity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(HXP_obj::INT_MIN_VALUE,"INT_MIN_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_VISIT_MEMBER_NAME(HXP_obj::width,"width");
	HX_VISIT_MEMBER_NAME(HXP_obj::height,"height");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_VISIT_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_VISIT_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_VISIT_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_VISIT_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_VISIT_MEMBER_NAME(HXP_obj::random,"random");
	HX_VISIT_MEMBER_NAME(HXP_obj::log,"log");
	HX_VISIT_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(HXP_obj::time,"time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_VISIT_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_VISIT_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(HXP_obj::point,"point");
	HX_VISIT_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(HXP_obj::entity,"entity");
};

#endif

Class HXP_obj::__mClass;

void HXP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.HXP"), hx::TCanCast< HXP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void HXP_obj::__boot()
{
	VERSION= HX_CSTRING("2.5.3");
	INT_MIN_VALUE= (int)-2147483648;
	INT_MAX_VALUE= (int)2147483647;
	blackColor= (int)0;
	frameRate= (int)0;
	rate= (int)1;
	defaultFont= HX_CSTRING("font/04B_03__.ttf");
	camera= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	tweener= ::com::haxepunk::Tweener_obj::__new();
	focused= false;
	orientations= Array_obj< int >::__new();

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
Dynamic run(Dynamic objs){
	HX_STACK_FRAME("*","_Function_0_1",0x52002af6,"*._Function_0_1","com/haxepunk/HXP.hx",204,0x4944a037)
	HX_STACK_ARG(objs,"objs")
	{
		HX_STACK_LINE(205)
		if (((bool((objs == null())) || bool((objs->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(207)
			HX_STACK_DO_THROW(HX_CSTRING("Can't choose a random element on an empty array"));
		}
		HX_STACK_LINE(210)
		if ((::Std_obj::is(objs->__GetItem((int)0),hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(212)
			Dynamic c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(212)
			c = hx::TCastToArray(objs->__GetItem((int)0));
			HX_STACK_LINE(214)
			if (((c->__Field(HX_CSTRING("length"),true) != (int)0))){
				struct _Function_3_1{
					inline static int Block( Dynamic &c){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/HXP.hx",216,0x4944a037)
						{
							HX_STACK_LINE(216)
							::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));
							HX_STACK_LINE(216)
							return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647)) * c->__Field(HX_CSTRING("length"),true)));
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				return c->__GetItem(_Function_3_1::Block(c));
			}
			else{
				HX_STACK_LINE(220)
				HX_STACK_DO_THROW(HX_CSTRING("Can't choose a random element on an empty array"));
			}
		}
		else{
			struct _Function_2_1{
				inline static int Block( Dynamic &objs){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/HXP.hx",225,0x4944a037)
					{
						HX_STACK_LINE(225)
						::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));
						HX_STACK_LINE(225)
						return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647)) * objs->__Field(HX_CSTRING("length"),true)));
					}
					return null();
				}
			};
			HX_STACK_LINE(225)
			return objs->__GetItem(_Function_2_1::Block(objs));
		}
		HX_STACK_LINE(210)
		return null();
	}
	return null();
}
HX_END_LOCAL_FUNC1(return)

	choose= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_1()));
	randomSeed= (int)0;

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
Void run(Dynamic data){
	HX_STACK_FRAME("*","_Function_0_2",0x52002af7,"*._Function_0_2","com/haxepunk/HXP.hx",1083,0x4944a037)
	HX_STACK_ARG(data,"data")
	{
		HX_STACK_LINE(1083)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(1085)
			::com::haxepunk::HXP_obj::_console->log(data);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	log= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_2()));

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_3)
Void run(Dynamic properties){
	HX_STACK_FRAME("*","_Function_0_3",0x52002af8,"*._Function_0_3","com/haxepunk/HXP.hx",1094,0x4944a037)
	HX_STACK_ARG(properties,"properties")
	{
		HX_STACK_LINE(1094)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(1096)
			::com::haxepunk::HXP_obj::_console->watch(properties);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	watch= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_3()));
	_bitmap= ::haxe::ds::StringMap_obj::__new();
	_seed= (int)0;
	_volume= (int)1;
	_pan= (int)0;
	_soundTransform= ::openfl::media::SoundTransform_obj::__new(null(),null());
	point= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	point2= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	zero= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	rect= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::openfl::_v2::display::Sprite_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
