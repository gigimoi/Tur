#ifndef INCLUDED_com_haxepunk_Scene
#define INCLUDED_com_haxepunk_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Tweener.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::com::haxepunk::Tweener_obj{
	public:
		typedef ::com::haxepunk::Tweener_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Scene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		bool visible;
		::openfl::_v2::geom::Point camera;
		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void focusGained( );
		Dynamic focusGained_dyn();

		virtual Void focusLost( );
		Dynamic focusLost_dyn();

		virtual Void update( );

		virtual Void showLayer( int layer,hx::Null< bool >  show);
		Dynamic showLayer_dyn();

		virtual bool layerVisible( int layer);
		Dynamic layerVisible_dyn();

		virtual int layerSort( int a,int b);
		Dynamic layerSort_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		int mouseX;
		virtual int get_mouseX( );
		Dynamic get_mouseX_dyn();

		int mouseY;
		virtual int get_mouseY( );
		Dynamic get_mouseY_dyn();

		::openfl::_v2::display::Sprite sprite;
		virtual Dynamic add( Dynamic e);
		Dynamic add_dyn();

		virtual Dynamic remove( Dynamic e);
		Dynamic remove_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void addList( Dynamic list);
		Dynamic addList_dyn();

		virtual Void removeList( Dynamic list);
		Dynamic removeList_dyn();

		virtual ::com::haxepunk::Entity addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  layer,hx::Null< Float >  x,hx::Null< Float >  y);
		Dynamic addGraphic_dyn();

		virtual ::com::haxepunk::Entity addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  x,hx::Null< int >  y);
		Dynamic addMask_dyn();

		virtual Dynamic create( ::Class classType,hx::Null< bool >  addToScene,Dynamic constructorsArgs);
		Dynamic create_dyn();

		virtual Dynamic recycle( Dynamic e);
		Dynamic recycle_dyn();

		virtual Void clearRecycled( ::Class classType);
		Dynamic clearRecycled_dyn();

		virtual Void clearRecycledAll( );
		Dynamic clearRecycledAll_dyn();

		virtual bool bringToFront( ::com::haxepunk::Entity e);
		Dynamic bringToFront_dyn();

		virtual bool sendToBack( ::com::haxepunk::Entity e);
		Dynamic sendToBack_dyn();

		virtual bool bringForward( ::com::haxepunk::Entity e);
		Dynamic bringForward_dyn();

		virtual bool sendBackward( ::com::haxepunk::Entity e);
		Dynamic sendBackward_dyn();

		virtual bool isAtFront( ::com::haxepunk::Entity e);
		Dynamic isAtFront_dyn();

		virtual bool isAtBack( ::com::haxepunk::Entity e);
		Dynamic isAtBack_dyn();

		virtual ::com::haxepunk::Entity collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight);
		Dynamic collideRect_dyn();

		virtual ::com::haxepunk::Entity collidePoint( ::String type,Float pX,Float pY);
		Dynamic collidePoint_dyn();

		virtual ::com::haxepunk::Entity collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  precision,::openfl::_v2::geom::Point p);
		Dynamic collideLine_dyn();

		virtual Void collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,Dynamic into);
		Dynamic collideRectInto_dyn();

		virtual Void collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,Dynamic into);
		Dynamic collideCircleInto_dyn();

		virtual Void collidePointInto( ::String type,Float pX,Float pY,Dynamic into);
		Dynamic collidePointInto_dyn();

		virtual ::com::haxepunk::Entity nearestToRect( ::String type,Float x,Float y,Float width,Float height);
		Dynamic nearestToRect_dyn();

		virtual ::com::haxepunk::Entity nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  useHitboxes);
		Dynamic nearestToEntity_dyn();

		virtual ::com::haxepunk::Entity nearestToClass( ::String type,::com::haxepunk::Entity e,::Class classType,hx::Null< bool >  useHitboxes);
		Dynamic nearestToClass_dyn();

		virtual ::com::haxepunk::Entity nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  useHitboxes);
		Dynamic nearestToPoint_dyn();

		virtual int get_count( );
		Dynamic get_count_dyn();

		virtual int typeCount( ::String type);
		Dynamic typeCount_dyn();

		virtual int classCount( ::String c);
		Dynamic classCount_dyn();

		virtual int layerCount( int layer);
		Dynamic layerCount_dyn();

		::com::haxepunk::Entity first;
		virtual ::com::haxepunk::Entity get_first( );
		Dynamic get_first_dyn();

		int layers;
		virtual int get_layers( );
		Dynamic get_layers_dyn();

		virtual ::List entitiesForType( ::String type);
		Dynamic entitiesForType_dyn();

		virtual Dynamic classFirst( ::Class c);
		Dynamic classFirst_dyn();

		virtual ::com::haxepunk::Entity layerFirst( int layer);
		Dynamic layerFirst_dyn();

		virtual ::com::haxepunk::Entity layerLast( int layer);
		Dynamic layerLast_dyn();

		::com::haxepunk::Entity farthest;
		virtual ::com::haxepunk::Entity get_farthest( );
		Dynamic get_farthest_dyn();

		::com::haxepunk::Entity nearest;
		virtual ::com::haxepunk::Entity get_nearest( );
		Dynamic get_nearest_dyn();

		int layerFarthest;
		virtual int get_layerFarthest( );
		Dynamic get_layerFarthest_dyn();

		int layerNearest;
		virtual int get_layerNearest( );
		Dynamic get_layerNearest_dyn();

		int uniqueTypes;
		virtual int get_uniqueTypes( );
		Dynamic get_uniqueTypes_dyn();

		virtual Void getType( ::String type,Dynamic into);
		Dynamic getType_dyn();

		virtual Void getClass( ::Class c,Dynamic into);
		Dynamic getClass_dyn();

		virtual Void getLayer( int layer,Dynamic into);
		Dynamic getLayer_dyn();

		virtual Void getAll( Dynamic into);
		Dynamic getAll_dyn();

		virtual ::com::haxepunk::Entity getInstance( ::String name);
		Dynamic getInstance_dyn();

		virtual Void updateLists( hx::Null< bool >  shouldAdd);
		Dynamic updateLists_dyn();

		virtual Void addUpdate( ::com::haxepunk::Entity e);
		Dynamic addUpdate_dyn();

		virtual Void removeUpdate( ::com::haxepunk::Entity e);
		Dynamic removeUpdate_dyn();

		virtual Void addRender( ::com::haxepunk::Entity e);
		Dynamic addRender_dyn();

		virtual Void removeRender( ::com::haxepunk::Entity e);
		Dynamic removeRender_dyn();

		virtual Void addType( ::com::haxepunk::Entity e);
		Dynamic addType_dyn();

		virtual Void removeType( ::com::haxepunk::Entity e);
		Dynamic removeType_dyn();

		virtual Void registerName( ::com::haxepunk::Entity e);
		Dynamic registerName_dyn();

		virtual Void unregisterName( ::com::haxepunk::Entity e);
		Dynamic unregisterName_dyn();

		Array< ::Dynamic > _add;
		Array< ::Dynamic > _remove;
		Array< ::Dynamic > _recycle;
		::List _update;
		Array< int > _layerList;
		::haxe::ds::IntMap _layerDisplay;
		::haxe::ds::IntMap _layers;
		::haxe::ds::StringMap _classCount;
		::haxe::ds::StringMap _types;
		::haxe::ds::StringMap _recycled;
		::haxe::ds::StringMap _entityNames;
		static Float squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static Dynamic squareRects_dyn();

		static Float squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh);
		static Dynamic squarePointRect_dyn();

};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Scene */ 
