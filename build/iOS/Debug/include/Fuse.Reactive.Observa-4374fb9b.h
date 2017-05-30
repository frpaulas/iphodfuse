// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observa-9616d070.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__InsertAt;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.InsertAt :1072
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAt_typeof();
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* value);
void Observable__InsertAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval);
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub);
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this);

struct Observable__InsertAt : ::g::Fuse::Reactive::Observable__Operation
{
    int _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value);
    static Observable__InsertAt* New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
