// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEnt-cfe04f3d.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerEntered;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerEntered :1905
// {
::g::Fuse::VisualEvent_type* PointerEntered_typeof();
void PointerEntered__ctor_1_fn(PointerEntered* __this);
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args);
void PointerEntered__New1_fn(PointerEntered** __retval);

struct PointerEntered : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerEntered* New1();
};
// }

}}} // ::g::Fuse::Input
