#ifndef INCLUDED_com_haxepunk_utils_Joystick
#define INCLUDED_com_haxepunk_utils_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,haxepunk,utils,Joystick)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Joystick_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Joystick_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Joystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Joystick"); }

		::haxe::ds::IntMap buttons;
		Array< Float > axis;
		::openfl::_v2::geom::Point hat;
		::openfl::_v2::geom::Point ball;
		virtual Void update( );
		Dynamic update_dyn();

		virtual bool pressed( Dynamic button);
		Dynamic pressed_dyn();

		virtual bool released( Dynamic button);
		Dynamic released_dyn();

		virtual bool check( Dynamic button);
		Dynamic check_dyn();

		virtual Float getAxis( int a);
		Dynamic getAxis_dyn();

		virtual bool get_connected( );
		Dynamic get_connected_dyn();

		virtual bool set_connected( bool value);
		Dynamic set_connected_dyn();

		Float _timeout;
		static Float deadZone;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Joystick */ 
