#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Mask_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Mask","new",0x424fd117,"com.haxepunk.Mask.new","com/haxepunk/Mask.hx",41,0x8b156259)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->_parent = ::com::haxepunk::Entity_obj::_EMPTY;
	HX_STACK_LINE(43)
	::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->_class = _g1;
	HX_STACK_LINE(44)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(44)
	this->_check = _g2;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(45)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Masklist >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(46)
		this->_check->set(key,this->collideMasklist_dyn());
	}
}
;
	return null();
}

//Mask_obj::~Mask_obj() { }

Dynamic Mask_obj::__CreateEmpty() { return  new Mask_obj; }
hx::ObjectPtr< Mask_obj > Mask_obj::__new()
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

Dynamic Mask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

::com::haxepunk::Entity Mask_obj::get_parent( ){
	HX_STACK_FRAME("com.haxepunk.Mask","get_parent",0xf699091c,"com.haxepunk.Mask.get_parent","com/haxepunk/Mask.hx",22,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	if (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))){
		HX_STACK_LINE(22)
		return this->_parent;
	}
	else{
		HX_STACK_LINE(22)
		return null();
	}
	HX_STACK_LINE(22)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,get_parent,return )

::com::haxepunk::Entity Mask_obj::set_parent( ::com::haxepunk::Entity value){
	HX_STACK_FRAME("com.haxepunk.Mask","set_parent",0xfa16a790,"com.haxepunk.Mask.set_parent","com/haxepunk/Mask.hx",25,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(26)
	if (((value == null()))){
		HX_STACK_LINE(26)
		this->_parent = ::com::haxepunk::Entity_obj::_EMPTY;
	}
	else{
		HX_STACK_LINE(27)
		this->_parent = value;
		HX_STACK_LINE(27)
		this->update();
	}
	HX_STACK_LINE(28)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,set_parent,return )

bool Mask_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.Mask","collide",0x3bb3d7b5,"com.haxepunk.Mask.collide","com/haxepunk/Mask.hx",55,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(56)
	Dynamic cbFunc = this->_check->get(mask->_class);		HX_STACK_VAR(cbFunc,"cbFunc");
	HX_STACK_LINE(57)
	if (((cbFunc != null()))){
		HX_STACK_LINE(57)
		return cbFunc(mask).Cast< bool >();
	}
	HX_STACK_LINE(59)
	Dynamic _g = mask->_check->get(this->_class);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(59)
	cbFunc = _g;
	HX_STACK_LINE(60)
	if (((cbFunc != null()))){
		HX_STACK_LINE(60)
		return cbFunc(hx::ObjectPtr<OBJ_>(this)).Cast< bool >();
	}
	HX_STACK_LINE(62)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collide,return )

