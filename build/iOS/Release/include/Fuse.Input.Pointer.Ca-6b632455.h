// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Capture;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__CaptureLockImpl;}}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.CaptureLockImpl :1094
// {
struct Pointer__CaptureLockImpl_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Pointer__CaptureLockImpl_type* Pointer__CaptureLockImpl_typeof();
void Pointer__CaptureLockImpl__ctor__fn(Pointer__CaptureLockImpl* __this);
void Pointer__CaptureLockImpl__Delete_fn(Pointer__CaptureLockImpl* __this, ::g::Fuse::Input::Capture* c);
void Pointer__CaptureLockImpl__Dispose_fn(Pointer__CaptureLockImpl* __this);
void Pointer__CaptureLockImpl__New1_fn(Pointer__CaptureLockImpl** __retval);

struct Pointer__CaptureLockImpl : uObject
{
    bool AnyDeleted;
    int Count;

    void ctor_();
    void Delete(::g::Fuse::Input::Capture* c);
    void Dispose();
    static Pointer__CaptureLockImpl* New1();
};
// }

}}} // ::g::Fuse::Input
