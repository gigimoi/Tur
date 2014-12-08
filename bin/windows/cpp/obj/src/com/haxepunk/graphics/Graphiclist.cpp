#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
namespace com{
namespace haxepunk{
namespace graphics{

Void Graphiclist_obj::__construct(Array< ::Dynamic > graphic)
{
HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","new",0xd76d404e,"com.haxepunk.graphics.Graphiclist.new","com/haxepunk/graphics/Graphiclist.hx",21,0x2585e6c3)
HX_STACK_THIS(this)
HX_STACK_ARG(graphic,"graphic")
{
	HX_STACK_LINE(22)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->_graphics = _g;
	HX_STACK_LINE(23)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->_temp = _g1;
	HX_STACK_LINE(24)
	::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	this->_camera = _g2;
	HX_STACK_LINE(25)
	this->_count = (int)0;
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	if (((graphic != null()))){
		HX_STACK_LINE(31)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(((_g3 < graphic->length))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::com::haxepunk::Graphic g = graphic->__get(_g3).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(31)
			++(_g3);
			HX_STACK_LINE(31)
			this->add(g);
		}
	}
}
;
	return null();
}

//Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Array< ::Dynamic > graphic)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(graphic);
	return result;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphiclist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","update",0x618c3edb,"com.haxepunk.graphics.Graphiclist.update","com/haxepunk/graphics/Graphiclist.hx",39,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(39)
			++(_g);
			HX_STACK_LINE(41)
			if ((g->active)){
				HX_STACK_LINE(41)
				g->update();
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderList( Dynamic renderFunc,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderList",0x1f25a0a6,"com.haxepunk.graphics.Graphiclist.renderList","com/haxepunk/graphics/Graphiclist.hx",46,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderFunc,"renderFunc")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(47)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(48)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(49)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(50)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				if ((g->_visible)){
					HX_STACK_LINE(56)
					if ((g->relative)){
						HX_STACK_LINE(58)
						this->_point->x = point->x;
						HX_STACK_LINE(59)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(61)
						Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(61)
						this->_point->x = _g2;
					}
					HX_STACK_LINE(62)
					this->_camera->x = camera->x;
					HX_STACK_LINE(63)
					this->_camera->y = camera->y;
					HX_STACK_LINE(64)
					renderFunc(g).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphiclist_obj,renderList,(void))

Void Graphiclist_obj::render( ::openfl::_v2::display::BitmapData target,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","render",0xdfb02428,"com.haxepunk.graphics.Graphiclist.render","com/haxepunk/graphics/Graphiclist.hx",72,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(71)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			hx::AddEq(point->x,this->x);
			HX_STACK_LINE(73)
			hx::AddEq(point->y,this->y);
			HX_STACK_LINE(73)
			hx::MultEq(camera->x,this->scrollX);
			HX_STACK_LINE(73)
			hx::MultEq(camera->y,this->scrollY);
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(73)
					++(_g1);
					HX_STACK_LINE(73)
					if ((g->_visible)){
						HX_STACK_LINE(73)
						if ((g->relative)){
							HX_STACK_LINE(73)
							this->_point->x = point->x;
							HX_STACK_LINE(73)
							this->_point->y = point->y;
						}
						else{
							HX_STACK_LINE(73)
							Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(73)
							this->_point->x = _g2;
						}
						HX_STACK_LINE(73)
						this->_camera->x = camera->x;
						HX_STACK_LINE(73)
						this->_camera->y = camera->y;
						HX_STACK_LINE(74)
						g->render(target,_g->_point,_g->_camera);
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderAtlas( int layer,::openfl::_v2::geom::Point point,::openfl::_v2::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderAtlas",0xd39e8803,"com.haxepunk.graphics.Graphiclist.renderAtlas","com/haxepunk/graphics/Graphiclist.hx",81,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(80)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			hx::AddEq(point->x,this->x);
			HX_STACK_LINE(82)
			hx::AddEq(point->y,this->y);
			HX_STACK_LINE(82)
			hx::MultEq(camera->x,this->scrollX);
			HX_STACK_LINE(82)
			hx::MultEq(camera->y,this->scrollY);
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(82)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(82)
				while((true)){
					HX_STACK_LINE(82)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(82)
						break;
					}
					HX_STACK_LINE(82)
					::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(82)
					++(_g1);
					HX_STACK_LINE(82)
					if ((g->_visible)){
						HX_STACK_LINE(82)
						if ((g->relative)){
							HX_STACK_LINE(82)
							this->_point->x = point->x;
							HX_STACK_LINE(82)
							this->_point->y = point->y;
						}
						else{
							HX_STACK_LINE(82)
							Float _g2 = this->_point->y = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(82)
							this->_point->x = _g2;
						}
						HX_STACK_LINE(82)
						this->_camera->x = camera->x;
						HX_STACK_LINE(82)
						this->_camera->y = camera->y;
						HX_STACK_LINE(83)
						g->renderAtlas(layer,_g->_point,_g->_camera);
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","destroy",0x7fe12be8,"com.haxepunk.graphics.Graphiclist.destroy","com/haxepunk/graphics/Graphiclist.hx",92,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		while((true)){
			HX_STACK_LINE(92)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(92)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(92)
			++(_g);
			HX_STACK_LINE(94)
			g->destroy();
		}
	}
return null();
}


::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","add",0xd763620f,"com.haxepunk.graphics.Graphiclist.add","com/haxepunk/graphics/Graphiclist.hx",104,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(105)
	if (((graphic == null()))){
		HX_STACK_LINE(105)
		return graphic;
	}
	HX_STACK_LINE(108)
	if (((this->_count == (int)0))){
		HX_STACK_LINE(108)
		this->blit = graphic->blit;
	}
	else{
		HX_STACK_LINE(109)
		if (((this->blit != graphic->blit))){
			HX_STACK_LINE(109)
			HX_STACK_DO_THROW(HX_CSTRING("Can't add graphic objects with different render methods."));
		}
	}
	HX_STACK_LINE(111)
	int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(111)
	this->_graphics[_g] = graphic;
	HX_STACK_LINE(112)
	if ((!(this->active))){
		HX_STACK_LINE(112)
		this->active = graphic->active;
	}
	HX_STACK_LINE(113)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","remove",0xdf0f5516,"com.haxepunk.graphics.Graphiclist.remove","com/haxepunk/graphics/Graphiclist.hx",122,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(123)
	int _g = this->_graphics->indexOf(graphic,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(123)
	if (((_g < (int)0))){
		HX_STACK_LINE(123)
		return graphic;
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(124)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			::com::haxepunk::Graphic g = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(126)
			++(_g1);
			HX_STACK_LINE(128)
			if (((g == graphic))){
				HX_STACK_LINE(128)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(129)
				this->_temp[this->_temp->length] = g;
			}
		}
	}
	HX_STACK_LINE(131)
	Array< ::Dynamic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(132)
	this->_graphics = this->_temp;
	HX_STACK_LINE(133)
	this->_temp = temp;
	HX_STACK_LINE(134)
	this->updateCheck();
	HX_STACK_LINE(135)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAt",0x415f7fa9,"com.haxepunk.graphics.Graphiclist.removeAt","com/haxepunk/graphics/Graphiclist.hx",143,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(144)
		if (((this->_graphics->length == (int)0))){
			HX_STACK_LINE(144)
			return null();
		}
		HX_STACK_LINE(145)
		hx::ModEq(index,this->_graphics->length);
		HX_STACK_LINE(146)
		this->remove(this->_graphics->__get(hx::Mod(index,this->_graphics->length)).StaticCast< ::com::haxepunk::Graphic >());
		HX_STACK_LINE(147)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAll",0xf2302dab,"com.haxepunk.graphics.Graphiclist.removeAll","com/haxepunk/graphics/Graphiclist.hx",154,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			Dynamic array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(155)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(156)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(157)
		this->_count = (int)0;
		HX_STACK_LINE(158)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Array< ::Dynamic > Graphiclist_obj::get_children( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_children",0x327fef9a,"com.haxepunk.graphics.Graphiclist.get_children","com/haxepunk/graphics/Graphiclist.hx",165,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_children,return )

int Graphiclist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_count",0xb557b794,"com.haxepunk.graphics.Graphiclist.get_count","com/haxepunk/graphics/Graphiclist.hx",171,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_count,return )

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","updateCheck",0x0c5f0fed,"com.haxepunk.graphics.Graphiclist.updateCheck","com/haxepunk/graphics/Graphiclist.hx",177,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->active = false;
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(179)
				++(_g);
				HX_STACK_LINE(181)
				if ((g->active)){
					HX_STACK_LINE(183)
					this->active = true;
					HX_STACK_LINE(184)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))


Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? get_count() : count; }
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { return renderList_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_camera"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,children),HX_CSTRING("children")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_graphics),HX_CSTRING("_graphics")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_temp),HX_CSTRING("_temp")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,_count),HX_CSTRING("_count")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Graphiclist_obj,_camera),HX_CSTRING("_camera")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("renderList"),
	HX_CSTRING("render"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("children"),
	HX_CSTRING("get_children"),
	HX_CSTRING("count"),
	HX_CSTRING("get_count"),
	HX_CSTRING("updateCheck"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_count"),
	HX_CSTRING("_camera"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#endif

Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Graphiclist"), hx::TCanCast< Graphiclist_obj> ,sStaticFields,sMemberFields,
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

void Graphiclist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
