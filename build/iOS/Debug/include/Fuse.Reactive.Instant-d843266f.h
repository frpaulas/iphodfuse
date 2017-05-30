// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__WindowItem;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Instantiator.WindowItem :1157
// {
uType* Instantiator__WindowItem_typeof();
void Instantiator__WindowItem__ctor__fn(Instantiator__WindowItem* __this);
void Instantiator__WindowItem__New1_fn(Instantiator__WindowItem** __retval);

struct Instantiator__WindowItem : uObject
{
    uStrong<uObject*> Data;
    uStrong< ::g::Uno::Collections::List*> Nodes;

    void ctor_();
    static Instantiator__WindowItem* New1();
};
// }

}}} // ::g::Fuse::Reactive
