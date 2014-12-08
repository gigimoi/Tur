#ifndef INCLUDED_com_haxepunk_Engine
#define INCLUDED_com_haxepunk_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,RenderMode)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Engine_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Engine"); }

		bool paused;
		Float maxElapsed;
		int maxFrameSkip;
		int tickRate;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void focusGained( );
		Dynamic focusGained_dyn();

		virtual Void focusLost( );
		Dynamic focusLost_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void setStageProperties( );
		Dynamic setStageProperties_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void onStage( ::openfl::_v2::events::Event e);
		Dynamic onStage_dyn();

		virtual Void onEnterFrame( ::openfl::_v2::events::Event e);
		Dynamic onEnterFrame_dyn();

		virtual Void onTimer( );
		Dynamic onTimer_dyn();

		virtual Void checkScene( );
		Dynamic checkScene_dyn();

		virtual Void pushScene( ::com::haxepunk::Scene value);
		Dynamic pushScene_dyn();

		virtual ::com::haxepunk::Scene popScene( );
		Dynamic popScene_dyn();

		virtual ::com::haxepunk::Scene get_scene( );
		Dynamic get_scene_dyn();

		virtual ::com::haxepunk::Scene set_scene( ::com::haxepunk::Scene value);
		Dynamic set_scene_dyn();

		::com::haxepunk::Scene _scene;
		::List _scenes;
		Float _delta;
		Float _time;
		Float _last;
		::haxe::Timer _timer;
		Float _rate;
		Float _skip;
		Float _prev;
		Float _updateTime;
		Float _renderTime;
		Float _gameTime;
		Float _systemTime;
		Float _frameLast;
		int _frameListSum;
		Array< int > _frameList;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Engine */ 
