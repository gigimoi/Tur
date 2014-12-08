#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Scene_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Scene","new",0x953d18e5,"com.haxepunk.Scene.new","com/haxepunk/Scene.hx",31,0x175da20b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	this->visible = true;
	HX_STACK_LINE(34)
	::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	this->camera = _g;
	HX_STACK_LINE(35)
	::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(35)
	this->sprite = _g1;
	HX_STACK_LINE(37)
	Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	this->_layerList = _g2;
	HX_STACK_LINE(39)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(39)
	this->_add = _g3;
	HX_STACK_LINE(40)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(40)
	this->_remove = _g4;
	HX_STACK_LINE(41)
	Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(41)
	this->_recycle = _g5;
	HX_STACK_LINE(43)
	::List _g6 = ::List_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(43)
	this->_update = _g6;
	HX_STACK_LINE(44)
	::haxe::ds::IntMap _g7 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(44)
	this->_layerDisplay = _g7;
	HX_STACK_LINE(45)
	::haxe::ds::IntMap _g8 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(45)
	this->_layers = _g8;
	HX_STACK_LINE(46)
	::haxe::ds::StringMap _g9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(46)
	this->_types = _g9;
	HX_STACK_LINE(48)
	::haxe::ds::StringMap _g10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(48)
	this->_classCount = _g10;
	HX_STACK_LINE(49)
	::haxe::ds::StringMap _g11 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(49)
	this->_recycled = _g11;
	HX_STACK_LINE(50)
	::haxe::ds::StringMap _g12 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(50)
	this->_entityNames = _g12;
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::begin( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","begin",0x48861dee,"com.haxepunk.Scene.begin","com/haxepunk/Scene.hx",56,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,begin,(void))

Void Scene_obj::end( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","end",0x95364c60,"com.haxepunk.Scene.end","com/haxepunk/Scene.hx",61,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,end,(void))

Void Scene_obj::focusGained( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","focusGained",0x4443c21b,"com.haxepunk.Scene.focusGained","com/haxepunk/Scene.hx",66,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusGained,(void))

Void Scene_obj::focusLost( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","focusLost",0x6cf8fc21,"com.haxepunk.Scene.focusLost","com/haxepunk/Scene.hx",71,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusLost,(void))

Void Scene_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","update",0x19029ea4,"com.haxepunk.Scene.update","com/haxepunk/Scene.hx",81,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_update->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			{
				HX_STACK_LINE(83)
				if ((e->active)){
					HX_STACK_LINE(85)
					if ((e->get_hasTween())){
						HX_STACK_LINE(85)
						e->updateTweens();
					}
					HX_STACK_LINE(86)
					e->update();
				}
				HX_STACK_LINE(88)
				if (((bool((e->_graphic != null())) && bool(e->_graphic->active)))){
					HX_STACK_LINE(88)
					e->_graphic->update();
				}
			}
;
		}
	}
return null();
}


Void Scene_obj::showLayer( int layer,hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","showLayer",0xebdae1d9,"com.haxepunk.Scene.showLayer","com/haxepunk/Scene.hx",99,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(99)
		this->_layerDisplay->set(layer,show);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,showLayer,(void))

bool Scene_obj::layerVisible( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerVisible",0x74c4697c,"com.haxepunk.Scene.layerVisible","com/haxepunk/Scene.hx",107,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(107)
	if ((!((!(this->_layerDisplay->exists(layer)))))){
		HX_STACK_LINE(107)
		return this->_layerDisplay->get(layer);
	}
	else{
		HX_STACK_LINE(107)
		return true;
	}
	HX_STACK_LINE(107)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerVisible,return )

