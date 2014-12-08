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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
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

Void SlopedGrid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","new",0x2c93e1f1,"com.haxepunk.masks.SlopedGrid.new","com/haxepunk/masks/SlopedGrid.hx",52,0xc5c3ae1e)
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
	HX_STACK_LINE(53)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(56)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(58)
		HX_STACK_DO_THROW(HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(61)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(62)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(63)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(66)
	int _g = ::Std_obj::_int((Float(width) / Float(tileWidth)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	this->columns = _g;
	HX_STACK_LINE(67)
	int _g1 = ::Std_obj::_int((Float(height) / Float(tileHeight)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(67)
	this->rows = _g1;
	HX_STACK_LINE(69)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(69)
	this->_tile = _g2;
	HX_STACK_LINE(70)
	this->_x = x;
	HX_STACK_LINE(71)
	this->_y = y;
	HX_STACK_LINE(72)
	this->_width = width;
	HX_STACK_LINE(73)
	this->_height = height;
	HX_STACK_LINE(74)
	this->usePositions = false;
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(77)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(78)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(80)
	Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(80)
	this->data = _g3;
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(81)
		int _g4 = this->rows;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			if ((!(((_g11 < _g4))))){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			int x1 = (_g11)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(83)
			Dynamic _g41 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(83)
			this->data->__Field(HX_CSTRING("push"),true)(_g41);
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(85)
				int _g21 = this->columns;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(85)
				while((true)){
					HX_STACK_LINE(85)
					if ((!(((_g31 < _g21))))){
						HX_STACK_LINE(85)
						break;
					}
					HX_STACK_LINE(85)
					int y1 = (_g31)++;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(87)
					hx::IndexRef((this->data->__GetItem(x1)).mPtr,y1) = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
				}
			}
		}
	}
}
;
	return null();
}

//SlopedGrid_obj::~SlopedGrid_obj() { }

Dynamic SlopedGrid_obj::__CreateEmpty() { return  new SlopedGrid_obj; }
hx::ObjectPtr< SlopedGrid_obj > SlopedGrid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< SlopedGrid_obj > result = new SlopedGrid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic SlopedGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SlopedGrid_obj > result = new SlopedGrid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

bool SlopedGrid_obj::collidePoint( Float cx,Float cy){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collidePoint",0x027a4041,"com.haxepunk.masks.SlopedGrid.collidePoint","com/haxepunk/masks/SlopedGrid.hx",100,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(101)
	Float px;		HX_STACK_VAR(px,"px");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",101,0xc5c3ae1e)
			{
				HX_STACK_LINE(101)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(101)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(101)
	px = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(102)
	Float py;		HX_STACK_VAR(py,"py");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",102,0xc5c3ae1e)
			{
				HX_STACK_LINE(102)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(102)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(102)
	py = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(104)
	int column = ::Std_obj::_int((Float(((cx - px))) / Float(this->_tile->width)));		HX_STACK_VAR(column,"column");
	HX_STACK_LINE(105)
	int row = ::Std_obj::_int((Float(((cy - py))) / Float(this->_tile->height)));		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(106)
	Float x = (px + (column * this->_tile->width));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(107)
	Float y = (py + (row * this->_tile->height));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(109)
	Dynamic tile;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int column1 = column;		HX_STACK_VAR(column1,"column1");
		HX_STACK_LINE(109)
		int row1 = row;		HX_STACK_VAR(row1,"row1");
		HX_STACK_LINE(109)
		if ((!(((bool((bool((bool((column1 >= (int)0)) && bool((column1 < this->columns)))) && bool((row1 >= (int)0)))) && bool((row1 < this->rows))))))){
			HX_STACK_LINE(109)
			tile = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
		}
		else{
			HX_STACK_LINE(109)
			if ((this->usePositions)){
				HX_STACK_LINE(109)
				int _g = ::Std_obj::_int((Float(column1) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(109)
				column1 = _g;
				HX_STACK_LINE(109)
				int _g1 = ::Std_obj::_int((Float(row1) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(109)
				row1 = _g1;
			}
			HX_STACK_LINE(109)
			tile = this->data->__GetItem(row1)->__GetItem(column1);
		}
	}
	HX_STACK_LINE(110)
	if (((tile != null()))){
		HX_STACK_LINE(112)
		if (((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))){
			HX_STACK_LINE(114)
			return true;
		}
		else{
			HX_STACK_LINE(116)
			if (((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) || bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope))))){
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this,Dynamic &tile,Float &cx,Float &x,Float &cy,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",118,0xc5c3ae1e)
						{
							HX_STACK_LINE(118)
							Float y1 = y;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(118)
							hx::AddEq(y1,tile->__Field(HX_CSTRING("yOffset"),true));
							HX_STACK_LINE(118)
							Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * __this->_tile->width);		HX_STACK_VAR(yoff,"yoff");
							HX_STACK_LINE(118)
							Float x2 = (x + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(118)
							Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(118)
							bool left = ((((x2 - x)) * ((cy - y1))) > (((y2 - y1)) * ((cx - x))));		HX_STACK_VAR(left,"left");
							HX_STACK_LINE(118)
							return (bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) && bool(!(left)))) || bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) && bool(left))));
						}
						return null();
					}
				};
				HX_STACK_LINE(118)
				if ((_Function_4_1::Block(this,tile,cx,x,cy,y))){
					HX_STACK_LINE(118)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(121)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,collidePoint,return )

