#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Gesture
#include <com/haxepunk/utils/Gesture.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureMode
#include <com/haxepunk/utils/GestureMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureType
#include <com/haxepunk/utils/GestureType.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Gesture_obj::__construct()
{
	return null();
}

//Gesture_obj::~Gesture_obj() { }

Dynamic Gesture_obj::__CreateEmpty() { return  new Gesture_obj; }
hx::ObjectPtr< Gesture_obj > Gesture_obj::__new()
{  hx::ObjectPtr< Gesture_obj > result = new Gesture_obj();
	result->__construct();
	return result;}

Dynamic Gesture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gesture_obj > result = new Gesture_obj();
	result->__construct();
	return result;}

int Gesture_obj::TAP;

int Gesture_obj::DOUBLE_TAP;

int Gesture_obj::LONG_PRESS;

int Gesture_obj::MOVE;

int Gesture_obj::PINCH;

int Gesture_obj::TWO_FINGER_TAP;

Float Gesture_obj::longPressTime;

Float Gesture_obj::doubleTapTime;

Float Gesture_obj::deadZone;

bool Gesture_obj::enabled;

::com::haxepunk::utils::GestureMode Gesture_obj::mode;

::haxe::ds::IntMap Gesture_obj::gestures;

Void Gesture_obj::enable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","enable",0x0d244a1e,"com.haxepunk.utils.Gesture.enable","com/haxepunk/utils/Gesture.hx",132,0xc908f04c)
		HX_STACK_LINE(133)
		::com::haxepunk::utils::Gesture_obj::enabled = true;
		HX_STACK_LINE(134)
		::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,enable,(void))

Void Gesture_obj::disable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","disable",0xa5c3f5ed,"com.haxepunk.utils.Gesture.disable","com/haxepunk/utils/Gesture.hx",142,0xc908f04c)
		HX_STACK_LINE(142)
		::com::haxepunk::utils::Gesture_obj::enabled = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,disable,(void))

::com::haxepunk::utils::Touch Gesture_obj::getTouch( ::haxe::ds::IntMap touches,Array< int > touchOrder,int n){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","getTouch",0x5db91fa4,"com.haxepunk.utils.Gesture.getTouch","com/haxepunk/utils/Gesture.hx",146,0xc908f04c)
	HX_STACK_ARG(touches,"touches")
	HX_STACK_ARG(touchOrder,"touchOrder")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(147)
	if (((n >= touchOrder->length))){
		HX_STACK_LINE(147)
		return null();
	}
	HX_STACK_LINE(148)
	return touches->get(touchOrder->__get(n));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gesture_obj,getTouch,return )

