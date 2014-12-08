#ifndef INCLUDED_com_haxepunk_utils_GestureType
#define INCLUDED_com_haxepunk_utils_GestureType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,GestureType)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GestureType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GestureType_obj OBJ_;
		GestureType_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GestureType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GestureType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GestureType"); }

		Float x;
		Float y;
		Float x2;
		Float y2;
		Float magnitude;
		Float time;
		bool active;
		bool pressed;
		bool released;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void start( hx::Null< Float >  x,hx::Null< Float >  y);
		Dynamic start_dyn();

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

		virtual Float get_velocity( );
		Dynamic get_velocity_dyn();

		virtual int get_angle( );
		Dynamic get_angle_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_GestureType */ 
