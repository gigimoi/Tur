#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#define INCLUDED_com_haxepunk_graphics_atlas_TileAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/atlas/Atlas.h>
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TileAtlas_obj : public ::com::haxepunk::graphics::atlas::Atlas_obj{
	public:
		typedef ::com::haxepunk::graphics::atlas::Atlas_obj super;
		typedef TileAtlas_obj OBJ_;
		TileAtlas_obj();
		Void __construct(::com::haxepunk::graphics::atlas::AtlasData source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileAtlas_obj > __new(::com::haxepunk::graphics::atlas::AtlasData source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileAtlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileAtlas"); }

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion getRegion( int index);
		Dynamic getRegion_dyn();

		virtual Void prepare( int tileWidth,int tileHeight,hx::Null< int >  tileMarginWidth,hx::Null< int >  tileMarginHeight);
		Dynamic prepare_dyn();

		Array< ::Dynamic > _regions;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_TileAtlas */ 
