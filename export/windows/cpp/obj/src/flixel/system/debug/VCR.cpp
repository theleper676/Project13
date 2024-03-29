// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicPause
#include <flixel/system/debug/_VCR/GraphicPause.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRestart
#include <flixel/system/debug/_VCR/GraphicRestart.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicStep
#include <flixel/system/debug/_VCR/GraphicStep.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_37_new,"flixel.system.debug.VCR","new",0x7584fc6f,"flixel.system.debug.VCR.new","flixel/system/debug/VCR.hx",37,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_139_onPause,"flixel.system.debug.VCR","onPause",0xf9cf54e6,"flixel.system.debug.VCR.onPause","flixel/system/debug/VCR.hx",139,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_149_onResume,"flixel.system.debug.VCR","onResume",0xb49b1dbd,"flixel.system.debug.VCR.onResume","flixel/system/debug/VCR.hx",149,0x4ecb3ec2)
HX_LOCAL_STACK_FRAME(_hx_pos_fb7d725cb584fcc8_159_onStep,"flixel.system.debug.VCR","onStep",0x2da2775c,"flixel.system.debug.VCR.onStep","flixel/system/debug/VCR.hx",159,0x4ecb3ec2)
namespace flixel{
namespace _hx_system{
namespace debug{

void VCR_obj::__construct( ::flixel::_hx_system::debug::FlxDebugger Debugger){
            	HX_GC_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_37_new)
HXLINE(  44)		this->runtime = ((Float)0);
HXLINE(  57)		this->restartBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(), ::flixel::_hx_system::debug::_VCR::GraphicRestart_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),::flixel::FlxG_obj::resetState_dyn(),null(),null());
HXLINE(  66)		this->playbackToggleBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(), ::flixel::_hx_system::debug::_VCR::GraphicPause_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),::flixel::FlxG_obj::vcr->pause_dyn(),null(),null());
HXLINE(  67)		this->stepBtn = Debugger->addButton(::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn(), ::flixel::_hx_system::debug::_VCR::GraphicStep_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),this->onStep_dyn(),null(),null());
            	}

Dynamic VCR_obj::__CreateEmpty() { return new VCR_obj; }

void *VCR_obj::_hx_vtable = 0;

Dynamic VCR_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VCR_obj > _hx_result = new VCR_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VCR_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x029d9ca5;
}

void VCR_obj::onPause(){
            	HX_GC_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_139_onPause)
HXLINE( 140)		this->playbackToggleBtn->upHandler = ::flixel::FlxG_obj::vcr->resume_dyn();
HXLINE( 141)		 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->playbackToggleBtn;
HXDLIN( 141)		_hx_tmp->changeIcon( ::flixel::_hx_system::debug::GraphicArrowRight_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onPause,(void))

void VCR_obj::onResume(){
            	HX_GC_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_149_onResume)
HXLINE( 150)		this->playbackToggleBtn->upHandler = ::flixel::FlxG_obj::vcr->pause_dyn();
HXLINE( 151)		 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->playbackToggleBtn;
HXDLIN( 151)		_hx_tmp->changeIcon( ::flixel::_hx_system::debug::_VCR::GraphicPause_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onResume,(void))

void VCR_obj::onStep(){
            	HX_STACKFRAME(&_hx_pos_fb7d725cb584fcc8_159_onStep)
HXLINE( 160)		if (!(::flixel::FlxG_obj::vcr->paused)) {
HXLINE( 162)			::flixel::FlxG_obj::vcr->pause();
            		}
HXLINE( 164)		::flixel::FlxG_obj::vcr->stepRequested = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onStep,(void))


hx::ObjectPtr< VCR_obj > VCR_obj::__new( ::flixel::_hx_system::debug::FlxDebugger Debugger) {
	hx::ObjectPtr< VCR_obj > __this = new VCR_obj();
	__this->__construct(Debugger);
	return __this;
}

hx::ObjectPtr< VCR_obj > VCR_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::FlxDebugger Debugger) {
	VCR_obj *__this = (VCR_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VCR_obj), true, "flixel.system.debug.VCR"));
	*(void **)__this = VCR_obj::_hx_vtable;
	__this->__construct(Debugger);
	return __this;
}

VCR_obj::VCR_obj()
{
}

void VCR_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCR);
	HX_MARK_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_MARK_MEMBER_NAME(runtime,"runtime");
	HX_MARK_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_MARK_MEMBER_NAME(stepBtn,"stepBtn");
	HX_MARK_MEMBER_NAME(restartBtn,"restartBtn");
	HX_MARK_MEMBER_NAME(recordBtn,"recordBtn");
	HX_MARK_MEMBER_NAME(openBtn,"openBtn");
	HX_MARK_END_CLASS();
}

void VCR_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_VISIT_MEMBER_NAME(runtime,"runtime");
	HX_VISIT_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_VISIT_MEMBER_NAME(stepBtn,"stepBtn");
	HX_VISIT_MEMBER_NAME(restartBtn,"restartBtn");
	HX_VISIT_MEMBER_NAME(recordBtn,"recordBtn");
	HX_VISIT_MEMBER_NAME(openBtn,"openBtn");
}

hx::Val VCR_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onStep") ) { return hx::Val( onStep_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { return hx::Val( runtime ); }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { return hx::Val( stepBtn ); }
		if (HX_FIELD_EQ(inName,"openBtn") ) { return hx::Val( openBtn ); }
		if (HX_FIELD_EQ(inName,"onPause") ) { return hx::Val( onPause_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResume") ) { return hx::Val( onResume_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { return hx::Val( recordBtn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { return hx::Val( restartBtn ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { return hx::Val( runtimeDisplay ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { return hx::Val( playbackToggleBtn ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VCR_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { runtime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { stepBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openBtn") ) { openBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { recordBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { restartBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { runtimeDisplay=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { playbackToggleBtn=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCR_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00"));
	outFields->push(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"));
	outFields->push(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"));
	outFields->push(HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81"));
	outFields->push(HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c"));
	outFields->push(HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc"));
	outFields->push(HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VCR_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(VCR_obj,runtimeDisplay),HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00")},
	{hx::fsFloat,(int)offsetof(VCR_obj,runtime),HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,playbackToggleBtn),HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,stepBtn),HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,restartBtn),HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,recordBtn),HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,openBtn),HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VCR_obj_sStaticStorageInfo = 0;
#endif

static ::String VCR_obj_sMemberFields[] = {
	HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00"),
	HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"),
	HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"),
	HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81"),
	HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c"),
	HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc"),
	HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40"),
	HX_HCSTRING("onPause","\x57","\x75","\x95","\x53"),
	HX_HCSTRING("onResume","\x2c","\x60","\x31","\xe8"),
	HX_HCSTRING("onStep","\x0b","\xf0","\xe5","\xee"),
	::String(null()) };

static void VCR_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VCR_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
};

#endif

hx::Class VCR_obj::__mClass;

void VCR_obj::__register()
{
	hx::Object *dummy = new VCR_obj;
	VCR_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.VCR","\xfd","\x98","\x3c","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VCR_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VCR_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VCR_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VCR_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VCR_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VCR_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
