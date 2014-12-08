#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObject
#include <com/haxepunk/tmx/TmxObject.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#include <com/haxepunk/tmx/TmxObjectGroup.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxObjectGroup_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxObjectGroup","new",0xd47757fb,"com.haxepunk.tmx.TmxObjectGroup.new","com/haxepunk/tmx/TmxObjectGroup.hx",23,0xb5da2ad4)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	::com::haxepunk::tmx::TmxPropertySet _g = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->properties = _g;
	HX_STACK_LINE(25)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	this->objects = _g1;
	HX_STACK_LINE(27)
	this->map = parent;
	HX_STACK_LINE(28)
	::String _g2 = source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(28)
	this->name = _g2;
	HX_STACK_LINE(29)
	int _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(29)
	if ((source->has->resolve(HX_CSTRING("x")))){
		HX_STACK_LINE(29)
		::String _g3 = source->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(29)
		_g4 = ::Std_obj::parseInt(_g3);
	}
	else{
		HX_STACK_LINE(29)
		_g4 = (int)0;
	}
	HX_STACK_LINE(29)
	this->x = _g4;
	HX_STACK_LINE(30)
	int _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(30)
	if ((source->has->resolve(HX_CSTRING("y")))){
		HX_STACK_LINE(30)
		::String _g5 = source->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(30)
		_g6 = ::Std_obj::parseInt(_g5);
	}
	else{
		HX_STACK_LINE(30)
		_g6 = (int)0;
	}
	HX_STACK_LINE(30)
	this->y = _g6;
	HX_STACK_LINE(31)
	::String _g7 = source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(31)
	Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(31)
	this->width = _g8;
	HX_STACK_LINE(32)
	::String _g9 = source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(32)
	Dynamic _g10 = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(32)
	this->height = _g10;
	HX_STACK_LINE(33)
	bool _g12;		HX_STACK_VAR(_g12,"_g12");
	struct _Function_1_1{
		inline static bool Block( ::haxe::xml::Fast &source){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxObjectGroup.hx",33,0xb5da2ad4)
			{
				HX_STACK_LINE(33)
				::String _g11 = source->att->resolve(HX_CSTRING("visible"));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(33)
				return (_g11 == HX_CSTRING("1"));
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	if (((  ((source->has->resolve(HX_CSTRING("visible")))) ? bool(_Function_1_1::Block(source)) : bool(false) ))){
		HX_STACK_LINE(33)
		_g12 = true;
	}
	else{
		HX_STACK_LINE(33)
		_g12 = false;
	}
	HX_STACK_LINE(33)
	this->visible = _g12;
	HX_STACK_LINE(34)
	Float _g14;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(34)
	if ((source->has->resolve(HX_CSTRING("opacity")))){
		HX_STACK_LINE(34)
		::String _g13 = source->att->resolve(HX_CSTRING("opacity"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(34)
		_g14 = ::Std_obj::parseFloat(_g13);
	}
	else{
		HX_STACK_LINE(34)
		_g14 = (int)0;
	}
	HX_STACK_LINE(34)
	this->opacity = _g14;
	HX_STACK_LINE(37)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(38)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(42)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("object"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(43)
			::com::haxepunk::tmx::TmxObject _g15 = ::com::haxepunk::tmx::TmxObject_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(43)
			this->objects->push(_g15);
		}
;
	}
}
;
	return null();
}

//TmxObjectGroup_obj::~TmxObjectGroup_obj() { }

Dynamic TmxObjectGroup_obj::__CreateEmpty() { return  new TmxObjectGroup_obj; }
hx::ObjectPtr< TmxObjectGroup_obj > TmxObjectGroup_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{  hx::ObjectPtr< TmxObjectGroup_obj > result = new TmxObjectGroup_obj();
	result->__construct(source,parent);
	return result;}

Dynamic TmxObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxObjectGroup_obj > result = new TmxObjectGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TmxObjectGroup_obj::TmxObjectGroup_obj()
{
}

void TmxObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxObjectGroup);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void TmxObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic TmxObjectGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::com::haxepunk::tmx::TmxMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("objects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxObjectGroup_obj,map),HX_CSTRING("map")},
	{hx::fsString,(int)offsetof(TmxObjectGroup_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(TmxObjectGroup_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(TmxObjectGroup_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObjectGroup_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxObjectGroup_obj,objects),HX_CSTRING("objects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("properties"),
	HX_CSTRING("objects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxObjectGroup_obj::__mClass,"__mClass");
};

#endif

Class TmxObjectGroup_obj::__mClass;

void TmxObjectGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxObjectGroup"), hx::TCanCast< TmxObjectGroup_obj> ,sStaticFields,sMemberFields,
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

void TmxObjectGroup_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
