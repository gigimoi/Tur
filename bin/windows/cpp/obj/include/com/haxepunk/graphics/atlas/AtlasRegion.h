#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#define INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  AtlasRegion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasRegion_obj OBJ_;
		AtlasRegion_obj();
		Void __construct(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::openfl::_v2::geom::Rectangle rect);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AtlasRegion_obj > __new(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::openfl::_v2::geom::Rectangle rect);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AtlasRegion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AtlasRegion"); }

		bool rotated;
		int tileIndex;
		virtual ::com::haxepunk::graphics::atlas::AtlasRegion clip( ::openfl::_v2::geom::Rectangle clipRect,::openfl::_v2::geom::Point center);
		Dynamic clip_dyn();

		virtual Void draw( Float x,Float y,int layer,hx::Null< Float >  scaleX,hx::Null< Float >  scaleY,hx::Null< Float >  angle,hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,Dynamic smooth);
		Dynamic draw_dyn();

		virtual Void drawMatrix( Float tx,Float ty,Float a,Float b,Float c,Float d,int layer,hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,Dynamic smooth);
		Dynamic drawMatrix_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		::openfl::_v2::geom::Rectangle _rect;
		::com::haxepunk::graphics::atlas::AtlasData _parent;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion */ 
