// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IEventHandler :18
// {
uInterfaceType* IEventHandler_typeof();

struct IEventHandler
{
    void(*fp_Dispatch)(uObject*, uObject*);
    static void Dispatch(const uInterface& __this, uObject* e) { __this.VTable<IEventHandler>()->fp_Dispatch(__this, e); }
};
// }

}}} // ::g::Fuse::Reactive
