// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface IObservable :86
// {
uInterfaceType* IObservable_typeof();

struct IObservable
{
    void(*fp_Subscribe)(uObject*, uObject*, uObject**);
    static uObject* Subscribe(const uInterface& __this, uObject* observer) { uObject* __retval; return __this.VTable<IObservable>()->fp_Subscribe(__this, observer, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
