#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options)
{
HX_STACK_FRAME("com.haxepunk.graphics.Text","new",0xe2ef4009,"com.haxepunk.graphics.Text.new","com/haxepunk/graphics/Text.hx",80,0x6110fd86)
HX_STACK_THIS(this)
HX_STACK_ARG(text,"text")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(options,"options")
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic width = __o_width.Default(0);
Dynamic height = __o_height.Default(0);
{
	HX_STACK_LINE(86)
	this->resizable = true;
	HX_STACK_LINE(117)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",117,0x6110fd86)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		options = _Function_2_1::Block();
	}
	HX_STACK_LINE(118)
	if (((text == null()))){
		HX_STACK_LINE(118)
		text = HX_CSTRING("");
	}
	HX_STACK_LINE(121)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("font"))))){
		HX_STACK_LINE(121)
		options->__FieldRef(HX_CSTRING("font")) = ::com::haxepunk::HXP_obj::defaultFont;
	}
	HX_STACK_LINE(122)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("size"))))){
		HX_STACK_LINE(122)
		options->__FieldRef(HX_CSTRING("size")) = (int)16;
	}
	HX_STACK_LINE(123)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("align"))))){
		HX_STACK_LINE(123)
		options->__FieldRef(HX_CSTRING("align")) = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
	}
	HX_STACK_LINE(124)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("color"))))){
		HX_STACK_LINE(124)
		options->__FieldRef(HX_CSTRING("color")) = (int)16777215;
	}
	HX_STACK_LINE(125)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("resizable"))))){
		HX_STACK_LINE(125)
		options->__FieldRef(HX_CSTRING("resizable")) = true;
	}
	HX_STACK_LINE(126)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("wordWrap"))))){
		HX_STACK_LINE(126)
		options->__FieldRef(HX_CSTRING("wordWrap")) = false;
	}
	HX_STACK_LINE(127)
	if ((!(::Reflect_obj::hasField(options,HX_CSTRING("leading"))))){
		HX_STACK_LINE(127)
		options->__FieldRef(HX_CSTRING("leading")) = (int)0;
	}
	HX_STACK_LINE(129)
	::openfl::_v2::text::Font fontObj = ::openfl::_v2::Assets_obj::getFont(options->__Field(HX_CSTRING("font"),true),null());		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(130)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_CSTRING("size"),true),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	this->_format = _g;
	HX_STACK_LINE(131)
	this->_format->align = options->__Field(HX_CSTRING("align"),true);
	HX_STACK_LINE(132)
	this->_format->leading = options->__Field(HX_CSTRING("leading"),true);
	HX_STACK_LINE(134)
	::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(134)
	this->_field = _g1;
	HX_STACK_LINE(138)
	this->_field->set_wordWrap(options->__Field(HX_CSTRING("wordWrap"),true));
	HX_STACK_LINE(139)
	this->_field->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(140)
	::String _g2 = this->_text = text;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(140)
	this->_field->set_text(_g2);
	HX_STACK_LINE(141)
	this->_field->set_selectable(false);
	HX_STACK_LINE(143)
	this->resizable = options->__Field(HX_CSTRING("resizable"),true);
	HX_STACK_LINE(144)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(144)
	this->_styles = _g3;
	HX_STACK_LINE(146)
	int _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(146)
	if (((width == (int)0))){
		HX_STACK_LINE(146)
		Float _g4 = this->_field->get_textWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(146)
		Float _g5 = (_g4 + (int)4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(146)
		_g6 = ::Std_obj::_int(_g5);
	}
	else{
		HX_STACK_LINE(146)
		_g6 = width;
	}
	HX_STACK_LINE(146)
	this->_width = _g6;
	HX_STACK_LINE(147)
	int _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(147)
	if (((height == (int)0))){
		HX_STACK_LINE(147)
		Float _g7 = this->_field->get_textHeight();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(147)
		Float _g8 = (_g7 + (int)4);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(147)
		_g9 = ::Std_obj::_int(_g8);
	}
	else{
		HX_STACK_LINE(147)
		_g9 = height;
	}
	HX_STACK_LINE(147)
	this->_height = _g9;
	HX_STACK_LINE(149)
	::openfl::_v2::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(this->_width,this->_height,true,null());		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(150)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(152)
		this->_source = source;
		HX_STACK_LINE(153)
		::openfl::_v2::geom::Rectangle _g10 = source->get_rect();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(153)
		this->_sourceRect = _g10;
		HX_STACK_LINE(154)
		::com::haxepunk::graphics::atlas::AtlasData _g11;		HX_STACK_VAR(_g11,"_g11");
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( hx::ObjectPtr< ::com::haxepunk::graphics::Text_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",154,0x6110fd86)
				{
					HX_STACK_LINE(154)
					::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(__this->_source,null(),null());		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(154)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(154)
		_g11 = _Function_2_1::Block(this);
		HX_STACK_LINE(154)
		::com::haxepunk::graphics::atlas::AtlasRegion _g12 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(154)
		this->_region = _g12;
		HX_STACK_LINE(155)
		this->blit = true;
		HX_STACK_LINE(156)
		super::__construct(null(),null());
	}
	else{
		HX_STACK_LINE(160)
		::com::haxepunk::ds::Either _g15;		HX_STACK_VAR(_g15,"_g15");
		struct _Function_2_1{
			inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &source){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",160,0x6110fd86)
				{
					HX_STACK_LINE(160)
					::com::haxepunk::graphics::atlas::AtlasData _g13;		HX_STACK_VAR(_g13,"_g13");
					struct _Function_3_1{
						inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::openfl::_v2::display::BitmapData &source){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",160,0x6110fd86)
							{
								HX_STACK_LINE(160)
								::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(160)
								return data;
							}
							return null();
						}
					};
					HX_STACK_LINE(160)
					_g13 = _Function_3_1::Block(source);
					HX_STACK_LINE(160)
					::com::haxepunk::graphics::atlas::AtlasRegion _g14 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(160)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g14);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(160)
					return e;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::com::haxepunk::ds::Either Block( ::openfl::_v2::display::BitmapData &source){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",160,0x6110fd86)
				{
					HX_STACK_LINE(160)
					::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(source);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(160)
					return e;
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		_g15 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_2_1::Block(source)) : ::com::haxepunk::ds::Either(_Function_2_2::Block(source)) );
		HX_STACK_LINE(160)
		super::__construct(_g15,null());
	}
	HX_STACK_LINE(163)
	this->blit = (::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER);
	HX_STACK_LINE(164)
	this->updateTextBuffer();
	HX_STACK_LINE(166)
	this->set_size(options->__Field(HX_CSTRING("size"),true));
	HX_STACK_LINE(167)
	this->set_color(options->__Field(HX_CSTRING("color"),true));
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		Float value = x;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(168)
		this->x = value;
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		Float value = y;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(169)
		this->y = value;
	}
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Text_obj::addStyle( ::String tagName,::openfl::_v2::text::TextFormat params){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","addStyle",0xf85cf707,"com.haxepunk.graphics.Text.addStyle","com/haxepunk/graphics/Text.hx",184,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tagName,"tagName")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(185)
		::openfl::_v2::text::TextFormat _g = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::toTextformat(params);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		this->_styles->set(tagName,_g);
		HX_STACK_LINE(186)
		if (((this->_richText != null()))){
			HX_STACK_LINE(186)
			this->updateTextBuffer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,addStyle,(void))

Void Text_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateColorTransform",0x276271a9,"com.haxepunk.graphics.Text.updateColorTransform","com/haxepunk/graphics/Text.hx",191,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		if (((this->_richText != null()))){
			HX_STACK_LINE(193)
			if (((this->_alpha == (int)1))){
				HX_STACK_LINE(195)
				this->_tint = null();
			}
			else{
				HX_STACK_LINE(199)
				this->_tint = this->_colorTransform;
				HX_STACK_LINE(200)
				this->_tint->redMultiplier = (int)1;
				HX_STACK_LINE(201)
				this->_tint->greenMultiplier = (int)1;
				HX_STACK_LINE(202)
				this->_tint->blueMultiplier = (int)1;
				HX_STACK_LINE(203)
				this->_tint->redOffset = (int)0;
				HX_STACK_LINE(204)
				this->_tint->greenOffset = (int)0;
				HX_STACK_LINE(205)
				this->_tint->blueOffset = (int)0;
				HX_STACK_LINE(206)
				this->_tint->alphaMultiplier = this->_alpha;
			}
			HX_STACK_LINE(209)
			if (((this->_format->color != this->_color))){
				HX_STACK_LINE(211)
				this->updateTextBuffer();
			}
			else{
				HX_STACK_LINE(215)
				this->updateBuffer(null());
			}
		}
		else{
			HX_STACK_LINE(220)
			this->super::updateColorTransform();
		}
	}
return null();
}


Void Text_obj::matchStyles( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","matchStyles",0x017125f0,"com.haxepunk.graphics.Text.matchStyles","com/haxepunk/graphics/Text.hx",226,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		this->_text = this->_richText;
		HX_STACK_LINE(230)
		::String _g = ::com::haxepunk::graphics::Text_obj::tag_re->replace(this->_text,HX_CSTRING("$2"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		this->_field->set_text(_g);
		HX_STACK_LINE(233)
		this->_field->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(::com::haxepunk::graphics::Text_obj::tag_re->match(this->_text)))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(236)
			::String tagName = ::com::haxepunk::graphics::Text_obj::tag_re->matched((int)1);		HX_STACK_VAR(tagName,"tagName");
			HX_STACK_LINE(237)
			::String text = ::com::haxepunk::graphics::Text_obj::tag_re->matched((int)2);		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(238)
			Dynamic p = ::com::haxepunk::graphics::Text_obj::tag_re->matchedPos();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(239)
			::String _g1 = this->_text.substr((int)0,p->__Field(HX_CSTRING("pos"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			::String _g2 = (_g1 + text);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(239)
			::String _g3 = this->_text.substr((p->__Field(HX_CSTRING("pos"),true) + p->__Field(HX_CSTRING("len"),true)),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(239)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(239)
			this->_text = _g4;
			HX_STACK_LINE(241)
			if ((this->_styles->exists(tagName))){
				HX_STACK_LINE(243)
				::openfl::_v2::text::TextFormat _g5 = this->_styles->get(tagName);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(243)
				this->_field->setTextFormat(_g5,p->__Field(HX_CSTRING("pos"),true),(p->__Field(HX_CSTRING("pos"),true) + text.length));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,matchStyles,(void))

Void Text_obj::updateTextBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateTextBuffer",0x558847ad,"com.haxepunk.graphics.Text.updateTextBuffer","com/haxepunk/graphics/Text.hx",263,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		if (((this->_richText == null()))){
			HX_STACK_LINE(266)
			this->_format->color = (int)16777215;
			HX_STACK_LINE(267)
			this->_field->setTextFormat(this->_format,null(),null());
		}
		else{
			HX_STACK_LINE(271)
			this->_format->color = this->_color;
			HX_STACK_LINE(272)
			this->matchStyles();
		}
		HX_STACK_LINE(275)
		this->_field->set_width(this->_width);
		HX_STACK_LINE(276)
		Float _g = this->_field->get_textWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		Float _g1 = (_g + (int)4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		int _g2 = ::Math_obj::ceil(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(276)
		int _g3 = this->textWidth = _g2;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(276)
		this->_field->set_width(_g3);
		HX_STACK_LINE(277)
		Float _g4 = this->_field->get_textHeight();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(277)
		Float _g5 = (_g4 + (int)4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(277)
		int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(277)
		int _g7 = this->textHeight = _g6;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(277)
		this->_field->set_height(_g7);
		HX_STACK_LINE(279)
		if (((bool(this->resizable) && bool(((bool((this->textWidth > this->_width)) || bool((this->textHeight > this->_height)))))))){
			HX_STACK_LINE(281)
			if (((this->_width < this->textWidth))){
				HX_STACK_LINE(281)
				this->_width = this->textWidth;
			}
			HX_STACK_LINE(282)
			if (((this->_height < this->textHeight))){
				HX_STACK_LINE(282)
				this->_height = this->textHeight;
			}
		}
		HX_STACK_LINE(285)
		int _g8 = this->_source->get_width();		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::com::haxepunk::graphics::Text_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",285,0x6110fd86)
				{
					HX_STACK_LINE(285)
					int _g9 = __this->_source->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(285)
					return (__this->_height > _g9);
				}
				return null();
			}
		};
		HX_STACK_LINE(285)
		if (((  ((!(((this->_width > _g8))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(288)
			int _g10 = this->_source->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(288)
			Float _g11 = ::Math_obj::max(this->_width,_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(288)
			int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(289)
			int _g13 = this->_source->get_height();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(289)
			Float _g14 = ::Math_obj::max(this->_height,_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(289)
			int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(287)
			::openfl::_v2::display::BitmapData _g16 = ::com::haxepunk::HXP_obj::createBitmap(_g12,_g15,true,null());		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(287)
			this->_source = _g16;
			HX_STACK_LINE(292)
			::openfl::_v2::geom::Rectangle _g17 = this->_source->get_rect();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(292)
			this->_sourceRect = _g17;
			HX_STACK_LINE(293)
			this->createBuffer();
			HX_STACK_LINE(295)
			if ((!(this->blit))){
				HX_STACK_LINE(297)
				if (((this->_region != null()))){
					HX_STACK_LINE(299)
					this->_region->destroy();
				}
				HX_STACK_LINE(301)
				::com::haxepunk::graphics::atlas::AtlasData _g18;		HX_STACK_VAR(_g18,"_g18");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( hx::ObjectPtr< ::com::haxepunk::graphics::Text_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",301,0x6110fd86)
						{
							HX_STACK_LINE(301)
							::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(__this->_source,null(),null());		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(301)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(301)
				_g18 = _Function_3_1::Block(this);
				HX_STACK_LINE(301)
				::com::haxepunk::graphics::atlas::AtlasRegion _g19 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(301)
				this->_region = _g19;
			}
		}
		else{
			HX_STACK_LINE(306)
			this->_source->fillRect(this->_sourceRect,(int)0);
		}
		HX_STACK_LINE(309)
		this->_field->set_width(this->_width);
		HX_STACK_LINE(310)
		this->_field->set_height(this->_height);
		HX_STACK_LINE(312)
		this->_source->draw(this->_field,null(),null(),null(),null(),null());
		HX_STACK_LINE(313)
		this->super::updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,updateTextBuffer,(void))

Void Text_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","destroy",0xb9bd2523,"com.haxepunk.graphics.Text.destroy","com/haxepunk/graphics/Text.hx",321,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		if (((this->_region != null()))){
			HX_STACK_LINE(323)
			this->_region->destroy();
		}
	}
return null();
}


::String Text_obj::get_text( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_text",0xc796b3ed,"com.haxepunk.graphics.Text.get_text","com/haxepunk/graphics/Text.hx",331,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_text",0x75f40d61,"com.haxepunk.graphics.Text.set_text","com/haxepunk/graphics/Text.hx",333,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(334)
	if (((bool((this->_text == value)) && bool((this->_richText == null()))))){
		HX_STACK_LINE(334)
		return value;
	}
	HX_STACK_LINE(335)
	::String _g = this->_text = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(335)
	this->_field->set_text(_g);
	HX_STACK_LINE(336)
	if (((this->_richText == null()))){
		HX_STACK_LINE(338)
		this->updateTextBuffer();
	}
	else{
		HX_STACK_LINE(342)
		this->updateColorTransform();
	}
	HX_STACK_LINE(344)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::String Text_obj::get_richText( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_richText",0x97da1429,"com.haxepunk.graphics.Text.get_richText","com/haxepunk/graphics/Text.hx",353,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	if (((this->_richText == null()))){
		HX_STACK_LINE(353)
		return this->_text;
	}
	else{
		HX_STACK_LINE(353)
		return this->_richText;
	}
	HX_STACK_LINE(353)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_richText,return )

::String Text_obj::set_richText( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_richText",0xacd3379d,"com.haxepunk.graphics.Text.set_richText","com/haxepunk/graphics/Text.hx",355,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(356)
	if (((this->_richText == value))){
		HX_STACK_LINE(356)
		return value;
	}
	HX_STACK_LINE(357)
	bool fromPlain = (this->_richText == null());		HX_STACK_VAR(fromPlain,"fromPlain");
	HX_STACK_LINE(358)
	this->_richText = value;
	HX_STACK_LINE(359)
	if (((this->_richText == HX_CSTRING("")))){
		HX_STACK_LINE(359)
		::String _g = this->_text = HX_CSTRING("");		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		this->_field->set_text(_g);
	}
	HX_STACK_LINE(360)
	if (((bool(fromPlain) && bool((this->_richText != null()))))){
		HX_STACK_LINE(362)
		this->_format->color = (int)16777215;
		HX_STACK_LINE(363)
		Float _g1 = this->_blue = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(363)
		Float _g2 = this->_green = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(363)
		this->_red = _g2;
		HX_STACK_LINE(364)
		this->updateColorTransform();
	}
	else{
		HX_STACK_LINE(368)
		this->updateTextBuffer();
	}
	HX_STACK_LINE(370)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_richText,return )

Dynamic Text_obj::getTextProperty( ::String name){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","getTextProperty",0x6536e501,"com.haxepunk.graphics.Text.getTextProperty","com/haxepunk/graphics/Text.hx",378,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(379)
	Dynamic value = this->__Field(name,true);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(380)
	if (((value == null()))){
		HX_STACK_LINE(380)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			Dynamic o = this->_field;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(380)
			if (((o == null()))){
				HX_STACK_LINE(380)
				_g = null();
			}
			else{
				HX_STACK_LINE(380)
				_g = o->__Field(name,true);
			}
		}
		HX_STACK_LINE(380)
		value = _g;
	}
	HX_STACK_LINE(381)
	if (((value == null()))){
		HX_STACK_LINE(381)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			Dynamic o = this->_format;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(381)
			if (((o == null()))){
				HX_STACK_LINE(381)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(381)
				_g1 = o->__Field(name,true);
			}
		}
		HX_STACK_LINE(381)
		value = _g1;
	}
	HX_STACK_LINE(382)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,getTextProperty,return )

bool Text_obj::setTextProperty( ::String name,Dynamic value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","setTextProperty",0x6102620d,"com.haxepunk.graphics.Text.setTextProperty","com/haxepunk/graphics/Text.hx",390,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(391)
	bool propertyFound = false;		HX_STACK_VAR(propertyFound,"propertyFound");
	HX_STACK_LINE(394)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(396)
		this->__SetField(name,value,true);
		HX_STACK_LINE(397)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(401)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						Dynamic o = this->_field;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(403)
						if (((o != null()))){
							HX_STACK_LINE(403)
							o->__SetField(name,value,true);
						}
					}
					HX_STACK_LINE(404)
					propertyFound = true;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e1 = __e;{
							HX_STACK_LINE(408)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(410)
								{
									HX_STACK_LINE(410)
									Dynamic o = this->_format;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(410)
									if (((o != null()))){
										HX_STACK_LINE(410)
										o->__SetField(name,value,true);
									}
								}
								HX_STACK_LINE(411)
								propertyFound = true;
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e2 = __e;{
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(416)
	if ((!(propertyFound))){
		HX_STACK_LINE(416)
		return false;
	}
	HX_STACK_LINE(418)
	this->updateTextBuffer();
	HX_STACK_LINE(419)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,setTextProperty,return )

::String Text_obj::set_font( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_font",0x6cba9e83,"com.haxepunk.graphics.Text.set_font","com/haxepunk/graphics/Text.hx",427,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(428)
	if (((this->font == value))){
		HX_STACK_LINE(428)
		return value;
	}
	HX_STACK_LINE(429)
	value = ::openfl::_v2::Assets_obj::getFont(value,null())->fontName;
	HX_STACK_LINE(430)
	::String _g = this->font = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(430)
	this->_format->font = _g;
	HX_STACK_LINE(431)
	this->updateTextBuffer();
	HX_STACK_LINE(432)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

int Text_obj::set_size( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_size",0x754de175,"com.haxepunk.graphics.Text.set_size","com/haxepunk/graphics/Text.hx",440,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(441)
	if (((this->size == value))){
		HX_STACK_LINE(441)
		return value;
	}
	HX_STACK_LINE(442)
	int _g = this->size = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(442)
	this->_format->size = _g;
	HX_STACK_LINE(443)
	this->updateTextBuffer();
	HX_STACK_LINE(444)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

::String Text_obj::set_align( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_align",0xd38fb391,"com.haxepunk.graphics.Text.set_align","com/haxepunk/graphics/Text.hx",457,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(458)
	if (((this->align == value))){
		HX_STACK_LINE(458)
		return value;
	}
	HX_STACK_LINE(459)
	this->_format->align = value;
	HX_STACK_LINE(460)
	this->updateTextBuffer();
	HX_STACK_LINE(461)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align,return )

int Text_obj::set_leading( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_leading",0xfd495a92,"com.haxepunk.graphics.Text.set_leading","com/haxepunk/graphics/Text.hx",469,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(470)
	if (((this->leading == value))){
		HX_STACK_LINE(470)
		return value;
	}
	HX_STACK_LINE(471)
	int _g = this->leading = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(471)
	this->_format->leading = _g;
	HX_STACK_LINE(472)
	this->updateTextBuffer();
	HX_STACK_LINE(473)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_leading,return )

bool Text_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_wordWrap",0x7815bf68,"com.haxepunk.graphics.Text.set_wordWrap","com/haxepunk/graphics/Text.hx",481,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(482)
	if (((this->wordWrap == value))){
		HX_STACK_LINE(482)
		return value;
	}
	HX_STACK_LINE(483)
	bool _g = this->wordWrap = value;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(483)
	this->_field->set_wordWrap(_g);
	HX_STACK_LINE(484)
	this->updateTextBuffer();
	HX_STACK_LINE(485)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_wordWrap,return )

int Text_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_width",0x991026c6,"com.haxepunk.graphics.Text.get_width","com/haxepunk/graphics/Text.hx",488,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	return ::Std_obj::_int(this->_width);
}


int Text_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_height",0x0b613f27,"com.haxepunk.graphics.Text.get_height","com/haxepunk/graphics/Text.hx",489,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	return ::Std_obj::_int(this->_height);
}


::EReg Text_obj::tag_re;


Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_richText,"_richText");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_richText,"_richText");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { return tag_re; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"richText") ) { return get_richText(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_richText") ) { return _richText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matchStyles") ) { return matchStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"set_leading") ) { return set_leading_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_richText") ) { return get_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_richText") ) { return set_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextProperty") ) { return getTextProperty_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextProperty") ) { return setTextProperty_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateTextBuffer") ) { return updateTextBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp) return set_align(inValue);align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { tag_re=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp) return set_leading(inValue);leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"richText") ) { return set_richText(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_richText") ) { _richText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("resizable"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("richText"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("leading"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_richText"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_styles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tag_re"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Text_obj,resizable),HX_CSTRING("resizable")},
	{hx::fsInt,(int)offsetof(Text_obj,textWidth),HX_CSTRING("textWidth")},
	{hx::fsInt,(int)offsetof(Text_obj,textHeight),HX_CSTRING("textHeight")},
	{hx::fsString,(int)offsetof(Text_obj,font),HX_CSTRING("font")},
	{hx::fsInt,(int)offsetof(Text_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(Text_obj,align),HX_CSTRING("align")},
	{hx::fsInt,(int)offsetof(Text_obj,leading),HX_CSTRING("leading")},
	{hx::fsBool,(int)offsetof(Text_obj,wordWrap),HX_CSTRING("wordWrap")},
	{hx::fsInt,(int)offsetof(Text_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Text_obj,_height),HX_CSTRING("_height")},
	{hx::fsString,(int)offsetof(Text_obj,_text),HX_CSTRING("_text")},
	{hx::fsString,(int)offsetof(Text_obj,_richText),HX_CSTRING("_richText")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Text_obj,_field),HX_CSTRING("_field")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(Text_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Text_obj,_styles),HX_CSTRING("_styles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resizable"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("addStyle"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("matchStyles"),
	HX_CSTRING("updateTextBuffer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_richText"),
	HX_CSTRING("set_richText"),
	HX_CSTRING("getTextProperty"),
	HX_CSTRING("setTextProperty"),
	HX_CSTRING("font"),
	HX_CSTRING("set_font"),
	HX_CSTRING("size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("align"),
	HX_CSTRING("set_align"),
	HX_CSTRING("leading"),
	HX_CSTRING("set_leading"),
	HX_CSTRING("wordWrap"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_text"),
	HX_CSTRING("_richText"),
	HX_CSTRING("_field"),
	HX_CSTRING("_format"),
	HX_CSTRING("_styles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#endif

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
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

void Text_obj::__boot()
{
	tag_re= ::EReg_obj::__new(HX_CSTRING("<([^>]+)>([^(?:</)]+)</[^>]+>"),HX_CSTRING("g"));
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
