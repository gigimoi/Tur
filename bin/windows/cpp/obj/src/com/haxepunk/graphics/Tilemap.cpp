#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Tilemap
#include <com/haxepunk/graphics/Tilemap.h>
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

Void Tilemap_obj::__construct(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight)
{
HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","new",0xa2901676,"com.haxepunk.graphics.Tilemap.new","com/haxepunk/graphics/Tilemap.hx",14,0x8dab491b)
HX_STACK_THIS(this)
HX_STACK_ARG(tileset,"tileset")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(__o_tileSpacingWidth,"tileSpacingWidth")
HX_STACK_ARG(__o_tileSpacingHeight,"tileSpacingHeight")
Dynamic tileSpacingWidth = __o_tileSpacingWidth.Default(0);
Dynamic tileSpacingHeight = __o_tileSpacingHeight.Default(0);
{
	HX_STACK_LINE(532)
	this->smooth = true;
	HX_STACK_LINE(33)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(36)
	this->_width = (width - hx::Mod(width,tileWidth));
	HX_STACK_LINE(37)
	this->_height = (height - hx::Mod(height,tileHeight));
	HX_STACK_LINE(38)
	int _g = ::Std_obj::_int((Float(this->_width) / Float(tileWidth)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->_columns = _g;
	HX_STACK_LINE(39)
	int _g1 = ::Std_obj::_int((Float(this->_height) / Float(tileHeight)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(39)
	this->_rows = _g1;
	HX_STACK_LINE(41)
	this->tileSpacingWidth = tileSpacingWidth;
	HX_STACK_LINE(42)
	this->tileSpacingHeight = tileSpacingHeight;
	HX_STACK_LINE(44)
	if (((bool((this->_columns == (int)0)) || bool((this->_rows == (int)0))))){
		HX_STACK_LINE(45)
		HX_STACK_DO_THROW(HX_CSTRING("Cannot create a bitmapdata of width/height = 0"));
	}
	HX_STACK_LINE(52)
	hx::SubEq(this->_maxWidth,hx::Mod(this->_maxWidth,tileWidth));
	HX_STACK_LINE(53)
	hx::SubEq(this->_maxHeight,hx::Mod(this->_maxHeight,tileHeight));
	HX_STACK_LINE(56)
	super::__construct(this->_width,this->_height);
	HX_STACK_LINE(59)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	this->_tile = _g2;
	HX_STACK_LINE(60)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(60)
	this->_map = _g3;
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(61)
		int _g4 = this->_rows;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			if ((!(((_g11 < _g4))))){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			int y = (_g11)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(63)
			this->_map[y] = Array_obj< int >::__new();
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(64)
				int _g21 = this->_columns;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(64)
				while((true)){
					HX_STACK_LINE(64)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(64)
						break;
					}
					HX_STACK_LINE(64)
					int x = (_g31)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(66)
					this->_map->__get(y).StaticCast< Array< int > >()[x] = (int)-1;
				}
			}
		}
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::com::haxepunk::ds::Either _g4 = tileset;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(71)
		switch( (int)(_g4->__Index())){
			case (int)0: {
				HX_STACK_LINE(71)
				::openfl::_v2::display::BitmapData bd = (::com::haxepunk::ds::Either(_g4))->__Param(0);		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(74)
					this->blit = true;
					HX_STACK_LINE(75)
					this->_set = bd;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(71)
				::com::haxepunk::graphics::atlas::TileAtlas atlas = (::com::haxepunk::ds::Either(_g4))->__Param(0);		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(77)
					this->blit = false;
					HX_STACK_LINE(78)
					this->_atlas = atlas;
					HX_STACK_LINE(79)
					atlas->prepare(tileWidth,tileHeight,tileSpacingWidth,tileSpacingHeight);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(82)
	if (((bool((this->_set == null())) && bool((this->_atlas == null()))))){
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(HX_CSTRING("Invalid tileset graphic provided."));
	}
	HX_STACK_LINE(85)
	if ((this->blit)){
		HX_STACK_LINE(87)
		int _g4 = this->_set->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(87)
		Float _g5 = (Float(_g4) / Float(tileWidth));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(87)
		int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(87)
		this->_setColumns = _g6;
		HX_STACK_LINE(88)
		int _g7 = this->_set->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(88)
		Float _g8 = (Float(_g7) / Float(tileHeight));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(88)
		int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(88)
		this->_setRows = _g9;
	}
	else{
		HX_STACK_LINE(92)
		int _g10 = this->_atlas->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(92)
		Float _g11 = (Float(_g10) / Float(tileWidth));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(92)
		int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(92)
		this->_setColumns = _g12;
		HX_STACK_LINE(93)
		int _g13 = this->_atlas->get_height();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(93)
		Float _g14 = (Float(_g13) / Float(tileHeight));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(93)
		int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(93)
		this->_setRows = _g15;
	}
	HX_STACK_LINE(95)
	this->_setCount = (this->_setColumns * this->_setRows);
}
;
	return null();
}

//Tilemap_obj::~Tilemap_obj() { }

Dynamic Tilemap_obj::__CreateEmpty() { return  new Tilemap_obj; }
hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight)
{  hx::ObjectPtr< Tilemap_obj > result = new Tilemap_obj();
	result->__construct(tileset,width,height,tileWidth,tileHeight,__o_tileSpacingWidth,__o_tileSpacingHeight);
	return result;}

Dynamic Tilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilemap_obj > result = new Tilemap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void Tilemap_obj::setTile( int column,int row,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","setTile",0x3a291506,"com.haxepunk.graphics.Tilemap.setTile","com/haxepunk/graphics/Tilemap.hx",105,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(106)
		if ((this->usePositions)){
			HX_STACK_LINE(108)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			column = _g;
			HX_STACK_LINE(109)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			row = _g1;
		}
		HX_STACK_LINE(111)
		hx::ModEq(index,this->_setCount);
		HX_STACK_LINE(112)
		hx::ModEq(column,this->_columns);
		HX_STACK_LINE(113)
		hx::ModEq(row,this->_rows);
		HX_STACK_LINE(114)
		this->_map->__get(row).StaticCast< Array< int > >()[column] = index;
		HX_STACK_LINE(115)
		if ((this->blit)){
			HX_STACK_LINE(117)
			this->_tile->x = (hx::Mod(index,this->_setColumns) * ((this->_tile->width + this->tileSpacingWidth)));
			HX_STACK_LINE(118)
			int _g2 = ::Std_obj::_int((Float(index) / Float(this->_setColumns)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(118)
			Float _g3 = (_g2 * ((this->_tile->height + this->tileSpacingHeight)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(118)
			this->_tile->y = _g3;
			HX_STACK_LINE(119)
			this->draw((column * this->_tile->width),(row * this->_tile->height),this->_set,this->_tile);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,setTile,(void))

Void Tilemap_obj::clearTile( int column,int row){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","clearTile",0x294aadf1,"com.haxepunk.graphics.Tilemap.clearTile","com/haxepunk/graphics/Tilemap.hx",129,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(130)
		if ((this->usePositions)){
			HX_STACK_LINE(132)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			column = _g;
			HX_STACK_LINE(133)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			row = _g1;
		}
		HX_STACK_LINE(135)
		hx::ModEq(column,this->_columns);
		HX_STACK_LINE(136)
		hx::ModEq(row,this->_rows);
		HX_STACK_LINE(137)
		this->_map->__get(row).StaticCast< Array< int > >()[column] = (int)-1;
		HX_STACK_LINE(138)
		if ((this->blit)){
			HX_STACK_LINE(140)
			this->_tile->x = (column * this->_tile->width);
			HX_STACK_LINE(141)
			this->_tile->y = (row * this->_tile->height);
			HX_STACK_LINE(142)
			this->fill(this->_tile,(int)0,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,clearTile,(void))

int Tilemap_obj::getTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getTile",0x472783fa,"com.haxepunk.graphics.Tilemap.getTile","com/haxepunk/graphics/Tilemap.hx",153,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(154)
	if ((this->usePositions)){
		HX_STACK_LINE(156)
		int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		column = _g;
		HX_STACK_LINE(157)
		int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		row = _g1;
	}
	HX_STACK_LINE(159)
	return this->_map->__get(hx::Mod(row,this->_rows)).StaticCast< Array< int > >()->__get(hx::Mod(column,this->_columns));
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,getTile,return )

Void Tilemap_obj::setRect( int column,int row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_index){
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","setRect",0x38d396fc,"com.haxepunk.graphics.Tilemap.setRect","com/haxepunk/graphics/Tilemap.hx",171,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(172)
		if ((this->usePositions)){
			HX_STACK_LINE(174)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			column = _g;
			HX_STACK_LINE(175)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(175)
			row = _g1;
			HX_STACK_LINE(176)
			int _g2 = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(176)
			width = _g2;
			HX_STACK_LINE(177)
			int _g3 = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(177)
			height = _g3;
		}
		HX_STACK_LINE(179)
		hx::ModEq(column,this->_columns);
		HX_STACK_LINE(180)
		hx::ModEq(row,this->_rows);
		HX_STACK_LINE(181)
		int c = column;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(182)
		int r = (column + width);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(183)
		int b = (row + height);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(184)
		bool u = this->usePositions;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(185)
		this->usePositions = false;
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			if ((!(((row < b))))){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				if ((!(((column < r))))){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(190)
				this->setTile(column,row,index);
				HX_STACK_LINE(191)
				(column)++;
			}
			HX_STACK_LINE(193)
			column = c;
			HX_STACK_LINE(194)
			(row)++;
		}
		HX_STACK_LINE(196)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilemap_obj,setRect,(void))

Void Tilemap_obj::clearRect( int column,int row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","clearRect",0x27f52fe7,"com.haxepunk.graphics.Tilemap.clearRect","com/haxepunk/graphics/Tilemap.hx",207,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(208)
		if ((this->usePositions)){
			HX_STACK_LINE(210)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			column = _g;
			HX_STACK_LINE(211)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(211)
			row = _g1;
			HX_STACK_LINE(212)
			int _g2 = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(212)
			width = _g2;
			HX_STACK_LINE(213)
			int _g3 = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(213)
			height = _g3;
		}
		HX_STACK_LINE(215)
		hx::ModEq(column,this->_columns);
		HX_STACK_LINE(216)
		hx::ModEq(row,this->_rows);
		HX_STACK_LINE(217)
		int c = column;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(218)
		int r = (column + width);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(219)
		int b = (row + height);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(220)
		bool u = this->usePositions;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(221)
		this->usePositions = false;
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			if ((!(((row < b))))){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				if ((!(((column < r))))){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(226)
				this->clearTile(column,row);
				HX_STACK_LINE(227)
				(column)++;
			}
			HX_STACK_LINE(229)
			column = c;
			HX_STACK_LINE(230)
			(row)++;
		}
		HX_STACK_LINE(232)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,clearRect,(void))

Void Tilemap_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","loadFrom2DArray",0xc47166cd,"com.haxepunk.graphics.Tilemap.loadFrom2DArray","com/haxepunk/graphics/Tilemap.hx",242,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(243)
		if ((this->blit)){
			HX_STACK_LINE(245)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(245)
			int _g = array->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(247)
					int _g2 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(247)
					while((true)){
						HX_STACK_LINE(247)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(247)
							break;
						}
						HX_STACK_LINE(247)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(249)
						this->setTile(x,y,array->__get(y).StaticCast< Array< int > >()->__get(x));
					}
				}
			}
		}
		HX_STACK_LINE(253)
		this->_map = array;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,loadFrom2DArray,(void))

Void Tilemap_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","loadFromString",0x38d61d4b,"com.haxepunk.graphics.Tilemap.loadFromString","com/haxepunk/graphics/Tilemap.hx",264,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(265)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(266)
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(265)
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(265)
		int cols;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(265)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(265)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				if ((!(((_g < rows))))){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(270)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(270)
					continue;
				}
				HX_STACK_LINE(271)
				Array< ::String > _g1 = row->__get(y1).split(columnSep);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(271)
				col = _g1;
				HX_STACK_LINE(272)
				cols = col->length;
				HX_STACK_LINE(273)
				{
					HX_STACK_LINE(273)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(273)
					while((true)){
						HX_STACK_LINE(273)
						if ((!(((_g11 < cols))))){
							HX_STACK_LINE(273)
							break;
						}
						HX_STACK_LINE(273)
						int x1 = (_g11)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(275)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(275)
							continue;
						}
						HX_STACK_LINE(277)
						if ((this->blit)){
							HX_STACK_LINE(278)
							Dynamic _g12 = ::Std_obj::parseInt(col->__get(x1));		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(278)
							this->setTile(x1,y1,_g12);
						}
						HX_STACK_LINE(279)
						this->_map->__get(y1).StaticCast< Array< int > >()[x1] = ::Std_obj::parseInt(col->__get(x1));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,loadFromString,(void))

::String Tilemap_obj::saveToString( ::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","saveToString",0x64686433,"com.haxepunk.graphics.Tilemap.saveToString","com/haxepunk/graphics/Tilemap.hx",292,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(293)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(293)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(293)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(295)
			int _g = this->_rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(295)
			while((true)){
				HX_STACK_LINE(295)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(295)
					break;
				}
				HX_STACK_LINE(295)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(297)
					int _g2 = this->_columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(299)
						int _g4 = this->getTile(x1,y1);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(299)
						::String _g11 = ::Std_obj::string(_g4);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(299)
						hx::AddEq(s,_g11);
						HX_STACK_LINE(300)
						if (((x1 != (this->_columns - (int)1)))){
							HX_STACK_LINE(300)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(302)
				if (((y1 != (this->_rows - (int)1)))){
					HX_STACK_LINE(302)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(304)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,saveToString,return )

int Tilemap_obj::getIndex( int tilesColumn,int tilesRow){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getIndex",0xa94b94c6,"com.haxepunk.graphics.Tilemap.getIndex","com/haxepunk/graphics/Tilemap.hx",315,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tilesColumn,"tilesColumn")
	HX_STACK_ARG(tilesRow,"tilesRow")
	HX_STACK_LINE(315)
	return ((hx::Mod(tilesRow,this->_setRows) * this->_setColumns) + hx::Mod(tilesColumn,this->_setColumns));
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,getIndex,return )

Void Tilemap_obj::shiftTiles( int columns,int rows,hx::Null< bool >  __o_wrap){
bool wrap = __o_wrap.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","shiftTiles",0x325b324d,"com.haxepunk.graphics.Tilemap.shiftTiles","com/haxepunk/graphics/Tilemap.hx",325,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columns,"columns")
	HX_STACK_ARG(rows,"rows")
	HX_STACK_ARG(wrap,"wrap")
{
		HX_STACK_LINE(326)
		if ((this->usePositions)){
			HX_STACK_LINE(328)
			int _g = ::Std_obj::_int((Float(columns) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(328)
			columns = _g;
			HX_STACK_LINE(329)
			int _g1 = ::Std_obj::_int((Float(rows) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(329)
			rows = _g1;
		}
		HX_STACK_LINE(332)
		if (((columns != (int)0))){
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(334)
				int _g = this->_rows;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(334)
				while((true)){
					HX_STACK_LINE(334)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(334)
						break;
					}
					HX_STACK_LINE(334)
					int y = (_g1)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(336)
					Array< int > row = this->_map->__get(y).StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(337)
					if (((columns > (int)0))){
						HX_STACK_LINE(339)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(339)
						while((true)){
							HX_STACK_LINE(339)
							if ((!(((_g2 < columns))))){
								HX_STACK_LINE(339)
								break;
							}
							HX_STACK_LINE(339)
							int x = (_g2)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(341)
							int tile = row->pop();		HX_STACK_VAR(tile,"tile");
							HX_STACK_LINE(342)
							if ((wrap)){
								HX_STACK_LINE(342)
								row->unshift(tile);
							}
						}
					}
					else{
						HX_STACK_LINE(347)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(347)
						Float _g2 = ::Math_obj::abs(columns);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(347)
						int _g21 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(347)
						while((true)){
							HX_STACK_LINE(347)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(347)
								break;
							}
							HX_STACK_LINE(347)
							int x = (_g3)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(349)
							int tile = row->shift();		HX_STACK_VAR(tile,"tile");
							HX_STACK_LINE(350)
							if ((wrap)){
								HX_STACK_LINE(350)
								row->push(tile);
							}
						}
					}
				}
			}
			HX_STACK_LINE(354)
			this->_columns = this->_map->__get(::Std_obj::_int(this->y)).StaticCast< Array< int > >()->length;
		}
		HX_STACK_LINE(366)
		if (((rows != (int)0))){
			HX_STACK_LINE(368)
			if (((rows > (int)0))){
				HX_STACK_LINE(370)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(370)
				while((true)){
					HX_STACK_LINE(370)
					if ((!(((_g < rows))))){
						HX_STACK_LINE(370)
						break;
					}
					HX_STACK_LINE(370)
					int y = (_g)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(372)
					Array< int > row = this->_map->pop().StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(373)
					if ((wrap)){
						HX_STACK_LINE(373)
						this->_map->unshift(row);
					}
				}
			}
			else{
				HX_STACK_LINE(378)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(378)
				Float _g3 = ::Math_obj::abs(rows);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(378)
				int _g = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					int y = (_g1)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(380)
					Array< int > row = this->_map->shift().StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(381)
					if ((wrap)){
						HX_STACK_LINE(381)
						this->_map->push(row);
					}
				}
			}
			HX_STACK_LINE(384)
			this->_rows = this->_map->length;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,shiftTiles,(void))

Void Tilemap_obj::updateRect( ::openfl::_v2::geom::Rectangle rect,bool clear){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","updateRect",0x172a8077,"com.haxepunk.graphics.Tilemap.updateRect","com/haxepunk/graphics/Tilemap.hx",399,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(clear,"clear")
		HX_STACK_LINE(400)
		int x = ::Std_obj::_int(rect->x);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(401)
		int y = ::Std_obj::_int(rect->y);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(402)
		int w = ::Std_obj::_int((x + rect->width));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(403)
		int h = ::Std_obj::_int((y + rect->height));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(404)
		bool u = this->usePositions;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(405)
		this->usePositions = false;
		HX_STACK_LINE(406)
		if ((clear)){
			HX_STACK_LINE(408)
			while((true)){
				HX_STACK_LINE(408)
				if ((!(((y < h))))){
					HX_STACK_LINE(408)
					break;
				}
				HX_STACK_LINE(410)
				while((true)){
					HX_STACK_LINE(410)
					if ((!(((x < w))))){
						HX_STACK_LINE(410)
						break;
					}
					HX_STACK_LINE(410)
					int _g = (x)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(410)
					this->clearTile(_g,y);
				}
				HX_STACK_LINE(411)
				int _g1 = ::Std_obj::_int(rect->x);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(411)
				x = _g1;
				HX_STACK_LINE(412)
				(y)++;
			}
		}
		else{
			HX_STACK_LINE(417)
			while((true)){
				HX_STACK_LINE(417)
				if ((!(((y < h))))){
					HX_STACK_LINE(417)
					break;
				}
				HX_STACK_LINE(419)
				while((true)){
					HX_STACK_LINE(419)
					if ((!(((x < w))))){
						HX_STACK_LINE(419)
						break;
					}
					HX_STACK_LINE(419)
					int _g2 = (x)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(419)
					this->updateTile(_g2,y);
				}
				HX_STACK_LINE(420)
				int _g3 = ::Std_obj::_int(rect->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(420)
				x = _g3;
				HX_STACK_LINE(421)
				(y)++;
			}
		}
		HX_STACK_LINE(424)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,updateRect,(void))

Void Tilemap_obj::renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","renderAtlas",0x543fc62b,"com.haxepunk.graphics.Tilemap.renderAtlas","com/haxepunk/graphics/Tilemap.hx",429,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(431)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(432)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(434)
		Float scalex = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(scalex,"scalex");
		HX_STACK_LINE(435)
		Float scaley = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(scaley,"scaley");
		HX_STACK_LINE(436)
		int _g = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		int tw = ::Std_obj::_int(_g);		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(437)
		int _g1 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(437)
		int th = ::Std_obj::_int(_g1);		HX_STACK_VAR(th,"th");
		HX_STACK_LINE(439)
		Float scx = (this->scale * this->scaleX);		HX_STACK_VAR(scx,"scx");
		HX_STACK_LINE(440)
		Float scy = (this->scale * this->scaleY);		HX_STACK_VAR(scy,"scy");
		HX_STACK_LINE(443)
		int startx = ::Math_obj::floor((Float(-(this->_point->x)) / Float(((tw * scx)))));		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(444)
		int starty = ::Math_obj::floor((Float(-(this->_point->y)) / Float(((th * scy)))));		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(445)
		int _g2 = ::Math_obj::ceil((Float(::com::haxepunk::HXP_obj::width) / Float(((tw * scx)))));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(445)
		int destx = ((startx + (int)1) + _g2);		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(446)
		int _g3 = ::Math_obj::ceil((Float(::com::haxepunk::HXP_obj::height) / Float(((th * scy)))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(446)
		int desty = ((starty + (int)1) + _g3);		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(449)
		if (((bool((bool((bool((startx > this->_columns)) || bool((starty > this->_rows)))) || bool((destx < (int)0)))) || bool((desty < (int)0))))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(453)
		if (((startx < (int)0))){
			HX_STACK_LINE(453)
			startx = (int)0;
		}
		HX_STACK_LINE(454)
		if (((destx > this->_columns))){
			HX_STACK_LINE(454)
			destx = this->_columns;
		}
		HX_STACK_LINE(455)
		if (((starty < (int)0))){
			HX_STACK_LINE(455)
			starty = (int)0;
		}
		HX_STACK_LINE(456)
		if (((desty > this->_rows))){
			HX_STACK_LINE(456)
			desty = this->_rows;
		}
		HX_STACK_LINE(458)
		Float wx;		HX_STACK_VAR(wx,"wx");
		HX_STACK_LINE(458)
		Float sx = (((this->_point->x + ((startx * tw) * scx))) * scalex);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(459)
		Float wy = (((this->_point->y + ((starty * th) * scy))) * scaley);		HX_STACK_VAR(wy,"wy");
		HX_STACK_LINE(460)
		Float stepx = ((tw * scx) * scalex);		HX_STACK_VAR(stepx,"stepx");
		HX_STACK_LINE(461)
		Float stepy = ((th * scy) * scaley);		HX_STACK_VAR(stepy,"stepy");
		HX_STACK_LINE(462)
		int tile = (int)0;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g4 = starty;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(464)
			while((true)){
				HX_STACK_LINE(464)
				if ((!(((_g4 < desty))))){
					HX_STACK_LINE(464)
					break;
				}
				HX_STACK_LINE(464)
				int y = (_g4)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(466)
				wx = sx;
				HX_STACK_LINE(468)
				int _g41 = ::Math_obj::floor((wy + stepy));		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(468)
				int _g5 = ::Math_obj::floor(wy);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(468)
				int _g6 = (_g41 - _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(468)
				int _g7 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(468)
				Float _g8 = (Float(_g6) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(468)
				scy = _g8;
				HX_STACK_LINE(470)
				{
					HX_STACK_LINE(470)
					int _g11 = startx;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(470)
					while((true)){
						HX_STACK_LINE(470)
						if ((!(((_g11 < destx))))){
							HX_STACK_LINE(470)
							break;
						}
						HX_STACK_LINE(470)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(472)
						tile = this->_map->__get(hx::Mod(y,this->_rows)).StaticCast< Array< int > >()->__get(hx::Mod(x,this->_columns));
						HX_STACK_LINE(473)
						if (((tile >= (int)0))){
							HX_STACK_LINE(476)
							int _g9 = ::Math_obj::floor((wx + stepx));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(476)
							int _g10 = ::Math_obj::floor(wx);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(476)
							int _g111 = (_g9 - _g10);		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(476)
							int _g12 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(476)
							Float _g13 = (Float(_g111) / Float(_g12));		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(476)
							scx = _g13;
							HX_STACK_LINE(478)
							{
								HX_STACK_LINE(478)
								Float x1 = ::Math_obj::floor(wx);		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(478)
								Float y1 = ::Math_obj::floor(wy);		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(478)
								Float alpha = this->get_alpha();		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									::com::haxepunk::graphics::atlas::AtlasData _this = this->_atlas->_data;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(478)
									Dynamic smooth = this->smooth;		HX_STACK_VAR(smooth,"smooth");
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this))){
											HX_STACK_LINE(478)
											if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
												HX_STACK_LINE(478)
												::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(478)
												if (((_this1->_dataIndex != (int)0))){
													HX_STACK_LINE(478)
													::openfl::_v2::display::Graphics _g14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g14,"_g14");
													HX_STACK_LINE(478)
													_this1->_tilesheet->drawTiles(_g14,_this1->_data,false,_this1->_renderFlags,_this1->_dataIndex);
													HX_STACK_LINE(478)
													_this1->_dataIndex = (int)0;
												}
												HX_STACK_LINE(478)
												if (((_this1->_smoothDataIndex != (int)0))){
													HX_STACK_LINE(478)
													::openfl::_v2::display::Graphics _g15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g15,"_g15");
													HX_STACK_LINE(478)
													_this1->_tilesheet->drawTiles(_g15,_this1->_smoothData,true,_this1->_renderFlags,_this1->_smoothDataIndex);
													HX_STACK_LINE(478)
													_this1->_smoothDataIndex = (int)0;
												}
											}
											HX_STACK_LINE(478)
											::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
										}
										HX_STACK_LINE(478)
										_this;
									}
									HX_STACK_LINE(478)
									if (((smooth == null()))){
										HX_STACK_LINE(478)
										smooth = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
									}
									HX_STACK_LINE(478)
									Array< Float > _data;		HX_STACK_VAR(_data,"_data");
									HX_STACK_LINE(478)
									if ((smooth)){
										HX_STACK_LINE(478)
										_data = _this->_smoothData;
									}
									else{
										HX_STACK_LINE(478)
										_data = _this->_data;
									}
									HX_STACK_LINE(478)
									int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
									HX_STACK_LINE(478)
									if ((smooth)){
										HX_STACK_LINE(478)
										_dataIndex = _this->_smoothDataIndex;
									}
									else{
										HX_STACK_LINE(478)
										_dataIndex = _this->_dataIndex;
									}
									HX_STACK_LINE(478)
									int _g16 = (_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(478)
									_data[_g16] = x1;
									HX_STACK_LINE(478)
									int _g17 = (_dataIndex)++;		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(478)
									_data[_g17] = y1;
									HX_STACK_LINE(478)
									int _g18 = (_dataIndex)++;		HX_STACK_VAR(_g18,"_g18");
									HX_STACK_LINE(478)
									_data[_g18] = tile;
									HX_STACK_LINE(478)
									{
										HX_STACK_LINE(478)
										int _g19 = (_dataIndex)++;		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(478)
										_data[_g19] = scx;
										HX_STACK_LINE(478)
										int _g20 = (_dataIndex)++;		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(478)
										_data[_g20] = (int)0;
										HX_STACK_LINE(478)
										int _g21 = (_dataIndex)++;		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(478)
										_data[_g21] = (int)0;
										HX_STACK_LINE(478)
										int _g22 = (_dataIndex)++;		HX_STACK_VAR(_g22,"_g22");
										HX_STACK_LINE(478)
										_data[_g22] = scy;
									}
									HX_STACK_LINE(478)
									if ((_this->_flagRGB)){
										HX_STACK_LINE(478)
										int _g27 = (_dataIndex)++;		HX_STACK_VAR(_g27,"_g27");
										HX_STACK_LINE(478)
										_data[_g27] = this->_red;
										HX_STACK_LINE(478)
										int _g28 = (_dataIndex)++;		HX_STACK_VAR(_g28,"_g28");
										HX_STACK_LINE(478)
										_data[_g28] = this->_green;
										HX_STACK_LINE(478)
										int _g29 = (_dataIndex)++;		HX_STACK_VAR(_g29,"_g29");
										HX_STACK_LINE(478)
										_data[_g29] = this->_blue;
									}
									HX_STACK_LINE(478)
									if ((_this->_flagAlpha)){
										HX_STACK_LINE(478)
										int _g30 = (_dataIndex)++;		HX_STACK_VAR(_g30,"_g30");
										HX_STACK_LINE(478)
										_data[_g30] = alpha;
									}
									HX_STACK_LINE(478)
									if ((smooth)){
										HX_STACK_LINE(478)
										_this->_smoothDataIndex = _dataIndex;
									}
									else{
										HX_STACK_LINE(478)
										_this->_dataIndex = _dataIndex;
									}
								}
							}
						}
						HX_STACK_LINE(480)
						hx::AddEq(wx,stepx);
					}
				}
				HX_STACK_LINE(482)
				hx::AddEq(wy,stepy);
			}
		}
	}
return null();
}


Void Tilemap_obj::updateTile( int column,int row){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","updateTile",0x187ffe81,"com.haxepunk.graphics.Tilemap.updateTile","com/haxepunk/graphics/Tilemap.hx",489,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(489)
		this->setTile(column,row,this->_map->__get(hx::Mod(row,this->_rows)).StaticCast< Array< int > >()->__get(hx::Mod(column,this->_columns)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,updateTile,(void))

int Tilemap_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileWidth",0x40cee565,"com.haxepunk.graphics.Tilemap.get_tileWidth","com/haxepunk/graphics/Tilemap.hx",496,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(496)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileWidth,return )

int Tilemap_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileHeight",0x2a894ba8,"com.haxepunk.graphics.Tilemap.get_tileHeight","com/haxepunk/graphics/Tilemap.hx",502,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileHeight,return )

int Tilemap_obj::get_tileCount( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileCount",0xc0cf742e,"com.haxepunk.graphics.Tilemap.get_tileCount","com/haxepunk/graphics/Tilemap.hx",518,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	return this->_setCount;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileCount,return )

int Tilemap_obj::get_columns( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_columns",0xdb05590a,"com.haxepunk.graphics.Tilemap.get_columns","com/haxepunk/graphics/Tilemap.hx",524,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(524)
	return this->_columns;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_columns,return )

int Tilemap_obj::get_rows( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_rows",0x56c99acc,"com.haxepunk.graphics.Tilemap.get_rows","com/haxepunk/graphics/Tilemap.hx",530,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	return this->_rows;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_rows,return )


Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	HX_MARK_MEMBER_NAME(tileSpacingWidth,"tileSpacingWidth");
	HX_MARK_MEMBER_NAME(tileSpacingHeight,"tileSpacingHeight");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_set,"_set");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_MEMBER_NAME(_setColumns,"_setColumns");
	HX_MARK_MEMBER_NAME(_setRows,"_setRows");
	HX_MARK_MEMBER_NAME(_setCount,"_setCount");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	::com::haxepunk::graphics::Canvas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	HX_VISIT_MEMBER_NAME(tileSpacingWidth,"tileSpacingWidth");
	HX_VISIT_MEMBER_NAME(tileSpacingHeight,"tileSpacingHeight");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
	HX_VISIT_MEMBER_NAME(_rows,"_rows");
	HX_VISIT_MEMBER_NAME(_set,"_set");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	HX_VISIT_MEMBER_NAME(_setColumns,"_setColumns");
	HX_VISIT_MEMBER_NAME(_setRows,"_setRows");
	HX_VISIT_MEMBER_NAME(_setCount,"_setCount");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	::com::haxepunk::graphics::Canvas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp ? get_rows() : rows; }
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"_set") ) { return _set; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return inCallProp ? get_columns() : columns; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIndex") ) { return getIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		if (HX_FIELD_EQ(inName,"_setRows") ) { return _setRows; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"tileCount") ) { return get_tileCount(); }
		if (HX_FIELD_EQ(inName,"_setCount") ) { return _setCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shiftTiles") ) { return shiftTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRect") ) { return updateRect_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"_setColumns") ) { return _setColumns; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileCount") ) { return get_tileCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileSpacingWidth") ) { return tileSpacingWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileSpacingHeight") ) { return tileSpacingHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_set") ) { _set=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::com::haxepunk::graphics::atlas::TileAtlas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setRows") ) { _setRows=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_setCount") ) { _setCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_setColumns") ) { _setColumns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileSpacingWidth") ) { tileSpacingWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileSpacingHeight") ) { tileSpacingHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("usePositions"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileSpacingWidth"));
	outFields->push(HX_CSTRING("tileSpacingHeight"));
	outFields->push(HX_CSTRING("tileCount"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("_map"));
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("_rows"));
	outFields->push(HX_CSTRING("_set"));
	outFields->push(HX_CSTRING("_atlas"));
	outFields->push(HX_CSTRING("_setColumns"));
	outFields->push(HX_CSTRING("_setRows"));
	outFields->push(HX_CSTRING("_setCount"));
	outFields->push(HX_CSTRING("_tile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tilemap_obj,usePositions),HX_CSTRING("usePositions")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tileSpacingWidth),HX_CSTRING("tileSpacingWidth")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tileSpacingHeight),HX_CSTRING("tileSpacingHeight")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,columns),HX_CSTRING("columns")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,rows),HX_CSTRING("rows")},
	{hx::fsBool,(int)offsetof(Tilemap_obj,smooth),HX_CSTRING("smooth")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilemap_obj,_map),HX_CSTRING("_map")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_columns),HX_CSTRING("_columns")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_rows),HX_CSTRING("_rows")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Tilemap_obj,_set),HX_CSTRING("_set")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::TileAtlas*/ ,(int)offsetof(Tilemap_obj,_atlas),HX_CSTRING("_atlas")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setColumns),HX_CSTRING("_setColumns")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setRows),HX_CSTRING("_setRows")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setCount),HX_CSTRING("_setCount")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Tilemap_obj,_tile),HX_CSTRING("_tile")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("usePositions"),
	HX_CSTRING("setTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("getTile"),
	HX_CSTRING("setRect"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("loadFrom2DArray"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("getIndex"),
	HX_CSTRING("shiftTiles"),
	HX_CSTRING("updateRect"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("tileSpacingWidth"),
	HX_CSTRING("tileSpacingHeight"),
	HX_CSTRING("get_tileCount"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("get_rows"),
	HX_CSTRING("smooth"),
	HX_CSTRING("_map"),
	HX_CSTRING("_columns"),
	HX_CSTRING("_rows"),
	HX_CSTRING("_set"),
	HX_CSTRING("_atlas"),
	HX_CSTRING("_setColumns"),
	HX_CSTRING("_setRows"),
	HX_CSTRING("_setCount"),
	HX_CSTRING("_tile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#endif

Class Tilemap_obj::__mClass;

void Tilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Tilemap"), hx::TCanCast< Tilemap_obj> ,sStaticFields,sMemberFields,
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

void Tilemap_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
