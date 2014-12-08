#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Joystick_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.utils.Joystick","new",0x6a9d7a84,"com.haxepunk.utils.Joystick.new","com/haxepunk/utils/Joystick.hx",45,0x1b505b2b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->buttons = _g;
	HX_STACK_LINE(47)
	::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	this->ball = _g1;
	HX_STACK_LINE(48)
	Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(48)
	this->axis = _g2;
	HX_STACK_LINE(49)
	::openfl::_v2::geom::Point _g3 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(49)
	this->hat = _g3;
	HX_STACK_LINE(50)
	this->set_connected(false);
	HX_STACK_LINE(51)
	this->_timeout = (int)0;
}
;
	return null();
}

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new()
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct();
	return result;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > result = new Joystick_obj();
	result->__construct();
	return result;}

Void Joystick_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Joystick","update",0x666dca65,"com.haxepunk.utils.Joystick.update","com/haxepunk/utils/Joystick.hx",59,0x1b505b2b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		hx::SubEq(this->_timeout,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(61)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->buttons->keys());  __it->hasNext(); ){
			int button = __it->next();
			{
				HX_STACK_LINE(63)
				::com::haxepunk::utils::JoyButtonState _g = this->buttons->get(button);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(63)
				switch( (int)(_g->__Index())){
					case (int)2: {
						HX_STACK_LINE(66)
						this->buttons->set(button,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_ON);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(68)
						this->buttons->set(button,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);
					}
					;break;
					default: {
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,update,(void))

bool Joystick_obj::pressed( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","pressed",0xd5ba5ec6,"com.haxepunk.utils.Joystick.pressed","com/haxepunk/utils/Joystick.hx",80,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(81)
	if (((button == null()))){
		HX_STACK_LINE(83)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->buttons->keys());  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(85)
				::com::haxepunk::utils::JoyButtonState _g = this->buttons->get(k);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(85)
				if (((_g == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED))){
					HX_STACK_LINE(85)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(88)
		if ((this->buttons->exists(button))){
			HX_STACK_LINE(90)
			::com::haxepunk::utils::JoyButtonState _g1 = this->buttons->get(button);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			return (_g1 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);
		}
	}
	HX_STACK_LINE(92)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,pressed,return )

bool Joystick_obj::released( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","released",0x342e9c19,"com.haxepunk.utils.Joystick.released","com/haxepunk/utils/Joystick.hx",101,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(102)
	if (((button == null()))){
		HX_STACK_LINE(104)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->buttons->keys());  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(106)
				::com::haxepunk::utils::JoyButtonState _g = this->buttons->get(k);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(106)
				if (((_g == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED))){
					HX_STACK_LINE(106)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(109)
		if ((this->buttons->exists(button))){
			HX_STACK_LINE(111)
			::com::haxepunk::utils::JoyButtonState _g1 = this->buttons->get(button);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(111)
			return (_g1 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);
		}
	}
	HX_STACK_LINE(113)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,released,return )

bool Joystick_obj::check( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","check",0x155a13ec,"com.haxepunk.utils.Joystick.check","com/haxepunk/utils/Joystick.hx",122,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(123)
	if (((button == null()))){
		HX_STACK_LINE(125)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->buttons->keys());  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(127)
				::com::haxepunk::utils::JoyButtonState b = this->buttons->get(k);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(128)
				if (((bool((b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF)) && bool((b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED))))){
					HX_STACK_LINE(128)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(131)
		if ((this->buttons->exists(button))){
			HX_STACK_LINE(133)
			::com::haxepunk::utils::JoyButtonState b = this->buttons->get(button);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(134)
			return (bool((b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF)) && bool((b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED)));
		}
	}
	HX_STACK_LINE(136)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,check,return )

Float Joystick_obj::getAxis( int a){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","getAxis",0xaecf587b,"com.haxepunk.utils.Joystick.getAxis","com/haxepunk/utils/Joystick.hx",145,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(145)
	if (((bool((a < (int)0)) || bool((a >= this->axis->length))))){
		HX_STACK_LINE(145)
		return (int)0;
	}
	else{
		HX_STACK_LINE(146)
		Float _g = ::Math_obj::abs(this->axis->__get(a));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		if (((_g < 0.15))){
			HX_STACK_LINE(146)
			return (int)0;
		}
		else{
			HX_STACK_LINE(146)
			return this->axis->__get(a);
		}
	}
	HX_STACK_LINE(145)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,getAxis,return )

bool Joystick_obj::get_connected( ){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","get_connected",0xb663f5c4,"com.haxepunk.utils.Joystick.get_connected","com/haxepunk/utils/Joystick.hx",153,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return (this->_timeout > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_connected,return )

bool Joystick_obj::set_connected( bool value){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","set_connected",0xfb69d7d0,"com.haxepunk.utils.Joystick.set_connected","com/haxepunk/utils/Joystick.hx",155,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	if ((value)){
		HX_STACK_LINE(156)
		this->_timeout = (int)3;
	}
	else{
		HX_STACK_LINE(157)
		this->_timeout = (int)0;
	}
	HX_STACK_LINE(158)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,set_connected,return )

Float Joystick_obj::deadZone;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(_timeout,"_timeout");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(_timeout,"_timeout");
}

Dynamic Joystick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"_timeout") ) { return _timeout; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return get_connected(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_connected") ) { return get_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_connected") ) { return set_connected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_timeout") ) { _timeout=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return set_connected(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buttons"));
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("connected"));
	outFields->push(HX_CSTRING("_timeout"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("deadZone"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Joystick_obj,buttons),HX_CSTRING("buttons")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Joystick_obj,axis),HX_CSTRING("axis")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Joystick_obj,hat),HX_CSTRING("hat")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Joystick_obj,ball),HX_CSTRING("ball")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,_timeout),HX_CSTRING("_timeout")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buttons"),
	HX_CSTRING("axis"),
	HX_CSTRING("hat"),
	HX_CSTRING("ball"),
	HX_CSTRING("update"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("check"),
	HX_CSTRING("getAxis"),
	HX_CSTRING("get_connected"),
	HX_CSTRING("set_connected"),
	HX_CSTRING("_timeout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::deadZone,"deadZone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::deadZone,"deadZone");
};

#endif

Class Joystick_obj::__mClass;

void Joystick_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Joystick"), hx::TCanCast< Joystick_obj> ,sStaticFields,sMemberFields,
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

void Joystick_obj::__boot()
{
	deadZone= 0.15;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
