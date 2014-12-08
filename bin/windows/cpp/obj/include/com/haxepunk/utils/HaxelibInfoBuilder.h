#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfoBuilder
#define INCLUDED_com_haxepunk_utils_HaxelibInfoBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,HaxelibInfoBuilder)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  HaxelibInfoBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HaxelibInfoBuilder_obj OBJ_;
		HaxelibInfoBuilder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HaxelibInfoBuilder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxelibInfoBuilder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HaxelibInfoBuilder"); }

};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_HaxelibInfoBuilder */ 
