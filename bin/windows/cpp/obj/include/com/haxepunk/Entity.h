#ifndef INCLUDED_com_haxepunk_Entity
#define INCLUDED_com_haxepunk_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Tweener.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::com::haxepunk::Tweener_obj{
	public:
		typedef ::com::haxepunk::Tweener_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Entity_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Entity"); }

		bool visible;
		bool collidable;
		Float x;
		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float v);
		Dynamic set_x_dyn();

		Float y;
		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float v);
		Dynamic set_y_dyn();

		bool followCamera;
		int width;
		int height;
		int originX;
		int originY;
		::openfl::_v2::display::BitmapData renderTarget;
		virtual Void added( );
		Dynamic added_dyn();

		virtual Void removed( );
		Dynamic removed_dyn();

		virtual Void update( );

		virtual Void render( );
		Dynamic render_dyn();

		virtual ::com::haxepunk::Entity collide( ::String type,Float x,Float y);
		Dynamic collide_dyn();

		virtual ::com::haxepunk::Entity collideTypes( ::com::haxepunk::ds::Either types,Float x,Float y);
		Dynamic collideTypes_dyn();

		virtual Dynamic collideWith( Dynamic e,Float x,Float y);
		Dynamic collideWith_dyn();

		virtual bool collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight);
		Dynamic collideRect_dyn();

		virtual bool collidePoint( Float x,Float y,Float pX,Float pY);
		Dynamic collidePoint_dyn();

		virtual Void collideInto( ::String type,Float x,Float y,Dynamic array);
		Dynamic collideInto_dyn();

		virtual Void collideTypesInto( Array< ::String > types,Float x,Float y,Dynamic array);
		Dynamic collideTypesInto_dyn();

		bool onCamera;
		virtual bool get_onCamera( );
		Dynamic get_onCamera_dyn();

		virtual ::com::haxepunk::Scene get_world( );
		Dynamic get_world_dyn();

		virtual ::com::haxepunk::Scene get_scene( );
		Dynamic get_scene_dyn();

		Float halfWidth;
		virtual Float get_halfWidth( );
		Dynamic get_halfWidth_dyn();

		Float halfHeight;
		virtual Float get_halfHeight( );
		Dynamic get_halfHeight_dyn();

		Float centerX;
		virtual Float get_centerX( );
		Dynamic get_centerX_dyn();

		Float centerY;
		virtual Float get_centerY( );
		Dynamic get_centerY_dyn();

		Float left;
		virtual Float get_left( );
		Dynamic get_left_dyn();

		Float right;
		virtual Float get_right( );
		Dynamic get_right_dyn();

		Float top;
		virtual Float get_top( );
		Dynamic get_top_dyn();

		Float bottom;
		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual int get_layer( );
		Dynamic get_layer_dyn();

		virtual int set_layer( int value);
		Dynamic set_layer_dyn();

		virtual ::String get_type( );
		Dynamic get_type_dyn();

		virtual ::String set_type( ::String value);
		Dynamic set_type_dyn();

		virtual ::com::haxepunk::Mask get_mask( );
		Dynamic get_mask_dyn();

		virtual ::com::haxepunk::Mask set_mask( ::com::haxepunk::Mask value);
		Dynamic set_mask_dyn();

		virtual ::com::haxepunk::Graphic get_graphic( );
		Dynamic get_graphic_dyn();

		virtual ::com::haxepunk::Graphic set_graphic( ::com::haxepunk::Graphic value);
		Dynamic set_graphic_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String value);
		Dynamic set_name_dyn();

		virtual ::com::haxepunk::Graphic addGraphic( ::com::haxepunk::Graphic g);
		Dynamic addGraphic_dyn();

		virtual Void setHitbox( hx::Null< int >  width,hx::Null< int >  height,hx::Null< int >  originX,hx::Null< int >  originY);
		Dynamic setHitbox_dyn();

		virtual Void setHitboxTo( Dynamic o);
		Dynamic setHitboxTo_dyn();

		virtual Void setOrigin( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic setOrigin_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Float distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  useHitboxes);
		Dynamic distanceFrom_dyn();

		virtual Float distanceToPoint( Float px,Float py,hx::Null< bool >  useHitbox);
		Dynamic distanceToPoint_dyn();

		virtual Float distanceToRect( Float rx,Float ry,Float rwidth,Float rheight);
		Dynamic distanceToRect_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void moveBy( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  sweep);
		Dynamic moveBy_dyn();

		virtual Void moveTo( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  sweep);
		Dynamic moveTo_dyn();

		virtual Void moveTowards( Float x,Float y,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  sweep);
		Dynamic moveTowards_dyn();

		virtual Void moveAtAngle( Float angle,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  sweep);
		Dynamic moveAtAngle_dyn();

		virtual bool moveCollideX( ::com::haxepunk::Entity e);
		Dynamic moveCollideX_dyn();

		virtual bool moveCollideY( ::com::haxepunk::Entity e);
		Dynamic moveCollideY_dyn();

		virtual Void clampHorizontal( Float left,Float right,hx::Null< Float >  padding);
		Dynamic clampHorizontal_dyn();

		virtual Void clampVertical( Float top,Float bottom,hx::Null< Float >  padding);
		Dynamic clampVertical_dyn();

		virtual Void centerGraphicInRect( );
		Dynamic centerGraphicInRect_dyn();

		::String _class;
		::com::haxepunk::Scene _scene;
		::String _type;
		int _layer;
		::String _name;
		::com::haxepunk::Entity _recycleNext;
		::com::haxepunk::Mask HITBOX;
		::com::haxepunk::Mask _mask;
		Float _x;
		Float _y;
		Float _moveX;
		Float _moveY;
		::com::haxepunk::Graphic _graphic;
		::openfl::_v2::geom::Point _point;
		::openfl::_v2::geom::Point _camera;
		static ::com::haxepunk::Entity _EMPTY;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Entity */ 
