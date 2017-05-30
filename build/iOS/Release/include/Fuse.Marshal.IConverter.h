// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Marshal.IConverter :575
// {
uInterfaceType* Marshal__IConverter_typeof();

struct Marshal__IConverter
{
    void(*fp_CanConvert)(uObject*, uType*, bool*);
    void(*fp_TryConvert)(uObject*, uType*, uObject*, uObject**);
    static bool CanConvert(const uInterface& __this, uType* t) { bool __retval; return __this.VTable<Marshal__IConverter>()->fp_CanConvert(__this, t, &__retval), __retval; }
    static uObject* TryConvert(const uInterface& __this, uType* t, uObject* o) { uObject* __retval; return __this.VTable<Marshal__IConverter>()->fp_TryConvert(__this, t, o, &__retval), __retval; }
};
// }

}} // ::g::Fuse
