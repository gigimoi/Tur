#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_tmx_TmxVec4
#include <com/haxepunk/tmx/TmxVec4.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxVec4_obj::__construct(Float x,Float y,Float width,Float height)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxVec4","new",0xc2e10a29,"com.haxepunk.tmx.TmxVec4.new","com/haxepunk/tmx/TmxVec4.hx",11,0x8d021888)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(12)
	this->x = x;
	HX_STACK_LINE(13)
	this->y = y;
	HX_STACK_LINE(14)
	this->width = width;
	HX_STACK_LINE(15)
	this->height = height;
}
;
	return null();
}

//TmxVec4_obj::~TmxVec4_obj() { }

Dynamic TmxVec4_obj::__CreateEmpty() { return  new TmxVec4_obj; }
hx::ObjectPtr< TmxVec4_obj > TmxVec4_obj::__new(Float x,Float y,Float width,Float height)
{  hx::ObjectPtr< TmxVec4_obj > result = new TmxVec4_obj();
	result->__construct(x,y,width,height);
	return result;}

Dynamic TmxVec4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxVec4_obj > result = new TmxVec4_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


TmxVec4_obj::TmxVec4_obj()
{
}

Dynamic TmxVec4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxVec4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxVec4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TmxVec4_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(TmxVec4_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(TmxVec4_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(TmxVec4_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxVec4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxVec4_obj::__mClass,"__mClass");
};

#endif

Class TmxVec4_obj::__mClass;

void TmxVec4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxVec4"), hx::TCanCast< TmxVec4_obj> ,sStaticFields,sMemberFields,
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

void TmxVec4_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
