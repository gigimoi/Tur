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
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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

Void Circle_obj::__construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Circle","new",0x09a76442,"com.haxepunk.masks.Circle.new","com/haxepunk/masks/Circle.hx",25,0xc8cd356d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_radius,"radius")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int radius = __o_radius.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(26)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(27)
	this->set_radius(radius);
	HX_STACK_LINE(28)
	this->_x = (x + radius);
	HX_STACK_LINE(29)
	this->_y = (y + radius);
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(31)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(32)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(33)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(34)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::SlopedGrid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(35)
		this->_check->set(key,this->collideSlopedGrid_dyn());
	}
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(__o_radius,__o_x,__o_y);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Circle_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideMask",0xa6d0f96c,"com.haxepunk.masks.Circle.collideMask","com/haxepunk/masks/Circle.hx",40,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",41,0xc8cd356d)
			{
				HX_STACK_LINE(41)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",41,0xc8cd356d)
			{
				HX_STACK_LINE(41)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	Float distanceX = ::Math_obj::abs((((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other)) - (other->_parent->width * 0.5)));		HX_STACK_VAR(distanceX,"distanceX");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",42,0xc8cd356d)
			{
				HX_STACK_LINE(42)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",42,0xc8cd356d)
			{
				HX_STACK_LINE(42)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	Float distanceY = ::Math_obj::abs((((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other)) - (other->_parent->height * 0.5)));		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(44)
	if (((bool((distanceX > ((other->_parent->width * 0.5) + this->_radius))) || bool((distanceY > ((other->_parent->height * 0.5) + this->_radius)))))){
		HX_STACK_LINE(47)
		return false;
	}
	HX_STACK_LINE(49)
	if (((bool((distanceX <= (other->_parent->width * 0.5))) || bool((distanceY <= (other->_parent->height * 0.5)))))){
		HX_STACK_LINE(51)
		return true;
	}
	HX_STACK_LINE(53)
	Float distanceToCorner = ((((distanceX - (other->_parent->width * 0.5))) * ((distanceX - (other->_parent->width * 0.5)))) + (((distanceY - (other->_parent->height * 0.5))) * ((distanceY - (other->_parent->height * 0.5)))));		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(56)
	return (distanceToCorner <= this->_squaredRadius);
}


bool Circle_obj::collideCircle( ::com::haxepunk::masks::Circle other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideCircle",0x53074a90,"com.haxepunk.masks.Circle.collideCircle","com/haxepunk/masks/Circle.hx",60,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(61)
	Float dx;		HX_STACK_VAR(dx,"dx");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",61,0xc8cd356d)
			{
				HX_STACK_LINE(61)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Circle &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",61,0xc8cd356d)
			{
				HX_STACK_LINE(61)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(61)
	dx = ((_Function_1_1::Block(this) + this->_x) - ((_Function_1_2::Block(other) + other->_x)));
	HX_STACK_LINE(62)
	Float dy;		HX_STACK_VAR(dy,"dy");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",62,0xc8cd356d)
			{
				HX_STACK_LINE(62)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(62)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",62,0xc8cd356d)
			{
				HX_STACK_LINE(62)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(62)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(62)
	dy = ((_Function_1_3::Block(this) + this->_y) - ((_Function_1_4::Block(other) + other->_y)));
	HX_STACK_LINE(63)
	Float _g = ::Math_obj::pow((this->_radius + other->_radius),(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(63)
	return (((dx * dx) + (dy * dy)) < _g);
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideGridTile( Float mx,Float my,Float hTileWidth,Float hTileHeight,Float thisX,Float thisY){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideGridTile",0xe0bca194,"com.haxepunk.masks.Circle.collideGridTile","com/haxepunk/masks/Circle.hx",67,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mx,"mx")
	HX_STACK_ARG(my,"my")
	HX_STACK_ARG(hTileWidth,"hTileWidth")
	HX_STACK_ARG(hTileHeight,"hTileHeight")
	HX_STACK_ARG(thisX,"thisX")
	HX_STACK_ARG(thisY,"thisY")
	HX_STACK_LINE(68)
	bool collide = false;		HX_STACK_VAR(collide,"collide");
	HX_STACK_LINE(69)
	Float dx = ::Math_obj::abs((thisX - mx));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(71)
	if (((dx <= (hTileWidth + this->_radius)))){
		HX_STACK_LINE(73)
		Float dy = ::Math_obj::abs((thisY - my));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(75)
		if (((dy <= (hTileHeight + this->_radius)))){
			HX_STACK_LINE(77)
			if (((bool((dx <= hTileWidth)) || bool((dy <= hTileHeight))))){
				HX_STACK_LINE(79)
				collide = true;
			}
			else{
				HX_STACK_LINE(83)
				Float xCornerDist = (dx - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
				HX_STACK_LINE(84)
				Float yCornerDist = (dy - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
				HX_STACK_LINE(86)
				if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= this->_squaredRadius))){
					HX_STACK_LINE(87)
					collide = true;
				}
			}
		}
	}
	HX_STACK_LINE(91)
	return collide;
}


HX_DEFINE_DYNAMIC_FUNC6(Circle_obj,collideGridTile,return )

bool Circle_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideGrid",0xa2e68f46,"com.haxepunk.masks.Circle.collideGrid","com/haxepunk/masks/Circle.hx",95,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(96)
	Float thisX;		HX_STACK_VAR(thisX,"thisX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",96,0xc8cd356d)
			{
				HX_STACK_LINE(96)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(96)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(96)
	thisX = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(97)
	Float thisY;		HX_STACK_VAR(thisY,"thisY");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",97,0xc8cd356d)
			{
				HX_STACK_LINE(97)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(97)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	thisY = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(99)
	int _g = other->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(99)
	Float otherX;		HX_STACK_VAR(otherX,"otherX");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",99,0xc8cd356d)
			{
				HX_STACK_LINE(99)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(99)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(99)
	otherX = (_g + _Function_1_3::Block(other));
	HX_STACK_LINE(100)
	int _g1 = other->get_y();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(100)
	Float otherY;		HX_STACK_VAR(otherY,"otherY");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",100,0xc8cd356d)
			{
				HX_STACK_LINE(100)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(100)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	otherY = (_g1 + _Function_1_4::Block(other));
	HX_STACK_LINE(102)
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	HX_STACK_LINE(102)
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(104)
	int _g2 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(104)
	Float _g3 = (Float(((entityDistX - this->_radius))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(104)
	int minx = ::Math_obj::floor(_g3);		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(105)
	int _g4 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(105)
	Float _g5 = (Float(((entityDistY - this->_radius))) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(105)
	int miny = ::Math_obj::floor(_g5);		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(106)
	int _g6 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(106)
	Float _g7 = (Float(((entityDistX + this->_radius))) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(106)
	int maxx = ::Math_obj::ceil(_g7);		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(107)
	int _g8 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(107)
	Float _g9 = (Float(((entityDistY + this->_radius))) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(107)
	int maxy = ::Math_obj::ceil(_g9);		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(109)
	if (((minx < (int)0))){
		HX_STACK_LINE(109)
		minx = (int)0;
	}
	HX_STACK_LINE(110)
	if (((miny < (int)0))){
		HX_STACK_LINE(110)
		miny = (int)0;
	}
	HX_STACK_LINE(111)
	if (((maxx > other->columns))){
		HX_STACK_LINE(111)
		maxx = other->columns;
	}
	HX_STACK_LINE(112)
	if (((maxy > other->rows))){
		HX_STACK_LINE(112)
		maxy = other->rows;
	}
	HX_STACK_LINE(114)
	int _g10 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(114)
	Float hTileWidth = (_g10 * 0.5);		HX_STACK_VAR(hTileWidth,"hTileWidth");
	HX_STACK_LINE(115)
	int _g11 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(115)
	Float hTileHeight = (_g11 * 0.5);		HX_STACK_VAR(hTileHeight,"hTileHeight");
	HX_STACK_LINE(117)
	Float dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(117)
	int _g12 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(117)
	int _g13 = (miny * _g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(117)
	Float dy = (otherY + _g13);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g14 = miny;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			if ((!(((_g14 < maxy))))){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			int yy = (_g14)++;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(120)
			int _g141 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g141,"_g141");
			HX_STACK_LINE(120)
			int _g15 = (minx * _g141);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(120)
			Float _g16 = (otherX + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(120)
			dx = _g16;
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				int _g17 = minx;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(121)
				while((true)){
					HX_STACK_LINE(121)
					if ((!(((_g17 < maxx))))){
						HX_STACK_LINE(121)
						break;
					}
					HX_STACK_LINE(121)
					int xx = (_g17)++;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(123)
					if ((other->getTile(xx,yy))){
						struct _Function_6_1{
							inline static bool Block( Float &thisY,Float &hTileWidth,hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this,Float &dy,Float &dx,Float &thisX,Float &hTileHeight){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",125,0xc8cd356d)
								{
									HX_STACK_LINE(125)
									bool collide = false;		HX_STACK_VAR(collide,"collide");
									HX_STACK_LINE(125)
									Float dx1 = ::Math_obj::abs((thisX - ((dx + hTileWidth))));		HX_STACK_VAR(dx1,"dx1");
									HX_STACK_LINE(125)
									if (((dx1 <= (hTileWidth + __this->_radius)))){
										HX_STACK_LINE(125)
										Float dy1 = ::Math_obj::abs((thisY - ((dy + hTileHeight))));		HX_STACK_VAR(dy1,"dy1");
										HX_STACK_LINE(125)
										if (((dy1 <= (hTileHeight + __this->_radius)))){
											HX_STACK_LINE(125)
											if (((bool((dx1 <= hTileWidth)) || bool((dy1 <= hTileHeight))))){
												HX_STACK_LINE(125)
												collide = true;
											}
											else{
												HX_STACK_LINE(125)
												Float xCornerDist = (dx1 - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
												HX_STACK_LINE(125)
												Float yCornerDist = (dy1 - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
												HX_STACK_LINE(125)
												if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= __this->_squaredRadius))){
													HX_STACK_LINE(125)
													collide = true;
												}
											}
										}
									}
									HX_STACK_LINE(125)
									return collide;
								}
								return null();
							}
						};
						HX_STACK_LINE(125)
						if ((_Function_6_1::Block(thisY,hTileWidth,this,dy,dx,thisX,hTileHeight))){
							HX_STACK_LINE(127)
							return true;
						}
					}
					HX_STACK_LINE(129)
					int _g171 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g171,"_g171");
					HX_STACK_LINE(129)
					hx::AddEq(dx,_g171);
				}
			}
			HX_STACK_LINE(131)
			int _g18 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(131)
			hx::AddEq(dy,_g18);
		}
	}
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideGrid,return )

bool Circle_obj::collideSlopedGrid( ::com::haxepunk::masks::SlopedGrid other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideSlopedGrid",0x310224bf,"com.haxepunk.masks.Circle.collideSlopedGrid","com/haxepunk/masks/Circle.hx",138,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(139)
	Float thisX;		HX_STACK_VAR(thisX,"thisX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",139,0xc8cd356d)
			{
				HX_STACK_LINE(139)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(139)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(139)
	thisX = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(140)
	Float thisY;		HX_STACK_VAR(thisY,"thisY");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",140,0xc8cd356d)
			{
				HX_STACK_LINE(140)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(140)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(140)
	thisY = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(142)
	int _g = other->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	Float otherX;		HX_STACK_VAR(otherX,"otherX");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",142,0xc8cd356d)
			{
				HX_STACK_LINE(142)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(142)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(142)
	otherX = (_g + _Function_1_3::Block(other));
	HX_STACK_LINE(143)
	int _g1 = other->get_y();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(143)
	Float otherY;		HX_STACK_VAR(otherY,"otherY");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::SlopedGrid &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",143,0xc8cd356d)
			{
				HX_STACK_LINE(143)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(143)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(143)
	otherY = (_g1 + _Function_1_4::Block(other));
	HX_STACK_LINE(145)
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	HX_STACK_LINE(145)
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(147)
	int _g2 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(147)
	Float _g3 = (Float(((entityDistX - this->_radius))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(147)
	int minx = ::Math_obj::floor(_g3);		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(148)
	int _g4 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(148)
	Float _g5 = (Float(((entityDistY - this->_radius))) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(148)
	int miny = ::Math_obj::floor(_g5);		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(149)
	int _g6 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(149)
	Float _g7 = (Float(((entityDistX + this->_radius))) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(149)
	int maxx = ::Math_obj::ceil(_g7);		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(150)
	int _g8 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(150)
	Float _g9 = (Float(((entityDistY + this->_radius))) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(150)
	int maxy = ::Math_obj::ceil(_g9);		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(152)
	if (((minx < (int)0))){
		HX_STACK_LINE(152)
		minx = (int)0;
	}
	HX_STACK_LINE(153)
	if (((miny < (int)0))){
		HX_STACK_LINE(153)
		miny = (int)0;
	}
	HX_STACK_LINE(154)
	if (((maxx > other->columns))){
		HX_STACK_LINE(154)
		maxx = other->columns;
	}
	HX_STACK_LINE(155)
	if (((maxy > other->rows))){
		HX_STACK_LINE(155)
		maxy = other->rows;
	}
	HX_STACK_LINE(157)
	int _g10 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(157)
	Float hTileWidth = (_g10 * 0.5);		HX_STACK_VAR(hTileWidth,"hTileWidth");
	HX_STACK_LINE(158)
	int _g11 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(158)
	Float hTileHeight = (_g11 * 0.5);		HX_STACK_VAR(hTileHeight,"hTileHeight");
	HX_STACK_LINE(160)
	Float dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(160)
	int _g12 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(160)
	int _g13 = (miny * _g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(160)
	Float dy = (otherY + _g13);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int _g14 = miny;		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			if ((!(((_g14 < maxy))))){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			int yy = (_g14)++;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(163)
			int _g141 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g141,"_g141");
			HX_STACK_LINE(163)
			int _g15 = (minx * _g141);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(163)
			Float _g16 = (otherX + _g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(163)
			dx = _g16;
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				int _g17 = minx;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(164)
				while((true)){
					HX_STACK_LINE(164)
					if ((!(((_g17 < maxx))))){
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(164)
					int xx = (_g17)++;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(166)
					Dynamic tile;		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						int column = xx;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(166)
						int row = yy;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(166)
						if ((!(((bool((bool((bool((column >= (int)0)) && bool((column < other->columns)))) && bool((row >= (int)0)))) && bool((row < other->rows))))))){
							HX_STACK_LINE(166)
							tile = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
						}
						else{
							HX_STACK_LINE(166)
							if ((other->usePositions)){
								HX_STACK_LINE(166)
								int _g171 = ::Std_obj::_int((Float(column) / Float(other->_tile->width)));		HX_STACK_VAR(_g171,"_g171");
								HX_STACK_LINE(166)
								column = _g171;
								HX_STACK_LINE(166)
								int _g18 = ::Std_obj::_int((Float(row) / Float(other->_tile->height)));		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(166)
								row = _g18;
							}
							HX_STACK_LINE(166)
							tile = other->data->__GetItem(row)->__GetItem(column);
						}
					}
					HX_STACK_LINE(167)
					if (((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::Solid))){
						struct _Function_6_1{
							inline static bool Block( Float &thisY,Float &hTileWidth,hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this,Float &dy,Float &dx,Float &thisX,Float &hTileHeight){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",169,0xc8cd356d)
								{
									HX_STACK_LINE(169)
									bool collide = false;		HX_STACK_VAR(collide,"collide");
									HX_STACK_LINE(169)
									Float dx1 = ::Math_obj::abs((thisX - ((dx + hTileWidth))));		HX_STACK_VAR(dx1,"dx1");
									HX_STACK_LINE(169)
									if (((dx1 <= (hTileWidth + __this->_radius)))){
										HX_STACK_LINE(169)
										Float dy1 = ::Math_obj::abs((thisY - ((dy + hTileHeight))));		HX_STACK_VAR(dy1,"dy1");
										HX_STACK_LINE(169)
										if (((dy1 <= (hTileHeight + __this->_radius)))){
											HX_STACK_LINE(169)
											if (((bool((dx1 <= hTileWidth)) || bool((dy1 <= hTileHeight))))){
												HX_STACK_LINE(169)
												collide = true;
											}
											else{
												HX_STACK_LINE(169)
												Float xCornerDist = (dx1 - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
												HX_STACK_LINE(169)
												Float yCornerDist = (dy1 - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
												HX_STACK_LINE(169)
												if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= __this->_squaredRadius))){
													HX_STACK_LINE(169)
													collide = true;
												}
											}
										}
									}
									HX_STACK_LINE(169)
									return collide;
								}
								return null();
							}
						};
						HX_STACK_LINE(169)
						if ((_Function_6_1::Block(thisY,hTileWidth,this,dy,dx,thisX,hTileHeight))){
							HX_STACK_LINE(171)
							return true;
						}
					}
					else{
						HX_STACK_LINE(173)
						if (((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) || bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope))))){
							struct _Function_7_1{
								inline static bool Block( Float &thisY,Dynamic &tile,Float &dy,Float &dx,Float &thisX,::com::haxepunk::masks::SlopedGrid &other){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",176,0xc8cd356d)
									{
										HX_STACK_LINE(176)
										Float y1 = dy;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(176)
										hx::AddEq(y1,tile->__Field(HX_CSTRING("yOffset"),true));
										HX_STACK_LINE(176)
										Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * other->_tile->width);		HX_STACK_VAR(yoff,"yoff");
										HX_STACK_LINE(176)
										Float x2 = (dx + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(176)
										Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(176)
										bool left = ((((x2 - dx)) * ((thisY - y1))) > (((y2 - y1)) * ((thisX - dx))));		HX_STACK_VAR(left,"left");
										HX_STACK_LINE(176)
										return (bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::AboveSlope)) && bool(!(left)))) || bool((bool((tile->__Field(HX_CSTRING("type"),true) == ::com::haxepunk::masks::TileType_obj::BelowSlope)) && bool(left))));
									}
									return null();
								}
							};
							HX_STACK_LINE(176)
							if ((_Function_7_1::Block(thisY,tile,dy,dx,thisX,other))){
								HX_STACK_LINE(178)
								return true;
							}
							HX_STACK_LINE(183)
							Float x1 = dx;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(183)
							Float y1 = (dy + tile->__Field(HX_CSTRING("yOffset"),true));		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(184)
							int _g19 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(184)
							Float yoff = (tile->__Field(HX_CSTRING("slope"),true) * _g19);		HX_STACK_VAR(yoff,"yoff");
							HX_STACK_LINE(185)
							Float x2 = (x1 + (Float(yoff) / Float(tile->__Field(HX_CSTRING("slope"),true))));		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(186)
							Float y2 = (y1 + yoff);		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(188)
							Float dx1 = (x2 - x1);		HX_STACK_VAR(dx1,"dx1");
							HX_STACK_LINE(188)
							Float dy1 = (y2 - y1);		HX_STACK_VAR(dy1,"dy1");
							HX_STACK_LINE(189)
							Float fx = (x1 - thisX);		HX_STACK_VAR(fx,"fx");
							HX_STACK_LINE(189)
							Float fy = (y1 - thisY);		HX_STACK_VAR(fy,"fy");
							HX_STACK_LINE(191)
							Float a = ((dx1 * dx1) + (dy1 * dy1));		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(192)
							Float b = ((((fx * dx1) + (fy * dy1))) * (int)2);		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(193)
							Float c = (((fx * fx) + (fy * fy)) - (this->_radius * this->_radius));		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(194)
							Float discriminant = ((b * b) - (((int)4 * a) * c));		HX_STACK_VAR(discriminant,"discriminant");
							HX_STACK_LINE(195)
							if (((discriminant >= (int)0))){
								HX_STACK_LINE(197)
								Float _g20 = ::Math_obj::sqrt(discriminant);		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(197)
								discriminant = _g20;
								HX_STACK_LINE(198)
								Float t1 = (Float(((-(b) - discriminant))) / Float((((int)2 * a))));		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(199)
								Float t2 = (Float(((-(b) + discriminant))) / Float((((int)2 * a))));		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(201)
								if (((bool((bool((bool((t1 >= (int)0)) && bool((t1 <= (int)1)))) || bool((bool((t2 >= (int)0)) && bool((t2 <= (int)1)))))) || bool((bool((t1 < (int)0)) && bool((t2 > (int)1))))))){
									HX_STACK_LINE(205)
									return true;
								}
							}
						}
					}
					HX_STACK_LINE(209)
					int _g21 = ::Std_obj::_int(other->_tile->width);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(209)
					hx::AddEq(dx,_g21);
				}
			}
			HX_STACK_LINE(211)
			int _g22 = ::Std_obj::_int(other->_tile->height);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(211)
			hx::AddEq(dy,_g22);
		}
	}
	HX_STACK_LINE(213)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideSlopedGrid,return )

bool Circle_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideHitbox",0x5421c618,"com.haxepunk.masks.Circle.collideHitbox","com/haxepunk/masks/Circle.hx",218,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(219)
	Float _otherHalfWidth = (other->_width * 0.5);		HX_STACK_VAR(_otherHalfWidth,"_otherHalfWidth");
	HX_STACK_LINE(220)
	Float _otherHalfHeight = (other->_height * 0.5);		HX_STACK_VAR(_otherHalfHeight,"_otherHalfHeight");
	HX_STACK_LINE(222)
	Float px;		HX_STACK_VAR(px,"px");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",222,0xc8cd356d)
			{
				HX_STACK_LINE(222)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(222)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(222)
	px = (this->_x + _Function_1_1::Block(this));
	HX_STACK_LINE(223)
	Float py;		HX_STACK_VAR(py,"py");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",223,0xc8cd356d)
			{
				HX_STACK_LINE(223)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(223)
	py = (this->_y + _Function_1_2::Block(this));
	HX_STACK_LINE(225)
	Float ox = other->_x;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(225)
	Float oy = other->_y;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(226)
	if (((((  (((other->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(other->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::com::haxepunk::Entity _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			if (((other->_parent != ::com::haxepunk::Entity_obj::_EMPTY))){
				HX_STACK_LINE(228)
				_this = other->_parent;
			}
			else{
				HX_STACK_LINE(228)
				_this = null();
			}
			HX_STACK_LINE(228)
			if ((_this->followCamera)){
				HX_STACK_LINE(228)
				hx::AddEq(ox,(_this->x + ::com::haxepunk::HXP_obj::camera->x));
			}
			else{
				HX_STACK_LINE(228)
				hx::AddEq(ox,_this->x);
			}
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::com::haxepunk::Entity _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			if (((other->_parent != ::com::haxepunk::Entity_obj::_EMPTY))){
				HX_STACK_LINE(229)
				_this = other->_parent;
			}
			else{
				HX_STACK_LINE(229)
				_this = null();
			}
			HX_STACK_LINE(229)
			if ((_this->followCamera)){
				HX_STACK_LINE(229)
				hx::AddEq(oy,(_this->y + ::com::haxepunk::HXP_obj::camera->y));
			}
			else{
				HX_STACK_LINE(229)
				hx::AddEq(oy,_this->y);
			}
		}
	}
	HX_STACK_LINE(232)
	Float distanceX = ::Math_obj::abs(((px - ox) - _otherHalfWidth));		HX_STACK_VAR(distanceX,"distanceX");
	HX_STACK_LINE(233)
	Float distanceY = ::Math_obj::abs(((py - oy) - _otherHalfHeight));		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(235)
	if (((bool((distanceX > (_otherHalfWidth + this->_radius))) || bool((distanceY > (_otherHalfHeight + this->_radius)))))){
		HX_STACK_LINE(237)
		return false;
	}
	HX_STACK_LINE(239)
	if (((bool((distanceX <= _otherHalfWidth)) || bool((distanceY <= _otherHalfHeight))))){
		HX_STACK_LINE(241)
		return true;
	}
	HX_STACK_LINE(243)
	Float distanceToCorner = ((((distanceX - _otherHalfWidth)) * ((distanceX - _otherHalfWidth))) + (((distanceY - _otherHalfHeight)) * ((distanceY - _otherHalfHeight))));		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(246)
	return (distanceToCorner <= this->_squaredRadius);
}


Void Circle_obj::project( ::openfl::_v2::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","project",0xac933fbb,"com.haxepunk.masks.Circle.project","com/haxepunk/masks/Circle.hx",251,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(252)
		projection->min = -(this->_radius);
		HX_STACK_LINE(253)
		projection->max = this->_radius;
	}
return null();
}


Void Circle_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","debugDraw",0xf8727959,"com.haxepunk.masks.Circle.debugDraw","com/haxepunk/masks/Circle.hx",259,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",259,0xc8cd356d)
				{
					HX_STACK_LINE(259)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Circle_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Circle.hx",259,0xc8cd356d)
				{
					HX_STACK_LINE(259)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(259)
		graphics->drawCircle(((((_Function_1_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x)) * scaleX),((((_Function_1_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y)) * scaleY),(this->_radius * scaleX));
	}
return null();
}


int Circle_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_x",0x45aa75b1,"com.haxepunk.masks.Circle.get_x","com/haxepunk/masks/Circle.hx",262,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	return (this->_x - this->_radius);
}


int Circle_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_y",0x45aa75b2,"com.haxepunk.masks.Circle.get_y","com/haxepunk/masks/Circle.hx",263,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return (this->_y - this->_radius);
}


int Circle_obj::get_radius( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_radius",0x2e9bcc79,"com.haxepunk.masks.Circle.get_radius","com/haxepunk/masks/Circle.hx",269,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

int Circle_obj::set_radius( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","set_radius",0x32196aed,"com.haxepunk.masks.Circle.set_radius","com/haxepunk/masks/Circle.hx",271,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(272)
	if (((this->_radius == value))){
		HX_STACK_LINE(272)
		return value;
	}
	HX_STACK_LINE(273)
	this->_radius = value;
	HX_STACK_LINE(274)
	this->_squaredRadius = (value * value);
	HX_STACK_LINE(275)
	int _g = this->set_width((this->_radius + this->_radius));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(275)
	this->set_height(_g);
	HX_STACK_LINE(276)
	if (((this->list != null()))){
		HX_STACK_LINE(276)
		this->list->update();
	}
	else{
		HX_STACK_LINE(277)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(277)
			this->update();
		}
	}
	HX_STACK_LINE(278)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )

Void Circle_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","update",0x93520b67,"com.haxepunk.masks.Circle.update","com/haxepunk/masks/Circle.hx",285,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
			HX_STACK_LINE(288)
			this->_parent->originX = (-(this->_x) + this->_radius);
			HX_STACK_LINE(289)
			this->_parent->originY = (-(this->_y) + this->_radius);
			HX_STACK_LINE(290)
			int _g = this->_parent->width = (this->_radius + this->_radius);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			this->_parent->height = _g;
			HX_STACK_LINE(293)
			if (((this->list != null()))){
				HX_STACK_LINE(294)
				this->list->update();
			}
		}
	}
return null();
}



Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { return _squaredRadius; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideGridTile") ) { return collideGridTile_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collideSlopedGrid") ) { return collideSlopedGrid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { _squaredRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_squaredRadius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Circle_obj,_radius),HX_CSTRING("_radius")},
	{hx::fsInt,(int)offsetof(Circle_obj,_squaredRadius),HX_CSTRING("_squaredRadius")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideGridTile"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideSlopedGrid"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("project"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("set_radius"),
	HX_CSTRING("update"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_squaredRadius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
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

void Circle_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
