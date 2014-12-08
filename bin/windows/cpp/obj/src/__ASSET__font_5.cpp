#include <hxcpp.h>

#ifndef INCLUDED___ASSET__font_5
#include <__ASSET__font_5.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontStyle
#include <openfl/_v2/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontType
#include <openfl/_v2/text/FontType.h>
#endif

Void __ASSET__font_5_obj::__construct()
{
HX_STACK_FRAME("__ASSET__font_5","new",0x881d87c7,"__ASSET__font_5.new","DefaultAssetLibrary.hx",883,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(883)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(883)
	this->__fontPath = HX_CSTRING("font/04B_03__.ttf");
	HX_STACK_LINE(883)
	this->fontName = HX_CSTRING("04b03");
}
;
	return null();
}

//__ASSET__font_5_obj::~__ASSET__font_5_obj() { }

Dynamic __ASSET__font_5_obj::__CreateEmpty() { return  new __ASSET__font_5_obj; }
hx::ObjectPtr< __ASSET__font_5_obj > __ASSET__font_5_obj::__new()
{  hx::ObjectPtr< __ASSET__font_5_obj > result = new __ASSET__font_5_obj();
	result->__construct();
	return result;}

Dynamic __ASSET__font_5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__font_5_obj > result = new __ASSET__font_5_obj();
	result->__construct();
	return result;}


__ASSET__font_5_obj::__ASSET__font_5_obj()
{
}

Dynamic __ASSET__font_5_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__font_5_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__font_5_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(__ASSET__font_5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__font_5_obj::__mClass,"__mClass");
};

#endif

Class __ASSET__font_5_obj::__mClass;

void __ASSET__font_5_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__font_5"), hx::TCanCast< __ASSET__font_5_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__font_5_obj::__boot()
{
}

