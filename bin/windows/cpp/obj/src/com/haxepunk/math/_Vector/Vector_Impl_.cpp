#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace math{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > result = new Vector_Impl__obj();
	result->__construct();
	return result;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > result = new Vector_Impl__obj();
	result->__construct();
	return result;}

::openfl::_v2::geom::Point Vector_Impl__obj::_new( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","_new",0xa82790b3,"com.haxepunk.math._Vector.Vector_Impl_._new","com/haxepunk/math/Vector.hx",8,0xd050812d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(8)
		return ::openfl::_v2::geom::Point_obj::__new(x,y);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

::openfl::_v2::geom::Point Vector_Impl__obj::toPoint( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","toPoint",0x027de4c3,"com.haxepunk.math._Vector.Vector_Impl_.toPoint","com/haxepunk/math/Vector.hx",10,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(10)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toPoint,return )

::openfl::_v2::geom::Point Vector_Impl__obj::fromPoint( ::openfl::_v2::geom::Point point){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","fromPoint",0x03b5d9f4,"com.haxepunk.math._Vector.Vector_Impl_.fromPoint","com/haxepunk/math/Vector.hx",13,0xd050812d)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(13)
	return ::openfl::_v2::geom::Point_obj::__new(point->x,point->y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromPoint,return )

Float Vector_Impl__obj::get_x( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_x",0x0fc411bd,"com.haxepunk.math._Vector.Vector_Impl_.get_x","com/haxepunk/math/Vector.hx",17,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(17)
	return this1->x;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_x,return )

Float Vector_Impl__obj::set_x( ::openfl::_v2::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_x",0xf89307c9,"com.haxepunk.math._Vector.Vector_Impl_.set_x","com/haxepunk/math/Vector.hx",18,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(18)
	return this1->x = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_x,return )

Float Vector_Impl__obj::get_y( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_y",0x0fc411be,"com.haxepunk.math._Vector.Vector_Impl_.get_y","com/haxepunk/math/Vector.hx",21,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(21)
	return this1->y;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_y,return )

Float Vector_Impl__obj::set_y( ::openfl::_v2::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_y",0xf89307ca,"com.haxepunk.math._Vector.Vector_Impl_.set_y","com/haxepunk/math/Vector.hx",22,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	return this1->y = value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_y,return )

Float Vector_Impl__obj::dot( ::openfl::_v2::geom::Point this1,::openfl::_v2::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","dot",0x56de1777,"com.haxepunk.math._Vector.Vector_Impl_.dot","com/haxepunk/math/Vector.hx",26,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(26)
	return ((this1->x * b->x) + (this1->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,dot,return )

Float Vector_Impl__obj::cross( ::openfl::_v2::geom::Point this1,::openfl::_v2::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","cross",0xcabdcbee,"com.haxepunk.math._Vector.Vector_Impl_.cross","com/haxepunk/math/Vector.hx",31,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(31)
	return ((this1->x * b->x) - (this1->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,cross,return )

Void Vector_Impl__obj::invert( ::openfl::_v2::geom::Point this1){
{
		HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","invert",0xb8745ae8,"com.haxepunk.math._Vector.Vector_Impl_.invert","com/haxepunk/math/Vector.hx",35,0xd050812d)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(36)
		this1->x = -(this1->x);
		HX_STACK_LINE(37)
		this1->y = -(this1->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,invert,(void))

::openfl::_v2::geom::Point Vector_Impl__obj::rotate( ::openfl::_v2::geom::Point this1,Float angle){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","rotate",0xe3bbba2d,"com.haxepunk.math._Vector.Vector_Impl_.rotate","com/haxepunk/math/Vector.hx",41,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(42)
	Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(43)
	Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(44)
	return ::openfl::_v2::geom::Point_obj::__new(((this1->x * cos) - (this1->y * sin)),((this1->x * sin) + (this1->y * cos)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,rotate,return )

Void Vector_Impl__obj::normalize( ::openfl::_v2::geom::Point this1,hx::Null< Float >  __o_size){
Float size = __o_size.Default(1);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","normalize",0x343e72fb,"com.haxepunk.math._Vector.Vector_Impl_.normalize","com/haxepunk/math/Vector.hx",48,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(49)
		Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(50)
		if (((len == (int)0))){
			HX_STACK_LINE(52)
			Float value = this1->y = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(52)
			this1->x = value;
		}
		else{
			HX_STACK_LINE(56)
			this1->x = ((Float(this1->x) / Float(len)) * size);
			HX_STACK_LINE(57)
			this1->y = ((Float(this1->y) / Float(len)) * size);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,normalize,(void))

Float Vector_Impl__obj::get_squareLength( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_squareLength",0x9c53f83e,"com.haxepunk.math._Vector.Vector_Impl_.get_squareLength","com/haxepunk/math/Vector.hx",64,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	return ((this1->x * this1->x) + (this1->y * this1->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_squareLength,return )

Float Vector_Impl__obj::get_length( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_length",0x9085c981,"com.haxepunk.math._Vector.Vector_Impl_.get_length","com/haxepunk/math/Vector.hx",70,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(70)
	return ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

Float Vector_Impl__obj::get_angle( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_angle",0xef28db98,"com.haxepunk.math._Vector.Vector_Impl_.get_angle","com/haxepunk/math/Vector.hx",76,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(76)
	return ::Math_obj::atan2(this1->y,this1->x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_angle,return )

::openfl::_v2::geom::Point Vector_Impl__obj::get_unit( ::openfl::_v2::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_unit",0xdaa2125f,"com.haxepunk.math._Vector.Vector_Impl_.get_unit","com/haxepunk/math/Vector.hx",81,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(82)
	Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(83)
	return ::openfl::_v2::geom::Point_obj::__new((Float(this1->x) / Float(len)),(Float(this1->y) / Float(len)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_unit,return )

::openfl::_v2::geom::Point Vector_Impl__obj::add( ::openfl::_v2::geom::Point a,::openfl::_v2::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","add",0x56dbc70f,"com.haxepunk.math._Vector.Vector_Impl_.add","com/haxepunk/math/Vector.hx",88,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(88)
	return ::openfl::_v2::geom::Point_obj::__new((a->x + b->x),(a->y + b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,add,return )

::openfl::_v2::geom::Point Vector_Impl__obj::sub( ::openfl::_v2::geom::Point a,::openfl::_v2::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","sub",0x56e97e6e,"com.haxepunk.math._Vector.Vector_Impl_.sub","com/haxepunk/math/Vector.hx",93,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(93)
	return ::openfl::_v2::geom::Point_obj::__new((a->x - b->x),(a->y - b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sub,return )

::openfl::_v2::geom::Point Vector_Impl__obj::scalar_mult( ::openfl::_v2::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_mult",0x78349011,"com.haxepunk.math._Vector.Vector_Impl_.scalar_mult","com/haxepunk/math/Vector.hx",98,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(98)
	return ::openfl::_v2::geom::Point_obj::__new((a->x * b),(a->y * b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_mult,return )

::openfl::_v2::geom::Point Vector_Impl__obj::scalar_divide( ::openfl::_v2::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_divide",0xdf1461da,"com.haxepunk.math._Vector.Vector_Impl_.scalar_divide","com/haxepunk/math/Vector.hx",103,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(103)
	return ::openfl::_v2::geom::Point_obj::__new((Float(a->x) / Float(b)),(Float(a->y) / Float(b)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_divide,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

Dynamic Vector_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_unit") ) { return get_unit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPoint") ) { return fromPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scalar_mult") ) { return scalar_mult_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalar_divide") ) { return scalar_divide_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_squareLength") ) { return get_squareLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toPoint"),
	HX_CSTRING("fromPoint"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("dot"),
	HX_CSTRING("cross"),
	HX_CSTRING("invert"),
	HX_CSTRING("rotate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("get_squareLength"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("get_unit"),
	HX_CSTRING("add"),
	HX_CSTRING("sub"),
	HX_CSTRING("scalar_mult"),
	HX_CSTRING("scalar_divide"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

Class Vector_Impl__obj::__mClass;

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.math._Vector.Vector_Impl_"), hx::TCanCast< Vector_Impl__obj> ,sStaticFields,sMemberFields,
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

void Vector_Impl__obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
} // end namespace _Vector
