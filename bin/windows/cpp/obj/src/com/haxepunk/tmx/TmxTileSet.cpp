#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxTileSet_obj::__construct(::haxe::xml::Fast data)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","new",0x7006628f,"com.haxepunk.tmx.TmxTileSet.new","com/haxepunk/tmx/TmxTileSet.hx",27,0x09536340)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(37)
	this->margin = (int)0;
	HX_STACK_LINE(36)
	this->spacing = (int)0;
	HX_STACK_LINE(47)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(47)
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(48)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(49)
	int _g = this->numCols = (int)1;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	this->numRows = _g;
	HX_STACK_LINE(51)
	::haxe::xml::Fast _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	_g1 = hx::TCast< haxe::xml::Fast >::cast(data);
	HX_STACK_LINE(51)
	source = _g1;
	HX_STACK_LINE(53)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(53)
	if ((source->has->resolve(HX_CSTRING("firstgid")))){
		HX_STACK_LINE(53)
		::String _g2 = source->att->resolve(HX_CSTRING("firstgid"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(53)
		_g3 = ::Std_obj::parseInt(_g2);
	}
	else{
		HX_STACK_LINE(53)
		_g3 = (int)1;
	}
	HX_STACK_LINE(53)
	this->firstGID = _g3;
	HX_STACK_LINE(56)
	if ((source->has->resolve(HX_CSTRING("source")))){
	}
	else{
		HX_STACK_LINE(62)
		::haxe::xml::Fast node1 = source->node->resolve(HX_CSTRING("image"));		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(63)
		::String _g4 = node1->att->resolve(HX_CSTRING("source"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(63)
		this->imageSource = _g4;
		HX_STACK_LINE(65)
		::String _g5 = source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(65)
		this->name = _g5;
		HX_STACK_LINE(66)
		if ((source->has->resolve(HX_CSTRING("tilewidth")))){
			HX_STACK_LINE(66)
			::String _g6 = source->att->resolve(HX_CSTRING("tilewidth"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(66)
			Dynamic _g7 = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(66)
			this->tileWidth = _g7;
		}
		HX_STACK_LINE(67)
		if ((source->has->resolve(HX_CSTRING("tileheight")))){
			HX_STACK_LINE(67)
			::String _g8 = source->att->resolve(HX_CSTRING("tileheight"));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(67)
			Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(67)
			this->tileHeight = _g9;
		}
		HX_STACK_LINE(68)
		if ((source->has->resolve(HX_CSTRING("spacing")))){
			HX_STACK_LINE(68)
			::String _g10 = source->att->resolve(HX_CSTRING("spacing"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(68)
			Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(68)
			this->spacing = _g11;
		}
		HX_STACK_LINE(69)
		if ((source->has->resolve(HX_CSTRING("margin")))){
			HX_STACK_LINE(69)
			::String _g12 = source->att->resolve(HX_CSTRING("margin"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(69)
			Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(69)
			this->margin = _g13;
		}
		HX_STACK_LINE(72)
		Array< ::Dynamic > _g14 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(72)
		this->_tileProps = _g14;
		HX_STACK_LINE(73)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tile"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node2 = __it->next();
			if ((node2->has->resolve(HX_CSTRING("id")))){
				HX_STACK_LINE(77)
				::String _g15 = node2->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(77)
				int id = ::Std_obj::parseInt(_g15);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(78)
				this->_tileProps[id] = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();
				HX_STACK_LINE(79)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(node2->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast prop = __it->next();
					this->_tileProps->__get(id).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >()->extend(prop);
				}
			}
;
		}
	}
}
;
	return null();
}

//TmxTileSet_obj::~TmxTileSet_obj() { }

Dynamic TmxTileSet_obj::__CreateEmpty() { return  new TmxTileSet_obj; }
hx::ObjectPtr< TmxTileSet_obj > TmxTileSet_obj::__new(::haxe::xml::Fast data)
{  hx::ObjectPtr< TmxTileSet_obj > result = new TmxTileSet_obj();
	result->__construct(data);
	return result;}

Dynamic TmxTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxTileSet_obj > result = new TmxTileSet_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::display::BitmapData TmxTileSet_obj::get_image( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","get_image",0x226f5b21,"com.haxepunk.tmx.TmxTileSet.get_image","com/haxepunk/tmx/TmxTileSet.hx",89,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return this->_image;
}


HX_DEFINE_DYNAMIC_FUNC0(TmxTileSet_obj,get_image,return )

::openfl::_v2::display::BitmapData TmxTileSet_obj::set_image( ::openfl::_v2::display::BitmapData v){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","set_image",0x05c0472d,"com.haxepunk.tmx.TmxTileSet.set_image","com/haxepunk/tmx/TmxTileSet.hx",92,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(93)
	this->_image = v;
	HX_STACK_LINE(95)
	int _g = v->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(95)
	Float _g1 = (Float(_g) / Float(this->tileWidth));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(95)
	int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(95)
	this->numCols = _g2;
	HX_STACK_LINE(96)
	int _g3 = v->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(96)
	Float _g4 = (Float(_g3) / Float(this->tileHeight));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(96)
	int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(96)
	this->numRows = _g5;
	HX_STACK_LINE(97)
	this->numTiles = (this->numRows * this->numCols);
	HX_STACK_LINE(98)
	return this->_image;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,set_image,return )

bool TmxTileSet_obj::hasGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","hasGid",0x46fb45f9,"com.haxepunk.tmx.TmxTileSet.hasGid","com/haxepunk/tmx/TmxTileSet.hx",103,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(103)
	return (bool((gid >= this->firstGID)) && bool((gid < (this->firstGID + this->numTiles))));
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,hasGid,return )

int TmxTileSet_obj::fromGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","fromGid",0x19322a67,"com.haxepunk.tmx.TmxTileSet.fromGid","com/haxepunk/tmx/TmxTileSet.hx",108,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(108)
	return (gid - this->firstGID);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,fromGid,return )

int TmxTileSet_obj::toGid( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","toGid",0xc32ef136,"com.haxepunk.tmx.TmxTileSet.toGid","com/haxepunk/tmx/TmxTileSet.hx",113,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(113)
	return (this->firstGID + id);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,toGid,return )

::com::haxepunk::tmx::TmxPropertySet TmxTileSet_obj::getPropertiesByGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getPropertiesByGid",0xddbe0433,"com.haxepunk.tmx.TmxTileSet.getPropertiesByGid","com/haxepunk/tmx/TmxTileSet.hx",117,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(118)
	if (((this->_tileProps != null()))){
		HX_STACK_LINE(119)
		return this->_tileProps->__get((gid - this->firstGID)).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >();
	}
	HX_STACK_LINE(120)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getPropertiesByGid,return )

::com::haxepunk::tmx::TmxPropertySet TmxTileSet_obj::getProperties( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getProperties",0x01b41b18,"com.haxepunk.tmx.TmxTileSet.getProperties","com/haxepunk/tmx/TmxTileSet.hx",125,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(125)
	return this->_tileProps->__get(id).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getProperties,return )

::openfl::_v2::geom::Rectangle TmxTileSet_obj::getRect( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getRect",0xdf62d289,"com.haxepunk.tmx.TmxTileSet.getRect","com/haxepunk/tmx/TmxTileSet.hx",131,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(131)
	return ::openfl::_v2::geom::Rectangle_obj::__new((hx::Mod(id,this->numCols) * this->tileWidth),((Float(id) / Float(this->numCols)) * this->tileHeight),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getRect,return )


TmxTileSet_obj::TmxTileSet_obj()
{
}

void TmxTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxTileSet);
	HX_MARK_MEMBER_NAME(_tileProps,"_tileProps");
	HX_MARK_MEMBER_NAME(_image,"_image");
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_END_CLASS();
}

void TmxTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tileProps,"_tileProps");
	HX_VISIT_MEMBER_NAME(_image,"_image");
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
}

Dynamic TmxTileSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return get_image(); }
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { return _image; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"get_image") ) { return get_image_dyn(); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return set_image_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileProps") ) { return _tileProps; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return set_image(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileProps") ) { _tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tileProps"));
	outFields->push(HX_CSTRING("_image"));
	outFields->push(HX_CSTRING("firstGID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("margin"));
	outFields->push(HX_CSTRING("imageSource"));
	outFields->push(HX_CSTRING("numTiles"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numCols"));
	outFields->push(HX_CSTRING("image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxTileSet_obj,_tileProps),HX_CSTRING("_tileProps")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(TmxTileSet_obj,_image),HX_CSTRING("_image")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,firstGID),HX_CSTRING("firstGID")},
	{hx::fsString,(int)offsetof(TmxTileSet_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,spacing),HX_CSTRING("spacing")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,margin),HX_CSTRING("margin")},
	{hx::fsString,(int)offsetof(TmxTileSet_obj,imageSource),HX_CSTRING("imageSource")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numTiles),HX_CSTRING("numTiles")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numRows),HX_CSTRING("numRows")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numCols),HX_CSTRING("numCols")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_tileProps"),
	HX_CSTRING("_image"),
	HX_CSTRING("firstGID"),
	HX_CSTRING("name"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("spacing"),
	HX_CSTRING("margin"),
	HX_CSTRING("imageSource"),
	HX_CSTRING("numTiles"),
	HX_CSTRING("numRows"),
	HX_CSTRING("numCols"),
	HX_CSTRING("get_image"),
	HX_CSTRING("set_image"),
	HX_CSTRING("hasGid"),
	HX_CSTRING("fromGid"),
	HX_CSTRING("toGid"),
	HX_CSTRING("getPropertiesByGid"),
	HX_CSTRING("getProperties"),
	HX_CSTRING("getRect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxTileSet_obj::__mClass,"__mClass");
};

#endif

Class TmxTileSet_obj::__mClass;

void TmxTileSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxTileSet"), hx::TCanCast< TmxTileSet_obj> ,sStaticFields,sMemberFields,
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

void TmxTileSet_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
