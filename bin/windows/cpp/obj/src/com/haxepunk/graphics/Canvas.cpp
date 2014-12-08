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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
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
namespace com{
namespace haxepunk{
namespace graphics{

Void Canvas_obj::__construct(int width,int height)
{
HX_STACK_FRAME("com.haxepunk.graphics.Canvas","new",0x14940834,"com.haxepunk.graphics.Canvas.new","com/haxepunk/graphics/Canvas.hx",17,0x2ffb617b)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(414)
	this->_maxHeight = (int)4000;
	HX_STACK_LINE(413)
	this->_maxWidth = (int)4000;
	HX_STACK_LINE(410)
	this->_redrawBuffers = false;
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(52)
	this->_color = (int)16777215;
	HX_STACK_LINE(53)
	Float _g = this->_blue = (int)1;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	Float _g1 = this->_green = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	this->_red = _g1;
	HX_STACK_LINE(54)
	this->_alpha = (int)1;
	HX_STACK_LINE(55)
	::openfl::_v2::display::Graphics _g2 = ::com::haxepunk::HXP_obj::sprite->get_graphics();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	this->_graphics = _g2;
	HX_STACK_LINE(56)
	::openfl::_v2::geom::Matrix _g3 = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(56)
	this->_matrix = _g3;
	HX_STACK_LINE(57)
	::openfl::_v2::geom::Rectangle _g4 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(57)
	this->_rect = _g4;
	HX_STACK_LINE(58)
	::openfl::_v2::geom::ColorTransform _g5 = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(58)
	this->_colorTransform = _g5;
	HX_STACK_LINE(59)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(59)
	this->_buffers = _g6;
	HX_STACK_LINE(60)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(60)
	this->_midBuffers = _g7;
	HX_STACK_LINE(61)
	this->angle = (int)0;
	HX_STACK_LINE(62)
	Float _g8 = this->scaleY = (int)1;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(62)
	Float _g9 = this->scaleX = _g8;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(62)
	this->scale = _g9;
	HX_STACK_LINE(64)
	this->_width = width;
	HX_STACK_LINE(65)
	this->_height = height;
	HX_STACK_LINE(67)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		HX_STACK_LINE(69)
		int _g10 = ::Math_obj::ceil((Float(width) / Float(this->_maxWidth)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(69)
		this->_refWidth = _g10;
		HX_STACK_LINE(70)
		int _g11 = ::Math_obj::ceil((Float(height) / Float(this->_maxHeight)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(70)
		this->_refHeight = _g11;
		HX_STACK_LINE(71)
		::openfl::_v2::display::BitmapData _g12 = ::com::haxepunk::HXP_obj::createBitmap(this->_refWidth,this->_refHeight,null(),null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(71)
		this->_ref = _g12;
		HX_STACK_LINE(72)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(72)
		int y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(72)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(72)
		int h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(72)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(73)
		int ww = hx::Mod(this->_width,this->_maxWidth);		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(74)
		int hh = hx::Mod(this->_height,this->_maxHeight);		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(75)
		if (((ww == (int)0))){
			HX_STACK_LINE(75)
			ww = this->_maxWidth;
		}
		HX_STACK_LINE(76)
		if (((hh == (int)0))){
			HX_STACK_LINE(76)
			hh = this->_maxHeight;
		}
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			if ((!(((y < this->_refHeight))))){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(79)
			if (((y < (this->_refHeight - (int)1)))){
				HX_STACK_LINE(79)
				h = this->_maxHeight;
			}
			else{
				HX_STACK_LINE(79)
				h = hh;
			}
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				if ((!(((x < this->_refWidth))))){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(82)
				if (((x < (this->_refWidth - (int)1)))){
					HX_STACK_LINE(82)
					w = this->_maxWidth;
				}
				else{
					HX_STACK_LINE(82)
					w = ww;
				}
				HX_STACK_LINE(83)
				this->_ref->setPixel(x,y,i);
				HX_STACK_LINE(84)
				this->_buffers[i] = ::com::haxepunk::HXP_obj::createBitmap(w,h,true,null());
				HX_STACK_LINE(85)
				(i)++;
				HX_STACK_LINE(85)
				(x)++;
			}
			HX_STACK_LINE(87)
			x = (int)0;
			HX_STACK_LINE(87)
			(y)++;
		}
	}
}
;
	return null();
}

//Canvas_obj::~Canvas_obj() { }

Dynamic Canvas_obj::__CreateEmpty() { return  new Canvas_obj; }
hx::ObjectPtr< Canvas_obj > Canvas_obj::__new(int width,int height)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(width,height);
	return result;}

Dynamic Canvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Canvas_obj::render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","render",0xffc6d002,"com.haxepunk.graphics.Canvas.render","com/haxepunk/graphics/Canvas.hx",95,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(96)
		Float sx = (this->scale * this->scaleX);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(97)
		Float sy = (this->scale * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(100)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(101)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(103)
		Float _g = this->_rect->y = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		this->_rect->x = _g;
		HX_STACK_LINE(104)
		this->_rect->width = (this->_maxWidth * sx);
		HX_STACK_LINE(105)
		this->_rect->height = (this->_maxHeight * sy);
		HX_STACK_LINE(108)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(108)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(108)
		::openfl::_v2::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(108)
		Float px = this->_point->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(109)
		target->lock();
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			if ((!(((yy < this->_refHeight))))){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				if ((!(((xx < this->_refWidth))))){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(114)
				int _g1 = this->_ref->getPixel(xx,yy);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				::openfl::_v2::display::BitmapData _g2 = this->_buffers->__get(_g1).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(114)
				buffer = _g2;
				HX_STACK_LINE(116)
				if (((bool((this->angle == (int)0)) && bool((this->blend == null()))))){
					HX_STACK_LINE(118)
					if (((bool((bool((sx == (int)1)) && bool((sy == (int)1)))) && bool((this->_tint == null()))))){
						HX_STACK_LINE(121)
						int _g3 = buffer->get_width();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(121)
						this->_rect->width = _g3;
						HX_STACK_LINE(122)
						int _g4 = buffer->get_height();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(122)
						this->_rect->height = _g4;
						HX_STACK_LINE(123)
						target->copyPixels(buffer,this->_rect,this->_point,null(),null(),true);
					}
					else{
						HX_STACK_LINE(128)
						int _g5 = this->_ref->getPixel(xx,yy);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(128)
						int i = ::Std_obj::_int(_g5);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(129)
						int _g6 = buffer->get_width();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(129)
						Float _g7 = (_g6 * sx);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(129)
						int w = ::Std_obj::_int(_g7);		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(130)
						int _g8 = buffer->get_height();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(130)
						Float _g9 = (_g8 * sy);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(130)
						int h = ::Std_obj::_int(_g9);		HX_STACK_VAR(h,"h");
						HX_STACK_LINE(131)
						bool wrongSize;		HX_STACK_VAR(wrongSize,"wrongSize");
						struct _Function_5_1{
							inline static bool Block( int &i,hx::ObjectPtr< ::com::haxepunk::graphics::Canvas_obj > __this,int &w){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Canvas.hx",132,0x2ffb617b)
								{
									HX_STACK_LINE(132)
									int _g10 = __this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(132)
									return (_g10 != w);
								}
								return null();
							}
						};
						HX_STACK_LINE(131)
						if ((!(((  ((!(((i >= this->_midBuffers->length))))) ? bool(_Function_5_1::Block(i,this,w)) : bool(true) ))))){
							HX_STACK_LINE(133)
							int _g11 = this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(133)
							wrongSize = (_g11 != h);
						}
						else{
							HX_STACK_LINE(131)
							wrongSize = true;
						}
						HX_STACK_LINE(134)
						if (((bool(this->_redrawBuffers) || bool(wrongSize)))){
							HX_STACK_LINE(136)
							if ((wrongSize)){
								HX_STACK_LINE(138)
								if (((i < this->_midBuffers->length))){
									HX_STACK_LINE(140)
									this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->dispose();
								}
								HX_STACK_LINE(142)
								this->_midBuffers[i] = ::com::haxepunk::HXP_obj::createBitmap(w,h,true,null());
							}
							else{
								HX_STACK_LINE(146)
								::openfl::_v2::geom::Rectangle _g12 = this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->get_rect();		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(146)
								this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->fillRect(_g12,(int)0);
							}
							HX_STACK_LINE(148)
							Float _g13 = this->_matrix->c = (int)0;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(148)
							this->_matrix->b = _g13;
							HX_STACK_LINE(149)
							this->_matrix->a = sx;
							HX_STACK_LINE(150)
							this->_matrix->d = sy;
							HX_STACK_LINE(151)
							Float _g14 = this->_matrix->ty = (int)0;		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(151)
							this->_matrix->tx = _g14;
							HX_STACK_LINE(152)
							if (((this->angle != (int)0))){
								HX_STACK_LINE(152)
								this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
							}
							HX_STACK_LINE(154)
							this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >()->draw(buffer,this->_matrix,this->_tint,this->blend,null(),null());
						}
						HX_STACK_LINE(157)
						target->copyPixels(this->_midBuffers->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >(),this->_rect,this->_point,null(),null(),true);
					}
				}
				else{
					HX_STACK_LINE(163)
					Float _g15 = this->_matrix->c = (int)0;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(163)
					this->_matrix->b = _g15;
					HX_STACK_LINE(164)
					this->_matrix->a = sx;
					HX_STACK_LINE(165)
					this->_matrix->d = sy;
					HX_STACK_LINE(166)
					Float _g16 = this->_matrix->ty = (int)0;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(166)
					this->_matrix->tx = _g16;
					HX_STACK_LINE(167)
					if (((this->angle != (int)0))){
						HX_STACK_LINE(167)
						this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
					}
					HX_STACK_LINE(168)
					hx::AddEq(this->_matrix->tx,this->_point->x);
					HX_STACK_LINE(169)
					hx::AddEq(this->_matrix->ty,this->_point->y);
					HX_STACK_LINE(171)
					target->draw(buffer,this->_matrix,this->_tint,this->blend,null(),null());
				}
				HX_STACK_LINE(174)
				hx::AddEq(this->_point->x,(this->_maxWidth * sx));
				HX_STACK_LINE(175)
				(xx)++;
			}
			HX_STACK_LINE(177)
			this->_point->x = px;
			HX_STACK_LINE(178)
			hx::AddEq(this->_point->y,(this->_maxHeight * sy));
			HX_STACK_LINE(179)
			xx = (int)0;
			HX_STACK_LINE(180)
			(yy)++;
		}
		HX_STACK_LINE(182)
		target->unlock(null());
		HX_STACK_LINE(184)
		this->_redrawBuffers = false;
	}
return null();
}


Void Canvas_obj::draw( Float x,Float y,::openfl::_v2::display::BitmapData source,::openfl::_v2::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","draw",0xe660cdb0,"com.haxepunk.graphics.Canvas.draw","com/haxepunk/graphics/Canvas.hx",195,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(196)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(196)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(197)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(198)
			while((true)){
				HX_STACK_LINE(198)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(198)
					break;
				}
				HX_STACK_LINE(198)
				::openfl::_v2::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(198)
				++(_g);
				HX_STACK_LINE(200)
				this->_point->x = (x - xx);
				HX_STACK_LINE(201)
				this->_point->y = (y - yy);
				HX_STACK_LINE(202)
				::openfl::_v2::geom::Rectangle _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(202)
				if (((rect != null()))){
					HX_STACK_LINE(202)
					_g2 = rect;
				}
				else{
					HX_STACK_LINE(202)
					_g2 = source->get_rect();
				}
				HX_STACK_LINE(202)
				buffer->copyPixels(source,_g2,this->_point,null(),null(),true);
				HX_STACK_LINE(203)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(204)
				if (((xx >= this->_width))){
					HX_STACK_LINE(206)
					xx = (int)0;
					HX_STACK_LINE(207)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(210)
		this->_redrawBuffers = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Canvas_obj,draw,(void))

Void Canvas_obj::fill( ::openfl::_v2::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","fill",0xe7ac702f,"com.haxepunk.graphics.Canvas.fill","com/haxepunk/graphics/Canvas.hx",220,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(221)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(221)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(221)
		::openfl::_v2::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(222)
		this->_rect->width = rect->width;
		HX_STACK_LINE(223)
		this->_rect->height = rect->height;
		HX_STACK_LINE(224)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(224)
			hx::OrEq(color,(int)-16777216);
		}
		else{
			HX_STACK_LINE(225)
			if (((alpha <= (int)0))){
				HX_STACK_LINE(225)
				color = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				int _g = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				int _g1 = (int(_g) << int((int)24));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(226)
				int _g2 = (int(_g1) | int((int((int)16777215) & int(color))));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(226)
				color = _g2;
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::openfl::_v2::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(229)
				this->_rect->x = (rect->x - xx);
				HX_STACK_LINE(230)
				this->_rect->y = (rect->y - yy);
				HX_STACK_LINE(231)
				buffer1->fillRect(this->_rect,color);
				HX_STACK_LINE(232)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(233)
				if (((xx >= this->_width))){
					HX_STACK_LINE(235)
					xx = (int)0;
					HX_STACK_LINE(236)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,fill,(void))

Void Canvas_obj::drawRect( ::openfl::_v2::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","drawRect",0x4851def4,"com.haxepunk.graphics.Canvas.drawRect","com/haxepunk/graphics/Canvas.hx",248,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(249)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(249)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(249)
		::openfl::_v2::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(250)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(252)
			this->_rect->width = rect->width;
			HX_STACK_LINE(253)
			this->_rect->height = rect->height;
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(255)
				while((true)){
					HX_STACK_LINE(255)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(255)
						break;
					}
					HX_STACK_LINE(255)
					::openfl::_v2::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(255)
					++(_g);
					HX_STACK_LINE(257)
					this->_rect->x = (rect->x - xx);
					HX_STACK_LINE(258)
					this->_rect->y = (rect->y - yy);
					HX_STACK_LINE(259)
					buffer1->fillRect(this->_rect,(int((int)-16777216) | int(color)));
					HX_STACK_LINE(260)
					hx::AddEq(xx,this->_maxWidth);
					HX_STACK_LINE(261)
					if (((xx >= this->_width))){
						HX_STACK_LINE(263)
						xx = (int)0;
						HX_STACK_LINE(264)
						hx::AddEq(yy,this->_maxHeight);
					}
				}
			}
			HX_STACK_LINE(267)
			return null();
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(269)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				::openfl::_v2::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(269)
				++(_g);
				HX_STACK_LINE(271)
				this->_graphics->clear();
				HX_STACK_LINE(272)
				this->_graphics->beginFill(color,alpha);
				HX_STACK_LINE(273)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(274)
				buffer1->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(275)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(276)
				if (((xx >= this->_width))){
					HX_STACK_LINE(278)
					xx = (int)0;
					HX_STACK_LINE(279)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(282)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawRect,(void))

Void Canvas_obj::fillTexture( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::display::BitmapData texture){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","fillTexture",0xa436746c,"com.haxepunk.graphics.Canvas.fillTexture","com/haxepunk/graphics/Canvas.hx",291,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(292)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(292)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				::openfl::_v2::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(293)
				++(_g);
				HX_STACK_LINE(295)
				this->_graphics->clear();
				HX_STACK_LINE(296)
				this->_graphics->beginBitmapFill(texture,null(),null(),null());
				HX_STACK_LINE(297)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(298)
				buffer->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(299)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(300)
				if (((xx >= this->_width))){
					HX_STACK_LINE(302)
					xx = (int)0;
					HX_STACK_LINE(303)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(306)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,fillTexture,(void))

Void Canvas_obj::drawGraphic( int x,int y,::com::haxepunk::Graphic source){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","drawGraphic",0x9f09cad8,"com.haxepunk.graphics.Canvas.drawGraphic","com/haxepunk/graphics/Canvas.hx",316,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(317)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(317)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(318)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(318)
			while((true)){
				HX_STACK_LINE(318)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(318)
					break;
				}
				HX_STACK_LINE(318)
				::openfl::_v2::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::openfl::_v2::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(318)
				++(_g);
				HX_STACK_LINE(320)
				this->_point->x = (x - xx);
				HX_STACK_LINE(321)
				this->_point->y = (y - yy);
				HX_STACK_LINE(322)
				source->render(buffer,this->_point,::com::haxepunk::HXP_obj::zero);
				HX_STACK_LINE(323)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(324)
				if (((xx >= this->_width))){
					HX_STACK_LINE(326)
					xx = (int)0;
					HX_STACK_LINE(327)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawGraphic,(void))

int Canvas_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_color",0xde8f9c8e,"com.haxepunk.graphics.Canvas.get_color","com/haxepunk/graphics/Canvas.hx",336,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_color,return )

int Canvas_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","set_color",0xc1e0889a,"com.haxepunk.graphics.Canvas.set_color","com/haxepunk/graphics/Canvas.hx",338,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(339)
	hx::ModEq(value,(int)16777215);
	HX_STACK_LINE(340)
	if (((this->_color == value))){
		HX_STACK_LINE(340)
		return this->_color;
	}
	HX_STACK_LINE(341)
	this->_color = value;
	HX_STACK_LINE(342)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		int color = this->get_color();		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(342)
		_g = (int((int(color) >> int((int)16))) & int((int)255));
	}
	HX_STACK_LINE(342)
	Float _g1 = (Float(_g) / Float((int)255));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(342)
	this->_red = _g1;
	HX_STACK_LINE(343)
	int _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int color = this->get_color();		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(343)
		_g2 = (int((int(color) >> int((int)8))) & int((int)255));
	}
	HX_STACK_LINE(343)
	Float _g3 = (Float(_g2) / Float((int)255));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(343)
	this->_green = _g3;
	HX_STACK_LINE(344)
	int _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		int color = this->get_color();		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(344)
		_g4 = (int(color) & int((int)255));
	}
	HX_STACK_LINE(344)
	Float _g5 = (Float(_g4) / Float((int)255));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(344)
	this->_blue = _g5;
	HX_STACK_LINE(346)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(348)
		this->_tint = null();
		HX_STACK_LINE(349)
		return this->_color;
	}
	HX_STACK_LINE(351)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(352)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(353)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(354)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(355)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(356)
	this->_redrawBuffers = true;
	HX_STACK_LINE(357)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_color,return )

Float Canvas_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_alpha",0xb5c9d289,"com.haxepunk.graphics.Canvas.get_alpha","com/haxepunk/graphics/Canvas.hx",364,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_alpha,return )

Float Canvas_obj::set_alpha( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","set_alpha",0x991abe95,"com.haxepunk.graphics.Canvas.set_alpha","com/haxepunk/graphics/Canvas.hx",366,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(367)
	if (((value < (int)0))){
		HX_STACK_LINE(367)
		value = (int)0;
	}
	HX_STACK_LINE(368)
	if (((value > (int)1))){
		HX_STACK_LINE(368)
		value = (int)1;
	}
	HX_STACK_LINE(369)
	if (((this->_alpha == value))){
		HX_STACK_LINE(369)
		return this->_alpha;
	}
	HX_STACK_LINE(370)
	this->_alpha = value;
	HX_STACK_LINE(371)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(373)
		this->_tint = null();
		HX_STACK_LINE(374)
		return this->_alpha;
	}
	HX_STACK_LINE(376)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(377)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(378)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(379)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(380)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(381)
	this->_redrawBuffers = true;
	HX_STACK_LINE(382)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_alpha,return )

Void Canvas_obj::shift( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","shift",0x4abfc156,"com.haxepunk.graphics.Canvas.shift","com/haxepunk/graphics/Canvas.hx",392,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(392)
		this->drawGraphic(x,y,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,shift,(void))

int Canvas_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_width",0x5e95e131,"com.haxepunk.graphics.Canvas.get_width","com/haxepunk/graphics/Canvas.hx",399,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_width,return )

int Canvas_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_height",0x1adea25c,"com.haxepunk.graphics.Canvas.get_height","com/haxepunk/graphics/Canvas.hx",405,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_height,return )


Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_midBuffers,"_midBuffers");
	HX_MARK_MEMBER_NAME(_redrawBuffers,"_redrawBuffers");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_refWidth,"_refWidth");
	HX_MARK_MEMBER_NAME(_refHeight,"_refHeight");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_midBuffers,"_midBuffers");
	HX_VISIT_MEMBER_NAME(_redrawBuffers,"_redrawBuffers");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_refWidth,"_refWidth");
	HX_VISIT_MEMBER_NAME(_refHeight,"_refHeight");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Canvas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"_ref") ) { return _ref; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { return _maxWidth; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { return _refWidth; }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"_refHeight") ) { return _refHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillTexture") ) { return fillTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphic") ) { return drawGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_midBuffers") ) { return _midBuffers; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_redrawBuffers") ) { return _redrawBuffers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Canvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { _maxWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { _refWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::openfl::_v2::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refHeight") ) { _refHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_midBuffers") ) { _midBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_redrawBuffers") ) { _redrawBuffers=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_midBuffers"));
	outFields->push(HX_CSTRING("_redrawBuffers"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_maxWidth"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_ref"));
	outFields->push(HX_CSTRING("_refWidth"));
	outFields->push(HX_CSTRING("_refHeight"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_graphics"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(Canvas_obj,blend),HX_CSTRING("blend")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scale),HX_CSTRING("scale")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scaleX),HX_CSTRING("scaleX")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scaleY),HX_CSTRING("scaleY")},
	{hx::fsInt,(int)offsetof(Canvas_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Canvas_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Canvas_obj,_buffers),HX_CSTRING("_buffers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Canvas_obj,_midBuffers),HX_CSTRING("_midBuffers")},
	{hx::fsBool,(int)offsetof(Canvas_obj,_redrawBuffers),HX_CSTRING("_redrawBuffers")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_maxWidth),HX_CSTRING("_maxWidth")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_maxHeight),HX_CSTRING("_maxHeight")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_color),HX_CSTRING("_color")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(Canvas_obj,_tint),HX_CSTRING("_tint")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(Canvas_obj,_colorTransform),HX_CSTRING("_colorTransform")},
	{hx::fsObject /*::openfl::_v2::geom::Matrix*/ ,(int)offsetof(Canvas_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_red),HX_CSTRING("_red")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_green),HX_CSTRING("_green")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_blue),HX_CSTRING("_blue")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Canvas_obj,_ref),HX_CSTRING("_ref")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_refWidth),HX_CSTRING("_refWidth")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_refHeight),HX_CSTRING("_refHeight")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Canvas_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsObject /*::openfl::_v2::display::Graphics*/ ,(int)offsetof(Canvas_obj,_graphics),HX_CSTRING("_graphics")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blend"),
	HX_CSTRING("angle"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("render"),
	HX_CSTRING("draw"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("fillTexture"),
	HX_CSTRING("drawGraphic"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("shift"),
	HX_CSTRING("width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_midBuffers"),
	HX_CSTRING("_redrawBuffers"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_maxWidth"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_color"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_red"),
	HX_CSTRING("_green"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_ref"),
	HX_CSTRING("_refWidth"),
	HX_CSTRING("_refHeight"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_graphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#endif

Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Canvas"), hx::TCanCast< Canvas_obj> ,sStaticFields,sMemberFields,
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

void Canvas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
