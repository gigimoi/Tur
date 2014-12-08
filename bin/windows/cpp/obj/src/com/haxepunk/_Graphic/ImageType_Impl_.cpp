#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk__Graphic_ImageType_Impl_
#include <com/haxepunk/_Graphic/ImageType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
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
namespace _Graphic{

Void ImageType_Impl__obj::__construct()
{
	return null();
}

//ImageType_Impl__obj::~ImageType_Impl__obj() { }

Dynamic ImageType_Impl__obj::__CreateEmpty() { return  new ImageType_Impl__obj; }
hx::ObjectPtr< ImageType_Impl__obj > ImageType_Impl__obj::__new()
{  hx::ObjectPtr< ImageType_Impl__obj > result = new ImageType_Impl__obj();
	result->__construct();
	return result;}

Dynamic ImageType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageType_Impl__obj > result = new ImageType_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::ds::Either ImageType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","_new",0x1b4a0d46,"com.haxepunk._Graphic.ImageType_Impl_._new","com/haxepunk/Graphic.hx",47,0xd2cb9a6f)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(47)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,_new,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","get_type",0xd9f8fca8,"com.haxepunk._Graphic.ImageType_Impl_.get_type","com/haxepunk/Graphic.hx",49,0xd2cb9a6f)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(49)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromString",0x14659f80,"com.haxepunk._Graphic.ImageType_Impl_.fromString","com/haxepunk/Graphic.hx",52,0xd2cb9a6f)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(52)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(53)
		::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::String &s){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Graphic.hx",53,0xd2cb9a6f)
				{
					HX_STACK_LINE(53)
					::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
						HX_STACK_LINE(53)
						if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(s))){
							HX_STACK_LINE(53)
							::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(s);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(53)
							data1 = _g;
						}
						else{
							HX_STACK_LINE(53)
							::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(bitmap,"bitmap");
							HX_STACK_LINE(53)
							if (((bitmap != null()))){
								HX_STACK_LINE(53)
								::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(53)
								data1 = _g1;
							}
						}
						HX_STACK_LINE(53)
						data = data1;
					}
					HX_STACK_LINE(53)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		_g2 = _Function_2_1::Block(s);
		HX_STACK_LINE(53)
		::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(53)
		return e;
	}
	else{
		HX_STACK_LINE(55)
		::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(55)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(55)
		return e;
	}
	HX_STACK_LINE(52)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromString,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromTileAtlas( ::com::haxepunk::graphics::atlas::TileAtlas atlas){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromTileAtlas",0x50fd4bee,"com.haxepunk._Graphic.ImageType_Impl_.fromTileAtlas","com/haxepunk/Graphic.hx",58,0xd2cb9a6f)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(58)
	::com::haxepunk::graphics::atlas::AtlasRegion _g = atlas->getRegion((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(58)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromTileAtlas,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromAtlasRegion",0xd4f2fb90,"com.haxepunk._Graphic.ImageType_Impl_.fromAtlasRegion","com/haxepunk/Graphic.hx",61,0xd2cb9a6f)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(61)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(61)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromAtlasRegion,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromBitmapData( ::openfl::_v2::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromBitmapData",0x8108afe8,"com.haxepunk._Graphic.ImageType_Impl_.fromBitmapData","com/haxepunk/Graphic.hx",64,0xd2cb9a6f)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(64)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(65)
		::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &bd){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Graphic.hx",65,0xd2cb9a6f)
				{
					HX_STACK_LINE(65)
					::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(65)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		_g = _Function_2_1::Block(bd);
		HX_STACK_LINE(65)
		::com::haxepunk::graphics::atlas::AtlasRegion _g1 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g1);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(65)
		return e;
	}
	else{
		HX_STACK_LINE(67)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(bd);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(67)
		return e;
	}
	HX_STACK_LINE(64)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromBitmapData,return )


ImageType_Impl__obj::ImageType_Impl__obj()
{
}

Dynamic ImageType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromTileAtlas") ) { return fromTileAtlas_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAtlasRegion") ) { return fromAtlasRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("get_type"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromTileAtlas"),
	HX_CSTRING("fromAtlasRegion"),
	HX_CSTRING("fromBitmapData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageType_Impl__obj::__mClass,"__mClass");
};

#endif

Class ImageType_Impl__obj::__mClass;

void ImageType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk._Graphic.ImageType_Impl_"), hx::TCanCast< ImageType_Impl__obj> ,sStaticFields,sMemberFields,
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

void ImageType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace _Graphic
