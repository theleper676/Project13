// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListEntry
#include <flixel/system/debug/completion/CompletionListEntry.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_9_new,"flixel.system.debug.completion.CompletionListEntry","new",0x5600ec80,"flixel.system.debug.completion.CompletionListEntry.new","flixel/system/debug/completion/CompletionListEntry.hx",9,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_41_initBitmapDatas,"flixel.system.debug.completion.CompletionListEntry","initBitmapDatas",0x8c672f8a,"flixel.system.debug.completion.CompletionListEntry.initBitmapDatas","flixel/system/debug/completion/CompletionListEntry.hx",41,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_49_setItem,"flixel.system.debug.completion.CompletionListEntry","setItem",0xe081b1f5,"flixel.system.debug.completion.CompletionListEntry.setItem","flixel/system/debug/completion/CompletionListEntry.hx",49,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_59_set_selected,"flixel.system.debug.completion.CompletionListEntry","set_selected",0xb69e61b8,"flixel.system.debug.completion.CompletionListEntry.set_selected","flixel/system/debug/completion/CompletionListEntry.hx",59,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_11_boot,"flixel.system.debug.completion.CompletionListEntry","boot",0xe2e70412,"flixel.system.debug.completion.CompletionListEntry.boot","flixel/system/debug/completion/CompletionListEntry.hx",11,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_12_boot,"flixel.system.debug.completion.CompletionListEntry","boot",0xe2e70412,"flixel.system.debug.completion.CompletionListEntry.boot","flixel/system/debug/completion/CompletionListEntry.hx",12,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_14_boot,"flixel.system.debug.completion.CompletionListEntry","boot",0xe2e70412,"flixel.system.debug.completion.CompletionListEntry.boot","flixel/system/debug/completion/CompletionListEntry.hx",14,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_15_boot,"flixel.system.debug.completion.CompletionListEntry","boot",0xe2e70412,"flixel.system.debug.completion.CompletionListEntry.boot","flixel/system/debug/completion/CompletionListEntry.hx",15,0xaa5a5a70)
HX_LOCAL_STACK_FRAME(_hx_pos_87bf7b3fe3b7f3f2_16_boot,"flixel.system.debug.completion.CompletionListEntry","boot",0xe2e70412,"flixel.system.debug.completion.CompletionListEntry.boot","flixel/system/debug/completion/CompletionListEntry.hx",16,0xaa5a5a70)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionListEntry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_9_new)
HXLINE(  21)		this->selected = false;
HXLINE(  28)		super::__construct();
HXLINE(  30)		this->initBitmapDatas();
HXLINE(  32)		this->addChild((this->background =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX ,null(),null(),null())));
HXLINE(  33)		this->background->set_bitmapData(::flixel::_hx_system::debug::completion::CompletionListEntry_obj::normalBitmapData);
HXLINE(  35)		this->label = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());
HXLINE(  36)		this->label->set_x((int)4);
HXLINE(  37)		this->addChild(this->label);
            	}

Dynamic CompletionListEntry_obj::__CreateEmpty() { return new CompletionListEntry_obj; }

void *CompletionListEntry_obj::_hx_vtable = 0;

Dynamic CompletionListEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompletionListEntry_obj > _hx_result = new CompletionListEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompletionListEntry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x3d2d7617) {
			return inClassId==(int)0x3ac19654 || inClassId==(int)0x3d2d7617;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

void CompletionListEntry_obj::initBitmapDatas(){
            	HX_GC_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_41_initBitmapDatas)
HXLINE(  42)		if (hx::IsNull( ::flixel::_hx_system::debug::completion::CompletionListEntry_obj::normalBitmapData )) {
HXLINE(  43)			::flixel::_hx_system::debug::completion::CompletionListEntry_obj::normalBitmapData =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,(int)150,(int)20,true,(int)-10526881,null());
            		}
HXLINE(  44)		if (hx::IsNull( ::flixel::_hx_system::debug::completion::CompletionListEntry_obj::highlightBitmapData )) {
HXLINE(  45)			::flixel::_hx_system::debug::completion::CompletionListEntry_obj::highlightBitmapData =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,(int)150,(int)20,true,(int)-9605779,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionListEntry_obj,initBitmapDatas,(void))

void CompletionListEntry_obj::setItem(::String item){
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_49_setItem)
HXLINE(  50)		this->label->set_text(item);
HXLINE(  51)		if ((this->label->get_width() > (int)150)) {
HXLINE(  53)			this->label->set_width((int)150);
HXLINE(  54)			this->label->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::NONE_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionListEntry_obj,setItem,(void))

bool CompletionListEntry_obj::set_selected(bool selected){
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_59_set_selected)
HXLINE(  60)		if ((selected == this->selected)) {
HXLINE(  61)			return selected;
            		}
HXLINE(  63)		 ::openfl::_legacy::display::BitmapData _hx_tmp;
HXDLIN(  63)		if (selected) {
HXLINE(  63)			_hx_tmp = ::flixel::_hx_system::debug::completion::CompletionListEntry_obj::highlightBitmapData;
            		}
            		else {
HXLINE(  63)			_hx_tmp = ::flixel::_hx_system::debug::completion::CompletionListEntry_obj::normalBitmapData;
            		}
