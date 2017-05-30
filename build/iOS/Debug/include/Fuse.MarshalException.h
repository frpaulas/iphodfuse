// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Marshal/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{struct MarshalException;}}

namespace g{
namespace Fuse{

// public sealed class MarshalException :195
// {
::g::Uno::Exception_type* MarshalException_typeof();
void MarshalException__ctor_3_fn(MarshalException* __this, uObject* v, uType* t);
void MarshalException__New4_fn(uObject* v, uType* t, MarshalException** __retval);

struct MarshalException : ::g::Uno::Exception
{
    void ctor_3(uObject* v, uType* t);
    static MarshalException* New4(uObject* v, uType* t);
};
// }

}} // ::g::Fuse
