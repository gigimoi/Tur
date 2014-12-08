#ifndef INCLUDED_com_haxepunk_graphics_atlas__AtlasData_AtlasDataType_Impl_
#define INCLUDED_com_haxepunk_graphics_atlas__AtlasData_AtlasDataType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS5(com,haxepunk,graphics,atlas,_AtlasData,AtlasDataType_Impl_)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{
namespace _AtlasData{


class HXCPP_CLASS_ATTRIBUTES  AtlasDataType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasDataType_Impl__obj OBJ_;
		AtlasDataType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AtlasDataType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AtlasDataType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AtlasDataType_Impl_"); }

		static ::com::haxepunk::graphics::atlas::AtlasData _new( ::com::haxepunk::graphics::atlas::AtlasData data);
		static Dynamic _new_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData toAtlasData( ::com::haxepunk::graphics::atlas::AtlasData this1);
		static Dynamic toAtlasData_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData fromBitmapData( ::openfl::_v2::display::BitmapData bd);
		static Dynamic fromBitmapData_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData fromAtlasData( ::com::haxepunk::graphics::atlas::AtlasData data);
		static Dynamic fromAtlasData_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasData

#endif /* INCLUDED_com_haxepunk_graphics_atlas__AtlasData_AtlasDataType_Impl_ */ 