int Scene_obj::layerSort( int a,int b){
	HX_STACK_FRAME("com.haxepunk.Scene","layerSort",0xdc3b8c14,"com.haxepunk.Scene.layerSort","com/haxepunk/Scene.hx",115,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(115)
	return (b - a);
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,layerSort,return )

Void Scene_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","render",0x972683f1,"com.haxepunk.Scene.render","com/haxepunk/Scene.hx",124,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(126)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(126)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics()->clear();
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			Array< int > _g1 = this->_layerList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				int layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(129)
				++(_g);
				HX_STACK_LINE(131)
				if ((!(((  ((!((!(this->_layerDisplay->exists(layer)))))) ? bool(this->_layerDisplay->get(layer)) : bool(true) ))))){
					HX_STACK_LINE(131)
					continue;
				}
				HX_STACK_LINE(132)
				for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_layers->get(layer)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
					::com::haxepunk::Entity e = __it->next();
					if ((e->visible)){
						HX_STACK_LINE(134)
						e->render();
					}
;
				}
			}
		}
		HX_STACK_LINE(138)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(139)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
				HX_STACK_LINE(139)
				if (((::com::haxepunk::graphics::atlas::AtlasData_obj::active != null()))){
					HX_STACK_LINE(139)
					::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(139)
					if (((_this->_dataIndex != (int)0))){
						HX_STACK_LINE(139)
						::openfl::_v2::display::Graphics _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(139)
						_this->_tilesheet->drawTiles(_g,_this->_data,false,_this->_renderFlags,_this->_dataIndex);
						HX_STACK_LINE(139)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(139)
					if (((_this->_smoothDataIndex != (int)0))){
						HX_STACK_LINE(139)
						::openfl::_v2::display::Graphics _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->sprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(139)
						_this->_tilesheet->drawTiles(_g1,_this->_smoothData,true,_this->_renderFlags,_this->_smoothDataIndex);
						HX_STACK_LINE(139)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(139)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = null();
			}
			HX_STACK_LINE(139)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,render,(void))

int Scene_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_mouseX",0x6e1abc77,"com.haxepunk.Scene.get_mouseX","com/haxepunk/Scene.hx",147,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	int _g = ::com::haxepunk::HXP_obj::screen->get_mouseX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(148)
	Float _g1 = (_g + this->camera->x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(148)
	return ::Std_obj::_int(_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

int Scene_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_mouseY",0x6e1abc78,"com.haxepunk.Scene.get_mouseY","com/haxepunk/Scene.hx",156,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	int _g = ::com::haxepunk::HXP_obj::screen->get_mouseY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(157)
	Float _g1 = (_g + this->camera->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(157)
	return ::Std_obj::_int(_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

Dynamic Scene_obj::add( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","add",0x95333aa6,"com.haxepunk.Scene.add","com/haxepunk/Scene.hx",171,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(172)
	this->_add[this->_add->length] = e;
	HX_STACK_LINE(173)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,return )

Dynamic Scene_obj::remove( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","remove",0x9685b4df,"com.haxepunk.Scene.remove","com/haxepunk/Scene.hx",182,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(183)
	this->_remove[this->_remove->length] = e;
	HX_STACK_LINE(184)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Void Scene_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeAll",0x189b1182,"com.haxepunk.Scene.removeAll","com/haxepunk/Scene.hx",192,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_update->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			this->_remove[this->_remove->length] = e;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAll,(void))

Void Scene_obj::addList( Dynamic list){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addList",0xaf68ce24,"com.haxepunk.Scene.addList","com/haxepunk/Scene.hx",204,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(204)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->add(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addList,(void))

Void Scene_obj::removeList( Dynamic list){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeList",0x765758dd,"com.haxepunk.Scene.removeList","com/haxepunk/Scene.hx",213,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(213)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->remove(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeList,(void))

::com::haxepunk::Entity Scene_obj::addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  __o_layer,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int layer = __o_layer.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Scene","addGraphic",0x8d1688a2,"com.haxepunk.Scene.addGraphic","com/haxepunk/Scene.hx",225,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(226)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,graphic,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(227)
		e->set_layer(layer);
		HX_STACK_LINE(228)
		e->active = false;
		HX_STACK_LINE(229)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addGraphic,return )

::com::haxepunk::Entity Scene_obj::addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Scene","addMask",0xb00bf2b2,"com.haxepunk.Scene.addMask","com/haxepunk/Scene.hx",241,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(242)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,null(),mask);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(243)
		if (((type != HX_CSTRING("")))){
			HX_STACK_LINE(243)
			e->set_type(type);
		}
		HX_STACK_LINE(244)
		bool _g = e->visible = false;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		e->active = _g;
		HX_STACK_LINE(245)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addMask,return )

Dynamic Scene_obj::create( ::Class classType,hx::Null< bool >  __o_addToScene,Dynamic constructorsArgs){
bool addToScene = __o_addToScene.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","create",0x0e0c7f97,"com.haxepunk.Scene.create","com/haxepunk/Scene.hx",256,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(addToScene,"addToScene")
	HX_STACK_ARG(constructorsArgs,"constructorsArgs")
{
		HX_STACK_LINE(257)
		::String className = ::Type_obj::getClassName(classType);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(258)
		::com::haxepunk::Entity e = this->_recycled->get(className);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(259)
		if (((e != null()))){
			HX_STACK_LINE(261)
			this->_recycled->set(className,e->_recycleNext);
			HX_STACK_LINE(262)
			e->_recycleNext = null();
		}
		else{
			HX_STACK_LINE(266)
			if (((constructorsArgs != null()))){
				HX_STACK_LINE(267)
				Dynamic _g = ::Type_obj::createInstance(classType,constructorsArgs);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(267)
				e = _g;
			}
			else{
				HX_STACK_LINE(269)
				Dynamic _g1 = ::Type_obj::createInstance(classType,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(269)
				e = _g1;
			}
		}
		HX_STACK_LINE(272)
		return (  ((addToScene)) ? ::com::haxepunk::Entity(this->add(e)) : ::com::haxepunk::Entity(e) );
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,create,return )

Dynamic Scene_obj::recycle( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","recycle",0x63047f18,"com.haxepunk.Scene.recycle","com/haxepunk/Scene.hx",282,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(283)
	this->_recycle[this->_recycle->length] = e;
	HX_STACK_LINE(284)
	return this->remove(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,recycle,return )

Void Scene_obj::clearRecycled( ::Class classType){
{
		HX_STACK_FRAME("com.haxepunk.Scene","clearRecycled",0x4a400463,"com.haxepunk.Scene.clearRecycled","com/haxepunk/Scene.hx",292,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(classType,"classType")
		HX_STACK_LINE(293)
		::String className = ::Type_obj::getClassName(classType);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(294)
		::com::haxepunk::Entity e = this->_recycled->get(className);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(293)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(296)
		while((true)){
			HX_STACK_LINE(296)
			if ((!(((e != null()))))){
				HX_STACK_LINE(296)
				break;
			}
			HX_STACK_LINE(298)
			n = e->_recycleNext;
			HX_STACK_LINE(299)
			e->_recycleNext = null();
			HX_STACK_LINE(300)
			e = n;
		}
		HX_STACK_LINE(302)
		this->_recycled->remove(className);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,clearRecycled,(void))

Void Scene_obj::clearRecycledAll( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","clearRecycledAll",0x843c4c7e,"com.haxepunk.Scene.clearRecycledAll","com/haxepunk/Scene.hx",309,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(311)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_recycled->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			{
				HX_STACK_LINE(313)
				::Class _g = ::Type_obj::getClass(e1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(313)
				this->clearRecycled(_g);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearRecycledAll,(void))

bool Scene_obj::bringToFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","bringToFront",0x92a77917,"com.haxepunk.Scene.bringToFront","com/haxepunk/Scene.hx",323,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(324)
	if (((e->_scene != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(324)
		return false;
	}
	HX_STACK_LINE(325)
	::List list = this->_layers->get(e->_layer);		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(326)
	list->remove(e);
	HX_STACK_LINE(327)
	list->push(e);
	HX_STACK_LINE(328)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringToFront,return )

bool Scene_obj::sendToBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","sendToBack",0xc9a56ec5,"com.haxepunk.Scene.sendToBack","com/haxepunk/Scene.hx",337,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(338)
	if (((e->_scene != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(338)
		return false;
	}
	HX_STACK_LINE(339)
	::List list = this->_layers->get(e->_layer);		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(340)
	list->remove(e);
	HX_STACK_LINE(341)
	list->add(e);
	HX_STACK_LINE(342)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendToBack,return )

bool Scene_obj::bringForward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","bringForward",0xa55ff5ae,"com.haxepunk.Scene.bringForward","com/haxepunk/Scene.hx",351,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(352)
	if (((e->_scene != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(352)
		return false;
	}
	HX_STACK_LINE(354)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringForward,return )

bool Scene_obj::sendBackward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","sendBackward",0x4633ac26,"com.haxepunk.Scene.sendBackward","com/haxepunk/Scene.hx",363,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(364)
	if (((e->_scene != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(364)
		return false;
	}
	HX_STACK_LINE(366)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendBackward,return )

bool Scene_obj::isAtFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","isAtFront",0x0e77da31,"com.haxepunk.Scene.isAtFront","com/haxepunk/Scene.hx",375,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(376)
	::com::haxepunk::Entity _g = this->_layers->get(e->_layer)->__Field(HX_CSTRING("first"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(376)
	return (e == _g);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtFront,return )

bool Scene_obj::isAtBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","isAtBack",0xf555a19f,"com.haxepunk.Scene.isAtBack","com/haxepunk/Scene.hx",385,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(386)
	::com::haxepunk::Entity _g = this->_layers->get(e->_layer)->__Field(HX_CSTRING("last"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(386)
	return (e == _g);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtBack,return )

::com::haxepunk::Entity Scene_obj::collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_FRAME("com.haxepunk.Scene","collideRect",0x60419547,"com.haxepunk.Scene.collideRect","com/haxepunk/Scene.hx",399,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(rX,"rX")
	HX_STACK_ARG(rY,"rY")
	HX_STACK_ARG(rWidth,"rWidth")
	HX_STACK_ARG(rHeight,"rHeight")
	HX_STACK_LINE(400)
	if ((this->_types->exists(type))){
		HX_STACK_LINE(402)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((  ((e->collidable)) ? bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),rX,rY,rWidth,rHeight)) : bool(false) ))){
				HX_STACK_LINE(404)
				return e;
			}
;
		}
	}
	HX_STACK_LINE(407)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideRect,return )

::com::haxepunk::Entity Scene_obj::collidePoint( ::String type,Float pX,Float pY){
	HX_STACK_FRAME("com.haxepunk.Scene","collidePoint",0xb8f48acd,"com.haxepunk.Scene.collidePoint","com/haxepunk/Scene.hx",418,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_LINE(419)
	::com::haxepunk::Entity result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(420)
	if ((this->_types->exists(type))){
		HX_STACK_LINE(422)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((  ((e->collidable)) ? bool(e->collidePoint((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),pX,pY)) : bool(false) ))){
				HX_STACK_LINE(428)
				if (((result == null()))){
					HX_STACK_LINE(430)
					result = e;
				}
				else{
					HX_STACK_LINE(433)
					if (((e->_layer < result->_layer))){
						HX_STACK_LINE(435)
						result = e;
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(440)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,collidePoint,return )

::com::haxepunk::Entity Scene_obj::collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  __o_precision,::openfl::_v2::geom::Point p){
int precision = __o_precision.Default(1);
	HX_STACK_FRAME("com.haxepunk.Scene","collideLine",0x5c4d6017,"com.haxepunk.Scene.collideLine","com/haxepunk/Scene.hx",455,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_ARG(p,"p")
{
		HX_STACK_LINE(457)
		if (((precision < (int)1))){
			HX_STACK_LINE(457)
			precision = (int)1;
		}
		HX_STACK_LINE(458)
		Float _g = ::Math_obj::sqrt(((((toX - fromX)) * ((toX - fromX))) + (((toY - fromY)) * ((toY - fromY)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		if (((_g < precision))){
			HX_STACK_LINE(460)
			if (((p != null()))){
				HX_STACK_LINE(462)
				if (((bool((fromX == toX)) && bool((fromY == toY))))){
					HX_STACK_LINE(464)
					p->x = toX;
					HX_STACK_LINE(464)
					p->y = toY;
					HX_STACK_LINE(465)
					return this->collidePoint(type,toX,toY);
				}
				HX_STACK_LINE(467)
				return this->collideLine(type,fromX,fromY,toX,toY,(int)1,p);
			}
			else{
				HX_STACK_LINE(469)
				return this->collidePoint(type,fromX,toY);
			}
		}
		HX_STACK_LINE(473)
		Float _g1 = ::Math_obj::abs((toX - fromX));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(473)
		int xDelta = ::Std_obj::_int(_g1);		HX_STACK_VAR(xDelta,"xDelta");
		HX_STACK_LINE(474)
		Float _g2 = ::Math_obj::abs((toY - fromY));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(474)
		int yDelta = ::Std_obj::_int(_g2);		HX_STACK_VAR(yDelta,"yDelta");
		HX_STACK_LINE(475)
		Float xSign;		HX_STACK_VAR(xSign,"xSign");
		HX_STACK_LINE(475)
		if (((toX > fromX))){
			HX_STACK_LINE(475)
			xSign = precision;
		}
		else{
			HX_STACK_LINE(475)
			xSign = -(precision);
		}
		HX_STACK_LINE(476)
		Float ySign;		HX_STACK_VAR(ySign,"ySign");
		HX_STACK_LINE(476)
		if (((toY > fromY))){
			HX_STACK_LINE(476)
			ySign = precision;
		}
		else{
			HX_STACK_LINE(476)
			ySign = -(precision);
		}
		HX_STACK_LINE(477)
		Float x = fromX;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(477)
		Float y = fromY;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(473)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(480)
		if (((xDelta > yDelta))){
			HX_STACK_LINE(482)
			hx::MultEq(ySign,(Float(yDelta) / Float(xDelta)));
			HX_STACK_LINE(483)
			if (((xSign > (int)0))){
				HX_STACK_LINE(485)
				while((true)){
					HX_STACK_LINE(485)
					if ((!(((x < toX))))){
						HX_STACK_LINE(485)
						break;
					}
					HX_STACK_LINE(487)
					::com::haxepunk::Entity _g3 = this->collidePoint(type,x,y);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(487)
					::com::haxepunk::Entity _g4 = e = _g3;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(487)
					if (((_g4 != null()))){
						HX_STACK_LINE(489)
						if (((p == null()))){
							HX_STACK_LINE(489)
							return e;
						}
						HX_STACK_LINE(490)
						if (((precision < (int)2))){
							HX_STACK_LINE(492)
							p->x = (x - xSign);
							HX_STACK_LINE(492)
							p->y = (y - ySign);
							HX_STACK_LINE(493)
							return e;
						}
						HX_STACK_LINE(495)
						int _g5 = ::Std_obj::_int((x - xSign));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(495)
						int _g6 = ::Std_obj::_int((y - ySign));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(495)
						return this->collideLine(type,_g5,_g6,toX,toY,(int)1,p);
					}
					HX_STACK_LINE(497)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(497)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(502)
				while((true)){
					HX_STACK_LINE(502)
					if ((!(((x > toX))))){
						HX_STACK_LINE(502)
						break;
					}
					HX_STACK_LINE(504)
					::com::haxepunk::Entity _g7 = this->collidePoint(type,x,y);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(504)
					::com::haxepunk::Entity _g8 = e = _g7;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(504)
					if (((_g8 != null()))){
						HX_STACK_LINE(506)
						if (((p == null()))){
							HX_STACK_LINE(506)
							return e;
						}
						HX_STACK_LINE(507)
						if (((precision < (int)2))){
							HX_STACK_LINE(509)
							p->x = (x - xSign);
							HX_STACK_LINE(509)
							p->y = (y - ySign);
							HX_STACK_LINE(510)
							return e;
						}
						HX_STACK_LINE(512)
						int _g9 = ::Std_obj::_int((x - xSign));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(512)
						int _g10 = ::Std_obj::_int((y - ySign));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(512)
						return this->collideLine(type,_g9,_g10,toX,toY,(int)1,p);
					}
					HX_STACK_LINE(514)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(514)
					hx::AddEq(y,ySign);
				}
			}
		}
		else{
			HX_STACK_LINE(520)
			hx::MultEq(xSign,(Float(xDelta) / Float(yDelta)));
			HX_STACK_LINE(521)
			if (((ySign > (int)0))){
				HX_STACK_LINE(523)
				while((true)){
					HX_STACK_LINE(523)
					if ((!(((y < toY))))){
						HX_STACK_LINE(523)
						break;
					}
					HX_STACK_LINE(525)
					::com::haxepunk::Entity _g11 = this->collidePoint(type,x,y);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(525)
					::com::haxepunk::Entity _g12 = e = _g11;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(525)
					if (((_g12 != null()))){
						HX_STACK_LINE(527)
						if (((p == null()))){
							HX_STACK_LINE(527)
							return e;
						}
						HX_STACK_LINE(528)
						if (((precision < (int)2))){
							HX_STACK_LINE(530)
							p->x = (x - xSign);
							HX_STACK_LINE(530)
							p->y = (y - ySign);
							HX_STACK_LINE(531)
							return e;
						}
						HX_STACK_LINE(533)
						int _g13 = ::Std_obj::_int((x - xSign));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(533)
						int _g14 = ::Std_obj::_int((y - ySign));		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(533)
						return this->collideLine(type,_g13,_g14,toX,toY,(int)1,p);
					}
					HX_STACK_LINE(535)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(535)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(540)
				while((true)){
					HX_STACK_LINE(540)
					if ((!(((y > toY))))){
						HX_STACK_LINE(540)
						break;
					}
					HX_STACK_LINE(542)
					::com::haxepunk::Entity _g15 = this->collidePoint(type,x,y);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(542)
					::com::haxepunk::Entity _g16 = e = _g15;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(542)
					if (((_g16 != null()))){
						HX_STACK_LINE(544)
						if (((p == null()))){
							HX_STACK_LINE(544)
							return e;
						}
						HX_STACK_LINE(545)
						if (((precision < (int)2))){
							HX_STACK_LINE(547)
							p->x = (x - xSign);
							HX_STACK_LINE(547)
							p->y = (y - ySign);
							HX_STACK_LINE(548)
							return e;
						}
						HX_STACK_LINE(550)
						int _g17 = ::Std_obj::_int((x - xSign));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(550)
						int _g18 = ::Std_obj::_int((y - ySign));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(550)
						return this->collideLine(type,_g17,_g18,toX,toY,(int)1,p);
					}
					HX_STACK_LINE(552)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(552)
					hx::AddEq(y,ySign);
				}
			}
		}
		HX_STACK_LINE(558)
		if (((precision > (int)1))){
			HX_STACK_LINE(560)
			if (((p == null()))){
				HX_STACK_LINE(560)
				return this->collidePoint(type,toX,toY);
			}
			HX_STACK_LINE(561)
			::com::haxepunk::Entity _g19 = this->collidePoint(type,toX,toY);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(561)
			if (((_g19 != null()))){
				HX_STACK_LINE(561)
				int _g20 = ::Std_obj::_int((x - xSign));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(561)
				int _g21 = ::Std_obj::_int((y - ySign));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(561)
				return this->collideLine(type,_g20,_g21,toX,toY,(int)1,p);
			}
		}
		HX_STACK_LINE(565)
		if (((p != null()))){
			HX_STACK_LINE(567)
			p->x = toX;
			HX_STACK_LINE(568)
			p->y = toY;
		}
		HX_STACK_LINE(570)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Scene_obj,collideLine,return )

Void Scene_obj::collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collideRectInto",0xdb37b587,"com.haxepunk.Scene.collideRectInto","com/haxepunk/Scene.hx",584,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(rX,"rX")
		HX_STACK_ARG(rY,"rY")
		HX_STACK_ARG(rWidth,"rWidth")
		HX_STACK_ARG(rHeight,"rHeight")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(585)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(586)
		if ((this->_types->exists(type))){
			HX_STACK_LINE(588)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
				::com::haxepunk::Entity e = __it->next();
				if (((  ((e->collidable)) ? bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),rX,rY,rWidth,rHeight)) : bool(false) ))){
					HX_STACK_LINE(590)
					int _g = (n)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(590)
					hx::IndexRef((into).mPtr,_g) = e;
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,collideRectInto,(void))

Void Scene_obj::collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collideCircleInto",0x329baf33,"com.haxepunk.Scene.collideCircleInto","com/haxepunk/Scene.hx",605,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(circleX,"circleX")
		HX_STACK_ARG(circleY,"circleY")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(606)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(606)
			return null();
		}
		HX_STACK_LINE(607)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(609)
		hx::MultEq(radius,radius);
		struct _Function_1_1{
			inline static Float Block( Float &circleX,Float &circleY,::com::haxepunk::Entity &e){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Scene.hx",612,0x175da20b)
				{
					HX_STACK_LINE(612)
					Float x2;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(612)
					if ((e->followCamera)){
						HX_STACK_LINE(612)
						x2 = (e->x + ::com::haxepunk::HXP_obj::camera->x);
					}
					else{
						HX_STACK_LINE(612)
						x2 = e->x;
					}
					HX_STACK_LINE(612)
					Float y2;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(612)
					if ((e->followCamera)){
						HX_STACK_LINE(612)
						y2 = (e->y + ::com::haxepunk::HXP_obj::camera->y);
					}
					else{
						HX_STACK_LINE(612)
						y2 = e->y;
					}
					HX_STACK_LINE(612)
					return ((((x2 - circleX)) * ((x2 - circleX))) + (((y2 - circleY)) * ((y2 - circleY))));
				}
				return null();
			}
		};
		HX_STACK_LINE(610)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((_Function_1_1::Block(circleX,circleY,e) < radius))){
				HX_STACK_LINE(612)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(612)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideCircleInto,(void))

Void Scene_obj::collidePointInto( ::String type,Float pX,Float pY,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collidePointInto",0xc8bae60d,"com.haxepunk.Scene.collidePointInto","com/haxepunk/Scene.hx",625,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pX,"pX")
		HX_STACK_ARG(pY,"pY")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(626)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(626)
			return null();
		}
		HX_STACK_LINE(627)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(628)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if (((  ((e->collidable)) ? bool(e->collidePoint((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),pX,pY)) : bool(false) ))){
				HX_STACK_LINE(630)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(630)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,collidePointInto,(void))

::com::haxepunk::Entity Scene_obj::nearestToRect( ::String type,Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToRect",0x8b23e002,"com.haxepunk.Scene.nearestToRect","com/haxepunk/Scene.hx",644,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(645)
	if ((!(this->_types->exists(type)))){
		HX_STACK_LINE(645)
		return null();
	}
	HX_STACK_LINE(646)
	Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(646)
	Float nearDist = ((int)179 * _g);		HX_STACK_VAR(nearDist,"nearDist");
	HX_STACK_LINE(647)
	::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
	HX_STACK_LINE(646)
	Float dist;		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(648)
	for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::com::haxepunk::Entity e = __it->next();
		{
			HX_STACK_LINE(650)
			Float _g1 = ::com::haxepunk::Scene_obj::squareRects(x,y,width,height,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(650)
			dist = _g1;
			HX_STACK_LINE(651)
			if (((dist < nearDist))){
				HX_STACK_LINE(653)
				nearDist = dist;
				HX_STACK_LINE(654)
				near = e;
			}
		}
;
	}
	HX_STACK_LINE(657)
	return near;
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,nearestToRect,return )

::com::haxepunk::Entity Scene_obj::nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToEntity",0x8b099981,"com.haxepunk.Scene.nearestToEntity","com/haxepunk/Scene.hx",668,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(669)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(669)
			return null();
		}
		HX_STACK_LINE(670)
		if ((useHitboxes)){
			HX_STACK_LINE(670)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(671)
		Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(671)
		Float nearDist = ((int)179 * _g);		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(672)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(671)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(674)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(674)
		x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);
		HX_STACK_LINE(675)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(675)
		y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);
		HX_STACK_LINE(676)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity n = __it->next();
			{
				HX_STACK_LINE(678)
				dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
				HX_STACK_LINE(679)
				if (((dist < nearDist))){
					HX_STACK_LINE(681)
					nearDist = dist;
					HX_STACK_LINE(682)
					near = n;
				}
			}
;
		}
		HX_STACK_LINE(685)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,nearestToEntity,return )

::com::haxepunk::Entity Scene_obj::nearestToClass( ::String type,::com::haxepunk::Entity e,::Class classType,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToClass",0x95dc679a,"com.haxepunk.Scene.nearestToClass","com/haxepunk/Scene.hx",698,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(699)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(699)
			return null();
		}
		HX_STACK_LINE(700)
		if ((useHitboxes)){
			HX_STACK_LINE(700)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(701)
		Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(701)
		Float nearDist = ((int)179 * _g);		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(702)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(701)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(704)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(704)
		x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);
		HX_STACK_LINE(705)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(705)
		y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);
		HX_STACK_LINE(706)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity n = __it->next();
			{
				HX_STACK_LINE(708)
				dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
				HX_STACK_LINE(709)
				if (((  (((dist < nearDist))) ? bool(::Std_obj::is(e,classType)) : bool(false) ))){
					HX_STACK_LINE(711)
					nearDist = dist;
					HX_STACK_LINE(712)
					near = n;
				}
			}
;
		}
		HX_STACK_LINE(715)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToClass,return )

::com::haxepunk::Entity Scene_obj::nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToPoint",0x1413a3b2,"com.haxepunk.Scene.nearestToPoint","com/haxepunk/Scene.hx",727,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(728)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(728)
			return null();
		}
		HX_STACK_LINE(729)
		Float _g = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(729)
		Float nearDist = ((int)179 * _g);		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(730)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(729)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(732)
		if ((useHitboxes)){
			HX_STACK_LINE(734)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
				::com::haxepunk::Entity n = __it->next();
				{
					HX_STACK_LINE(736)
					Float _g1 = ::com::haxepunk::Scene_obj::squarePointRect(x,y,(((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )) - n->originX),(((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )) - n->originY),n->width,n->height);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(736)
					dist = _g1;
					HX_STACK_LINE(737)
					if (((dist < nearDist))){
						HX_STACK_LINE(739)
						nearDist = dist;
						HX_STACK_LINE(740)
						near = n;
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(746)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
				::com::haxepunk::Entity n = __it->next();
				{
					HX_STACK_LINE(748)
					dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
					HX_STACK_LINE(749)
					if (((dist < nearDist))){
						HX_STACK_LINE(751)
						nearDist = dist;
						HX_STACK_LINE(752)
						near = n;
					}
				}
;
			}
		}
		HX_STACK_LINE(756)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToPoint,return )

int Scene_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_count",0xdbc29b6b,"com.haxepunk.Scene.get_count","com/haxepunk/Scene.hx",763,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(763)
	return this->_update->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_count,return )

int Scene_obj::typeCount( ::String type){
	HX_STACK_FRAME("com.haxepunk.Scene","typeCount",0x5cf199fa,"com.haxepunk.Scene.typeCount","com/haxepunk/Scene.hx",772,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(772)
	if ((this->_types->exists(type))){
		HX_STACK_LINE(772)
		return this->_types->get(type)->__Field(HX_CSTRING("length"),true);
	}
	else{
		HX_STACK_LINE(772)
		return (int)0;
	}
	HX_STACK_LINE(772)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeCount,return )

int Scene_obj::classCount( ::String c){
	HX_STACK_FRAME("com.haxepunk.Scene","classCount",0x3f067392,"com.haxepunk.Scene.classCount","com/haxepunk/Scene.hx",782,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(782)
	if ((this->_classCount->exists(c))){
		HX_STACK_LINE(782)
		return this->_classCount->get(c);
	}
	else{
		HX_STACK_LINE(782)
		return (int)0;
	}
	HX_STACK_LINE(782)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classCount,return )

int Scene_obj::layerCount( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerCount",0xa177ff59,"com.haxepunk.Scene.layerCount","com/haxepunk/Scene.hx",792,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(792)
	if ((this->_layers->exists(layer))){
		HX_STACK_LINE(792)
		return this->_layers->get(layer)->__Field(HX_CSTRING("length"),true);
	}
	else{
		HX_STACK_LINE(792)
		return (int)0;
	}
	HX_STACK_LINE(792)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerCount,return )

::com::haxepunk::Entity Scene_obj::get_first( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_first",0x91fccecc,"com.haxepunk.Scene.get_first","com/haxepunk/Scene.hx",799,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(799)
	return this->_update->first();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_first,return )

int Scene_obj::get_layers( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layers",0xfabd8766,"com.haxepunk.Scene.get_layers","com/haxepunk/Scene.hx",805,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(805)
	return this->_layerList->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layers,return )

::List Scene_obj::entitiesForType( ::String type){
	HX_STACK_FRAME("com.haxepunk.Scene","entitiesForType",0xf97a6627,"com.haxepunk.Scene.entitiesForType","com/haxepunk/Scene.hx",814,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(814)
	if ((this->_types->exists(type))){
		HX_STACK_LINE(814)
		return this->_types->get(type);
	}
	else{
		HX_STACK_LINE(814)
		return null();
	}
	HX_STACK_LINE(814)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,entitiesForType,return )

Dynamic Scene_obj::classFirst( ::Class c){
	HX_STACK_FRAME("com.haxepunk.Scene","classFirst",0xf540a6f3,"com.haxepunk.Scene.classFirst","com/haxepunk/Scene.hx",823,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(824)
	for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_update->iterator());  __it->hasNext(); ){
		::com::haxepunk::Entity e = __it->next();
		if ((::Std_obj::is(e,c))){
			HX_STACK_LINE(826)
			return e;
		}
;
	}
	HX_STACK_LINE(828)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classFirst,return )

::com::haxepunk::Entity Scene_obj::layerFirst( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerFirst",0x57b232ba,"com.haxepunk.Scene.layerFirst","com/haxepunk/Scene.hx",838,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(838)
	if ((this->_layers->exists(layer))){
		HX_STACK_LINE(838)
		return this->_layers->get(layer)->__Field(HX_CSTRING("first"),true)();
	}
	else{
		HX_STACK_LINE(838)
		return null();
	}
	HX_STACK_LINE(838)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerFirst,return )

::com::haxepunk::Entity Scene_obj::layerLast( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerLast",0xd7906f0c,"com.haxepunk.Scene.layerLast","com/haxepunk/Scene.hx",848,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(848)
	if ((this->_layers->exists(layer))){
		HX_STACK_LINE(848)
		return this->_layers->get(layer)->__Field(HX_CSTRING("last"),true)();
	}
	else{
		HX_STACK_LINE(848)
		return null();
	}
	HX_STACK_LINE(848)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerLast,return )

::com::haxepunk::Entity Scene_obj::get_farthest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_farthest",0xc368cfff,"com.haxepunk.Scene.get_farthest","com/haxepunk/Scene.hx",856,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(857)
	if (((this->_layerList->length == (int)0))){
		HX_STACK_LINE(857)
		return null();
	}
	HX_STACK_LINE(858)
	return this->_layers->get(this->_layerList->__get((this->_layerList->length - (int)1)))->__Field(HX_CSTRING("last"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_farthest,return )

::com::haxepunk::Entity Scene_obj::get_nearest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_nearest",0x8ea14dfa,"com.haxepunk.Scene.get_nearest","com/haxepunk/Scene.hx",866,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(867)
	if (((this->_layerList->length == (int)0))){
		HX_STACK_LINE(867)
		return null();
	}
	HX_STACK_LINE(868)
	return this->_layers->get(this->_layerList->__get((int)0))->__Field(HX_CSTRING("first"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_nearest,return )

int Scene_obj::get_layerFarthest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layerFarthest",0x432466a8,"com.haxepunk.Scene.get_layerFarthest","com/haxepunk/Scene.hx",876,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(877)
	if (((this->_layerList->length == (int)0))){
		HX_STACK_LINE(877)
		return (int)0;
	}
	HX_STACK_LINE(878)
	return this->_layerList->__get((this->_layerList->length - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerFarthest,return )

int Scene_obj::get_layerNearest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layerNearest",0x0ea0ff71,"com.haxepunk.Scene.get_layerNearest","com/haxepunk/Scene.hx",886,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(887)
	if (((this->_layerList->length == (int)0))){
		HX_STACK_LINE(887)
		return (int)0;
	}
	HX_STACK_LINE(888)
	return this->_layerList->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerNearest,return )

int Scene_obj::get_uniqueTypes( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_uniqueTypes",0x4adac344,"com.haxepunk.Scene.get_uniqueTypes","com/haxepunk/Scene.hx",896,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(897)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(898)
	for(::cpp::FastIterator_obj< ::List > *__it = ::cpp::CreateFastIterator< ::List >(this->_types->iterator());  __it->hasNext(); ){
		::List type = __it->next();
		(i)++;
	}
	HX_STACK_LINE(899)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_uniqueTypes,return )

Void Scene_obj::getType( ::String type,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getType",0x4b041175,"com.haxepunk.Scene.getType","com/haxepunk/Scene.hx",909,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(910)
		if ((!(this->_types->exists(type)))){
			HX_STACK_LINE(910)
			return null();
		}
		HX_STACK_LINE(911)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(912)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_types->get(type)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			{
				HX_STACK_LINE(914)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(914)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getType,(void))

Void Scene_obj::getClass( ::Class c,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getClass",0x86183d1d,"com.haxepunk.Scene.getClass","com/haxepunk/Scene.hx",925,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(926)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(927)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_update->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			if ((::Std_obj::is(e,c))){
				HX_STACK_LINE(930)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(930)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getClass,(void))

Void Scene_obj::getLayer( int layer,Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getLayer",0xad8046b6,"com.haxepunk.Scene.getLayer","com/haxepunk/Scene.hx",941,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(942)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(943)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_layers->get(layer)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			{
				HX_STACK_LINE(945)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(945)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getLayer,(void))

Void Scene_obj::getAll( Dynamic into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getAll",0x35164ac6,"com.haxepunk.Scene.getAll","com/haxepunk/Scene.hx",955,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(956)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(957)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->_update->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			{
				HX_STACK_LINE(959)
				int _g = (n)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(959)
				hx::IndexRef((into).mPtr,_g) = e;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getAll,(void))

::com::haxepunk::Entity Scene_obj::getInstance( ::String name){
	HX_STACK_FRAME("com.haxepunk.Scene","getInstance",0x22b1b7d0,"com.haxepunk.Scene.getInstance","com/haxepunk/Scene.hx",970,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(970)
	return this->_entityNames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getInstance,return )

Void Scene_obj::updateLists( hx::Null< bool >  __o_shouldAdd){
bool shouldAdd = __o_shouldAdd.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","updateLists",0xfd7af511,"com.haxepunk.Scene.updateLists","com/haxepunk/Scene.hx",978,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shouldAdd,"shouldAdd")
{
		HX_STACK_LINE(979)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(982)
		if (((this->_remove->length > (int)0))){
			HX_STACK_LINE(984)
			{
				HX_STACK_LINE(984)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(984)
				Array< ::Dynamic > _g1 = this->_remove;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(984)
				while((true)){
					HX_STACK_LINE(984)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(984)
						break;
					}
					HX_STACK_LINE(984)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(984)
					++(_g);
					HX_STACK_LINE(986)
					if (((e1->_scene == null()))){
						HX_STACK_LINE(988)
						int idx = this->_add->indexOf(e1,null());		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(989)
						if (((idx >= (int)0))){
							HX_STACK_LINE(989)
							this->_add->splice(idx,(int)1);
						}
						HX_STACK_LINE(990)
						continue;
					}
					HX_STACK_LINE(992)
					if (((e1->_scene != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(993)
						continue;
					}
					HX_STACK_LINE(994)
					e1->removed();
					HX_STACK_LINE(995)
					e1->_scene = null();
					HX_STACK_LINE(996)
					this->removeUpdate(e1);
					HX_STACK_LINE(997)
					this->removeRender(e1);
					HX_STACK_LINE(998)
					if (((e1->_type != HX_CSTRING("")))){
						HX_STACK_LINE(998)
						this->removeType(e1);
					}
					HX_STACK_LINE(999)
					if (((e1->_name != HX_CSTRING("")))){
						HX_STACK_LINE(999)
						this->_entityNames->remove(e1->_name);
					}
					HX_STACK_LINE(1000)
					if (((  ((e1->autoClear)) ? bool(e1->get_hasTween()) : bool(false) ))){
						HX_STACK_LINE(1000)
						e1->clearTweens();
					}
				}
			}
			HX_STACK_LINE(1002)
			{
				HX_STACK_LINE(1002)
				Dynamic array = this->_remove;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1002)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1006)
		if (((bool(shouldAdd) && bool((this->_add->length > (int)0))))){
			HX_STACK_LINE(1008)
			{
				HX_STACK_LINE(1008)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1008)
				Array< ::Dynamic > _g1 = this->_add;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1008)
				while((true)){
					HX_STACK_LINE(1008)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1008)
						break;
					}
					HX_STACK_LINE(1008)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1008)
					++(_g);
					HX_STACK_LINE(1010)
					if (((e1->_scene != null()))){
						HX_STACK_LINE(1010)
						continue;
					}
					HX_STACK_LINE(1011)
					e1->_scene = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1012)
					this->addUpdate(e1);
					HX_STACK_LINE(1013)
					this->addRender(e1);
					HX_STACK_LINE(1014)
					if (((e1->_type != HX_CSTRING("")))){
						HX_STACK_LINE(1014)
						this->addType(e1);
					}
					HX_STACK_LINE(1015)
					if (((e1->_name != HX_CSTRING("")))){
						HX_STACK_LINE(1015)
						this->_entityNames->set(e1->_name,e1);
					}
					HX_STACK_LINE(1016)
					e1->added();
				}
			}
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				Dynamic array = this->_add;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1018)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1022)
		if (((this->_recycle->length > (int)0))){
			HX_STACK_LINE(1024)
			{
				HX_STACK_LINE(1024)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1024)
				Array< ::Dynamic > _g1 = this->_recycle;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1024)
				while((true)){
					HX_STACK_LINE(1024)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(1024)
						break;
					}
					HX_STACK_LINE(1024)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1024)
					++(_g);
					HX_STACK_LINE(1026)
					if (((bool((e1->_scene != null())) || bool((e1->_recycleNext != null()))))){
						HX_STACK_LINE(1027)
						continue;
					}
					HX_STACK_LINE(1029)
					::com::haxepunk::Entity _g2 = this->_recycled->get(e1->_class);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1029)
					e1->_recycleNext = _g2;
					HX_STACK_LINE(1030)
					this->_recycled->set(e1->_class,e1);
				}
			}
			HX_STACK_LINE(1032)
			{
				HX_STACK_LINE(1032)
				Dynamic array = this->_recycle;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1032)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,updateLists,(void))

Void Scene_obj::addUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addUpdate",0x8cdfb54f,"com.haxepunk.Scene.addUpdate","com/haxepunk/Scene.hx",1038,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1040)
		this->_update->add(e);
		HX_STACK_LINE(1041)
		Dynamic _g = this->_classCount->get(e->_class);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1041)
		if (((_g != (int)0))){
			HX_STACK_LINE(1041)
			this->_classCount->set(e->_class,(int)0);
		}
		HX_STACK_LINE(1042)
		{
			HX_STACK_LINE(1042)
			Dynamic _g1 = this->_classCount->get(e->_class);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1042)
			int value = (_g1 + (int)1);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1042)
			this->_classCount->set(e->_class,value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addUpdate,(void))

Void Scene_obj::removeUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeUpdate",0xd4912048,"com.haxepunk.Scene.removeUpdate","com/haxepunk/Scene.hx",1047,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1048)
		this->_update->remove(e);
		HX_STACK_LINE(1049)
		{
			HX_STACK_LINE(1049)
			Dynamic _g = this->_classCount->get(e->_class);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1049)
			int value = (_g - (int)1);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1049)
			this->_classCount->set(e->_class,value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeUpdate,(void))

Void Scene_obj::addRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addRender",0x0b039a9c,"com.haxepunk.Scene.addRender","com/haxepunk/Scene.hx",1055,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1056)
		::List list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1057)
		if ((this->_layers->exists(e->_layer))){
			HX_STACK_LINE(1059)
			::List _g = this->_layers->get(e->_layer);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1059)
			list = _g;
		}
		else{
			HX_STACK_LINE(1064)
			::List _g1 = ::List_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1064)
			list = _g1;
			HX_STACK_LINE(1065)
			this->_layers->set(e->_layer,list);
			HX_STACK_LINE(1067)
			if (((this->_layerList->length == (int)0))){
				HX_STACK_LINE(1069)
				this->_layerList[(int)0] = e->_layer;
			}
			else{
				HX_STACK_LINE(1073)
				::com::haxepunk::HXP_obj::insertSortedKey(this->_layerList,e->_layer,this->layerSort_dyn());
			}
		}
		HX_STACK_LINE(1076)
		list->add(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addRender,(void))

Void Scene_obj::removeRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeRender",0x52b50595,"com.haxepunk.Scene.removeRender","com/haxepunk/Scene.hx",1082,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1083)
		::List list = this->_layers->get(e->_layer);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1084)
		list->remove(e);
		HX_STACK_LINE(1085)
		if (((list->length == (int)0))){
			HX_STACK_LINE(1087)
			this->_layerList->remove(e->_layer);
			HX_STACK_LINE(1088)
			this->_layers->remove(e->_layer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeRender,(void))

Void Scene_obj::addType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addType",0xb4bea480,"com.haxepunk.Scene.addType","com/haxepunk/Scene.hx",1095,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1096)
		::List list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1098)
		if ((this->_types->exists(e->_type))){
			HX_STACK_LINE(1100)
			::List _g = this->_types->get(e->_type);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1100)
			list = _g;
		}
		else{
			HX_STACK_LINE(1104)
			::List _g1 = ::List_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1104)
			list = _g1;
			HX_STACK_LINE(1105)
			this->_types->set(e->_type,list);
		}
		HX_STACK_LINE(1107)
		list->push(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addType,(void))

