// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IO.IOException.h>
namespace g{namespace Uno{namespace IO{struct EndOfStreamException;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class EndOfStreamException :2495
// {
::g::Uno::Exception_type* EndOfStreamException_typeof();
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this);
void EndOfStreamException__New5_fn(EndOfStreamException** __retval);

struct EndOfStreamException : ::g::Uno::IO::IOException
{
    void ctor_4();
    static EndOfStreamException* New5();
};
// }

}}} // ::g::Uno::IO
