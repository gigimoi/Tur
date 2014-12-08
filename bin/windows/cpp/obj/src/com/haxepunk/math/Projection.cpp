#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
namespace com{
namespace haxepunk{
namespace math{

Void Projection_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.math.Projection","new",0x1aaeec8e,"com.haxepunk.math.Projection.new","com/haxepunk/math/Projection.hx",14,0x55fba1e1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	Float _g = this->min = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->max = _g;
}
;
	return null();
}

//Projection_obj::~Projection_obj() { }

Dynamic Projection_obj::__CreateEmpty() { return  new Projection_obj; }
hx::ObjectPtr< Projection_obj > Projection_obj::__new()
{  hx::ObjectPtr< Projection_obj > result = new Projection_obj();
	result->__construct();
	return result;}

Dynamic Projection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projection_obj > result = new Projection_obj();
	result->__construct();
	return result;}

bool Projection_obj::overlaps( ::com::haxepunk::math::Projection other){
	HX_STACK_FRAME("com.haxepunk.math.Projection","overlaps",0x2374d01e,"com.haxepunk.math.Projection.overlaps","com/haxepunk/math/Projection.hx",27,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(27)
	return !(((bool((this->min > other->max)) || bool((this->max < other->min)))));
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,overlaps,return )

Float Projection_obj::getOverlap( ::com::haxepunk::math::Projection other){
	HX_STACK_FRAME("com.haxepunk.math.Projection","getOverlap",0x7b02af23,"com.haxepunk.math.Projection.getOverlap","com/haxepunk/math/Projection.hx",39,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(39)
	if (((this->max > other->max))){
		HX_STACK_LINE(39)
		return (this->max - other->min);
	}
	else{
		HX_STACK_LINE(39)
		return (other->max - this->min);
	}
	HX_STACK_LINE(39)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,getOverlap,return )

::String Projection_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.math.Projection","toString",0x16b8cdbe,"com.haxepunk.math.Projection.toString","com/haxepunk/math/Projection.hx",49,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ((((HX_CSTRING("[ ") + this->min) + HX_CSTRING(", ")) + this->max) + HX_CSTRING(" ]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Projection_obj,toString,return )


Projection_obj::Projection_obj()
{
}

Dynamic Projection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOverlap") ) { return getOverlap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Projection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Projection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("min"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Projection_obj,max),HX_CSTRING("max")},
	{hx::fsFloat,(int)offsetof(Projection_obj,min),HX_CSTRING("min")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("getOverlap"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

#endif

Class Projection_obj::__mClass;

void Projection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.math.Projection"), hx::TCanCast< Projection_obj> ,sStaticFields,sMemberFields,
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

void Projection_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
