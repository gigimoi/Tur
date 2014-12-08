#ifndef INCLUDED_com_haxepunk_masks_Grid
#define INCLUDED_com_haxepunk_masks_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Pixelmask)
HX_DECLARE_CLASS3(openfl,_v2,display,Graphics)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Grid_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Grid_obj > __new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grid"); }

		bool usePositions;
		virtual Void setTile( hx::Null< int >  column,hx::Null< int >  row,hx::Null< bool >  solid);
		Dynamic setTile_dyn();

		virtual Void setTileXY( hx::Null< int >  x,hx::Null< int >  y,hx::Null< bool >  solid);
		Dynamic setTileXY_dyn();

		virtual Void clearTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic clearTile_dyn();

		virtual bool checkTile( int column,int row);
		Dynamic checkTile_dyn();

		virtual bool getTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getTile_dyn();

		virtual bool getTileXY( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic getTileXY_dyn();

		virtual Void setRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< bool >  solid);
		Dynamic setRect_dyn();

		virtual Void clearRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void loadFromString( ::String str,::String columnSep,::String rowSep);
		Dynamic loadFromString_dyn();

		virtual Void loadFrom2DArray( Array< ::Dynamic > array);
		Dynamic loadFrom2DArray_dyn();

		virtual ::String saveToString( ::String columnSep,::String rowSep,::String solid,::String empty);
		Dynamic saveToString_dyn();

		virtual ::com::haxepunk::masks::Grid clone( );
		Dynamic clone_dyn();

		virtual int get_tileWidth( );
		Dynamic get_tileWidth_dyn();

		virtual int get_tileHeight( );
		Dynamic get_tileHeight_dyn();

		int columns;
		int rows;
		Array< ::Dynamic > data;
		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual bool collidePixelmask( ::com::haxepunk::masks::Pixelmask other);
		Dynamic collidePixelmask_dyn();

		virtual bool collideGrid( ::com::haxepunk::masks::Grid other);
		Dynamic collideGrid_dyn();

		virtual Void debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual Void squareProjection( ::openfl::_v2::geom::Point axis,::openfl::_v2::geom::Point point);
		Dynamic squareProjection_dyn();

		::openfl::_v2::geom::Rectangle _tile;
		::openfl::_v2::geom::Rectangle _rect;
		::openfl::_v2::geom::Point _point;
		::openfl::_v2::geom::Point _point2;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Grid */ 
