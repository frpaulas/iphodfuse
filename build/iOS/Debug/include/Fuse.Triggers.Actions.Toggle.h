// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Toggle;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Toggle :894
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();
void Toggle__FindTarget_fn(Toggle* __this, ::g::Fuse::Node* n, uObject** __retval);
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target);
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval);
void Toggle__set_Target_fn(Toggle* __this, uObject* value);

struct Toggle : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _Target;

    uObject* FindTarget(::g::Fuse::Node* n);
    uObject* Target();
    void Target(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
