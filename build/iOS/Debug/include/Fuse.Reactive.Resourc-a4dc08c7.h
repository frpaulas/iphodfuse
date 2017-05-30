// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/subscription/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ResourceSubscription;}}}
namespace g{namespace Fuse{struct Binding;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ResourceSubscription :86
// {
struct ResourceSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ResourceSubscription_type* ResourceSubscription_typeof();
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type);
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval);
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this);
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this);
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval);
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this);

struct ResourceSubscription : uObject
{
    uStrong<uObject*> _diag;
    uStrong<uString*> _key;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Binding*> _origin;
    uStrong<uObject*> _source;
    uStrong<uType*> _type;

    void ctor_(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type);
    bool Accept(uObject* o);
    void ClearDiagnostic();
    void Dispose();
    void OnChanged();
    static ResourceSubscription* New1(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type);
};
// }

}}} // ::g::Fuse::Reactive
