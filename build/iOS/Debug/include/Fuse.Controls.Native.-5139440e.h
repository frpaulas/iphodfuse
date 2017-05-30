// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UITouch :992
// {
uType* UITouch_typeof();
void UITouch__ctor__fn(UITouch* __this, ::g::ObjC::Object* handle);
void UITouch__Compare_fn(::g::ObjC::Object* handle1, ::g::ObjC::Object* handle2, bool* __retval);
void UITouch__Equals_fn(UITouch* __this, uObject* obj, bool* __retval);
void UITouch__GetHashCode_fn(UITouch* __this, int* __retval);
void UITouch__GetTimestamp_fn(::g::ObjC::Object* handle, double* __retval);
void UITouch__GetTouchPhase_fn(::g::ObjC::Object* handle, int* __retval);
void UITouch__LocationInView_fn(UITouch* __this, ::g::ObjC::Object* view, ::g::Uno::Float2* __retval);
void UITouch__LocationInView1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* relativeViewHandle, void** x, void** y);
void UITouch__New1_fn(::g::ObjC::Object* handle, UITouch** __retval);
void UITouch__get_Phase_fn(UITouch* __this, int* __retval);
void UITouch__get_Timestamp_fn(UITouch* __this, double* __retval);

struct UITouch : uObject
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_(::g::ObjC::Object* handle);
    ::g::Uno::Float2 LocationInView(::g::ObjC::Object* view);
    int Phase();
    double Timestamp();
    static bool Compare(::g::ObjC::Object* handle1, ::g::ObjC::Object* handle2);
    static double GetTimestamp(::g::ObjC::Object* handle);
    static int GetTouchPhase(::g::ObjC::Object* handle);
    static void LocationInView1(::g::ObjC::Object* handle, ::g::ObjC::Object* relativeViewHandle, void* x, void* y);
    static UITouch* New1(::g::ObjC::Object* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
