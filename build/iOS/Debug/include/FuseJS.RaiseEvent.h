// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/FuseJS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace FuseJS{struct RaiseEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace FuseJS{

// internal sealed class RaiseEvent :880
// {
uType* RaiseEvent_typeof();
void RaiseEvent__ctor__fn(RaiseEvent* __this);
void RaiseEvent__New1_fn(RaiseEvent** __retval);
void RaiseEvent__Raise_fn(RaiseEvent* __this);

struct RaiseEvent : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Args;
    uStrong<uString*> Name;
    uStrong< ::g::Fuse::Node*> Source;

    void ctor_();
    void Raise();
    static RaiseEvent* New1();
};
// }

}} // ::g::FuseJS
