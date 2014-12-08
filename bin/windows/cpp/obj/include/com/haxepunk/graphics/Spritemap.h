#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#define INCLUDED_com_haxepunk_graphics_Spritemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Image.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Animation)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Spritemap_obj : public ::com::haxepunk::graphics::Image_obj{
	public:
		typedef ::com::haxepunk::graphics::Image_obj super;
		typedef Spritemap_obj OBJ_;
		Spritemap_obj();
		Void __construct(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spritemap_obj > __new(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spritemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spritemap"); }

		bool complete;
		Dynamic callbackFunc;
		Dynamic &callbackFunc_dyn() { return callbackFunc;}
		Float rate;
		virtual Void updateBuffer( hx::Null< bool >  clearBefore);

		virtual Void update( );

		virtual ::com::haxepunk::graphics::Animation add( ::String name,Array< int > frames,hx::Null< Float >  frameRate,hx::Null< bool >  loop);
		Dynamic add_dyn();

		virtual ::com::haxepunk::graphics::Animation play( ::String name,hx::Null< bool >  reset,hx::Null< bool >  reverse);
		Dynamic play_dyn();

		virtual ::com::haxepunk::graphics::Animation playFrames( Array< int > frames,hx::Null< Float >  frameRate,hx::Null< bool >  loop,hx::Null< bool >  reset,hx::Null< bool >  reverse);
		Dynamic playFrames_dyn();

		virtual ::com::haxepunk::graphics::Animation playAnimation( ::com::haxepunk::graphics::Animation anim,hx::Null< bool >  reset,hx::Null< bool >  reverse);
		Dynamic playAnimation_dyn();

		virtual Void restart( );
		Dynamic restart_dyn();

		virtual Void stop( hx::Null< bool >  reset);
		Dynamic stop_dyn();

		virtual int getFrame( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getFrame_dyn();

		virtual Void setFrame( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic setFrame_dyn();

		virtual Void randFrame( );
		Dynamic randFrame_dyn();

		virtual Void setAnimFrame( ::String name,int index);
		Dynamic setAnimFrame_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		virtual int set_frame( int value);
		Dynamic set_frame_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual int set_index( int value);
		Dynamic set_index_dyn();

		bool reverse;
		int frameCount;
		virtual int get_frameCount( );
		Dynamic get_frameCount_dyn();

		int columns;
		virtual int get_columns( );
		Dynamic get_columns_dyn();

		int rows;
		virtual int get_rows( );
		Dynamic get_rows_dyn();

		::String currentAnim;
		virtual ::String get_currentAnim( );
		Dynamic get_currentAnim_dyn();

		::openfl::_v2::geom::Rectangle _rect;
		int _width;
		int _height;
		int _columns;
		int _rows;
		int _frameCount;
		::haxe::ds::StringMap _anims;
		::com::haxepunk::graphics::Animation _anim;
		int _index;
		int _frame;
		Float _timer;
		::com::haxepunk::graphics::atlas::TileAtlas _atlas;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Spritemap */ 
