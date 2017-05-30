// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct PriorityQueueItem<T> :1659
// {
uStructType* PriorityQueueItem_typeof();

template<class T>
struct PriorityQueueItem
{
    T Value;
    ::g::Uno::Float4 Priority;
};
// }

}}} // ::g::Uno::Collections
