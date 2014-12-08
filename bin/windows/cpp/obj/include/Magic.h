#ifndef INCLUDED_Magic
#define INCLUDED_Magic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Magic)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS2(lime,math,Vector2)


class HXCPP_CLASS_ATTRIBUTES  Magic_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Magic_obj OBJ_;
		Magic_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Magic_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Magic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Magic"); }

		virtual Void render( );

		virtual Void update( );

		::com::haxepunk::graphics::Spritemap magic;
		::lime::math::Vector2 velocity;
		int lifetime;
		bool inert;
		Array< ::Dynamic > whitelistCollisions;
};


#endif /* INCLUDED_Magic */ 
