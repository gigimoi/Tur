#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{
namespace _Input{

Void InputType_Impl__obj::__construct()
{
	return null();
}

//InputType_Impl__obj::~InputType_Impl__obj() { }

Dynamic InputType_Impl__obj::__CreateEmpty() { return  new InputType_Impl__obj; }
hx::ObjectPtr< InputType_Impl__obj > InputType_Impl__obj::__new()
{  hx::ObjectPtr< InputType_Impl__obj > result = new InputType_Impl__obj();
	result->__construct();
	return result;}

Dynamic InputType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputType_Impl__obj > result = new InputType_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::ds::Either InputType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","_new",0x956d6ed8,"com.haxepunk.utils._Input.InputType_Impl_._new","com/haxepunk/utils/Input.hx",28,0x987951ab)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(28)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,_new,return )

::com::haxepunk::ds::Either InputType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","get_type",0x90618f3a,"com.haxepunk.utils._Input.InputType_Impl_.get_type","com/haxepunk/utils/Input.hx",30,0x987951ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(30)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either InputType_Impl__obj::fromLeft( ::String v){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","fromLeft",0x6919b788,"com.haxepunk.utils._Input.InputType_Impl_.fromLeft","com/haxepunk/utils/Input.hx",31,0x987951ab)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(31)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(v);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(31)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,fromLeft,return )

::com::haxepunk::ds::Either InputType_Impl__obj::fromRight( int v){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","fromRight",0x0473ed3b,"com.haxepunk.utils._Input.InputType_Impl_.fromRight","com/haxepunk/utils/Input.hx",32,0x987951ab)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(32)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(v);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(32)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,fromRight,return )


InputType_Impl__obj::InputType_Impl__obj()
{
}

Dynamic InputType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"fromLeft") ) { return fromLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromRight") ) { return fromRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InputType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("get_type"),
	HX_CSTRING("fromLeft"),
	HX_CSTRING("fromRight"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputType_Impl__obj::__mClass,"__mClass");
};

#endif

Class InputType_Impl__obj::__mClass;

void InputType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils._Input.InputType_Impl_"), hx::TCanCast< InputType_Impl__obj> ,sStaticFields,sMemberFields,
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

void InputType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
} // end namespace _Input
