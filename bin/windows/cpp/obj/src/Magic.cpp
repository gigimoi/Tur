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
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
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
#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void Magic_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Magic","new",0xf4bc8c7f,"Magic.new","Magic.hx",11,0xdb36c7d1)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(12)
	super::__construct(x,y,null(),null());
	HX_STACK_LINE(13)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Magic.hx",13,0xdb36c7d1)
			{
				HX_STACK_LINE(13)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Magic.hx",13,0xdb36c7d1)
						{
							HX_STACK_LINE(13)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(13)
							{
								HX_STACK_LINE(13)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(13)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/magic.png")))){
									HX_STACK_LINE(13)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/magic.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(13)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(13)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/magic.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(13)
									if (((bitmap != null()))){
										HX_STACK_LINE(13)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/magic.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(13)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(13)
								data = data1;
							}
							HX_STACK_LINE(13)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(13)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(13)
				::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(13)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(13)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Magic.hx",13,0xdb36c7d1)
			{
				HX_STACK_LINE(13)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/magic.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(13)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(13)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(13)
	::com::haxepunk::graphics::Spritemap _g6 = ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)3,(int)5,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(13)
	this->magic = _g6;
	HX_STACK_LINE(14)
	this->magic->add(HX_CSTRING("red"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2),(int)15,null());
	HX_STACK_LINE(15)
	this->magic->add(HX_CSTRING("green"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)5).Add((int)4),(int)15,null());
	HX_STACK_LINE(16)
	this->magic->add(HX_CSTRING("blue"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)8).Add((int)7),(int)15,null());
	HX_STACK_LINE(17)
	this->magic->add(HX_CSTRING("purple"),Array_obj< int >::__new().Add((int)9).Add((int)10).Add((int)11).Add((int)10),(int)15,null());
	HX_STACK_LINE(18)
	this->magic->smooth = false;
	HX_STACK_LINE(19)
	this->magic->play(HX_CSTRING("red"),null(),null());
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		this->width = (int)1;
		HX_STACK_LINE(20)
		this->height = (int)1;
		HX_STACK_LINE(20)
		this->originX = (int)-1;
		HX_STACK_LINE(20)
		this->originY = (int)-1;
	}
	HX_STACK_LINE(21)
	::lime::math::Vector2 _g7 = ::lime::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(21)
	this->velocity = _g7;
	HX_STACK_LINE(22)
	this->set_graphic(this->magic);
	HX_STACK_LINE(23)
	this->lifetime = (int)60;
	HX_STACK_LINE(24)
	this->inert = false;
	HX_STACK_LINE(25)
	Array< ::Dynamic > _g8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(25)
	this->whitelistCollisions = _g8;
}
;
	return null();
}

//Magic_obj::~Magic_obj() { }

Dynamic Magic_obj::__CreateEmpty() { return  new Magic_obj; }
hx::ObjectPtr< Magic_obj > Magic_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Magic_obj > result = new Magic_obj();
	result->__construct(x,y);
	return result;}

Dynamic Magic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Magic_obj > result = new Magic_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Magic_obj::render( ){
{
		HX_STACK_FRAME("Magic","render",0x1a5bcc97,"Magic.render","Magic.hx",28,0xdb36c7d1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::Magic _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) - 1.5);
		}
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			::Magic _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) - 1.5);
		}
		HX_STACK_LINE(31)
		this->super::render();
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::Magic _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			_g->x = (((  ((_g->followCamera)) ? Float((_g->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g->x) )) + 1.5);
		}
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::Magic _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			_g->y = (((  ((_g->followCamera)) ? Float((_g->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g->y) )) + 1.5);
		}
	}
return null();
}


Void Magic_obj::update( ){
{
		HX_STACK_FRAME("Magic","update",0x9c37e74a,"Magic.update","Magic.hx",35,0xdb36c7d1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::update();
		HX_STACK_LINE(37)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromRight(Array_obj< ::String >::__new().Add(HX_CSTRING("block")).Add(HX_CSTRING("blockFlammable")).Add(HX_CSTRING("player")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		::com::haxepunk::Entity collision = this->collideTypes(_g,(((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + this->velocity->x),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + this->velocity->y));		HX_STACK_VAR(collision,"collision");
		HX_STACK_LINE(38)
		if (((  (((collision != null()))) ? bool(!(::Lambda_obj::has(this->whitelistCollisions,collision))) : bool(false) ))){
			HX_STACK_LINE(39)
			if (((collision->_type == HX_CSTRING("blockFlammable")))){
				HX_STACK_LINE(40)
				::BlockFlammable flammable;		HX_STACK_VAR(flammable,"flammable");
				HX_STACK_LINE(40)
				flammable = hx::TCast< BlockFlammable >::cast(collision);
				HX_STACK_LINE(41)
				flammable->onFire = true;
			}
			HX_STACK_LINE(43)
			::lime::math::Vector2 _g1 = ::lime::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			this->velocity = _g1;
		}
		else{
			HX_STACK_LINE(45)
			this->moveBy(this->velocity->x,this->velocity->y,null(),null());
		}
		HX_STACK_LINE(47)
		(this->lifetime)--;
		HX_STACK_LINE(48)
		if (((this->lifetime <= (int)0))){
			HX_STACK_LINE(49)
			this->_scene->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}



Magic_obj::Magic_obj()
{
}

void Magic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Magic);
	HX_MARK_MEMBER_NAME(magic,"magic");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(lifetime,"lifetime");
	HX_MARK_MEMBER_NAME(inert,"inert");
	HX_MARK_MEMBER_NAME(whitelistCollisions,"whitelistCollisions");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Magic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(magic,"magic");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(lifetime,"lifetime");
	HX_VISIT_MEMBER_NAME(inert,"inert");
	HX_VISIT_MEMBER_NAME(whitelistCollisions,"whitelistCollisions");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Magic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"magic") ) { return magic; }
		if (HX_FIELD_EQ(inName,"inert") ) { return inert; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"lifetime") ) { return lifetime; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whitelistCollisions") ) { return whitelistCollisions; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Magic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"magic") ) { magic=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inert") ) { inert=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifetime") ) { lifetime=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whitelistCollisions") ) { whitelistCollisions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Magic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("magic"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("lifetime"));
	outFields->push(HX_CSTRING("inert"));
	outFields->push(HX_CSTRING("whitelistCollisions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Magic_obj,magic),HX_CSTRING("magic")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(Magic_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsInt,(int)offsetof(Magic_obj,lifetime),HX_CSTRING("lifetime")},
	{hx::fsBool,(int)offsetof(Magic_obj,inert),HX_CSTRING("inert")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Magic_obj,whitelistCollisions),HX_CSTRING("whitelistCollisions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("magic"),
	HX_CSTRING("velocity"),
	HX_CSTRING("lifetime"),
	HX_CSTRING("inert"),
	HX_CSTRING("whitelistCollisions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Magic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Magic_obj::__mClass,"__mClass");
};

#endif

Class Magic_obj::__mClass;

void Magic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Magic"), hx::TCanCast< Magic_obj> ,sStaticFields,sMemberFields,
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

void Magic_obj::__boot()
{
}

