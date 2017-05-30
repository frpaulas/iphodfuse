// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface INotifyUnrooted :2657
// {
uInterfaceType* INotifyUnrooted_typeof();

struct INotifyUnrooted
{
    void(*fp_add_Unrooted)(uObject*, uDelegate*);
    void(*fp_remove_Unrooted)(uObject*, uDelegate*);
    static void add_Unrooted(const uInterface& __this, uDelegate* value) { __this.VTable<INotifyUnrooted>()->fp_add_Unrooted(__this, value); }
    static void remove_Unrooted(const uInterface& __this, uDelegate* value) { __this.VTable<INotifyUnrooted>()->fp_remove_Unrooted(__this, value); }
};
// }

}} // ::g::Fuse
