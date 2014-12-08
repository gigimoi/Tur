#ifndef INCLUDED_com_haxepunk_utils_Gesture
#define INCLUDED_com_haxepunk_utils_Gesture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,haxepunk,utils,Gesture)
HX_DECLARE_CLASS3(com,haxepunk,utils,GestureMode)
HX_DECLARE_CLASS3(com,haxepunk,utils,GestureType)
HX_DECLARE_CLASS3(com,haxepunk,utils,Touch)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Gesture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gesture_obj OBJ_;
		Gesture_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Gesture_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gesture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Gesture"); }

		static int TAP;
		static int DOUBLE_TAP;
		static int LONG_PRESS;
		static int MOVE;
		static int PINCH;
		static int TWO_FINGER_TAP;
		static Float longPressTime;
		static Float doubleTapTime;
		static Float deadZone;
		static bool enabled;
		static ::com::haxepunk::utils::GestureMode mode;
		static ::haxe::ds::IntMap gestures;
		static Void enable( );
		static Dynamic enable_dyn();

		static Void disable( );
		static Dynamic disable_dyn();

		static ::com::haxepunk::utils::Touch getTouch( ::haxe::ds::IntMap touches,Array< int > touchOrder,int n);
		static Dynamic getTouch_dyn();

		static bool check( int gestureType);
		static Dynamic check_dyn();

		static bool pressed( int gestureType);
		static Dynamic pressed_dyn();

		static bool released( int gestureType);
		static Dynamic released_dyn();

		static ::com::haxepunk::utils::GestureType get( int gestureType);
		static Dynamic get_dyn();

		static Void start( int gestureType,hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic start_dyn();

		static Void finish( int gestureType);
		static Dynamic finish_dyn();

		static Void finishAll( );
		static Dynamic finishAll_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Float _lastTap;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Gesture */ 
