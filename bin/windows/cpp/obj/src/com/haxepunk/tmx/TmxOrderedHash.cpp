#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxOrderedHash_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","new",0x7a6f3056,"com.haxepunk.tmx.TmxOrderedHash.new","com/haxepunk/tmx/TmxOrderedHash.hx",13,0x52b8d6d9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->_keys = _g;
	HX_STACK_LINE(16)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(16)
	this->_map = _g1;
}
;
	return null();
}

//TmxOrderedHash_obj::~TmxOrderedHash_obj() { }

Dynamic TmxOrderedHash_obj::__CreateEmpty() { return  new TmxOrderedHash_obj; }
hx::ObjectPtr< TmxOrderedHash_obj > TmxOrderedHash_obj::__new()
{  hx::ObjectPtr< TmxOrderedHash_obj > result = new TmxOrderedHash_obj();
	result->__construct();
	return result;}

Dynamic TmxOrderedHash_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxOrderedHash_obj > result = new TmxOrderedHash_obj();
	result->__construct();
	return result;}

Void TmxOrderedHash_obj::set( ::String key,Dynamic value){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","set",0x7a72fb98,"com.haxepunk.tmx.TmxOrderedHash.set","com/haxepunk/tmx/TmxOrderedHash.hx",23,0x52b8d6d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(24)
		if ((!(this->_map->exists(key)))){
			HX_STACK_LINE(24)
			this->_keys->push(key);
		}
		HX_STACK_LINE(25)
		this->_map->set(key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxOrderedHash_obj,set,(void))

bool TmxOrderedHash_obj::remove( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","remove",0xfb2d1a0e,"com.haxepunk.tmx.TmxOrderedHash.remove","com/haxepunk/tmx/TmxOrderedHash.hx",29,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(30)
	this->_keys->remove(key);
	HX_STACK_LINE(31)
	return this->_map->remove(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,remove,return )

bool TmxOrderedHash_obj::exists( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","exists",0xb6849ba6,"com.haxepunk.tmx.TmxOrderedHash.exists","com/haxepunk/tmx/TmxOrderedHash.hx",34,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(34)
	return this->_map->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,exists,return )

Dynamic TmxOrderedHash_obj::get( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","get",0x7a69e08c,"com.haxepunk.tmx.TmxOrderedHash.get","com/haxepunk/tmx/TmxOrderedHash.hx",35,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(35)
	return this->_map->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,get,return )

Dynamic TmxOrderedHash_obj::iterator( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","iterator",0xdab14e38,"com.haxepunk.tmx.TmxOrderedHash.iterator","com/haxepunk/tmx/TmxOrderedHash.hx",38,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	Dynamic _keys_itr = Dynamic( Array_obj<Dynamic>::__new().Add(this->_keys->iterator()));		HX_STACK_VAR(_keys_itr,"_keys_itr");
	HX_STACK_LINE(40)
	Array< ::Dynamic > __map = Array_obj< ::Dynamic >::__new().Add(this->_map);		HX_STACK_VAR(__map,"__map");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_keys_itr,Array< ::Dynamic > &__map){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxOrderedHash.hx",41,0x52b8d6d9)
			{
				hx::Anon __result = hx::Anon_obj::Create();

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,_keys_itr,Array< ::Dynamic >,__map)
				Dynamic run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/haxepunk/tmx/TmxOrderedHash.hx",42,0x52b8d6d9)
					{
						HX_STACK_LINE(42)
						::String key = _keys_itr->__GetItem((int)0)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(42)
						return __map->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->get(key);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_2_1(_keys_itr,__map)),true);
				__result->Add(HX_CSTRING("hasNext") , _keys_itr->__GetItem((int)0)->__Field(HX_CSTRING("hasNext"),true),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	return _Function_1_1::Block(_keys_itr,__map);
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,iterator,return )

Dynamic TmxOrderedHash_obj::keys( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","keys",0xa4df793e,"com.haxepunk.tmx.TmxOrderedHash.keys","com/haxepunk/tmx/TmxOrderedHash.hx",49,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return this->_keys->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,keys,return )

::String TmxOrderedHash_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","toString",0x7f85d4f6,"com.haxepunk.tmx.TmxOrderedHash.toString","com/haxepunk/tmx/TmxOrderedHash.hx",53,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	Array< ::Dynamic > __map = Array_obj< ::Dynamic >::__new().Add(this->_map);		HX_STACK_VAR(__map,"__map");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,__map)
	::String run(::String x){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/haxepunk/tmx/TmxOrderedHash.hx",55,0x52b8d6d9)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(55)
			return ((x + HX_CSTRING(" => ")) + ::Std_obj::string(__map->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->get(x)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(55)
	::List pairs = ::Lambda_obj::map(this->_keys, Dynamic(new _Function_1_1(__map)));		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(56)
	::String _g = pairs->join(HX_CSTRING(", "));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	::String _g1 = (HX_CSTRING("{") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(56)
	return (_g1 + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,toString,return )


TmxOrderedHash_obj::TmxOrderedHash_obj()
{
}

void TmxOrderedHash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxOrderedHash);
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void TmxOrderedHash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

Dynamic TmxOrderedHash_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxOrderedHash_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxOrderedHash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_map"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TmxOrderedHash_obj,_keys),HX_CSTRING("_keys")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxOrderedHash_obj,_map),HX_CSTRING("_map")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_keys"),
	HX_CSTRING("_map"),
	HX_CSTRING("set"),
	HX_CSTRING("remove"),
	HX_CSTRING("exists"),
	HX_CSTRING("get"),
	HX_CSTRING("iterator"),
	HX_CSTRING("keys"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxOrderedHash_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxOrderedHash_obj::__mClass,"__mClass");
};

#endif

Class TmxOrderedHash_obj::__mClass;

void TmxOrderedHash_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxOrderedHash"), hx::TCanCast< TmxOrderedHash_obj> ,sStaticFields,sMemberFields,
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

void TmxOrderedHash_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