HXDLIN(  63)		this->background->set_bitmapData(_hx_tmp);
HXLINE(  66)		return (this->selected = selected);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionListEntry_obj,set_selected,return )

int CompletionListEntry_obj::WIDTH;

int CompletionListEntry_obj::HEIGHT;

int CompletionListEntry_obj::COLOR_NORMAL;

int CompletionListEntry_obj::COLOR_HIGHLIGHT;

int CompletionListEntry_obj::GUTTER;

 ::openfl::_legacy::display::BitmapData CompletionListEntry_obj::normalBitmapData;

 ::openfl::_legacy::display::BitmapData CompletionListEntry_obj::highlightBitmapData;


hx::ObjectPtr< CompletionListEntry_obj > CompletionListEntry_obj::__new() {
	hx::ObjectPtr< CompletionListEntry_obj > __this = new CompletionListEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CompletionListEntry_obj > CompletionListEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	CompletionListEntry_obj *__this = (CompletionListEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CompletionListEntry_obj), true, "flixel.system.debug.completion.CompletionListEntry"));
	*(void **)__this = CompletionListEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompletionListEntry_obj::CompletionListEntry_obj()
{
}

void CompletionListEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionListEntry);
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(label,"label");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionListEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(label,"label");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CompletionListEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return hx::Val( label ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setItem") ) { return hx::Val( setItem_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return hx::Val( selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return hx::Val( background ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_selected") ) { return hx::Val( set_selected_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initBitmapDatas") ) { return hx::Val( initBitmapDatas_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CompletionListEntry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"normalBitmapData") ) { outValue = ( normalBitmapData ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"highlightBitmapData") ) { outValue = ( highlightBitmapData ); return true; }
	}
	return false;
}

hx::Val CompletionListEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selected(inValue.Cast< bool >()) );selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CompletionListEntry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"normalBitmapData") ) { normalBitmapData=ioValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"highlightBitmapData") ) { highlightBitmapData=ioValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return true; }
	}
	return false;
}

void CompletionListEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CompletionListEntry_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CompletionListEntry_obj,selected),HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(CompletionListEntry_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(CompletionListEntry_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo CompletionListEntry_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CompletionListEntry_obj::WIDTH,HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::HEIGHT,HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::COLOR_NORMAL,HX_HCSTRING("COLOR_NORMAL","\xe3","\x84","\xe3","\xcb")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::COLOR_HIGHLIGHT,HX_HCSTRING("COLOR_HIGHLIGHT","\xd8","\x3c","\xc9","\x9b")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &CompletionListEntry_obj::normalBitmapData,HX_HCSTRING("normalBitmapData","\xc0","\x02","\xc0","\x05")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &CompletionListEntry_obj::highlightBitmapData,HX_HCSTRING("highlightBitmapData","\x0d","\x59","\xa7","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String CompletionListEntry_obj_sMemberFields[] = {
	HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("initBitmapDatas","\x6a","\x63","\x70","\x21"),
	HX_HCSTRING("setItem","\xd5","\x05","\x44","\x0b"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	::String(null()) };

static void CompletionListEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::COLOR_NORMAL,"COLOR_NORMAL");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::COLOR_HIGHLIGHT,"COLOR_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::normalBitmapData,"normalBitmapData");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::highlightBitmapData,"highlightBitmapData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionListEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::COLOR_NORMAL,"COLOR_NORMAL");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::COLOR_HIGHLIGHT,"COLOR_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::normalBitmapData,"normalBitmapData");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::highlightBitmapData,"highlightBitmapData");
};

#endif

hx::Class CompletionListEntry_obj::__mClass;

static ::String CompletionListEntry_obj_sStaticFields[] = {
	HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48"),
	HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4"),
	HX_HCSTRING("COLOR_NORMAL","\xe3","\x84","\xe3","\xcb"),
	HX_HCSTRING("COLOR_HIGHLIGHT","\xd8","\x3c","\xc9","\x9b"),
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("normalBitmapData","\xc0","\x02","\xc0","\x05"),
	HX_HCSTRING("highlightBitmapData","\x0d","\x59","\xa7","\x3c"),
	::String(null())
};

void CompletionListEntry_obj::__register()
{
	hx::Object *dummy = new CompletionListEntry_obj;
	CompletionListEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionListEntry","\x8e","\xec","\x78","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompletionListEntry_obj::__GetStatic;
	__mClass->mSetStaticField = &CompletionListEntry_obj::__SetStatic;
	__mClass->mMarkFunc = CompletionListEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CompletionListEntry_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CompletionListEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionListEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionListEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionListEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionListEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompletionListEntry_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_11_boot)
HXDLIN(  11)		WIDTH = (int)150;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_12_boot)
HXDLIN(  12)		HEIGHT = (int)20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_14_boot)
HXDLIN(  14)		COLOR_NORMAL = (int)-10526881;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_15_boot)
HXDLIN(  15)		COLOR_HIGHLIGHT = (int)-9605779;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87bf7b3fe3b7f3f2_16_boot)
HXDLIN(  16)		GUTTER = (int)4;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
