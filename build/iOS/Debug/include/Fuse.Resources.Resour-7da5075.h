// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceConverters;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class ResourceConverters :3538
// {
uClassType* ResourceConverters_typeof();
void ResourceConverters__Get_fn(uType* __type, uObject** __retval);

struct ResourceConverters : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _converters_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _converters() { return ResourceConverters_typeof()->Init(), _converters_; }

    static uObject* Get(uType* __type);
};
// }

}}} // ::g::Fuse::Resources
