#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#include <com/haxepunk/tmx/TmxObjectGroup.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxMap_obj::__construct(::haxe::xml::Fast data)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","new",0x33ab5f97,"com.haxepunk.tmx.TmxMap.new","com/haxepunk/tmx/TmxMap.hx",51,0xb8c773b8)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(52)
	::com::haxepunk::tmx::TmxPropertySet _g = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->properties = _g;
	HX_STACK_LINE(53)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(54)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(56)
	source = data;
	HX_STACK_LINE(58)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(58)
	this->tilesets = _g1;
	HX_STACK_LINE(59)
	::com::haxepunk::tmx::TmxOrderedHash _g2 = ::com::haxepunk::tmx::TmxOrderedHash_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	this->layers = _g2;
	HX_STACK_LINE(60)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(60)
	this->imageLayers = _g3;
	HX_STACK_LINE(61)
	::com::haxepunk::tmx::TmxOrderedHash _g4 = ::com::haxepunk::tmx::TmxOrderedHash_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(61)
	this->objectGroups = _g4;
	HX_STACK_LINE(63)
	::haxe::xml::Fast _g5 = source->node->resolve(HX_CSTRING("map"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(63)
	source = _g5;
	HX_STACK_LINE(66)
	::String _g6 = source->att->resolve(HX_CSTRING("version"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(66)
	this->version = _g6;
	HX_STACK_LINE(67)
	if (((this->version == null()))){
		HX_STACK_LINE(67)
		this->version = HX_CSTRING("unknown");
	}
	HX_STACK_LINE(69)
	::String _g7 = source->att->resolve(HX_CSTRING("orientation"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(69)
	this->orientation = _g7;
	HX_STACK_LINE(70)
	if (((this->orientation == null()))){
		HX_STACK_LINE(70)
		this->orientation = HX_CSTRING("orthogonal");
	}
	HX_STACK_LINE(72)
	::String _g8 = source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(72)
	Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(72)
	this->width = _g9;
	HX_STACK_LINE(73)
	::String _g10 = source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(73)
	Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(73)
	this->height = _g11;
	HX_STACK_LINE(74)
	::String _g12 = source->att->resolve(HX_CSTRING("tilewidth"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(74)
	Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(74)
	this->tileWidth = _g13;
	HX_STACK_LINE(75)
	::String _g14 = source->att->resolve(HX_CSTRING("tileheight"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(75)
	Dynamic _g15 = ::Std_obj::parseInt(_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(75)
	this->tileHeight = _g15;
	HX_STACK_LINE(77)
	this->fullWidth = (this->width * this->tileWidth);
	HX_STACK_LINE(78)
	this->fullHeight = (this->height * this->tileHeight);
	HX_STACK_LINE(81)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(85)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tileset"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(86)
			::com::haxepunk::tmx::TmxTileSet _g16 = ::com::haxepunk::tmx::TmxTileSet_obj::__new(node1);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(86)
			this->tilesets->push(_g16);
		}
;
	}
	HX_STACK_LINE(89)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("layer"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxOrderedHash _this = this->layers;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			::String key = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxLayer value = ::com::haxepunk::tmx::TmxLayer_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(90)
			if ((!(_this->_map->exists(key)))){
				HX_STACK_LINE(90)
				_this->_keys->push(key);
			}
			HX_STACK_LINE(90)
			_this->_map->set(key,value);
		}
;
	}
	HX_STACK_LINE(93)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("imagelayer"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(95)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(node1->nodes->resolve(HX_CSTRING("image"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast img = __it->next();
				{
					HX_STACK_LINE(97)
					::String key = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(97)
					::String value = img->att->resolve(HX_CSTRING("source")).substr((int)3,null());		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(97)
					this->imageLayers->set(key,value);
				}
;
			}
		}
;
	}
	HX_STACK_LINE(102)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("objectgroup"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxOrderedHash _this = this->objectGroups;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			::String key = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxObjectGroup value = ::com::haxepunk::tmx::TmxObjectGroup_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(103)
			if ((!(_this->_map->exists(key)))){
				HX_STACK_LINE(103)
				_this->_keys->push(key);
			}
			HX_STACK_LINE(103)
			_this->_map->set(key,value);
		}
;
	}
}
;
	return null();
}

//TmxMap_obj::~TmxMap_obj() { }

Dynamic TmxMap_obj::__CreateEmpty() { return  new TmxMap_obj; }
hx::ObjectPtr< TmxMap_obj > TmxMap_obj::__new(::haxe::xml::Fast data)
{  hx::ObjectPtr< TmxMap_obj > result = new TmxMap_obj();
	result->__construct(data);
	return result;}

Dynamic TmxMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxMap_obj > result = new TmxMap_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::haxepunk::tmx::TmxLayer TmxMap_obj::getLayer( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getLayer",0x271a7ac4,"com.haxepunk.tmx.TmxMap.getLayer","com/haxepunk/tmx/TmxMap.hx",116,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(116)
	return this->layers->_map->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getLayer,return )

::com::haxepunk::tmx::TmxObjectGroup TmxMap_obj::getObjectGroup( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getObjectGroup",0x8d278133,"com.haxepunk.tmx.TmxMap.getObjectGroup","com/haxepunk/tmx/TmxMap.hx",121,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(121)
	return this->objectGroups->_map->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getObjectGroup,return )

::com::haxepunk::tmx::TmxTileSet TmxMap_obj::getGidOwner( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getGidOwner",0x0cbd9dbe,"com.haxepunk.tmx.TmxMap.getGidOwner","com/haxepunk/tmx/TmxMap.hx",126,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(127)
	::com::haxepunk::tmx::TmxTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(128)
	::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		Array< ::Dynamic > _g1 = this->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			::com::haxepunk::tmx::TmxTileSet set1 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(set1,"set1");
			HX_STACK_LINE(129)
			++(_g);
			HX_STACK_LINE(131)
			if ((set1->hasGid(gid))){
				HX_STACK_LINE(132)
				return set1;
			}
		}
	}
	HX_STACK_LINE(134)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getGidOwner,return )

::String TmxMap_obj::getGidProperty( int gid,::String property){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getGidProperty",0x28430baa,"com.haxepunk.tmx.TmxMap.getGidProperty","com/haxepunk/tmx/TmxMap.hx",138,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(139)
	::com::haxepunk::tmx::TmxTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(140)
	::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::com::haxepunk::tmx::TmxTileSet set1 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(set1,"set1");
			HX_STACK_LINE(141)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::com::haxepunk::tmx::TmxTileSet &set1,int &gid){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxMap.hx",143,0xb8c773b8)
					{
						HX_STACK_LINE(143)
						::com::haxepunk::tmx::TmxPropertySet _g2 = set1->getPropertiesByGid(gid);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(143)
						return (_g2 != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(143)
			if (((  ((set1->hasGid(gid))) ? bool(_Function_3_1::Block(set1,gid)) : bool(false) ))){
				HX_STACK_LINE(144)
				return set1->getPropertiesByGid(gid)->resolve(property);
			}
		}
	}
	HX_STACK_LINE(146)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxMap_obj,getGidProperty,return )

int TmxMap_obj::getTileMapSpacing( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getTileMapSpacing",0x5053c1c2,"com.haxepunk.tmx.TmxMap.getTileMapSpacing","com/haxepunk/tmx/TmxMap.hx",150,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(151)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(152)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(153)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->layers->keys());  __it->hasNext(); ){
		::String key = __it->next();
		if (((key == name))){
			HX_STACK_LINE(156)
			index = i;
			HX_STACK_LINE(157)
			break;
		}
;
	}
	HX_STACK_LINE(159)
	(i)++;
	HX_STACK_LINE(161)
	if (((index == (int)-1))){
		HX_STACK_LINE(162)
		return (int)0;
	}
	HX_STACK_LINE(163)
	return this->tilesets->__get(index).StaticCast< ::com::haxepunk::tmx::TmxTileSet >()->spacing;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getTileMapSpacing,return )

::com::haxepunk::tmx::TmxMap TmxMap_obj::loadFromFile( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","loadFromFile",0x6daedb35,"com.haxepunk.tmx.TmxMap.loadFromFile","com/haxepunk/tmx/TmxMap.hx",110,0xb8c773b8)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(111)
	::haxe::xml::Fast _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::String s = ::openfl::_v2::Assets_obj::getText(name);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(111)
		::Xml _g = ::Xml_obj::parse(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		::haxe::xml::Fast f = ::haxe::xml::Fast_obj::__new(_g);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(111)
		_g1 = f;
	}
	HX_STACK_LINE(111)
	return ::com::haxepunk::tmx::TmxMap_obj::__new(_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,loadFromFile,return )


TmxMap_obj::TmxMap_obj()
{
}

void TmxMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(imageLayers,"imageLayers");
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_END_CLASS();
}

void TmxMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(imageLayers,"imageLayers");
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
}

Dynamic TmxMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { return imageLayers; }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { return loadFromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectGroup") ) { return getObjectGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getGidProperty") ) { return getGidProperty_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTileMapSpacing") ) { return getTileMapSpacing_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::com::haxepunk::tmx::TmxOrderedHash >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { imageLayers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< ::com::haxepunk::tmx::TmxOrderedHash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("orientation"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("fullWidth"));
	outFields->push(HX_CSTRING("fullHeight"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("tilesets"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("imageLayers"));
	outFields->push(HX_CSTRING("objectGroups"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("loadFromFile"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TmxMap_obj,version),HX_CSTRING("version")},
	{hx::fsString,(int)offsetof(TmxMap_obj,orientation),HX_CSTRING("orientation")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,fullWidth),HX_CSTRING("fullWidth")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,fullHeight),HX_CSTRING("fullHeight")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxMap_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxMap_obj,tilesets),HX_CSTRING("tilesets")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxOrderedHash*/ ,(int)offsetof(TmxMap_obj,layers),HX_CSTRING("layers")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxMap_obj,imageLayers),HX_CSTRING("imageLayers")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxOrderedHash*/ ,(int)offsetof(TmxMap_obj,objectGroups),HX_CSTRING("objectGroups")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("version"),
	HX_CSTRING("orientation"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("fullWidth"),
	HX_CSTRING("fullHeight"),
	HX_CSTRING("properties"),
	HX_CSTRING("tilesets"),
	HX_CSTRING("layers"),
	HX_CSTRING("imageLayers"),
	HX_CSTRING("objectGroups"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getObjectGroup"),
	HX_CSTRING("getGidOwner"),
	HX_CSTRING("getGidProperty"),
	HX_CSTRING("getTileMapSpacing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxMap_obj::__mClass,"__mClass");
};

#endif

Class TmxMap_obj::__mClass;

void TmxMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxMap"), hx::TCanCast< TmxMap_obj> ,sStaticFields,sMemberFields,
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

void TmxMap_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
