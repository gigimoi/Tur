#ifndef INCLUDED_com_haxepunk_debug_Console
#define INCLUDED_com_haxepunk_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerList)
HX_DECLARE_CLASS3(com,haxepunk,debug,TraceCapture)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_v2,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Console"); }

		int toggleKey;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void traceLog( Dynamic v,Dynamic infos);
		Dynamic traceLog_dyn();

		virtual Void log( Dynamic data);
		Dynamic log_dyn();

		virtual Void watch( Dynamic properties);
		Dynamic watch_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  toggleKey);
		Dynamic enable_dyn();

		virtual Void onResize( ::openfl::_v2::events::Event e);
		Dynamic onResize_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		bool debugDraw;
		virtual bool set_debugDraw( bool value);
		Dynamic set_debugDraw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual bool set_paused( bool value);
		Dynamic set_paused_dyn();

		virtual bool get_debug( );
		Dynamic get_debug_dyn();

		virtual bool set_debug( bool value);
		Dynamic set_debug_dyn();

		virtual Void stepFrame( );
		Dynamic stepFrame_dyn();

		virtual Void startDragging( );
		Dynamic startDragging_dyn();

		virtual Void updateDragging( );
		Dynamic updateDragging_dyn();

		virtual Void moveSelected( int xDelta,int yDelta);
		Dynamic moveSelected_dyn();

		virtual Void startPanning( );
		Dynamic startPanning_dyn();

		virtual Void updatePanning( );
		Dynamic updatePanning_dyn();

		virtual Void panCamera( int xDelta,int yDelta);
		Dynamic panCamera_dyn();

		virtual Void setCamera( int x,int y);
		Dynamic setCamera_dyn();

		virtual Void startSelection( );
		Dynamic startSelection_dyn();

		virtual Void updateSelection( );
		Dynamic updateSelection_dyn();

		virtual Void selectEntities( ::openfl::_v2::geom::Rectangle rect);
		Dynamic selectEntities_dyn();

		virtual Void selectAll( );
		Dynamic selectAll_dyn();

		virtual Void startScrolling( );
		Dynamic startScrolling_dyn();

		virtual Void updateScrolling( );
		Dynamic updateScrolling_dyn();

		virtual Void updateKeyMoving( );
		Dynamic updateKeyMoving_dyn();

		virtual Void updateKeyPanning( );
		Dynamic updateKeyPanning_dyn();

		virtual Void updateEntityLists( hx::Null< bool >  fetchList);
		Dynamic updateEntityLists_dyn();

		virtual Void renderEntities( );
		Dynamic renderEntities_dyn();

		virtual Void updateLog( );
		Dynamic updateLog_dyn();

		virtual Void updateFPSRead( );
		Dynamic updateFPSRead_dyn();

		virtual Void updateDebugRead( );
		Dynamic updateDebugRead_dyn();

		virtual Void updateEntityCount( );
		Dynamic updateEntityCount_dyn();

		virtual Void updateButtons( );
		Dynamic updateButtons_dyn();

		virtual ::openfl::_v2::text::TextFormat format( hx::Null< int >  size,hx::Null< int >  color,::String align);
		Dynamic format_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		bool _enabled;
		bool _visible;
		bool _paused;
		bool _debug;
		bool _scrolling;
		bool _selecting;
		bool _dragging;
		bool _panning;
		::openfl::_v2::display::Sprite _sprite;
		::openfl::_v2::text::TextFormat _format;
		::openfl::_v2::display::Bitmap _back;
		::openfl::_v2::display::Sprite _fpsRead;
		::openfl::_v2::text::TextField _fpsReadText;
		::openfl::_v2::display::Sprite _fpsInfo;
		::openfl::_v2::text::TextField _fpsInfoText0;
		::openfl::_v2::text::TextField _fpsInfoText1;
		::openfl::_v2::text::TextField _memReadText;
		::com::haxepunk::debug::LayerList _layerList;
		::openfl::_v2::display::Sprite _logRead;
		::openfl::_v2::text::TextField _logReadText0;
		::openfl::_v2::text::TextField _logReadText1;
		int _logHeight;
		::openfl::_v2::geom::Rectangle _logBar;
		::openfl::_v2::geom::Rectangle _logBarGlobal;
		Float _logScroll;
		::openfl::_v2::display::Sprite _entRead;
		::openfl::_v2::text::TextField _entReadText;
		::openfl::_v2::display::Sprite _debRead;
		::openfl::_v2::text::TextField _debReadText0;
		::openfl::_v2::text::TextField _debReadText1;
		::openfl::_v2::display::Sprite _butRead;
		::openfl::_v2::display::Bitmap _butDebug;
		::openfl::_v2::display::Bitmap _butOutput;
		::openfl::_v2::display::Bitmap _butPlay;
		::openfl::_v2::display::Bitmap _butPause;
		::openfl::_v2::display::Bitmap _butStep;
		::openfl::_v2::display::Bitmap _bmpLogo;
		::openfl::_v2::display::Sprite _entScreen;
		::openfl::_v2::display::Sprite _entSelect;
		::openfl::_v2::geom::Rectangle _entRect;
		int _logLines;
		Array< ::String > LOG;
		::haxe::ds::IntMap LAYER_LIST;
		Array< ::Dynamic > ENTITY_LIST;
		Array< ::Dynamic > SCREEN_LIST;
		Array< ::Dynamic > SELECT_LIST;
		Array< ::String > WATCH_LIST;
		static int BIG_WIDTH_THRESHOLD;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_Console */ 
