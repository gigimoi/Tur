#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
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

Void Atlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","new",0x583a0430,"com.haxepunk.graphics.atlas.Atlas.new","com/haxepunk/graphics/atlas/Atlas.hx",28,0xbe7f1e22)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	_g = hx::TCast< com::haxepunk::graphics::atlas::AtlasData >::cast(source);
	HX_STACK_LINE(29)
	this->_data = _g;
}
;
	return null();
}

//Atlas_obj::~Atlas_obj() { }

Dynamic Atlas_obj::__CreateEmpty() { return  new Atlas_obj; }
hx::ObjectPtr< Atlas_obj > Atlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(source);
	return result;}

Dynamic Atlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(inArgs[0]);
	return result;}

int Atlas_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","get_width",0xe68b022d,"com.haxepunk.graphics.atlas.Atlas.get_width","com/haxepunk/graphics/atlas/Atlas.hx",19,0xbe7f1e22)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return this->_data->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_width,return )

int Atlas_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","get_height",0x89665de0,"com.haxepunk.graphics.atlas.Atlas.get_height","com/haxepunk/graphics/atlas/Atlas.hx",25,0xbe7f1e22)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->_data->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_height,return )

Void Atlas_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","destroy",0x9a5a88ca,"com.haxepunk.graphics.atlas.Atlas.destroy","com/haxepunk/graphics/atlas/Atlas.hx",48,0xbe7f1e22)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->_data->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,destroy,(void))

Void Atlas_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","prepareTile",0x215edc25,"com.haxepunk.graphics.atlas.Atlas.prepareTile","com/haxepunk/graphics/atlas/Atlas.hx",69,0xbe7f1e22)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(69)
		::com::haxepunk::graphics::atlas::AtlasData _this = this->_data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this))){
				HX_STACK_LINE(69)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
					HX_STACK_LINE(69)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(69)
					if (((_this1->_dataIndex != (int)0))){
						HX_STACK_LINE(69)
						::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(69)
						_this1->_tilesheet->drawTiles(_g,_this1->_data,false,_this1->_renderFlags,_this1->_dataIndex);
						HX_STACK_LINE(69)
						_this1->_dataIndex = (int)0;
					}
					HX_STACK_LINE(69)
					if (((_this1->_smoothDataIndex != (int)0))){
						HX_STACK_LINE(69)
						::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(69)
						_this1->_tilesheet->drawTiles(_g1,_this1->_smoothData,true,_this1->_renderFlags,_this1->_smoothDataIndex);
						HX_STACK_LINE(69)
						_this1->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(69)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
			}
			HX_STACK_LINE(69)
			_this;
		}
		HX_STACK_LINE(69)
		if (((smooth1 == null()))){
			HX_STACK_LINE(69)
			smooth1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
		}
		HX_STACK_LINE(69)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(69)
		if ((smooth1)){
			HX_STACK_LINE(69)
			_data = _this->_smoothData;
		}
		else{
			HX_STACK_LINE(69)
			_data = _this->_data;
		}
		HX_STACK_LINE(69)
		int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(69)
		if ((smooth1)){
			HX_STACK_LINE(69)
			_dataIndex = _this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(69)
			_dataIndex = _this->_dataIndex;
		}
		HX_STACK_LINE(69)
		int _g2 = (_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(69)
		_data[_g2] = x;
		HX_STACK_LINE(69)
		int _g3 = (_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(69)
		_data[_g3] = y;
		HX_STACK_LINE(69)
		int _g4 = (_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(69)
		_data[_g4] = tile;
		HX_STACK_LINE(69)
		if (((angle == (int)0))){
			HX_STACK_LINE(69)
			int _g5 = (_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(69)
			_data[_g5] = scaleX;
			HX_STACK_LINE(69)
			int _g6 = (_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(69)
			_data[_g6] = (int)0;
			HX_STACK_LINE(69)
			int _g7 = (_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(69)
			_data[_g7] = (int)0;
			HX_STACK_LINE(69)
			int _g8 = (_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(69)
			_data[_g8] = scaleY;
		}
		else{
			HX_STACK_LINE(69)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(69)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(69)
			int _g9 = (_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(69)
			_data[_g9] = (cos * scaleX);
			HX_STACK_LINE(69)
			int _g10 = (_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(69)
			_data[_g10] = (-(sin) * scaleY);
			HX_STACK_LINE(69)
			int _g11 = (_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(69)
			_data[_g11] = (sin * scaleX);
			HX_STACK_LINE(69)
			int _g12 = (_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(69)
			_data[_g12] = (cos * scaleY);
		}
		HX_STACK_LINE(69)
		if ((_this->_flagRGB)){
			HX_STACK_LINE(69)
			int _g13 = (_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(69)
			_data[_g13] = red;
			HX_STACK_LINE(69)
			int _g14 = (_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(69)
			_data[_g14] = green;
			HX_STACK_LINE(69)
			int _g15 = (_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(69)
			_data[_g15] = blue;
		}
		HX_STACK_LINE(69)
		if ((_this->_flagAlpha)){
			HX_STACK_LINE(69)
			int _g16 = (_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(69)
			_data[_g16] = alpha;
		}
		HX_STACK_LINE(69)
		if ((smooth1)){
			HX_STACK_LINE(69)
			_this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(69)
			_this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(Atlas_obj,prepareTile,(void))

bool Atlas_obj::smooth;

::com::haxepunk::graphics::atlas::AtlasRegion Atlas_obj::loadImageAsRegion( ::com::haxepunk::graphics::atlas::AtlasData source){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","loadImageAsRegion",0x1e6b0fcb,"com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion","com/haxepunk/graphics/atlas/Atlas.hx",38,0xbe7f1e22)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(39)
	::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(39)
	data = hx::TCast< com::haxepunk::graphics::atlas::AtlasData >::cast(source);
	HX_STACK_LINE(40)
	::openfl::_v2::geom::Rectangle rect = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,data->width,data->height);		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(40)
	::openfl::_v2::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(40)
	data->_rects->push(r);
	HX_STACK_LINE(40)
	int tileIndex = data->_tilesheet->addTileRect(r,null());		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(40)
	return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(data,tileIndex,r);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,loadImageAsRegion,return )


Atlas_obj::Atlas_obj()
{
}

void Atlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Atlas);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_END_CLASS();
}

void Atlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
}

Dynamic Atlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageAsRegion") ) { return loadImageAsRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Atlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Atlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("smooth"),
	HX_CSTRING("loadImageAsRegion"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasData*/ ,(int)offsetof(Atlas_obj,_data),HX_CSTRING("_data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("destroy"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("_data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

#endif

Class Atlas_obj::__mClass;

void Atlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.Atlas"), hx::TCanCast< Atlas_obj> ,sStaticFields,sMemberFields,
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

void Atlas_obj::__boot()
{
	smooth= false;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
