#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfo
#include <com/haxepunk/utils/HaxelibInfo.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void HaxelibInfo_obj::__construct()
{
	return null();
}

//HaxelibInfo_obj::~HaxelibInfo_obj() { }

Dynamic HaxelibInfo_obj::__CreateEmpty() { return  new HaxelibInfo_obj; }
hx::ObjectPtr< HaxelibInfo_obj > HaxelibInfo_obj::__new()
{  hx::ObjectPtr< HaxelibInfo_obj > result = new HaxelibInfo_obj();
	result->__construct();
	return result;}

Dynamic HaxelibInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxelibInfo_obj > result = new HaxelibInfo_obj();
	result->__construct();
	return result;}

::String HaxelibInfo_obj::name;

::String HaxelibInfo_obj::license;

Array< ::String > HaxelibInfo_obj::tags;

::String HaxelibInfo_obj::description;

Array< ::String > HaxelibInfo_obj::contributors;

::String HaxelibInfo_obj::releasenote;

::String HaxelibInfo_obj::version;

::String HaxelibInfo_obj::url;

Dynamic HaxelibInfo_obj::install;

Dynamic HaxelibInfo_obj::dependencies;


HaxelibInfo_obj::HaxelibInfo_obj()
{
}

Dynamic HaxelibInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tags") ) { return tags; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"install") ) { return install; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contributors") ) { return contributors; }
		if (HX_FIELD_EQ(inName,"dependencies") ) { return dependencies; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HaxelibInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tags") ) { tags=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"install") ) { install=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contributors") ) { contributors=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dependencies") ) { dependencies=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxelibInfo_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("license"),
	HX_CSTRING("tags"),
	HX_CSTRING("description"),
	HX_CSTRING("contributors"),
	HX_CSTRING("releasenote"),
	HX_CSTRING("version"),
	HX_CSTRING("url"),
	HX_CSTRING("install"),
	HX_CSTRING("dependencies"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::name,"name");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::license,"license");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::tags,"tags");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::description,"description");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::contributors,"contributors");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::releasenote,"releasenote");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::version,"version");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::url,"url");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::install,"install");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::dependencies,"dependencies");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::name,"name");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::license,"license");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::tags,"tags");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::description,"description");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::contributors,"contributors");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::releasenote,"releasenote");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::url,"url");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::install,"install");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::dependencies,"dependencies");
};

#endif

Class HaxelibInfo_obj::__mClass;

void HaxelibInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.HaxelibInfo"), hx::TCanCast< HaxelibInfo_obj> ,sStaticFields,sMemberFields,
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

void HaxelibInfo_obj::__boot()
{
	name= HX_CSTRING("HaxePunk");
	license= HX_CSTRING("MIT");
	tags= Array_obj< ::String >::__new().Add(HX_CSTRING("flash")).Add(HX_CSTRING("game")).Add(HX_CSTRING("cpp")).Add(HX_CSTRING("openfl"));
	description= HX_CSTRING("A Haxe port of the FlashPunk AS3 engine.");
	contributors= Array_obj< ::String >::__new().Add(HX_CSTRING("heardtheword")).Add(HX_CSTRING("_ibilon"));
	releasenote= HX_CSTRING("See CHANGELOG");
	version= HX_CSTRING("2.5.3");
	url= HX_CSTRING("http://haxepunk.com");
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",105,0x1e9631e8)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("lime-tools") , HX_CSTRING(""),false);
			__result->Add(HX_CSTRING("openfl-ouya") , HX_CSTRING(""),false);
			return __result;
		}
		return null();
	}
};
	install= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",105,0x1e9631e8)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("openfl") , HX_CSTRING(""),false);
			__result->Add(HX_CSTRING("lime") , HX_CSTRING(""),false);
			return __result;
		}
		return null();
	}
};
	dependencies= _Function_0_2::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
