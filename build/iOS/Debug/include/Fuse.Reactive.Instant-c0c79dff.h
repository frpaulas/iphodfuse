// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__ObservableLink;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Instantiator.ObservableLink :1550
// {
::g::Fuse::Reactive::ValueObserver_type* Instantiator__ObservableLink_typeof();
void Instantiator__ObservableLink__ctor_1_fn(Instantiator__ObservableLink* __this, uObject* obs, ::g::Fuse::Node* target);
void Instantiator__ObservableLink__get_Data_fn(Instantiator__ObservableLink* __this, uObject** __retval);
void Instantiator__ObservableLink__Dispose_fn(Instantiator__ObservableLink* __this);
void Instantiator__ObservableLink__New1_fn(uObject* obs, ::g::Fuse::Node* target, Instantiator__ObservableLink** __retval);
void Instantiator__ObservableLink__PushData_fn(Instantiator__ObservableLink* __this, uObject* newData);

struct Instantiator__ObservableLink : ::g::Fuse::Reactive::ValueObserver
{
    uStrong<uObject*> _currentData;
    uStrong< ::g::Fuse::Node*> _target;

    void ctor_1(uObject* obs, ::g::Fuse::Node* target);
    uObject* Data();
    static Instantiator__ObservableLink* New1(uObject* obs, ::g::Fuse::Node* target);
};
// }

}}} // ::g::Fuse::Reactive
