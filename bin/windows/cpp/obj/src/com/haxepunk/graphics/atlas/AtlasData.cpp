#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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

Void AtlasData_obj::__construct(::openfl::_v2::display::BitmapData bd,::String name,Dynamic flags)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","new",0x7bcbea7a,"com.haxepunk.graphics.atlas.AtlasData.new","com/haxepunk/graphics/atlas/AtlasData.hx",34,0xbc052818)
HX_STACK_THIS(this)
HX_STACK_ARG(bd,"bd")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(flags,"flags")
{
	HX_STACK_LINE(411)
	this->_layerIndex = (int)0;
	HX_STACK_LINE(61)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	this->_rects = _g;
	HX_STACK_LINE(62)
	Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	this->_data = _g1;
	HX_STACK_LINE(63)
	Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(63)
	this->_smoothData = _g2;
	HX_STACK_LINE(64)
	int _g3 = this->_smoothDataIndex = (int)0;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(64)
	this->_dataIndex = _g3;
	HX_STACK_LINE(66)
	::openfl::_v2::display::Tilesheet _g4 = ::openfl::_v2::display::Tilesheet_obj::__new(bd);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(66)
	this->_tilesheet = _g4;
	HX_STACK_LINE(68)
	if (((name == null()))){
		HX_STACK_LINE(70)
		int _g5 = (::com::haxepunk::graphics::atlas::AtlasData_obj::_uniqueId)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(70)
		::String _g6 = (HX_CSTRING("bitmapData_") + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(70)
		name = _g6;
	}
	HX_STACK_LINE(72)
	this->_name = name;
	HX_STACK_LINE(74)
	if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(this->_name))){
		HX_STACK_LINE(76)
		HX_STACK_DO_THROW(HX_CSTRING("There should never be a duplicate AtlasData instance!"));
	}
	else{
		HX_STACK_LINE(80)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(this->_name,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(83)
	this->_renderFlags = (int)28;
	HX_STACK_LINE(84)
	this->_flagAlpha = true;
	HX_STACK_LINE(85)
	this->_flagRGB = true;
	HX_STACK_LINE(87)
	int _g7 = bd->get_width();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(87)
	this->width = _g7;
	HX_STACK_LINE(88)
	int _g8 = bd->get_height();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(88)
	this->height = _g8;
}
;
	return null();
}

//AtlasData_obj::~AtlasData_obj() { }

Dynamic AtlasData_obj::__CreateEmpty() { return  new AtlasData_obj; }
hx::ObjectPtr< AtlasData_obj > AtlasData_obj::__new(::openfl::_v2::display::BitmapData bd,::String name,Dynamic flags)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(bd,name,flags);
	return result;}

Dynamic AtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String AtlasData_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","toString",0xd69fd852,"com.haxepunk.graphics.atlas.AtlasData.toString","com/haxepunk/graphics/atlas/AtlasData.hx",120,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,toString,return )

Void AtlasData_obj::reload( ::openfl::_v2::display::BitmapData bd){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","reload",0x4423057f,"com.haxepunk.graphics.atlas.AtlasData.reload","com/haxepunk/graphics/atlas/AtlasData.hx",127,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(128)
		::com::haxepunk::HXP_obj::overwriteBitmapCache(this->_name,bd);
		HX_STACK_LINE(129)
		::openfl::_v2::display::Tilesheet _g = ::openfl::_v2::display::Tilesheet_obj::__new(bd);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		this->_tilesheet = _g;
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(131)
			Array< ::Dynamic > _g11 = this->_rects;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(131)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(131)
				::openfl::_v2::geom::Rectangle r = _g11->__get(_g1).StaticCast< ::openfl::_v2::geom::Rectangle >();		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(131)
				++(_g1);
				HX_STACK_LINE(133)
				this->_tilesheet->addTileRect(r,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,reload,(void))

Void AtlasData_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","destroy",0x1f7e5c14,"com.haxepunk.graphics.atlas.AtlasData.destroy","com/haxepunk/graphics/atlas/AtlasData.hx",167,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		::com::haxepunk::HXP_obj::removeBitmap(this->_name);
		HX_STACK_LINE(169)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->remove(this->_name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroy,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasData_obj::createRegion( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","createRegion",0x9026d3b6,"com.haxepunk.graphics.atlas.AtlasData.createRegion","com/haxepunk/graphics/atlas/AtlasData.hx",191,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(192)
	::openfl::_v2::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(193)
	this->_rects->push(r);
	HX_STACK_LINE(194)
	int tileIndex = this->_tilesheet->addTileRect(r,null());		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(195)
	return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),tileIndex,r);
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,createRegion,return )

