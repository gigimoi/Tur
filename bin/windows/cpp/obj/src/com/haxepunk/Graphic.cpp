#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Graphic_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Graphic","new",0x2bf53001,"com.haxepunk.Graphic.new","com/haxepunk/Graphic.hx",132,0xd2cb9a6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(133)
	this->active = false;
	HX_STACK_LINE(134)
	this->_visible = true;
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		Float value = this->y = (int)0;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(135)
		this->x = value;
	}
	HX_STACK_LINE(136)
	Float _g = this->scrollY = (int)1;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	this->scrollX = _g;
	HX_STACK_LINE(137)
	this->relative = true;
	HX_STACK_LINE(138)
	this->_scroll = true;
	HX_STACK_LINE(139)
	::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(139)
	this->_point = _g1;
}
;
	return null();
}

//Graphic_obj::~Graphic_obj() { }

Dynamic Graphic_obj::__CreateEmpty() { return  new Graphic_obj; }
hx::ObjectPtr< Graphic_obj > Graphic_obj::__new()
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

Dynamic Graphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

bool Graphic_obj::get_visible( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_visible",0x9d8a412a,"com.haxepunk.Graphic.get_visible","com/haxepunk/Graphic.hx",86,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return this->_visible;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_visible,return )

bool Graphic_obj::set_visible( bool value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_visible",0xa7f74836,"com.haxepunk.Graphic.set_visible","com/haxepunk/Graphic.hx",87,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(87)
	return this->_visible = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_visible,return )

Float Graphic_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_x",0xefd1ef30,"com.haxepunk.Graphic.get_x","com/haxepunk/Graphic.hx",93,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_x,return )

Float Graphic_obj::set_x( Float value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_x",0xd8a0e53c,"com.haxepunk.Graphic.set_x","com/haxepunk/Graphic.hx",94,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	return this->x = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_x,return )

Float Graphic_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_y",0xefd1ef31,"com.haxepunk.Graphic.get_y","com/haxepunk/Graphic.hx",100,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_y,return )

Float Graphic_obj::set_y( Float value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_y",0xd8a0e53d,"com.haxepunk.Graphic.set_y","com/haxepunk/Graphic.hx",101,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	return this->y = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_y,return )

Void Graphic_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","update",0xcbb4e108,"com.haxepunk.Graphic.update","com/haxepunk/Graphic.hx",147,0xd2cb9a6f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,update,(void))

Void Graphic_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","destroy",0xf946711b,"com.haxepunk.Graphic.destroy","com/haxepunk/Graphic.hx",154,0xd2cb9a6f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,destroy,(void))

Void Graphic_obj::render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","render",0x49d8c655,"com.haxepunk.Graphic.render","com/haxepunk/Graphic.hx",163,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,render,(void))

Void Graphic_obj::renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","renderAtlas",0x66f9e2b6,"com.haxepunk.Graphic.renderAtlas","com/haxepunk/Graphic.hx",172,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,renderAtlas,(void))

Void Graphic_obj::pause( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","pause",0x1bc920d7,"com.haxepunk.Graphic.pause","com/haxepunk/Graphic.hx",179,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,pause,(void))

Void Graphic_obj::resume( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","resume",0x4d33c4ac,"com.haxepunk.Graphic.resume","com/haxepunk/Graphic.hx",187,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,resume,(void))


Graphic_obj::Graphic_obj()
{
}

void Graphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphic);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scrollX,"scrollX");
	HX_MARK_MEMBER_NAME(scrollY,"scrollY");
	HX_MARK_MEMBER_NAME(relative,"relative");
	HX_MARK_MEMBER_NAME(blit,"blit");
	HX_MARK_MEMBER_NAME(_scroll,"_scroll");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_entity,"_entity");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_END_CLASS();
}

void Graphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scrollX,"scrollX");
	HX_VISIT_MEMBER_NAME(scrollY,"scrollY");
	HX_VISIT_MEMBER_NAME(relative,"relative");
	HX_VISIT_MEMBER_NAME(blit,"blit");
	HX_VISIT_MEMBER_NAME(_scroll,"_scroll");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_entity,"_entity");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
}

Dynamic Graphic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"scrollX") ) { return scrollX; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { return scrollY; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_scroll") ) { return _scroll; }
		if (HX_FIELD_EQ(inName,"_entity") ) { return _entity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { return relative; }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { blit=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"scrollX") ) { scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { scrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { _scroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entity") ) { _entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { relative=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("scrollX"));
	outFields->push(HX_CSTRING("scrollY"));
	outFields->push(HX_CSTRING("relative"));
	outFields->push(HX_CSTRING("blit"));
	outFields->push(HX_CSTRING("_scroll"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_entity"));
	outFields->push(HX_CSTRING("_visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Graphic_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,scrollX),HX_CSTRING("scrollX")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,scrollY),HX_CSTRING("scrollY")},
	{hx::fsBool,(int)offsetof(Graphic_obj,relative),HX_CSTRING("relative")},
	{hx::fsBool,(int)offsetof(Graphic_obj,blit),HX_CSTRING("blit")},
	{hx::fsBool,(int)offsetof(Graphic_obj,_scroll),HX_CSTRING("_scroll")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Graphic_obj,_point),HX_CSTRING("_point")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Graphic_obj,_entity),HX_CSTRING("_entity")},
	{hx::fsBool,(int)offsetof(Graphic_obj,_visible),HX_CSTRING("_visible")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("scrollX"),
	HX_CSTRING("scrollY"),
	HX_CSTRING("relative"),
	HX_CSTRING("blit"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("render"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("_scroll"),
	HX_CSTRING("_point"),
	HX_CSTRING("_entity"),
	HX_CSTRING("_visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

#endif

Class Graphic_obj::__mClass;

void Graphic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Graphic"), hx::TCanCast< Graphic_obj> ,sStaticFields,sMemberFields,
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

void Graphic_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
