#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxTileSet_TileSetData_Impl_
#include <com/haxepunk/tmx/_TmxTileSet/TileSetData_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
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
namespace _TmxTileSet{

Void TileSetData_Impl__obj::__construct()
{
	return null();
}

//TileSetData_Impl__obj::~TileSetData_Impl__obj() { }

Dynamic TileSetData_Impl__obj::__CreateEmpty() { return  new TileSetData_Impl__obj; }
hx::ObjectPtr< TileSetData_Impl__obj > TileSetData_Impl__obj::__new()
{  hx::ObjectPtr< TileSetData_Impl__obj > result = new TileSetData_Impl__obj();
	result->__construct();
	return result;}

Dynamic TileSetData_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSetData_Impl__obj > result = new TileSetData_Impl__obj();
	result->__construct();
	return result;}

::haxe::xml::Fast TileSetData_Impl__obj::_new( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","_new",0x77ee2273,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_._new","com/haxepunk/tmx/TmxTileSet.hx",15,0x09536340)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(15)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,_new,return )

::haxe::xml::Fast TileSetData_Impl__obj::toMap( ::haxe::xml::Fast this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","toMap",0x90711e8f,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.toMap","com/haxepunk/tmx/TmxTileSet.hx",16,0x09536340)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(16)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,toMap,return )

::haxe::xml::Fast TileSetData_Impl__obj::fromFast( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","fromFast",0x80918f38,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.fromFast","com/haxepunk/tmx/TmxTileSet.hx",19,0x09536340)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(19)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,fromFast,return )

::haxe::xml::Fast TileSetData_Impl__obj::fromByteArray( ::openfl::_v2::utils::ByteArray ba){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","fromByteArray",0x32513f55,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.fromByteArray","com/haxepunk/tmx/TmxTileSet.hx",21,0x09536340)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(22)
	::String _g = ba->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	::Xml _g1 = ::Xml_obj::parse(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(22)
	::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(_g1);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(23)
	::haxe::xml::Fast f1 = f->node->resolve(HX_CSTRING("tileset"));		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(23)
	return f1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,fromByteArray,return )


TileSetData_Impl__obj::TileSetData_Impl__obj()
{
}

Dynamic TileSetData_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFast") ) { return fromFast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromByteArray") ) { return fromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSetData_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSetData_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toMap"),
	HX_CSTRING("fromFast"),
	HX_CSTRING("fromByteArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSetData_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSetData_Impl__obj::__mClass,"__mClass");
};

#endif

Class TileSetData_Impl__obj::__mClass;

void TileSetData_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_"), hx::TCanCast< TileSetData_Impl__obj> ,sStaticFields,sMemberFields,
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

void TileSetData_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxTileSet
