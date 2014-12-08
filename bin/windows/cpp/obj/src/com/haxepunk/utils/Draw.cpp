#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
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
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
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
namespace utils{

Void Draw_obj::__construct()
{
	return null();
}

//Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new()
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

::openfl::_v2::display::BlendMode Draw_obj::blend;

Void Draw_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","init",0x3d2b4324,"com.haxepunk.utils.Draw.init","com/haxepunk/utils/Draw.hx",32,0x1df70463)
		HX_STACK_LINE(33)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(35)
			::openfl::_v2::display::Sprite sprite = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(36)
			::com::haxepunk::HXP_obj::stage->addChild(sprite);
			HX_STACK_LINE(37)
			::openfl::_v2::display::Graphics _g = sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			::com::haxepunk::utils::Draw_obj::_graphics = _g;
		}
		else{
			HX_STACK_LINE(41)
			::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::HXP_obj::sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(41)
			::com::haxepunk::utils::Draw_obj::_graphics = _g1;
		}
		HX_STACK_LINE(43)
		::com::haxepunk::utils::Draw_obj::_rect = ::com::haxepunk::HXP_obj::rect;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,init,(void))

Void Draw_obj::setTarget( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point camera,::openfl::_v2::display::BlendMode blend){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","setTarget",0xd32a97ff,"com.haxepunk.utils.Draw.setTarget","com/haxepunk/utils/Draw.hx",53,0x1df70463)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_ARG(blend,"blend")
		HX_STACK_LINE(54)
		::com::haxepunk::utils::Draw_obj::_target = target;
		HX_STACK_LINE(55)
		if (((camera != null()))){
			HX_STACK_LINE(55)
			::com::haxepunk::utils::Draw_obj::_camera = camera;
		}
		else{
			HX_STACK_LINE(55)
			::com::haxepunk::utils::Draw_obj::_camera = ::com::haxepunk::HXP_obj::zero;
		}
		HX_STACK_LINE(56)
		::com::haxepunk::utils::Draw_obj::blend = blend;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,setTarget,(void))

Void Draw_obj::resetTarget( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","resetTarget",0x091358ec,"com.haxepunk.utils.Draw.resetTarget","com/haxepunk/utils/Draw.hx",63,0x1df70463)
		HX_STACK_LINE(64)
		::com::haxepunk::utils::Draw_obj::_target = ::com::haxepunk::HXP_obj::buffer;
		HX_STACK_LINE(65)
		::com::haxepunk::utils::Draw_obj::_camera = ::com::haxepunk::HXP_obj::camera;
		HX_STACK_LINE(66)
		::com::haxepunk::utils::Draw_obj::blend = null();
		HX_STACK_LINE(67)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,resetTarget,(void))

Void Draw_obj::drawToScreen( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","drawToScreen",0x3223ab7f,"com.haxepunk.utils.Draw.drawToScreen","com/haxepunk/utils/Draw.hx",72,0x1df70463)
		HX_STACK_LINE(72)
		if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
			HX_STACK_LINE(74)
			::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(78)
			::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,drawToScreen,(void))

