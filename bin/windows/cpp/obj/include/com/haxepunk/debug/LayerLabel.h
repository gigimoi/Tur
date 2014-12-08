#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#define INCLUDED_com_haxepunk_debug_LayerLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/debug/VisibleLabel.h>
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerLabel)
HX_DECLARE_CLASS3(com,haxepunk,debug,VisibleLabel)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LayerLabel_obj : public ::com::haxepunk::debug::VisibleLabel_obj{
	public:
		typedef ::com::haxepunk::debug::VisibleLabel_obj super;
		typedef LayerLabel_obj OBJ_;
		LayerLabel_obj();
		Void __construct(int layer,::openfl::_v2::text::TextFormat textFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LayerLabel_obj > __new(int layer,::openfl::_v2::text::TextFormat textFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayerLabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LayerLabel"); }

		int layer;
		virtual int set_count( int value);
		Dynamic set_count_dyn();

		virtual Void onClick( ::openfl::_v2::events::MouseEvent e);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_LayerLabel */ 
