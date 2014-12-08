#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_BitmapFilter
#include <openfl/_v2/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{

Void Screen_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Screen","new",0x20e58bd7,"com.haxepunk.Screen.new","com/haxepunk/Screen.hx",18,0x08128799)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(401)
	this->_shakeY = (int)0;
	HX_STACK_LINE(400)
	this->_shakeX = (int)0;
	HX_STACK_LINE(399)
	this->_shakeMagnitude = (int)0;
	HX_STACK_LINE(398)
	this->_shakeTime = (int)0;
	HX_STACK_LINE(290)
	this->needsResize = false;
	HX_STACK_LINE(284)
	this->fullScaleY = (int)1;
	HX_STACK_LINE(279)
	this->fullScaleX = (int)1;
	HX_STACK_LINE(264)
	this->scale = (int)1;
	HX_STACK_LINE(249)
	this->scaleY = (int)1;
	HX_STACK_LINE(235)
	this->scaleX = (int)1;
	HX_STACK_LINE(223)
	this->originY = (int)0;
	HX_STACK_LINE(211)
	this->originX = (int)0;
	HX_STACK_LINE(199)
	this->y = (int)0;
	HX_STACK_LINE(187)
	this->x = (int)0;
	HX_STACK_LINE(26)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->_sprite = _g;
	HX_STACK_LINE(27)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	this->_bitmap = _g1;
	HX_STACK_LINE(28)
	this->init();
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Void Screen_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","init",0xa4ad87b9,"com.haxepunk.Screen.init","com/haxepunk/Screen.hx",32,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		int _g = this->set_originY((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		int _g1 = this->set_originX(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		int _g2 = this->set_y(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		this->set_x(_g2);
		HX_STACK_LINE(34)
		int _g3 = this->_current = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(34)
		this->_angle = _g3;
		HX_STACK_LINE(35)
		Float _g4 = this->set_scaleY((int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(35)
		Float _g5 = this->set_scaleX(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(35)
		this->set_scale(_g5);
		HX_STACK_LINE(36)
		this->updateTransformation();
		HX_STACK_LINE(39)
		if ((::com::haxepunk::HXP_obj::engine->contains(this->_sprite))){
			HX_STACK_LINE(41)
			::com::haxepunk::HXP_obj::engine->removeChild(this->_sprite);
		}
		HX_STACK_LINE(43)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(45)
			::com::haxepunk::HXP_obj::engine->addChild(this->_sprite);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,init,(void))

Void Screen_obj::disposeBitmap( ::openfl::_v2::display::Bitmap bd){
{
		HX_STACK_FRAME("com.haxepunk.Screen","disposeBitmap",0x30af1c25,"com.haxepunk.Screen.disposeBitmap","com/haxepunk/Screen.hx",51,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(51)
		if (((bd != null()))){
			HX_STACK_LINE(53)
			this->_sprite->removeChild(bd);
			HX_STACK_LINE(54)
			bd->bitmapData->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,disposeBitmap,(void))

Void Screen_obj::resize( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","resize",0xc218e2dd,"com.haxepunk.Screen.resize","com/haxepunk/Screen.hx",63,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->width = ::com::haxepunk::HXP_obj::width;
		HX_STACK_LINE(65)
		this->height = ::com::haxepunk::HXP_obj::height;
		HX_STACK_LINE(67)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::openfl::_v2::display::Bitmap bd = this->_bitmap->__get((int)0).StaticCast< ::openfl::_v2::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(69)
				if (((bd != null()))){
					HX_STACK_LINE(69)
					this->_sprite->removeChild(bd);
					HX_STACK_LINE(69)
					bd->bitmapData->dispose();
				}
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::openfl::_v2::display::Bitmap bd = this->_bitmap->__get((int)1).StaticCast< ::openfl::_v2::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(70)
				if (((bd != null()))){
					HX_STACK_LINE(70)
					this->_sprite->removeChild(bd);
					HX_STACK_LINE(70)
					bd->bitmapData->dispose();
				}
			}
			HX_STACK_LINE(72)
			::openfl::_v2::display::BitmapData _g = ::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			this->_bitmap[(int)0] = ::openfl::_v2::display::Bitmap_obj::__new(_g,::openfl::display::PixelSnapping_obj::NEVER,null());
			HX_STACK_LINE(73)
			::openfl::_v2::display::BitmapData _g1 = ::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			this->_bitmap[(int)1] = ::openfl::_v2::display::Bitmap_obj::__new(_g1,::openfl::display::PixelSnapping_obj::NEVER,null());
			HX_STACK_LINE(75)
			this->_sprite->addChild(this->_bitmap->__get((int)0).StaticCast< ::openfl::_v2::display::Bitmap >())->set_visible(true);
			HX_STACK_LINE(76)
			this->_sprite->addChild(this->_bitmap->__get((int)1).StaticCast< ::openfl::_v2::display::Bitmap >())->set_visible(false);
			HX_STACK_LINE(77)
			::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get((int)0).StaticCast< ::openfl::_v2::display::Bitmap >()->bitmapData;
		}
		HX_STACK_LINE(80)
		this->_current = (int)0;
		HX_STACK_LINE(81)
		this->needsResize = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,resize,(void))

Void Screen_obj::swap( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","swap",0xab50773c,"com.haxepunk.Screen.swap","com/haxepunk/Screen.hx",89,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(91)
			this->_current = ((int)1 - this->_current);
			HX_STACK_LINE(92)
			::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get(this->_current).StaticCast< ::openfl::_v2::display::Bitmap >()->bitmapData;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,swap,(void))

Void Screen_obj::addFilter( Array< ::Dynamic > filter){
{
		HX_STACK_FRAME("com.haxepunk.Screen","addFilter",0x22e38370,"com.haxepunk.Screen.addFilter","com/haxepunk/Screen.hx",103,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(103)
		this->_sprite->set_filters(filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,addFilter,(void))

Void Screen_obj::refresh( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","refresh",0x9d5b1cd2,"com.haxepunk.Screen.refresh","com/haxepunk/Screen.hx",110,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		int _g = ::com::haxepunk::HXP_obj::stage->get_color();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::bounds,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refresh,(void))

Void Screen_obj::redraw( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","redraw",0xb8356e20,"com.haxepunk.Screen.redraw","com/haxepunk/Screen.hx",121,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(123)
			this->_bitmap->__get(this->_current).StaticCast< ::openfl::_v2::display::Bitmap >()->set_visible(true);
			HX_STACK_LINE(124)
			this->_bitmap->__get(((int)1 - this->_current)).StaticCast< ::openfl::_v2::display::Bitmap >()->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,redraw,(void))

Void Screen_obj::updateTransformation( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","updateTransformation",0x4501e45b,"com.haxepunk.Screen.updateTransformation","com/haxepunk/Screen.hx",130,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		if (((this->_matrix == null()))){
			HX_STACK_LINE(133)
			::openfl::_v2::geom::Matrix _g = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			this->_matrix = _g;
		}
		HX_STACK_LINE(135)
		Float _g1 = this->_matrix->c = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		this->_matrix->b = _g1;
		HX_STACK_LINE(136)
		this->_matrix->a = this->fullScaleX;
		HX_STACK_LINE(137)
		this->_matrix->d = this->fullScaleY;
		HX_STACK_LINE(138)
		this->_matrix->tx = (-(this->originX) * this->_matrix->a);
		HX_STACK_LINE(139)
		this->_matrix->ty = (-(this->originY) * this->_matrix->d);
		HX_STACK_LINE(140)
		if (((this->_angle != (int)0))){
			HX_STACK_LINE(140)
			this->_matrix->rotate(this->_angle);
		}
		HX_STACK_LINE(141)
		hx::AddEq(this->_matrix->tx,((this->originX * this->fullScaleX) + this->x));
		HX_STACK_LINE(142)
		hx::AddEq(this->_matrix->ty,((this->originY * this->fullScaleY) + this->y));
		HX_STACK_LINE(143)
		this->_sprite->get_transform()->set_matrix(this->_matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,updateTransformation,(void))

Void Screen_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","update",0x40a30ef2,"com.haxepunk.Screen.update","com/haxepunk/Screen.hx",150,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		if (((this->_shakeTime > (int)0))){
			HX_STACK_LINE(152)
			int _g = ::Std_obj::random(((this->_shakeMagnitude * (int)2) + (int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			int sx = (_g - this->_shakeMagnitude);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(153)
			int _g1 = ::Std_obj::random(((this->_shakeMagnitude * (int)2) + (int)1));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			int sy = (_g1 - this->_shakeMagnitude);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				::com::haxepunk::Screen _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(155)
				_g2->set_x((_g2->x + ((sx - this->_shakeX))));
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::com::haxepunk::Screen _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(156)
				_g2->set_y((_g2->y + ((sy - this->_shakeY))));
			}
			HX_STACK_LINE(158)
			this->_shakeX = sx;
			HX_STACK_LINE(159)
			this->_shakeY = sy;
			HX_STACK_LINE(161)
			hx::SubEq(this->_shakeTime,::com::haxepunk::HXP_obj::elapsed);
			HX_STACK_LINE(162)
			if (((this->_shakeTime < (int)0))){
				HX_STACK_LINE(162)
				this->_shakeTime = (int)0;
			}
		}
		else{
			HX_STACK_LINE(164)
			if (((bool((this->_shakeX != (int)0)) || bool((this->_shakeY != (int)0))))){
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					_g->set_x((_g->x - this->_shakeX));
				}
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					_g->set_y((_g->y - this->_shakeY));
				}
				HX_STACK_LINE(168)
				int _g2 = this->_shakeY = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(168)
				this->_shakeX = _g2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,update,(void))

int Screen_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_color",0x738ffc71,"com.haxepunk.Screen.get_color","com/haxepunk/Screen.hx",176,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	return ::com::haxepunk::HXP_obj::stage->get_color();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_color,return )

int Screen_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_color",0x56e0e87d,"com.haxepunk.Screen.set_color","com/haxepunk/Screen.hx",178,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	::com::haxepunk::HXP_obj::stage->set_color(value);
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_color,return )

int Screen_obj::set_x( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_x",0x2f406292,"com.haxepunk.Screen.set_x","com/haxepunk/Screen.hx",189,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	if (((this->x == value))){
		HX_STACK_LINE(190)
		return value;
	}
	HX_STACK_LINE(191)
	int _g = this->x = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	::com::haxepunk::HXP_obj::engine->set_x(_g);
	HX_STACK_LINE(192)
	this->updateTransformation();
	HX_STACK_LINE(193)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_x,return )

int Screen_obj::set_y( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_y",0x2f406293,"com.haxepunk.Screen.set_y","com/haxepunk/Screen.hx",201,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(202)
	if (((this->y == value))){
		HX_STACK_LINE(202)
		return value;
	}
	HX_STACK_LINE(203)
	int _g = this->y = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(203)
	::com::haxepunk::HXP_obj::engine->set_y(_g);
	HX_STACK_LINE(204)
	this->updateTransformation();
	HX_STACK_LINE(205)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_y,return )

int Screen_obj::set_originX( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_originX",0xe5d9814c,"com.haxepunk.Screen.set_originX","com/haxepunk/Screen.hx",213,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	if (((this->originX == value))){
		HX_STACK_LINE(214)
		return value;
	}
	HX_STACK_LINE(215)
	this->originX = value;
	HX_STACK_LINE(216)
	this->updateTransformation();
	HX_STACK_LINE(217)
	return this->originX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originX,return )

int Screen_obj::set_originY( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_originY",0xe5d9814d,"com.haxepunk.Screen.set_originY","com/haxepunk/Screen.hx",225,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	if (((this->originY == value))){
		HX_STACK_LINE(226)
		return value;
	}
	HX_STACK_LINE(227)
	this->originY = value;
	HX_STACK_LINE(228)
	this->updateTransformation();
	HX_STACK_LINE(229)
	return this->originY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originY,return )

Float Screen_obj::set_scaleX( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scaleX",0x2389aa34,"com.haxepunk.Screen.set_scaleX","com/haxepunk/Screen.hx",237,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(238)
	if (((this->scaleX == value))){
		HX_STACK_LINE(238)
		return value;
	}
	HX_STACK_LINE(239)
	this->scaleX = value;
	HX_STACK_LINE(240)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(241)
	this->updateTransformation();
	HX_STACK_LINE(242)
	this->needsResize = true;
	HX_STACK_LINE(243)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleX,return )

Float Screen_obj::set_scaleY( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scaleY",0x2389aa35,"com.haxepunk.Screen.set_scaleY","com/haxepunk/Screen.hx",251,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(252)
	if (((this->scaleY == value))){
		HX_STACK_LINE(252)
		return value;
	}
	HX_STACK_LINE(253)
	this->scaleY = value;
	HX_STACK_LINE(254)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(255)
	this->updateTransformation();
	HX_STACK_LINE(256)
	this->needsResize = true;
	HX_STACK_LINE(257)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleY,return )

Float Screen_obj::set_scale( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scale",0x855345a4,"com.haxepunk.Screen.set_scale","com/haxepunk/Screen.hx",266,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(267)
	if (((this->scale == value))){
		HX_STACK_LINE(267)
		return value;
	}
	HX_STACK_LINE(268)
	this->scale = value;
	HX_STACK_LINE(269)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(270)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(271)
	this->updateTransformation();
	HX_STACK_LINE(272)
	this->needsResize = true;
	HX_STACK_LINE(273)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scale,return )

Float Screen_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_angle",0x4c15cee1,"com.haxepunk.Screen.get_angle","com/haxepunk/Screen.hx",296,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return (this->_angle * ((Float((int)-180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_angle,return )

Float Screen_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_angle",0x2f66baed,"com.haxepunk.Screen.set_angle","com/haxepunk/Screen.hx",298,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	if (((this->_angle == (value * ((Float(::Math_obj::PI) / Float((int)-180))))))){
		HX_STACK_LINE(299)
		return value;
	}
	HX_STACK_LINE(300)
	this->_angle = (value * ((Float(::Math_obj::PI) / Float((int)-180))));
	HX_STACK_LINE(301)
	this->updateTransformation();
	HX_STACK_LINE(302)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_angle,return )

bool Screen_obj::get_smoothing( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_smoothing",0x96d2ff82,"com.haxepunk.Screen.get_smoothing","com/haxepunk/Screen.hx",311,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		HX_STACK_LINE(313)
		return this->_bitmap->__get((int)0).StaticCast< ::openfl::_v2::display::Bitmap >()->smoothing;
	}
	else{
		HX_STACK_LINE(317)
		return ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
	}
	HX_STACK_LINE(311)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_smoothing,return )

