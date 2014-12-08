#ifndef INCLUDED_com_haxepunk_tmx__TmxMap_MapData_Impl_
#define INCLUDED_com_haxepunk_tmx__TmxMap_MapData_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(com,haxepunk,tmx,_TmxMap,MapData_Impl_)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxMap{


class HXCPP_CLASS_ATTRIBUTES  MapData_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapData_Impl__obj OBJ_;
		MapData_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MapData_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapData_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MapData_Impl_"); }

		static ::haxe::xml::Fast _new( ::haxe::xml::Fast f);
		static Dynamic _new_dyn();

		static ::haxe::xml::Fast toMap( ::haxe::xml::Fast this1);
		static Dynamic toMap_dyn();

		static ::haxe::xml::Fast fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::haxe::xml::Fast fromXml( ::Xml xml);
		static Dynamic fromXml_dyn();

		static ::haxe::xml::Fast fromByteArray( ::openfl::_v2::utils::ByteArray ba);
		static Dynamic fromByteArray_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxMap

#endif /* INCLUDED_com_haxepunk_tmx__TmxMap_MapData_Impl_ */ 