Void AtlasData_obj::flush( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","flush",0x5fe1b75e,"com.haxepunk.graphics.atlas.AtlasData.flush","com/haxepunk/graphics/atlas/AtlasData.hx",202,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		if (((this->_dataIndex != (int)0))){
			HX_STACK_LINE(205)
			::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			this->_tilesheet->drawTiles(_g,this->_data,false,this->_renderFlags,this->_dataIndex);
			HX_STACK_LINE(206)
			this->_dataIndex = (int)0;
		}
		HX_STACK_LINE(209)
		if (((this->_smoothDataIndex != (int)0))){
			HX_STACK_LINE(211)
			::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(211)
			this->_tilesheet->drawTiles(_g1,this->_smoothData,true,this->_renderFlags,this->_smoothDataIndex);
			HX_STACK_LINE(212)
			this->_smoothDataIndex = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,flush,(void))

Void AtlasData_obj::prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","prepareTileMatrix",0xe2774410,"com.haxepunk.graphics.atlas.AtlasData.prepareTileMatrix","com/haxepunk/graphics/atlas/AtlasData.hx",234,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(235)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
					HX_STACK_LINE(235)
					::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(235)
					if (((_this->_dataIndex != (int)0))){
						HX_STACK_LINE(235)
						::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(235)
						_this->_tilesheet->drawTiles(_g,_this->_data,false,_this->_renderFlags,_this->_dataIndex);
						HX_STACK_LINE(235)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(235)
					if (((_this->_smoothDataIndex != (int)0))){
						HX_STACK_LINE(235)
						::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(235)
						_this->_tilesheet->drawTiles(_g1,_this->_smoothData,true,_this->_renderFlags,_this->_smoothDataIndex);
						HX_STACK_LINE(235)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(235)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(235)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(237)
		if (((smooth == null()))){
			HX_STACK_LINE(237)
			smooth = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
		}
		HX_STACK_LINE(239)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(239)
		if ((smooth)){
			HX_STACK_LINE(239)
			_data = this->_smoothData;
		}
		else{
			HX_STACK_LINE(239)
			_data = this->_data;
		}
		HX_STACK_LINE(240)
		int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(240)
		if ((smooth)){
			HX_STACK_LINE(240)
			_dataIndex = this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(240)
			_dataIndex = this->_dataIndex;
		}
		HX_STACK_LINE(242)
		int _g2 = (_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(242)
		_data[_g2] = tx;
		HX_STACK_LINE(243)
		int _g3 = (_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(243)
		_data[_g3] = ty;
		HX_STACK_LINE(244)
		int _g4 = (_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(244)
		_data[_g4] = tile;
		HX_STACK_LINE(247)
		int _g5 = (_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(247)
		_data[_g5] = a;
		HX_STACK_LINE(248)
		int _g6 = (_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(248)
		_data[_g6] = b;
		HX_STACK_LINE(249)
		int _g7 = (_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(249)
		_data[_g7] = c;
		HX_STACK_LINE(250)
		int _g8 = (_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(250)
		_data[_g8] = d;
		HX_STACK_LINE(253)
		if ((this->_flagRGB)){
			HX_STACK_LINE(255)
			int _g9 = (_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(255)
			_data[_g9] = red;
			HX_STACK_LINE(256)
			int _g10 = (_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(256)
			_data[_g10] = green;
			HX_STACK_LINE(257)
			int _g11 = (_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(257)
			_data[_g11] = blue;
		}
		HX_STACK_LINE(259)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(261)
			int _g12 = (_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(261)
			_data[_g12] = alpha;
		}
		HX_STACK_LINE(264)
		if ((smooth)){
			HX_STACK_LINE(266)
			this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(270)
			this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC13(AtlasData_obj,prepareTileMatrix,(void))

Void AtlasData_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","prepareTile",0x9c0f1c6f,"com.haxepunk.graphics.atlas.AtlasData.prepareTile","com/haxepunk/graphics/atlas/AtlasData.hx",291,0xbc052818)
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
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(292)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
					HX_STACK_LINE(292)
					::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(292)
					if (((_this->_dataIndex != (int)0))){
						HX_STACK_LINE(292)
						::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(292)
						_this->_tilesheet->drawTiles(_g,_this->_data,false,_this->_renderFlags,_this->_dataIndex);
						HX_STACK_LINE(292)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(292)
					if (((_this->_smoothDataIndex != (int)0))){
						HX_STACK_LINE(292)
						::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(292)
						_this->_tilesheet->drawTiles(_g1,_this->_smoothData,true,_this->_renderFlags,_this->_smoothDataIndex);
						HX_STACK_LINE(292)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(292)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(292)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(294)
		if (((smooth == null()))){
			HX_STACK_LINE(294)
			smooth = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
		}
		HX_STACK_LINE(296)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(296)
		if ((smooth)){
			HX_STACK_LINE(296)
			_data = this->_smoothData;
		}
		else{
			HX_STACK_LINE(296)
			_data = this->_data;
		}
		HX_STACK_LINE(297)
		int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(297)
		if ((smooth)){
			HX_STACK_LINE(297)
			_dataIndex = this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(297)
			_dataIndex = this->_dataIndex;
		}
		HX_STACK_LINE(299)
		int _g2 = (_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(299)
		_data[_g2] = x;
		HX_STACK_LINE(300)
		int _g3 = (_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(300)
		_data[_g3] = y;
		HX_STACK_LINE(301)
		int _g4 = (_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(301)
		_data[_g4] = tile;
		HX_STACK_LINE(304)
		if (((angle == (int)0))){
			HX_STACK_LINE(307)
			int _g5 = (_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(307)
			_data[_g5] = scaleX;
			HX_STACK_LINE(308)
			int _g6 = (_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(308)
			_data[_g6] = (int)0;
			HX_STACK_LINE(309)
			int _g7 = (_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(309)
			_data[_g7] = (int)0;
			HX_STACK_LINE(310)
			int _g8 = (_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(310)
			_data[_g8] = scaleY;
		}
		else{
			HX_STACK_LINE(314)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(315)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(316)
			int _g9 = (_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(316)
			_data[_g9] = (cos * scaleX);
			HX_STACK_LINE(317)
			int _g10 = (_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(317)
			_data[_g10] = (-(sin) * scaleY);
			HX_STACK_LINE(318)
			int _g11 = (_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(318)
			_data[_g11] = (sin * scaleX);
			HX_STACK_LINE(319)
			int _g12 = (_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(319)
			_data[_g12] = (cos * scaleY);
		}
		HX_STACK_LINE(322)
		if ((this->_flagRGB)){
			HX_STACK_LINE(324)
			int _g13 = (_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(324)
			_data[_g13] = red;
			HX_STACK_LINE(325)
			int _g14 = (_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(325)
			_data[_g14] = green;
			HX_STACK_LINE(326)
			int _g15 = (_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(326)
			_data[_g15] = blue;
		}
		HX_STACK_LINE(328)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(330)
			int _g16 = (_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(330)
			_data[_g16] = alpha;
		}
		HX_STACK_LINE(333)
		if ((smooth)){
			HX_STACK_LINE(335)
			this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(339)
			this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasData_obj,prepareTile,(void))

bool AtlasData_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_alpha",0x31f5ad4f,"com.haxepunk.graphics.atlas.AtlasData.get_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",348,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	return (((int(this->_renderFlags) & int((int)8))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_alpha,return )

bool AtlasData_obj::set_alpha( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_alpha",0x1546995b,"com.haxepunk.graphics.atlas.AtlasData.set_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",350,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(351)
	if ((value)){
		HX_STACK_LINE(351)
		hx::OrEq(this->_renderFlags,(int)8);
	}
	else{
		HX_STACK_LINE(352)
		hx::AndEq(this->_renderFlags,(int)-9);
	}
	HX_STACK_LINE(353)
	this->_flagAlpha = value;
	HX_STACK_LINE(354)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_alpha,return )

bool AtlasData_obj::get_rgb( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_rgb",0x21c3d2be,"com.haxepunk.graphics.atlas.AtlasData.get_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",362,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(362)
	return (((int(this->_renderFlags) & int((int)4))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_rgb,return )

bool AtlasData_obj::set_rgb( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_rgb",0x14c563ca,"com.haxepunk.graphics.atlas.AtlasData.set_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",364,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(365)
	if ((value)){
		HX_STACK_LINE(365)
		hx::OrEq(this->_renderFlags,(int)4);
	}
	else{
		HX_STACK_LINE(366)
		hx::AndEq(this->_renderFlags,(int)-5);
	}
	HX_STACK_LINE(367)
	this->_flagRGB = value;
	HX_STACK_LINE(368)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_rgb,return )

int AtlasData_obj::get_blend( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_blend",0xc553ee42,"com.haxepunk.graphics.atlas.AtlasData.get_blend","com/haxepunk/graphics/atlas/AtlasData.hx",377,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	if (((((int(this->_renderFlags) & int((int)0))) != (int)0))){
		HX_STACK_LINE(378)
		return (int)0;
	}
	else{
		HX_STACK_LINE(379)
		if (((((int(this->_renderFlags) & int((int)65536))) != (int)0))){
			HX_STACK_LINE(380)
			return (int)65536;
		}
		else{
			HX_STACK_LINE(382)
			if (((((int(this->_renderFlags) & int((int)131072))) != (int)0))){
				HX_STACK_LINE(383)
				return (int)131072;
			}
			else{
				HX_STACK_LINE(384)
				if (((((int(this->_renderFlags) & int((int)262144))) != (int)0))){
					HX_STACK_LINE(385)
					return (int)262144;
				}
				else{
					HX_STACK_LINE(388)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(377)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_blend,return )

int AtlasData_obj::set_blend( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_blend",0xa8a4da4e,"com.haxepunk.graphics.atlas.AtlasData.set_blend","com/haxepunk/graphics/atlas/AtlasData.hx",391,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(393)
	hx::AndEq(this->_renderFlags,(int)-458753);
	HX_STACK_LINE(396)
	if (((bool((bool((bool((value == (int)65536)) || bool((value == (int)131072)))) || bool((value == (int)262144)))) || bool((value == (int)0))))){
		HX_STACK_LINE(402)
		hx::OrEq(this->_renderFlags,value);
		HX_STACK_LINE(403)
		return value;
	}
	HX_STACK_LINE(405)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_blend,return )

int AtlasData_obj::BLEND_NONE;

int AtlasData_obj::BLEND_ADD;

int AtlasData_obj::BLEND_NORMAL;

int AtlasData_obj::BLEND_MULTIPLY;

int AtlasData_obj::BLEND_SCREEN;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::getAtlasDataByName( ::String name,hx::Null< bool >  __o_create){
bool create = __o_create.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","getAtlasDataByName",0xd288e1e7,"com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName","com/haxepunk/graphics/atlas/AtlasData.hx",97,0xbc052818)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(create,"create")
{
		HX_STACK_LINE(98)
		::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(99)
		if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(name))){
			HX_STACK_LINE(101)
			::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(name);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			data = _g;
		}
		else{
			HX_STACK_LINE(103)
			if ((create)){
				HX_STACK_LINE(105)
				::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(name);		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(106)
				if (((bitmap != null()))){
					HX_STACK_LINE(108)
					::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,name,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(108)
					data = _g1;
				}
			}
		}
		HX_STACK_LINE(111)
		return data;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,getAtlasDataByName,return )

Void AtlasData_obj::startScene( ::com::haxepunk::Scene scene){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","startScene",0xe7276eb0,"com.haxepunk.graphics.atlas.AtlasData.startScene","com/haxepunk/graphics/atlas/AtlasData.hx",143,0xbc052818)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_LINE(144)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = scene;
		HX_STACK_LINE(145)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics()->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,startScene,(void))

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::active;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::set_active( ::com::haxepunk::graphics::atlas::AtlasData value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_active",0x5c8a0d29,"com.haxepunk.graphics.atlas.AtlasData.set_active","com/haxepunk/graphics/atlas/AtlasData.hx",153,0xbc052818)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != value))){
		HX_STACK_LINE(156)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
			HX_STACK_LINE(157)
			::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(157)
			if (((_this->_dataIndex != (int)0))){
				HX_STACK_LINE(157)
				::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				_this->_tilesheet->drawTiles(_g,_this->_data,false,_this->_renderFlags,_this->_dataIndex);
				HX_STACK_LINE(157)
				_this->_dataIndex = (int)0;
			}
			HX_STACK_LINE(157)
			if (((_this->_smoothDataIndex != (int)0))){
				HX_STACK_LINE(157)
				::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				_this->_tilesheet->drawTiles(_g1,_this->_smoothData,true,_this->_renderFlags,_this->_smoothDataIndex);
				HX_STACK_LINE(157)
				_this->_smoothDataIndex = (int)0;
			}
		}
		HX_STACK_LINE(158)
		::com::haxepunk::graphics::atlas::AtlasData_obj::active = value;
	}
	HX_STACK_LINE(160)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_active,return )

Void AtlasData_obj::destroyAll( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","destroyAll",0x004d196d,"com.haxepunk.graphics.atlas.AtlasData.destroyAll","com/haxepunk/graphics/atlas/AtlasData.hx",177,0xbc052818)
		HX_STACK_LINE(177)
		for(::cpp::FastIterator_obj< ::com::haxepunk::graphics::atlas::AtlasData > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::graphics::atlas::AtlasData >(::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->iterator());  __it->hasNext(); ){
			::com::haxepunk::graphics::atlas::AtlasData atlas = __it->next();
			atlas->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroyAll,(void))

::com::haxepunk::Scene AtlasData_obj::_scene;

::haxe::ds::StringMap AtlasData_obj::_dataPool;

int AtlasData_obj::_uniqueId;


AtlasData_obj::AtlasData_obj()
{
}

void AtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasData);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_MARK_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_MARK_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_MARK_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_MARK_MEMBER_NAME(_smoothData,"_smoothData");
	HX_MARK_MEMBER_NAME(_smoothDataIndex,"_smoothDataIndex");
	HX_MARK_MEMBER_NAME(_rects,"_rects");
	HX_MARK_END_CLASS();
}

void AtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_VISIT_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_VISIT_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_VISIT_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_VISIT_MEMBER_NAME(_smoothData,"_smoothData");
	HX_VISIT_MEMBER_NAME(_smoothDataIndex,"_smoothDataIndex");
	HX_VISIT_MEMBER_NAME(_rects,"_rects");
}

Dynamic AtlasData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return get_rgb(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		if (HX_FIELD_EQ(inName,"_rects") ) { return _rects; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rgb") ) { return set_rgb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { return _flagRGB; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { return _dataPool; }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { return _uniqueId; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScene") ) { return startScene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyAll") ) { return destroyAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { return _flagAlpha; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { return _dataIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { return _layerIndex; }
		if (HX_FIELD_EQ(inName,"_smoothData") ) { return _smoothData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { return _renderFlags; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_smoothDataIndex") ) { return _smoothDataIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareTileMatrix") ) { return prepareTileMatrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAtlasDataByName") ) { return getAtlasDataByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return set_rgb(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp) return set_active(inValue);active=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rects") ) { _rects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { _flagRGB=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { _dataPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { _uniqueId=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { _flagAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::_v2::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { _dataIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { _layerIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smoothData") ) { _smoothData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { _renderFlags=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_smoothDataIndex") ) { _smoothDataIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("rgb"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_layerIndex"));
	outFields->push(HX_CSTRING("_renderFlags"));
	outFields->push(HX_CSTRING("_flagRGB"));
	outFields->push(HX_CSTRING("_flagAlpha"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_dataIndex"));
	outFields->push(HX_CSTRING("_smoothData"));
	outFields->push(HX_CSTRING("_smoothDataIndex"));
	outFields->push(HX_CSTRING("_rects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BLEND_NONE"),
	HX_CSTRING("BLEND_ADD"),
	HX_CSTRING("BLEND_NORMAL"),
	HX_CSTRING("BLEND_MULTIPLY"),
	HX_CSTRING("BLEND_SCREEN"),
	HX_CSTRING("getAtlasDataByName"),
	HX_CSTRING("startScene"),
	HX_CSTRING("active"),
	HX_CSTRING("set_active"),
	HX_CSTRING("destroyAll"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_dataPool"),
	HX_CSTRING("_uniqueId"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AtlasData_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,height),HX_CSTRING("height")},
	{hx::fsString,(int)offsetof(AtlasData_obj,_name),HX_CSTRING("_name")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_layerIndex),HX_CSTRING("_layerIndex")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_renderFlags),HX_CSTRING("_renderFlags")},
	{hx::fsBool,(int)offsetof(AtlasData_obj,_flagRGB),HX_CSTRING("_flagRGB")},
	{hx::fsBool,(int)offsetof(AtlasData_obj,_flagAlpha),HX_CSTRING("_flagAlpha")},
	{hx::fsObject /*::openfl::_v2::display::Tilesheet*/ ,(int)offsetof(AtlasData_obj,_tilesheet),HX_CSTRING("_tilesheet")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AtlasData_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_dataIndex),HX_CSTRING("_dataIndex")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AtlasData_obj,_smoothData),HX_CSTRING("_smoothData")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_smoothDataIndex),HX_CSTRING("_smoothDataIndex")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AtlasData_obj,_rects),HX_CSTRING("_rects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("toString"),
	HX_CSTRING("reload"),
	HX_CSTRING("destroy"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("flush"),
	HX_CSTRING("prepareTileMatrix"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_rgb"),
	HX_CSTRING("set_rgb"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("_name"),
	HX_CSTRING("_layerIndex"),
	HX_CSTRING("_renderFlags"),
	HX_CSTRING("_flagRGB"),
	HX_CSTRING("_flagAlpha"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("_data"),
	HX_CSTRING("_dataIndex"),
	HX_CSTRING("_smoothData"),
	HX_CSTRING("_smoothDataIndex"),
	HX_CSTRING("_rects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_MULTIPLY,"BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_SCREEN,"BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(AtlasData_obj::active,"active");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_uniqueId,"_uniqueId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_MULTIPLY,"BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_SCREEN,"BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::active,"active");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_uniqueId,"_uniqueId");
};

#endif

Class AtlasData_obj::__mClass;

void AtlasData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasData"), hx::TCanCast< AtlasData_obj> ,sStaticFields,sMemberFields,
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

void AtlasData_obj::__boot()
{
	BLEND_NONE= (int)0;
	BLEND_ADD= (int)65536;
	BLEND_NORMAL= (int)0;
	BLEND_MULTIPLY= (int)131072;
	BLEND_SCREEN= (int)262144;
	_dataPool= ::haxe::ds::StringMap_obj::__new();
	_uniqueId= (int)0;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
