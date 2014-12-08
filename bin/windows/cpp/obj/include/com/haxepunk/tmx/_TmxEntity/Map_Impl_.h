#ifndef INCLUDED_com_haxepunk_tmx__TmxEntity_Map_Impl_
#define INCLUDED_com_haxepunk_tmx__TmxEntity_Map_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS4(com,haxepunk,tmx,_TmxEntity,Map_Impl_)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxEntity{


class HXCPP_CLASS_ATTRIBUTES  Map_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Map_Impl__obj OBJ_;
		Map_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Map_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Map_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Map_Impl_"); }

		static ::com::haxepunk::tmx::TmxMap _new( ::com::haxepunk::tmx::TmxMap map);
		static Dynamic _new_dyn();

		static ::com::haxepunk::tmx::TmxMap toMap( ::com::haxepunk::tmx::TmxMap this1);
		static Dynamic toMap_dyn();

		static ::com::haxepunk::tmx::TmxMap fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::com::haxepunk::tmx::TmxMap fromTmxMap( ::com::haxepunk::tmx::TmxMap map);
		static Dynamic fromTmxMap_dyn();

		static ::com::haxepunk::tmx::TmxMap fromMapData( ::haxe::xml::Fast mapData);
		static Dynamic fromMapData_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
} // end namespace _TmxEntity

#endif /* INCLUDED_com_haxepunk_tmx__TmxEntity_Map_Impl_ */ 
