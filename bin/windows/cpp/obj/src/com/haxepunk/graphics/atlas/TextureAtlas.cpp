#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas
#include <com/haxepunk/graphics/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
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

Void TextureAtlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","new",0xb169434f,"com.haxepunk.graphics.atlas.TextureAtlas.new","com/haxepunk/graphics/atlas/TextureAtlas.hx",13,0x6d578e5f)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(14)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->_regions = _g;
	HX_STACK_LINE(16)
	super::__construct(source);
}
;
	return null();
}

//TextureAtlas_obj::~TextureAtlas_obj() { }

Dynamic TextureAtlas_obj::__CreateEmpty() { return  new TextureAtlas_obj; }
hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(source);
	return result;}

Dynamic TextureAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::haxepunk::graphics::atlas::AtlasRegion TextureAtlas_obj::getRegion( ::String name){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","getRegion",0x0d241a59,"com.haxepunk.graphics.atlas.TextureAtlas.getRegion","com/haxepunk/graphics/atlas/TextureAtlas.hx",52,0x6d578e5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(53)
	if ((this->_regions->exists(name))){
		HX_STACK_LINE(54)
		return this->_regions->get(name);
	}
	HX_STACK_LINE(56)
	HX_STACK_DO_THROW(((HX_CSTRING("Region has not been defined yet \"") + name) + HX_CSTRING("\".")));
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getRegion,return )

::com::haxepunk::graphics::atlas::AtlasRegion TextureAtlas_obj::defineRegion( ::String name,::openfl::_v2::geom::Rectangle rect,::openfl::_v2::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","defineRegion",0x8d2f46c0,"com.haxepunk.graphics.atlas.TextureAtlas.defineRegion","com/haxepunk/graphics/atlas/TextureAtlas.hx",68,0x6d578e5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(69)
	::com::haxepunk::graphics::atlas::AtlasRegion region;		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::com::haxepunk::graphics::atlas::AtlasData _this = this->_data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		::openfl::_v2::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(69)
		_this->_rects->push(r);
		HX_STACK_LINE(69)
		int tileIndex = _this->_tilesheet->addTileRect(r,null());		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(69)
		region = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(_this,tileIndex,r);
	}
	HX_STACK_LINE(70)
	this->_regions->set(name,region);
	HX_STACK_LINE(71)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC3(TextureAtlas_obj,defineRegion,return )

::com::haxepunk::graphics::atlas::TextureAtlas TextureAtlas_obj::loadTexturePacker( ::String file){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","loadTexturePacker",0x8a4e17ea,"com.haxepunk.graphics.atlas.TextureAtlas.loadTexturePacker","com/haxepunk/graphics/atlas/TextureAtlas.hx",26,0x6d578e5f)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(27)
	::String _g = ::openfl::_v2::Assets_obj::getText(file);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	::Xml xml = ::Xml_obj::parse(_g);		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(28)
	::Xml root = xml->firstElement();		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String s = root->get(HX_CSTRING("imagePath"));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(29)
				if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(s))){
					HX_STACK_LINE(29)
					::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(s);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(29)
					data1 = _g1;
				}
				else{
					HX_STACK_LINE(29)
					::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(29)
					if (((bitmap != null()))){
						HX_STACK_LINE(29)
						::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(29)
						data1 = _g2;
					}
				}
				HX_STACK_LINE(29)
				data = data1;
			}
			HX_STACK_LINE(29)
			_g3 = data;
		}
	}
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::TextureAtlas atlas = ::com::haxepunk::graphics::atlas::TextureAtlas_obj::__new(_g3);		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(30)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(root->elements());  __it->hasNext(); ){
		::Xml sprite = __it->next();
		{
			HX_STACK_LINE(32)
			::String _g4 = sprite->get(HX_CSTRING("x"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(32)
			Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(32)
			::com::haxepunk::HXP_obj::rect->x = _g5;
			HX_STACK_LINE(33)
			::String _g6 = sprite->get(HX_CSTRING("y"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(33)
			Dynamic _g7 = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(33)
			::com::haxepunk::HXP_obj::rect->y = _g7;
			HX_STACK_LINE(34)
			if ((sprite->exists(HX_CSTRING("w")))){
				HX_STACK_LINE(34)
				::String _g8 = sprite->get(HX_CSTRING("w"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(34)
				Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(34)
				::com::haxepunk::HXP_obj::rect->width = _g9;
			}
			HX_STACK_LINE(35)
			if ((sprite->exists(HX_CSTRING("h")))){
				HX_STACK_LINE(35)
				::String _g10 = sprite->get(HX_CSTRING("h"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(35)
				Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(35)
				::com::haxepunk::HXP_obj::rect->height = _g11;
			}
			HX_STACK_LINE(38)
			::String _g12 = sprite->get(HX_CSTRING("n"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(38)
			::com::haxepunk::graphics::atlas::AtlasRegion region = atlas->defineRegion(_g12,::com::haxepunk::HXP_obj::rect,null());		HX_STACK_VAR(region,"region");
			struct _Function_2_1{
				inline static bool Block( ::Xml &sprite){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/atlas/TextureAtlas.hx",40,0x6d578e5f)
					{
						HX_STACK_LINE(40)
						::String _g13 = sprite->get(HX_CSTRING("r"));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(40)
						return (_g13 == HX_CSTRING("y"));
					}
					return null();
				}
			};
			HX_STACK_LINE(40)
			if (((  ((sprite->exists(HX_CSTRING("r")))) ? bool(_Function_2_1::Block(sprite)) : bool(false) ))){
				HX_STACK_LINE(40)
				region->rotated = true;
			}
		}
;
	}
	HX_STACK_LINE(42)
	return atlas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,loadTexturePacker,return )


TextureAtlas_obj::TextureAtlas_obj()
{
}

void TextureAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlas);
	HX_MARK_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { return _regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defineRegion") ) { return defineRegion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadTexturePacker") ) { return loadTexturePacker_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { _regions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_regions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("loadTexturePacker"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TextureAtlas_obj,_regions),HX_CSTRING("_regions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getRegion"),
	HX_CSTRING("defineRegion"),
	HX_CSTRING("_regions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

#endif

Class TextureAtlas_obj::__mClass;

void TextureAtlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.TextureAtlas"), hx::TCanCast< TextureAtlas_obj> ,sStaticFields,sMemberFields,
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

void TextureAtlas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
