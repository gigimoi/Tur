#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#define INCLUDED_com_haxepunk_tweens_TweenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/Event.h>
HX_DECLARE_CLASS3(com,haxepunk,tweens,TweenEvent)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
namespace com{
namespace haxepunk{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  TweenEvent_obj : public ::openfl::_v2::events::Event_obj{
	public:
		typedef ::openfl::_v2::events::Event_obj super;
		typedef TweenEvent_obj OBJ_;
		TweenEvent_obj();
		Void __construct(::String type,Dynamic bubbles,Dynamic cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TweenEvent_obj > __new(::String type,Dynamic bubbles,Dynamic cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TweenEvent"); }

		static ::String START;
		static ::String UPDATE;
		static ::String FINISH;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens

#endif /* INCLUDED_com_haxepunk_tweens_TweenEvent */ 
