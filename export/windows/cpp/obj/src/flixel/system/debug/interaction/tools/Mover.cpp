// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicMoverTool
#include <flixel/system/debug/interaction/tools/GraphicMoverTool.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Mover
#include <flixel/system/debug/interaction/tools/Mover.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_17_new,"flixel.system.debug.interaction.tools.Mover","new",0x9079915c,"flixel.system.debug.interaction.tools.Mover.new","flixel/system/debug/interaction/tools/Mover.hx",17,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_23_init,"flixel.system.debug.interaction.tools.Mover","init",0xd69e5694,"flixel.system.debug.interaction.tools.Mover.init","flixel/system/debug/interaction/tools/Mover.hx",23,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_35_update,"flixel.system.debug.interaction.tools.Mover","update",0x6b898a8d,"flixel.system.debug.interaction.tools.Mover.update","flixel/system/debug/interaction/tools/Mover.hx",35,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_52_doDragging,"flixel.system.debug.interaction.tools.Mover","doDragging",0xb6bbe9fe,"flixel.system.debug.interaction.tools.Mover.doDragging","flixel/system/debug/interaction/tools/Mover.hx",52,0xc1a785b7)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Mover_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_17_new)
HXLINE(  19)		this->_dragging = false;
HXLINE(  17)		super::__construct();
            	}

Dynamic Mover_obj::__CreateEmpty() { return new Mover_obj; }

void *Mover_obj::_hx_vtable = 0;

Dynamic Mover_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mover_obj > _hx_result = new Mover_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mover_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x1e88cdcf) {
			if (inClassId<=(int)0x02de2004) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x02de2004;
			} else {
				return inClassId==(int)0x1e88cdcf;
			}
		} else {
			return inClassId==(int)0x25b00754 || inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x5a9df069) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5a9df069;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Mover_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_GC_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_23_init)
HXLINE(  24)		this->super::init(brain);
HXLINE(  25)		this->_lastCursorPosition =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,brain->flixelPointer->x,brain->flixelPointer->x);
HXLINE(  27)		this->_name = HX_("Mover",21,3c,93,9f);
HXLINE(  28)		this->setButton(hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::GraphicMoverTool >());
HXLINE(  29)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::GraphicMoverTool_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()));
HXLINE(  31)		return hx::ObjectPtr<OBJ_>(this);
            	}


void Mover_obj::update(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_35_update)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (!(this->isActive())) {
HXLINE(  37)			_hx_tmp = !(this->_brain->keyPressed((int)16));
            		}
            		else {
HXLINE(  37)			_hx_tmp = false;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  38)			return;
            		}
HXLINE(  40)		bool _hx_tmp1;
HXDLIN(  40)		if (this->_brain->pointerPressed) {
HXLINE(  40)			_hx_tmp1 = !(this->_dragging);
            		}
            		else {
HXLINE(  40)			_hx_tmp1 = false;
            		}
HXDLIN(  40)		if (_hx_tmp1) {
HXLINE(  41)			this->_dragging = true;
            		}
            		else {
HXLINE(  42)			bool _hx_tmp2;
HXDLIN(  42)			if (this->_brain->pointerPressed) {
HXLINE(  42)				_hx_tmp2 = this->_dragging;
            			}
            			else {
HXLINE(  42)				_hx_tmp2 = false;
            			}
HXDLIN(  42)			if (_hx_tmp2) {
HXLINE(  43)				this->doDragging();
            			}
            			else {
HXLINE(  44)				if (this->_brain->pointerJustReleased) {
HXLINE(  45)					this->_dragging = false;
            				}
            			}
            		}
HXLINE(  47)		this->_lastCursorPosition->set_x(this->_brain->flixelPointer->x);
HXLINE(  48)		this->_lastCursorPosition->set_y(this->_brain->flixelPointer->y);
            	}


void Mover_obj::doDragging(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_52_doDragging)
HXLINE(  53)		Float dx = (this->_brain->flixelPointer->x - this->_lastCursorPosition->x);
HXLINE(  54)		Float dy = (this->_brain->flixelPointer->y - this->_lastCursorPosition->y);
HXLINE(  56)		{
HXLINE(  56)			int _g = (int)0;
HXDLIN(  56)			::Array< ::Dynamic> _g1 = this->_brain->selectedItems->members;
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				 ::flixel::FlxObject member = _g1->__get(_g).StaticCast<  ::flixel::FlxObject >();
HXDLIN(  56)				_g = (_g + (int)1);
HXLINE(  58)				if (!(::Std_obj::is(member,hx::ClassOf< ::flixel::FlxObject >()))) {
HXLINE(  59)					continue;
            				}
HXLINE(  61)				 ::flixel::FlxObject object = member;
HXLINE(  62)				if (hx::IsNotNull( object )) {
HXLINE(  64)					{
HXLINE(  64)						 ::flixel::FlxObject _g2 = object;
HXDLIN(  64)						_g2->set_x((_g2->x + dx));
            					}
HXLINE(  65)					{
HXLINE(  65)						 ::flixel::FlxObject _g21 = object;
HXDLIN(  65)						_g21->set_y((_g21->y + dy));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mover_obj,doDragging,(void))


hx::ObjectPtr< Mover_obj > Mover_obj::__new() {
	hx::ObjectPtr< Mover_obj > __this = new Mover_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Mover_obj > Mover_obj::__alloc(hx::Ctx *_hx_ctx) {
	Mover_obj *__this = (Mover_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mover_obj), true, "flixel.system.debug.interaction.tools.Mover"));
	*(void **)__this = Mover_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mover_obj::Mover_obj()
{
}

void Mover_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mover);
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mover_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Mover_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return hx::Val( _dragging ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDragging") ) { return hx::Val( doDragging_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { return hx::Val( _lastCursorPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Mover_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { _lastCursorPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mover_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"));
	outFields->push(HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Mover_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Mover_obj,_dragging),HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Mover_obj,_lastCursorPosition),HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Mover_obj_sStaticStorageInfo = 0;
#endif

static ::String Mover_obj_sMemberFields[] = {
	HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"),
	HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("doDragging","\x7a","\x53","\x01","\xa5"),
	::String(null()) };

static void Mover_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mover_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mover_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mover_obj::__mClass,"__mClass");
};

#endif

hx::Class Mover_obj::__mClass;

void Mover_obj::__register()
{
	hx::Object *dummy = new Mover_obj;
	Mover_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Mover","\x6a","\xf3","\x4e","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Mover_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Mover_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mover_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mover_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mover_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mover_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
