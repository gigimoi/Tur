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
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
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

Void Polygon_obj::__construct(Array< ::Dynamic > points,::openfl::_v2::geom::Point origin)
{
HX_STACK_FRAME("com.haxepunk.masks.Polygon","new",0x4d8c772c,"com.haxepunk.masks.Polygon.new","com/haxepunk/masks/Polygon.hx",17,0xc83634e5)
HX_STACK_THIS(this)
HX_STACK_ARG(points,"points")
HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(33)
	this->maxY = (int)0;
	HX_STACK_LINE(31)
	this->maxX = (int)0;
	HX_STACK_LINE(29)
	this->minY = (int)0;
	HX_STACK_LINE(27)
	this->minX = (int)0;
	HX_STACK_LINE(42)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(43)
	if (((points->length < (int)3))){
		HX_STACK_LINE(43)
		HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
	}
	HX_STACK_LINE(44)
	this->_points = points;
	HX_STACK_LINE(46)
	::com::haxepunk::Entity _g = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->_fakeEntity = _g;
	HX_STACK_LINE(47)
	::com::haxepunk::masks::Hitbox _g1 = ::com::haxepunk::masks::Hitbox_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	this->_fakeTileHitbox = _g1;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(49)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(50)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(51)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(52)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(53)
		this->_check->set(key,this->collidePolygon_dyn());
	}
	HX_STACK_LINE(55)
	::openfl::_v2::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	if (((origin != null()))){
		HX_STACK_LINE(55)
		_g2 = origin;
	}
	else{
		HX_STACK_LINE(55)
		_g2 = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	}
	HX_STACK_LINE(55)
	this->origin = _g2;
	HX_STACK_LINE(56)
	this->_angle = (int)0;
	HX_STACK_LINE(58)
	this->updateAxes();
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::openfl::_v2::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideMask",0xa1c20656,"com.haxepunk.masks.Polygon.collideMask","com/haxepunk/masks/Polygon.hx",65,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(66)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(67)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",67,0xc83634e5)
			{
				HX_STACK_LINE(67)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",67,0xc83634e5)
			{
				HX_STACK_LINE(67)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(67)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));
	HX_STACK_LINE(68)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",68,0xc83634e5)
			{
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",68,0xc83634e5)
			{
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));
	HX_STACK_LINE(71)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(72)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(74)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(75)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",78,0xc83634e5)
			{
				HX_STACK_LINE(78)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(78)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(78)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(80)
		return false;
	}
	HX_STACK_LINE(84)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(85)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(87)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(88)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",91,0xc83634e5)
			{
				HX_STACK_LINE(91)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(91)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(91)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(91)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(93)
		return false;
	}
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::openfl::_v2::geom::Point a = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(100)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(101)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(103)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(104)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(105)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",108,0xc83634e5)
					{
						HX_STACK_LINE(108)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(108)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(108)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(108)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(110)
				return false;
			}
		}
	}
	HX_STACK_LINE(113)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideHitbox",0xb71f6182,"com.haxepunk.masks.Polygon.collideHitbox","com/haxepunk/masks/Polygon.hx",120,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitbox,"hitbox")
	HX_STACK_LINE(121)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(122)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",122,0xc83634e5)
			{
				HX_STACK_LINE(122)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(122)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",122,0xc83634e5)
			{
				HX_STACK_LINE(122)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(122)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(122)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(hitbox));
	HX_STACK_LINE(123)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",123,0xc83634e5)
			{
				HX_STACK_LINE(123)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",123,0xc83634e5)
			{
				HX_STACK_LINE(123)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(123)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(hitbox));
	HX_STACK_LINE(126)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(127)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(129)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(130)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",133,0xc83634e5)
			{
				HX_STACK_LINE(133)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(133)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(133)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(133)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(139)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(140)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(142)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(143)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",146,0xc83634e5)
			{
				HX_STACK_LINE(146)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(146)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(146)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(146)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			::openfl::_v2::geom::Point a = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(153)
			++(_g);
			HX_STACK_LINE(155)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(156)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(158)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(159)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(160)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",163,0xc83634e5)
					{
						HX_STACK_LINE(163)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(163)
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(163)
						return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(163)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(165)
				return false;
			}
		}
	}
	HX_STACK_LINE(168)
	return true;
}


bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideGrid",0x9dd79c30,"com.haxepunk.masks.Polygon.collideGrid","com/haxepunk/masks/Polygon.hx",178,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(179)
	int tileW = ::Std_obj::_int(grid->_tile->width);		HX_STACK_VAR(tileW,"tileW");
	HX_STACK_LINE(180)
	int tileH = ::Std_obj::_int(grid->_tile->height);		HX_STACK_VAR(tileH,"tileH");
	HX_STACK_LINE(181)
	bool solidTile;		HX_STACK_VAR(solidTile,"solidTile");
	HX_STACK_LINE(183)
	this->_fakeEntity->width = tileW;
	HX_STACK_LINE(184)
	this->_fakeEntity->height = tileH;
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(185)
		if ((_this->followCamera)){
			HX_STACK_LINE(185)
			this->_fakeEntity->x = (_this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(185)
			this->_fakeEntity->x = _this->x;
		}
	}
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(186)
		if ((_this->followCamera)){
			HX_STACK_LINE(186)
			this->_fakeEntity->y = (_this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(186)
			this->_fakeEntity->y = _this->y;
		}
	}
	HX_STACK_LINE(187)
	this->_fakeEntity->originX = (grid->_parent->originX + grid->_x);
	HX_STACK_LINE(188)
	this->_fakeEntity->originY = (grid->_parent->originY + grid->_y);
	HX_STACK_LINE(190)
	this->_fakeTileHitbox->_width = tileW;
	HX_STACK_LINE(191)
	this->_fakeTileHitbox->_height = tileH;
	HX_STACK_LINE(192)
	this->_fakeTileHitbox->set_parent(this->_fakeEntity);
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		int _g = grid->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			int r = (_g1)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(196)
				int _g2 = grid->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(196)
				while((true)){
					HX_STACK_LINE(196)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(196)
						break;
					}
					HX_STACK_LINE(196)
					int c = (_g3)++;		HX_STACK_VAR(c,"c");
					struct _Function_5_1{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",198,0xc83634e5)
							{
								HX_STACK_LINE(198)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(198)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(198)
					this->_fakeEntity->x = ((_Function_5_1::Block(grid) + grid->_x) + (c * tileW));
					struct _Function_5_2{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",199,0xc83634e5)
							{
								HX_STACK_LINE(199)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(199)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(199)
					this->_fakeEntity->y = ((_Function_5_2::Block(grid) + grid->_y) + (r * tileH));
					HX_STACK_LINE(200)
					bool _g4 = grid->getTile(c,r);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(200)
					solidTile = _g4;
					HX_STACK_LINE(202)
					if (((  ((solidTile)) ? bool(this->collideHitbox(this->_fakeTileHitbox)) : bool(false) ))){
						HX_STACK_LINE(202)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(205)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideCircle",0xb604e5fa,"com.haxepunk.masks.Polygon.collideCircle","com/haxepunk/masks/Polygon.hx",212,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(213)
	int edgesCrossed = (int)0;		HX_STACK_VAR(edgesCrossed,"edgesCrossed");
	HX_STACK_LINE(214)
	::openfl::_v2::geom::Point p1;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(214)
	::openfl::_v2::geom::Point p2;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(215)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(215)
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(216)
	int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
	HX_STACK_LINE(217)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",217,0xc83634e5)
			{
				HX_STACK_LINE(217)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(217)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(217)
	offsetX = (_Function_1_1::Block(this) + this->_x);
	HX_STACK_LINE(218)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",218,0xc83634e5)
			{
				HX_STACK_LINE(218)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(218)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	offsetY = (_Function_1_2::Block(this) + this->_y);
	HX_STACK_LINE(222)
	i = (int)0;
	HX_STACK_LINE(223)
	j = (nPoints - (int)1);
	HX_STACK_LINE(224)
	while((true)){
		HX_STACK_LINE(224)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(224)
			break;
		}
		HX_STACK_LINE(226)
		p1 = this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >();
		HX_STACK_LINE(227)
		p2 = this->_points->__get(j).StaticCast< ::openfl::_v2::geom::Point >();
		HX_STACK_LINE(229)
		Float distFromCenter;		HX_STACK_VAR(distFromCenter,"distFromCenter");
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",229,0xc83634e5)
				{
					HX_STACK_LINE(229)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(229)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(229)
		distFromCenter = (((Float((((p2->x - p1->x)) * ((((circle->_y + _Function_2_1::Block(circle)) - p1->y) - offsetY)))) / Float(((p2->y - p1->y)))) + p1->x) + offsetX);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",231,0xc83634e5)
				{
					HX_STACK_LINE(231)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(231)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",231,0xc83634e5)
				{
					HX_STACK_LINE(231)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(231)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",232,0xc83634e5)
				{
					HX_STACK_LINE(232)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(232)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		if (((bool((((p1->y + offsetY) > (circle->_y + _Function_2_2::Block(circle))) != ((p2->y + offsetY) > (circle->_y + _Function_2_3::Block(circle))))) && bool(((circle->_x + _Function_2_4::Block(circle)) < distFromCenter))))){
			HX_STACK_LINE(234)
			(edgesCrossed)++;
		}
		HX_STACK_LINE(236)
		j = i;
		HX_STACK_LINE(237)
		(i)++;
	}
	HX_STACK_LINE(240)
	if (((((int(edgesCrossed) & int((int)1))) > (int)0))){
		HX_STACK_LINE(240)
		return true;
	}
	HX_STACK_LINE(243)
	Float radiusSqr = (circle->_radius * circle->_radius);		HX_STACK_VAR(radiusSqr,"radiusSqr");
	HX_STACK_LINE(244)
	Float cx;		HX_STACK_VAR(cx,"cx");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",244,0xc83634e5)
			{
				HX_STACK_LINE(244)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(244)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(244)
	cx = (circle->_x + _Function_1_3::Block(circle));
	HX_STACK_LINE(245)
	Float cy;		HX_STACK_VAR(cy,"cy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",245,0xc83634e5)
			{
				HX_STACK_LINE(245)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(245)
	cy = (circle->_y + _Function_1_4::Block(circle));
	HX_STACK_LINE(246)
	Float minDistanceSqr = (int)0;		HX_STACK_VAR(minDistanceSqr,"minDistanceSqr");
	HX_STACK_LINE(247)
	Float closestX;		HX_STACK_VAR(closestX,"closestX");
	HX_STACK_LINE(248)
	Float closestY;		HX_STACK_VAR(closestY,"closestY");
	HX_STACK_LINE(250)
	i = (int)0;
	HX_STACK_LINE(251)
	j = (nPoints - (int)1);
	HX_STACK_LINE(252)
	while((true)){
		HX_STACK_LINE(252)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(252)
			break;
		}
		HX_STACK_LINE(254)
		p1 = this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >();
		HX_STACK_LINE(255)
		p2 = this->_points->__get(j).StaticCast< ::openfl::_v2::geom::Point >();
		HX_STACK_LINE(257)
		Float segmentLenSqr = ((((p1->x - p2->x)) * ((p1->x - p2->x))) + (((p1->y - p2->y)) * ((p1->y - p2->y))));		HX_STACK_VAR(segmentLenSqr,"segmentLenSqr");
		HX_STACK_LINE(260)
		Float t = (Float(((((((cx - p1->x) - offsetX)) * ((p2->x - p1->x))) + ((((cy - p1->y) - offsetY)) * ((p2->y - p1->y)))))) / Float(segmentLenSqr));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(262)
		if (((t < (int)0))){
			HX_STACK_LINE(264)
			closestX = p1->x;
			HX_STACK_LINE(265)
			closestY = p1->y;
		}
		else{
			HX_STACK_LINE(267)
			if (((t > (int)1))){
				HX_STACK_LINE(269)
				closestX = p2->x;
				HX_STACK_LINE(270)
				closestY = p2->y;
			}
			else{
				HX_STACK_LINE(274)
				closestX = (p1->x + (t * ((p2->x - p1->x))));
				HX_STACK_LINE(275)
				closestY = (p1->y + (t * ((p2->y - p1->y))));
			}
		}
		HX_STACK_LINE(277)
		hx::AddEq(closestX,offsetX);
		HX_STACK_LINE(278)
		hx::AddEq(closestY,offsetY);
		HX_STACK_LINE(280)
		minDistanceSqr = ((((cx - closestX)) * ((cx - closestX))) + (((cy - closestY)) * ((cy - closestY))));
		HX_STACK_LINE(282)
		if (((minDistanceSqr <= radiusSqr))){
			HX_STACK_LINE(282)
			return true;
		}
		HX_STACK_LINE(284)
		j = i;
		HX_STACK_LINE(285)
		(i)++;
	}
	HX_STACK_LINE(288)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collidePolygon",0xab1efb50,"com.haxepunk.masks.Polygon.collidePolygon","com/haxepunk/masks/Polygon.hx",295,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(296)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(297)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",297,0xc83634e5)
			{
				HX_STACK_LINE(297)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",297,0xc83634e5)
			{
				HX_STACK_LINE(297)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(297)
	offsetX = (((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other)) - other->_x);
	HX_STACK_LINE(298)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",298,0xc83634e5)
			{
				HX_STACK_LINE(298)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(298)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",298,0xc83634e5)
			{
				HX_STACK_LINE(298)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(298)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(298)
	offsetY = (((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other)) - other->_y);
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(302)
			::openfl::_v2::geom::Point a = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(302)
			++(_g);
			HX_STACK_LINE(304)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(305)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(308)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(309)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(310)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",313,0xc83634e5)
					{
						HX_STACK_LINE(313)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(313)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(313)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(315)
				return false;
			}
		}
	}
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		while((true)){
			HX_STACK_LINE(321)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(321)
				break;
			}
			HX_STACK_LINE(321)
			::openfl::_v2::geom::Point a = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(321)
			++(_g);
			HX_STACK_LINE(323)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(324)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(327)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(328)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(329)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",332,0xc83634e5)
					{
						HX_STACK_LINE(332)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(332)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(332)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(334)
				return false;
			}
		}
	}
	HX_STACK_LINE(337)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

Void Polygon_obj::project( ::openfl::_v2::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","project",0x392d0fa5,"com.haxepunk.masks.Polygon.project","com/haxepunk/masks/Polygon.hx",343,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(344)
		::openfl::_v2::geom::Point p = this->_points->__get((int)0).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(346)
		Float min = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(347)
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(351)
				p = this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >();
				HX_STACK_LINE(352)
				Float cur = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(354)
				if (((cur < min))){
					HX_STACK_LINE(356)
					min = cur;
				}
				else{
					HX_STACK_LINE(358)
					if (((cur > max))){
						HX_STACK_LINE(360)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(363)
		projection->min = min;
		HX_STACK_LINE(364)
		projection->max = max;
	}
return null();
}


Void Polygon_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","debugDraw",0x3b0f97c3,"com.haxepunk.masks.Polygon.debugDraw","com/haxepunk/masks/Polygon.hx",369,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(370)
		Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",370,0xc83634e5)
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
		offsetX = ((_Function_1_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(371)
		Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",371,0xc83634e5)
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
		offsetY = ((_Function_1_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(373)
		graphics->beginFill((int)255,.3);
		HX_STACK_LINE(375)
		graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::openfl::_v2::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::openfl::_v2::geom::Point >()->y + offsetY)) * scaleY));
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			while((true)){
				HX_STACK_LINE(376)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(376)
					break;
				}
				HX_STACK_LINE(376)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(378)
				graphics->lineTo((((this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->y + offsetY)) * scaleY));
			}
		}
		HX_STACK_LINE(381)
		graphics->endFill();
		HX_STACK_LINE(384)
		graphics->drawCircle((((offsetX + this->origin->x)) * scaleX),(((offsetY + this->origin->y)) * scaleY),(int)2);
	}
return null();
}


Float Polygon_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_angle",0x7bdf67f6,"com.haxepunk.masks.Polygon.get_angle","com/haxepunk/masks/Polygon.hx",391,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_angle",0x5f305402,"com.haxepunk.masks.Polygon.set_angle","com/haxepunk/masks/Polygon.hx",393,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(394)
	if (((value != this->_angle))){
		HX_STACK_LINE(396)
		this->rotate((value - this->_angle));
		HX_STACK_LINE(397)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(397)
			this->update();
		}
	}
	HX_STACK_LINE(399)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_points",0x7bb08ca0,"com.haxepunk.masks.Polygon.get_points","com/haxepunk/masks/Polygon.hx",409,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_points",0x7f2e2b14,"com.haxepunk.masks.Polygon.set_points","com/haxepunk/masks/Polygon.hx",411,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(412)
	if (((this->_points != value))){
		HX_STACK_LINE(414)
		this->_points = value;
		HX_STACK_LINE(415)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(415)
			this->updateAxes();
		}
	}
	HX_STACK_LINE(417)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Void Polygon_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","update",0x8d1026bd,"com.haxepunk.masks.Polygon.update","com/haxepunk/masks/Polygon.hx",423,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(425)
		int projX = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::firstProj->min);		HX_STACK_VAR(projX,"projX");
		HX_STACK_LINE(426)
		int _g = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(426)
		this->_width = _g;
		HX_STACK_LINE(427)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(428)
		int projY = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::secondProj->min);		HX_STACK_VAR(projY,"projY");
		HX_STACK_LINE(429)
		int _g1 = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(429)
		this->_height = _g1;
		HX_STACK_LINE(431)
		this->minX = (this->_x + projX);
		HX_STACK_LINE(432)
		this->minY = (this->_y + projY);
		HX_STACK_LINE(433)
		int _g2 = ::Math_obj::round((this->minX + this->_width));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(433)
		this->maxX = _g2;
		HX_STACK_LINE(434)
		int _g3 = ::Math_obj::round((this->minY + this->_height));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(434)
		this->maxY = _g3;
		HX_STACK_LINE(436)
		if (((this->list != null()))){
			HX_STACK_LINE(439)
			this->list->update();
		}
		else{
			HX_STACK_LINE(441)
			if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
				HX_STACK_LINE(443)
				this->_parent->originX = (-(this->_x) - projX);
				HX_STACK_LINE(444)
				this->_parent->originY = (-(this->_y) - projY);
				HX_STACK_LINE(445)
				this->_parent->width = this->_width;
				HX_STACK_LINE(446)
				this->_parent->height = this->_height;
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angleDelta){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","rotate",0xd12ae70f,"com.haxepunk.masks.Polygon.rotate","com/haxepunk/masks/Polygon.hx",503,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angleDelta,"angleDelta")
		HX_STACK_LINE(504)
		hx::AddEq(this->_angle,angleDelta);
		HX_STACK_LINE(506)
		hx::MultEq(angleDelta,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(508)
		::openfl::_v2::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(510)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(510)
			while((true)){
				HX_STACK_LINE(510)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(510)
					break;
				}
				HX_STACK_LINE(510)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(512)
				p = this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >();
				HX_STACK_LINE(513)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(514)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(516)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(517)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					Float _g2 = ::Math_obj::cos((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(519)
					Float _g11 = (_g2 * length);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(519)
					Float value = (_g11 + this->origin->x);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(519)
					p->x = value;
				}
				HX_STACK_LINE(520)
				{
					HX_STACK_LINE(520)
					Float _g2 = ::Math_obj::sin((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(520)
					Float _g3 = (_g2 * length);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(520)
					Float value = (_g3 + this->origin->y);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(520)
					p->y = value;
				}
			}
		}
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			while((true)){
				HX_STACK_LINE(523)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(523)
					break;
				}
				HX_STACK_LINE(523)
				::openfl::_v2::geom::Point a = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(523)
				++(_g);
				HX_STACK_LINE(525)
				Float axisAngle = ::Math_obj::atan2(a->y,a->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					Float value = ::Math_obj::cos((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(527)
					a->x = value;
				}
				HX_STACK_LINE(528)
				{
					HX_STACK_LINE(528)
					Float value = ::Math_obj::sin((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(528)
					a->y = value;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","generateAxes",0xe42702ae,"com.haxepunk.masks.Polygon.generateAxes","com/haxepunk/masks/Polygon.hx",533,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(534)
		this->_axes = _g;
		HX_STACK_LINE(536)
		Float temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(537)
		int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
		HX_STACK_LINE(538)
		::openfl::_v2::geom::Point edge;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(539)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(539)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(541)
		i = (int)0;
		HX_STACK_LINE(542)
		j = (nPoints - (int)1);
		HX_STACK_LINE(543)
		while((true)){
			HX_STACK_LINE(543)
			if ((!(((i < nPoints))))){
				HX_STACK_LINE(543)
				break;
			}
			HX_STACK_LINE(545)
			::openfl::_v2::geom::Point _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(545)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(545)
				_g1 = ::openfl::_v2::geom::Point_obj::__new(x,y);
			}
			HX_STACK_LINE(545)
			edge = _g1;
			HX_STACK_LINE(546)
			edge->x = (this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->x - this->_points->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->x);
			HX_STACK_LINE(547)
			edge->y = (this->_points->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->y - this->_points->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->y);
			HX_STACK_LINE(550)
			temp = edge->y;
			HX_STACK_LINE(551)
			edge->y = -(edge->x);
			HX_STACK_LINE(552)
			edge->x = temp;
			HX_STACK_LINE(553)
			::com::haxepunk::math::_Vector::Vector_Impl__obj::normalize(edge,(int)1);
			HX_STACK_LINE(555)
			this->_axes->push(edge);
			HX_STACK_LINE(557)
			j = i;
			HX_STACK_LINE(558)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","removeDuplicateAxes",0xfab0e038,"com.haxepunk.masks.Polygon.removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",563,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		int i = (this->_axes->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(565)
		int j = (i - (int)1);		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(566)
		while((true)){
			HX_STACK_LINE(566)
			if ((!(((i > (int)0))))){
				HX_STACK_LINE(566)
				break;
			}
			HX_STACK_LINE(571)
			Float _g = ::Math_obj::abs((this->_axes->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->x - this->_axes->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->x));		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static bool Block( int &i,hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this,int &j){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",571,0xc83634e5)
					{
						HX_STACK_LINE(571)
						Float _g1 = ::Math_obj::abs((__this->_axes->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->y - __this->_axes->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->y));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(571)
						return (_g1 < ::com::haxepunk::masks::Polygon_obj::EPSILON);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( int &i,hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this,int &j){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",572,0xc83634e5)
					{
						HX_STACK_LINE(572)
						Float _g2 = ::Math_obj::abs((__this->_axes->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->x + __this->_axes->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->x));		HX_STACK_VAR(_g2,"_g2");
						struct _Function_3_1{
							inline static bool Block( int &i,hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this,int &j){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",572,0xc83634e5)
								{
									HX_STACK_LINE(572)
									Float _g3 = ::Math_obj::abs((__this->_axes->__get(i).StaticCast< ::openfl::_v2::geom::Point >()->y + __this->_axes->__get(j).StaticCast< ::openfl::_v2::geom::Point >()->y));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(572)
									return (_g3 < ::com::haxepunk::masks::Polygon_obj::EPSILON);
								}
								return null();
							}
						};
						HX_STACK_LINE(572)
						return (  (((_g2 < ::com::haxepunk::masks::Polygon_obj::EPSILON))) ? bool(_Function_3_1::Block(i,__this,j)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(571)
			if (((  ((!(((  (((_g < ::com::haxepunk::masks::Polygon_obj::EPSILON))) ? bool(_Function_2_1::Block(i,this,j)) : bool(false) ))))) ? bool(_Function_2_2::Block(i,this,j)) : bool(true) ))){
				HX_STACK_LINE(574)
				this->_axes->splice(i,(int)1);
				HX_STACK_LINE(575)
				(i)--;
			}
			HX_STACK_LINE(578)
			(j)--;
			HX_STACK_LINE(579)
			if (((j < (int)0))){
				HX_STACK_LINE(581)
				(i)--;
				HX_STACK_LINE(582)
				j = (i - (int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","updateAxes",0x8d290e82,"com.haxepunk.masks.Polygon.updateAxes","com/haxepunk/masks/Polygon.hx",588,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		this->generateAxes();
		HX_STACK_LINE(590)
		this->removeDuplicateAxes();
		HX_STACK_LINE(591)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createPolygon",0xe8d578aa,"com.haxepunk.masks.Polygon.createPolygon","com/haxepunk/masks/Polygon.hx",458,0xc83634e5)
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(459)
		if (((sides < (int)3))){
			HX_STACK_LINE(459)
			HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
		}
		HX_STACK_LINE(462)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(465)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				if ((!(((_g < sides))))){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(467)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(469)
				Float tempAngle = (::Math_obj::PI + (i * rotationAngle));		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(470)
				::openfl::_v2::geom::Point p;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(470)
				{
					HX_STACK_LINE(470)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(470)
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(470)
					p = ::openfl::_v2::geom::Point_obj::__new(x,y);
				}
				HX_STACK_LINE(471)
				{
					HX_STACK_LINE(471)
					Float _g1 = ::Math_obj::cos(tempAngle);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(471)
					Float _g11 = (_g1 * radius);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(471)
					Float value = (_g11 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(471)
					p->x = value;
				}
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(472)
					Float _g2 = ::Math_obj::sin(tempAngle);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(472)
					Float _g3 = (_g2 * radius);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(472)
					Float value = (_g3 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(472)
					p->y = value;
				}
				HX_STACK_LINE(473)
				points->push(p);
			}
		}
		HX_STACK_LINE(477)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(478)
		poly->origin->x = radius;
		HX_STACK_LINE(479)
		poly->origin->y = radius;
		HX_STACK_LINE(480)
		poly->set_angle(angle);
		HX_STACK_LINE(481)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createFromArray",0x230ab9ff,"com.haxepunk.masks.Polygon.createFromArray","com/haxepunk/masks/Polygon.hx",491,0xc83634e5)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(492)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(494)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(495)
	while((true)){
		HX_STACK_LINE(495)
		if ((!(((i < points->length))))){
			HX_STACK_LINE(495)
			break;
		}
		HX_STACK_LINE(497)
		::openfl::_v2::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			Float x = points->__get(_g);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(497)
			int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			Float y = points->__get(_g1);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(497)
			_g2 = ::openfl::_v2::geom::Point_obj::__new(x,y);
		}
		HX_STACK_LINE(497)
		p->push(_g2);
	}
	HX_STACK_LINE(499)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

Float Polygon_obj::EPSILON;

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::openfl::_v2::geom::Point Polygon_obj::vertical;

::openfl::_v2::geom::Point Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(minX,"minX");
	HX_MARK_MEMBER_NAME(minY,"minY");
	HX_MARK_MEMBER_NAME(maxX,"maxX");
	HX_MARK_MEMBER_NAME(maxY,"maxY");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_MARK_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(minX,"minX");
	HX_VISIT_MEMBER_NAME(minY,"minY");
	HX_VISIT_MEMBER_NAME(maxX,"maxX");
	HX_VISIT_MEMBER_NAME(maxY,"maxY");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_VISIT_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { return minX; }
		if (HX_FIELD_EQ(inName,"minY") ) { return minY; }
		if (HX_FIELD_EQ(inName,"maxX") ) { return maxX; }
		if (HX_FIELD_EQ(inName,"maxY") ) { return maxY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { return EPSILON; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { return _fakeEntity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { return _fakeTileHitbox; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { minX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minY") ) { minY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxX") ) { maxX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxY") ) { maxY=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { EPSILON=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { _fakeEntity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { _fakeTileHitbox=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("minX"));
	outFields->push(HX_CSTRING("minY"));
	outFields->push(HX_CSTRING("maxX"));
	outFields->push(HX_CSTRING("maxY"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_fakeEntity"));
	outFields->push(HX_CSTRING("_fakeTileHitbox"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("EPSILON"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Polygon_obj,origin),HX_CSTRING("origin")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minX),HX_CSTRING("minX")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minY),HX_CSTRING("minY")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxX),HX_CSTRING("maxX")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxY),HX_CSTRING("maxY")},
	{hx::fsFloat,(int)offsetof(Polygon_obj,_angle),HX_CSTRING("_angle")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_points),HX_CSTRING("_points")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_axes),HX_CSTRING("_axes")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Polygon_obj,_fakeEntity),HX_CSTRING("_fakeEntity")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(Polygon_obj,_fakeTileHitbox),HX_CSTRING("_fakeTileHitbox")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("minX"),
	HX_CSTRING("minY"),
	HX_CSTRING("maxX"),
	HX_CSTRING("maxY"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("project"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_points"),
	HX_CSTRING("update"),
	HX_CSTRING("rotate"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_points"),
	HX_CSTRING("_axes"),
	HX_CSTRING("_fakeEntity"),
	HX_CSTRING("_fakeTileHitbox"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#endif

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
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

void Polygon_obj::__boot()
{
	EPSILON= 0.000000001;
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::openfl::_v2::geom::Point_obj::__new((int)0,(int)1);
	horizontal= ::openfl::_v2::geom::Point_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
