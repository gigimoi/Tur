#ifndef INCLUDED_com_haxepunk_utils_Touch
#define INCLUDED_com_haxepunk_utils_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Touch)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Touch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Touch_obj OBJ_;
		Touch_obj();
		Void __construct(Float x,Float y,int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Touch_obj > __new(Float x,Float y,int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Touch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Touch"); }

		int id;
		Float x;
		Float y;
		Float startX;
		Float startY;
		Float time;
		virtual Float get_sceneX( );
		Dynamic get_sceneX_dyn();

		virtual Float get_sceneY( );
		Dynamic get_sceneY_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		bool released;
		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Touch */ 
