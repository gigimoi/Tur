#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_GestureMode
#include <com/haxepunk/utils/GestureMode.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

::com::haxepunk::utils::GestureMode GestureMode_obj::FINISHED;

::com::haxepunk::utils::GestureMode GestureMode_obj::MULTI_MOVE;

::com::haxepunk::utils::GestureMode GestureMode_obj::MULTI_TOUCH;

::com::haxepunk::utils::GestureMode GestureMode_obj::READY;

::com::haxepunk::utils::GestureMode GestureMode_obj::SINGLE_MOVE;

::com::haxepunk::utils::GestureMode GestureMode_obj::SINGLE_TOUCH;

HX_DEFINE_CREATE_ENUM(GestureMode_obj)

int GestureMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FINISHED")) return 5;
	if (inName==HX_CSTRING("MULTI_MOVE")) return 4;
	if (inName==HX_CSTRING("MULTI_TOUCH")) return 3;
	if (inName==HX_CSTRING("READY")) return 0;
	if (inName==HX_CSTRING("SINGLE_MOVE")) return 2;
	if (inName==HX_CSTRING("SINGLE_TOUCH")) return 1;
	return super::__FindIndex(inName);
}

int GestureMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FINISHED")) return 0;
	if (inName==HX_CSTRING("MULTI_MOVE")) return 0;
	if (inName==HX_CSTRING("MULTI_TOUCH")) return 0;
	if (inName==HX_CSTRING("READY")) return 0;
	if (inName==HX_CSTRING("SINGLE_MOVE")) return 0;
	if (inName==HX_CSTRING("SINGLE_TOUCH")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GestureMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FINISHED")) return FINISHED;
	if (inName==HX_CSTRING("MULTI_MOVE")) return MULTI_MOVE;
	if (inName==HX_CSTRING("MULTI_TOUCH")) return MULTI_TOUCH;
	if (inName==HX_CSTRING("READY")) return READY;
	if (inName==HX_CSTRING("SINGLE_MOVE")) return SINGLE_MOVE;
	if (inName==HX_CSTRING("SINGLE_TOUCH")) return SINGLE_TOUCH;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("READY"),
	HX_CSTRING("SINGLE_TOUCH"),
	HX_CSTRING("SINGLE_MOVE"),
	HX_CSTRING("MULTI_TOUCH"),
	HX_CSTRING("MULTI_MOVE"),
	HX_CSTRING("FINISHED"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GestureMode_obj::FINISHED,"FINISHED");
	HX_MARK_MEMBER_NAME(GestureMode_obj::MULTI_MOVE,"MULTI_MOVE");
	HX_MARK_MEMBER_NAME(GestureMode_obj::MULTI_TOUCH,"MULTI_TOUCH");
	HX_MARK_MEMBER_NAME(GestureMode_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(GestureMode_obj::SINGLE_MOVE,"SINGLE_MOVE");
	HX_MARK_MEMBER_NAME(GestureMode_obj::SINGLE_TOUCH,"SINGLE_TOUCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GestureMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::FINISHED,"FINISHED");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::MULTI_MOVE,"MULTI_MOVE");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::MULTI_TOUCH,"MULTI_TOUCH");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::SINGLE_MOVE,"SINGLE_MOVE");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::SINGLE_TOUCH,"SINGLE_TOUCH");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GestureMode_obj::__mClass;

Dynamic __Create_GestureMode_obj() { return new GestureMode_obj; }

void GestureMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.GestureMode"), hx::TCanCast< GestureMode_obj >,sStaticFields,sMemberFields,
	&__Create_GestureMode_obj, &__Create,
	&super::__SGetClass(), &CreateGestureMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GestureMode_obj::__boot()
{
hx::Static(FINISHED) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("FINISHED"),5);
hx::Static(MULTI_MOVE) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("MULTI_MOVE"),4);
hx::Static(MULTI_TOUCH) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("MULTI_TOUCH"),3);
hx::Static(READY) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("READY"),0);
hx::Static(SINGLE_MOVE) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("SINGLE_MOVE"),2);
hx::Static(SINGLE_TOUCH) = hx::CreateEnum< GestureMode_obj >(HX_CSTRING("SINGLE_TOUCH"),1);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace utils
