#ifndef INCLUDED_BlockFlammable
#define INCLUDED_BlockFlammable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Block.h>
HX_DECLARE_CLASS0(Block)
HX_DECLARE_CLASS0(BlockFlammable)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  BlockFlammable_obj : public ::Block_obj{
	public:
		typedef ::Block_obj super;
		typedef BlockFlammable_obj OBJ_;
		BlockFlammable_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlockFlammable_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlockFlammable_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlockFlammable"); }

		virtual Void update( );

		bool onFire;
		Float fireTime;
		Float fireTicker;
};


#endif /* INCLUDED_BlockFlammable */ 
