#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#define INCLUDED_com_haxepunk_tmx_TmxEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxEntity)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxVec4)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef TmxEntity_obj OBJ_;
		TmxEntity_obj();
		Void __construct(::com::haxepunk::tmx::TmxMap mapData);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TmxEntity_obj > __new(::com::haxepunk::tmx::TmxMap mapData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxEntity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TmxEntity"); }

		::com::haxepunk::tmx::TmxMap map;
		bool debugObjectMask;
		virtual Void loadImageLayer( ::String name);
		Dynamic loadImageLayer_dyn();

		virtual Void loadGraphic( ::String tileset,Array< ::String > layerNames,Array< int > skip);
		Dynamic loadGraphic_dyn();

		virtual Array< ::Dynamic > loadMask( ::String collideLayer,::String typeName,Array< int > skip);
		Dynamic loadMask_dyn();

		virtual Void loadSlopedMask( ::String collideLayer,::String typeName,Array< int > skip);
		Dynamic loadSlopedMask_dyn();

		virtual Void loadObjectMask( ::String collideLayer,::String typeName);
		Dynamic loadObjectMask_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxEntity */ 
