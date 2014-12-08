#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#define INCLUDED_com_haxepunk__Entity_SolidType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,_Entity,SolidType_Impl_)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
namespace com{
namespace haxepunk{
namespace _Entity{


class HXCPP_CLASS_ATTRIBUTES  SolidType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SolidType_Impl__obj OBJ_;
		SolidType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SolidType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SolidType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SolidType_Impl_"); }

		static ::com::haxepunk::ds::Either _new( ::com::haxepunk::ds::Either e);
		static Dynamic _new_dyn();

		static ::com::haxepunk::ds::Either get_type( ::com::haxepunk::ds::Either this1);
		static Dynamic get_type_dyn();

		static ::com::haxepunk::ds::Either fromLeft( ::String v);
		static Dynamic fromLeft_dyn();

		static ::com::haxepunk::ds::Either fromRight( Array< ::String > v);
		static Dynamic fromRight_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace _Entity

#endif /* INCLUDED_com_haxepunk__Entity_SolidType_Impl_ */ 