bool Gesture_obj::check( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","check",0x7ce8a98d,"com.haxepunk.utils.Gesture.check","com/haxepunk/utils/Gesture.hx",155,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(156)
	if ((!(::com::haxepunk::utils::Gesture_obj::gestures->exists(gestureType)))){
		HX_STACK_LINE(156)
		return false;
	}
	HX_STACK_LINE(157)
	return ::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("active"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,check,return )

bool Gesture_obj::pressed( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","pressed",0x2e525ea7,"com.haxepunk.utils.Gesture.pressed","com/haxepunk/utils/Gesture.hx",164,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(165)
	if ((!(::com::haxepunk::utils::Gesture_obj::gestures->exists(gestureType)))){
		HX_STACK_LINE(165)
		return false;
	}
	HX_STACK_LINE(166)
	return ::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("pressed"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,pressed,return )

bool Gesture_obj::released( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","released",0x60968118,"com.haxepunk.utils.Gesture.released","com/haxepunk/utils/Gesture.hx",173,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(174)
	if ((!(::com::haxepunk::utils::Gesture_obj::gestures->exists(gestureType)))){
		HX_STACK_LINE(174)
		return false;
	}
	HX_STACK_LINE(175)
	return ::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("released"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,released,return )

::com::haxepunk::utils::GestureType Gesture_obj::get( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","get",0x0518661b,"com.haxepunk.utils.Gesture.get","com/haxepunk/utils/Gesture.hx",182,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(183)
	if ((!(::com::haxepunk::utils::Gesture_obj::check(gestureType)))){
		HX_STACK_LINE(183)
		return null();
	}
	HX_STACK_LINE(184)
	return ::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,get,return )

Void Gesture_obj::start( int gestureType,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","start",0xbb3d8527,"com.haxepunk.utils.Gesture.start","com/haxepunk/utils/Gesture.hx",191,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(192)
		if ((!(::com::haxepunk::utils::Gesture_obj::gestures->exists(gestureType)))){
			HX_STACK_LINE(194)
			::com::haxepunk::utils::GestureType v = ::com::haxepunk::utils::GestureType_obj::__new();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(194)
			::com::haxepunk::utils::Gesture_obj::gestures->set(gestureType,v);
			HX_STACK_LINE(194)
			v;
		}
		HX_STACK_LINE(196)
		if ((!(::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("active"),true)))){
			HX_STACK_LINE(198)
			::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("start"),true)(x,y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gesture_obj,start,(void))

Void Gesture_obj::finish( int gestureType){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","finish",0x9b1bdbee,"com.haxepunk.utils.Gesture.finish","com/haxepunk/utils/Gesture.hx",206,0xc908f04c)
		HX_STACK_ARG(gestureType,"gestureType")
		HX_STACK_LINE(207)
		if ((!(::com::haxepunk::utils::Gesture_obj::gestures->exists(gestureType)))){
			HX_STACK_LINE(209)
			::com::haxepunk::utils::GestureType v = ::com::haxepunk::utils::GestureType_obj::__new();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(209)
			::com::haxepunk::utils::Gesture_obj::gestures->set(gestureType,v);
			HX_STACK_LINE(209)
			v;
		}
		HX_STACK_LINE(211)
		::com::haxepunk::utils::Gesture_obj::gestures->get(gestureType)->__Field(HX_CSTRING("release"),true)();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,finish,(void))

Void Gesture_obj::finishAll( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","finishAll",0x67017dd3,"com.haxepunk.utils.Gesture.finishAll","com/haxepunk/utils/Gesture.hx",216,0xc908f04c)
		HX_STACK_LINE(216)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::GestureType > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::GestureType >(::com::haxepunk::utils::Gesture_obj::gestures->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::GestureType gesture = __it->next();
			if ((gesture->active)){
				HX_STACK_LINE(220)
				gesture->release();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,finishAll,(void))

Void Gesture_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","update",0x9ba221a4,"com.haxepunk.utils.Gesture.update","com/haxepunk/utils/Gesture.hx",229,0xc908f04c)
		HX_STACK_LINE(230)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::GestureType > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::GestureType >(::com::haxepunk::utils::Gesture_obj::gestures->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::GestureType gesture = __it->next();
			gesture->update();
		}
		HX_STACK_LINE(235)
		::haxe::ds::IntMap touches = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(touches,"touches");
		HX_STACK_LINE(236)
		Array< int > touchOrder = ::com::haxepunk::utils::Input_obj::_touchOrder;		HX_STACK_VAR(touchOrder,"touchOrder");
		HX_STACK_LINE(237)
		int touchCount = (int)0;		HX_STACK_VAR(touchCount,"touchCount");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				if ((!(((_g < touchOrder->length))))){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				int touch = touchOrder->__get(_g);		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(240)
				if ((touches->exists(touch))){
					struct _Function_4_1{
						inline static bool Block( ::haxe::ds::IntMap &touches,int &touch){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Gesture.hx",242,0xc908f04c)
							{
								HX_STACK_LINE(242)
								::com::haxepunk::utils::Touch _this = touches->get(touch);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(242)
								return (_this->time == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(242)
					if (((  ((!(_Function_4_1::Block(touches,touch)))) ? bool(!(touches->get(touch)->__Field(HX_CSTRING("released"),true))) : bool(true) ))){
						HX_STACK_LINE(242)
						hx::AddEq(touchCount,(int)1);
					}
				}
				else{
					HX_STACK_LINE(246)
					touchOrder->remove(touch);
				}
			}
		}
		HX_STACK_LINE(250)
		if (((::com::haxepunk::utils::Gesture_obj::_lastTap > (int)0))){
			HX_STACK_LINE(250)
			Float _g = ::Math_obj::max((int)0,(::com::haxepunk::utils::Gesture_obj::_lastTap - (Float(::com::haxepunk::HXP_obj::elapsed) / Float(::com::haxepunk::utils::Gesture_obj::doubleTapTime))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			::com::haxepunk::utils::Gesture_obj::_lastTap = _g;
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::com::haxepunk::utils::GestureMode _g = ::com::haxepunk::utils::Gesture_obj::mode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(256)
					if (((touchCount > (int)0))){
						HX_STACK_LINE(259)
						if (((touchCount == (int)1))){
							HX_STACK_LINE(259)
							::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::SINGLE_TOUCH;
						}
						else{
							HX_STACK_LINE(259)
							::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::MULTI_TOUCH;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(264)
					if (((touchCount == (int)0))){
						HX_STACK_LINE(268)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
						HX_STACK_LINE(269)
						::com::haxepunk::utils::Touch touch;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(269)
						if ((((int)0 >= touchOrder->length))){
							HX_STACK_LINE(269)
							touch = null();
						}
						else{
							HX_STACK_LINE(269)
							touch = touches->get(touchOrder->__get((int)0));
						}
						HX_STACK_LINE(270)
						int t;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(270)
						if (((touch->time < ::com::haxepunk::utils::Gesture_obj::longPressTime))){
							HX_STACK_LINE(270)
							t = (int)1;
						}
						else{
							HX_STACK_LINE(270)
							t = (int)3;
						}
						HX_STACK_LINE(272)
						if (((bool((t == (int)1)) && bool((::com::haxepunk::utils::Gesture_obj::_lastTap > (int)0))))){
							HX_STACK_LINE(272)
							t = (int)2;
						}
						HX_STACK_LINE(274)
						if ((!(::com::haxepunk::utils::Gesture_obj::check(t)))){
							HX_STACK_LINE(276)
							::com::haxepunk::utils::Gesture_obj::start(t,touch->x,touch->y);
							HX_STACK_LINE(277)
							if (((t == (int)1))){
								HX_STACK_LINE(277)
								::com::haxepunk::utils::Gesture_obj::_lastTap = (int)1;
							}
						}
					}
					else{
						HX_STACK_LINE(280)
						if (((touchCount == (int)1))){
							HX_STACK_LINE(282)
							::com::haxepunk::utils::Touch touch;		HX_STACK_VAR(touch,"touch");
							HX_STACK_LINE(282)
							if ((((int)0 >= touchOrder->length))){
								HX_STACK_LINE(282)
								touch = null();
							}
							else{
								HX_STACK_LINE(282)
								touch = touches->get(touchOrder->__get((int)0));
							}
							HX_STACK_LINE(283)
							Float dist;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								Float x1 = touch->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(283)
								Float y1 = touch->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(283)
								Float x2 = touch->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(283)
								Float y2 = touch->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(283)
								dist = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
							}
							HX_STACK_LINE(284)
							if (((dist > ::com::haxepunk::utils::Gesture_obj::deadZone))){
								HX_STACK_LINE(286)
								::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::SINGLE_MOVE;
							}
							else{
								HX_STACK_LINE(288)
								if (((  (((touch->time >= ::com::haxepunk::utils::Gesture_obj::longPressTime))) ? bool(!(::com::haxepunk::utils::Gesture_obj::check((int)3))) : bool(false) ))){
									HX_STACK_LINE(290)
									::com::haxepunk::utils::Gesture_obj::start((int)3,touch->x,touch->y);
								}
							}
						}
						else{
							HX_STACK_LINE(293)
							if (((touchCount > (int)1))){
								HX_STACK_LINE(295)
								::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::MULTI_TOUCH;
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(300)
					if (((touchCount == (int)0))){
						HX_STACK_LINE(302)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
					}
					else{
						HX_STACK_LINE(306)
						::com::haxepunk::utils::Touch touch;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(306)
						if ((((int)0 >= touchOrder->length))){
							HX_STACK_LINE(306)
							touch = null();
						}
						else{
							HX_STACK_LINE(306)
							touch = touches->get(touchOrder->__get((int)0));
						}
						HX_STACK_LINE(307)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(307)
							Float x1 = touch->startX;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(307)
							Float y1 = touch->startY;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(307)
							Float x2 = touch->x;		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(307)
							Float y2 = touch->y;		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(307)
							dist = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
						}
						HX_STACK_LINE(308)
						if ((!(::com::haxepunk::utils::Gesture_obj::check((int)4)))){
							HX_STACK_LINE(310)
							::com::haxepunk::utils::Gesture_obj::start((int)4,touch->startX,touch->startY);
						}
						HX_STACK_LINE(312)
						::com::haxepunk::utils::GestureType g = ::com::haxepunk::utils::Gesture_obj::get((int)4);		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(313)
						g->x2 = touch->x;
						HX_STACK_LINE(314)
						g->y2 = touch->y;
						HX_STACK_LINE(315)
						g->magnitude = dist;
					}
					HX_STACK_LINE(317)
					if (((touchCount > (int)1))){
						HX_STACK_LINE(319)
						::com::haxepunk::utils::Touch touch;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(319)
						if ((((int)1 >= touchOrder->length))){
							HX_STACK_LINE(319)
							touch = null();
						}
						else{
							HX_STACK_LINE(319)
							touch = touches->get(touchOrder->__get((int)1));
						}
						HX_STACK_LINE(320)
						::com::haxepunk::utils::Gesture_obj::start((int)6,touch->x,touch->y);
					}
					else{
						HX_STACK_LINE(322)
						if ((::com::haxepunk::utils::Gesture_obj::check((int)6))){
							HX_STACK_LINE(324)
							::com::haxepunk::utils::Gesture_obj::finish((int)6);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(329)
					if (((touchCount < (int)2))){
						HX_STACK_LINE(331)
						if (((touchCount == (int)0))){
							HX_STACK_LINE(331)
							::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
						}
						else{
							HX_STACK_LINE(331)
							::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::FINISHED;
						}
						HX_STACK_LINE(332)
						if ((!(::com::haxepunk::utils::Gesture_obj::check((int)5)))){
							HX_STACK_LINE(334)
							::com::haxepunk::utils::Touch t1;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(334)
							if ((((int)0 >= touchOrder->length))){
								HX_STACK_LINE(334)
								t1 = null();
							}
							else{
								HX_STACK_LINE(334)
								t1 = touches->get(touchOrder->__get((int)0));
							}
							HX_STACK_LINE(335)
							::com::haxepunk::utils::Touch t2;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(335)
							if ((((int)1 >= touchOrder->length))){
								HX_STACK_LINE(335)
								t2 = null();
							}
							else{
								HX_STACK_LINE(335)
								t2 = touches->get(touchOrder->__get((int)1));
							}
							HX_STACK_LINE(336)
							if (((t2 != null()))){
								HX_STACK_LINE(338)
								Float mx = (Float(((t1->startX - t2->startX))) / Float((int)2));		HX_STACK_VAR(mx,"mx");
								HX_STACK_LINE(339)
								Float my = (Float(((t1->startY - t2->startY))) / Float((int)2));		HX_STACK_VAR(my,"my");
								HX_STACK_LINE(340)
								::com::haxepunk::utils::Gesture_obj::start((int)6,mx,my);
							}
						}
						HX_STACK_LINE(343)
						::com::haxepunk::utils::Gesture_obj::finishAll();
					}
					else{
						HX_STACK_LINE(347)
						::com::haxepunk::utils::Touch t1;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(347)
						if ((((int)0 >= touchOrder->length))){
							HX_STACK_LINE(347)
							t1 = null();
						}
						else{
							HX_STACK_LINE(347)
							t1 = touches->get(touchOrder->__get((int)0));
						}
						HX_STACK_LINE(348)
						::com::haxepunk::utils::Touch t2;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(348)
						if ((((int)1 >= touchOrder->length))){
							HX_STACK_LINE(348)
							t2 = null();
						}
						else{
							HX_STACK_LINE(348)
							t2 = touches->get(touchOrder->__get((int)1));
						}
						HX_STACK_LINE(349)
						if (((bool((t1 != null())) && bool((t2 != null()))))){
							HX_STACK_LINE(351)
							Float d1;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(351)
							{
								HX_STACK_LINE(351)
								Float x1 = t1->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(351)
								Float y1 = t1->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(351)
								Float x2 = t1->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(351)
								Float y2 = t1->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(351)
								d1 = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
							}
							HX_STACK_LINE(352)
							Float d2;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(352)
							{
								HX_STACK_LINE(352)
								Float x1 = t2->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(352)
								Float y1 = t2->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(352)
								Float x2 = t2->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(352)
								Float y2 = t2->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(352)
								d2 = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
							}
							HX_STACK_LINE(353)
							if (((bool((d1 > ::com::haxepunk::utils::Gesture_obj::deadZone)) && bool((d2 > ::com::haxepunk::utils::Gesture_obj::deadZone))))){
								HX_STACK_LINE(355)
								if ((!(::com::haxepunk::utils::Gesture_obj::check((int)5)))){
									HX_STACK_LINE(357)
									Float mx = (Float(((t1->startX - t2->startX))) / Float((int)2));		HX_STACK_VAR(mx,"mx");
									HX_STACK_LINE(358)
									Float my = (Float(((t1->startY - t2->startY))) / Float((int)2));		HX_STACK_VAR(my,"my");
									HX_STACK_LINE(359)
									::com::haxepunk::utils::Gesture_obj::start((int)5,mx,my);
								}
								HX_STACK_LINE(361)
								Float inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(361)
								{
									HX_STACK_LINE(361)
									Float x1 = t1->startX;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(361)
									Float y1 = t1->startY;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(361)
									Float x2 = t2->startX;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(361)
									Float y2 = t2->startY;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(361)
									inner = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
								}
								HX_STACK_LINE(362)
								Float outer;		HX_STACK_VAR(outer,"outer");
								HX_STACK_LINE(362)
								{
									HX_STACK_LINE(362)
									Float x1 = t1->x;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(362)
									Float y1 = t1->y;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(362)
									Float x2 = t2->x;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(362)
									Float y2 = t2->y;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(362)
									outer = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
								}
								HX_STACK_LINE(363)
								::com::haxepunk::utils::Gesture_obj::get((int)5)->magnitude = (Float(inner) / Float(outer));
							}
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(370)
					if (((touchCount == (int)0))){
						HX_STACK_LINE(372)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
					}
				}
			}
		}
		HX_STACK_LINE(377)
		if (((touchCount == (int)0))){
			HX_STACK_LINE(377)
			::com::haxepunk::utils::Gesture_obj::finishAll();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,update,(void))

Float Gesture_obj::_lastTap;


Gesture_obj::Gesture_obj()
{
}

Dynamic Gesture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"gestures") ) { return gestures; }
		if (HX_FIELD_EQ(inName,"getTouch") ) { return getTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastTap") ) { return _lastTap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"finishAll") ) { return finishAll_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"longPressTime") ) { return longPressTime; }
		if (HX_FIELD_EQ(inName,"doubleTapTime") ) { return doubleTapTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gesture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::com::haxepunk::utils::GestureMode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gestures") ) { gestures=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastTap") ) { _lastTap=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"longPressTime") ) { longPressTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doubleTapTime") ) { doubleTapTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gesture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TAP"),
	HX_CSTRING("DOUBLE_TAP"),
	HX_CSTRING("LONG_PRESS"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("PINCH"),
	HX_CSTRING("TWO_FINGER_TAP"),
	HX_CSTRING("longPressTime"),
	HX_CSTRING("doubleTapTime"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("enabled"),
	HX_CSTRING("mode"),
	HX_CSTRING("gestures"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("getTouch"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("get"),
	HX_CSTRING("start"),
	HX_CSTRING("finish"),
	HX_CSTRING("finishAll"),
	HX_CSTRING("update"),
	HX_CSTRING("_lastTap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gesture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gesture_obj::TAP,"TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::DOUBLE_TAP,"DOUBLE_TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::LONG_PRESS,"LONG_PRESS");
	HX_MARK_MEMBER_NAME(Gesture_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(Gesture_obj::PINCH,"PINCH");
	HX_MARK_MEMBER_NAME(Gesture_obj::TWO_FINGER_TAP,"TWO_FINGER_TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::longPressTime,"longPressTime");
	HX_MARK_MEMBER_NAME(Gesture_obj::doubleTapTime,"doubleTapTime");
	HX_MARK_MEMBER_NAME(Gesture_obj::deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(Gesture_obj::enabled,"enabled");
	HX_MARK_MEMBER_NAME(Gesture_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Gesture_obj::gestures,"gestures");
	HX_MARK_MEMBER_NAME(Gesture_obj::_lastTap,"_lastTap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gesture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gesture_obj::TAP,"TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::DOUBLE_TAP,"DOUBLE_TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::LONG_PRESS,"LONG_PRESS");
	HX_VISIT_MEMBER_NAME(Gesture_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(Gesture_obj::PINCH,"PINCH");
	HX_VISIT_MEMBER_NAME(Gesture_obj::TWO_FINGER_TAP,"TWO_FINGER_TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::longPressTime,"longPressTime");
	HX_VISIT_MEMBER_NAME(Gesture_obj::doubleTapTime,"doubleTapTime");
	HX_VISIT_MEMBER_NAME(Gesture_obj::deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(Gesture_obj::enabled,"enabled");
	HX_VISIT_MEMBER_NAME(Gesture_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Gesture_obj::gestures,"gestures");
	HX_VISIT_MEMBER_NAME(Gesture_obj::_lastTap,"_lastTap");
};

#endif

Class Gesture_obj::__mClass;

void Gesture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Gesture"), hx::TCanCast< Gesture_obj> ,sStaticFields,sMemberFields,
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

void Gesture_obj::__boot()
{
	TAP= (int)1;
	DOUBLE_TAP= (int)2;
	LONG_PRESS= (int)3;
	MOVE= (int)4;
	PINCH= (int)5;
	TWO_FINGER_TAP= (int)6;
	longPressTime= 0.5;
	doubleTapTime= 0.5;
	deadZone= (int)5;
	enabled= false;
	gestures= ::haxe::ds::IntMap_obj::__new();
	_lastTap= (int)0;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