Void Draw_obj::line( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","line",0x3f232008,"com.haxepunk.utils.Draw.line","com/haxepunk/utils/Draw.hx",92,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(92)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(94)
			color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
			HX_STACK_LINE(97)
			::openfl::_v2::display::BitmapData screen = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(screen,"screen");
			HX_STACK_LINE(98)
			Float X = ::Math_obj::abs((x2 - x1));		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(99)
			Float Y = ::Math_obj::abs((y2 - y1));		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(97)
			int xx;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(97)
			int yy;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(104)
			int _g = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			hx::SubEq(x1,_g);
			HX_STACK_LINE(105)
			int _g1 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			hx::SubEq(y1,_g1);
			HX_STACK_LINE(106)
			int _g2 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(106)
			hx::SubEq(x2,_g2);
			HX_STACK_LINE(107)
			int _g3 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(107)
			hx::SubEq(y2,_g3);
			HX_STACK_LINE(110)
			if (((X == (int)0))){
				HX_STACK_LINE(112)
				if (((Y == (int)0))){
					HX_STACK_LINE(114)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(115)
					return null();
				}
				HX_STACK_LINE(118)
				if (((y2 > y1))){
					HX_STACK_LINE(118)
					yy = (int)1;
				}
				else{
					HX_STACK_LINE(118)
					yy = (int)-1;
				}
				HX_STACK_LINE(119)
				while((true)){
					HX_STACK_LINE(119)
					if ((!(((y1 != y2))))){
						HX_STACK_LINE(119)
						break;
					}
					HX_STACK_LINE(121)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(122)
					hx::AddEq(y1,yy);
				}
				HX_STACK_LINE(124)
				screen->setPixel32(x2,y2,color);
				HX_STACK_LINE(125)
				return null();
			}
			HX_STACK_LINE(128)
			if (((Y == (int)0))){
				HX_STACK_LINE(131)
				if (((x2 > x1))){
					HX_STACK_LINE(131)
					xx = (int)1;
				}
				else{
					HX_STACK_LINE(131)
					xx = (int)-1;
				}
				HX_STACK_LINE(132)
				while((true)){
					HX_STACK_LINE(132)
					if ((!(((x1 != x2))))){
						HX_STACK_LINE(132)
						break;
					}
					HX_STACK_LINE(134)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(135)
					hx::AddEq(x1,xx);
				}
				HX_STACK_LINE(137)
				screen->setPixel32(x2,y2,color);
				HX_STACK_LINE(138)
				return null();
			}
			HX_STACK_LINE(141)
			if (((x2 > x1))){
				HX_STACK_LINE(141)
				xx = (int)1;
			}
			else{
				HX_STACK_LINE(141)
				xx = (int)-1;
			}
			HX_STACK_LINE(142)
			if (((y2 > y1))){
				HX_STACK_LINE(142)
				yy = (int)1;
			}
			else{
				HX_STACK_LINE(142)
				yy = (int)-1;
			}
			HX_STACK_LINE(143)
			Float c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(143)
			Float slope;		HX_STACK_VAR(slope,"slope");
			HX_STACK_LINE(146)
			if (((X > Y))){
				HX_STACK_LINE(148)
				slope = (Float(Y) / Float(X));
				HX_STACK_LINE(149)
				c = .5;
				HX_STACK_LINE(150)
				while((true)){
					HX_STACK_LINE(150)
					if ((!(((x1 != x2))))){
						HX_STACK_LINE(150)
						break;
					}
					HX_STACK_LINE(152)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(153)
					hx::AddEq(x1,xx);
					HX_STACK_LINE(154)
					hx::AddEq(c,slope);
					HX_STACK_LINE(155)
					if (((c >= (int)1))){
						HX_STACK_LINE(157)
						hx::AddEq(y1,yy);
						HX_STACK_LINE(158)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(161)
				screen->setPixel32(x2,y2,color);
			}
			else{
				HX_STACK_LINE(165)
				slope = (Float(X) / Float(Y));
				HX_STACK_LINE(166)
				c = .5;
				HX_STACK_LINE(167)
				while((true)){
					HX_STACK_LINE(167)
					if ((!(((y1 != y2))))){
						HX_STACK_LINE(167)
						break;
					}
					HX_STACK_LINE(169)
					screen->setPixel32(x1,y1,color);
					HX_STACK_LINE(170)
					hx::AddEq(y1,yy);
					HX_STACK_LINE(171)
					hx::AddEq(c,slope);
					HX_STACK_LINE(172)
					if (((c >= (int)1))){
						HX_STACK_LINE(174)
						hx::AddEq(x1,xx);
						HX_STACK_LINE(175)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(178)
				screen->setPixel32(x2,y2,color);
			}
		}
		else{
			HX_STACK_LINE(183)
			::com::haxepunk::utils::Draw_obj::linePlus(x1,y1,x2,y2,color,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Draw_obj,line,(void))

Void Draw_obj::linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_thick){
int color = __o_color.Default(-16777216);
Float alpha = __o_alpha.Default(1);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","linePlus",0xaf9b2f82,"com.haxepunk.utils.Draw.linePlus","com/haxepunk/utils/Draw.hx",199,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(199)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(201)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(202)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,false,::openfl::_v2::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(203)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(204)
			::com::haxepunk::utils::Draw_obj::_graphics->lineTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(205)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(205)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(205)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(209)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,false,::openfl::_v2::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(210)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(211)
			::com::haxepunk::utils::Draw_obj::_graphics->lineTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(212)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,linePlus,(void))

Void Draw_obj::rect( int x,int y,int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rect",0x43175538,"com.haxepunk.utils.Draw.rect","com/haxepunk/utils/Draw.hx",227,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(227)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(229)
			if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
				HX_STACK_LINE(231)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(232)
				::com::haxepunk::utils::Draw_obj::_rect->x = (x - ::com::haxepunk::utils::Draw_obj::_camera->x);
				HX_STACK_LINE(233)
				::com::haxepunk::utils::Draw_obj::_rect->y = (y - ::com::haxepunk::utils::Draw_obj::_camera->y);
				HX_STACK_LINE(234)
				::com::haxepunk::utils::Draw_obj::_rect->width = width;
				HX_STACK_LINE(235)
				::com::haxepunk::utils::Draw_obj::_rect->height = height;
				HX_STACK_LINE(236)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(237)
				return null();
			}
			HX_STACK_LINE(239)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(240)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(241)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
			HX_STACK_LINE(242)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(242)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(242)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(246)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(247)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
			HX_STACK_LINE(248)
			::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Draw_obj,rect,(void))

Void Draw_obj::rectPlus( Float x,Float y,Float width,Float height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< Float >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rectPlus",0x9d89bcb2,"com.haxepunk.utils.Draw.rectPlus","com/haxepunk/utils/Draw.hx",264,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(265)
		color = (int((int)16777215) & int(color));
		HX_STACK_LINE(267)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(267)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
		}
		HX_STACK_LINE(269)
		if ((fill)){
			HX_STACK_LINE(271)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
		}
		else{
			HX_STACK_LINE(275)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(278)
		::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
		HX_STACK_LINE(279)
		::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		HX_STACK_LINE(281)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(281)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(281)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(281)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(281)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Draw_obj,rectPlus,(void))

Void Draw_obj::circle( int x,int y,int radius,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circle",0x0f9ea724,"com.haxepunk.utils.Draw.circle","com/haxepunk/utils/Draw.hx",293,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(293)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(295)
			color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
			HX_STACK_LINE(296)
			int _g = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			hx::SubEq(x,_g);
			HX_STACK_LINE(297)
			int _g1 = ::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(297)
			hx::SubEq(y,_g1);
			HX_STACK_LINE(298)
			int f = ((int)1 - radius);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(299)
			int fx = (int)1;		HX_STACK_VAR(fx,"fx");
			HX_STACK_LINE(300)
			int fy = ((int)-2 * radius);		HX_STACK_VAR(fy,"fy");
			HX_STACK_LINE(301)
			int xx = (int)0;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(302)
			int yy = radius;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(303)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y + radius),color);
			HX_STACK_LINE(304)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y - radius),color);
			HX_STACK_LINE(305)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + radius),y,color);
			HX_STACK_LINE(306)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - radius),y,color);
			HX_STACK_LINE(307)
			while((true)){
				HX_STACK_LINE(307)
				if ((!(((xx < yy))))){
					HX_STACK_LINE(307)
					break;
				}
				HX_STACK_LINE(309)
				if (((f >= (int)0))){
					HX_STACK_LINE(311)
					(yy)--;
					HX_STACK_LINE(312)
					hx::AddEq(fy,(int)2);
					HX_STACK_LINE(313)
					hx::AddEq(f,fy);
				}
				HX_STACK_LINE(315)
				(xx)++;
				HX_STACK_LINE(316)
				hx::AddEq(fx,(int)2);
				HX_STACK_LINE(317)
				hx::AddEq(f,fx);
				HX_STACK_LINE(318)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y + yy),color);
				HX_STACK_LINE(319)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y + yy),color);
				HX_STACK_LINE(320)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y - yy),color);
				HX_STACK_LINE(321)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y - yy),color);
				HX_STACK_LINE(322)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y + xx),color);
				HX_STACK_LINE(323)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y + xx),color);
				HX_STACK_LINE(324)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y - xx),color);
				HX_STACK_LINE(325)
				::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y - xx),color);
			}
		}
		else{
			HX_STACK_LINE(330)
			::com::haxepunk::utils::Draw_obj::circlePlus(x,y,radius,color,1.0,false,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,circle,(void))

Void Draw_obj::circlePlus( int x,int y,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circlePlus",0x111e749e,"com.haxepunk.utils.Draw.circlePlus","com/haxepunk/utils/Draw.hx",346,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(346)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(348)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(349)
			if ((fill)){
				HX_STACK_LINE(351)
				::com::haxepunk::utils::Draw_obj::_graphics->beginFill((int(color) & int((int)16777215)),alpha);
				HX_STACK_LINE(352)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(353)
				::com::haxepunk::utils::Draw_obj::_graphics->endFill();
			}
			else{
				HX_STACK_LINE(357)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,(int(color) & int((int)16777215)),alpha,null(),null(),null(),null(),null());
				HX_STACK_LINE(358)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
			}
			HX_STACK_LINE(360)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(360)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(360)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(364)
			if ((fill)){
				HX_STACK_LINE(366)
				::com::haxepunk::utils::Draw_obj::_graphics->beginFill((int(color) & int((int)16777215)),alpha);
				HX_STACK_LINE(367)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(368)
				::com::haxepunk::utils::Draw_obj::_graphics->endFill();
			}
			else{
				HX_STACK_LINE(372)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,(int(color) & int((int)16777215)),alpha,null(),null(),null(),null(),null());
				HX_STACK_LINE(373)
				::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
				HX_STACK_LINE(374)
				::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,circlePlus,(void))

