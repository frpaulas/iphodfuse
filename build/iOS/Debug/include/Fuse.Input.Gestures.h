// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct Gestures;}}}
namespace g{namespace Fuse{namespace Input{struct Gestures__ActiveGesture;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class Gestures :731
// {
uClassType* Gestures_typeof();
void Gestures__Add_fn(uObject* handler, ::g::Fuse::Visual* target, int* type, ::g::Fuse::Input::Gesture** __retval);
void Gestures__AddActive_fn(::g::Fuse::Input::Gesture* g);
void Gestures__GetActiveGestureIndex_fn(::g::Fuse::Input::Gesture* g, int* __retval);
void Gestures__PriorityOrder_fn(Gestures__ActiveGesture* a, Gestures__ActiveGesture* b, int* __retval);
void Gestures__ProcessCaptureChanges_fn();
void Gestures__Remove_fn(uObject* handler);
void Gestures__RemoveActive_fn(::g::Fuse::Input::Gesture* g);
void Gestures__RequestCaptureChange_fn(::g::Fuse::Input::Gesture* gesture, ::g::Fuse::Input::PointerEventArgs* args, int* captureType);
void Gestures__UpdateSignificance_fn();

struct Gestures : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _activeGestures_;
    static uSStrong< ::g::Uno::Collections::List*>& _activeGestures() { return Gestures_typeof()->Init(), _activeGestures_; }
    static int _changePosted_;
    static int& _changePosted() { return Gestures_typeof()->Init(), _changePosted_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _gestures_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _gestures() { return Gestures_typeof()->Init(), _gestures_; }

    static ::g::Fuse::Input::Gesture* Add(uObject* handler, ::g::Fuse::Visual* target, int type);
    static void AddActive(::g::Fuse::Input::Gesture* g);
    static int GetActiveGestureIndex(::g::Fuse::Input::Gesture* g);
    static int PriorityOrder(Gestures__ActiveGesture* a, Gestures__ActiveGesture* b);
    static void ProcessCaptureChanges();
    static void Remove(uObject* handler);
    static void RemoveActive(::g::Fuse::Input::Gesture* g);
    static void RequestCaptureChange(::g::Fuse::Input::Gesture* gesture, ::g::Fuse::Input::PointerEventArgs* args, int captureType);
    static void UpdateSignificance();
};
// }

}}} // ::g::Fuse::Input
