#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk__HXP_Position_Impl_
#include <com/haxepunk/_HXP/Position_Impl_.h>
#endif
namespace com{
namespace haxepunk{
namespace _HXP{

Void Position_Impl__obj::__construct()
{
	return null();
}

//Position_Impl__obj::~Position_Impl__obj() { }

Dynamic Position_Impl__obj::__CreateEmpty() { return  new Position_Impl__obj; }
hx::ObjectPtr< Position_Impl__obj > Position_Impl__obj::__new()
{  hx::ObjectPtr< Position_Impl__obj > result = new Position_Impl__obj();
	result->__construct();
	return result;}

Dynamic Position_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Position_Impl__obj > result = new Position_Impl__obj();
	result->__construct();
	return result;}

Dynamic Position_Impl__obj::_new( Dynamic obj){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","_new",0x6aee9832,"com.haxepunk._HXP.Position_Impl_._new","com/haxepunk/HXP.hx",38,0x4944a037)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(38)
	return obj;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,_new,return )

Float Position_Impl__obj::get_x( Dynamic this1){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","get_x",0xbb23995e,"com.haxepunk._HXP.Position_Impl_.get_x","com/haxepunk/HXP.hx",41,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(41)
	return this1->__Field(HX_CSTRING("x"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,get_x,return )

Float Position_Impl__obj::set_x( Dynamic this1,Float value){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","set_x",0xa3f28f6a,"com.haxepunk._HXP.Position_Impl_.set_x","com/haxepunk/HXP.hx",42,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	return this1->__FieldRef(HX_CSTRING("x")) = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Position_Impl__obj,set_x,return )

Float Position_Impl__obj::get_y( Dynamic this1){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","get_y",0xbb23995f,"com.haxepunk._HXP.Position_Impl_.get_y","com/haxepunk/HXP.hx",45,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(45)
	return this1->__Field(HX_CSTRING("y"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,get_y,return )

Float Position_Impl__obj::set_y( Dynamic this1,Float value){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","set_y",0xa3f28f6b,"com.haxepunk._HXP.Position_Impl_.set_y","com/haxepunk/HXP.hx",46,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(46)
	return this1->__FieldRef(HX_CSTRING("y")) = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Position_Impl__obj,set_y,return )

Dynamic Position_Impl__obj::fromObject( Dynamic obj){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","fromObject",0xa2e6795a,"com.haxepunk._HXP.Position_Impl_.fromObject","com/haxepunk/HXP.hx",48,0x4944a037)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(48)
	return ::com::haxepunk::_HXP::Position_Impl__obj::_new(obj);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,fromObject,return )

Dynamic Position_Impl__obj::fromEntity( ::com::haxepunk::Entity entity){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","fromEntity",0x92c30dbe,"com.haxepunk._HXP.Position_Impl_.fromEntity","com/haxepunk/HXP.hx",49,0x4944a037)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(49)
	return ::com::haxepunk::_HXP::Position_Impl__obj::_new(entity);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,fromEntity,return )


Position_Impl__obj::Position_Impl__obj()
{
}

Dynamic Position_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromObject") ) { return fromObject_dyn(); }
		if (HX_FIELD_EQ(inName,"fromEntity") ) { return fromEntity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Position_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Position_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("fromObject"),
	HX_CSTRING("fromEntity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Position_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Position_Impl__obj::__mClass,"__mClass");
};

#endif

Class Position_Impl__obj::__mClass;

void Position_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk._HXP.Position_Impl_"), hx::TCanCast< Position_Impl__obj> ,sStaticFields,sMemberFields,
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

void Position_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace _HXP
