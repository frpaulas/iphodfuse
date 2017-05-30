// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerEventData :1720
// {
uType* PointerEventData_typeof();
void PointerEventData__ctor__fn(PointerEventData* __this);
void PointerEventData__New1_fn(PointerEventData** __retval);

struct PointerEventData : uObject
{
    bool IsPrimary;
    int PointerType;
    int PointIndex;
    double Timestamp;
    ::g::Uno::Float2 WindowPoint;

    void ctor_();
    static PointerEventData* New1();
};
// }

}}} // ::g::Fuse::Input
