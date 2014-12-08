#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureType
#include <com/haxepunk/utils/GestureType.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void GestureType_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.utils.GestureType","new",0x27ba3f3f,"com.haxepunk.utils.GestureType.new","com/haxepunk/utils/Gesture.hx",5,0xc908f04c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->released = false;
	HX_STACK_LINE(16)
	this->pressed = false;
	HX_STACK_LINE(15)
	this->active = false;
	HX_STACK_LINE(13)
	this->time = (int)0;
	HX_STACK_LINE(12)
	this->magnitude = (int)0;
	HX_STACK_LINE(11)
	this->y2 = (int)0;
	HX_STACK_LINE(10)
	this->x2 = (int)0;
	HX_STACK_LINE(9)
	this->y = (int)0;
	HX_STACK_LINE(8)
	this->x = (int)0;
	HX_STACK_LINE(21)
	this->reset();
}
;
	return null();
}

//GestureType_obj::~GestureType_obj() { }

Dynamic GestureType_obj::__CreateEmpty() { return  new GestureType_obj; }
hx::ObjectPtr< GestureType_obj > GestureType_obj::__new()
{  hx::ObjectPtr< GestureType_obj > result = new GestureType_obj();
	result->__construct();
	return result;}

Dynamic GestureType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GestureType_obj > result = new GestureType_obj();
	result->__construct();
	return result;}

Void GestureType_obj::reset( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","reset",0x87cf6e6e,"com.haxepunk.utils.GestureType.reset","com/haxepunk/utils/Gesture.hx",25,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		Float _g = this->time = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Float _g1 = this->y2 = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		Float _g2 = this->x2 = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		Float _g3 = this->y = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(26)
		this->x = _g3;
		HX_STACK_LINE(27)
		bool _g4 = this->released = false;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(27)
		bool _g5 = this->pressed = _g4;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(27)
		this->active = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,reset,(void))

Void GestureType_obj::start( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","start",0x25129901,"com.haxepunk.utils.GestureType.start","com/haxepunk/utils/Gesture.hx",31,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(32)
		bool _g = this->pressed = true;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->active = _g;
		HX_STACK_LINE(33)
		this->x = x;
		HX_STACK_LINE(34)
		this->y = y;
		HX_STACK_LINE(35)
		Float _g1 = this->magnitude = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		Float _g2 = this->y2 = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		this->x2 = _g2;
		HX_STACK_LINE(36)
		this->time = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GestureType_obj,start,(void))

Float GestureType_obj::get_distance( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_distance",0x5d4d847f,"com.haxepunk.utils.GestureType.get_distance","com/haxepunk/utils/Gesture.hx",42,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Float x1 = this->x;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(42)
	Float y1 = this->y;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(42)
	Float x2 = this->x2;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(42)
	Float y2 = this->y2;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(42)
	return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_distance,return )

Float GestureType_obj::get_velocity( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_velocity",0x1051f367,"com.haxepunk.utils.GestureType.get_velocity","com/haxepunk/utils/Gesture.hx",48,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	if (((this->time == (int)0))){
		HX_STACK_LINE(48)
		return (int)0;
	}
	else{
		HX_STACK_LINE(48)
		Float _g = this->get_distance();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		return (Float(_g) / Float(this->time));
	}
	HX_STACK_LINE(48)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_velocity,return )

int GestureType_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_angle",0x90ab0049,"com.haxepunk.utils.GestureType.get_angle","com/haxepunk/utils/Gesture.hx",55,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_angle,return )

Void GestureType_obj::release( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","release",0xa57e5026,"com.haxepunk.utils.GestureType.release","com/haxepunk/utils/Gesture.hx",60,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->released = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,release,(void))

Void GestureType_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","update",0xcc3e6c8a,"com.haxepunk.utils.GestureType.update","com/haxepunk/utils/Gesture.hx",65,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		if ((this->pressed)){
			HX_STACK_LINE(67)
			this->pressed = false;
		}
		else{
			HX_STACK_LINE(69)
			if ((this->released)){
				HX_STACK_LINE(71)
				this->reset();
			}
			else{
				HX_STACK_LINE(73)
				if ((this->active)){
					HX_STACK_LINE(75)
					hx::AddEq(this->time,::com::haxepunk::HXP_obj::elapsed);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,update,(void))


GestureType_obj::GestureType_obj()
{
}

Dynamic GestureType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released; }
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return get_velocity(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { return magnitude; }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GestureType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { magnitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GestureType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x2"));
	outFields->push(HX_CSTRING("y2"));
	outFields->push(HX_CSTRING("magnitude"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("released"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GestureType_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,x2),HX_CSTRING("x2")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,y2),HX_CSTRING("y2")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,magnitude),HX_CSTRING("magnitude")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,time),HX_CSTRING("time")},
	{hx::fsBool,(int)offsetof(GestureType_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(GestureType_obj,pressed),HX_CSTRING("pressed")},
	{hx::fsBool,(int)offsetof(GestureType_obj,released),HX_CSTRING("released")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("x2"),
	HX_CSTRING("y2"),
	HX_CSTRING("magnitude"),
	HX_CSTRING("time"),
	HX_CSTRING("active"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("reset"),
	HX_CSTRING("start"),
	HX_CSTRING("get_distance"),
	HX_CSTRING("get_velocity"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("release"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GestureType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GestureType_obj::__mClass,"__mClass");
};

#endif

Class GestureType_obj::__mClass;

void GestureType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.GestureType"), hx::TCanCast< GestureType_obj> ,sStaticFields,sMemberFields,
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

void GestureType_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
