#ifndef INCLUDED_com_haxepunk_graphics_Tilemap
#define INCLUDED_com_haxepunk_graphics_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Canvas.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Tilemap)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Tilemap_obj : public ::com::haxepunk::graphics::Canvas_obj{
	public:
		typedef ::com::haxepunk::graphics::Canvas_obj super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();
		Void __construct(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tilemap_obj > __new(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tilemap"); }

		bool usePositions;
		virtual Void setTile( int column,int row,hx::Null< int >  index);
		Dynamic setTile_dyn();

		virtual Void clearTile( int column,int row);
		Dynamic clearTile_dyn();

		virtual int getTile( int column,int row);
		Dynamic getTile_dyn();

		virtual Void setRect( int column,int row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< int >  index);
		Dynamic setRect_dyn();

		virtual Void clearRect( int column,int row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void loadFrom2DArray( Array< ::Dynamic > array);
		Dynamic loadFrom2DArray_dyn();

		virtual Void loadFromString( ::String str,::String columnSep,::String rowSep);
		Dynamic loadFromString_dyn();

		virtual ::String saveToString( ::String columnSep,::String rowSep);
		Dynamic saveToString_dyn();

		virtual int getIndex( int tilesColumn,int tilesRow);
		Dynamic getIndex_dyn();

		virtual Void shiftTiles( int columns,int rows,hx::Null< bool >  wrap);
		Dynamic shiftTiles_dyn();

		virtual Void updateRect( ::openfl::_v2::geom::Rectangle rect,bool clear);
		Dynamic updateRect_dyn();

		virtual Void renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera);

		virtual Void updateTile( int column,int row);
		Dynamic updateTile_dyn();

		virtual int get_tileWidth( );
		Dynamic get_tileWidth_dyn();

		virtual int get_tileHeight( );
		Dynamic get_tileHeight_dyn();

		int tileSpacingWidth;
		int tileSpacingHeight;
		virtual int get_tileCount( );
		Dynamic get_tileCount_dyn();

		int columns;
		virtual int get_columns( );
		Dynamic get_columns_dyn();

		int rows;
		virtual int get_rows( );
		Dynamic get_rows_dyn();

		bool smooth;
		Array< ::Dynamic > _map;
		int _columns;
		int _rows;
		::openfl::_v2::display::BitmapData _set;
		::com::haxepunk::graphics::atlas::TileAtlas _atlas;
		int _setColumns;
		int _setRows;
		int _setCount;
		::openfl::_v2::geom::Rectangle _tile;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Tilemap */ 
