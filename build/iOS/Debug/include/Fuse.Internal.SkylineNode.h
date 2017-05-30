// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct SkylineNode;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct SkylineNode :1787
// {
uStructType* SkylineNode_typeof();
void SkylineNode__ctor__fn(SkylineNode* __this, ::g::Uno::Int2* position, int* width);
void SkylineNode__New1_fn(::g::Uno::Int2* position, int* width, SkylineNode* __retval);

struct SkylineNode
{
    ::g::Uno::Int2 Position;
    int Width;

    void ctor_(::g::Uno::Int2 position, int width);
};

SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int width);
// }

}}} // ::g::Fuse::Internal
