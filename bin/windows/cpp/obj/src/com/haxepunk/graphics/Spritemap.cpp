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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
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
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Spritemap_obj::__construct(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc)
{
HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","new",0x97b99fff,"com.haxepunk.graphics.Spritemap.new","com/haxepunk/graphics/Spritemap.hx",42,0x3de45df2)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(__o_frameWidth,"frameWidth")
HX_STACK_ARG(__o_frameHeight,"frameHeight")
HX_STACK_ARG(cbFunc,"cbFunc")
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
{
	HX_STACK_LINE(43)
	this->complete = true;
	HX_STACK_LINE(44)
	this->rate = (int)1;
	HX_STACK_LINE(45)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	this->_anims = _g;
	HX_STACK_LINE(46)
	int _g1 = this->_frame = (int)0;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	this->_timer = _g1;
	HX_STACK_LINE(48)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(48)
	this->_rect = _g2;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::com::haxepunk::ds::Either _g3 = source;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(49)
		switch( (int)(_g3->__Index())){
			case (int)0: {
				HX_STACK_LINE(49)
				::openfl::_v2::display::BitmapData bd = (::com::haxepunk::ds::Either(_g3))->__Param(0);		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(52)
					::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
					struct _Function_4_1{
						inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &bd){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Spritemap.hx",52,0x3de45df2)
							{
								HX_STACK_LINE(52)
								::com::haxepunk::graphics::atlas::AtlasData _g31;		HX_STACK_VAR(_g31,"_g31");
								struct _Function_5_1{
									inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &bd){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Spritemap.hx",52,0x3de45df2)
										{
											HX_STACK_LINE(52)
											::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(52)
											return data;
										}
										return null();
									}
								};
								HX_STACK_LINE(52)
								_g31 = _Function_5_1::Block(bd);
								HX_STACK_LINE(52)
								::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g31);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(52)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(52)
								return e;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &bd){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Spritemap.hx",52,0x3de45df2)
							{
								HX_STACK_LINE(52)
								::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(bd);		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(52)
								return e;
							}
							return null();
						}
					};
					HX_STACK_LINE(52)
					_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_4_1::Block(bd)) : ::com::haxepunk::ds::Either(_Function_4_2::Block(bd)) );
					HX_STACK_LINE(52)
					super::__construct(_g5,this->_rect);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(49)
				::com::haxepunk::graphics::atlas::TileAtlas atlas = (::com::haxepunk::ds::Either(_g3))->__Param(0);		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(54)
					this->_atlas = atlas;
					HX_STACK_LINE(55)
					this->_atlas->prepare(frameWidth,frameHeight,null(),null());
					HX_STACK_LINE(56)
					::com::haxepunk::ds::Either _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						::com::haxepunk::graphics::atlas::AtlasRegion region = atlas->getRegion(this->_frame);		HX_STACK_VAR(region,"region");
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(region);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(56)
							_g6 = e;
						}
					}
					HX_STACK_LINE(56)
					super::__construct(_g6,this->_rect);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(59)
	if ((this->blit)){
		HX_STACK_LINE(61)
		int _g7 = this->_source->get_width();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(61)
		this->_width = _g7;
		HX_STACK_LINE(62)
		int _g8 = this->_source->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(62)
		this->_height = _g8;
	}
	else{
		HX_STACK_LINE(66)
		int _g9 = this->_atlas->get_width();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(66)
		int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(66)
		this->_width = _g10;
		HX_STACK_LINE(67)
		int _g11 = this->_atlas->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(67)
		int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(67)
		this->_height = _g12;
	}
	HX_STACK_LINE(69)
	if (((frameWidth == (int)0))){
		HX_STACK_LINE(69)
		this->_rect->width = this->_width;
	}
	HX_STACK_LINE(70)
	if (((frameHeight == (int)0))){
		HX_STACK_LINE(70)
		this->_rect->height = this->_height;
	}
	HX_STACK_LINE(72)
	if (((bool((hx::Mod(this->_width,this->_rect->width) != (int)0)) || bool((hx::Mod(this->_height,this->_rect->height) != (int)0))))){
		HX_STACK_LINE(73)
		HX_STACK_DO_THROW(HX_CSTRING("Source image width and height should be multiples of the frame width and height."));
	}
	HX_STACK_LINE(75)
	int _g13 = ::Math_obj::ceil((Float(this->_width) / Float(this->_rect->width)));		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(75)
	this->_columns = _g13;
	HX_STACK_LINE(76)
	int _g14 = ::Math_obj::ceil((Float(this->_height) / Float(this->_rect->height)));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(76)
	this->_rows = _g14;
	HX_STACK_LINE(77)
	this->_frameCount = (this->_columns * this->_rows);
	HX_STACK_LINE(78)
	this->callbackFunc = cbFunc;
	HX_STACK_LINE(80)
	this->updateBuffer(null());
	HX_STACK_LINE(81)
	this->active = true;
}
;
	return null();
}

