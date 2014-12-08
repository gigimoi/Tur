#include <hxcpp.h>

#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif

Void Block_obj::__construct(int x,int y)
{
HX_STACK_FRAME("Block","new",0xdb44209f,"Block.new","Block.hx",10,0xf33517b1)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(11)
	super::__construct((x * (int)10),(y * (int)10),null(),null());
	HX_STACK_LINE(12)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Block.hx",12,0xf33517b1)
			{
				HX_STACK_LINE(12)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Block.hx",12,0xf33517b1)
						{
							HX_STACK_LINE(12)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(12)
							{
								HX_STACK_LINE(12)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(12)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/block1.png")))){
									HX_STACK_LINE(12)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/block1.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(12)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(12)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/block1.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(12)
									if (((bitmap != null()))){
										HX_STACK_LINE(12)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/block1.png"),null());		HX_STACK_VAR(_g1,"_g1");
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
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Block.hx",12,0xf33517b1)
			{
				HX_STACK_LINE(12)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/block1.png"));		HX_STACK_VAR(_g4,"_g4");
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
	{
		HX_STACK_LINE(15)
		int originX = (int)0;		HX_STACK_VAR(originX,"originX");
		HX_STACK_LINE(15)
		int originY = (int)0;		HX_STACK_VAR(originY,"originY");
		HX_STACK_LINE(15)
		this->width = (int)10;
		HX_STACK_LINE(15)
		this->height = (int)10;
		HX_STACK_LINE(15)
		this->originX = originX;
		HX_STACK_LINE(15)
		this->originY = originY;
	}
	HX_STACK_LINE(16)
	this->set_type(HX_CSTRING("block"));
}
;
	return null();
}

//Block_obj::~Block_obj() { }

Dynamic Block_obj::__CreateEmpty() { return  new Block_obj; }
hx::ObjectPtr< Block_obj > Block_obj::__new(int x,int y)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(x,y);
	return result;}

Dynamic Block_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Block_obj::Block_obj()
{
}

Dynamic Block_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Block_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Block_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Block_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Block_obj::__mClass,"__mClass");
};

#endif

Class Block_obj::__mClass;

void Block_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Block"), hx::TCanCast< Block_obj> ,sStaticFields,sMemberFields,
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

void Block_obj::__boot()
{
}

