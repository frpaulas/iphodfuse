// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Member;}}}
namespace g{namespace Fuse{namespace Reactive{struct Member__MemberSubscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Member.MemberSubscription :384
// {
::g::Fuse::Reactive::UnaryOperator__Subscription_type* Member__MemberSubscription_typeof();
void Member__MemberSubscription__ctor_2_fn(Member__MemberSubscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
void Member__MemberSubscription__New2_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__MemberSubscription** __retval);
void Member__MemberSubscription__OnNewOperand_fn(Member__MemberSubscription* __this, uObject* obj);

struct Member__MemberSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong< ::g::Fuse::Reactive::Member*> _member;

    void ctor_2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
    static Member__MemberSubscription* New2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
