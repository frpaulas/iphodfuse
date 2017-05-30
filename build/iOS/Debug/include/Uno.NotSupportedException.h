// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NotSupportedException;}}

namespace g{
namespace Uno{

// public sealed class NotSupportedException :287
// {
::g::Uno::Exception_type* NotSupportedException_typeof();
void NotSupportedException__ctor_3_fn(NotSupportedException* __this);
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message);
void NotSupportedException__New4_fn(NotSupportedException** __retval);
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval);

struct NotSupportedException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static NotSupportedException* New4();
    static NotSupportedException* New5(uString* message);
};
// }

}} // ::g::Uno
