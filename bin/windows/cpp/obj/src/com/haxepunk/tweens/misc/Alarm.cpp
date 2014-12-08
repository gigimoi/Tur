#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{

Void Alarm_obj::__construct(Float duration,Dynamic complete,::com::haxepunk::TweenType type)
{
HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","new",0x545d5cee,"com.haxepunk.tweens.misc.Alarm.new","com/haxepunk/tweens/misc/Alarm.hx",18,0x83867e82)
HX_STACK_THIS(this)
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(complete,"complete")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(18)
	super::__construct(duration,type,complete,null());
}
;
	return null();
}

//Alarm_obj::~Alarm_obj() { }

Dynamic Alarm_obj::__CreateEmpty() { return  new Alarm_obj; }
hx::ObjectPtr< Alarm_obj > Alarm_obj::__new(Float duration,Dynamic complete,::com::haxepunk::TweenType type)
{  hx::ObjectPtr< Alarm_obj > result = new Alarm_obj();
	result->__construct(duration,complete,type);
	return result;}

Dynamic Alarm_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Alarm_obj > result = new Alarm_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Alarm_obj::reset( Float duration){
{
		HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","reset",0x79b895dd,"com.haxepunk.tweens.misc.Alarm.reset","com/haxepunk/tweens/misc/Alarm.hx",26,0x83867e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(27)
		this->_target = duration;
		HX_STACK_LINE(28)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alarm_obj,reset,(void))

Float Alarm_obj::get_elapsed( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_elapsed",0x4d18c2e1,"com.haxepunk.tweens.misc.Alarm.get_elapsed","com/haxepunk/tweens/misc/Alarm.hx",35,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return this->_time;
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_elapsed,return )

Float Alarm_obj::get_duration( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_duration",0x8f5b350f,"com.haxepunk.tweens.misc.Alarm.get_duration","com/haxepunk/tweens/misc/Alarm.hx",41,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return this->_target;
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_duration,return )

Float Alarm_obj::get_remaining( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_remaining",0xb475a4db,"com.haxepunk.tweens.misc.Alarm.get_remaining","com/haxepunk/tweens/misc/Alarm.hx",47,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return (this->_target - this->_time);
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_remaining,return )


Alarm_obj::Alarm_obj()
{
}

Dynamic Alarm_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return get_elapsed(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return get_duration(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"remaining") ) { return get_remaining(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_elapsed") ) { return get_elapsed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_remaining") ) { return get_remaining_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Alarm_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Alarm_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elapsed"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("remaining"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("get_elapsed"),
	HX_CSTRING("get_duration"),
	HX_CSTRING("get_remaining"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alarm_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alarm_obj::__mClass,"__mClass");
};

#endif

Class Alarm_obj::__mClass;

void Alarm_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tweens.misc.Alarm"), hx::TCanCast< Alarm_obj> ,sStaticFields,sMemberFields,
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

void Alarm_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc
