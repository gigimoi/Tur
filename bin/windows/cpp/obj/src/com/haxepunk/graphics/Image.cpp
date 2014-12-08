#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Image_obj::__construct(::com::haxepunk::ds::Either source,::openfl::_v2::geom::Rectangle clipRect)
{
HX_STACK_FRAME("com.haxepunk.graphics.Image","new",0xf94e7ea3,"com.haxepunk.graphics.Image.new","com/haxepunk/graphics/Image.hx",27,0xdb117b4e)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(clipRect,"clipRect")
{
	HX_STACK_LINE(513)
	this->smooth = true;
	HX_STACK_LINE(77)
	super::__construct();
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		this->angle = (int)0;
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float _g = this->scaleY = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			Float value = this->scaleX = _g;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(78)
			this->_scale = value;
		}
		HX_STACK_LINE(78)
		Float _g1 = this->originY = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		this->originX = _g1;
		HX_STACK_LINE(78)
		this->_alpha = (int)1;
		HX_STACK_LINE(78)
		this->_flipped = false;
		HX_STACK_LINE(78)
		this->_color = (int)16777215;
		HX_STACK_LINE(78)
		Float _g2 = this->_blue = (int)1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(78)
		Float _g3 = this->_green = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(78)
		this->_red = _g3;
		HX_STACK_LINE(78)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
	HX_STACK_LINE(81)
	if (((source != null()))){
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::com::haxepunk::ds::Either _g = source;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(83)
					::openfl::_v2::display::BitmapData bitmap = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(86)
						this->blit = true;
						HX_STACK_LINE(87)
						this->_source = bitmap;
						HX_STACK_LINE(88)
						::openfl::_v2::geom::Rectangle _g4 = bitmap->get_rect();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(88)
						this->_sourceRect = _g4;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(83)
					::com::haxepunk::graphics::atlas::AtlasRegion region = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(region,"region");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(90)
						this->blit = false;
						HX_STACK_LINE(91)
						this->_region = region;
						HX_STACK_LINE(92)
						::openfl::_v2::geom::Rectangle _g5 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,this->_region->_rect->width,this->_region->_rect->height);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(92)
						this->_sourceRect = _g5;
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(96)
	if (((clipRect != null()))){
		HX_STACK_LINE(98)
		if (((clipRect->width == (int)0))){
			HX_STACK_LINE(98)
			clipRect->width = this->_sourceRect->width;
		}
		HX_STACK_LINE(99)
		if (((clipRect->height == (int)0))){
			HX_STACK_LINE(99)
			clipRect->height = this->_sourceRect->height;
		}
		HX_STACK_LINE(100)
		if ((!(this->blit))){
			HX_STACK_LINE(102)
			::com::haxepunk::graphics::atlas::AtlasRegion _g6 = this->_region->clip(clipRect,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(102)
			this->_region = _g6;
		}
		HX_STACK_LINE(104)
		this->_sourceRect = clipRect;
	}
	HX_STACK_LINE(107)
	if ((this->blit)){
		HX_STACK_LINE(109)
		::openfl::_v2::display::Bitmap _g7 = ::openfl::_v2::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(109)
		this->_bitmap = _g7;
		HX_STACK_LINE(110)
		::openfl::_v2::geom::ColorTransform _g8 = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(110)
		this->_colorTransform = _g8;
		HX_STACK_LINE(112)
		this->createBuffer();
		HX_STACK_LINE(113)
		this->updateBuffer(null());
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::com::haxepunk::ds::Either source,::openfl::_v2::geom::Rectangle clipRect)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(source,clipRect);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float Image_obj::get_scale( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scale",0x25c76d64,"com.haxepunk.graphics.Image.get_scale","com/haxepunk/graphics/Image.hx",39,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->_scale;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scale,return )

Float Image_obj::set_scale( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scale",0x09185970,"com.haxepunk.graphics.Image.set_scale","com/haxepunk/graphics/Image.hx",40,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	return this->_scale = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scale,return )

Void Image_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","init",0x2819076d,"com.haxepunk.graphics.Image.init","com/haxepunk/graphics/Image.hx",119,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		this->angle = (int)0;
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			Float _g = this->scaleY = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			Float value = this->scaleX = _g;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(121)
			this->_scale = value;
		}
		HX_STACK_LINE(122)
		Float _g1 = this->originY = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		this->originX = _g1;
		HX_STACK_LINE(124)
		this->_alpha = (int)1;
		HX_STACK_LINE(125)
		this->_flipped = false;
		HX_STACK_LINE(126)
		this->_color = (int)16777215;
		HX_STACK_LINE(127)
		Float _g2 = this->_blue = (int)1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(127)
		Float _g3 = this->_green = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(127)
		this->_red = _g3;
		HX_STACK_LINE(128)
		this->_matrix = ::com::haxepunk::HXP_obj::matrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,init,(void))

Void Image_obj::createBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","createBuffer",0xfba6ee79,"com.haxepunk.graphics.Image.createBuffer","com/haxepunk/graphics/Image.hx",133,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		int _g = ::Std_obj::_int(this->_sourceRect->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		int _g1 = ::Std_obj::_int(this->_sourceRect->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		::openfl::_v2::display::BitmapData _g2 = ::com::haxepunk::HXP_obj::createBitmap(_g,_g1,true,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(134)
		this->_buffer = _g2;
		HX_STACK_LINE(135)
		::openfl::_v2::geom::Rectangle _g3 = this->_buffer->get_rect();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(135)
		this->_bufferRect = _g3;
		HX_STACK_LINE(136)
		this->_bitmap->set_bitmapData(this->_buffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,createBuffer,(void))

Void Image_obj::render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","render",0x93d8c8f3,"com.haxepunk.graphics.Image.render","com/haxepunk/graphics/Image.hx",142,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(143)
		Float sx = (this->_scale * this->scaleX);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(144)
		Float sy = (this->_scale * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(147)
		this->_point->x = (((point->x + this->x) - this->originX) - (camera->x * this->scrollX));
		HX_STACK_LINE(148)
		this->_point->y = (((point->y + this->y) - this->originY) - (camera->y * this->scrollY));
		HX_STACK_LINE(151)
		if (((this->_buffer != null()))){
			HX_STACK_LINE(153)
			if (((bool((bool((bool((this->angle == (int)0)) && bool((sx == (int)1)))) && bool((sy == (int)1)))) && bool((this->blend == null()))))){
				HX_STACK_LINE(156)
				target->copyPixels(this->_buffer,this->_bufferRect,this->_point,null(),null(),true);
			}
			else{
				HX_STACK_LINE(161)
				Float _g = this->_matrix->c = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				this->_matrix->b = _g;
				HX_STACK_LINE(162)
				this->_matrix->a = sx;
				HX_STACK_LINE(163)
				this->_matrix->d = sy;
				HX_STACK_LINE(164)
				this->_matrix->tx = (-(this->originX) * sx);
				HX_STACK_LINE(165)
				this->_matrix->ty = (-(this->originY) * sy);
				HX_STACK_LINE(166)
				if (((this->angle != (int)0))){
					HX_STACK_LINE(166)
					this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
				}
				HX_STACK_LINE(167)
				hx::AddEq(this->_matrix->tx,(this->originX + this->_point->x));
				HX_STACK_LINE(168)
				hx::AddEq(this->_matrix->ty,(this->originY + this->_point->y));
				HX_STACK_LINE(169)
				target->draw(this->_bitmap,this->_matrix,null(),this->blend,null(),this->_bitmap->smoothing);
			}
		}
	}
return null();
}


Void Image_obj::renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","renderAtlas",0xc015a358,"com.haxepunk.graphics.Image.renderAtlas","com/haxepunk/graphics/Image.hx",176,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(177)
		Float sx = (this->_scale * this->scaleX);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(178)
		Float sy = (this->_scale * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(179)
		Float fsx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(fsx,"fsx");
		HX_STACK_LINE(180)
		Float fsy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(fsy,"fsy");
		HX_STACK_LINE(183)
		this->_point->x = (((point->x + this->x) - this->originX) - (camera->x * this->scrollX));
		HX_STACK_LINE(184)
		this->_point->y = (((point->y + this->y) - this->originY) - (camera->y * this->scrollY));
		HX_STACK_LINE(186)
		if (((this->angle == (int)0))){
			HX_STACK_LINE(189)
			if ((!(((bool((sx == (int)1)) && bool((sy == (int)1))))))){
				HX_STACK_LINE(191)
				this->_point->x = (((point->x + this->x) - (this->originX * sx)) - (camera->x * this->scrollX));
				HX_STACK_LINE(192)
				this->_point->y = (((point->y + this->y) - (this->originY * sy)) - (camera->y * this->scrollY));
			}
			HX_STACK_LINE(195)
			if ((this->_flipped)){
				HX_STACK_LINE(197)
				hx::AddEq(this->_point->x,(this->_sourceRect->width * sx));
			}
			HX_STACK_LINE(200)
			this->_point->x = (this->_point->x * fsx);
			HX_STACK_LINE(201)
			this->_point->y = (this->_point->y * fsy);
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(204)
				Float scaleX;		HX_STACK_VAR(scaleX,"scaleX");
				HX_STACK_LINE(204)
				scaleX = ((sx * fsx) * ((  ((this->_flipped)) ? int((int)-1) : int((int)1) )));
				HX_STACK_LINE(204)
				Float scaleY = (sy * fsy);		HX_STACK_VAR(scaleY,"scaleY");
				HX_STACK_LINE(204)
				Float angle = this->angle;		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(204)
				Dynamic smooth = this->smooth;		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(204)
				if (((smooth == null()))){
					HX_STACK_LINE(204)
					smooth = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
				}
				HX_STACK_LINE(204)
				if ((_this->rotated)){
					HX_STACK_LINE(204)
					angle = (angle + (int)90);
				}
				HX_STACK_LINE(204)
				{
					HX_STACK_LINE(204)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(204)
					Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
					HX_STACK_LINE(204)
					{
						HX_STACK_LINE(204)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
							HX_STACK_LINE(204)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
								HX_STACK_LINE(204)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(204)
								if (((_this2->_dataIndex != (int)0))){
									HX_STACK_LINE(204)
									::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(204)
									_this2->_tilesheet->drawTiles(_g,_this2->_data,false,_this2->_renderFlags,_this2->_dataIndex);
									HX_STACK_LINE(204)
									_this2->_dataIndex = (int)0;
								}
								HX_STACK_LINE(204)
								if (((_this2->_smoothDataIndex != (int)0))){
									HX_STACK_LINE(204)
									::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(204)
									_this2->_tilesheet->drawTiles(_g1,_this2->_smoothData,true,_this2->_renderFlags,_this2->_smoothDataIndex);
									HX_STACK_LINE(204)
									_this2->_smoothDataIndex = (int)0;
								}
							}
							HX_STACK_LINE(204)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(204)
						_this1;
					}
					HX_STACK_LINE(204)
					if (((smooth1 == null()))){
						HX_STACK_LINE(204)
						smooth1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
					}
					HX_STACK_LINE(204)
					Array< Float > _data;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(204)
					if ((smooth1)){
						HX_STACK_LINE(204)
						_data = _this1->_smoothData;
					}
					else{
						HX_STACK_LINE(204)
						_data = _this1->_data;
					}
					HX_STACK_LINE(204)
					int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
					HX_STACK_LINE(204)
					if ((smooth1)){
						HX_STACK_LINE(204)
						_dataIndex = _this1->_smoothDataIndex;
					}
					else{
						HX_STACK_LINE(204)
						_dataIndex = _this1->_dataIndex;
					}
					HX_STACK_LINE(204)
					int _g2 = (_dataIndex)++;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(204)
					_data[_g2] = this->_point->x;
					HX_STACK_LINE(204)
					int _g3 = (_dataIndex)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(204)
					_data[_g3] = this->_point->y;
					HX_STACK_LINE(204)
					int _g4 = (_dataIndex)++;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(204)
					_data[_g4] = _this->tileIndex;
					HX_STACK_LINE(204)
					if (((angle == (int)0))){
						HX_STACK_LINE(204)
						int _g5 = (_dataIndex)++;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(204)
						_data[_g5] = scaleX;
						HX_STACK_LINE(204)
						int _g6 = (_dataIndex)++;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(204)
						_data[_g6] = (int)0;
						HX_STACK_LINE(204)
						int _g7 = (_dataIndex)++;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(204)
						_data[_g7] = (int)0;
						HX_STACK_LINE(204)
						int _g8 = (_dataIndex)++;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(204)
						_data[_g8] = scaleY;
					}
					else{
						HX_STACK_LINE(204)
						Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(204)
						Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(204)
						int _g9 = (_dataIndex)++;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(204)
						_data[_g9] = (cos * scaleX);
						HX_STACK_LINE(204)
						int _g10 = (_dataIndex)++;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(204)
						_data[_g10] = (-(sin) * scaleY);
						HX_STACK_LINE(204)
						int _g11 = (_dataIndex)++;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(204)
						_data[_g11] = (sin * scaleX);
						HX_STACK_LINE(204)
						int _g12 = (_dataIndex)++;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(204)
						_data[_g12] = (cos * scaleY);
					}
					HX_STACK_LINE(204)
					if ((_this1->_flagRGB)){
						HX_STACK_LINE(204)
						int _g13 = (_dataIndex)++;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(204)
						_data[_g13] = this->_red;
						HX_STACK_LINE(204)
						int _g14 = (_dataIndex)++;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(204)
						_data[_g14] = this->_green;
						HX_STACK_LINE(204)
						int _g15 = (_dataIndex)++;		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(204)
						_data[_g15] = this->_blue;
					}
					HX_STACK_LINE(204)
					if ((_this1->_flagAlpha)){
						HX_STACK_LINE(204)
						int _g16 = (_dataIndex)++;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(204)
						_data[_g16] = this->_alpha;
					}
					HX_STACK_LINE(204)
					if ((smooth1)){
						HX_STACK_LINE(204)
						_this1->_smoothDataIndex = _dataIndex;
					}
					else{
						HX_STACK_LINE(204)
						_this1->_dataIndex = _dataIndex;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(208)
			if ((this->_flipped)){
				HX_STACK_LINE(210)
				hx::MultEq(sx,(int)-1);
			}
			HX_STACK_LINE(213)
			Float angle = (this->angle * ((Float(::Math_obj::PI) / Float((int)-180))));		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(214)
			Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(215)
			Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(216)
			Float a = ((sx * cos) * fsx);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(217)
			Float b = ((sx * sin) * fsy);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(218)
			Float c = ((-(sy) * sin) * fsx);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(219)
			Float d = ((sy * cos) * fsy);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(220)
			Float tx = (((((((-(this->originX) * sx) * cos) + ((this->originY * sy) * sin)) + this->originX) + this->_point->x)) * fsx);		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(221)
			Float ty = (((((((-(this->originX) * sx) * sin) - ((this->originY * sy) * cos)) + this->originY) + this->_point->y)) * fsy);		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(223)
				Float red = this->_red;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(223)
				Float green = this->_green;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(223)
				Float blue = this->_blue;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(223)
				Float alpha = this->_alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(223)
				Dynamic smooth = this->smooth;		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(223)
				if (((smooth == null()))){
					HX_STACK_LINE(223)
					smooth = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
				}
				HX_STACK_LINE(223)
				if ((_this->rotated)){
					HX_STACK_LINE(223)
					::openfl::_v2::geom::Matrix matrix = ::openfl::_v2::geom::Matrix_obj::__new(a,b,c,d,tx,ty);		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(223)
					matrix->rotate(((int)90 * ((Float(::Math_obj::PI) / Float((int)-180)))));
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(223)
						Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
								HX_STACK_LINE(223)
								if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
									HX_STACK_LINE(223)
									::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(223)
									if (((_this2->_dataIndex != (int)0))){
										HX_STACK_LINE(223)
										::openfl::_v2::display::Graphics _g17 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(223)
										_this2->_tilesheet->drawTiles(_g17,_this2->_data,false,_this2->_renderFlags,_this2->_dataIndex);
										HX_STACK_LINE(223)
										_this2->_dataIndex = (int)0;
									}
									HX_STACK_LINE(223)
									if (((_this2->_smoothDataIndex != (int)0))){
										HX_STACK_LINE(223)
										::openfl::_v2::display::Graphics _g18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(223)
										_this2->_tilesheet->drawTiles(_g18,_this2->_smoothData,true,_this2->_renderFlags,_this2->_smoothDataIndex);
										HX_STACK_LINE(223)
										_this2->_smoothDataIndex = (int)0;
									}
								}
								HX_STACK_LINE(223)
								::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
							}
							HX_STACK_LINE(223)
							_this1;
						}
						HX_STACK_LINE(223)
						if (((smooth1 == null()))){
							HX_STACK_LINE(223)
							smooth1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
						}
						HX_STACK_LINE(223)
						Array< Float > _data;		HX_STACK_VAR(_data,"_data");
						HX_STACK_LINE(223)
						if ((smooth1)){
							HX_STACK_LINE(223)
							_data = _this1->_smoothData;
						}
						else{
							HX_STACK_LINE(223)
							_data = _this1->_data;
						}
						HX_STACK_LINE(223)
						int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
						HX_STACK_LINE(223)
						if ((smooth1)){
							HX_STACK_LINE(223)
							_dataIndex = _this1->_smoothDataIndex;
						}
						else{
							HX_STACK_LINE(223)
							_dataIndex = _this1->_dataIndex;
						}
						HX_STACK_LINE(223)
						int _g19 = (_dataIndex)++;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(223)
						_data[_g19] = matrix->tx;
						HX_STACK_LINE(223)
						int _g20 = (_dataIndex)++;		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(223)
						_data[_g20] = matrix->ty;
						HX_STACK_LINE(223)
						int _g21 = (_dataIndex)++;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(223)
						_data[_g21] = _this->tileIndex;
						HX_STACK_LINE(223)
						int _g22 = (_dataIndex)++;		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(223)
						_data[_g22] = matrix->a;
						HX_STACK_LINE(223)
						int _g23 = (_dataIndex)++;		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(223)
						_data[_g23] = matrix->b;
						HX_STACK_LINE(223)
						int _g24 = (_dataIndex)++;		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(223)
						_data[_g24] = matrix->c;
						HX_STACK_LINE(223)
						int _g25 = (_dataIndex)++;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(223)
						_data[_g25] = matrix->d;
						HX_STACK_LINE(223)
						if ((_this1->_flagRGB)){
							HX_STACK_LINE(223)
							int _g26 = (_dataIndex)++;		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(223)
							_data[_g26] = red;
							HX_STACK_LINE(223)
							int _g27 = (_dataIndex)++;		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(223)
							_data[_g27] = green;
							HX_STACK_LINE(223)
							int _g28 = (_dataIndex)++;		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(223)
							_data[_g28] = blue;
						}
						HX_STACK_LINE(223)
						if ((_this1->_flagAlpha)){
							HX_STACK_LINE(223)
							int _g29 = (_dataIndex)++;		HX_STACK_VAR(_g29,"_g29");
							HX_STACK_LINE(223)
							_data[_g29] = alpha;
						}
						HX_STACK_LINE(223)
						if ((smooth1)){
							HX_STACK_LINE(223)
							_this1->_smoothDataIndex = _dataIndex;
						}
						else{
							HX_STACK_LINE(223)
							_this1->_dataIndex = _dataIndex;
						}
					}
				}
				else{
					HX_STACK_LINE(223)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != _this1))){
							HX_STACK_LINE(223)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
								HX_STACK_LINE(223)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(223)
								if (((_this2->_dataIndex != (int)0))){
									HX_STACK_LINE(223)
									::openfl::_v2::display::Graphics _g30 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g30,"_g30");
									HX_STACK_LINE(223)
									_this2->_tilesheet->drawTiles(_g30,_this2->_data,false,_this2->_renderFlags,_this2->_dataIndex);
									HX_STACK_LINE(223)
									_this2->_dataIndex = (int)0;
								}
								HX_STACK_LINE(223)
								if (((_this2->_smoothDataIndex != (int)0))){
									HX_STACK_LINE(223)
									::openfl::_v2::display::Graphics _g31 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(223)
									_this2->_tilesheet->drawTiles(_g31,_this2->_smoothData,true,_this2->_renderFlags,_this2->_smoothDataIndex);
									HX_STACK_LINE(223)
									_this2->_smoothDataIndex = (int)0;
								}
							}
							HX_STACK_LINE(223)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(223)
						_this1;
					}
					HX_STACK_LINE(223)
					if (((smooth1 == null()))){
						HX_STACK_LINE(223)
						smooth1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;
					}
					HX_STACK_LINE(223)
					Array< Float > _data;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(223)
					if ((smooth1)){
						HX_STACK_LINE(223)
						_data = _this1->_smoothData;
					}
					else{
						HX_STACK_LINE(223)
						_data = _this1->_data;
					}
					HX_STACK_LINE(223)
					int _dataIndex;		HX_STACK_VAR(_dataIndex,"_dataIndex");
					HX_STACK_LINE(223)
					if ((smooth1)){
						HX_STACK_LINE(223)
						_dataIndex = _this1->_smoothDataIndex;
					}
					else{
						HX_STACK_LINE(223)
						_dataIndex = _this1->_dataIndex;
					}
					HX_STACK_LINE(223)
					int _g32 = (_dataIndex)++;		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(223)
					_data[_g32] = tx;
					HX_STACK_LINE(223)
					int _g33 = (_dataIndex)++;		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(223)
					_data[_g33] = ty;
					HX_STACK_LINE(223)
					int _g34 = (_dataIndex)++;		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(223)
					_data[_g34] = _this->tileIndex;
					HX_STACK_LINE(223)
					int _g35 = (_dataIndex)++;		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(223)
					_data[_g35] = a;
					HX_STACK_LINE(223)
					int _g36 = (_dataIndex)++;		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(223)
					_data[_g36] = b;
					HX_STACK_LINE(223)
					int _g37 = (_dataIndex)++;		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(223)
					_data[_g37] = c;
					HX_STACK_LINE(223)
					int _g38 = (_dataIndex)++;		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(223)
					_data[_g38] = d;
					HX_STACK_LINE(223)
					if ((_this1->_flagRGB)){
						HX_STACK_LINE(223)
						int _g39 = (_dataIndex)++;		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(223)
						_data[_g39] = red;
						HX_STACK_LINE(223)
						int _g40 = (_dataIndex)++;		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(223)
						_data[_g40] = green;
						HX_STACK_LINE(223)
						int _g41 = (_dataIndex)++;		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(223)
						_data[_g41] = blue;
					}
					HX_STACK_LINE(223)
					if ((_this1->_flagAlpha)){
						HX_STACK_LINE(223)
						int _g42 = (_dataIndex)++;		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(223)
						_data[_g42] = alpha;
					}
					HX_STACK_LINE(223)
					if ((smooth1)){
						HX_STACK_LINE(223)
						_this1->_smoothDataIndex = _dataIndex;
					}
					else{
						HX_STACK_LINE(223)
						_this1->_dataIndex = _dataIndex;
					}
				}
			}
		}
	}
return null();
}


Void Image_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","updateBuffer",0xd9155546,"com.haxepunk.graphics.Image.updateBuffer","com/haxepunk/graphics/Image.hx",378,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(379)
		if (((this->_source == null()))){
			HX_STACK_LINE(379)
			return null();
		}
		HX_STACK_LINE(380)
		if ((clearBefore)){
			HX_STACK_LINE(380)
			this->_buffer->fillRect(this->_bufferRect,(int)0);
		}
		HX_STACK_LINE(381)
		this->_buffer->copyPixels(this->_source,this->_sourceRect,::com::haxepunk::HXP_obj::zero,null(),null(),null());
		HX_STACK_LINE(382)
		if (((this->_tint != null()))){
			HX_STACK_LINE(382)
			this->_buffer->colorTransform(this->_bufferRect,this->_tint);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,updateBuffer,(void))

Void Image_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","updateColorTransform",0x3a1b25cf,"com.haxepunk.graphics.Image.updateColorTransform","com/haxepunk/graphics/Image.hx",386,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(387)
		if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
			HX_STACK_LINE(389)
			this->_tint = null();
		}
		else{
			HX_STACK_LINE(393)
			this->_tint = this->_colorTransform;
			HX_STACK_LINE(394)
			this->_tint->redMultiplier = this->_red;
			HX_STACK_LINE(395)
			this->_tint->greenMultiplier = this->_green;
			HX_STACK_LINE(396)
			this->_tint->blueMultiplier = this->_blue;
			HX_STACK_LINE(397)
			this->_tint->alphaMultiplier = this->_alpha;
		}
		HX_STACK_LINE(399)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,updateColorTransform,(void))

Void Image_obj::clear( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","clear",0x78107690,"com.haxepunk.graphics.Image.clear","com/haxepunk/graphics/Image.hx",406,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		if (((this->_buffer == null()))){
			HX_STACK_LINE(407)
			return null();
		}
		HX_STACK_LINE(408)
		this->_buffer->fillRect(this->_bufferRect,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clear,(void))

Float Image_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_alpha",0xce8f4638,"com.haxepunk.graphics.Image.get_alpha","com/haxepunk/graphics/Image.hx",415,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(415)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_alpha,return )

Float Image_obj::set_alpha( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_alpha",0xb1e03244,"com.haxepunk.graphics.Image.set_alpha","com/haxepunk/graphics/Image.hx",417,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(418)
	if (((value < (int)0))){
		HX_STACK_LINE(418)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(418)
		if (((value > (int)1))){
			HX_STACK_LINE(418)
			value = (int)1;
		}
		else{
			HX_STACK_LINE(418)
			value = value;
		}
	}
	HX_STACK_LINE(419)
	if (((this->_alpha == value))){
		HX_STACK_LINE(419)
		return value;
	}
	HX_STACK_LINE(420)
	this->_alpha = value;
	HX_STACK_LINE(421)
	if ((this->blit)){
		HX_STACK_LINE(421)
		this->updateColorTransform();
	}
	HX_STACK_LINE(422)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_alpha,return )

int Image_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_color",0xf755103d,"com.haxepunk.graphics.Image.get_color","com/haxepunk/graphics/Image.hx",429,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_color,return )

int Image_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_color",0xdaa5fc49,"com.haxepunk.graphics.Image.set_color","com/haxepunk/graphics/Image.hx",431,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(432)
	hx::AndEq(value,(int)16777215);
	HX_STACK_LINE(433)
	if (((this->_color == value))){
		HX_STACK_LINE(433)
		return value;
	}
	HX_STACK_LINE(434)
	this->_color = value;
	HX_STACK_LINE(436)
	this->_red = (Float(((int((int(this->_color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(437)
	this->_green = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(438)
	this->_blue = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(439)
	if ((this->blit)){
		HX_STACK_LINE(439)
		this->updateColorTransform();
	}
	HX_STACK_LINE(440)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_color,return )

bool Image_obj::get_flipped( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_flipped",0xd309f59c,"com.haxepunk.graphics.Image.get_flipped","com/haxepunk/graphics/Image.hx",448,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(448)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_flipped,return )

bool Image_obj::set_flipped( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_flipped",0xdd76fca8,"com.haxepunk.graphics.Image.set_flipped","com/haxepunk/graphics/Image.hx",450,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(451)
	if (((this->_flipped == value))){
		HX_STACK_LINE(451)
		return value;
	}
	HX_STACK_LINE(453)
	if ((this->blit)){
		HX_STACK_LINE(455)
		::openfl::_v2::display::BitmapData temp = this->_source;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(456)
		if (((bool(!(value)) || bool((this->_flip != null()))))){
			HX_STACK_LINE(458)
			this->_source = this->_flip;
		}
		else{
			HX_STACK_LINE(460)
			int _g = ::__hxcpp_obj_id(temp);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(460)
			if ((::com::haxepunk::graphics::Image_obj::_flips->__Internal->exists(_g))){
				HX_STACK_LINE(462)
				::openfl::_v2::display::BitmapData _g1 = ::com::haxepunk::graphics::Image_obj::_flips->get(temp);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(462)
				this->_source = _g1;
			}
			else{
				HX_STACK_LINE(466)
				int _g2 = this->_source->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(466)
				int _g3 = this->_source->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(466)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::createBitmap(_g2,_g3,true,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(466)
				this->_source = _g4;
				HX_STACK_LINE(467)
				::com::haxepunk::graphics::Image_obj::_flips->set(temp,this->_source);
				HX_STACK_LINE(468)
				::com::haxepunk::HXP_obj::matrix->identity();
				HX_STACK_LINE(469)
				::com::haxepunk::HXP_obj::matrix->a = (int)-1;
				HX_STACK_LINE(470)
				int _g5 = this->_source->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(470)
				::com::haxepunk::HXP_obj::matrix->tx = _g5;
				HX_STACK_LINE(471)
				this->_source->draw(temp,::com::haxepunk::HXP_obj::matrix,null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(473)
		this->_flip = temp;
		HX_STACK_LINE(474)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(476)
	this->_flipped = value;
	HX_STACK_LINE(477)
	return this->_flipped;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_flipped,return )

Void Image_obj::centerOrigin( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOrigin",0x17f332f8,"com.haxepunk.graphics.Image.centerOrigin","com/haxepunk/graphics/Image.hx",484,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(485)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(485)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(485)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(485)
		this->originX = _g2;
		HX_STACK_LINE(486)
		int _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(486)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(486)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(486)
		this->originY = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOrigin,(void))

Void Image_obj::centerOO( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOO",0xaec80912,"com.haxepunk.graphics.Image.centerOO","com/haxepunk/graphics/Image.hx",493,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(494)
			_g->x = (_g->x + this->originX);
		}
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(495)
			_g->y = (_g->y + this->originY);
		}
		HX_STACK_LINE(496)
		this->centerOrigin();
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			_g->x = (_g->x - this->originX);
		}
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(498)
			_g->y = (_g->y - this->originY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOO,(void))

int Image_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_width",0x775b54e0,"com.haxepunk.graphics.Image.get_width","com/haxepunk/graphics/Image.hx",520,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(520)
	return ::Std_obj::_int((  ((this->blit)) ? Float(this->_bufferRect->width) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->_rect->width) : Float(this->_region->_rect->height) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_height",0xaede67cd,"com.haxepunk.graphics.Image.get_height","com/haxepunk/graphics/Image.hx",526,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(526)
	return ::Std_obj::_int((  ((this->blit)) ? Float(this->_bufferRect->height) : Float((  ((!(this->_region->rotated))) ? Float(this->_region->_rect->height) : Float(this->_region->_rect->width) )) ));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

Float Image_obj::get_scaledWidth( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledWidth",0x7039cb66,"com.haxepunk.graphics.Image.get_scaledWidth","com/haxepunk/graphics/Image.hx",532,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(532)
	int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(532)
	Float _g1 = (_g * this->scaleX);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(532)
	return (_g1 * this->_scale);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledWidth,return )

Float Image_obj::set_scaledWidth( Float w){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledWidth",0x6c054872,"com.haxepunk.graphics.Image.set_scaledWidth","com/haxepunk/graphics/Image.hx",533,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(534)
	int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(534)
	Float _g1 = (Float((Float(w) / Float(this->_scale))) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(534)
	return this->scaleX = _g1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledWidth,return )

Float Image_obj::get_scaledHeight( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledHeight",0x78a7a687,"com.haxepunk.graphics.Image.get_scaledHeight","com/haxepunk/graphics/Image.hx",541,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(541)
	Float _g1 = (_g * this->scaleY);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(541)
	return (_g1 * this->_scale);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledHeight,return )

Float Image_obj::set_scaledHeight( Float h){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledHeight",0xcee993fb,"com.haxepunk.graphics.Image.set_scaledHeight","com/haxepunk/graphics/Image.hx",542,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(543)
	int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(543)
	Float _g1 = (Float((Float(h) / Float(this->_scale))) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(543)
	return this->scaleY = _g1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledHeight,return )

::openfl::_v2::geom::Rectangle Image_obj::get_clipRect( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_clipRect",0x1641357a,"com.haxepunk.graphics.Image.get_clipRect","com/haxepunk/graphics/Image.hx",550,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(550)
	return this->_sourceRect;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_clipRect,return )

::com::haxepunk::graphics::Image Image_obj::createRect( int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createRect",0x1a3ffe5d,"com.haxepunk.graphics.Image.createRect","com/haxepunk/graphics/Image.hx",236,0xdb117b4e)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(237)
		if (((bool((width == (int)0)) || bool((height == (int)0))))){
			HX_STACK_LINE(238)
			HX_STACK_DO_THROW(HX_CSTRING("Illegal rect, sizes cannot be 0."));
		}
		HX_STACK_LINE(240)
		::openfl::_v2::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,(int)-1);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(241)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(242)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(244)
			::com::haxepunk::ds::Either _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &source){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",244,0xdb117b4e)
						{
							HX_STACK_LINE(244)
							::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(244)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(244)
				_g = _Function_3_1::Block(source);
				HX_STACK_LINE(244)
				::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(244)
					_g1 = e;
				}
			}
			HX_STACK_LINE(244)
			::com::haxepunk::graphics::Image _g2 = ::com::haxepunk::graphics::Image_obj::__new(_g1,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(244)
			image = _g2;
		}
		else{
			HX_STACK_LINE(248)
			::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &source){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",248,0xdb117b4e)
					{
						HX_STACK_LINE(248)
						::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &source){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",248,0xdb117b4e)
								{
									HX_STACK_LINE(248)
									::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(248)
									return data;
								}
								return null();
							}
						};
						HX_STACK_LINE(248)
						_g3 = _Function_3_1::Block(source);
						HX_STACK_LINE(248)
						::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(248)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(248)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &source){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",248,0xdb117b4e)
					{
						HX_STACK_LINE(248)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(source);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(248)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(248)
			_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(source)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(source)) );
			HX_STACK_LINE(248)
			::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(248)
			image = _g6;
		}
		HX_STACK_LINE(251)
		image->set_color(color);
		HX_STACK_LINE(252)
		image->set_alpha(alpha);
		HX_STACK_LINE(254)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Image_obj,createRect,return )

::com::haxepunk::graphics::Image Image_obj::createCircle( int radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createCircle",0x811fa389,"com.haxepunk.graphics.Image.createCircle","com/haxepunk/graphics/Image.hx",265,0xdb117b4e)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(266)
		if (((radius == (int)0))){
			HX_STACK_LINE(267)
			HX_STACK_DO_THROW(HX_CSTRING("Illegal circle, radius cannot be 0."));
		}
		HX_STACK_LINE(269)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->clear();
		HX_STACK_LINE(270)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->beginFill((int)16777215,null());
		HX_STACK_LINE(271)
		::com::haxepunk::HXP_obj::sprite->get_graphics()->drawCircle(radius,radius,radius);
		HX_STACK_LINE(272)
		::openfl::_v2::display::BitmapData data = ::com::haxepunk::HXP_obj::createBitmap((radius * (int)2),(radius * (int)2),true,(int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(273)
		data->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(275)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(276)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(278)
			::com::haxepunk::ds::Either _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				::com::haxepunk::graphics::atlas::AtlasData _g;		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",278,0xdb117b4e)
						{
							HX_STACK_LINE(278)
							::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(278)
							return data1;
						}
						return null();
					}
				};
				HX_STACK_LINE(278)
				_g = _Function_3_1::Block(data);
				HX_STACK_LINE(278)
				::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(278)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(278)
					_g1 = e;
				}
			}
			HX_STACK_LINE(278)
			::com::haxepunk::graphics::Image _g2 = ::com::haxepunk::graphics::Image_obj::__new(_g1,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(278)
			image = _g2;
		}
		else{
			HX_STACK_LINE(282)
			::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",282,0xdb117b4e)
					{
						HX_STACK_LINE(282)
						::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &data){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",282,0xdb117b4e)
								{
									HX_STACK_LINE(282)
									::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
									HX_STACK_LINE(282)
									return data1;
								}
								return null();
							}
						};
						HX_STACK_LINE(282)
						_g3 = _Function_3_1::Block(data);
						HX_STACK_LINE(282)
						::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(282)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(282)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",282,0xdb117b4e)
					{
						HX_STACK_LINE(282)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(data);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(282)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(282)
			_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(data)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(data)) );
			HX_STACK_LINE(282)
			::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(282)
			image = _g6;
		}
		HX_STACK_LINE(285)
		image->set_color(color);
		HX_STACK_LINE(286)
		image->set_alpha(alpha);
		HX_STACK_LINE(288)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,createCircle,return )

::com::haxepunk::graphics::Image Image_obj::createPolygon( ::com::haxepunk::masks::Polygon polygon,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createPolygon",0x976a1ae1,"com.haxepunk.graphics.Image.createPolygon","com/haxepunk/graphics/Image.hx",301,0xdb117b4e)
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(302)
		::openfl::_v2::display::Graphics graphics = ::com::haxepunk::HXP_obj::sprite->get_graphics();		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(303)
		Array< ::Dynamic > points = polygon->_points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(305)
		Float minX;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(306)
		Float maxX;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(307)
		Float minY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(308)
		Float maxY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(310)
		::openfl::_v2::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(311)
		Float originalAngle = polygon->_angle;		HX_STACK_VAR(originalAngle,"originalAngle");
		HX_STACK_LINE(313)
		polygon->set_angle((int)0);
		HX_STACK_LINE(315)
		Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		Float _g1 = ((int)179 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(315)
		Float _g2 = minY = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(315)
		minX = _g2;
		HX_STACK_LINE(316)
		Float _g3 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(316)
		Float _g4 = -((((int)179 * _g3)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(316)
		Float _g5 = maxY = _g4;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(316)
		maxX = _g5;
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(319)
			while((true)){
				HX_STACK_LINE(319)
				if ((!(((_g6 < points->length))))){
					HX_STACK_LINE(319)
					break;
				}
				HX_STACK_LINE(319)
				::openfl::_v2::geom::Point p1 = points->__get(_g6).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(319)
				++(_g6);
				HX_STACK_LINE(321)
				if (((p1->x < minX))){
					HX_STACK_LINE(321)
					minX = p1->x;
				}
				HX_STACK_LINE(322)
				if (((p1->x > maxX))){
					HX_STACK_LINE(322)
					maxX = p1->x;
				}
				HX_STACK_LINE(323)
				if (((p1->y < minY))){
					HX_STACK_LINE(323)
					minY = p1->y;
				}
				HX_STACK_LINE(324)
				if (((p1->y > maxY))){
					HX_STACK_LINE(324)
					maxY = p1->y;
				}
			}
		}
		HX_STACK_LINE(327)
		int w = ::Math_obj::ceil((maxX - minX));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(328)
		int h = ::Math_obj::ceil((maxY - minY));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(330)
		if (((color > (int)16777215))){
			HX_STACK_LINE(330)
			color = (int((int)16777215) & int(color));
		}
		HX_STACK_LINE(331)
		graphics->clear();
		HX_STACK_LINE(333)
		if ((fill)){
			HX_STACK_LINE(334)
			graphics->beginFill(color,alpha);
		}
		else{
			HX_STACK_LINE(336)
			graphics->lineStyle(thick,color,alpha,false,::openfl::_v2::display::LineScaleMode_obj::NORMAL,null(),::openfl::_v2::display::JointStyle_obj::MITER,null());
		}
		HX_STACK_LINE(339)
		graphics->moveTo(points->__get((points->length - (int)1)).StaticCast< ::openfl::_v2::geom::Point >()->x,points->__get((points->length - (int)1)).StaticCast< ::openfl::_v2::geom::Point >()->y);
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(340)
			while((true)){
				HX_STACK_LINE(340)
				if ((!(((_g6 < points->length))))){
					HX_STACK_LINE(340)
					break;
				}
				HX_STACK_LINE(340)
				::openfl::_v2::geom::Point p1 = points->__get(_g6).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(340)
				++(_g6);
				HX_STACK_LINE(342)
				graphics->lineTo(p1->x,p1->y);
			}
		}
		HX_STACK_LINE(344)
		graphics->endFill();
		HX_STACK_LINE(346)
		::com::haxepunk::HXP_obj::matrix->identity();
		HX_STACK_LINE(347)
		::com::haxepunk::HXP_obj::matrix->translate(-(minX),-(minY));
		HX_STACK_LINE(349)
		::openfl::_v2::display::BitmapData data = ::com::haxepunk::HXP_obj::createBitmap(w,h,true,(int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(350)
		data->draw(::com::haxepunk::HXP_obj::sprite,::com::haxepunk::HXP_obj::matrix,null(),null(),null(),null());
		HX_STACK_LINE(352)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(353)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(355)
			::com::haxepunk::ds::Either _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::com::haxepunk::graphics::atlas::AtlasData _g6;		HX_STACK_VAR(_g6,"_g6");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",355,0xdb117b4e)
						{
							HX_STACK_LINE(355)
							::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(355)
							return data1;
						}
						return null();
					}
				};
				HX_STACK_LINE(355)
				_g6 = _Function_3_1::Block(data);
				HX_STACK_LINE(355)
				::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g6);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(355)
					_g7 = e;
				}
			}
			HX_STACK_LINE(355)
			::com::haxepunk::graphics::Image _g8 = ::com::haxepunk::graphics::Image_obj::__new(_g7,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(355)
			image = _g8;
		}
		else{
			HX_STACK_LINE(359)
			::com::haxepunk::ds::Either _g11;		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",359,0xdb117b4e)
					{
						HX_STACK_LINE(359)
						::com::haxepunk::graphics::atlas::AtlasData _g9;		HX_STACK_VAR(_g9,"_g9");
						struct _Function_3_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &data){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",359,0xdb117b4e)
								{
									HX_STACK_LINE(359)
									::com::haxepunk::graphics::atlas::AtlasData data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
									HX_STACK_LINE(359)
									return data1;
								}
								return null();
							}
						};
						HX_STACK_LINE(359)
						_g9 = _Function_3_1::Block(data);
						HX_STACK_LINE(359)
						::com::haxepunk::graphics::atlas::AtlasRegion _g10 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(359)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g10);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(359)
						return e;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",359,0xdb117b4e)
					{
						HX_STACK_LINE(359)
						::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(data);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(359)
						return e;
					}
					return null();
				}
			};
			HX_STACK_LINE(359)
			_g11 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(data)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(data)) );
			HX_STACK_LINE(359)
			::com::haxepunk::graphics::Image _g12 = ::com::haxepunk::graphics::Image_obj::__new(_g11,null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(359)
			image = _g12;
		}
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			int _g13 = polygon->get_x();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(363)
			Float value = (_g13 + polygon->origin->x);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(363)
			image->x = value;
		}
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g14 = polygon->get_y();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(364)
			Float value = (_g14 + polygon->origin->y);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(364)
			image->y = value;
		}
		HX_STACK_LINE(365)
		image->originX = (image->x - polygon->minX);
		HX_STACK_LINE(366)
		image->originY = (image->y - polygon->minY);
		HX_STACK_LINE(367)
		image->angle = originalAngle;
		HX_STACK_LINE(368)
		polygon->set_angle(originalAngle);
		HX_STACK_LINE(370)
		return image;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Image_obj,createPolygon,return )

