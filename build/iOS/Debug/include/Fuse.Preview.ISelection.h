// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Preview{

// public abstract interface ISelection :2883
// {
uInterfaceType* ISelection_typeof();

struct ISelection
{
    void(*fp_IsSelected)(uObject*, uObject*, bool*);
    static bool IsSelected(const uInterface& __this, uObject* obj) { bool __retval; return __this.VTable<ISelection>()->fp_IsSelected(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Preview
