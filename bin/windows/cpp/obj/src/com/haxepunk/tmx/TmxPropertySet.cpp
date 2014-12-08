#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxPropertySet_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","new",0x45c860c8,"com.haxepunk.tmx.TmxPropertySet.new","com/haxepunk/tmx/TmxPropertySet.hx",14,0x4cbefaa7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->keys = _g;
}
;
	return null();
}

//TmxPropertySet_obj::~TmxPropertySet_obj() { }

Dynamic TmxPropertySet_obj::__CreateEmpty() { return  new TmxPropertySet_obj; }
hx::ObjectPtr< TmxPropertySet_obj > TmxPropertySet_obj::__new()
{  hx::ObjectPtr< TmxPropertySet_obj > result = new TmxPropertySet_obj();
	result->__construct();
	return result;}

Dynamic TmxPropertySet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxPropertySet_obj > result = new TmxPropertySet_obj();
	result->__construct();
	return result;}

::String TmxPropertySet_obj::resolve( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","resolve",0x0c08f754,"com.haxepunk.tmx.TmxPropertySet.resolve","com/haxepunk/tmx/TmxPropertySet.hx",24,0x4cbefaa7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(24)
	return this->keys->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,resolve,return )

bool TmxPropertySet_obj::has( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","has",0x45c3cfc2,"com.haxepunk.tmx.TmxPropertySet.has","com/haxepunk/tmx/TmxPropertySet.hx",29,0x4cbefaa7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(29)
	return this->keys->exists(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,has,return )

Void TmxPropertySet_obj::extend( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","extend",0xd59e7272,"com.haxepunk.tmx.TmxPropertySet.extend","com/haxepunk/tmx/TmxPropertySet.hx",33,0x4cbefaa7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(34)
		::haxe::xml::Fast prop;		HX_STACK_VAR(prop,"prop");
		HX_STACK_LINE(35)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("property"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast prop1 = __it->next();
			{
				HX_STACK_LINE(37)
				::String key = prop1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(37)
				::String value = prop1->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(37)
				this->keys->set(key,value);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,extend,(void))


TmxPropertySet_obj::TmxPropertySet_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void TmxPropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxPropertySet);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void TmxPropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

Dynamic TmxPropertySet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extend") ) { return extend_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic TmxPropertySet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void TmxPropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keys"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxPropertySet_obj,keys),HX_CSTRING("keys")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resolve"),
	HX_CSTRING("has"),
	HX_CSTRING("extend"),
	HX_CSTRING("keys"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxPropertySet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxPropertySet_obj::__mClass,"__mClass");
};

#endif

Class TmxPropertySet_obj::__mClass;

void TmxPropertySet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxPropertySet"), hx::TCanCast< TmxPropertySet_obj> ,sStaticFields,sMemberFields,
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

void TmxPropertySet_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
