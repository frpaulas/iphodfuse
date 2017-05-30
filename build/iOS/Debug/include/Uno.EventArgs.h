// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Uno{

// public class EventArgs :2175
// {
uType* EventArgs_typeof();
void EventArgs__ctor__fn(EventArgs* __this);
void EventArgs__New1_fn(EventArgs** __retval);

struct EventArgs : uObject
{
    static uSStrong<EventArgs*> Empty_;
    static uSStrong<EventArgs*>& Empty() { return EventArgs_typeof()->Init(), Empty_; }

    void ctor_();
    static EventArgs* New1();
};
// }

}} // ::g::Uno
