// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class Gesture :537
// {
struct Gesture_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

Gesture_type* Gesture_typeof();
void Gesture__ctor__fn(Gesture* __this);
void Gesture__Cancel_fn(Gesture* __this);
void Gesture__Capture_fn(Gesture* __this, ::g::Fuse::Input::PointerEventArgs* args, int* captureType);
void Gesture__Dispose_fn(Gesture* __this);
void Gesture__HandleRequest_fn(Gesture* __this, int* req, ::g::Fuse::Input::PointerEventArgs* args);
void Gesture__get_IsHardCapture_fn(Gesture* __this, bool* __retval);
void Gesture__LostCapture_fn(Gesture* __this, bool* forced);
void Gesture__Maintain_fn(Gesture* __this);
void Gesture__New1_fn(Gesture** __retval);
void Gesture__OnLostCapture_fn(Gesture* __this);
void Gesture__OnPointerMoved_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Gesture__OnPointerPressed_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Gesture__OnPointerReleased_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Gesture__UnoUXIPropertyListenerOnPropertyChanged_fn(Gesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel);

struct Gesture : uObject
{
    int _captureType;
    int _down;
    uStrong<uObject*> Handler;
    uStrong< ::g::Fuse::Visual*> Target;
    int Type;

    void ctor_();
    void Cancel();
    void Capture(::g::Fuse::Input::PointerEventArgs* args, int captureType);
    void Dispose();
    void HandleRequest(int req, ::g::Fuse::Input::PointerEventArgs* args);
    bool IsHardCapture();
    void LostCapture(bool forced);
    void Maintain();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    static Gesture* New1();
};
// }

}}} // ::g::Fuse::Input
