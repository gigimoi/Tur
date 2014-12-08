#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void TileAtlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","new",0xeb2ef8a2,"com.haxepunk.graphics.atlas.TileAtlas.new","com/haxepunk/graphics/atlas/TileAtlas.hx",16,0x80d316f0)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(17)
	super::__construct(source);
	HX_STACK_LINE(18)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->_regions = _g;
}
;
	return null();
}

//TileAtlas_obj::~TileAtlas_obj() { }

Dynamic TileAtlas_obj::__CreateEmpty() { return  new TileAtlas_obj; }
hx::ObjectPtr< TileAtlas_obj > TileAtlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< TileAtlas_obj > result = new TileAtlas_obj();
	result->__construct(source);
	return result;}

Dynamic TileAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileAtlas_obj > result = new TileAtlas_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::haxepunk::graphics::atlas::AtlasRegion TileAtlas_obj::getRegion( int index){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","getRegion",0x91150fec,"com.haxepunk.graphics.atlas.TileAtlas.getRegion","com/haxepunk/graphics/atlas/TileAtlas.hx",29,0x80d316f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(29)
	return this->_regions->__get(index).StaticCast< ::com::haxepunk::graphics::atlas::AtlasRegion >();
}


HX_DEFINE_DYNAMIC_FUNC1(TileAtlas_obj,getRegion,return )

Void TileAtlas_obj::prepare( int tileWidth,int tileHeight,hx::Null< int >  __o_tileMarginWidth,hx::Null< int >  __o_tileMarginHeight){
int tileMarginWidth = __o_tileMarginWidth.Default(0);
int tileMarginHeight = __o_tileMarginHeight.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","prepare",0x33df02c9,"com.haxepunk.graphics.atlas.TileAtlas.prepare","com/haxepunk/graphics/atlas/TileAtlas.hx",40,0x80d316f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileWidth,"tileWidth")
	HX_STACK_ARG(tileHeight,"tileHeight")
	HX_STACK_ARG(tileMarginWidth,"tileMarginWidth")
	HX_STACK_ARG(tileMarginHeight,"tileMarginHeight")
{
		HX_STACK_LINE(41)
		if (((this->_regions->length > (int)0))){
			HX_STACK_LINE(41)
			return null();
		}
		HX_STACK_LINE(42)
		int cols = ::Math_obj::floor((Float(this->_data->width) / Float(tileWidth)));		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(43)
		int rows = ::Math_obj::floor((Float(this->_data->height) / Float(tileHeight)));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(45)
		::com::haxepunk::HXP_obj::rect->width = tileWidth;
		HX_STACK_LINE(46)
		::com::haxepunk::HXP_obj::rect->height = tileHeight;
		HX_STACK_LINE(48)
		Float _g = ::com::haxepunk::HXP_obj::point->y = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		::com::haxepunk::HXP_obj::point->x = _g;
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g1 < rows))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(52)
				::com::haxepunk::HXP_obj::rect->y = (y * ((tileHeight + tileMarginHeight)));
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(54)
					while((true)){
						HX_STACK_LINE(54)
						if ((!(((_g11 < cols))))){
							HX_STACK_LINE(54)
							break;
						}
						HX_STACK_LINE(54)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(56)
						::com::haxepunk::HXP_obj::rect->x = (x * ((tileWidth + tileMarginWidth)));
						HX_STACK_LINE(58)
						::com::haxepunk::graphics::atlas::AtlasRegion _g12;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							::com::haxepunk::graphics::atlas::AtlasData _this = this->_data;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(58)
							::openfl::_v2::geom::Rectangle r = ::com::haxepunk::HXP_obj::rect->clone();		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(58)
							_this->_rects->push(r);
							HX_STACK_LINE(58)
							int tileIndex = _this->_tilesheet->addTileRect(r,null());		HX_STACK_VAR(tileIndex,"tileIndex");
							HX_STACK_LINE(58)
							_g12 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(_this,tileIndex,r);
						}
						HX_STACK_LINE(58)
						this->_regions->push(_g12);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileAtlas_obj,prepare,(void))


TileAtlas_obj::TileAtlas_obj()
{
}

void TileAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileAtlas);
	HX_MARK_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TileAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { return _regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { _regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_regions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileAtlas_obj,_regions),HX_CSTRING("_regions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getRegion"),
	HX_CSTRING("prepare"),
	HX_CSTRING("_regions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

#endif

Class TileAtlas_obj::__mClass;

void TileAtlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.TileAtlas"), hx::TCanCast< TileAtlas_obj> ,sStaticFields,sMemberFields,
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

void TileAtlas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