bool Screen_obj::set_smoothing( bool value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_smoothing",0xdbd8e18e,"com.haxepunk.Screen.set_smoothing","com/haxepunk/Screen.hx",321,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(322)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		HX_STACK_LINE(324)
		bool _g = this->_bitmap->__get((int)1).StaticCast< ::openfl::_v2::display::Bitmap >()->set_smoothing(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(324)
		this->_bitmap->__get((int)0).StaticCast< ::openfl::_v2::display::Bitmap >()->set_smoothing(_g);
	}
	else{
		HX_STACK_LINE(328)
		::com::haxepunk::graphics::atlas::Atlas_obj::smooth = value;
	}
	HX_STACK_LINE(330)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_smoothing,return )

int Screen_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_mouseX",0xaff46bc5,"com.haxepunk.Screen.get_mouseX","com/haxepunk/Screen.hx",347,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	Float _g = this->_sprite->get_mouseX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(347)
	return ::Std_obj::_int(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseX,return )

int Screen_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_mouseY",0xaff46bc6,"com.haxepunk.Screen.get_mouseY","com/haxepunk/Screen.hx",353,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	Float _g = this->_sprite->get_mouseY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(353)
	return ::Std_obj::_int(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseY,return )

::com::haxepunk::graphics::Image Screen_obj::capture( ){
	HX_STACK_FRAME("com.haxepunk.Screen","capture",0x578c137d,"com.haxepunk.Screen.capture","com/haxepunk/Screen.hx",362,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(362)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		HX_STACK_LINE(364)
		::com::haxepunk::ds::Either _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			::openfl::_v2::display::BitmapData bd = this->_bitmap->__get(this->_current).StaticCast< ::openfl::_v2::display::Bitmap >()->bitmapData->clone();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(364)
			if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
				HX_STACK_LINE(364)
				::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
				struct _Function_4_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &bd){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Screen.hx",364,0x08128799)
						{
							HX_STACK_LINE(364)
							::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(364)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(364)
				_g = _Function_4_1::Block(bd);
				HX_STACK_LINE(364)
				::com::haxepunk::graphics::atlas::AtlasRegion _g1 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g1);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(364)
				_g2 = e;
			}
			else{
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(bd);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(364)
				_g2 = e;
			}
		}
		HX_STACK_LINE(364)
		return ::com::haxepunk::graphics::Image_obj::__new(_g2,null());
	}
	else{
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_CSTRING("Screen.capture only supported with buffer rendering"));
	}
	HX_STACK_LINE(362)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,capture,return )