::haxe::ds::ObjectMap Image_obj::_flips;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(_source,"_source");
	HX_MARK_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(_flip,"_flip");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	HX_VISIT_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(_flip,"_flip");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { return _flip; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { return _flips; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return get_flipped(); }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centerOO") ) { return centerOO_dyn(); }
		if (HX_FIELD_EQ(inName,"clipRect") ) { return inCallProp ? get_clipRect() : clipRect; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRect") ) { return createRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flipped") ) { return get_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipped") ) { return set_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return get_scaledWidth(); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { return _sourceRect; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { return _bufferRect; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCircle") ) { return createCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return get_scaledHeight(); }
		if (HX_FIELD_EQ(inName,"get_clipRect") ) { return get_clipRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_scaledWidth") ) { return get_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledWidth") ) { return set_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_scaledHeight") ) { return get_scaledHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledHeight") ) { return set_scaledHeight_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { _flip=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { _flips=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipped") ) { return set_flipped(inValue); }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasRegion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { return set_scaledWidth(inValue); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { _sourceRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { _bufferRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { return set_scaledHeight(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("scaledWidth"));
	outFields->push(HX_CSTRING("scaledHeight"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("_source"));
	outFields->push(HX_CSTRING("_sourceRect"));
	outFields->push(HX_CSTRING("_buffer"));
	outFields->push(HX_CSTRING("_bufferRect"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("_flip"));
	outFields->push(HX_CSTRING("_scale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createRect"),
	HX_CSTRING("createCircle"),
	HX_CSTRING("createPolygon"),
	HX_CSTRING("_flips"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Image_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsFloat,(int)offsetof(Image_obj,originX),HX_CSTRING("originX")},
	{hx::fsFloat,(int)offsetof(Image_obj,originY),HX_CSTRING("originY")},
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(Image_obj,blend),HX_CSTRING("blend")},
	{hx::fsBool,(int)offsetof(Image_obj,smooth),HX_CSTRING("smooth")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Image_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Image_obj,_source),HX_CSTRING("_source")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Image_obj,_sourceRect),HX_CSTRING("_sourceRect")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Image_obj,_buffer),HX_CSTRING("_buffer")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Image_obj,_bufferRect),HX_CSTRING("_bufferRect")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(Image_obj,_bitmap),HX_CSTRING("_bitmap")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasRegion*/ ,(int)offsetof(Image_obj,_region),HX_CSTRING("_region")},
	{hx::fsFloat,(int)offsetof(Image_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsInt,(int)offsetof(Image_obj,_color),HX_CSTRING("_color")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_tint),HX_CSTRING("_tint")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_colorTransform),HX_CSTRING("_colorTransform")},
	{hx::fsObject /*::openfl::_v2::geom::Matrix*/ ,(int)offsetof(Image_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsFloat,(int)offsetof(Image_obj,_red),HX_CSTRING("_red")},
	{hx::fsFloat,(int)offsetof(Image_obj,_green),HX_CSTRING("_green")},
	{hx::fsFloat,(int)offsetof(Image_obj,_blue),HX_CSTRING("_blue")},
	{hx::fsBool,(int)offsetof(Image_obj,_flipped),HX_CSTRING("_flipped")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Image_obj,_flip),HX_CSTRING("_flip")},
	{hx::fsFloat,(int)offsetof(Image_obj,_scale),HX_CSTRING("_scale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("angle"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("blend"),
	HX_CSTRING("init"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("render"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_flipped"),
	HX_CSTRING("set_flipped"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("centerOO"),
	HX_CSTRING("smooth"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_scaledWidth"),
	HX_CSTRING("set_scaledWidth"),
	HX_CSTRING("get_scaledHeight"),
	HX_CSTRING("set_scaledHeight"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("get_clipRect"),
	HX_CSTRING("_source"),
	HX_CSTRING("_sourceRect"),
	HX_CSTRING("_buffer"),
	HX_CSTRING("_bufferRect"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_region"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_color"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_red"),
	HX_CSTRING("_green"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_flipped"),
	HX_CSTRING("_flip"),
	HX_CSTRING("_scale"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
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

void Image_obj::__boot()
{
	_flips= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
