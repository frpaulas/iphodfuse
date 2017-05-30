// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct ReleasePage;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class ReleasePage :273
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof();
void ReleasePage__ctor_2_fn(ReleasePage* __this);
void ReleasePage__DeferredRelease_fn(ReleasePage* __this);
void ReleasePage__New2_fn(ReleasePage** __retval);
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n);

struct ReleasePage : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Controls::Navigator*> _pendNavigator;
    uStrong< ::g::Fuse::Visual*> _pendVisual;

    void ctor_2();
    void DeferredRelease();
    static ReleasePage* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