bool SlopedGrid_obj::collidePointInSlope( Float x1,Float y1,Float px,Float py,Dynamic tile){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collidePointInSlope",0xabf714c5,"com.haxepunk.masks.SlopedGrid.collidePointInSlope","com/haxepunk/masks/SlopedGrid.hx",136,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(137)
	hx::AddEq(y1,tile->__Field(HX_CSTRING("yOffset"),true));
	HX_STACK_LINE(139)
	Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * this->_tile->width);		HX_STACK_VAR(yoff,"yoff");
	HX_STACK_LINE(141)
	Float x2 = (x1 + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(142)
	Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(144)
	bool left = ((((x2 - x1)) * ((py - y1))) > (((y2 - y1)) * ((px - x1))));		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(146)
	return (bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) && bool(!(left)))) || bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) && bool(left))));
}


HX_DEFINE_DYNAMIC_FUNC5(SlopedGrid_obj,collidePointInSlope,return )

Void SlopedGrid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","setTile",0xabb7ba01,"com.haxepunk.masks.SlopedGrid.setTile","com/haxepunk/masks/SlopedGrid.hx",158,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(slope,"slope")
	HX_STACK_ARG(yOffset,"yOffset")
{
		HX_STACK_LINE(159)
		if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows))))))){
			HX_STACK_LINE(159)
			return null();
		}
		HX_STACK_LINE(161)
		if (((type == null()))){
			HX_STACK_LINE(161)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(163)
		if ((this->usePositions)){
			HX_STACK_LINE(165)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(165)
			column = _g;
			HX_STACK_LINE(166)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			row = _g1;
		}
		HX_STACK_LINE(169)
		switch( (int)(type->__Index())){
			case (int)4: {
				struct _Function_2_1{
					inline static Dynamic Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",172,0xc5c3ae1e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
							__result->Add(HX_CSTRING("slope") , (int)-1,false);
							__result->Add(HX_CSTRING("yOffset") , __this->_tile->height,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(172)
				hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(this);
			}
			;break;
			case (int)5: {
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",178,0xc5c3ae1e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
							__result->Add(HX_CSTRING("slope") , (int)1,false);
							__result->Add(HX_CSTRING("yOffset") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(178)
				hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block();
			}
			;break;
			case (int)6: {
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",184,0xc5c3ae1e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
							__result->Add(HX_CSTRING("slope") , (int)1,false);
							__result->Add(HX_CSTRING("yOffset") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(184)
				hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block();
			}
			;break;
			case (int)7: {
				struct _Function_2_1{
					inline static Dynamic Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",190,0xc5c3ae1e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
							__result->Add(HX_CSTRING("slope") , (int)-1,false);
							__result->Add(HX_CSTRING("yOffset") , __this->_tile->height,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(190)
				hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(this);
			}
			;break;
			default: {
				struct _Function_2_1{
					inline static Dynamic Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this,Float &slope,Float &yOffset,::com::haxepunk::masks::TileType &type){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",196,0xc5c3ae1e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , type,false);
							__result->Add(HX_CSTRING("slope") , slope,false);
							__result->Add(HX_CSTRING("yOffset") , (yOffset * __this->_tile->height),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(196)
				hx::IndexRef((this->data->__GetItem(row)).mPtr,column) = _Function_2_1::Block(this,slope,yOffset,type);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SlopedGrid_obj,setTile,(void))

Void SlopedGrid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","clearTile",0x1788c7ac,"com.haxepunk.masks.SlopedGrid.clearTile","com/haxepunk/masks/SlopedGrid.hx",212,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(212)
		this->setTile(column,row,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,clearTile,(void))

bool SlopedGrid_obj::checkTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","checkTile",0xf7a7a867,"com.haxepunk.masks.SlopedGrid.checkTile","com/haxepunk/masks/SlopedGrid.hx",218,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(218)
	return (bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows)));
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,checkTile,return )

Dynamic SlopedGrid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","getTile",0xb8b628f5,"com.haxepunk.masks.SlopedGrid.getTile","com/haxepunk/masks/SlopedGrid.hx",229,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(229)
		if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows))))))){
			HX_STACK_LINE(231)
			return ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
		}
		else{
			HX_STACK_LINE(235)
			if ((this->usePositions)){
				HX_STACK_LINE(237)
				int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				column = _g;
				HX_STACK_LINE(238)
				int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(238)
				row = _g1;
			}
			HX_STACK_LINE(240)
			return this->data->__GetItem(row)->__GetItem(column);
		}
		HX_STACK_LINE(229)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,getTile,return )