Void Screen_obj::shake( int magnitude,Float duration){
{
		HX_STACK_FRAME("com.haxepunk.Screen","shake",0x312da5fd,"com.haxepunk.Screen.shake","com/haxepunk/Screen.hx",379,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(magnitude,"magnitude")
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(380)
		if (((this->_shakeTime < duration))){
			HX_STACK_LINE(380)
			this->_shakeTime = duration;
		}
		HX_STACK_LINE(381)
		this->_shakeMagnitude = magnitude;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,shake,(void))

Void Screen_obj::shakeStop( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","shakeStop",0xccfa049f,"com.haxepunk.Screen.shakeStop","com/haxepunk/Screen.hx",389,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		this->_shakeTime = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,shakeStop,(void))


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_MARK_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_MARK_MEMBER_NAME(needsResize,"needsResize");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_shakeTime,"_shakeTime");
	HX_MARK_MEMBER_NAME(_shakeMagnitude,"_shakeMagnitude");
	HX_MARK_MEMBER_NAME(_shakeX,"_shakeX");
	HX_MARK_MEMBER_NAME(_shakeY,"_shakeY");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_VISIT_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_VISIT_MEMBER_NAME(needsResize,"needsResize");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_shakeTime,"_shakeTime");
	HX_VISIT_MEMBER_NAME(_shakeMagnitude,"_shakeMagnitude");
	HX_VISIT_MEMBER_NAME(_shakeX,"_shakeX");
	HX_VISIT_MEMBER_NAME(_shakeY,"_shakeY");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_shakeX") ) { return _shakeX; }
		if (HX_FIELD_EQ(inName,"_shakeY") ) { return _shakeY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return get_smoothing(); }
		if (HX_FIELD_EQ(inName,"shakeStop") ) { return shakeStop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { return fullScaleX; }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { return fullScaleY; }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"_shakeTime") ) { return _shakeTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_originX") ) { return set_originX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_originY") ) { return set_originY_dyn(); }
		if (HX_FIELD_EQ(inName,"needsResize") ) { return needsResize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeBitmap") ) { return disposeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return get_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shakeMagnitude") ) { return _shakeMagnitude; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTransformation") ) { return updateTransformation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp) return set_originX(inValue);originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp) return set_originY(inValue);originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeX") ) { _shakeX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeY") ) { _shakeY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return set_smoothing(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { fullScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { fullScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeTime") ) { _shakeTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { needsResize=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shakeMagnitude") ) { _shakeMagnitude=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("fullScaleX"));
	outFields->push(HX_CSTRING("fullScaleY"));
	outFields->push(HX_CSTRING("needsResize"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_shakeTime"));
	outFields->push(HX_CSTRING("_shakeMagnitude"));
	outFields->push(HX_CSTRING("_shakeX"));
	outFields->push(HX_CSTRING("_shakeY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Screen_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(Screen_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(Screen_obj,originX),HX_CSTRING("originX")},
	{hx::fsInt,(int)offsetof(Screen_obj,originY),HX_CSTRING("originY")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scale),HX_CSTRING("scale")},
	{hx::fsFloat,(int)offsetof(Screen_obj,fullScaleX),HX_CSTRING("fullScaleX")},
	{hx::fsFloat,(int)offsetof(Screen_obj,fullScaleY),HX_CSTRING("fullScaleY")},
	{hx::fsBool,(int)offsetof(Screen_obj,needsResize),HX_CSTRING("needsResize")},
	{hx::fsInt,(int)offsetof(Screen_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Screen_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Screen_obj,mouseX),HX_CSTRING("mouseX")},
	{hx::fsInt,(int)offsetof(Screen_obj,mouseY),HX_CSTRING("mouseY")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Screen_obj,_sprite),HX_CSTRING("_sprite")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Screen_obj,_bitmap),HX_CSTRING("_bitmap")},
	{hx::fsInt,(int)offsetof(Screen_obj,_current),HX_CSTRING("_current")},
	{hx::fsObject /*::openfl::_v2::geom::Matrix*/ ,(int)offsetof(Screen_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsFloat,(int)offsetof(Screen_obj,_angle),HX_CSTRING("_angle")},
	{hx::fsFloat,(int)offsetof(Screen_obj,_shakeTime),HX_CSTRING("_shakeTime")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeMagnitude),HX_CSTRING("_shakeMagnitude")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeX),HX_CSTRING("_shakeX")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeY),HX_CSTRING("_shakeY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("disposeBitmap"),
	HX_CSTRING("resize"),
	HX_CSTRING("swap"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("refresh"),
	HX_CSTRING("redraw"),
	HX_CSTRING("updateTransformation"),
	HX_CSTRING("update"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("originX"),
	HX_CSTRING("set_originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("set_originY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("fullScaleX"),
	HX_CSTRING("fullScaleY"),
	HX_CSTRING("needsResize"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_smoothing"),
	HX_CSTRING("set_smoothing"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("capture"),
	HX_CSTRING("shake"),
	HX_CSTRING("shakeStop"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_current"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_shakeTime"),
	HX_CSTRING("_shakeMagnitude"),
	HX_CSTRING("_shakeX"),
	HX_CSTRING("_shakeY"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
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

void Screen_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