Void Draw_obj::hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  __o_outline,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool outline = __o_outline.Default(true);
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","hitbox",0x10b922ac,"com.haxepunk.utils.Draw.hitbox","com/haxepunk/utils/Draw.hx",388,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(outline,"outline")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(388)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(390)
			if ((outline)){
				HX_STACK_LINE(392)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(393)
				int x = ::Std_obj::_int(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(394)
				int y = ::Std_obj::_int(((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(395)
				::com::haxepunk::utils::Draw_obj::_rect->x = x;
				HX_STACK_LINE(396)
				::com::haxepunk::utils::Draw_obj::_rect->y = y;
				HX_STACK_LINE(397)
				::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
				HX_STACK_LINE(398)
				::com::haxepunk::utils::Draw_obj::_rect->height = (int)1;
				HX_STACK_LINE(399)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(400)
				hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->y,(e->height - (int)1));
				HX_STACK_LINE(401)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(402)
				::com::haxepunk::utils::Draw_obj::_rect->y = y;
				HX_STACK_LINE(403)
				::com::haxepunk::utils::Draw_obj::_rect->width = (int)1;
				HX_STACK_LINE(404)
				::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
				HX_STACK_LINE(405)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(406)
				hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->x,(e->width - (int)1));
				HX_STACK_LINE(407)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(408)
				return null();
			}
			HX_STACK_LINE(410)
			if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
				HX_STACK_LINE(412)
				color = (int((int)-16777216) | int((int((int)16777215) & int(color))));
				HX_STACK_LINE(413)
				::com::haxepunk::utils::Draw_obj::_rect->x = ((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x);
				HX_STACK_LINE(414)
				::com::haxepunk::utils::Draw_obj::_rect->y = ((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y);
				HX_STACK_LINE(415)
				::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
				HX_STACK_LINE(416)
				::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
				HX_STACK_LINE(417)
				::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
				HX_STACK_LINE(418)
				return null();
			}
			HX_STACK_LINE(421)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(422)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(423)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x),((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y),e->width,e->height);
			HX_STACK_LINE(424)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(424)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(424)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(428)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
			HX_STACK_LINE(429)
			::com::haxepunk::utils::Draw_obj::_graphics->drawRect(((((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x),((((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y),e->width,e->height);
			HX_STACK_LINE(430)
			::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,hitbox,(void))

Void Draw_obj::curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  __o_thick,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
Float thick = __o_thick.Default(1);
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","curve",0xd8ef561b,"com.haxepunk.utils.Draw.curve","com/haxepunk/utils/Draw.hx",448,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(thick,"thick")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(448)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
			HX_STACK_LINE(450)
			::com::haxepunk::utils::Draw_obj::_graphics->clear();
			HX_STACK_LINE(451)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(452)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(453)
			::com::haxepunk::utils::Draw_obj::_graphics->curveTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(x3 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y3 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(454)
			if (((::com::haxepunk::utils::Draw_obj::blend == null()))){
				HX_STACK_LINE(454)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(454)
				::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::com::haxepunk::utils::Draw_obj::blend,null(),null());
			}
		}
		else{
			HX_STACK_LINE(458)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(459)
			::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(460)
			::com::haxepunk::utils::Draw_obj::_graphics->curveTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(x3 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y3 - ::com::haxepunk::utils::Draw_obj::_camera->y));
			HX_STACK_LINE(461)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Draw_obj,curve,(void))

Void Draw_obj::graphic( ::com::haxepunk::Graphic g,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_layer){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int layer = __o_layer.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","graphic",0x19849714,"com.haxepunk.utils.Draw.graphic","com/haxepunk/utils/Draw.hx",473,0x1df70463)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(layer,"layer")
{
		HX_STACK_LINE(473)
		if ((g->_visible)){
			HX_STACK_LINE(475)
			if ((g->relative)){
				HX_STACK_LINE(477)
				::com::haxepunk::HXP_obj::point->x = x;
				HX_STACK_LINE(478)
				::com::haxepunk::HXP_obj::point->y = y;
			}
			else{
				HX_STACK_LINE(480)
				Float _g = ::com::haxepunk::HXP_obj::point->y = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(480)
				::com::haxepunk::HXP_obj::point->x = _g;
			}
			HX_STACK_LINE(481)
			::com::haxepunk::HXP_obj::point2->x = ::com::haxepunk::HXP_obj::camera->x;
			HX_STACK_LINE(482)
			::com::haxepunk::HXP_obj::point2->y = ::com::haxepunk::HXP_obj::camera->y;
			HX_STACK_LINE(483)
			if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
				HX_STACK_LINE(485)
				g->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::point,::com::haxepunk::HXP_obj::point2);
			}
			else{
				HX_STACK_LINE(489)
				g->renderAtlas(layer,::com::haxepunk::HXP_obj::point,::com::haxepunk::HXP_obj::point2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,graphic,(void))

Void Draw_obj::entity( ::com::haxepunk::Entity e,Dynamic __o_x,Dynamic __o_y,Dynamic __o_addEntityPosition){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic addEntityPosition = __o_addEntityPosition.Default(false);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","entity",0xbead4837,"com.haxepunk.utils.Draw.entity","com/haxepunk/utils/Draw.hx",503,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(addEntityPosition,"addEntityPosition")
{
		HX_STACK_LINE(503)
		if (((bool(e->visible) && bool((e->_graphic != null()))))){
			HX_STACK_LINE(505)
			if ((addEntityPosition)){
				HX_STACK_LINE(505)
				int _g = ::Std_obj::_int((x + ((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ))));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(505)
				int _g1 = ::Std_obj::_int((y + ((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(505)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,_g,_g1,null());
			}
			else{
				HX_STACK_LINE(506)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,x,y,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,entity,(void))

Void Draw_obj::text( ::String text,Dynamic __o_x,Dynamic __o_y,Dynamic options){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","text",0x4469d4c1,"com.haxepunk.utils.Draw.text","com/haxepunk/utils/Draw.hx",518,0x1df70463)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(options,"options")
{
		HX_STACK_LINE(519)
		::com::haxepunk::graphics::Text textGfx = ::com::haxepunk::graphics::Text_obj::__new(text,x,y,(int)0,(int)0,options);		HX_STACK_VAR(textGfx,"textGfx");
		HX_STACK_LINE(520)
		textGfx->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::zero,::com::haxepunk::utils::Draw_obj::_camera);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,text,(void))

::openfl::_v2::display::BitmapData Draw_obj::_target;

::openfl::_v2::geom::Point Draw_obj::_camera;

::openfl::_v2::display::Graphics Draw_obj::_graphics;

::openfl::_v2::geom::Rectangle Draw_obj::_rect;

::openfl::_v2::geom::Matrix Draw_obj::_matrix;


Draw_obj::Draw_obj()
{
}

Dynamic Draw_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"curve") ) { return curve_dyn(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		if (HX_FIELD_EQ(inName,"hitbox") ) { return hitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linePlus") ) { return linePlus_dyn(); }
		if (HX_FIELD_EQ(inName,"rectPlus") ) { return rectPlus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circlePlus") ) { return circlePlus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetTarget") ) { return resetTarget_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawToScreen") ) { return drawToScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Draw_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::openfl::_v2::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("blend"),
	HX_CSTRING("init"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("resetTarget"),
	HX_CSTRING("drawToScreen"),
	HX_CSTRING("line"),
	HX_CSTRING("linePlus"),
	HX_CSTRING("rect"),
	HX_CSTRING("rectPlus"),
	HX_CSTRING("circle"),
	HX_CSTRING("circlePlus"),
	HX_CSTRING("hitbox"),
	HX_CSTRING("curve"),
	HX_CSTRING("graphic"),
	HX_CSTRING("entity"),
	HX_CSTRING("text"),
	HX_CSTRING("_target"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_matrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_MARK_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_MARK_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_MARK_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_VISIT_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_VISIT_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_VISIT_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#endif

Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Draw"), hx::TCanCast< Draw_obj> ,sStaticFields,sMemberFields,
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

void Draw_obj::__boot()
{
	_matrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
