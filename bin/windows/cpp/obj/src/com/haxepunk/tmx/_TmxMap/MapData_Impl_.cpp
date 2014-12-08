#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxMap_MapData_Impl_
#include <com/haxepunk/tmx/_TmxMap/MapData_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxMap{

Void MapData_Impl__obj::__construct()
{
	return null();
}

//MapData_Impl__obj::~MapData_Impl__obj() { }

Dynamic MapData_Impl__obj::__CreateEmpty() { return  new MapData_Impl__obj; }
hx::ObjectPtr< MapData_Impl__obj > MapData_Impl__obj::__new()
{  hx::ObjectPtr< MapData_Impl__obj > result = new MapData_Impl__obj();
	result->__construct();
	return result;}

Dynamic MapData_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapData_Impl__obj > result = new MapData_Impl__obj();
	result->__construct();
	return result;}

::haxe::xml::Fast MapData_Impl__obj::_new( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","_new",0x9f954063,"com.haxepunk.tmx._TmxMap.MapData_Impl_._new","com/haxepunk/tmx/TmxMap.hx",19,0xb8c773b8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(19)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,_new,return )

::haxe::xml::Fast MapData_Impl__obj::toMap( ::haxe::xml::Fast this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","toMap",0x1b04329f,"com.haxepunk.tmx._TmxMap.MapData_Impl_.toMap","com/haxepunk/tmx/TmxMap.hx",20,0xb8c773b8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,toMap,return )

::haxe::xml::Fast MapData_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromString",0xdf87865d,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromString","com/haxepunk/tmx/TmxMap.hx",23,0xb8c773b8)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(23)
	::Xml _g = ::Xml_obj::parse(s);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(_g);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(23)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromString,return )

::haxe::xml::Fast MapData_Impl__obj::fromXml( ::Xml xml){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromXml",0x92cf60cb,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromXml","com/haxepunk/tmx/TmxMap.hx",26,0xb8c773b8)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(26)
	::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(26)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromXml,return )

::haxe::xml::Fast MapData_Impl__obj::fromByteArray( ::openfl::_v2::utils::ByteArray ba){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromByteArray",0x132ee365,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromByteArray","com/haxepunk/tmx/TmxMap.hx",29,0xb8c773b8)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(29)
	::String _g = ba->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	::Xml _g1 = ::Xml_obj::parse(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(_g1);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(29)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromByteArray,return )


MapData_Impl__obj::MapData_Impl__obj()
{
}

Dynamic MapData_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { return fromXml_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromByteArray") ) { return fromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapData_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MapData_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toMap"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromXml"),
	HX_CSTRING("fromByteArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapData_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapData_Impl__obj::__mClass,"__mClass");
};

#endif

Class MapData_Impl__obj::__mClass;

void MapData_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx._TmxMap.MapData_Impl_"), hx::TCanCast< MapData_Impl__obj> ,sStaticFields,sMemberFields,
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

void MapData_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxMap
