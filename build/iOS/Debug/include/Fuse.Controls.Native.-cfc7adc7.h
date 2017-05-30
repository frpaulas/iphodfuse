// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct InputDispatch;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIEvent;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :771
// {
uClassType* InputDispatch_typeof();
void InputDispatch__ActivateTouch_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch);
void InputDispatch__AddListener_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle);
void InputDispatch__AddListener1_fn(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol);
void InputDispatch__CreateEventHandler_fn(uDelegate* callback, ::g::ObjC::Object** __retval);
void InputDispatch__DeactivateAllTouches_fn();
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void InputDispatch__GetPointerIndex_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, int* __retval);
void InputDispatch__HandleEvent_fn(::g::ObjC::Object* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent);
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, ::g::ObjC::Object* rootView, int* pointIndex, ::g::Fuse::Input::PointerEventData** __retval);
void InputDispatch__OnTouchEvent_fn(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RemoveListener_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle);
void InputDispatch__RemoveListener1_fn(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol);

struct InputDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _activeTouches_;
    static uSStrong< ::g::Uno::Collections::List*>& _activeTouches() { return InputDispatch_typeof()->Init(), _activeTouches_; }
    static uSStrong<uObject*> _captureIdentity_;
    static uSStrong<uObject*>& _captureIdentity() { return InputDispatch_typeof()->Init(), _captureIdentity_; }
    static uSStrong< ::g::ObjC::Object*> _eventHandler_;
    static uSStrong< ::g::ObjC::Object*>& _eventHandler() { return InputDispatch_typeof()->Init(), _eventHandler_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return InputDispatch_typeof()->Init(), _listeners_; }

    static void ActivateTouch(::g::Fuse::Controls::Native::iOS::UITouch* touch);
    static void AddListener(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle);
    static void AddListener1(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol);
    static ::g::ObjC::Object* CreateEventHandler(uDelegate* callback);
    static void DeactivateAllTouches();
    static ::g::Fuse::Visual* FindRoot(::g::Fuse::Visual* visual);
    static int GetPointerIndex(::g::Fuse::Controls::Native::iOS::UITouch* touch);
    static void HandleEvent(::g::ObjC::Object* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent);
    static ::g::Fuse::Input::PointerEventData* MakePointerEventData(::g::Fuse::Controls::Native::iOS::UITouch* touch, ::g::ObjC::Object* rootView, int pointIndex);
    static void OnTouchEvent(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
    static void RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RemoveListener(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle);
    static void RemoveListener1(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
