// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Uno.Threading/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.EventWaitHandle.h>
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ManualResetEvent :670
// {
::g::Uno::Threading::EventWaitHandle_type* ManualResetEvent_typeof();
void ManualResetEvent__ctor_1_fn(ManualResetEvent* __this, bool* initialState);
void ManualResetEvent__New2_fn(bool* initialState, ManualResetEvent** __retval);

struct ManualResetEvent : ::g::Uno::Threading::EventWaitHandle
{
    void ctor_1(bool initialState);
    static ManualResetEvent* New2(bool initialState);
};
// }

}}} // ::g::Uno::Threading
