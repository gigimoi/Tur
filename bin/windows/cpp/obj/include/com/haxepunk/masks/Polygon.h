#ifndef INCLUDED_com_haxepunk_masks_Polygon
#define INCLUDED_com_haxepunk_masks_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Circle)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Polygon)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(openfl,_v2,display,Graphics)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Polygon_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();
		Void __construct(Array< ::Dynamic > points,::openfl::_v2::geom::Point origin);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Polygon_obj > __new(Array< ::Dynamic > points,::openfl::_v2::geom::Point origin);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Polygon"); }

		::openfl::_v2::geom::Point origin;
		int minX;
		int minY;
		int maxX;
		int maxY;
		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox hitbox);

		virtual bool collideGrid( ::com::haxepunk::masks::Grid grid);
		Dynamic collideGrid_dyn();

		virtual bool collideCircle( ::com::haxepunk::masks::Circle circle);
		Dynamic collideCircle_dyn();

		virtual bool collidePolygon( ::com::haxepunk::masks::Polygon other);
		Dynamic collidePolygon_dyn();

		virtual Void project( ::openfl::_v2::geom::Point axis,::com::haxepunk::math::Projection projection);

		virtual Void debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual Float get_angle( );
		Dynamic get_angle_dyn();

		virtual Float set_angle( Float value);
		Dynamic set_angle_dyn();

		virtual Array< ::Dynamic > get_points( );
		Dynamic get_points_dyn();

		virtual Array< ::Dynamic > set_points( Array< ::Dynamic > value);
		Dynamic set_points_dyn();

		virtual Void update( );

		virtual Void rotate( Float angleDelta);
		Dynamic rotate_dyn();

		virtual Void generateAxes( );
		Dynamic generateAxes_dyn();

		virtual Void removeDuplicateAxes( );
		Dynamic removeDuplicateAxes_dyn();

		virtual Void updateAxes( );
		Dynamic updateAxes_dyn();

		Float _angle;
		Array< ::Dynamic > _points;
		Array< ::Dynamic > _axes;
		::com::haxepunk::Entity _fakeEntity;
		::com::haxepunk::masks::Hitbox _fakeTileHitbox;
		static ::com::haxepunk::masks::Polygon createPolygon( hx::Null< int >  sides,hx::Null< Float >  radius,hx::Null< Float >  angle);
		static Dynamic createPolygon_dyn();

		static ::com::haxepunk::masks::Polygon createFromArray( Array< Float > points);
		static Dynamic createFromArray_dyn();

		static Float EPSILON;
		static ::com::haxepunk::math::Projection firstProj;
		static ::com::haxepunk::math::Projection secondProj;
		static ::openfl::_v2::geom::Point vertical;
		static ::openfl::_v2::geom::Point horizontal;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Polygon */ 
