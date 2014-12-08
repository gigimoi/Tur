#ifndef INCLUDED_com_haxepunk_HXP
#define INCLUDED_com_haxepunk_HXP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,HXP)
HX_DECLARE_CLASS2(com,haxepunk,RenderMode)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Screen)
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,Alarm)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,display,Stage)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  HXP_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HXP_obj OBJ_;
		HXP_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HXP_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HXP_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HXP"); }

		static ::String VERSION;
		static Float get_NUMBER_MAX_VALUE( );
		static Dynamic get_NUMBER_MAX_VALUE_dyn();

		static int INT_MIN_VALUE;
		static int INT_MAX_VALUE;
		static int blackColor;
		static int width;
		static int height;
		static int windowWidth;
		static int windowHeight;
		static bool fixed;
		static Float frameRate;
		static Float assignedFrameRate;
		static Float elapsed;
		static Float rate;
		static ::com::haxepunk::Screen screen;
		static ::openfl::_v2::display::BitmapData buffer;
		static ::openfl::_v2::geom::Rectangle bounds;
		static ::String defaultFont;
		static ::openfl::_v2::geom::Point camera;
		static ::com::haxepunk::Tweener tweener;
		static bool focused;
		static Float halfWidth;
		static Float halfHeight;
		static Array< int > orientations;
		static ::com::haxepunk::RenderMode renderMode;
		static ::com::haxepunk::RenderMode set_renderMode( ::com::haxepunk::RenderMode value);
		static Dynamic set_renderMode_dyn();

		static Dynamic choose;
		static ::com::haxepunk::Scene get_world( );
		static Dynamic get_world_dyn();

		static ::com::haxepunk::Scene set_world( ::com::haxepunk::Scene value);
		static Dynamic set_world_dyn();

		static ::com::haxepunk::Scene get_scene( );
		static Dynamic get_scene_dyn();

		static ::com::haxepunk::Scene set_scene( ::com::haxepunk::Scene value);
		static Dynamic set_scene_dyn();

		static Void resize( int width,int height);
		static Dynamic resize_dyn();

		static Void clear( Dynamic array);
		static Dynamic clear_dyn();

		static Void setCamera( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic setCamera_dyn();

		static Void resetCamera( );
		static Dynamic resetCamera_dyn();

		static bool get_fullscreen( );
		static Dynamic get_fullscreen_dyn();

		static bool set_fullscreen( bool value);
		static Dynamic set_fullscreen_dyn();

		static Float get_volume( );
		static Dynamic get_volume_dyn();

		static Float set_volume( Float value);
		static Dynamic set_volume_dyn();

		static Float get_pan( );
		static Dynamic get_pan_dyn();

		static Float set_pan( Float value);
		static Dynamic set_pan_dyn();

		static int sign( Float value);
		static Dynamic sign_dyn();

		static Float approach( Float value,Float target,Float amount);
		static Dynamic approach_dyn();

		static Float lerp( Float a,Float b,hx::Null< Float >  t);
		static Dynamic lerp_dyn();

		static int colorLerp( int fromColor,int toColor,hx::Null< Float >  t);
		static Dynamic colorLerp_dyn();

		static Void stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  distance);
		static Dynamic stepTowards_dyn();

		static Void anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  distance);
		static Dynamic anchorTo_dyn();

		static Float angle( Float x1,Float y1,Float x2,Float y2);
		static Dynamic angle_dyn();

		static Void angleXY( Dynamic object,Float angle,hx::Null< Float >  length,hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic angleXY_dyn();

		static Float angleDifference( Float angle1,Float angle2);
		static Dynamic angleDifference_dyn();

		static Void rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  angle,hx::Null< bool >  relative);
		static Dynamic rotateAround_dyn();

		static Float round( Float num,int precision);
		static Dynamic round_dyn();

		static Float distance( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distance_dyn();

		static Float distanceSquared( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distanceSquared_dyn();

		static Float distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static Dynamic distanceRects_dyn();

		static Float distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh);
		static Dynamic distanceRectPoint_dyn();

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

		static Void clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  padding);
		static Dynamic clampInRect_dyn();

		static Float scale( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scale_dyn();

		static Float scaleClamp( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scaleClamp_dyn();

		static int randomSeed;
		static int set_randomSeed( int value);
		static Dynamic set_randomSeed_dyn();

		static Void randomizeSeed( );
		static Dynamic randomizeSeed_dyn();

		static Float random;
		static Float get_random( );
		static Dynamic get_random_dyn();

		static int rand( int amount);
		static Dynamic rand_dyn();

		static int indexOf( Dynamic arr,Dynamic v);
		static Dynamic indexOf_dyn();

		static Dynamic next( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic next_dyn();

		static Dynamic prev( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic prev_dyn();

		static Dynamic swap( Dynamic current,Dynamic a,Dynamic b);
		static Dynamic swap_dyn();

		static Void insertSortedKey( Dynamic list,Dynamic key,Dynamic compare);
		static Dynamic insertSortedKey_dyn();

		static int getColorRGB( hx::Null< int >  R,hx::Null< int >  G,hx::Null< int >  B);
		static Dynamic getColorRGB_dyn();

		static int getColorHSV( Float h,Float s,Float v);
		static Dynamic getColorHSV_dyn();

		static Float getColorHue( int color);
		static Dynamic getColorHue_dyn();

		static Float getColorSaturation( int color);
		static Dynamic getColorSaturation_dyn();

		static Float getColorValue( int color);
		static Dynamic getColorValue_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

		static ::openfl::_v2::display::BitmapData getBitmap( ::String name);
		static Dynamic getBitmap_dyn();

		static Void overwriteBitmapCache( ::String name,::openfl::_v2::display::BitmapData data);
		static Dynamic overwriteBitmapCache_dyn();

		static bool removeBitmap( ::String name);
		static Dynamic removeBitmap_dyn();

		static ::openfl::_v2::display::BitmapData createBitmap( int width,int height,Dynamic transparent,Dynamic color);
		static Dynamic createBitmap_dyn();

		static Float timeFlag( );
		static Dynamic timeFlag_dyn();

		static ::com::haxepunk::debug::Console get_console( );
		static Dynamic get_console_dyn();

		static bool consoleEnabled( );
		static Dynamic consoleEnabled_dyn();

		static Dynamic log;
		static Dynamic watch;
		static ::com::haxepunk::tweens::misc::MultiVarTween tween( Dynamic object,Dynamic values,Float duration,Dynamic options);
		static Dynamic tween_dyn();

		static ::com::haxepunk::tweens::misc::Alarm alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener);
		static Dynamic alarm_dyn();

		static Array< int > frames( int from,int to,hx::Null< int >  skip);
		static Dynamic frames_dyn();

		static Void shuffle( Dynamic a);
		static Dynamic shuffle_dyn();

		static Void resizeStage( int width,int height);
		static Dynamic resizeStage_dyn();

		static Float time;
		static Float set_time( Float value);
		static Dynamic set_time_dyn();

		static ::com::haxepunk::debug::Console _console;
		static Float _time;
		static Float _updateTime;
		static Float _renderTime;
		static Float _gameTime;
		static Float _systemTime;
		static ::haxe::ds::StringMap _bitmap;
		static int _seed;
		static Float _volume;
		static Float _pan;
		static ::openfl::media::SoundTransform _soundTransform;
		static Float get_DEG( );
		static Dynamic get_DEG_dyn();

		static Float get_RAD( );
		static Dynamic get_RAD_dyn();

		static ::openfl::_v2::display::Stage stage;
		static ::com::haxepunk::Engine engine;
		static ::openfl::_v2::geom::Point point;
		static ::openfl::_v2::geom::Point point2;
		static ::openfl::_v2::geom::Point zero;
		static ::openfl::_v2::geom::Rectangle rect;
		static ::openfl::_v2::geom::Matrix matrix;
		static ::openfl::_v2::display::Sprite sprite;
		static ::com::haxepunk::Entity entity;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_HXP */ 
