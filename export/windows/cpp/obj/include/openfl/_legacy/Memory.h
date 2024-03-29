// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_Memory
#define INCLUDED_openfl__legacy_Memory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,Memory)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES Memory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Memory_obj OBJ_;
		Memory_obj();

	public:
		enum { _hx_ClassId = 0x147b4db1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.Memory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._legacy.Memory"); }

		hx::ObjectPtr< Memory_obj > __new() {
			hx::ObjectPtr< Memory_obj > __this = new Memory_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Memory_obj > __alloc(hx::Ctx *_hx_ctx) {
			Memory_obj *__this = (Memory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Memory_obj), false, "openfl._legacy.Memory"));
			*(void **)__this = Memory_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Memory_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Memory","\x21","\x3f","\x54","\x39"); }

		static  ::openfl::_legacy::utils::ByteArray gcRef;
		static int len;
		static void select( ::openfl::_legacy::utils::ByteArray bytes);
		static ::Dynamic select_dyn();

		static int getByte(int addr);
		static ::Dynamic getByte_dyn();

		static Float getDouble(int addr);
		static ::Dynamic getDouble_dyn();

		static Float getFloat(int addr);
		static ::Dynamic getFloat_dyn();

		static int getI32(int addr);
		static ::Dynamic getI32_dyn();

		static int getUI16(int addr);
		static ::Dynamic getUI16_dyn();

		static void setByte(int addr,int v);
		static ::Dynamic setByte_dyn();

		static void setDouble(int addr,Float v);
		static ::Dynamic setDouble_dyn();

		static void setFloat(int addr,Float v);
		static ::Dynamic setFloat_dyn();

		static void setI16(int addr,int v);
		static ::Dynamic setI16_dyn();

		static void setI32(int addr,int v);
		static ::Dynamic setI32_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Memory */ 
