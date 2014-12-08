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
#ifndef INCLUDED_com_haxepunk__Graphic_TileType_Impl_
#include <com/haxepunk/_Graphic/TileType_Impl_.h>
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

Void TileType_Impl__obj::__construct()
{
	return null();
}

//TileType_Impl__obj::~TileType_Impl__obj() { }

Dynamic TileType_Impl__obj::__CreateEmpty() { return  new TileType_Impl__obj; }
hx::ObjectPtr< TileType_Impl__obj > TileType_Impl__obj::__new()
{  hx::ObjectPtr< TileType_Impl__obj > result = new TileType_Impl__obj();
	result->__construct();
	return result;}

Dynamic TileType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileType_Impl__obj > result = new TileType_Impl__obj();
	result->__construct();
	return result;}

::com::haxepunk::ds::Either TileType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","_new",0xa6b30a7b,"com.haxepunk._Graphic.TileType_Impl_._new","com/haxepunk/Graphic.hx",18,0xd2cb9a6f)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(18)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,_new,return )

::com::haxepunk::ds::Either TileType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","get_type",0x1e61385d,"com.haxepunk._Graphic.TileType_Impl_.get_type","com/haxepunk/Graphic.hx",20,0xd2cb9a6f)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromString( ::String tileset){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromString",0x701bf275,"com.haxepunk._Graphic.TileType_Impl_.fromString","com/haxepunk/Graphic.hx",23,0xd2cb9a6f)
	HX_STACK_ARG(tileset,"tileset")
	HX_STACK_LINE(23)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::String &tileset){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Graphic.hx",24,0xd2cb9a6f)
				{
					HX_STACK_LINE(24)
					::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(24)
					{
						HX_STACK_LINE(24)
						::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
						HX_STACK_LINE(24)
						if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(tileset))){
							HX_STACK_LINE(24)
							::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(tileset);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(24)
							data1 = _g;
						}
						else{
							HX_STACK_LINE(24)
							::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(tileset);		HX_STACK_VAR(bitmap,"bitmap");
							HX_STACK_LINE(24)
							if (((bitmap != null()))){
								HX_STACK_LINE(24)
								::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,tileset,null());		HX_STACK_VAR(_g1,"_g1");
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
				return null();
			}
		};
		HX_STACK_LINE(24)
		_g2 = _Function_2_1::Block(tileset);
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(24)
		return e;
	}
	else{
		HX_STACK_LINE(26)
		::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(tileset);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(26)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(26)
		return e;
	}
	HX_STACK_LINE(23)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromString,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromTileAtlas( ::com::haxepunk::graphics::atlas::TileAtlas atlas){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromTileAtlas",0x80778019,"com.haxepunk._Graphic.TileType_Impl_.fromTileAtlas","com/haxepunk/Graphic.hx",29,0xd2cb9a6f)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(29)
	::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(atlas);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(29)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromTileAtlas,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromBitmapData( ::openfl::_v2::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromBitmapData",0xdc7c215d,"com.haxepunk._Graphic.TileType_Impl_.fromBitmapData","com/haxepunk/Graphic.hx",32,0xd2cb9a6f)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(32)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(33)
		::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &bd){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Graphic.hx",33,0xd2cb9a6f)
				{
					HX_STACK_LINE(33)
					::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(33)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		_g = _Function_2_1::Block(bd);
		HX_STACK_LINE(33)
		::com::haxepunk::graphics::atlas::TileAtlas _g1 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g1);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(33)
		return e;
	}
	else{
		HX_STACK_LINE(35)
		::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(bd);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(35)
		return e;
	}
	HX_STACK_LINE(32)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromBitmapData,return )


TileType_Impl__obj::TileType_Impl__obj()
{
}

Dynamic TileType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TileType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("get_type"),
	HX_CSTRING("fromString"),
	HX_CSTRING("fromTileAtlas"),
	HX_CSTRING("fromBitmapData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileType_Impl__obj::__mClass,"__mClass");
};

#endif

Class TileType_Impl__obj::__mClass;

void TileType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk._Graphic.TileType_Impl_"), hx::TCanCast< TileType_Impl__obj> ,sStaticFields,sMemberFields,
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

void TileType_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace _Graphic