Void Scene_obj::removeType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeType",0x7bad2f39,"com.haxepunk.Scene.removeType","com/haxepunk/Scene.hx",1113,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1114)
		if ((!(this->_types->exists(e->_type)))){
			HX_STACK_LINE(1114)
			return null();
		}
		HX_STACK_LINE(1115)
		::List list = this->_types->get(e->_type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1116)
		list->remove(e);
		HX_STACK_LINE(1117)
		if (((list->length == (int)0))){
			HX_STACK_LINE(1119)
			this->_types->remove(e->_type);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeType,(void))

Void Scene_obj::registerName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","registerName",0xa34cb129,"com.haxepunk.Scene.registerName","com/haxepunk/Scene.hx",1127,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1127)
		this->_entityNames->set(e->_name,e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,registerName,(void))

Void Scene_obj::unregisterName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","unregisterName",0x67db65c2,"com.haxepunk.Scene.unregisterName","com/haxepunk/Scene.hx",1134,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1134)
		this->_entityNames->remove(e->_name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,unregisterName,(void))

Float Scene_obj::squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("com.haxepunk.Scene","squareRects",0xdc9c1e77,"com.haxepunk.Scene.squareRects","com/haxepunk/Scene.hx",1139,0x175da20b)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(1140)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(1142)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(1142)
			return (int)0;
		}
		HX_STACK_LINE(1143)
		if (((y1 > y2))){
			HX_STACK_LINE(1143)
			return (((y1 - ((y2 + h2)))) * ((y1 - ((y2 + h2)))));
		}
		HX_STACK_LINE(1144)
		return (((y2 - ((y1 + h1)))) * ((y2 - ((y1 + h1)))));
	}
	HX_STACK_LINE(1146)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(1148)
		if (((x1 > x2))){
			HX_STACK_LINE(1148)
			return (((x1 - ((x2 + w2)))) * ((x1 - ((x2 + w2)))));
		}
		HX_STACK_LINE(1149)
		return (((x2 - ((x1 + w1)))) * ((x2 - ((x1 + w1)))));
	}
	HX_STACK_LINE(1151)
	if (((x1 > x2))){
		HX_STACK_LINE(1153)
		if (((y1 > y2))){
			HX_STACK_LINE(1153)
			Float x11 = (x2 + w2);		HX_STACK_VAR(x11,"x11");
			HX_STACK_LINE(1153)
			Float y11 = (y2 + h2);		HX_STACK_VAR(y11,"y11");
			HX_STACK_LINE(1153)
			return ((((x1 - x11)) * ((x1 - x11))) + (((y1 - y11)) * ((y1 - y11))));
		}
		HX_STACK_LINE(1154)
		{
			HX_STACK_LINE(1154)
			Float x11 = (x2 + w2);		HX_STACK_VAR(x11,"x11");
			HX_STACK_LINE(1154)
			Float y21 = (y1 + h1);		HX_STACK_VAR(y21,"y21");
			HX_STACK_LINE(1154)
			return ((((x1 - x11)) * ((x1 - x11))) + (((y21 - y2)) * ((y21 - y2))));
		}
	}
	HX_STACK_LINE(1156)
	if (((y1 > y2))){
		HX_STACK_LINE(1156)
		Float y11 = (y2 + h2);		HX_STACK_VAR(y11,"y11");
		HX_STACK_LINE(1156)
		Float x21 = (x1 + w1);		HX_STACK_VAR(x21,"x21");
		HX_STACK_LINE(1156)
		return ((((x21 - x2)) * ((x21 - x2))) + (((y1 - y11)) * ((y1 - y11))));
	}
	HX_STACK_LINE(1157)
	Float x21 = (x1 + w1);		HX_STACK_VAR(x21,"x21");
	HX_STACK_LINE(1157)
	Float y21 = (y1 + h1);		HX_STACK_VAR(y21,"y21");
	HX_STACK_LINE(1157)
	return ((((x21 - x2)) * ((x21 - x2))) + (((y21 - y2)) * ((y21 - y2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Scene_obj,squareRects,return )

Float Scene_obj::squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("com.haxepunk.Scene","squarePointRect",0xd80b753c,"com.haxepunk.Scene.squarePointRect","com/haxepunk/Scene.hx",1162,0x175da20b)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(1163)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(1165)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(1165)
			return (int)0;
		}
		HX_STACK_LINE(1166)
		if (((py > ry))){
			HX_STACK_LINE(1166)
			return (((py - ((ry + rh)))) * ((py - ((ry + rh)))));
		}
		HX_STACK_LINE(1167)
		return (((ry - py)) * ((ry - py)));
	}
	HX_STACK_LINE(1169)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(1171)
		if (((px > rx))){
			HX_STACK_LINE(1171)
			return (((px - ((rx + rw)))) * ((px - ((rx + rw)))));
		}
		HX_STACK_LINE(1172)
		return (((rx - px)) * ((rx - px)));
	}
	HX_STACK_LINE(1174)
	if (((px > rx))){
		HX_STACK_LINE(1176)
		if (((py > ry))){
			HX_STACK_LINE(1176)
			Float x1 = (rx + rw);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1176)
			Float y1 = (ry + rh);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1176)
			return ((((px - x1)) * ((px - x1))) + (((py - y1)) * ((py - y1))));
		}
		HX_STACK_LINE(1177)
		{
			HX_STACK_LINE(1177)
			Float x1 = (rx + rw);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1177)
			return ((((px - x1)) * ((px - x1))) + (((py - ry)) * ((py - ry))));
		}
	}
	HX_STACK_LINE(1179)
	if (((py > ry))){
		HX_STACK_LINE(1179)
		Float y1 = (ry + rh);		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(1179)
		return ((((px - rx)) * ((px - rx))) + (((py - y1)) * ((py - y1))));
	}
	HX_STACK_LINE(1180)
	return ((((px - rx)) * ((px - rx))) + (((py - ry)) * ((py - ry))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,squarePointRect,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(farthest,"farthest");
	HX_MARK_MEMBER_NAME(nearest,"nearest");
	HX_MARK_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_MARK_MEMBER_NAME(layerNearest,"layerNearest");
	HX_MARK_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_classCount,"_classCount");
	HX_MARK_MEMBER_NAME(_types,"_types");
	HX_MARK_MEMBER_NAME(_recycled,"_recycled");
	HX_MARK_MEMBER_NAME(_entityNames,"_entityNames");
	::com::haxepunk::Tweener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(farthest,"farthest");
	HX_VISIT_MEMBER_NAME(nearest,"nearest");
	HX_VISIT_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_VISIT_MEMBER_NAME(layerNearest,"layerNearest");
	HX_VISIT_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_classCount,"_classCount");
	HX_VISIT_MEMBER_NAME(_types,"_types");
	HX_VISIT_MEMBER_NAME(_recycled,"_recycled");
	HX_VISIT_MEMBER_NAME(_entityNames,"_entityNames");
	::com::haxepunk::Tweener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { return _add; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"count") ) { return get_count(); }
		if (HX_FIELD_EQ(inName,"first") ) { return inCallProp ? get_first() : first; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return inCallProp ? get_layers() : layers; }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_types") ) { return _types; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"addList") ) { return addList_dyn(); }
		if (HX_FIELD_EQ(inName,"addMask") ) { return addMask_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"nearest") ) { return inCallProp ? get_nearest() : nearest; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isAtBack") ) { return isAtBack_dyn(); }
		if (HX_FIELD_EQ(inName,"farthest") ) { return inCallProp ? get_farthest() : farthest; }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"showLayer") ) { return showLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"isAtFront") ) { return isAtFront_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_first") ) { return get_first_dyn(); }
		if (HX_FIELD_EQ(inName,"layerLast") ) { return layerLast_dyn(); }
		if (HX_FIELD_EQ(inName,"addUpdate") ) { return addUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"addRender") ) { return addRender_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycled") ) { return _recycled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"removeList") ) { return removeList_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"classCount") ) { return classCount_dyn(); }
		if (HX_FIELD_EQ(inName,"layerCount") ) { return layerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return get_layers_dyn(); }
		if (HX_FIELD_EQ(inName,"classFirst") ) { return classFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFirst") ) { return layerFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"squareRects") ) { return squareRects_dyn(); }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideLine") ) { return collideLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nearest") ) { return get_nearest_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { return inCallProp ? get_uniqueTypes() : uniqueTypes; }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLists") ) { return updateLists_dyn(); }
		if (HX_FIELD_EQ(inName,"_classCount") ) { return _classCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layerVisible") ) { return layerVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_farthest") ) { return get_farthest_dyn(); }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { return inCallProp ? get_layerNearest() : layerNearest; }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return removeUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return removeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"registerName") ) { return registerName_dyn(); }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { return _entityNames; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRecycled") ) { return clearRecycled_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToRect") ) { return nearestToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { return inCallProp ? get_layerFarthest() : layerFarthest; }
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { return _layerDisplay; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nearestToClass") ) { return nearestToClass_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToPoint") ) { return nearestToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"unregisterName") ) { return unregisterName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"squarePointRect") ) { return squarePointRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRectInto") ) { return collideRectInto_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToEntity") ) { return nearestToEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"entitiesForType") ) { return entitiesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueTypes") ) { return get_uniqueTypes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearRecycledAll") ) { return clearRecycledAll_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePointInto") ) { return collidePointInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layerNearest") ) { return get_layerNearest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collideCircleInto") ) { return collideCircleInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layerFarthest") ) { return get_layerFarthest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_types") ) { _types=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nearest") ) { nearest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"farthest") ) { farthest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { _recycled=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { uniqueTypes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classCount") ) { _classCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layerNearest") ) { layerNearest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { _entityNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { layerFarthest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { _layerDisplay=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("farthest"));
	outFields->push(HX_CSTRING("nearest"));
	outFields->push(HX_CSTRING("layerFarthest"));
	outFields->push(HX_CSTRING("layerNearest"));
	outFields->push(HX_CSTRING("uniqueTypes"));
	outFields->push(HX_CSTRING("_add"));
	outFields->push(HX_CSTRING("_remove"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_update"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_layerDisplay"));
	outFields->push(HX_CSTRING("_layers"));
	outFields->push(HX_CSTRING("_classCount"));
	outFields->push(HX_CSTRING("_types"));
	outFields->push(HX_CSTRING("_recycled"));
	outFields->push(HX_CSTRING("_entityNames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("squareRects"),
	HX_CSTRING("squarePointRect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Scene_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Scene_obj,camera),HX_CSTRING("camera")},
	{hx::fsInt,(int)offsetof(Scene_obj,mouseX),HX_CSTRING("mouseX")},
	{hx::fsInt,(int)offsetof(Scene_obj,mouseY),HX_CSTRING("mouseY")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Scene_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,first),HX_CSTRING("first")},
	{hx::fsInt,(int)offsetof(Scene_obj,layers),HX_CSTRING("layers")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,farthest),HX_CSTRING("farthest")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,nearest),HX_CSTRING("nearest")},
	{hx::fsInt,(int)offsetof(Scene_obj,layerFarthest),HX_CSTRING("layerFarthest")},
	{hx::fsInt,(int)offsetof(Scene_obj,layerNearest),HX_CSTRING("layerNearest")},
	{hx::fsInt,(int)offsetof(Scene_obj,uniqueTypes),HX_CSTRING("uniqueTypes")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_add),HX_CSTRING("_add")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_remove),HX_CSTRING("_remove")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_recycle),HX_CSTRING("_recycle")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Scene_obj,_update),HX_CSTRING("_update")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Scene_obj,_layerList),HX_CSTRING("_layerList")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Scene_obj,_layerDisplay),HX_CSTRING("_layerDisplay")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Scene_obj,_layers),HX_CSTRING("_layers")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_classCount),HX_CSTRING("_classCount")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_types),HX_CSTRING("_types")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_recycled),HX_CSTRING("_recycled")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_entityNames),HX_CSTRING("_entityNames")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("visible"),
	HX_CSTRING("camera"),
	HX_CSTRING("begin"),
	HX_CSTRING("end"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("update"),
	HX_CSTRING("showLayer"),
	HX_CSTRING("layerVisible"),
	HX_CSTRING("layerSort"),
	HX_CSTRING("render"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("sprite"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("addList"),
	HX_CSTRING("removeList"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("addMask"),
	HX_CSTRING("create"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearRecycled"),
	HX_CSTRING("clearRecycledAll"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("isAtFront"),
	HX_CSTRING("isAtBack"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideLine"),
	HX_CSTRING("collideRectInto"),
	HX_CSTRING("collideCircleInto"),
	HX_CSTRING("collidePointInto"),
	HX_CSTRING("nearestToRect"),
	HX_CSTRING("nearestToEntity"),
	HX_CSTRING("nearestToClass"),
	HX_CSTRING("nearestToPoint"),
	HX_CSTRING("get_count"),
	HX_CSTRING("typeCount"),
	HX_CSTRING("classCount"),
	HX_CSTRING("layerCount"),
	HX_CSTRING("first"),
	HX_CSTRING("get_first"),
	HX_CSTRING("layers"),
	HX_CSTRING("get_layers"),
	HX_CSTRING("entitiesForType"),
	HX_CSTRING("classFirst"),
	HX_CSTRING("layerFirst"),
	HX_CSTRING("layerLast"),
	HX_CSTRING("farthest"),
	HX_CSTRING("get_farthest"),
	HX_CSTRING("nearest"),
	HX_CSTRING("get_nearest"),
	HX_CSTRING("layerFarthest"),
	HX_CSTRING("get_layerFarthest"),
	HX_CSTRING("layerNearest"),
	HX_CSTRING("get_layerNearest"),
	HX_CSTRING("uniqueTypes"),
	HX_CSTRING("get_uniqueTypes"),
	HX_CSTRING("getType"),
	HX_CSTRING("getClass"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getAll"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("updateLists"),
	HX_CSTRING("addUpdate"),
	HX_CSTRING("removeUpdate"),
	HX_CSTRING("addRender"),
	HX_CSTRING("removeRender"),
	HX_CSTRING("addType"),
	HX_CSTRING("removeType"),
	HX_CSTRING("registerName"),
	HX_CSTRING("unregisterName"),
	HX_CSTRING("_add"),
	HX_CSTRING("_remove"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_update"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_layerDisplay"),
	HX_CSTRING("_layers"),
	HX_CSTRING("_classCount"),
	HX_CSTRING("_types"),
	HX_CSTRING("_recycled"),
	HX_CSTRING("_entityNames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
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

void Scene_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
