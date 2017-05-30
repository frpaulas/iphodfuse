// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIEvent;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UIEvent :1098
// {
uType* UIEvent_typeof();
void UIEvent__ctor__fn(UIEvent* __this, ::g::ObjC::Object* handle);
void UIEvent__GetTouchesForView_fn(UIEvent* __this, ::g::ObjC::Object* viewHandle, uArray** __retval);
void UIEvent__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval);
void UIEvent__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int* index, ::g::ObjC::Object** __retval);
void UIEvent__New1_fn(::g::ObjC::Object* handle, UIEvent** __retval);

struct UIEvent : uObject
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_(::g::ObjC::Object* handle);
    uArray* GetTouchesForView(::g::ObjC::Object* viewHandle);
    static int64_t GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle);
    static ::g::ObjC::Object* GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int index);
    static UIEvent* New1(::g::ObjC::Object* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
