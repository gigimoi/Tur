#ifndef INCLUDED_com_haxepunk_utils_PS3_GAMEPAD
#define INCLUDED_com_haxepunk_utils_PS3_GAMEPAD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,PS3_GAMEPAD)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PS3_GAMEPAD_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PS3_GAMEPAD_obj OBJ_;
		PS3_GAMEPAD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PS3_GAMEPAD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PS3_GAMEPAD_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PS3_GAMEPAD"); }

		static int TRIANGLE_BUTTON;
		static int CIRCLE_BUTTON;
		static int X_BUTTON;
		static int SQUARE_BUTTON;
		static int L1_BUTTON;
		static int R1_BUTTON;
		static int L2_BUTTON;
		static int R2_BUTTON;
		static int SELECT_BUTTON;
		static int START_BUTTON;
		static int PS_BUTTON;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int TRIANGLE_BUTTON_PRESSURE;
		static int CIRCLE_BUTTON_PRESSURE;
		static int X_BUTTON_PRESSURE;
		static int SQUARE_BUTTON_PRESSURE;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_PS3_GAMEPAD */ 
