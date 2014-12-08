#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
namespace com{
namespace haxepunk{
namespace _Entity{

Void SolidType_Impl__obj::__construct()
{
	return null();
}

//SolidType_Impl__obj::~SolidType_Impl__obj() { }

Dynamic SolidType_Impl__obj::__CreateEmpty() { return  new SolidType_Impl__obj; }
hx::ObjectPtr< SolidType_Impl__obj > SolidType_Impl__obj::__new()
{  hx::ObjectPtr< SolidType_Impl__obj > result = new SolidType_Impl__obj();
	result->__construct();
	return result;}

Dynamic SolidType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SolidType_Impl__obj > result = new SolidType_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::ds::Either SolidType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","_new",0xd71e2a4f,"com.haxepunk._Entity.SolidType_Impl_._new","com/haxepunk/Entity.hx",17,0x8aea1c42)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(17)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,_new,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","get_type",0xdd3ad231,"com.haxepunk._Entity.SolidType_Impl_.get_type","com/haxepunk/Entity.hx",19,0x8aea1c42)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(19)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::fromLeft( ::String v){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","fromLeft",0xb5f2fa7f,"com.haxepunk._Entity.SolidType_Impl_.fromLeft","com/haxepunk/Entity.hx",20,0x8aea1c42)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(20)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(v);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(20)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,fromLeft,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::fromRight( Array< ::String > v){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","fromRight",0xf5b54264,"com.haxepunk._Entity.SolidType_Impl_.fromRight","com/haxepunk/Entity.hx",21,0x8aea1c42)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(21)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(v);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(21)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,fromRight,return )


SolidType_Impl__obj::SolidType_Impl__obj()
{
}

Dynamic SolidType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SolidType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SolidType_Impl__obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SolidType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SolidType_Impl__obj::__mClass,"__mClass");
};

#endif

Class SolidType_Impl__obj::__mClass;

void SolidType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk._Entity.SolidType_Impl_"), hx::TCanCast< SolidType_Impl__obj> ,sStaticFields,sMemberFields,
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

void SolidType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace _Entity
