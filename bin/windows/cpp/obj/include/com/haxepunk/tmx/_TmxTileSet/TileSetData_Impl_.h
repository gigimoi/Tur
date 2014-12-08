#ifndef INCLUDED_com_haxepunk_tmx__TmxTileSet_TileSetData_Impl_
#define INCLUDED_com_haxepunk_tmx__TmxTileSet_TileSetData_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,tmx,_TmxTileSet,TileSetData_Impl_)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxTileSet{


class HXCPP_CLASS_ATTRIBUTES  TileSetData_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileSetData_Impl__obj OBJ_;
		TileSetData_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileSetData_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileSetData_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TileSetData_Impl_"); }

		static ::haxe::xml::Fast _new( ::haxe::xml::Fast f);
		static Dynamic _new_dyn();

		static ::haxe::xml::Fast toMap( ::haxe::xml::Fast this1);
		static Dynamic toMap_dyn();

		static ::haxe::xml::Fast fromFast( ::haxe::xml::Fast f);
		static Dynamic fromFast_dyn();

		static ::haxe::xml::Fast fromByteArray( ::openfl::_v2::utils::ByteArray ba);
		static Dynamic fromByteArray_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxTileSet

#endif /* INCLUDED_com_haxepunk_tmx__TmxTileSet_TileSetData_Impl_ */ 
