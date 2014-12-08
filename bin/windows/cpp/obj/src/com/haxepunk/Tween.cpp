#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
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
#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#include <com/haxepunk/tweens/TweenEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{

Void Tween_obj::__construct(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease)
{
HX_STACK_FRAME("com.haxepunk.Tween","new",0x75846584,"com.haxepunk.Tween.new","com/haxepunk/Tween.hx",52,0x67950e4c)
HX_STACK_THIS(this)
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(complete,"complete")
HX_STACK_ARG(ease,"ease")
{
	HX_STACK_LINE(53)
	this->_target = duration;
	HX_STACK_LINE(54)
	if (((type == null()))){
		HX_STACK_LINE(54)
		type = ::com::haxepunk::TweenType_obj::Persist;
	}
	HX_STACK_LINE(55)
	this->_type = type;
	HX_STACK_LINE(56)
	this->_ease = ease;
	HX_STACK_LINE(57)
	this->_t = (int)0;
	HX_STACK_LINE(58)
	this->_callback = complete;
	HX_STACK_LINE(59)
	super::__construct(null());
	HX_STACK_LINE(61)
	if (((this->_callback_dyn() != null()))){
		HX_STACK_LINE(63)
		this->addEventListener(::com::haxepunk::tweens::TweenEvent_obj::FINISH,this->_callback_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//Tween_obj::~Tween_obj() { }

Dynamic Tween_obj::__CreateEmpty() { return  new Tween_obj; }
hx::ObjectPtr< Tween_obj > Tween_obj::__new(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease)
{  hx::ObjectPtr< Tween_obj > result = new Tween_obj();
	result->__construct(duration,type,complete,ease);
	return result;}

Dynamic Tween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tween_obj > result = new Tween_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Tween_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","update",0x046bbf65,"com.haxepunk.Tween.update","com/haxepunk/Tween.hx",72,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if ((::com::haxepunk::HXP_obj::fixed)){
			HX_STACK_LINE(73)
			hx::AddEq(this->_time,(int)1);
		}
		else{
			HX_STACK_LINE(73)
			hx::AddEq(this->_time,::com::haxepunk::HXP_obj::elapsed);
		}
		HX_STACK_LINE(74)
		this->_t = (Float(this->_time) / Float(this->_target));
		HX_STACK_LINE(75)
		if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
			HX_STACK_LINE(75)
			Float _g = this->_ease(this->_t);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			this->_t = _g;
		}
		HX_STACK_LINE(76)
		if (((this->_time >= this->_target))){
			HX_STACK_LINE(78)
			this->_t = (int)1;
			HX_STACK_LINE(79)
			this->_finish = true;
		}
		HX_STACK_LINE(81)
		::com::haxepunk::tweens::TweenEvent _g1 = ::com::haxepunk::tweens::TweenEvent_obj::__new(::com::haxepunk::tweens::TweenEvent_obj::UPDATE,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,update,(void))

Void Tween_obj::start( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","start",0x16669a86,"com.haxepunk.Tween.start","com/haxepunk/Tween.hx",88,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		this->_time = (int)0;
		HX_STACK_LINE(90)
		if (((this->_target == (int)0))){
			HX_STACK_LINE(92)
			this->active = false;
			HX_STACK_LINE(93)
			::com::haxepunk::tweens::TweenEvent _g = ::com::haxepunk::tweens::TweenEvent_obj::__new(::com::haxepunk::tweens::TweenEvent_obj::FINISH,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			this->dispatchEvent(_g);
		}
		else{
			HX_STACK_LINE(97)
			this->active = true;
			HX_STACK_LINE(98)
			::com::haxepunk::tweens::TweenEvent _g1 = ::com::haxepunk::tweens::TweenEvent_obj::__new(::com::haxepunk::tweens::TweenEvent_obj::START,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			this->dispatchEvent(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,start,(void))

Void Tween_obj::finish( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","finish",0x03e579af,"com.haxepunk.Tween.finish","com/haxepunk/Tween.hx",104,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			::com::haxepunk::TweenType _g = this->_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(108)
					this->_time = this->_target;
					HX_STACK_LINE(109)
					this->active = false;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(111)
					hx::ModEq(this->_time,this->_target);
					HX_STACK_LINE(112)
					this->_t = (Float(this->_time) / Float(this->_target));
					HX_STACK_LINE(113)
					if (((bool((bool((this->_ease_dyn() != null())) && bool((this->_t > (int)0)))) && bool((this->_t < (int)1))))){
						HX_STACK_LINE(113)
						Float _g1 = this->_ease(this->_t);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(113)
						this->_t = _g1;
					}
					HX_STACK_LINE(114)
					this->start();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(116)
					this->_time = this->_target;
					HX_STACK_LINE(117)
					this->active = false;
					HX_STACK_LINE(118)
					this->_parent->removeTween(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
			}
		}
		HX_STACK_LINE(120)
		this->_finish = false;
		HX_STACK_LINE(121)
		::com::haxepunk::tweens::TweenEvent _g1 = ::com::haxepunk::tweens::TweenEvent_obj::__new(::com::haxepunk::tweens::TweenEvent_obj::FINISH,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		this->dispatchEvent(_g1);
		HX_STACK_LINE(123)
		if (((bool((this->_type == ::com::haxepunk::TweenType_obj::OneShot)) && bool((this->_callback_dyn() != null()))))){
			HX_STACK_LINE(125)
			this->removeEventListener(::com::haxepunk::tweens::TweenEvent_obj::FINISH,this->_callback_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,finish,(void))

Void Tween_obj::cancel( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","cancel",0x359a26d6,"com.haxepunk.Tween.cancel","com/haxepunk/Tween.hx",133,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->active = false;
		HX_STACK_LINE(135)
		if (((this->_parent != null()))){
			HX_STACK_LINE(137)
			this->_parent->removeTween(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,cancel,(void))

Float Tween_obj::get_percent( ){
	HX_STACK_FRAME("com.haxepunk.Tween","get_percent",0x50156400,"com.haxepunk.Tween.get_percent","com/haxepunk/Tween.hx",143,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return (Float(this->_time) / Float(this->_target));
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,get_percent,return )

Float Tween_obj::set_percent( Float value){
	HX_STACK_FRAME("com.haxepunk.Tween","set_percent",0x5a826b0c,"com.haxepunk.Tween.set_percent","com/haxepunk/Tween.hx",144,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	this->_time = (this->_target * value);
	HX_STACK_LINE(144)
	return this->_time;
}


HX_DEFINE_DYNAMIC_FUNC1(Tween_obj,set_percent,return )

Float Tween_obj::get_scale( ){
	HX_STACK_FRAME("com.haxepunk.Tween","get_scale",0x0ccb3305,"com.haxepunk.Tween.get_scale","com/haxepunk/Tween.hx",147,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->_t;
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,get_scale,return )


Tween_obj::Tween_obj()
{
}

void Tween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_t,"_t");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_finish,"_finish");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_next,"_next");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_t,"_t");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_finish,"_finish");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { return _t; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp ? get_scale() : scale; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_finish") ) { return _finish; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { _t=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::com::haxepunk::TweenType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finish") ) { _finish=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_t"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_finish"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tween_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(Tween_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::com::haxepunk::TweenType*/ ,(int)offsetof(Tween_obj,_type),HX_CSTRING("_type")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_ease),HX_CSTRING("_ease")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_t),HX_CSTRING("_t")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_time),HX_CSTRING("_time")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_target),HX_CSTRING("_target")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_callback),HX_CSTRING("_callback")},
	{hx::fsBool,(int)offsetof(Tween_obj,_finish),HX_CSTRING("_finish")},
	{hx::fsObject /*::com::haxepunk::Tweener*/ ,(int)offsetof(Tween_obj,_parent),HX_CSTRING("_parent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_prev),HX_CSTRING("_prev")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_next),HX_CSTRING("_next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("update"),
	HX_CSTRING("start"),
	HX_CSTRING("finish"),
	HX_CSTRING("cancel"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("_type"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_t"),
	HX_CSTRING("_time"),
	HX_CSTRING("_target"),
	HX_CSTRING("_callback"),
	HX_CSTRING("_finish"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tween_obj::__mClass,"__mClass");
};

#endif

Class Tween_obj::__mClass;

void Tween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Tween"), hx::TCanCast< Tween_obj> ,sStaticFields,sMemberFields,
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

void Tween_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
