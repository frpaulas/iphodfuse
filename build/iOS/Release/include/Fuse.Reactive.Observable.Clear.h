// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observa-9616d070.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Clear;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.Clear :854
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__Clear_typeof();
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Reactive::Observable* obs, int* origin);
void Observable__Clear__New1_fn(::g::Fuse::Reactive::Observable* obs, int* origin, Observable__Clear** __retval);
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub);

struct Observable__Clear : ::g::Fuse::Reactive::Observable__Operation
{
    int _origin;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int origin);
    static Observable__Clear* New1(::g::Fuse::Reactive::Observable* obs, int origin);
};
// }

}}} // ::g::Fuse::Reactive
