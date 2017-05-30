// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ValueForwarder.IValueListener :197
// {
uInterfaceType* ValueForwarder__IValueListener_typeof();

struct ValueForwarder__IValueListener
{
    void(*fp_NewValue)(uObject*, uObject*);
    static void NewValue(const uInterface& __this, uObject* value) { __this.VTable<ValueForwarder__IValueListener>()->fp_NewValue(__this, value); }
};
// }

}}} // ::g::Fuse::Reactive
