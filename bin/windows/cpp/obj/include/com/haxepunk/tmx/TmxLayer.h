#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#define INCLUDED_com_haxepunk_tmx_TmxLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxLayer)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxTileSet)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxLayer_obj OBJ_;
		TmxLayer_obj();
		Void __construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TmxLayer_obj > __new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TmxLayer"); }

		::com::haxepunk::tmx::TmxMap map;
		::String name;
		int x;
		int y;
		int width;
		int height;
		Float opacity;
		bool visible;
		Array< ::Dynamic > tileGIDs;
		::com::haxepunk::tmx::TmxPropertySet properties;
		virtual ::String toCsv( ::com::haxepunk::tmx::TmxTileSet tileSet);
		Dynamic toCsv_dyn();

		static Array< ::Dynamic > csvToArray( ::String input);
		static Dynamic csvToArray_dyn();

		static Array< ::Dynamic > base64ToArray( ::String chunk,int lineWidth,bool compressed);
		static Dynamic base64ToArray_dyn();

		static ::String BASE64_CHARS;
		static ::openfl::_v2::utils::ByteArray base64ToByteArray( ::String data);
		static Dynamic base64ToByteArray_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxLayer */ 
