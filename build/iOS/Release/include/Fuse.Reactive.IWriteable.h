// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IWriteable :58
// {
uInterfaceType* IWriteable_typeof();

struct IWriteable
{
    void(*fp_SetExclusive)(uObject*, uObject*);
    static void SetExclusive(const uInterface& __this, uObject* value) { __this.VTable<IWriteable>()->fp_SetExclusive(__this, value); }
};
// }

}}} // ::g::Fuse::Reactive
