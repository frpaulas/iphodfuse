// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-5139440e.h>
#include <Fuse.Controls.Native.-b38d34c1.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UIEvent :1108
// {
static void UIEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::iOS::UITouch_typeof()->Array();
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIEvent, _handle), 0);
}

uType* UIEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UIEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UIEvent", options);
    type->fp_build_ = UIEvent_build;
    return type;
}

// public UIEvent(ObjC.Object handle) :1113
void UIEvent__ctor__fn(UIEvent* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_(handle);
}

// public Fuse.Controls.Native.iOS.UITouch[] GetTouchesForView(ObjC.Object viewHandle) :1118
void UIEvent__GetTouchesForView_fn(UIEvent* __this, ::g::ObjC::Object* viewHandle, uArray** __retval)
{
    *__retval = __this->GetTouchesForView(viewHandle);
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) :1129
void UIEvent__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval)
{
    *__retval = UIEvent::GetTouchesForViewCount(handle, viewHandle);
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) :1138
void UIEvent__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int* index, ::g::ObjC::Object** __retval)
{
    *__retval = UIEvent::GetTouchForView(handle, viewHandle, *index);
}

// public UIEvent New(ObjC.Object handle) :1113
void UIEvent__New1_fn(::g::ObjC::Object* handle, UIEvent** __retval)
{
    *__retval = UIEvent::New1(handle);
}

// public UIEvent(ObjC.Object handle) [instance] :1113
void UIEvent::ctor_(::g::ObjC::Object* handle)
{
    _handle = handle;
}

// public Fuse.Controls.Native.iOS.UITouch[] GetTouchesForView(ObjC.Object viewHandle) [instance] :1118
uArray* UIEvent::GetTouchesForView(::g::ObjC::Object* viewHandle)
{
    int touchCount = (int)UIEvent::GetTouchesForViewCount(_handle, viewHandle);
    uArray* touches = uArray::New(::TYPES[0/*Fuse.Controls.Native.iOS.UITouch[]*/], touchCount);

    for (int i = 0; i < touchCount; i++)
        uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i) = ::g::Fuse::Controls::Native::iOS::UITouch::New1(UIEvent::GetTouchForView(_handle, viewHandle, i));

    return touches;
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) [static] :1129
int64_t UIEvent::GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    @autoreleasepool
    {
        return [] (::id handle, ::id viewHandle) -> int64_t
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] count];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle));
        
    }
    
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) [static] :1138
::g::ObjC::Object* UIEvent::GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int index)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::id viewHandle, int index) -> ::id
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle), index));
        
    }
    
}

// public UIEvent New(ObjC.Object handle) [static] :1113
UIEvent* UIEvent::New1(::g::ObjC::Object* handle)
{
    UIEvent* obj1 = (UIEvent*)uNew(UIEvent_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
