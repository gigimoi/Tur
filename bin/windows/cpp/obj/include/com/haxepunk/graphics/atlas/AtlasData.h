#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#define INCLUDED_com_haxepunk_graphics_atlas_AtlasData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  AtlasData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasData_obj OBJ_;
		AtlasData_obj();
		Void __construct(::openfl::_v2::display::BitmapData bd,::String name,Dynamic flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AtlasData_obj > __new(::openfl::_v2::display::BitmapData bd,::String name,Dynamic flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AtlasData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AtlasData"); }

		int width;
		int height;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void reload( ::openfl::_v2::display::BitmapData bd);
		Dynamic reload_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion createRegion( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::geom::Point center);
		Dynamic createRegion_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha,Dynamic smooth);
		Dynamic prepareTileMatrix_dyn();

		virtual Void prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth);
		Dynamic prepareTile_dyn();

		virtual bool get_alpha( );
		Dynamic get_alpha_dyn();

		virtual bool set_alpha( bool value);
		Dynamic set_alpha_dyn();

		virtual bool get_rgb( );
		Dynamic get_rgb_dyn();

		virtual bool set_rgb( bool value);
		Dynamic set_rgb_dyn();

		virtual int get_blend( );
		Dynamic get_blend_dyn();

		virtual int set_blend( int value);
		Dynamic set_blend_dyn();

		::String _name;
		int _layerIndex;
		int _renderFlags;
		bool _flagRGB;
		bool _flagAlpha;
		::openfl::_v2::display::Tilesheet _tilesheet;
		Array< Float > _data;
		int _dataIndex;
		Array< Float > _smoothData;
		int _smoothDataIndex;
		Array< ::Dynamic > _rects;
		static int BLEND_NONE;
		static int BLEND_ADD;
		static int BLEND_NORMAL;
		static int BLEND_MULTIPLY;
		static int BLEND_SCREEN;
		static ::com::haxepunk::graphics::atlas::AtlasData getAtlasDataByName( ::String name,hx::Null< bool >  create);
		static Dynamic getAtlasDataByName_dyn();

		static Void startScene( ::com::haxepunk::Scene scene);
		static Dynamic startScene_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData active;
		static ::com::haxepunk::graphics::atlas::AtlasData set_active( ::com::haxepunk::graphics::atlas::AtlasData value);
		static Dynamic set_active_dyn();

		static Void destroyAll( );
		static Dynamic destroyAll_dyn();

		static ::com::haxepunk::Scene _scene;
		static ::haxe::ds::StringMap _dataPool;
		static int _uniqueId;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_AtlasData */ 