bool Mask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.Mask","collideMask",0x22a1c341,"com.haxepunk.Mask.collideMask","com/haxepunk/Mask.hx",68,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::Mask_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",68,0x8b156259)
			{
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",68,0x8b156259)
			{
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::Mask_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",69,0x8b156259)
			{
				HX_STACK_LINE(69)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",69,0x8b156259)
			{
				HX_STACK_LINE(69)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::Mask_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",70,0x8b156259)
			{
				HX_STACK_LINE(70)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",70,0x8b156259)
			{
				HX_STACK_LINE(70)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::Mask_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",71,0x8b156259)
			{
				HX_STACK_LINE(71)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Mask.hx",71,0x8b156259)
			{
				HX_STACK_LINE(71)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	return (bool((bool((bool((((_Function_1_1::Block(this) - this->_parent->originX) + this->_parent->width) > (_Function_1_2::Block(other) - other->_parent->originX))) && bool((((_Function_1_3::Block(this) - this->_parent->originY) + this->_parent->height) > (_Function_1_4::Block(other) - other->_parent->originY))))) && bool(((_Function_1_5::Block(this) - this->_parent->originX) < ((_Function_1_6::Block(other) - other->_parent->originX) + other->_parent->width))))) && bool(((_Function_1_7::Block(this) - this->_parent->originY) < ((_Function_1_8::Block(other) - other->_parent->originY) + other->_parent->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMask,return )

bool Mask_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("com.haxepunk.Mask","collideMasklist",0x5efe141f,"com.haxepunk.Mask.collideMasklist","com/haxepunk/Mask.hx",76,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(76)
	return other->collide(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMasklist,return )

Void Mask_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.Mask","debugDraw",0xc68fb3ee,"com.haxepunk.Mask.debugDraw","com/haxepunk/Mask.hx",84,0x8b156259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mask_obj,debugDraw,(void))

Void Mask_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Mask","update",0x237f91b2,"com.haxepunk.Mask.update","com/haxepunk/Mask.hx",91,0x8b156259)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,update,(void))

Void Mask_obj::project( ::openfl::_v2::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.Mask","project",0x443b3b10,"com.haxepunk.Mask.project","com/haxepunk/Mask.hx",97,0x8b156259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(98)
		Float cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(99)
		Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(100)
		Float min = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(102)
		cur = ((-(this->_parent->originX) * axis->x) - (this->_parent->originY * axis->y));
		HX_STACK_LINE(103)
		if (((cur < min))){
			HX_STACK_LINE(104)
			min = cur;
		}
		HX_STACK_LINE(105)
		if (((cur > max))){
			HX_STACK_LINE(106)
			max = cur;
		}
		HX_STACK_LINE(108)
		cur = ((((-(this->_parent->originX) + this->_parent->width)) * axis->x) - (this->_parent->originY * axis->y));
		HX_STACK_LINE(109)
		if (((cur < min))){
			HX_STACK_LINE(110)
			min = cur;
		}
		HX_STACK_LINE(111)
		if (((cur > max))){
			HX_STACK_LINE(112)
			max = cur;
		}
		HX_STACK_LINE(114)
		cur = ((-(this->_parent->originX) * axis->x) + (((-(this->_parent->originY) + this->_parent->height)) * axis->y));
		HX_STACK_LINE(115)
		if (((cur < min))){
			HX_STACK_LINE(116)
			min = cur;
		}
		HX_STACK_LINE(117)
		if (((cur > max))){
			HX_STACK_LINE(118)
			max = cur;
		}
		HX_STACK_LINE(120)
		cur = ((((-(this->_parent->originX) + this->_parent->width)) * axis->x) + (((-(this->_parent->originY) + this->_parent->height)) * axis->y));
		HX_STACK_LINE(121)
		if (((cur < min))){
			HX_STACK_LINE(122)
			min = cur;
		}
		HX_STACK_LINE(123)
		if (((cur > max))){
			HX_STACK_LINE(124)
			max = cur;
		}
		HX_STACK_LINE(126)
		projection->min = min;
		HX_STACK_LINE(127)
		projection->max = max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,project,(void))


Mask_obj::Mask_obj()
{
}

void Mask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mask);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_check,"_check");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void Mask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_check,"_check");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic Mask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return get_parent(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_check") ) { return _check; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::com::haxepunk::masks::Masklist >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return set_parent(inValue); }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_check") ) { _check=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("_check"));
	outFields->push(HX_CSTRING("_parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::masks::Masklist*/ ,(int)offsetof(Mask_obj,list),HX_CSTRING("list")},
	{hx::fsString,(int)offsetof(Mask_obj,_class),HX_CSTRING("_class")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Mask_obj,_check),HX_CSTRING("_check")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Mask_obj,_parent),HX_CSTRING("_parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("list"),
	HX_CSTRING("collide"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("update"),
	HX_CSTRING("project"),
	HX_CSTRING("_class"),
	HX_CSTRING("_check"),
	HX_CSTRING("_parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#endif

Class Mask_obj::__mClass;

void Mask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Mask"), hx::TCanCast< Mask_obj> ,sStaticFields,sMemberFields,
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

void Mask_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
