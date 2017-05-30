// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observa-9616d070.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Add;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.Add :959
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof();
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value);
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval);
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub);

struct Observable__Add : ::g::Fuse::Reactive::Observable__Operation
{
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value);
    static Observable__Add* New1(::g::Fuse::Reactive::Observable* obs, uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
