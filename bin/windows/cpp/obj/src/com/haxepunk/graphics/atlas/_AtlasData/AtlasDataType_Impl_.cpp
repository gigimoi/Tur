#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas__AtlasData_AtlasDataType_Impl_
#include <com/haxepunk/graphics/atlas/_AtlasData/AtlasDataType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{
namespace _AtlasData{

Void AtlasDataType_Impl__obj::__construct()
{
	return null();
}

//AtlasDataType_Impl__obj::~AtlasDataType_Impl__obj() { }

Dynamic AtlasDataType_Impl__obj::__CreateEmpty() { return  new AtlasDataType_Impl__obj; }
hx::ObjectPtr< AtlasDataType_Impl__obj > AtlasDataType_Impl__obj::__new()
{  hx::ObjectPtr< AtlasDataType_Impl__obj > result = new AtlasDataType_Impl__obj();
	result->__construct();
	return result;}

Dynamic AtlasDataType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasDataType_Impl__obj > result = new AtlasDataType_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::_new( ::com::haxepunk::graphics::atlas::AtlasData data){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","_new",0xe6e7a50b,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_._new","com/haxepunk/graphics/atlas/AtlasData.hx",20,0xbc052818)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(20)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,_new,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::toAtlasData( ::com::haxepunk::graphics::atlas::AtlasData this1){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","toAtlasData",0x81ae5db0,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.toAtlasData","com/haxepunk/graphics/atlas/AtlasData.hx",21,0xbc052818)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(21)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,toAtlasData,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromString",0x1cd2d905,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromString","com/haxepunk/graphics/atlas/AtlasData.hx",24,0xbc052818)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(24)
	::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(24)
		if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(s))){
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(s);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			data1 = _g;
		}
		else{
			HX_STACK_LINE(24)
			::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(24)
			if (((bitmap != null()))){
				HX_STACK_LINE(24)
				::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(24)
				data1 = _g1;
			}
		}
		HX_STACK_LINE(24)
		data = data1;
	}
	HX_STACK_LINE(24)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromString,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromBitmapData( ::openfl::_v2::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromBitmapData",0x2f518fed,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromBitmapData","com/haxepunk/graphics/atlas/AtlasData.hx",27,0xbc052818)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(27)
	::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(27)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromBitmapData,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromAtlasData( ::com::haxepunk::graphics::atlas::AtlasData data){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromAtlasData",0x6ddc3961,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromAtlasData","com/haxepunk/graphics/atlas/AtlasData.hx",30,0xbc052818)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(30)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromAtlasData,return )


AtlasDataType_Impl__obj::AtlasDataType_Impl__obj()
{
}

Dynamic AtlasDataType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toAtlasData") ) { return toAtlasData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromAtlasData") ) { return fromAtlasData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasDataType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasDataType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toAtlasData"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromBitmapData"),
	HX_CSTRING("fromAtlasData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasDataType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasDataType_Impl__obj::__mClass,"__mClass");
};

#endif

Class AtlasDataType_Impl__obj::__mClass;

void AtlasDataType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_"), hx::TCanCast< AtlasDataType_Impl__obj> ,sStaticFields,sMemberFields,
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

void AtlasDataType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasData
