// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#define INCLUDED_flixel_text_FlxTextBorderStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
namespace flixel{
namespace text{


class FlxTextBorderStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxTextBorderStyle_obj OBJ_;

	public:
		FlxTextBorderStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.text.FlxTextBorderStyle","\xd5","\x5b","\xd9","\x83"); }
		::String __ToString() const { return HX_HCSTRING("FlxTextBorderStyle.","\xa8","\xa4","\xb0","\xc0") + _hx_tag; }

		static ::flixel::text::FlxTextBorderStyle NONE;
		static inline ::flixel::text::FlxTextBorderStyle NONE_dyn() { return NONE; }
		static ::flixel::text::FlxTextBorderStyle OUTLINE;
		static inline ::flixel::text::FlxTextBorderStyle OUTLINE_dyn() { return OUTLINE; }
		static ::flixel::text::FlxTextBorderStyle OUTLINE_FAST;
		static inline ::flixel::text::FlxTextBorderStyle OUTLINE_FAST_dyn() { return OUTLINE_FAST; }
		static ::flixel::text::FlxTextBorderStyle SHADOW;
		static inline ::flixel::text::FlxTextBorderStyle SHADOW_dyn() { return SHADOW; }
};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextBorderStyle */ 
