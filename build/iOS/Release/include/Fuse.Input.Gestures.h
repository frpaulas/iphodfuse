// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct Gestures;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class Gestures :665
// {
uClassType* Gestures_typeof();
void Gestures__Add_fn(uObject* handler, ::g::Fuse::Visual* target, int* type, ::g::Fuse::Input::Gesture** __retval);
void Gestures__Remove_fn(uObject* handler);

struct Gestures : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _gestures_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _gestures() { return Gestures_typeof()->Init(), _gestures_; }

    static ::g::Fuse::Input::Gesture* Add(uObject* handler, ::g::Fuse::Visual* target, int type);
    static void Remove(uObject* handler);
};
// }

}}} // ::g::Fuse::Input
