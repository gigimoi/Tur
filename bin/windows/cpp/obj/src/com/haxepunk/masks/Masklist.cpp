#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Masklist_obj::__construct(Dynamic masks)
{
HX_STACK_FRAME("com.haxepunk.masks.Masklist","new",0xbcd32a7c,"com.haxepunk.masks.Masklist.new","com/haxepunk/masks/Masklist.hx",18,0x7d42d233)
HX_STACK_THIS(this)
HX_STACK_ARG(masks,"masks")
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(20)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->_masks = _g;
	HX_STACK_LINE(21)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	this->_temp = _g1;
	HX_STACK_LINE(22)
	this->_count = (int)0;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			if ((!(((_g2 < masks->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			Dynamic m = masks->__GetItem(_g2);		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(24)
			++(_g2);
			HX_STACK_LINE(24)
			this->add(m);
		}
	}
}
;
	return null();
}

//Masklist_obj::~Masklist_obj() { }

Dynamic Masklist_obj::__CreateEmpty() { return  new Masklist_obj; }
hx::ObjectPtr< Masklist_obj > Masklist_obj::__new(Dynamic masks)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(masks);
	return result;}

Dynamic Masklist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Masklist_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collide",0x84d0479a,"com.haxepunk.masks.Masklist.collide","com/haxepunk/masks/Masklist.hx",30,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(33)
			if ((m->collide(mask))){
				HX_STACK_LINE(33)
				return true;
			}
		}
	}
	HX_STACK_LINE(35)
	return false;
}


bool Masklist_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collideMasklist",0x82947104,"com.haxepunk.masks.Masklist.collideMasklist","com/haxepunk/masks/Masklist.hx",40,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			::com::haxepunk::Mask a = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(41)
			++(_g);
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(43)
				Array< ::Dynamic > _g3 = other->_masks;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					::com::haxepunk::Mask b = _g3->__get(_g2).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(43)
					++(_g2);
					HX_STACK_LINE(45)
					if ((a->collide(b))){
						HX_STACK_LINE(45)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(48)
	return true;
}


::com::haxepunk::Mask Masklist_obj::add( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","add",0xbcc94c3d,"com.haxepunk.masks.Masklist.add","com/haxepunk/masks/Masklist.hx",57,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(58)
	int _g = (this->_count)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	this->_masks[_g] = mask;
	HX_STACK_LINE(59)
	mask->list = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(60)
	mask->set_parent((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) ));
	HX_STACK_LINE(61)
	this->update();
	HX_STACK_LINE(62)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,add,return )

::com::haxepunk::Mask Masklist_obj::remove( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","remove",0x711f7ba8,"com.haxepunk.masks.Masklist.remove","com/haxepunk/masks/Masklist.hx",71,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(72)
	int _g = this->_masks->indexOf(mask,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(72)
	if (((_g < (int)0))){
		HX_STACK_LINE(72)
		return mask;
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(73)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Array< ::Dynamic > _g11 = this->_masks;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			if ((!(((_g1 < _g11->length))))){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			::com::haxepunk::Mask m = _g11->__get(_g1).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(74)
			++(_g1);
			HX_STACK_LINE(76)
			if (((m == mask))){
				HX_STACK_LINE(78)
				mask->list = null();
				HX_STACK_LINE(79)
				mask->set_parent(null());
				HX_STACK_LINE(80)
				(this->_count)--;
				HX_STACK_LINE(81)
				this->update();
			}
			else{
				HX_STACK_LINE(83)
				this->_temp[this->_temp->length] = m;
			}
		}
	}
	HX_STACK_LINE(85)
	Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(86)
	this->_masks = this->_temp;
	HX_STACK_LINE(87)
	this->_temp = temp;
	HX_STACK_LINE(88)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,remove,return )

Void Masklist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAt",0x94b3eebb,"com.haxepunk.masks.Masklist.removeAt","com/haxepunk/masks/Masklist.hx",96,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(97)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(98)
		int i = this->_masks->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(99)
		hx::ModEq(index,i);
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(102)
			if (((i == index))){
				HX_STACK_LINE(104)
				this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >()->list = null();
				HX_STACK_LINE(105)
				(this->_count)--;
				HX_STACK_LINE(106)
				this->update();
			}
			else{
				HX_STACK_LINE(108)
				this->_temp[this->_temp->length] = this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >();
			}
		}
		HX_STACK_LINE(110)
		Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(111)
		this->_masks = this->_temp;
		HX_STACK_LINE(112)
		this->_temp = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,removeAt,(void))

Void Masklist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAll",0x88bcee59,"com.haxepunk.masks.Masklist.removeAll","com/haxepunk/masks/Masklist.hx",119,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(120)
				m->list = null();
			}
		}
		HX_STACK_LINE(121)
		this->_count = (int)0;
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			Dynamic array = this->_masks;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(122)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(123)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(124)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,removeAll,(void))

::com::haxepunk::Mask Masklist_obj::getMask( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","getMask",0xb24588be,"com.haxepunk.masks.Masklist.getMask","com/haxepunk/masks/Masklist.hx",134,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(134)
		return this->_masks->__get(hx::Mod(index,this->_masks->length)).StaticCast< ::com::haxepunk::Mask >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,getMask,return )

