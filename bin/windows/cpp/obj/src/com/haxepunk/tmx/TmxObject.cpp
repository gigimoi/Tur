#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
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
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxObject_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxObject","new",0x50e660c8,"com.haxepunk.tmx.TmxObject.new","com/haxepunk/tmx/TmxObject.hx",29,0x3a748509)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(30)
	this->group = parent;
	HX_STACK_LINE(31)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	if ((source->has->resolve(HX_CSTRING("name")))){
		HX_STACK_LINE(31)
		_g = source->att->resolve(HX_CSTRING("name"));
	}
	else{
		HX_STACK_LINE(31)
		_g = HX_CSTRING("[object]");
	}
	HX_STACK_LINE(31)
	this->name = _g;
	HX_STACK_LINE(32)
	::String _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	if ((source->has->resolve(HX_CSTRING("type")))){
		HX_STACK_LINE(32)
		_g1 = source->att->resolve(HX_CSTRING("type"));
	}
	else{
		HX_STACK_LINE(32)
		_g1 = HX_CSTRING("");
	}
	HX_STACK_LINE(32)
	this->type = _g1;
	HX_STACK_LINE(33)
	::String _g2 = source->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(33)
	this->x = _g3;
	HX_STACK_LINE(34)
	::String _g4 = source->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(34)
	Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(34)
	this->y = _g5;
	HX_STACK_LINE(35)
	int _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(35)
	if ((source->has->resolve(HX_CSTRING("width")))){
		HX_STACK_LINE(35)
		::String _g6 = source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(35)
		_g7 = ::Std_obj::parseInt(_g6);
	}
	else{
		HX_STACK_LINE(35)
		_g7 = (int)0;
	}
	HX_STACK_LINE(35)
	this->width = _g7;
	HX_STACK_LINE(36)
	int _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(36)
	if ((source->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(36)
		::String _g8 = source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(36)
		_g9 = ::Std_obj::parseInt(_g8);
	}
	else{
		HX_STACK_LINE(36)
		_g9 = (int)0;
	}
	HX_STACK_LINE(36)
	this->height = _g9;
	HX_STACK_LINE(38)
	this->shared = null();
	HX_STACK_LINE(39)
	this->gid = (int)-1;
	HX_STACK_LINE(40)
	if (((  ((source->has->resolve(HX_CSTRING("gid")))) ? bool((source->att->resolve(HX_CSTRING("gid")).length != (int)0)) : bool(false) ))){
		HX_STACK_LINE(42)
		::String _g10 = source->att->resolve(HX_CSTRING("gid"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(42)
		Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(42)
		this->gid = _g11;
		HX_STACK_LINE(43)
		::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(44)
			Array< ::Dynamic > _g12 = this->group->map->tilesets;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				if ((!(((_g6 < _g12->length))))){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::com::haxepunk::tmx::TmxTileSet set1 = _g12->__get(_g6).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(set1,"set1");
				HX_STACK_LINE(44)
				++(_g6);
				HX_STACK_LINE(46)
				::com::haxepunk::tmx::TmxPropertySet _g121 = set1->getPropertiesByGid(this->gid);		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(46)
				this->shared = _g121;
				HX_STACK_LINE(47)
				if (((this->shared != null()))){
					HX_STACK_LINE(48)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(53)
	::Xml node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(54)
	::com::haxepunk::tmx::TmxPropertySet _g13 = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(54)
	this->custom = _g13;
	HX_STACK_LINE(55)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->custom->extend(node1);
	}
	HX_STACK_LINE(59)
	if ((source->hasNode->resolve(HX_CSTRING("ellipse")))){
		HX_STACK_LINE(60)
		int radius = ::Std_obj::_int((Float(((  (((this->width < this->height))) ? int(this->width) : int(this->height) ))) / Float((int)2)));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(61)
		::com::haxepunk::masks::Circle _g14 = ::com::haxepunk::masks::Circle_obj::__new(radius,this->x,this->y);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(61)
		this->shapeMask = _g14;
		HX_STACK_LINE(64)
		::com::haxepunk::graphics::Image _g15 = ::com::haxepunk::graphics::Image_obj::createCircle(radius,(int)16711680,.6);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(64)
		this->debug_graphic = _g15;
		HX_STACK_LINE(65)
		this->debug_graphic->x = this->x;
		HX_STACK_LINE(66)
		this->debug_graphic->y = this->y;
	}
	else{
		HX_STACK_LINE(69)
		::com::haxepunk::masks::Hitbox _g16 = ::com::haxepunk::masks::Hitbox_obj::__new(this->width,this->height,this->x,this->y);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(69)
		this->shapeMask = _g16;
		HX_STACK_LINE(72)
		::com::haxepunk::graphics::Image _g17 = ::com::haxepunk::graphics::Image_obj::createRect(this->width,this->height,(int)16711680,.6);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(72)
		this->debug_graphic = _g17;
		HX_STACK_LINE(73)
		this->debug_graphic->x = this->x;
		HX_STACK_LINE(74)
		this->debug_graphic->y = this->y;
	}
}
;
	return null();
}

//TmxObject_obj::~TmxObject_obj() { }

Dynamic TmxObject_obj::__CreateEmpty() { return  new TmxObject_obj; }
hx::ObjectPtr< TmxObject_obj > TmxObject_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent)
{  hx::ObjectPtr< TmxObject_obj > result = new TmxObject_obj();
	result->__construct(source,parent);
	return result;}

Dynamic TmxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxObject_obj > result = new TmxObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TmxObject_obj::TmxObject_obj()
{
}

void TmxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxObject);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(shapeMask,"shapeMask");
	HX_MARK_MEMBER_NAME(debug_graphic,"debug_graphic");
	HX_MARK_END_CLASS();
}

void TmxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(shapeMask,"shapeMask");
	HX_VISIT_MEMBER_NAME(debug_graphic,"debug_graphic");
}

Dynamic TmxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"shared") ) { return shared; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeMask") ) { return shapeMask; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_graphic") ) { return debug_graphic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::com::haxepunk::tmx::TmxObjectGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeMask") ) { shapeMask=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debug_graphic") ) { debug_graphic=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("gid"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("shared"));
	outFields->push(HX_CSTRING("shapeMask"));
	outFields->push(HX_CSTRING("debug_graphic"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxObjectGroup*/ ,(int)offsetof(TmxObject_obj,group),HX_CSTRING("group")},
	{hx::fsString,(int)offsetof(TmxObject_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(TmxObject_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,gid),HX_CSTRING("gid")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObject_obj,custom),HX_CSTRING("custom")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObject_obj,shared),HX_CSTRING("shared")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(TmxObject_obj,shapeMask),HX_CSTRING("shapeMask")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(TmxObject_obj,debug_graphic),HX_CSTRING("debug_graphic")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("group"),
	HX_CSTRING("name"),
	HX_CSTRING("type"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("gid"),
	HX_CSTRING("custom"),
	HX_CSTRING("shared"),
	HX_CSTRING("shapeMask"),
	HX_CSTRING("debug_graphic"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxObject_obj::__mClass,"__mClass");
};

#endif

Class TmxObject_obj::__mClass;

void TmxObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxObject"), hx::TCanCast< TmxObject_obj> ,sStaticFields,sMemberFields,
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

void TmxObject_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
