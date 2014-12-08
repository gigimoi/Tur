#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Magic
#include <Magic.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
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

Void Player_obj::__construct(int x,int y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",15,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(16)
	super::__construct((x * (int)10),(y * (int)10),null(),null());
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		this->width = (int)4;
		HX_STACK_LINE(17)
		this->height = (int)9;
		HX_STACK_LINE(17)
		this->originX = (int)-4;
		HX_STACK_LINE(17)
		this->originY = (int)-1;
	}
	HX_STACK_LINE(18)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",18,0xa27fc9dd)
			{
				HX_STACK_LINE(18)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",18,0xa27fc9dd)
						{
							HX_STACK_LINE(18)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(18)
							{
								HX_STACK_LINE(18)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(18)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/player.png")))){
									HX_STACK_LINE(18)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/player.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(18)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(18)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/player.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(18)
									if (((bitmap != null()))){
										HX_STACK_LINE(18)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/player.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(18)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(18)
								data = data1;
							}
							HX_STACK_LINE(18)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(18)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(18)
				::com::haxepunk::graphics::atlas::TileAtlas _g3 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(18)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(18)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",18,0xa27fc9dd)
			{
				HX_STACK_LINE(18)
				::openfl::_v2::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/player.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(18)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(18)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(18)
	::com::haxepunk::graphics::Spritemap _g6 = ::com::haxepunk::graphics::Spritemap_obj::__new(_g5,(int)10,(int)10,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(18)
	this->sprite = _g6;
	HX_STACK_LINE(19)
	this->sprite->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(20)
	this->sprite->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)2),(int)7,null());
	HX_STACK_LINE(21)
	this->sprite->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)4).Add((int)5),(int)4,null());
	HX_STACK_LINE(22)
	this->sprite->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)6),null(),null());
	HX_STACK_LINE(23)
	this->sprite->play(HX_CSTRING("idle"),null(),null());
	HX_STACK_LINE(24)
	this->sprite->smooth = false;
	HX_STACK_LINE(25)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(27)
	::Magic _g7 = ::Magic_obj::__new(x,y);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(27)
	this->magic = _g7;
	HX_STACK_LINE(28)
	this->magic->inert = true;
	HX_STACK_LINE(30)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("left"),Array_obj< int >::__new().Add((int)37).Add((int)65));
	HX_STACK_LINE(31)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)39).Add((int)68));
	HX_STACK_LINE(32)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)38).Add((int)32).Add((int)87));
	HX_STACK_LINE(34)
	::lime::math::Vector2 _g8 = ::lime::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(34)
	this->velocity = _g8;
	HX_STACK_LINE(36)
	this->fireCooldown = (int)0;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int x,int y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(x,y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",38,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::update();
		HX_STACK_LINE(40)
		this->velocity->x = (int)0;
		HX_STACK_LINE(41)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("left"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		if ((::com::haxepunk::utils::Input_obj::check(_g))){
			HX_STACK_LINE(42)
			hx::SubEq(this->velocity->x,0.5);
		}
		HX_STACK_LINE(44)
		::com::haxepunk::ds::Either _g1 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("right"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		if ((::com::haxepunk::utils::Input_obj::check(_g1))){
			HX_STACK_LINE(45)
			hx::AddEq(this->velocity->x,0.5);
		}
		HX_STACK_LINE(48)
		if (((this->velocity->x == (int)0))){
			HX_STACK_LINE(49)
			this->sprite->play(HX_CSTRING("idle"),null(),null());
		}
		else{
			HX_STACK_LINE(52)
			this->sprite->play(HX_CSTRING("walk"),null(),null());
			HX_STACK_LINE(53)
			this->sprite->set_flipped((  (((this->fireCooldown >= (int)2))) ? bool(this->sprite->_flipped) : bool((this->velocity->x < (int)0)) ));
		}
		HX_STACK_LINE(55)
		hx::AddEq(this->velocity->y,0.09);
		HX_STACK_LINE(56)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromRight(Array_obj< ::String >::__new().Add(HX_CSTRING("block")).Add(HX_CSTRING("blockFlammable")));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(56)
		this->moveBy(this->velocity->x,this->velocity->y,_g2,true);
		HX_STACK_LINE(57)
		::com::haxepunk::ds::Either _g3 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromRight(Array_obj< ::String >::__new().Add(HX_CSTRING("block")).Add(HX_CSTRING("blockFlammable")));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(57)
		::com::haxepunk::Entity _g4 = this->collideTypes(_g3,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + (int)1));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(57)
		bool onGround = (_g4 != null());		HX_STACK_VAR(onGround,"onGround");
		HX_STACK_LINE(58)
		if ((onGround)){
			HX_STACK_LINE(59)
			this->velocity->y = (int)0;
			HX_STACK_LINE(60)
			::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("jump"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(60)
			if ((::com::haxepunk::utils::Input_obj::pressed(_g5))){
				HX_STACK_LINE(61)
				hx::SubEq(this->velocity->y,2.3);
			}
		}
		else{
			HX_STACK_LINE(65)
			if (((this->velocity->y >= (int)0))){
				HX_STACK_LINE(66)
				this->sprite->play(HX_CSTRING("fall"),null(),null());
			}
			else{
				HX_STACK_LINE(68)
				::com::haxepunk::ds::Either _g6 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromRight(Array_obj< ::String >::__new().Add(HX_CSTRING("block")).Add(HX_CSTRING("blockFlammable")));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(68)
				::com::haxepunk::Entity _g7 = this->collideTypes(_g6,(  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - (int)1));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(68)
				if (((_g7 != null()))){
					HX_STACK_LINE(69)
					this->velocity->y = (int)0;
				}
				HX_STACK_LINE(71)
				this->sprite->play(HX_CSTRING("jump"),null(),null());
			}
		}
		HX_STACK_LINE(74)
		this->_scene->camera->x = ((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) - (int)100) + (int)5);
		HX_STACK_LINE(75)
		this->_scene->camera->y = ((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - (int)80) + (int)5);
		HX_STACK_LINE(77)
		this->magic->lifetime = (int)10;
		HX_STACK_LINE(78)
		this->magic->x = (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + 7.5);
		HX_STACK_LINE(79)
		if ((this->sprite->_flipped)){
			HX_STACK_LINE(80)
			::Magic _g5 = this->magic;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(80)
			_g5->x = (((  ((_g5->followCamera)) ? Float((_g5->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g5->x) )) - (int)5);
		}
		HX_STACK_LINE(82)
		this->magic->y = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) - .5);
		HX_STACK_LINE(83)
		(this->fireCooldown)--;
		HX_STACK_LINE(84)
		if (((bool((this->fireCooldown <= (int)0)) && bool(::com::haxepunk::utils::Input_obj::mouseDown)))){
			HX_STACK_LINE(85)
			int _g8 = ::com::haxepunk::HXP_obj::screen->get_mouseX();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(85)
			Float _g9 = (Float(_g8) / Float((int)4));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(85)
			Float mx = (_g9 + this->_scene->camera->x);		HX_STACK_VAR(mx,"mx");
			HX_STACK_LINE(86)
			int _g10 = ::com::haxepunk::HXP_obj::screen->get_mouseY();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(86)
			Float _g11 = (Float(_g10) / Float((int)4));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(86)
			Float my = (_g11 + this->_scene->camera->y);		HX_STACK_VAR(my,"my");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(87)
				Float _g121 = ::Math_obj::random();		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(87)
				Float _g13 = (_g121 * (int)2);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(87)
				int _g5 = (_g13 + (int)3);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(87)
				while((true)){
					HX_STACK_LINE(87)
					if ((!(((_g12 < _g5))))){
						HX_STACK_LINE(87)
						break;
					}
					HX_STACK_LINE(87)
					int i = (_g12)++;		HX_STACK_VAR(i,"i");
					struct _Function_4_1{
						inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",88,0xa27fc9dd)
							{
								HX_STACK_LINE(88)
								::Magic _this = __this->magic;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(88)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",88,0xa27fc9dd)
							{
								HX_STACK_LINE(88)
								::Magic _this = __this->magic;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(88)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(88)
					::Magic mag = ::Magic_obj::__new(_Function_4_1::Block(this),_Function_4_2::Block(this));		HX_STACK_VAR(mag,"mag");
					HX_STACK_LINE(90)
					Float _g14 = ::Math_obj::random();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(90)
					Float _g15 = (_g14 - 0.5);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(90)
					Float _g16 = (_g15 * (int)8);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(90)
					Float _g17;		HX_STACK_VAR(_g17,"_g17");
					struct _Function_4_3{
						inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",90,0xa27fc9dd)
							{
								HX_STACK_LINE(90)
								::Magic _this = __this->magic;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(90)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(90)
					_g17 = (((_Function_4_3::Block(this) - mx) + 1.5) + _g16);
					HX_STACK_LINE(91)
					Float _g18 = ::Math_obj::random();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(91)
					Float _g19 = (_g18 - 0.5);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(91)
					Float _g20 = (_g19 * (int)8);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(91)
					Float _g21;		HX_STACK_VAR(_g21,"_g21");
					struct _Function_4_4{
						inline static Float Block( hx::ObjectPtr< ::Player_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",91,0xa27fc9dd)
							{
								HX_STACK_LINE(91)
								::Magic _this = __this->magic;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(91)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(91)
					_g21 = (((_Function_4_4::Block(this) - my) + 1.5) + _g20);
					HX_STACK_LINE(89)
					::lime::math::Vector2 velocity = ::lime::math::Vector2_obj::__new(_g17,_g21);		HX_STACK_VAR(velocity,"velocity");
					HX_STACK_LINE(93)
					velocity->normalize((int)-1);
					HX_STACK_LINE(94)
					mag->velocity = velocity;
					HX_STACK_LINE(95)
					Float _g22 = ::Math_obj::random();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(95)
					int _g23 = (_g22 * (int)10);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(95)
					hx::AddEq(mag->lifetime,_g23);
					HX_STACK_LINE(96)
					mag->whitelistCollisions->push(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(97)
					this->_scene->add(mag);
				}
			}
			HX_STACK_LINE(100)
			if (((mx < (((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) + (int)5)))){
				HX_STACK_LINE(101)
				this->sprite->set_flipped(true);
			}
			else{
				HX_STACK_LINE(103)
				this->sprite->set_flipped(false);
			}
			HX_STACK_LINE(105)
			this->fireCooldown = (int)5;
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(magic,"magic");
	HX_MARK_MEMBER_NAME(fireCooldown,"fireCooldown");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(magic,"magic");
	HX_VISIT_MEMBER_NAME(fireCooldown,"fireCooldown");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"magic") ) { return magic; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fireCooldown") ) { return fireCooldown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"magic") ) { magic=inValue.Cast< ::Magic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fireCooldown") ) { fireCooldown=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("magic"));
	outFields->push(HX_CSTRING("fireCooldown"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Player_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(Player_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::Magic*/ ,(int)offsetof(Player_obj,magic),HX_CSTRING("magic")},
	{hx::fsInt,(int)offsetof(Player_obj,fireCooldown),HX_CSTRING("fireCooldown")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("sprite"),
	HX_CSTRING("velocity"),
	HX_CSTRING("magic"),
	HX_CSTRING("fireCooldown"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