::com::haxepunk::Entity Masklist_obj::set_parent( ::com::haxepunk::Entity parent){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","set_parent",0x408774cb,"com.haxepunk.masks.Masklist.set_parent","com/haxepunk/masks/Masklist.hx",139,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(140)
			m->set_parent(parent);
		}
	}
	HX_STACK_LINE(141)
	return this->super::set_parent(parent);
}


Void Masklist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","update",0xf39c656d,"com.haxepunk.masks.Masklist.update","com/haxepunk/masks/Masklist.hx",147,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		int t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(149)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(149)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(149)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(149)
		::com::haxepunk::masks::Hitbox h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(150)
		int _g = l = (int)2147483647;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		t = _g;
		HX_STACK_LINE(151)
		int _g1 = b = (int)-2147483648;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		r = _g1;
		HX_STACK_LINE(152)
		::com::haxepunk::masks::Hitbox h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(153)
		::com::haxepunk::masks::Polygon p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(155)
			Array< ::Dynamic > _g11 = this->_masks;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(155)
			while((true)){
				HX_STACK_LINE(155)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(155)
					break;
				}
				HX_STACK_LINE(155)
				::com::haxepunk::Mask m = _g11->__get(_g2).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(155)
				++(_g2);
				HX_STACK_LINE(157)
				if ((::Std_obj::is(m,hx::ClassOf< ::com::haxepunk::masks::Polygon >()))){
					HX_STACK_LINE(159)
					p = m;
					HX_STACK_LINE(160)
					if (((p != null()))){
						HX_STACK_LINE(162)
						if (((p->minX < l))){
							HX_STACK_LINE(162)
							l = p->minX;
						}
						HX_STACK_LINE(163)
						if (((p->minY < t))){
							HX_STACK_LINE(163)
							t = p->minY;
						}
						HX_STACK_LINE(164)
						if (((p->maxX > r))){
							HX_STACK_LINE(164)
							r = p->maxX;
						}
						HX_STACK_LINE(165)
						if (((p->maxY > b))){
							HX_STACK_LINE(165)
							b = p->maxY;
						}
					}
				}
				else{
					HX_STACK_LINE(168)
					::com::haxepunk::masks::Hitbox _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(168)
					_g21 = hx::TCast< com::haxepunk::masks::Hitbox >::cast(m);
					HX_STACK_LINE(168)
					::com::haxepunk::masks::Hitbox _g3 = h1 = _g21;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(168)
					if (((_g3 != null()))){
						HX_STACK_LINE(170)
						int _g4 = h1->get_x();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(170)
						if (((_g4 < l))){
							HX_STACK_LINE(170)
							int _g5 = h1->get_x();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(170)
							l = _g5;
						}
						HX_STACK_LINE(171)
						int _g6 = h1->get_y();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(171)
						if (((_g6 < t))){
							HX_STACK_LINE(171)
							int _g7 = h1->get_y();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(171)
							t = _g7;
						}
						HX_STACK_LINE(172)
						int _g8 = h1->get_x();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(172)
						int _g9 = h1->get_width();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(172)
						int _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(172)
						if (((_g10 > r))){
							HX_STACK_LINE(172)
							int _g111 = h1->get_x();		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(172)
							int _g12 = h1->get_width();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(172)
							int _g13 = (_g111 + _g12);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(172)
							r = _g13;
						}
						HX_STACK_LINE(173)
						int _g14 = h1->get_y();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(173)
						int _g15 = h1->get_height();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(173)
						int _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(173)
						if (((_g16 > b))){
							HX_STACK_LINE(173)
							int _g17 = h1->get_y();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(173)
							int _g18 = h1->get_height();		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(173)
							int _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(173)
							b = _g19;
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		this->_x = l;
		HX_STACK_LINE(179)
		this->_y = t;
		HX_STACK_LINE(180)
		this->_width = (r - l);
		HX_STACK_LINE(181)
		this->_height = (b - t);
		HX_STACK_LINE(182)
		this->super::update();
	}
return null();
}


Void Masklist_obj::debugDraw( ::openfl::_v2::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","debugDraw",0xe393a713,"com.haxepunk.masks.Masklist.debugDraw","com/haxepunk/masks/Masklist.hx",188,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			::com::haxepunk::Mask m = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(188)
			++(_g);
			HX_STACK_LINE(188)
			m->debugDraw(graphics,scaleX,scaleY);
		}
	}
return null();
}


int Masklist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","get_count",0x4be47842,"com.haxepunk.masks.Masklist.get_count","com/haxepunk/masks/Masklist.hx",195,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,get_count,return )


Masklist_obj::Masklist_obj()
{
}

void Masklist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Masklist);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_masks,"_masks");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Masklist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_masks,"_masks");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Masklist_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_masks") ) { return _masks; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"getMask") ) { return getMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Masklist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_masks") ) { _masks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Masklist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("_masks"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Masklist_obj,count),HX_CSTRING("count")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_masks),HX_CSTRING("_masks")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_temp),HX_CSTRING("_temp")},
	{hx::fsInt,(int)offsetof(Masklist_obj,_count),HX_CSTRING("_count")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("collide"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("getMask"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("update"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("count"),
	HX_CSTRING("get_count"),
	HX_CSTRING("_masks"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_count"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#endif

Class Masklist_obj::__mClass;

void Masklist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Masklist"), hx::TCanCast< Masklist_obj> ,sStaticFields,sMemberFields,
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

void Masklist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
