// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface ISubscription :91
// {
uInterfaceType* ISubscription_typeof();

struct ISubscription
{
    void(*fp_ClearExclusive)(uObject*);
    void(*fp_ReplaceAllExclusive)(uObject*, uObject*);
    void(*fp_SetExclusive)(uObject*, uObject*);
    static void ClearExclusive(const uInterface& __this) { __this.VTable<ISubscription>()->fp_ClearExclusive(__this); }
    static void ReplaceAllExclusive(const uInterface& __this, uObject* values) { __this.VTable<ISubscription>()->fp_ReplaceAllExclusive(__this, values); }
    static void SetExclusive(const uInterface& __this, uObject* newValue) { __this.VTable<ISubscription>()->fp_SetExclusive(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
