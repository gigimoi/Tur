#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfoBuilder
#include <com/haxepunk/utils/HaxelibInfoBuilder.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void HaxelibInfoBuilder_obj::__construct()
{
	return null();
}

//HaxelibInfoBuilder_obj::~HaxelibInfoBuilder_obj() { }

Dynamic HaxelibInfoBuilder_obj::__CreateEmpty() { return  new HaxelibInfoBuilder_obj; }
hx::ObjectPtr< HaxelibInfoBuilder_obj > HaxelibInfoBuilder_obj::__new()
{  hx::ObjectPtr< HaxelibInfoBuilder_obj > result = new HaxelibInfoBuilder_obj();
	result->__construct();
	return result;}

Dynamic HaxelibInfoBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxelibInfoBuilder_obj > result = new HaxelibInfoBuilder_obj();
	result->__construct();
	return result;}


HaxelibInfoBuilder_obj::HaxelibInfoBuilder_obj()
{
}

Dynamic HaxelibInfoBuilder_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic HaxelibInfoBuilder_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxelibInfoBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxelibInfoBuilder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxelibInfoBuilder_obj::__mClass,"__mClass");
};

#endif

Class HaxelibInfoBuilder_obj::__mClass;

void HaxelibInfoBuilder_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.HaxelibInfoBuilder"), hx::TCanCast< HaxelibInfoBuilder_obj> ,sStaticFields,sMemberFields,
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

void HaxelibInfoBuilder_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
