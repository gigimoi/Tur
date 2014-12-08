#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#define INCLUDED_com_haxepunk_graphics_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_v2,display,Graphics)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_v2,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Canvas_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Canvas_obj OBJ_;
		Canvas_obj();
		Void __construct(int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Canvas_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Canvas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Canvas"); }

		::openfl::_v2::display::BlendMode blend;
		Float angle;
		Float scale;
		Float scaleX;
		Float scaleY;
		virtual Void render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera);

		virtual Void draw( Float x,Float y,::openfl::_v2::display::BitmapData source,::openfl::_v2::geom::Rectangle rect);
		Dynamic draw_dyn();

		virtual Void fill( ::openfl::_v2::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic fill_dyn();

		virtual Void drawRect( ::openfl::_v2::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic drawRect_dyn();

		virtual Void fillTexture( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::display::BitmapData texture);
		Dynamic fillTexture_dyn();

		virtual Void drawGraphic( int x,int y,::com::haxepunk::Graphic source);
		Dynamic drawGraphic_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Void shift( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic shift_dyn();

		int width;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int height;
		virtual int get_height( );
		Dynamic get_height_dyn();

		Array< ::Dynamic > _buffers;
		Array< ::Dynamic > _midBuffers;
		bool _redrawBuffers;
		int _width;
		int _height;
		int _maxWidth;
		int _maxHeight;
		int _color;
		Float _alpha;
		::openfl::_v2::geom::ColorTransform _tint;
		::openfl::_v2::geom::ColorTransform _colorTransform;
		::openfl::_v2::geom::Matrix _matrix;
		Float _red;
		Float _green;
		Float _blue;
		::openfl::_v2::display::BitmapData _ref;
		int _refWidth;
		int _refHeight;
		::openfl::_v2::geom::Rectangle _rect;
		::openfl::_v2::display::Graphics _graphics;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Canvas */ 
