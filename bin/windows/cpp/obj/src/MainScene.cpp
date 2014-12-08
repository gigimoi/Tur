#include <hxcpp.h>

#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_BlockFlammable
#include <BlockFlammable.h>
#endif
#ifndef INCLUDED_Magic
#include <Magic.h>
#endif
#ifndef INCLUDED_MainScene
#include <MainScene.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",8,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Void MainScene_obj::begin( ){
{
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",10,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11)
		::Player player = ::Player_obj::__new((int)5,(int)4);		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(12)
		{
			HX_STACK_LINE(12)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(12)
			while((true)){
				HX_STACK_LINE(12)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(12)
					break;
				}
				HX_STACK_LINE(12)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(13)
				::Block _g1 = ::Block_obj::__new(i,(int)5);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(13)
				this->add(_g1);
			}
		}
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			while((true)){
				HX_STACK_LINE(15)
				if ((!(((_g < (int)15))))){
					HX_STACK_LINE(15)
					break;
				}
				HX_STACK_LINE(15)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(16)
				::Block _g1 = ::Block_obj::__new((i + (int)9),(int)7);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(16)
				this->add(_g1);
			}
		}
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(18)
			while((true)){
				HX_STACK_LINE(18)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(18)
					break;
				}
				HX_STACK_LINE(18)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(19)
				::BlockFlammable _g2 = ::BlockFlammable_obj::__new(((int)15 + i),(int)6);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(19)
				this->add(_g2);
			}
		}
		HX_STACK_LINE(21)
		this->add(player);
		HX_STACK_LINE(22)
		this->add(player->magic);
	}
return null();
}



MainScene_obj::MainScene_obj()
{
}

Dynamic MainScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("begin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#endif

Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainScene"), hx::TCanCast< MainScene_obj> ,sStaticFields,sMemberFields,
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

void MainScene_obj::__boot()
{
}

