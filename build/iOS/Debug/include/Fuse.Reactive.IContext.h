// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IContext :38
// {
uInterfaceType* IContext_typeof();

struct IContext
{
    void(*fp_get_NameTable)(uObject*, ::g::Uno::UX::NameTable**);
    void(*fp_get_Node)(uObject*, ::g::Fuse::Node**);
    void(*fp_Subscribe)(uObject*, uObject*, uString*, uObject*, uObject**);
    void(*fp_SubscribeResource)(uObject*, uObject*, uString*, uObject*, uObject**);
    static ::g::Uno::UX::NameTable* NameTable(const uInterface& __this) { ::g::Uno::UX::NameTable* __retval; return __this.VTable<IContext>()->fp_get_NameTable(__this, &__retval), __retval; }
    static ::g::Fuse::Node* Node(const uInterface& __this) { ::g::Fuse::Node* __retval; return __this.VTable<IContext>()->fp_get_Node(__this, &__retval), __retval; }
    static uObject* Subscribe(const uInterface& __this, uObject* source, uString* key, uObject* listener) { uObject* __retval; return __this.VTable<IContext>()->fp_Subscribe(__this, source, key, listener, &__retval), __retval; }
    static uObject* SubscribeResource(const uInterface& __this, uObject* source, uString* key, uObject* listener) { uObject* __retval; return __this.VTable<IContext>()->fp_SubscribeResource(__this, source, key, listener, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
