#ifndef INCLUDED_com_haxepunk_masks_Circle
#define INCLUDED_com_haxepunk_masks_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Circle)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,SlopedGrid)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(openfl,_v2,display,Graphics)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Circle_obj > __new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Circle"); }

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideCircle( ::com::haxepunk::masks::Circle other);
		Dynamic collideCircle_dyn();

		virtual bool collideGridTile( Float mx,Float my,Float hTileWidth,Float hTileHeight,Float thisX,Float thisY);
		Dynamic collideGridTile_dyn();

		virtual bool collideGrid( ::com::haxepunk::masks::Grid other);
		Dynamic collideGrid_dyn();

		virtual bool collideSlopedGrid( ::com::haxepunk::masks::SlopedGrid other);
		Dynamic collideSlopedGrid_dyn();

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual Void project( ::openfl::_v2::geom::Point axis,::com::haxepunk::math::Projection projection);

		virtual Void debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual int get_x( );

		virtual int get_y( );

		virtual int get_radius( );
		Dynamic get_radius_dyn();

		virtual int set_radius( int value);
		Dynamic set_radius_dyn();

		virtual Void update( );

		int _radius;
		int _squaredRadius;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Circle */ 