//Spritemap_obj::~Spritemap_obj() { }

Dynamic Spritemap_obj::__CreateEmpty() { return  new Spritemap_obj; }
hx::ObjectPtr< Spritemap_obj > Spritemap_obj::__new(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc)
{  hx::ObjectPtr< Spritemap_obj > result = new Spritemap_obj();
	result->__construct(source,__o_frameWidth,__o_frameHeight,cbFunc);
	return result;}

Dynamic Spritemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spritemap_obj > result = new Spritemap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Spritemap_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","updateBuffer",0x4981286a,"com.haxepunk.graphics.Spritemap.updateBuffer","com/haxepunk/graphics/Spritemap.hx",90,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(90)
		if ((this->blit)){
			HX_STACK_LINE(93)
			if (((bool((this->_width > (int)0)) && bool((this->_height > (int)0))))){
				HX_STACK_LINE(95)
				this->_rect->x = (this->_rect->width * this->_frame);
				HX_STACK_LINE(96)
				int _g = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_width)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(96)
				Float _g1 = (_g * this->_rect->height);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(96)
				this->_rect->y = _g1;
				HX_STACK_LINE(97)
				this->_rect->x = hx::Mod(this->_rect->x,this->_width);
				HX_STACK_LINE(98)
				if ((this->_flipped)){
					HX_STACK_LINE(98)
					this->_rect->x = ((this->_width - this->_rect->width) - this->_rect->x);
				}
			}
			HX_STACK_LINE(102)
			this->super::updateBuffer(clearBefore);
		}
		else{
			HX_STACK_LINE(106)
			::com::haxepunk::graphics::atlas::AtlasRegion _g2 = this->_atlas->getRegion(this->_frame);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(106)
			this->_region = _g2;
		}
	}
return null();
}


Void Spritemap_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","update",0x190403ca,"com.haxepunk.graphics.Spritemap.update","com/haxepunk/graphics/Spritemap.hx",114,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		if (((bool((this->_anim != null())) && bool(!(this->complete))))){
			HX_STACK_LINE(116)
			hx::AddEq(this->_timer,(((  ((::com::haxepunk::HXP_obj::fixed)) ? Float((Float(this->_anim->frameRate) / Float(::com::haxepunk::HXP_obj::assignedFrameRate))) : Float((this->_anim->frameRate * ::com::haxepunk::HXP_obj::elapsed)) )) * this->rate));
			HX_STACK_LINE(117)
			if (((this->_timer >= (int)1))){
				HX_STACK_LINE(119)
				while((true)){
					HX_STACK_LINE(119)
					if ((!(((this->_timer >= (int)1))))){
						HX_STACK_LINE(119)
						break;
					}
					HX_STACK_LINE(121)
					(this->_timer)--;
					HX_STACK_LINE(122)
					if ((this->reverse)){
						HX_STACK_LINE(122)
						hx::AddEq(this->_index,(int)-1);
					}
					else{
						HX_STACK_LINE(122)
						hx::AddEq(this->_index,(int)1);
					}
					HX_STACK_LINE(124)
					if (((bool((bool(this->reverse) && bool((this->_index == (int)-1)))) || bool((bool(!(this->reverse)) && bool((this->_index == this->_anim->frameCount))))))){
						HX_STACK_LINE(126)
						if ((this->_anim->loop)){
							HX_STACK_LINE(128)
							if ((this->reverse)){
								HX_STACK_LINE(128)
								this->_index = (this->_anim->frameCount - (int)1);
							}
							else{
								HX_STACK_LINE(128)
								this->_index = (int)0;
							}
							HX_STACK_LINE(129)
							if (((this->callbackFunc_dyn() != null()))){
								HX_STACK_LINE(129)
								this->callbackFunc();
							}
						}
						else{
							HX_STACK_LINE(133)
							if ((this->reverse)){
								HX_STACK_LINE(133)
								this->_index = (int)0;
							}
							else{
								HX_STACK_LINE(133)
								this->_index = (this->_anim->frameCount - (int)1);
							}
							HX_STACK_LINE(134)
							this->complete = true;
							HX_STACK_LINE(135)
							if (((this->callbackFunc_dyn() != null()))){
								HX_STACK_LINE(135)
								this->callbackFunc();
							}
							HX_STACK_LINE(136)
							break;
						}
					}
				}
				HX_STACK_LINE(140)
				if (((this->_anim != null()))){
					HX_STACK_LINE(140)
					int _g = ::Std_obj::_int(this->_anim->frames->__get(this->_index));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(140)
					this->_frame = _g;
				}
				HX_STACK_LINE(141)
				this->updateBuffer(null());
			}
		}
	}
return null();
}


::com::haxepunk::graphics::Animation Spritemap_obj::add( ::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop){
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","add",0x97afc1c0,"com.haxepunk.graphics.Spritemap.add","com/haxepunk/graphics/Spritemap.hx",155,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(156)
		::com::haxepunk::graphics::Animation _g = this->_anims->get(name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		if (((_g != null()))){
			HX_STACK_LINE(157)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot have multiple animations with the same name"));
		}
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(159)
			int _g2 = frames->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(159)
			while((true)){
				HX_STACK_LINE(159)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(159)
					break;
				}
				HX_STACK_LINE(159)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(161)
				hx::ModEq(frames[i],this->_frameCount);
				HX_STACK_LINE(162)
				if (((frames->__get(i) < (int)0))){
					HX_STACK_LINE(162)
					hx::AddEq(frames[i],this->_frameCount);
				}
			}
		}
		HX_STACK_LINE(164)
		::com::haxepunk::graphics::Animation anim = ::com::haxepunk::graphics::Animation_obj::__new(name,frames,frameRate,loop,null());		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(165)
		this->_anims->set(name,anim);
		HX_STACK_LINE(166)
		anim->set_parent(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(167)
		return anim;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Spritemap_obj,add,return )

::com::haxepunk::graphics::Animation Spritemap_obj::play( ::String __o_name,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
::String name = __o_name.Default(HX_CSTRING(""));
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","play",0x2c0a0975,"com.haxepunk.graphics.Spritemap.play","com/haxepunk/graphics/Spritemap.hx",178,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(179)
		if (((bool((bool(!(reset)) && bool((this->_anim != null())))) && bool((this->_anim->name == name))))){
			HX_STACK_LINE(181)
			return this->_anim;
		}
		HX_STACK_LINE(184)
		if ((!(this->_anims->exists(name)))){
			HX_STACK_LINE(186)
			this->stop(reset);
			HX_STACK_LINE(187)
			return null();
		}
		HX_STACK_LINE(190)
		::com::haxepunk::graphics::Animation _g = this->_anims->get(name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		this->_anim = _g;
		HX_STACK_LINE(191)
		this->reverse = reverse;
		HX_STACK_LINE(192)
		this->restart();
		HX_STACK_LINE(194)
		return this->_anim;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Spritemap_obj,play,return )

::com::haxepunk::graphics::Animation Spritemap_obj::playFrames( Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","playFrames",0xf32032fb,"com.haxepunk.graphics.Spritemap.playFrames","com/haxepunk/graphics/Spritemap.hx",207,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(loop,"loop")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(208)
		if (((bool((frames == null())) || bool((frames->length == (int)0))))){
			HX_STACK_LINE(210)
			this->stop(reset);
			HX_STACK_LINE(211)
			return null();
		}
		HX_STACK_LINE(214)
		if (((bool((bool((reset == false)) && bool((this->_anim != null())))) && bool((this->_anim->frames == frames))))){
			HX_STACK_LINE(215)
			return this->_anim;
		}
		HX_STACK_LINE(217)
		::com::haxepunk::graphics::Animation _g = ::com::haxepunk::graphics::Animation_obj::__new(null(),frames,frameRate,loop,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		return this->playAnimation(_g,reset,reverse);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Spritemap_obj,playFrames,return )

::com::haxepunk::graphics::Animation Spritemap_obj::playAnimation( ::com::haxepunk::graphics::Animation anim,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","playAnimation",0x6ffd6ecf,"com.haxepunk.graphics.Spritemap.playAnimation","com/haxepunk/graphics/Spritemap.hx",228,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anim,"anim")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(229)
		if (((anim == null()))){
			HX_STACK_LINE(230)
			HX_STACK_DO_THROW(HX_CSTRING("No animation supplied"));
		}
		HX_STACK_LINE(232)
		if (((bool((reset == false)) && bool((this->_anim == anim))))){
			HX_STACK_LINE(233)
			return anim;
		}
		HX_STACK_LINE(235)
		this->_anim = anim;
		HX_STACK_LINE(236)
		this->reverse = reverse;
		HX_STACK_LINE(237)
		this->restart();
		HX_STACK_LINE(239)
		return anim;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Spritemap_obj,playAnimation,return )

Void Spritemap_obj::restart( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","restart",0x975552ee,"com.haxepunk.graphics.Spritemap.restart","com/haxepunk/graphics/Spritemap.hx",246,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		_g = (  ((this->reverse)) ? int(this->_index = (this->_anim->frames->length - (int)1)) : int(this->_index = (int)0) );
		HX_STACK_LINE(247)
		this->_timer = _g;
		HX_STACK_LINE(248)
		this->_frame = this->_anim->frames->__get(this->_index);
		HX_STACK_LINE(249)
		this->complete = false;
		HX_STACK_LINE(250)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,restart,(void))

Void Spritemap_obj::stop( hx::Null< bool >  __o_reset){
bool reset = __o_reset.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","stop",0x2e0bcb83,"com.haxepunk.graphics.Spritemap.stop","com/haxepunk/graphics/Spritemap.hx",258,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(reset,"reset")
{
		HX_STACK_LINE(259)
		this->_anim = null();
		HX_STACK_LINE(261)
		if ((reset)){
			HX_STACK_LINE(262)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			_g = (  ((this->reverse)) ? int(this->_index = (this->_anim->frames->length - (int)1)) : int(this->_index = (int)0) );
			HX_STACK_LINE(262)
			this->_frame = _g;
		}
		HX_STACK_LINE(264)
		this->complete = true;
		HX_STACK_LINE(265)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,stop,(void))

int Spritemap_obj::getFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","getFrame",0x5344b7b8,"com.haxepunk.graphics.Spritemap.getFrame","com/haxepunk/graphics/Spritemap.hx",276,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(276)
		return ((hx::Mod(row,this->_rows) * this->_columns) + hx::Mod(column,this->_columns));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,getFrame,return )

Void Spritemap_obj::setFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","setFrame",0x01a2112c,"com.haxepunk.graphics.Spritemap.setFrame","com/haxepunk/graphics/Spritemap.hx",286,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(287)
		this->_anim = null();
		HX_STACK_LINE(288)
		int frame = ((hx::Mod(row,this->_rows) * this->_columns) + hx::Mod(column,this->_columns));		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(289)
		if (((this->_frame == frame))){
			HX_STACK_LINE(289)
			return null();
		}
		HX_STACK_LINE(290)
		this->_frame = frame;
		HX_STACK_LINE(291)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setFrame,(void))

Void Spritemap_obj::randFrame( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","randFrame",0x6f37d527,"com.haxepunk.graphics.Spritemap.randFrame","com/haxepunk/graphics/Spritemap.hx",298,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			int _g = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			::com::haxepunk::HXP_obj::_seed = _g;
			HX_STACK_LINE(299)
			_g1 = ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647)) * this->_frameCount));
		}
		HX_STACK_LINE(299)
		this->set_frame(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,randFrame,(void))

Void Spritemap_obj::setAnimFrame( ::String name,int index){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","setAnimFrame",0x5b8348db,"com.haxepunk.graphics.Spritemap.setAnimFrame","com/haxepunk/graphics/Spritemap.hx",308,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(309)
		Array< int > frames = this->_anims->get(name)->__Field(HX_CSTRING("frames"),true);		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(310)
		index = hx::Mod(index,frames->length);
		HX_STACK_LINE(311)
		if (((index < (int)0))){
			HX_STACK_LINE(311)
			hx::AddEq(index,frames->length);
		}
		HX_STACK_LINE(312)
		this->set_frame(frames->__get(index));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setAnimFrame,(void))

int Spritemap_obj::get_frame( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_frame",0xaa2ca563,"com.haxepunk.graphics.Spritemap.get_frame","com/haxepunk/graphics/Spritemap.hx",320,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	return this->_frame;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frame,return )

int Spritemap_obj::set_frame( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","set_frame",0x8d7d916f,"com.haxepunk.graphics.Spritemap.set_frame","com/haxepunk/graphics/Spritemap.hx",322,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(323)
	this->_anim = null();
	HX_STACK_LINE(324)
	hx::ModEq(value,this->_frameCount);
	HX_STACK_LINE(325)
	if (((value < (int)0))){
		HX_STACK_LINE(325)
		value = (this->_frameCount + value);
	}
	HX_STACK_LINE(326)
	if (((this->_frame == value))){
		HX_STACK_LINE(326)
		return this->_frame;
	}
	HX_STACK_LINE(327)
	this->_frame = value;
	HX_STACK_LINE(328)
	this->updateBuffer(null());
	HX_STACK_LINE(329)
	return this->_frame;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_frame,return )

int Spritemap_obj::get_index( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_index",0x61bdc848,"com.haxepunk.graphics.Spritemap.get_index","com/haxepunk/graphics/Spritemap.hx",336,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	if (((this->_anim != null()))){
		HX_STACK_LINE(336)
		return this->_index;
	}
	else{
		HX_STACK_LINE(336)
		return (int)0;
	}
	HX_STACK_LINE(336)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_index,return )

int Spritemap_obj::set_index( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","set_index",0x450eb454,"com.haxepunk.graphics.Spritemap.set_index","com/haxepunk/graphics/Spritemap.hx",338,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(339)
	if (((this->_anim == null()))){
		HX_STACK_LINE(339)
		return (int)0;
	}
	HX_STACK_LINE(340)
	hx::ModEq(value,this->_anim->frameCount);
	HX_STACK_LINE(341)
	if (((this->_index == value))){
		HX_STACK_LINE(341)
		return this->_index;
	}
	HX_STACK_LINE(342)
	this->_index = value;
	HX_STACK_LINE(343)
	this->_frame = this->_anim->frames->__get(this->_index);
	HX_STACK_LINE(344)
	this->updateBuffer(null());
	HX_STACK_LINE(345)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_index,return )

int Spritemap_obj::get_frameCount( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_frameCount",0x4bc2a86c,"com.haxepunk.graphics.Spritemap.get_frameCount","com/haxepunk/graphics/Spritemap.hx",357,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(357)
	return this->_frameCount;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frameCount,return )

int Spritemap_obj::get_columns( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_columns",0xb5911393,"com.haxepunk.graphics.Spritemap.get_columns","com/haxepunk/graphics/Spritemap.hx",363,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	return this->_columns;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_columns,return )

int Spritemap_obj::get_rows( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_rows",0xb853e0a3,"com.haxepunk.graphics.Spritemap.get_rows","com/haxepunk/graphics/Spritemap.hx",369,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(369)
	return this->_rows;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_rows,return )

::String Spritemap_obj::get_currentAnim( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_currentAnim",0xccd358a0,"com.haxepunk.graphics.Spritemap.get_currentAnim","com/haxepunk/graphics/Spritemap.hx",375,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(375)
	if (((this->_anim != null()))){
		HX_STACK_LINE(375)
		return this->_anim->name;
	}
	else{
		HX_STACK_LINE(375)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(375)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_currentAnim,return )


Spritemap_obj::Spritemap_obj()
{
}

void Spritemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spritemap);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(currentAnim,"currentAnim");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_anims,"_anims");
	HX_MARK_MEMBER_NAME(_anim,"_anim");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	::com::haxepunk::graphics::Image_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spritemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(currentAnim,"currentAnim");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
	HX_VISIT_MEMBER_NAME(_rows,"_rows");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_anims,"_anims");
	HX_VISIT_MEMBER_NAME(_anim,"_anim");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	::com::haxepunk::graphics::Image_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Spritemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp ? get_rows() : rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return get_frame(); }
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_anim") ) { return _anim; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_anims") ) { return _anims; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_frame") ) { return _frame; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"columns") ) { return inCallProp ? get_columns() : columns; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"randFrame") ) { return randFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playFrames") ) { return playFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return inCallProp ? get_frameCount() : frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"currentAnim") ) { return inCallProp ? get_currentAnim() : currentAnim; }
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { return callbackFunc; }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimFrame") ) { return setAnimFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_frameCount") ) { return get_frameCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentAnim") ) { return get_currentAnim_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spritemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return set_frame(inValue); }
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anim") ) { _anim=inValue.Cast< ::com::haxepunk::graphics::Animation >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anims") ) { _anims=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::com::haxepunk::graphics::atlas::TileAtlas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentAnim") ) { currentAnim=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { callbackFunc=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spritemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("complete"));
	outFields->push(HX_CSTRING("rate"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("reverse"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("currentAnim"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("_rows"));
	outFields->push(HX_CSTRING("_frameCount"));
	outFields->push(HX_CSTRING("_anims"));
	outFields->push(HX_CSTRING("_anim"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_frame"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_atlas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Spritemap_obj,complete),HX_CSTRING("complete")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spritemap_obj,callbackFunc),HX_CSTRING("callbackFunc")},
	{hx::fsFloat,(int)offsetof(Spritemap_obj,rate),HX_CSTRING("rate")},
	{hx::fsBool,(int)offsetof(Spritemap_obj,reverse),HX_CSTRING("reverse")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,frameCount),HX_CSTRING("frameCount")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,columns),HX_CSTRING("columns")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,rows),HX_CSTRING("rows")},
	{hx::fsString,(int)offsetof(Spritemap_obj,currentAnim),HX_CSTRING("currentAnim")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Spritemap_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_columns),HX_CSTRING("_columns")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_rows),HX_CSTRING("_rows")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_frameCount),HX_CSTRING("_frameCount")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Spritemap_obj,_anims),HX_CSTRING("_anims")},
	{hx::fsObject /*::com::haxepunk::graphics::Animation*/ ,(int)offsetof(Spritemap_obj,_anim),HX_CSTRING("_anim")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_index),HX_CSTRING("_index")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_frame),HX_CSTRING("_frame")},
	{hx::fsFloat,(int)offsetof(Spritemap_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::TileAtlas*/ ,(int)offsetof(Spritemap_obj,_atlas),HX_CSTRING("_atlas")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("complete"),
	HX_CSTRING("callbackFunc"),
	HX_CSTRING("rate"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("update"),
	HX_CSTRING("add"),
	HX_CSTRING("play"),
	HX_CSTRING("playFrames"),
	HX_CSTRING("playAnimation"),
	HX_CSTRING("restart"),
	HX_CSTRING("stop"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("randFrame"),
	HX_CSTRING("setAnimFrame"),
	HX_CSTRING("get_frame"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("get_index"),
	HX_CSTRING("set_index"),
	HX_CSTRING("reverse"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("get_frameCount"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("get_rows"),
	HX_CSTRING("currentAnim"),
	HX_CSTRING("get_currentAnim"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_columns"),
	HX_CSTRING("_rows"),
	HX_CSTRING("_frameCount"),
	HX_CSTRING("_anims"),
	HX_CSTRING("_anim"),
	HX_CSTRING("_index"),
	HX_CSTRING("_frame"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_atlas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

#endif

Class Spritemap_obj::__mClass;

void Spritemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Spritemap"), hx::TCanCast< Spritemap_obj> ,sStaticFields,sMemberFields,
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

void Spritemap_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