Void SlopedGrid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","setRect",0xaa623bf7,"com.haxepunk.masks.SlopedGrid.setRect","com/haxepunk/masks/SlopedGrid.hx",255,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(slope,"slope")
	HX_STACK_ARG(yOffset,"yOffset")
{
		HX_STACK_LINE(256)
		if (((type == null()))){
			HX_STACK_LINE(256)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(258)
		if ((this->usePositions)){
			HX_STACK_LINE(260)
			int _g = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			column = _g;
			HX_STACK_LINE(261)
			int _g1 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(261)
			row = _g1;
			HX_STACK_LINE(262)
			int _g2 = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(262)
			width = _g2;
			HX_STACK_LINE(263)
			int _g3 = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(263)
			height = _g3;
		}
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(268)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(268)
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(268)
					while((true)){
						HX_STACK_LINE(268)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(268)
							break;
						}
						HX_STACK_LINE(268)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(270)
						this->setTile(xx,yy,type,slope,yOffset);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SlopedGrid_obj,setRect,(void))

Void SlopedGrid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","clearRect",0x163349a2,"com.haxepunk.masks.SlopedGrid.clearRect","com/haxepunk/masks/SlopedGrid.hx",284,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(284)
		this->setRect(column,row,width,height,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SlopedGrid_obj,clearRect,(void))

int SlopedGrid_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","get_tileWidth",0xd67bf8a0,"com.haxepunk.masks.SlopedGrid.get_tileWidth","com/haxepunk/masks/SlopedGrid.hx",291,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileWidth,return )

int SlopedGrid_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","get_tileHeight",0x8c4d0c0d,"com.haxepunk.masks.SlopedGrid.get_tileHeight","com/haxepunk/masks/SlopedGrid.hx",297,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileHeight,return )

bool SlopedGrid_obj::collideBox( Float opx,Float opy,Float opw,Float oph,Float px,Float py){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideBox",0xed35bbbc,"com.haxepunk.masks.SlopedGrid.collideBox","com/haxepunk/masks/SlopedGrid.hx",315,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opx,"opx")
	HX_STACK_ARG(opy,"opy")
	HX_STACK_ARG(opw,"opw")
	HX_STACK_ARG(oph,"oph")
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(316)
	this->_rect->x = (opx - px);
	HX_STACK_LINE(317)
	this->_rect->y = (opy - py);
	HX_STACK_LINE(318)
	int startx = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));		HX_STACK_VAR(startx,"startx");
	HX_STACK_LINE(319)
	int starty = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));		HX_STACK_VAR(starty,"starty");
	HX_STACK_LINE(320)
	int _g = ::Std_obj::_int((Float((((this->_rect->x + opw) - (int)1))) / Float(this->_tile->width)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(320)
	int endx = (_g + (int)1);		HX_STACK_VAR(endx,"endx");
	HX_STACK_LINE(321)
	int _g1 = ::Std_obj::_int((Float((((this->_rect->y + oph) - (int)1))) / Float(this->_tile->height)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(321)
	int endy = (_g1 + (int)1);		HX_STACK_VAR(endy,"endy");
	HX_STACK_LINE(324)
	Float yy = (py + (starty * this->_tile->height));		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		int _g2 = starty;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			if ((!(((_g2 < endy))))){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(325)
			int dy = (_g2)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(327)
			Float xx = (px + (startx * this->_tile->width));		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				int _g11 = startx;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(328)
				while((true)){
					HX_STACK_LINE(328)
					if ((!(((_g11 < endx))))){
						HX_STACK_LINE(328)
						break;
					}
					HX_STACK_LINE(328)
					int dx = (_g11)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(330)
					Dynamic tile;		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(330)
					{
						HX_STACK_LINE(330)
						int column = dx;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(330)
						int row = dy;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(330)
						if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < this->columns)))) && bool((row >= (int)0)))) && bool((row < this->rows))))))){
							HX_STACK_LINE(330)
							tile = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
						}
						else{
							HX_STACK_LINE(330)
							if ((this->usePositions)){
								HX_STACK_LINE(330)
								int _g21 = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(330)
								column = _g21;
								HX_STACK_LINE(330)
								int _g3 = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(330)
								row = _g3;
							}
							HX_STACK_LINE(330)
							tile = this->data->__GetItem(row)->__GetItem(column);
						}
					}
					HX_STACK_LINE(331)
					if (((tile == null()))){
						HX_STACK_LINE(331)
						continue;
					}
					HX_STACK_LINE(332)
					{
						HX_STACK_LINE(332)
						::com::haxepunk::masks::TileType _g21 = tile->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(332)
						switch( (int)(_g21->__Index())){
							case (int)1: {
								HX_STACK_LINE(335)
								return true;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(337)
								Float x = opx;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(337)
								Float y = (opy + oph);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(338)
								if (((tile->__Field(HX_CSTRING("slope"),true) < (int)0))){
									HX_STACK_LINE(338)
									hx::AddEq(x,opw);
								}
								HX_STACK_LINE(340)
								int _g4 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(340)
								Float _g5 = (xx + _g4);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(340)
								Float _g6 = ::com::haxepunk::HXP_obj::clamp(x,xx,_g5);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(340)
								x = _g6;
								HX_STACK_LINE(341)
								int _g7 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(341)
								Float _g8 = (yy + _g7);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(341)
								Float _g9 = ::com::haxepunk::HXP_obj::clamp(y,yy,_g8);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(341)
								y = _g9;
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this,Dynamic &tile,Float &x,Float &xx,Float &y,Float &yy){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",343,0xc5c3ae1e)
										{
											HX_STACK_LINE(343)
											Float y1 = yy;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(343)
											hx::AddEq(y1,tile->__Field(HX_CSTRING("yOffset"),true));
											HX_STACK_LINE(343)
											Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * __this->_tile->width);		HX_STACK_VAR(yoff,"yoff");
											HX_STACK_LINE(343)
											Float x2 = (xx + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(343)
											Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(343)
											bool left = ((((x2 - xx)) * ((y - y1))) > (((y2 - y1)) * ((x - xx))));		HX_STACK_VAR(left,"left");
											HX_STACK_LINE(343)
											return (bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) && bool(!(left)))) || bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) && bool(left))));
										}
										return null();
									}
								};
								HX_STACK_LINE(343)
								if ((_Function_7_1::Block(this,tile,x,xx,y,yy))){
									HX_STACK_LINE(345)
									return true;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(348)
								Float x = opx;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(348)
								Float y = opy;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(349)
								if (((tile->__Field(HX_CSTRING("slope"),true) > (int)0))){
									HX_STACK_LINE(349)
									hx::AddEq(x,opw);
								}
								HX_STACK_LINE(351)
								int _g10 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(351)
								Float _g111 = (xx + _g10);		HX_STACK_VAR(_g111,"_g111");
								HX_STACK_LINE(351)
								Float _g12 = ::com::haxepunk::HXP_obj::clamp(x,xx,_g111);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(351)
								x = _g12;
								HX_STACK_LINE(352)
								int _g13 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(352)
								Float _g14 = (yy + _g13);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(352)
								Float _g15 = ::com::haxepunk::HXP_obj::clamp(y,yy,_g14);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(352)
								y = _g15;
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this,Dynamic &tile,Float &x,Float &xx,Float &y,Float &yy){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",354,0xc5c3ae1e)
										{
											HX_STACK_LINE(354)
											Float y1 = yy;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(354)
											hx::AddEq(y1,tile->__Field(HX_CSTRING("yOffset"),true));
											HX_STACK_LINE(354)
											Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * __this->_tile->width);		HX_STACK_VAR(yoff,"yoff");
											HX_STACK_LINE(354)
											Float x2 = (xx + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(354)
											Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(354)
											bool left = ((((x2 - xx)) * ((y - y1))) > (((y2 - y1)) * ((x - xx))));		HX_STACK_VAR(left,"left");
											HX_STACK_LINE(354)
											return (bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) && bool(!(left)))) || bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) && bool(left))));
										}
										return null();
									}
								};
								HX_STACK_LINE(354)
								if ((_Function_7_1::Block(this,tile,x,xx,y,yy))){
									HX_STACK_LINE(356)
									return true;
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(360)
					hx::AddEq(xx,this->_tile->width);
				}
			}
			HX_STACK_LINE(362)
			hx::AddEq(yy,this->_tile->height);
		}
	}
	HX_STACK_LINE(364)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(SlopedGrid_obj,collideBox,return )

