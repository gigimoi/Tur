#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#define INCLUDED_com_haxepunk_graphics_Graphiclist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Graphiclist)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Graphiclist_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Graphiclist_obj OBJ_;
		Graphiclist_obj();
		Void __construct(Array< ::Dynamic > graphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Graphiclist_obj > __new(Array< ::Dynamic > graphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphiclist_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphiclist"); }

		virtual Void update( );

		virtual Void renderList( Dynamic renderFunc,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera);
		Dynamic renderList_dyn();

		virtual Void render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera);

		virtual Void renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera);

		virtual Void destroy( );

		virtual ::com::haxepunk::Graphic add( ::com::haxepunk::Graphic graphic);
		Dynamic add_dyn();

		virtual ::com::haxepunk::Graphic remove( ::com::haxepunk::Graphic graphic);
		Dynamic remove_dyn();

		virtual Void removeAt( hx::Null< int >  index);
		Dynamic removeAt_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		Array< ::Dynamic > children;
		virtual Array< ::Dynamic > get_children( );
		Dynamic get_children_dyn();

		int count;
		virtual int get_count( );
		Dynamic get_count_dyn();

		virtual Void updateCheck( );
		Dynamic updateCheck_dyn();

		Array< ::Dynamic > _graphics;
		Array< ::Dynamic > _temp;
		int _count;
		::openfl::_v2::geom::Point _camera;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Graphiclist */ 
