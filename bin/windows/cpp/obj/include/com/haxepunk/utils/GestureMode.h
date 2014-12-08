#ifndef INCLUDED_com_haxepunk_utils_GestureMode
#define INCLUDED_com_haxepunk_utils_GestureMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,GestureMode)
namespace com{
namespace haxepunk{
namespace utils{


class GestureMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GestureMode_obj OBJ_;

	public:
		GestureMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.haxepunk.utils.GestureMode"); }
		::String __ToString() const { return HX_CSTRING("GestureMode.") + tag; }

		static ::com::haxepunk::utils::GestureMode FINISHED;
		static inline ::com::haxepunk::utils::GestureMode FINISHED_dyn() { return FINISHED; }
		static ::com::haxepunk::utils::GestureMode MULTI_MOVE;
		static inline ::com::haxepunk::utils::GestureMode MULTI_MOVE_dyn() { return MULTI_MOVE; }
		static ::com::haxepunk::utils::GestureMode MULTI_TOUCH;
		static inline ::com::haxepunk::utils::GestureMode MULTI_TOUCH_dyn() { return MULTI_TOUCH; }
		static ::com::haxepunk::utils::GestureMode READY;
		static inline ::com::haxepunk::utils::GestureMode READY_dyn() { return READY; }
		static ::com::haxepunk::utils::GestureMode SINGLE_MOVE;
		static inline ::com::haxepunk::utils::GestureMode SINGLE_MOVE_dyn() { return SINGLE_MOVE; }
		static ::com::haxepunk::utils::GestureMode SINGLE_TOUCH;
		static inline ::com::haxepunk::utils::GestureMode SINGLE_TOUCH_dyn() { return SINGLE_TOUCH; }
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_GestureMode */ 
