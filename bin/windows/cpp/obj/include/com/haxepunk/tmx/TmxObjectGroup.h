#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#define INCLUDED_com_haxepunk_tmx_TmxObjectGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxObject)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxObjectGroup)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxObjectGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxObjectGroup_obj OBJ_;
		TmxObjectGroup_obj();
		Void __construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TmxObjectGroup_obj > __new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxObjectGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TmxObjectGroup"); }

		::com::haxepunk::tmx::TmxMap map;
		::String name;
		int x;
		int y;
		int width;
		int height;
		Float opacity;
		bool visible;
		::com::haxepunk::tmx::TmxPropertySet properties;
		Array< ::Dynamic > objects;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxObjectGroup */ 
