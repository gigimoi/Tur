#include <hxcpp.h>

#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_BlockFlammable
#include <BlockFlammable.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Magic
#include <Magic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void BlockFlammable_obj::__construct(int x,int y)
{
HX_STACK_FRAME("BlockFlammable","new",0xb680799a,"BlockFlammable.new","BlockFlammable.hx",10,0x97343716)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(11)
	super::__construct(x,y);
	HX_STACK_LINE(12)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BlockFlammable.hx",12,0x97343716)
			{
				HX_STACK_LINE(12)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BlockFlammable.hx",12,0x97343716)
						{
							HX_STACK_LINE(12)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(12)
							{
								HX_STACK_LINE(12)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(12)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/block2.png")))){
									HX_STACK_LINE(12)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/block2.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(12)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(12)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/block2.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(12)
									if (((bitmap != null()))){
										HX_STACK_LINE(12)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/block2.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(12)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(12)
								data = data1;
							}
							HX_STACK_LINE(12)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(12)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(12)
				::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(12)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(12)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","BlockFlammable.hx",12,0x97343716)
			{
				HX_STACK_LINE(12)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/block2.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(12)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(12)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(12)
	::com::haxepunk::graphics::Image img = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(13)
	img->smooth = false;
	HX_STACK_LINE(14)
	this->set_graphic(img);
	HX_STACK_LINE(15)
	this->set_type(HX_CSTRING("blockFlammable"));
	HX_STACK_LINE(16)
	this->fireTime = (int)0;
	HX_STACK_LINE(17)
	this->fireTicker = (int)0;
}
;
	return null();
}

//BlockFlammable_obj::~BlockFlammable_obj() { }

Dynamic BlockFlammable_obj::__CreateEmpty() { return  new BlockFlammable_obj; }
hx::ObjectPtr< BlockFlammable_obj > BlockFlammable_obj::__new(int x,int y)
{  hx::ObjectPtr< BlockFlammable_obj > result = new BlockFlammable_obj();
	result->__construct(x,y);
	return result;}

Dynamic BlockFlammable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlockFlammable_obj > result = new BlockFlammable_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BlockFlammable_obj::update( ){
{
		HX_STACK_FRAME("BlockFlammable","update",0xcfbedd0f,"BlockFlammable.update","BlockFlammable.hx",19,0x97343716)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::update();
		HX_STACK_LINE(21)
		if ((this->onFire)){
			HX_STACK_LINE(22)
			if (((this->fireTime < (int)2))){
				HX_STACK_LINE(23)
				hx::AddEq(this->fireTime,0.01);
			}
			HX_STACK_LINE(25)
			hx::AddEq(this->fireTicker,this->fireTime);
			HX_STACK_LINE(26)
			while((true)){
				HX_STACK_LINE(26)
				if ((!(((this->fireTicker > (int)1))))){
					HX_STACK_LINE(26)
					break;
				}
				HX_STACK_LINE(27)
				(this->fireTicker)--;
				HX_STACK_LINE(28)
				Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				Float _g1 = (_g * (int)8);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(28)
				Float _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(28)
				_g2 = ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - (int)1) + _g1);
				HX_STACK_LINE(28)
				Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(28)
				Float _g4 = (_g3 * (int)8);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(28)
				Float _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(28)
				_g5 = ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - (int)1) + _g4);
				HX_STACK_LINE(28)
				::Magic magic = ::Magic_obj::__new(_g2,_g5);		HX_STACK_VAR(magic,"magic");
				HX_STACK_LINE(29)
				this->_scene->add(magic);
				HX_STACK_LINE(30)
				Float _g6 = ::Math_obj::random();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(30)
				Float _g7 = (_g6 - 0.5);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(30)
				Float _g8 = (Float(_g7) / Float(2.0));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(30)
				Float _g9 = ::Math_obj::random();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(30)
				Float _g10 = (_g9 - 0.5);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(30)
				Float _g11 = (Float(_g10) / Float(2.0));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(30)
				::lime::math::Vector2 _g12 = ::lime::math::Vector2_obj::__new(_g8,_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(30)
				magic->velocity = _g12;
				HX_STACK_LINE(31)
				Float _g13 = ::Math_obj::random();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(31)
				Float _g14 = (_g13 * (int)10);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(31)
				int _g15 = ((Float(magic->lifetime) / Float((int)8)) + _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(31)
				magic->lifetime = _g15;
				HX_STACK_LINE(32)
				magic->whitelistCollisions->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else{
			HX_STACK_LINE(35)
			if (((this->fireTime > (int)0))){
				HX_STACK_LINE(36)
				hx::SubEq(this->fireTime,0.1);
			}
		}
	}
return null();
}



BlockFlammable_obj::BlockFlammable_obj()
{
}

Dynamic BlockFlammable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onFire") ) { return onFire; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireTime") ) { return fireTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fireTicker") ) { return fireTicker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlockFlammable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onFire") ) { onFire=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireTime") ) { fireTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fireTicker") ) { fireTicker=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlockFlammable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onFire"));
	outFields->push(HX_CSTRING("fireTime"));
	outFields->push(HX_CSTRING("fireTicker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BlockFlammable_obj,onFire),HX_CSTRING("onFire")},
	{hx::fsFloat,(int)offsetof(BlockFlammable_obj,fireTime),HX_CSTRING("fireTime")},
	{hx::fsFloat,(int)offsetof(BlockFlammable_obj,fireTicker),HX_CSTRING("fireTicker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("onFire"),
	HX_CSTRING("fireTime"),
	HX_CSTRING("fireTicker"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlockFlammable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlockFlammable_obj::__mClass,"__mClass");
};

#endif

Class BlockFlammable_obj::__mClass;

void BlockFlammable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BlockFlammable"), hx::TCanCast< BlockFlammable_obj> ,sStaticFields,sMemberFields,
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

void BlockFlammable_obj::__boot()
{
}

