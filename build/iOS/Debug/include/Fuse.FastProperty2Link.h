// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty2Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty2Link :5603
// {
uType* FastProperty2Link_typeof();
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int* p);

struct FastProperty2Link : uObject
{
    uStrong<FastProperty2Link*> Next;
    int Property;

    void ctor_(int p);
};
// }

}} // ::g::Fuse
