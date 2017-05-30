// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observa-9616d070.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__RemoveAt;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.RemoveAt :980
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof();
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index);
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval);
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub);

struct Observable__RemoveAt : ::g::Fuse::Reactive::Observable__Operation
{
    int _index;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index);
    static Observable__RemoveAt* New1(::g::Fuse::Reactive::Observable* obs, int index);
};
// }

}}} // ::g::Fuse::Reactive
