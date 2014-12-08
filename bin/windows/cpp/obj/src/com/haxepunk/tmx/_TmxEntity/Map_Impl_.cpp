#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxEntity_Map_Impl_
#include <com/haxepunk/tmx/_TmxEntity/Map_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxEntity{

Void Map_Impl__obj::__construct()
{
	return null();
}

//Map_Impl__obj::~Map_Impl__obj() { }

Dynamic Map_Impl__obj::__CreateEmpty() { return  new Map_Impl__obj; }
hx::ObjectPtr< Map_Impl__obj > Map_Impl__obj::__new()
{  hx::ObjectPtr< Map_Impl__obj > result = new Map_Impl__obj();
	result->__construct();
	return result;}

Dynamic Map_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_Impl__obj > result = new Map_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::tmx::TmxMap Map_Impl__obj::_new( ::com::haxepunk::tmx::TmxMap map){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","_new",0xd4a355f6,"com.haxepunk.tmx._TmxEntity.Map_Impl_._new","com/haxepunk/tmx/TmxEntity.hx",15,0xb1c5c725)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(15)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,_new,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::toMap( ::com::haxepunk::tmx::TmxMap this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","toMap",0x5248fdac,"com.haxepunk.tmx._TmxEntity.Map_Impl_.toMap","com/haxepunk/tmx/TmxEntity.hx",16,0xb1c5c725)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(16)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toMap,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromString",0x76a68c30,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromString","com/haxepunk/tmx/TmxEntity.hx",19,0xb1c5c725)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(19)
	::haxe::xml::Fast _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::String _g = ::openfl::_v2::Assets_obj::getText(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		::Xml xml = ::Xml_obj::parse(_g);		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(19)
		::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(19)
		_g1 = f;
	}
	HX_STACK_LINE(19)
	::com::haxepunk::tmx::TmxMap map = ::com::haxepunk::tmx::TmxMap_obj::__new(_g1);		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(19)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromString,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromTmxMap( ::com::haxepunk::tmx::TmxMap map){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromTmxMap",0xd915d65c,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromTmxMap","com/haxepunk/tmx/TmxEntity.hx",22,0xb1c5c725)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(22)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromTmxMap,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromMapData( ::haxe::xml::Fast mapData){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromMapData",0x897f9aa7,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromMapData","com/haxepunk/tmx/TmxEntity.hx",25,0xb1c5c725)
	HX_STACK_ARG(mapData,"mapData")
	HX_STACK_LINE(25)
	::com::haxepunk::tmx::TmxMap map = ::com::haxepunk::tmx::TmxMap_obj::__new(mapData);		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(25)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromMapData,return )


Map_Impl__obj::Map_Impl__obj()
{
}

Dynamic Map_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"fromTmxMap") ) { return fromTmxMap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromMapData") ) { return fromMapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Map_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Map_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toMap"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromTmxMap"),
	HX_CSTRING("fromMapData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
};

#endif

Class Map_Impl__obj::__mClass;

void Map_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx._TmxEntity.Map_Impl_"), hx::TCanCast< Map_Impl__obj> ,sStaticFields,sMemberFields,
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

void Map_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxEntity
