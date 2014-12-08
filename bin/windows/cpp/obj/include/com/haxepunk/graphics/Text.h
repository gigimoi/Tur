#ifndef INCLUDED_com_haxepunk_graphics_Text
#define INCLUDED_com_haxepunk_graphics_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Image.h>
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Text)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public ::com::haxepunk::graphics::Image_obj{
	public:
		typedef ::com::haxepunk::graphics::Image_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Text_obj > __new(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		bool resizable;
		int textWidth;
		int textHeight;
		virtual Void addStyle( ::String tagName,::openfl::_v2::text::TextFormat params);
		Dynamic addStyle_dyn();

		virtual Void updateColorTransform( );

		virtual Void matchStyles( );
		Dynamic matchStyles_dyn();

		virtual Void updateTextBuffer( );
		Dynamic updateTextBuffer_dyn();

		virtual Void destroy( );

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::String get_richText( );
		Dynamic get_richText_dyn();

		virtual ::String set_richText( ::String value);
		Dynamic set_richText_dyn();

		virtual Dynamic getTextProperty( ::String name);
		Dynamic getTextProperty_dyn();

		virtual bool setTextProperty( ::String name,Dynamic value);
		Dynamic setTextProperty_dyn();

		::String font;
		virtual ::String set_font( ::String value);
		Dynamic set_font_dyn();

		int size;
		virtual int set_size( int value);
		Dynamic set_size_dyn();

		::String align;
		virtual ::String set_align( ::String value);
		Dynamic set_align_dyn();

		int leading;
		virtual int set_leading( int value);
		Dynamic set_leading_dyn();

		bool wordWrap;
		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual int get_width( );

		virtual int get_height( );

		int _width;
		int _height;
		::String _text;
		::String _richText;
		::openfl::_v2::text::TextField _field;
		::openfl::_v2::text::TextFormat _format;
		::haxe::ds::StringMap _styles;
		static ::EReg tag_re;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Text */ 