bool SlopedGrid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideMask",0xa9093e1b,"com.haxepunk.masks.SlopedGrid.collideMask","com/haxepunk/masks/SlopedGrid.hx",369,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(370)
	Float x;		HX_STACK_VAR(x,"x");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",370,0xc5c3ae1e)
			{
				HX_STACK_LINE(370)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(370)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(370)
	x = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(371)
	Float y;		HX_STACK_VAR(y,"y");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",371,0xc5c3ae1e)
			{
				HX_STACK_LINE(371)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(371)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(371)
	y = (this->_y + _Function_1_2::Block(this));
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",373,0xc5c3ae1e)
			{
				HX_STACK_LINE(373)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(373)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",374,0xc5c3ae1e)
			{
				HX_STACK_LINE(374)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",376,0xc5c3ae1e)
			{
				HX_STACK_LINE(376)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(376)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",376,0xc5c3ae1e)
			{
				HX_STACK_LINE(376)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(376)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(373)
	return this->collideBox((_Function_1_3::Block(other) - other->_parent->originX),(_Function_1_4::Block(other) - other->_parent->originY),other->_parent->width,other->_parent->height,(_Function_1_5::Block(this) + this->_parent->originX),(_Function_1_6::Block(this) + this->_parent->originY));
}


bool SlopedGrid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideHitbox",0x8877d487,"com.haxepunk.masks.SlopedGrid.collideHitbox","com/haxepunk/masks/SlopedGrid.hx",381,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(382)
	Float x;		HX_STACK_VAR(x,"x");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",382,0xc5c3ae1e)
			{
				HX_STACK_LINE(382)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(382)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(382)
	x = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(383)
	Float y;		HX_STACK_VAR(y,"y");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",383,0xc5c3ae1e)
			{
				HX_STACK_LINE(383)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(383)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(383)
	y = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(384)
	Float ox;		HX_STACK_VAR(ox,"ox");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",384,0xc5c3ae1e)
			{
				HX_STACK_LINE(384)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(384)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(384)
	ox = (other->_x + _Function_1_3::Block(other));
	HX_STACK_LINE(385)
	Float oy;		HX_STACK_VAR(oy,"oy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",385,0xc5c3ae1e)
			{
				HX_STACK_LINE(385)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(385)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(385)
	oy = (other->_y + _Function_1_4::Block(other));
	HX_STACK_LINE(387)
	return this->collideBox(ox,oy,other->_width,other->_height,x,y);
}


Void SlopedGrid_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","debugDraw",0x7c86e448,"com.haxepunk.masks.SlopedGrid.debugDraw","com/haxepunk/masks/SlopedGrid.hx",392,0xc5c3ae1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(393)
		Float cellX;		HX_STACK_VAR(cellX,"cellX");
		HX_STACK_LINE(393)
		Float cellY;		HX_STACK_VAR(cellY,"cellY");
		HX_STACK_LINE(394)
		int _g = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		Float stepX = (_g * scaleX);		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(395)
		int _g1 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(395)
		Float stepY = (_g1 * scaleY);		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(398)
		Float px;		HX_STACK_VAR(px,"px");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",398,0xc5c3ae1e)
				{
					HX_STACK_LINE(398)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(398)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(398)
		px = ((this->_x + _Function_1_1::Block(this)) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(399)
		Float py;		HX_STACK_VAR(py,"py");
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::SlopedGrid_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",399,0xc5c3ae1e)
				{
					HX_STACK_LINE(399)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(399)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(399)
		py = ((this->_y + _Function_1_2::Block(this)) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(402)
		int _g2 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(402)
		Float _g3 = (Float(-(px)) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(402)
		int startx = ::Math_obj::floor(_g3);		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(403)
		int _g4 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(403)
		Float _g5 = (Float(-(py)) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(403)
		int starty = ::Math_obj::floor(_g5);		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(404)
		int _g6 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(404)
		Float _g7 = (Float(::com::haxepunk::HXP_obj::width) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(404)
		int _g8 = ::Math_obj::ceil(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(404)
		int destx = ((startx + (int)1) + _g8);		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(405)
		int _g9 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(405)
		Float _g10 = (Float(::com::haxepunk::HXP_obj::height) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(405)
		int _g11 = ::Math_obj::ceil(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(405)
		int desty = ((starty + (int)1) + _g11);		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(408)
		if (((bool((bool((bool((startx > this->columns)) || bool((starty > this->rows)))) || bool((destx < (int)0)))) || bool((desty < (int)0))))){
			HX_STACK_LINE(409)
			return null();
		}
		HX_STACK_LINE(412)
		if (((startx < (int)0))){
			HX_STACK_LINE(412)
			startx = (int)0;
		}
		HX_STACK_LINE(413)
		if (((destx > this->columns))){
			HX_STACK_LINE(413)
			destx = this->columns;
		}
		HX_STACK_LINE(414)
		if (((starty < (int)0))){
			HX_STACK_LINE(414)
			starty = (int)0;
		}
		HX_STACK_LINE(415)
		if (((desty > this->rows))){
			HX_STACK_LINE(415)
			desty = this->rows;
		}
		HX_STACK_LINE(417)
		int _g12 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(417)
		int _g13 = (startx * _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(417)
		Float _g14 = (px + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(417)
		Float _g15 = (_g14 * scaleX);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(417)
		px = _g15;
		HX_STACK_LINE(418)
		int _g16 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(418)
		int _g17 = (starty * _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(418)
		Float _g18 = (py + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(418)
		Float _g19 = (_g18 * scaleY);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(418)
		py = _g19;
		HX_STACK_LINE(420)
		Dynamic row;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(421)
		cellY = py;
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g20 = starty;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				if ((!(((_g20 < desty))))){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				int y = (_g20)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(424)
				cellX = px;
				HX_STACK_LINE(425)
				row = this->data->__GetItem(y);
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					int _g110 = startx;		HX_STACK_VAR(_g110,"_g110");
					HX_STACK_LINE(426)
					while((true)){
						HX_STACK_LINE(426)
						if ((!(((_g110 < destx))))){
							HX_STACK_LINE(426)
							break;
						}
						HX_STACK_LINE(426)
						int x = (_g110)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(428)
						Dynamic tile = row->__GetItem(x);		HX_STACK_VAR(tile,"tile");
						HX_STACK_LINE(429)
						if (((bool((tile == null())) || bool((tile->__Field(HX_CSTRING("type"),true) == null()))))){
						}
						else{
							HX_STACK_LINE(432)
							if (((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))){
								HX_STACK_LINE(434)
								graphics->lineStyle((int)1,(int)16777215,0.3,null(),null(),null(),null(),null());
								HX_STACK_LINE(435)
								graphics->drawRect(cellX,cellY,stepX,stepY);
								HX_STACK_LINE(437)
								if (((bool((x < (this->columns - (int)1))) && bool((row->__GetItem((x + (int)1))->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Empty))))){
									HX_STACK_LINE(439)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(440)
									graphics->moveTo((cellX + stepX),cellY);
									HX_STACK_LINE(441)
									graphics->lineTo((cellX + stepX),(cellY + stepY));
								}
								HX_STACK_LINE(443)
								if (((bool((x > (int)0)) && bool((row->__GetItem((x - (int)1))->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Empty))))){
									HX_STACK_LINE(445)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(446)
									graphics->moveTo(cellX,cellY);
									HX_STACK_LINE(447)
									graphics->lineTo(cellX,(cellY + stepY));
								}
								HX_STACK_LINE(449)
								if (((bool((y < (this->rows - (int)1))) && bool((this->data->__GetItem((y + (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Empty))))){
									HX_STACK_LINE(451)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(452)
									graphics->moveTo(cellX,(cellY + stepY));
									HX_STACK_LINE(453)
									graphics->lineTo((cellX + stepX),(cellY + stepY));
								}
								HX_STACK_LINE(455)
								if (((bool((y > (int)0)) && bool((this->data->__GetItem((y - (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Empty))))){
									HX_STACK_LINE(457)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(458)
									graphics->moveTo(cellX,cellY);
									HX_STACK_LINE(459)
									graphics->lineTo((cellX + stepX),cellY);
								}
							}
							else{
								HX_STACK_LINE(462)
								if (((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) || bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope))))){
									HX_STACK_LINE(464)
									Float offset = (tile->__Field(HX_CSTRING("yOffset"),true) * scaleY);		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(465)
									Float xpos = cellX;		HX_STACK_VAR(xpos,"xpos");
									HX_STACK_LINE(466)
									Float endx = stepX;		HX_STACK_VAR(endx,"endx");
									HX_STACK_LINE(467)
									Float ypos = (cellY + offset);		HX_STACK_VAR(ypos,"ypos");
									HX_STACK_LINE(468)
									Float endy = (tile->__Field(HX_CSTRING("slope"),true) * endx);		HX_STACK_VAR(endy,"endy");
									HX_STACK_LINE(471)
									if (((offset < (int)0))){
										HX_STACK_LINE(473)
										Float fx = (Float(-(offset)) / Float(tile->__Field(HX_CSTRING("slope"),true)));		HX_STACK_VAR(fx,"fx");
										HX_STACK_LINE(474)
										endx = (stepX - fx);
										HX_STACK_LINE(475)
										xpos = (cellX + fx);
										HX_STACK_LINE(476)
										ypos = cellY;
										HX_STACK_LINE(479)
										if (((bool((y <= (int)0)) || bool((this->data->__GetItem((y - (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))))){
											HX_STACK_LINE(481)
											graphics->moveTo(cellX,ypos);
											HX_STACK_LINE(482)
											graphics->lineTo(xpos,ypos);
										}
									}
									else{
										HX_STACK_LINE(485)
										int _g201 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g201,"_g201");
										HX_STACK_LINE(485)
										if (((offset > _g201))){
											HX_STACK_LINE(487)
											int _g21 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(487)
											Float _g22 = -(((offset - _g21)));		HX_STACK_VAR(_g22,"_g22");
											HX_STACK_LINE(487)
											Float fx = (Float(_g22) / Float(tile->__Field(HX_CSTRING("slope"),true)));		HX_STACK_VAR(fx,"fx");
											HX_STACK_LINE(488)
											endx = (stepX - fx);
											HX_STACK_LINE(489)
											xpos = (cellX + fx);
											HX_STACK_LINE(490)
											ypos = (cellY + stepY);
											HX_STACK_LINE(493)
											if (((bool((y >= (this->rows - (int)1))) || bool((this->data->__GetItem((y + (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))))){
												HX_STACK_LINE(495)
												graphics->moveTo(cellX,ypos);
												HX_STACK_LINE(496)
												graphics->lineTo(xpos,ypos);
											}
										}
										else{
											HX_STACK_LINE(499)
											if ((((offset + endy) < (int)0))){
												HX_STACK_LINE(501)
												Float fx = (Float(-(offset)) / Float(tile->__Field(HX_CSTRING("slope"),true)));		HX_STACK_VAR(fx,"fx");
												HX_STACK_LINE(502)
												endx = fx;
												HX_STACK_LINE(505)
												if (((bool((y <= (int)0)) || bool((this->data->__GetItem((y - (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))))){
													HX_STACK_LINE(507)
													graphics->moveTo((cellX + fx),cellY);
													HX_STACK_LINE(508)
													graphics->lineTo((cellX + stepX),cellY);
												}
											}
											else{
												HX_STACK_LINE(511)
												int _g23 = ::Std_obj::_int(this->_tile->height);		HX_STACK_VAR(_g23,"_g23");
												HX_STACK_LINE(511)
												if ((((offset + endy) > _g23))){
													HX_STACK_LINE(513)
													int _g24 = ::Std_obj::_int(this->_tile->width);		HX_STACK_VAR(_g24,"_g24");
													HX_STACK_LINE(513)
													Float _g25 = -(((offset - _g24)));		HX_STACK_VAR(_g25,"_g25");
													HX_STACK_LINE(513)
													Float fx = (Float(_g25) / Float(tile->__Field(HX_CSTRING("slope"),true)));		HX_STACK_VAR(fx,"fx");
													HX_STACK_LINE(514)
													endx = fx;
													HX_STACK_LINE(517)
													if (((bool((y >= (this->rows - (int)1))) || bool((this->data->__GetItem((y + (int)1))->__GetItem(x)->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))))){
														HX_STACK_LINE(519)
														graphics->moveTo((cellX + fx),(cellY + stepY));
														HX_STACK_LINE(520)
														graphics->lineTo((cellX + stepX),(cellY + stepY));
													}
												}
											}
										}
									}
									HX_STACK_LINE(525)
									endy = (tile->__Field(HX_CSTRING("slope"),true) * endx);
									HX_STACK_LINE(527)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(528)
									graphics->moveTo(xpos,ypos);
									HX_STACK_LINE(529)
									graphics->lineTo((xpos + endx),(ypos + endy));
								}
							}
						}
						HX_STACK_LINE(532)
						hx::AddEq(cellX,stepX);
					}
				}
				HX_STACK_LINE(534)
				hx::AddEq(cellY,stepY);
			}
		}
	}
return null();
}


Dynamic SlopedGrid_obj::_emptyTile;


SlopedGrid_obj::SlopedGrid_obj()
{
}

void SlopedGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlopedGrid);
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

void SlopedGrid_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic SlopedGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_emptyTile") ) { return _emptyTile; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		if (HX_FIELD_EQ(inName,"collideBox") ) { return collideBox_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"collidePointInSlope") ) { return collidePointInSlope_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SlopedGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
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
	case 10:
		if (HX_FIELD_EQ(inName,"_emptyTile") ) { _emptyTile=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SlopedGrid_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("_emptyTile"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SlopedGrid_obj,usePositions),HX_CSTRING("usePositions")},
	{hx::fsInt,(int)offsetof(SlopedGrid_obj,columns),HX_CSTRING("columns")},
	{hx::fsInt,(int)offsetof(SlopedGrid_obj,rows),HX_CSTRING("rows")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SlopedGrid_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(SlopedGrid_obj,_tile),HX_CSTRING("_tile")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(SlopedGrid_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(SlopedGrid_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(SlopedGrid_obj,_point2),HX_CSTRING("_point2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("usePositions"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collidePointInSlope"),
	HX_CSTRING("setTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("getTile"),
	HX_CSTRING("setRect"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("data"),
	HX_CSTRING("collideBox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("_tile"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_point"),
	HX_CSTRING("_point2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SlopedGrid_obj::_emptyTile,"_emptyTile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SlopedGrid_obj::_emptyTile,"_emptyTile");
};

#endif

Class SlopedGrid_obj::__mClass;

void SlopedGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.SlopedGrid"), hx::TCanCast< SlopedGrid_obj> ,sStaticFields,sMemberFields,
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

void SlopedGrid_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",544,0xc5c3ae1e)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("type") , ::com::haxepunk::masks::TileType_obj::Empty,false);
			return __result;
		}
		return null();
	}
};
	_emptyTile= _Function_0_1::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
