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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_55_new,"flixel.ui.FlxButton","new",0x776c1d8e,"flixel.ui.FlxButton.new","flixel/ui/FlxButton.hx",55,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_70_resetHelpers,"flixel.ui.FlxButton","resetHelpers",0x0b952648,"flixel.ui.FlxButton.resetHelpers","flixel/ui/FlxButton.hx",70,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_82_initLabel,"flixel.ui.FlxButton","initLabel",0xd1ec8c72,"flixel.ui.FlxButton.initLabel","flixel/ui/FlxButton.hx",82,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_93_get_text,"flixel.ui.FlxButton","get_text",0x7dcfb448,"flixel.ui.FlxButton.get_text","flixel/ui/FlxButton.hx",93,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_97_set_text,"flixel.ui.FlxButton","set_text",0x2c2d0dbc,"flixel.ui.FlxButton.set_text","flixel/ui/FlxButton.hx",97,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_30_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",30,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_34_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",34,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_65bbf1ac0e61e703_38_boot,"flixel.ui.FlxButton","boot",0xff46bf44,"flixel.ui.FlxButton.boot","flixel/ui/FlxButton.hx",38,0xc64cf442)
namespace flixel{
namespace ui{

void FlxButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_55_new)
HXLINE(  56)		super::__construct(X,Y,OnClick);
HXLINE(  58)		{
HXLINE(  58)			int _g = (int)0;
HXDLIN(  58)			::Array< ::Dynamic> _g1 = this->labelOffsets;
HXDLIN(  58)			while((_g < _g1->length)){
HXLINE(  58)				 ::flixel::math::FlxPoint point = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(  58)				_g = (_g + (int)1);
HXLINE(  60)				Float _hx_tmp = (point->x - (int)1);
HXDLIN(  60)				point->set(_hx_tmp,(point->y + (int)3));
            			}
            		}
HXLINE(  63)		if (hx::IsNotNull( Text )) {
HXLINE(  63)			Float _hx_tmp1 = (this->x + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->x);
HXDLIN(  63)			this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp1,(this->y + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null()));
HXDLIN(  63)			this->label->setFormat(null(),(int)8,(int)3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXDLIN(  63)			 ::flixel::text::FlxText _hx_tmp2 = this->label;
HXDLIN(  63)			_hx_tmp2->set_alpha(this->labelAlphas->__get(this->status));
HXDLIN(  63)			this->label->drawFrame(true);
            		}
            	}

Dynamic FlxButton_obj::__CreateEmpty() { return new FlxButton_obj; }

void *FlxButton_obj::_hx_vtable = 0;

Dynamic FlxButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxButton_obj > _hx_result = new FlxButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x2e105115;
		}
	} else {
		return inClassId==(int)0x344ffdb4 || inClassId==(int)0x73ed81cf;
	}
}

void FlxButton_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_70_resetHelpers)
HXLINE(  71)		this->super::resetHelpers();
HXLINE(  73)		if (hx::IsNotNull( this->label )) {
HXLINE(  75)			 ::flixel::text::FlxText _hx_tmp = this->label;
HXDLIN(  75)			Float _hx_tmp1 = this->get_width();
HXDLIN(  75)			_hx_tmp->set_fieldWidth((this->label->frameWidth = ::Std_obj::_hx_int(_hx_tmp1)));
HXLINE(  76)			 ::flixel::text::FlxText _hx_tmp2 = this->label;
HXDLIN(  76)			_hx_tmp2->set_size(::Std_obj::_hx_int(this->label->_defaultFormat->size));
            		}
            	}


void FlxButton_obj::initLabel(::String Text){
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_82_initLabel)
HXDLIN(  82)		if (hx::IsNotNull( Text )) {
HXLINE(  84)			Float _hx_tmp = (this->x + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->x);
HXDLIN(  84)			this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp,(this->y + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null()));
HXLINE(  85)			this->label->setFormat(null(),(int)8,(int)3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  86)			 ::flixel::text::FlxText _hx_tmp1 = this->label;
HXDLIN(  86)			_hx_tmp1->set_alpha(this->labelAlphas->__get(this->status));
HXLINE(  87)			this->label->drawFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,initLabel,(void))

::String FlxButton_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_93_get_text)
HXDLIN(  93)		if (hx::IsNotNull( this->label )) {
HXDLIN(  93)			return this->label->text;
            		}
            		else {
HXDLIN(  93)			return null();
            		}
HXDLIN(  93)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,get_text,return )

::String FlxButton_obj::set_text(::String Text){
            	HX_GC_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_97_set_text)
HXLINE(  98)		if (hx::IsNull( this->label )) {
HXLINE( 100)			if (hx::IsNotNull( Text )) {
HXLINE( 100)				Float _hx_tmp = (this->x + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->x);
HXDLIN( 100)				this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp,(this->y + this->labelOffsets->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null()));
HXDLIN( 100)				this->label->setFormat(null(),(int)8,(int)3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXDLIN( 100)				 ::flixel::text::FlxText _hx_tmp1 = this->label;
HXDLIN( 100)				_hx_tmp1->set_alpha(this->labelAlphas->__get(this->status));
HXDLIN( 100)				this->label->drawFrame(true);
            			}
            		}
            		else {
HXLINE( 104)			this->label->set_text(Text);
            		}
HXLINE( 106)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,set_text,return )

int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick) {
	hx::ObjectPtr< FlxButton_obj > __this = new FlxButton_obj();
	__this->__construct(__o_X,__o_Y,Text,OnClick);
	return __this;
}

hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text, ::Dynamic OnClick) {
	FlxButton_obj *__this = (FlxButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxButton_obj), true, "flixel.ui.FlxButton"));
	*(void **)__this = FlxButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Text,OnClick);
	return __this;
}

FlxButton_obj::FlxButton_obj()
{
}

hx::Val FlxButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_text() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLabel") ) { return hx::Val( initLabel_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return hx::Val( resetHelpers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_text(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxButton_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxButton_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxButton_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsInt,(void *) &FlxButton_obj::HIGHLIGHT,HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8")},
	{hx::fsInt,(void *) &FlxButton_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxButton_obj_sMemberFields[] = {
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("initLabel","\xc4","\x28","\x41","\x8b"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void FlxButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#endif

hx::Class FlxButton_obj::__mClass;

static ::String FlxButton_obj_sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	::String(null())
};

void FlxButton_obj::__register()
{
	hx::Object *dummy = new FlxButton_obj;
	FlxButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxButton","\x9c","\xfe","\xd6","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxButton_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_30_boot)
HXDLIN(  30)		NORMAL = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_34_boot)
HXDLIN(  34)		HIGHLIGHT = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_65bbf1ac0e61e703_38_boot)
HXDLIN(  38)		PRESSED = (int)2;
            	}
}

} // end namespace flixel
} // end namespace ui
