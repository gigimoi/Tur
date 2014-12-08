#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void VisibleLabel_obj::__construct(::openfl::_v2::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","new",0x1533a188,"com.haxepunk.debug.VisibleLabel.new","com/haxepunk/debug/LayerList.hx",17,0x85ba6a24)
HX_STACK_THIS(this)
HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(47)
	this->display = true;
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("graphics/debug/console_visible.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	this->active = _g1;
	HX_STACK_LINE(25)
	::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("graphics/debug/console_hidden.png"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	::openfl::_v2::display::Bitmap _g3 = ::openfl::_v2::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(25)
	this->inactive = _g3;
	HX_STACK_LINE(27)
	::openfl::_v2::text::TextField _g4 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(27)
	this->label = _g4;
	HX_STACK_LINE(28)
	this->label->set_defaultTextFormat(textFormat);
	HX_STACK_LINE(29)
	this->label->set_selectable(false);
	HX_STACK_LINE(30)
	this->label->set_width((int)150);
	HX_STACK_LINE(31)
	this->label->set_height((int)14);
	HX_STACK_LINE(33)
	this->label->set_x((int)24);
	HX_STACK_LINE(34)
	this->label->set_y((int)2);
	HX_STACK_LINE(39)
	this->set_x((int)6);
	HX_STACK_LINE(41)
	this->addChild(this->active);
	HX_STACK_LINE(42)
	this->addChild(this->label);
	HX_STACK_LINE(44)
	this->addEventListener(HX_CSTRING("click"),this->onClick_dyn(),true,null(),null());
}
;
	return null();
}

//VisibleLabel_obj::~VisibleLabel_obj() { }

Dynamic VisibleLabel_obj::__CreateEmpty() { return  new VisibleLabel_obj; }
hx::ObjectPtr< VisibleLabel_obj > VisibleLabel_obj::__new(::openfl::_v2::text::TextFormat textFormat)
{  hx::ObjectPtr< VisibleLabel_obj > result = new VisibleLabel_obj();
	result->__construct(textFormat);
	return result;}

Dynamic VisibleLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VisibleLabel_obj > result = new VisibleLabel_obj();
	result->__construct(inArgs[0]);
	return result;}

bool VisibleLabel_obj::set_display( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","set_display",0xe402ca8d,"com.haxepunk.debug.VisibleLabel.set_display","com/haxepunk/debug/LayerList.hx",49,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(50)
	if (((value != this->display))){
		HX_STACK_LINE(52)
		this->display = value;
		HX_STACK_LINE(53)
		if ((value)){
			HX_STACK_LINE(55)
			this->removeChild(this->inactive);
			HX_STACK_LINE(56)
			this->addChild(this->active);
		}
		else{
			HX_STACK_LINE(60)
			this->removeChild(this->active);
			HX_STACK_LINE(61)
			this->addChild(this->inactive);
		}
	}
	HX_STACK_LINE(64)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VisibleLabel_obj,set_display,return )

Void VisibleLabel_obj::onClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","onClick",0x163f9fd1,"com.haxepunk.debug.VisibleLabel.onClick","com/haxepunk/debug/LayerList.hx",69,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(69)
		this->set_display(!(this->display));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VisibleLabel_obj,onClick,(void))


VisibleLabel_obj::VisibleLabel_obj()
{
}

void VisibleLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VisibleLabel);
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(inactive,"inactive");
	HX_MARK_MEMBER_NAME(label,"label");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VisibleLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(inactive,"inactive");
	HX_VISIT_MEMBER_NAME(label,"label");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VisibleLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { return inactive; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_display") ) { return set_display_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VisibleLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { if (inCallProp) return set_display(inValue);display=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { inactive=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VisibleLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("display"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("inactive"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VisibleLabel_obj,display),HX_CSTRING("display")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(VisibleLabel_obj,active),HX_CSTRING("active")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(VisibleLabel_obj,inactive),HX_CSTRING("inactive")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(VisibleLabel_obj,label),HX_CSTRING("label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("display"),
	HX_CSTRING("set_display"),
	HX_CSTRING("onClick"),
	HX_CSTRING("active"),
	HX_CSTRING("inactive"),
	HX_CSTRING("label"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VisibleLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VisibleLabel_obj::__mClass,"__mClass");
};

#endif

Class VisibleLabel_obj::__mClass;

void VisibleLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.VisibleLabel"), hx::TCanCast< VisibleLabel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void VisibleLabel_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
