// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Properties;}}

namespace g{
namespace Fuse{

// public abstract interface IProperties :2660
// {
uInterfaceType* IProperties_typeof();

struct IProperties
{
    void(*fp_get_Properties)(uObject*, ::g::Fuse::Properties**);
    static ::g::Fuse::Properties* Properties(const uInterface& __this) { ::g::Fuse::Properties* __retval; return __this.VTable<IProperties>()->fp_get_Properties(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
