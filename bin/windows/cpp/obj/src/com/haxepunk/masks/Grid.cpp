#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Grid","new",0xc1c48bf8,"com.haxepunk.masks.Grid.new","com/haxepunk/masks/Grid.hx",36,0x6289a8b7)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(37)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(40)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(42)
		HX_STACK_DO_THROW(HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(45)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(46)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(47)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(50)
	int _g = ::Std_obj::_int((Float(width) / Float(tileWidth)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->columns = _g;
	HX_STACK_LINE(51)
	int _g1 = ::Std_obj::_int((Float(height) / Float(tileHeight)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	this->rows = _g1;
	HX_STACK_LINE(53)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	this->_tile = _g2;
	HX_STACK_LINE(54)
	this->_x = x;
	HX_STACK_LINE(55)
	this->_y = y;
	HX_STACK_LINE(56)
	this->_width = width;
	HX_STACK_LINE(57)
	this->_height = height;
	HX_STACK_LINE(58)
	this->usePositions = false;
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(61)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(62)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(63)
		this->_check->set(key,this->collidePixelmask_dyn());
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(64)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(66)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(66)
	this->data = _g3;
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(67)
		int _g4 = this->rows;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			if ((!(((_g11 < _g4))))){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			int x1 = (_g11)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(69)
			Array< bool > _g41 = Array_obj< bool >::__new();		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(69)
			this->data->push(_g41);
		}
	}
}
;
	return null();
}

//Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setTile",0xbf537388,"com.haxepunk.masks.Grid.setTile","com/haxepunk/masks/Grid.hx",86,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(87)
		if ((this->usePositions)){
			HX_STACK_LINE(89)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			column = _g;
			HX_STACK_LINE(90)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			row = _g1;
		}
		HX_STACK_LINE(92)
		this->setTileXY(column,row,solid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))

Void Grid_obj::setTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< bool >  __o_solid){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setTileXY",0xd1bdb289,"com.haxepunk.masks.Grid.setTileXY","com/haxepunk/masks/Grid.hx",103,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(104)
		if ((!(((  (((bool((bool((bool((x < (int)0)) || bool((x > (this->columns - (int)1))))) || bool((y < (int)0)))) || bool((y > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(104)
			return null();
		}
		HX_STACK_LINE(105)
		this->data->__get(y).StaticCast< Array< bool > >()[x] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTileXY,(void))

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clearTile",0x14ab30f3,"com.haxepunk.masks.Grid.clearTile","com/haxepunk/masks/Grid.hx",115,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(115)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","checkTile",0xf4ca11ae,"com.haxepunk.masks.Grid.checkTile","com/haxepunk/masks/Grid.hx",121,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(121)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(123)
		return false;
	}
	else{
		HX_STACK_LINE(127)
		return true;
	}
	HX_STACK_LINE(121)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","getTile",0xcc51e27c,"com.haxepunk.masks.Grid.getTile","com/haxepunk/masks/Grid.hx",138,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(139)
		if ((this->usePositions)){
			HX_STACK_LINE(141)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			column = _g;
			HX_STACK_LINE(142)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			row = _g1;
		}
		HX_STACK_LINE(144)
		return this->getTileXY(column,row);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::getTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","getTileXY",0xee6cc67d,"com.haxepunk.masks.Grid.getTileXY","com/haxepunk/masks/Grid.hx",155,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(156)
		if ((!(((  (((bool((bool((bool((x < (int)0)) || bool((x > (this->columns - (int)1))))) || bool((y < (int)0)))) || bool((y > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(156)
			return false;
		}
		HX_STACK_LINE(157)
		return this->data->__get(y).StaticCast< Array< bool > >()->__get(x);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTileXY,return )

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setRect",0xbdfdf57e,"com.haxepunk.masks.Grid.setRect","com/haxepunk/masks/Grid.hx",169,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(170)
		if ((this->usePositions)){
			HX_STACK_LINE(172)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			column = _g;
			HX_STACK_LINE(173)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			row = _g1;
			HX_STACK_LINE(174)
			int _g2 = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(174)
			width = _g2;
			HX_STACK_LINE(175)
			int _g3 = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(175)
			height = _g3;
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(180)
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(182)
						this->setTileXY(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clearRect",0x1355b2e9,"com.haxepunk.masks.Grid.clearRect","com/haxepunk/masks/Grid.hx",196,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(196)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_FRAME("com.haxepunk.masks.Grid","loadFromString",0x9e717309,"com.haxepunk.masks.Grid.loadFromString","com/haxepunk/masks/Grid.hx",206,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(207)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(208)
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(207)
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(207)
		int cols;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(207)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(207)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			while((true)){
				HX_STACK_LINE(210)
				if ((!(((_g < rows))))){
					HX_STACK_LINE(210)
					break;
				}
				HX_STACK_LINE(210)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(212)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(212)
					continue;
				}
				HX_STACK_LINE(213)
				Array< ::String > _g1 = row->__get(y1).split(columnSep);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				col = _g1;
				HX_STACK_LINE(214)
				cols = col->length;
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(215)
					while((true)){
						HX_STACK_LINE(215)
						if ((!(((_g11 < cols))))){
							HX_STACK_LINE(215)
							break;
						}
						HX_STACK_LINE(215)
						int x1 = (_g11)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(217)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(217)
							continue;
						}
						HX_STACK_LINE(218)
						Dynamic _g12 = ::Std_obj::parseInt(col->__get(x1));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(218)
						bool _g2 = (_g12 > (int)0);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(218)
						this->setTile(x1,y1,_g2);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","loadFrom2DArray",0x46c1174f,"com.haxepunk.masks.Grid.loadFrom2DArray","com/haxepunk/masks/Grid.hx",229,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(229)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(231)
				int _g2 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(231)
				while((true)){
					HX_STACK_LINE(231)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(231)
						break;
					}
					HX_STACK_LINE(231)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(233)
					this->setTile(x,y,(array->__get(y).StaticCast< Array< int > >()->__get(x) > (int)0));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,loadFrom2DArray,(void))

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep,::String __o_solid,::String __o_empty){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
::String solid = __o_solid.Default(HX_CSTRING("true"));
::String empty = __o_empty.Default(HX_CSTRING("false"));
	HX_STACK_FRAME("com.haxepunk.masks.Grid","saveToString",0x6d4e2e71,"com.haxepunk.masks.Grid.saveToString","com/haxepunk/masks/Grid.hx",247,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
	HX_STACK_ARG(solid,"solid")
	HX_STACK_ARG(empty,"empty")
{
		HX_STACK_LINE(248)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(248)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(248)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(252)
				{
					HX_STACK_LINE(252)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(252)
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(252)
					while((true)){
						HX_STACK_LINE(252)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(252)
							break;
						}
						HX_STACK_LINE(252)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(254)
						Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(254)
						if ((this->getTileXY(x1,y1))){
							HX_STACK_LINE(254)
							_g4 = solid;
						}
						else{
							HX_STACK_LINE(254)
							_g4 = empty;
						}
						HX_STACK_LINE(254)
						::String _g11 = ::Std_obj::string(_g4);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(254)
						hx::AddEq(s,_g11);
						HX_STACK_LINE(255)
						if (((x1 != (this->columns - (int)1)))){
							HX_STACK_LINE(255)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(257)
				if (((y1 != (this->rows - (int)1)))){
					HX_STACK_LINE(257)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(259)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,saveToString,return )

::com::haxepunk::masks::Grid Grid_obj::clone( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clone",0xd42be4f5,"com.haxepunk.masks.Grid.clone","com/haxepunk/masks/Grid.hx",268,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	int _g = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(269)
	int _g1 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(269)
	::com::haxepunk::masks::Grid cloneGrid = ::com::haxepunk::masks::Grid_obj::__new(this->_width,this->_height,_g,_g1,this->_x,this->_y);		HX_STACK_VAR(cloneGrid,"cloneGrid");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(270)
		int _g2 = this->rows;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(270)
			int y = (_g11)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(272)
				int _g21 = this->columns;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(272)
				while((true)){
					HX_STACK_LINE(272)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(272)
						break;
					}
					HX_STACK_LINE(272)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(274)
					bool _g22 = this->getTile(x,y);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(274)
					cloneGrid->setTile(x,y,_g22);
				}
			}
		}
	}
	HX_STACK_LINE(277)
	return cloneGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,clone,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","get_tileWidth",0x00fa1167,"com.haxepunk.masks.Grid.get_tileWidth","com/haxepunk/masks/Grid.hx",284,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

int Grid_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","get_tileHeight",0x9024a166,"com.haxepunk.masks.Grid.get_tileHeight","com/haxepunk/masks/Grid.hx",290,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideMask",0x028dc722,"com.haxepunk.masks.Grid.collideMask","com/haxepunk/masks/Grid.hx",309,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(310)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(310)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(310)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(310)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",311,0x6289a8b7)
			{
				HX_STACK_LINE(311)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(311)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",311,0x6289a8b7)
			{
				HX_STACK_LINE(311)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(311)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(311)
	this->_rect->x = (((_Function_1_1::Block(other) - other->_parent->originX) - _Function_1_2::Block(this)) + this->_parent->originX);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",312,0x6289a8b7)
			{
				HX_STACK_LINE(312)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(312)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",312,0x6289a8b7)
			{
				HX_STACK_LINE(312)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(312)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(312)
	this->_rect->y = (((_Function_1_3::Block(other) - other->_parent->originY) - _Function_1_4::Block(this)) + this->_parent->originY);
	HX_STACK_LINE(313)
	int _g = ::Std_obj::_int((Float((((this->_rect->x + other->_parent->width) - (int)1))) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(313)
	int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(313)
	pointX = _g1;
	HX_STACK_LINE(314)
	int _g2 = ::Std_obj::_int((Float((((this->_rect->y + other->_parent->height) - (int)1))) / Float(this->_tile->height)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(314)
	int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(314)
	pointY = _g3;
	HX_STACK_LINE(315)
	int _g4 = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(315)
	rectX = _g4;
	HX_STACK_LINE(316)
	int _g5 = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(316)
	rectY = _g5;
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(318)
		int _g6 = rectY;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(318)
		while((true)){
			HX_STACK_LINE(318)
			if ((!(((_g6 < pointY))))){
				HX_STACK_LINE(318)
				break;
			}
			HX_STACK_LINE(318)
			int dy = (_g6)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				int _g11 = rectX;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(320)
				while((true)){
					HX_STACK_LINE(320)
					if ((!(((_g11 < pointX))))){
						HX_STACK_LINE(320)
						break;
					}
					HX_STACK_LINE(320)
					int dx = (_g11)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(322)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(324)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(328)
	return false;
}


bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideHitbox",0xb2f5ed4e,"com.haxepunk.masks.Grid.collideHitbox","com/haxepunk/masks/Grid.hx",333,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(334)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(334)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(334)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(334)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",335,0x6289a8b7)
			{
				HX_STACK_LINE(335)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",335,0x6289a8b7)
			{
				HX_STACK_LINE(335)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(335)
	this->_rect->x = (((_Function_1_1::Block(other) - other->_x) - _Function_1_2::Block(this)) + this->_x);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",336,0x6289a8b7)
			{
				HX_STACK_LINE(336)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",336,0x6289a8b7)
			{
				HX_STACK_LINE(336)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(336)
	this->_rect->y = (((_Function_1_3::Block(other) - other->_y) - _Function_1_4::Block(this)) + this->_y);
	HX_STACK_LINE(337)
	int _g = ::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(337)
	int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(337)
	pointX = _g1;
	HX_STACK_LINE(338)
	int _g2 = ::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(338)
	int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(338)
	pointY = _g3;
	HX_STACK_LINE(339)
	int _g4 = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(339)
	rectX = _g4;
	HX_STACK_LINE(340)
	int _g5 = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(340)
	rectY = _g5;
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		int _g6 = rectY;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(342)
		while((true)){
			HX_STACK_LINE(342)
			if ((!(((_g6 < pointY))))){
				HX_STACK_LINE(342)
				break;
			}
			HX_STACK_LINE(342)
			int dy = (_g6)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				int _g11 = rectX;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(344)
				while((true)){
					HX_STACK_LINE(344)
					if ((!(((_g11 < pointX))))){
						HX_STACK_LINE(344)
						break;
					}
					HX_STACK_LINE(344)
					int dx = (_g11)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(346)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(348)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(352)
	return false;
}


bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collidePixelmask",0x5f0ef87c,"com.haxepunk.masks.Grid.collidePixelmask","com/haxepunk/masks/Grid.hx",357,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(399)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL."),hx::SourceInfo(HX_CSTRING("Grid.hx"),399,HX_CSTRING("com.haxepunk.masks.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(401)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideGrid",0xfea35cfc,"com.haxepunk.masks.Grid.collideGrid","com/haxepunk/masks/Grid.hx",406,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(408)
	Float ax1;		HX_STACK_VAR(ax1,"ax1");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",408,0x6289a8b7)
			{
				HX_STACK_LINE(408)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(408)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(408)
	ax1 = (_Function_1_1::Block(this) + this->_x);
	HX_STACK_LINE(409)
	Float ax2 = (ax1 + this->_width);		HX_STACK_VAR(ax2,"ax2");
	HX_STACK_LINE(410)
	Float bx1;		HX_STACK_VAR(bx1,"bx1");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",410,0x6289a8b7)
			{
				HX_STACK_LINE(410)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(410)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(410)
	bx1 = (_Function_1_2::Block(other) + other->_x);
	HX_STACK_LINE(411)
	Float bx2 = (bx1 + other->_width);		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(412)
	if (((bool((ax2 < bx1)) || bool((ax1 > bx2))))){
		HX_STACK_LINE(412)
		return false;
	}
	HX_STACK_LINE(415)
	Float ay1;		HX_STACK_VAR(ay1,"ay1");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",415,0x6289a8b7)
			{
				HX_STACK_LINE(415)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(415)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(415)
	ay1 = (_Function_1_3::Block(this) + this->_y);
	HX_STACK_LINE(416)
	Float ay2 = (ay1 + this->_height);		HX_STACK_VAR(ay2,"ay2");
	HX_STACK_LINE(417)
	Float by1;		HX_STACK_VAR(by1,"by1");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",417,0x6289a8b7)
			{
				HX_STACK_LINE(417)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	by1 = (_Function_1_4::Block(other) + other->_y);
	HX_STACK_LINE(418)
	Float by2 = (by1 + other->_height);		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(419)
	if (((bool((ay2 < by1)) || bool((ay1 > by2))))){
		HX_STACK_LINE(419)
		return false;
	}
	HX_STACK_LINE(422)
	Float ox1;		HX_STACK_VAR(ox1,"ox1");
	HX_STACK_LINE(422)
	if (((ax1 > bx1))){
		HX_STACK_LINE(422)
		ox1 = ax1;
	}
	else{
		HX_STACK_LINE(422)
		ox1 = bx1;
	}
	HX_STACK_LINE(423)
	Float oy1;		HX_STACK_VAR(oy1,"oy1");
	HX_STACK_LINE(423)
	if (((ay1 > by1))){
		HX_STACK_LINE(423)
		oy1 = ay1;
	}
	else{
		HX_STACK_LINE(423)
		oy1 = by1;
	}
	HX_STACK_LINE(424)
	Float ox2;		HX_STACK_VAR(ox2,"ox2");
	HX_STACK_LINE(424)
	if (((ax2 < bx2))){
		HX_STACK_LINE(424)
		ox2 = ax2;
	}
	else{
		HX_STACK_LINE(424)
		ox2 = bx2;
	}
	HX_STACK_LINE(425)
	Float oy2;		HX_STACK_VAR(oy2,"oy2");
	HX_STACK_LINE(425)
	if (((ay2 < by2))){
		HX_STACK_LINE(425)
		oy2 = ay2;
	}
	else{
		HX_STACK_LINE(425)
		oy2 = by2;
	}
	HX_STACK_LINE(430)
	Float tw;		HX_STACK_VAR(tw,"tw");
	HX_STACK_LINE(430)
	Float th;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(431)
	if (((this->_tile->width < other->_tile->width))){
		HX_STACK_LINE(433)
		tw = this->_tile->width;
		struct _Function_2_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",434,0x6289a8b7)
				{
					HX_STACK_LINE(434)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(434)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(434)
		hx::SubEq(ox1,(_Function_2_1::Block(this) + this->_x));
		HX_STACK_LINE(435)
		int _g = ::Std_obj::_int((Float(ox1) / Float(tw)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(435)
		Float _g1 = (_g * tw);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(435)
		ox1 = _g1;
		struct _Function_2_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",436,0x6289a8b7)
				{
					HX_STACK_LINE(436)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(436)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(436)
		hx::AddEq(ox1,(_Function_2_2::Block(this) + this->_x));
	}
	else{
		HX_STACK_LINE(440)
		tw = other->_tile->width;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",441,0x6289a8b7)
				{
					HX_STACK_LINE(441)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(441)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(441)
		hx::SubEq(ox1,(_Function_2_1::Block(other) + other->_x));
		HX_STACK_LINE(442)
		int _g2 = ::Std_obj::_int((Float(ox1) / Float(tw)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(442)
		Float _g3 = (_g2 * tw);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(442)
		ox1 = _g3;
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",443,0x6289a8b7)
				{
					HX_STACK_LINE(443)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(443)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(443)
		hx::AddEq(ox1,(_Function_2_2::Block(other) + other->_x));
	}
	HX_STACK_LINE(445)
	if (((this->_tile->height < other->_tile->height))){
		HX_STACK_LINE(447)
		th = this->_tile->height;
		struct _Function_2_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",448,0x6289a8b7)
				{
					HX_STACK_LINE(448)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(448)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(448)
		hx::SubEq(oy1,(_Function_2_1::Block(this) + this->_y));
		HX_STACK_LINE(449)
		int _g4 = ::Std_obj::_int((Float(oy1) / Float(th)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(449)
		Float _g5 = (_g4 * th);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(449)
		oy1 = _g5;
		struct _Function_2_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",450,0x6289a8b7)
				{
					HX_STACK_LINE(450)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(450)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(450)
		hx::AddEq(oy1,(_Function_2_2::Block(this) + this->_y));
	}
	else{
		HX_STACK_LINE(454)
		th = other->_tile->height;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",455,0x6289a8b7)
				{
					HX_STACK_LINE(455)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(455)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(455)
		hx::SubEq(oy1,(_Function_2_1::Block(other) + other->_y));
		HX_STACK_LINE(456)
		int _g6 = ::Std_obj::_int((Float(oy1) / Float(th)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(456)
		Float _g7 = (_g6 * th);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(456)
		oy1 = _g7;
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",457,0x6289a8b7)
				{
					HX_STACK_LINE(457)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(457)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(457)
		hx::AddEq(oy1,(_Function_2_2::Block(other) + other->_y));
	}
	HX_STACK_LINE(461)
	Float y = oy1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(462)
	Float x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(463)
	while((true)){
		HX_STACK_LINE(463)
		if ((!(((y < oy2))))){
			HX_STACK_LINE(463)
			break;
		}
		struct _Function_2_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",466,0x6289a8b7)
				{
					HX_STACK_LINE(466)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(466)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(466)
		int ar1 = ::Std_obj::_int((Float((((y - _Function_2_1::Block(this)) - this->_y))) / Float(this->_tile->height)));		HX_STACK_VAR(ar1,"ar1");
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",467,0x6289a8b7)
				{
					HX_STACK_LINE(467)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(467)
		int br1 = ::Std_obj::_int((Float((((y - _Function_2_2::Block(other)) - other->_y))) / Float(other->_tile->height)));		HX_STACK_VAR(br1,"br1");
		struct _Function_2_3{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",468,0x6289a8b7)
				{
					HX_STACK_LINE(468)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(468)
		int ar2 = ::Std_obj::_int((Float(((((y - _Function_2_3::Block(this)) - this->_y) + ((th - (int)1))))) / Float(this->_tile->height)));		HX_STACK_VAR(ar2,"ar2");
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",469,0x6289a8b7)
				{
					HX_STACK_LINE(469)
					::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(469)
		int br2 = ::Std_obj::_int((Float(((((y - _Function_2_4::Block(other)) - other->_y) + ((th - (int)1))))) / Float(other->_tile->height)));		HX_STACK_VAR(br2,"br2");
		HX_STACK_LINE(471)
		x = ox1;
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			if ((!(((x < ox2))))){
				HX_STACK_LINE(472)
				break;
			}
			struct _Function_3_1{
				inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",475,0x6289a8b7)
					{
						HX_STACK_LINE(475)
						::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(475)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(475)
			int ac1 = ::Std_obj::_int((Float((((x - _Function_3_1::Block(this)) - this->_x))) / Float(this->_tile->width)));		HX_STACK_VAR(ac1,"ac1");
			struct _Function_3_2{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",476,0x6289a8b7)
					{
						HX_STACK_LINE(476)
						::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(476)
			int bc1 = ::Std_obj::_int((Float((((x - _Function_3_2::Block(other)) - other->_x))) / Float(other->_tile->width)));		HX_STACK_VAR(bc1,"bc1");
			struct _Function_3_3{
				inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",477,0x6289a8b7)
					{
						HX_STACK_LINE(477)
						::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(477)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(477)
			int ac2 = ::Std_obj::_int((Float(((((x - _Function_3_3::Block(this)) - this->_x) + ((tw - (int)1))))) / Float(this->_tile->width)));		HX_STACK_VAR(ac2,"ac2");
			struct _Function_3_4{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",478,0x6289a8b7)
					{
						HX_STACK_LINE(478)
						::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(478)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(478)
			int bc2 = ::Std_obj::_int((Float(((((x - _Function_3_4::Block(other)) - other->_x) + ((tw - (int)1))))) / Float(other->_tile->width)));		HX_STACK_VAR(bc2,"bc2");
			struct _Function_3_5{
				inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this,int &bc2,int &br1,::com::haxepunk::masks::Grid &other,int &ac2,int &ar1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",482,0x6289a8b7)
					{
						HX_STACK_LINE(482)
						return (  ((__this->getTile(ac2,ar1))) ? bool(other->getTile(bc2,br1)) : bool(false) );
					}
					return null();
				}
			};
			struct _Function_3_6{
				inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this,int &ar2,int &bc1,int &ac1,::com::haxepunk::masks::Grid &other,int &br2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",483,0x6289a8b7)
					{
						HX_STACK_LINE(483)
						return (  ((__this->getTile(ac1,ar2))) ? bool(other->getTile(bc1,br2)) : bool(false) );
					}
					return null();
				}
			};
			struct _Function_3_7{
				inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this,int &ar2,int &bc2,::com::haxepunk::masks::Grid &other,int &br2,int &ac2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",484,0x6289a8b7)
					{
						HX_STACK_LINE(484)
						return (  ((__this->getTile(ac2,ar2))) ? bool(other->getTile(bc2,br2)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(481)
			if (((  ((!(((  ((!(((  ((!(((  ((this->getTile(ac1,ar1))) ? bool(other->getTile(bc1,br1)) : bool(false) ))))) ? bool(_Function_3_5::Block(this,bc2,br1,other,ac2,ar1)) : bool(true) ))))) ? bool(_Function_3_6::Block(this,ar2,bc1,ac1,other,br2)) : bool(true) ))))) ? bool(_Function_3_7::Block(this,ar2,bc2,other,br2,ac2)) : bool(true) ))){
				HX_STACK_LINE(486)
				return true;
			}
			HX_STACK_LINE(488)
			hx::AddEq(x,tw);
		}
		HX_STACK_LINE(490)
		hx::AddEq(y,th);
	}
	HX_STACK_LINE(493)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collideGrid,return )

Void Grid_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","debugDraw",0x79a94d8f,"com.haxepunk.masks.Grid.debugDraw","com/haxepunk/masks/Grid.hx",498,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(499)
		Float cellX;		HX_STACK_VAR(cellX,"cellX");
		HX_STACK_LINE(499)
		Float cellY;		HX_STACK_VAR(cellY,"cellY");
		HX_STACK_LINE(500)
		int _g = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(500)
		Float stepX = (_g * scaleX);		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(501)
		int _g1 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		Float stepY = (_g1 * scaleY);		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(504)
		Float px;		HX_STACK_VAR(px,"px");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",504,0x6289a8b7)
				{
					HX_STACK_LINE(504)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(504)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(504)
		px = ((this->_x + _Function_1_1::Block(this)) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(505)
		Float py;		HX_STACK_VAR(py,"py");
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Grid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Grid.hx",505,0x6289a8b7)
				{
					HX_STACK_LINE(505)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(505)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(505)
		py = ((this->_y + _Function_1_2::Block(this)) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(508)
		int _g2 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(508)
		Float _g3 = (Float(-(px)) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(508)
		int startx = ::Math_obj::floor(_g3);		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(509)
		int _g4 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(509)
		Float _g5 = (Float(-(py)) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(509)
		int starty = ::Math_obj::floor(_g5);		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(510)
		int _g6 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(510)
		Float _g7 = (Float(::com::haxepunk::HXP_obj::width) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(510)
		int _g8 = ::Math_obj::ceil(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(510)
		int destx = ((startx + (int)1) + _g8);		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(511)
		int _g9 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(511)
		Float _g10 = (Float(::com::haxepunk::HXP_obj::height) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(511)
		int _g11 = ::Math_obj::ceil(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(511)
		int desty = ((starty + (int)1) + _g11);		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(514)
		if (((bool((bool((bool((startx > this->columns)) || bool((starty > this->rows)))) || bool((destx < (int)0)))) || bool((desty < (int)0))))){
			HX_STACK_LINE(515)
			return null();
		}
		HX_STACK_LINE(518)
		if (((startx < (int)0))){
			HX_STACK_LINE(518)
			startx = (int)0;
		}
		HX_STACK_LINE(519)
		if (((destx > this->columns))){
			HX_STACK_LINE(519)
			destx = this->columns;
		}
		HX_STACK_LINE(520)
		if (((starty < (int)0))){
			HX_STACK_LINE(520)
			starty = (int)0;
		}
		HX_STACK_LINE(521)
		if (((desty > this->rows))){
			HX_STACK_LINE(521)
			desty = this->rows;
		}
		HX_STACK_LINE(523)
		int _g12 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(523)
		int _g13 = (startx * _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(523)
		Float _g14 = (px + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(523)
		Float _g15 = (_g14 * scaleX);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(523)
		px = _g15;
		HX_STACK_LINE(524)
		int _g16 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(524)
		int _g17 = (starty * _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(524)
		Float _g18 = (py + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(524)
		Float _g19 = (_g18 * scaleY);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(524)
		py = _g19;
		HX_STACK_LINE(526)
		Array< bool > row;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(527)
		cellY = py;
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			int _g20 = starty;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(528)
			while((true)){
				HX_STACK_LINE(528)
				if ((!(((_g20 < desty))))){
					HX_STACK_LINE(528)
					break;
				}
				HX_STACK_LINE(528)
				int y = (_g20)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(530)
				cellX = px;
				HX_STACK_LINE(531)
				row = this->data->__get(y).StaticCast< Array< bool > >();
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					int _g110 = startx;		HX_STACK_VAR(_g110,"_g110");
					HX_STACK_LINE(532)
					while((true)){
						HX_STACK_LINE(532)
						if ((!(((_g110 < destx))))){
							HX_STACK_LINE(532)
							break;
						}
						HX_STACK_LINE(532)
						int x = (_g110)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(534)
						if ((row->__get(x))){
							HX_STACK_LINE(536)
							graphics->lineStyle((int)1,(int)16777215,0.3,null(),null(),null(),null(),null());
							HX_STACK_LINE(537)
							graphics->drawRect(cellX,cellY,stepX,stepY);
							HX_STACK_LINE(539)
							if (((bool((x < (this->columns - (int)1))) && bool(!(row->__get((x + (int)1))))))){
								HX_STACK_LINE(541)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(542)
								graphics->moveTo((cellX + stepX),cellY);
								HX_STACK_LINE(543)
								graphics->lineTo((cellX + stepX),(cellY + stepY));
							}
							HX_STACK_LINE(545)
							if (((bool((x > (int)0)) && bool(!(row->__get((x - (int)1))))))){
								HX_STACK_LINE(547)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(548)
								graphics->moveTo(cellX,cellY);
								HX_STACK_LINE(549)
								graphics->lineTo(cellX,(cellY + stepY));
							}
							HX_STACK_LINE(551)
							if (((bool((y < (this->rows - (int)1))) && bool(!(this->data->__get((y + (int)1)).StaticCast< Array< bool > >()->__get(x)))))){
								HX_STACK_LINE(553)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(554)
								graphics->moveTo(cellX,(cellY + stepY));
								HX_STACK_LINE(555)
								graphics->lineTo((cellX + stepX),(cellY + stepY));
							}
							HX_STACK_LINE(557)
							if (((bool((y > (int)0)) && bool(!(this->data->__get((y - (int)1)).StaticCast< Array< bool > >()->__get(x)))))){
								HX_STACK_LINE(559)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(560)
								graphics->moveTo(cellX,cellY);
								HX_STACK_LINE(561)
								graphics->lineTo((cellX + stepX),cellY);
							}
						}
						HX_STACK_LINE(564)
						hx::AddEq(cellX,stepX);
					}
				}
				HX_STACK_LINE(566)
				hx::AddEq(cellY,stepY);
			}
		}
	}
return null();
}


Void Grid_obj::squareProjection( ::openfl::_v2::geom::Point axis,::openfl::_v2::geom::Point point){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","squareProjection",0xca7638f4,"com.haxepunk.masks.Grid.squareProjection","com/haxepunk/masks/Grid.hx",574,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(574)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(576)
			point->x = axis->x;
			HX_STACK_LINE(577)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(581)
			point->y = axis->x;
			HX_STACK_LINE(582)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTileXY") ) { return setTileXY_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileXY") ) { return getTileXY_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("usePositions"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_point2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Grid_obj,usePositions),HX_CSTRING("usePositions")},
	{hx::fsInt,(int)offsetof(Grid_obj,columns),HX_CSTRING("columns")},
	{hx::fsInt,(int)offsetof(Grid_obj,rows),HX_CSTRING("rows")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Grid_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_tile),HX_CSTRING("_tile")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Grid_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Grid_obj,_point2),HX_CSTRING("_point2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("usePositions"),
	HX_CSTRING("setTile"),
	HX_CSTRING("setTileXY"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("getTile"),
	HX_CSTRING("getTileXY"),
	HX_CSTRING("setRect"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("loadFrom2DArray"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("data"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("_tile"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_point"),
	HX_CSTRING("_point2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
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

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
