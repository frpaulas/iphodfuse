// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.Navig-5566e4c1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct Deactivated;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Deactivated :126
// {
::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof();
void Deactivated__ctor_7_fn(Deactivated* __this);
void Deactivated__NavReady_fn(Deactivated* __this);
void Deactivated__NavUnready_fn(Deactivated* __this);
void Deactivated__New2_fn(Deactivated** __retval);
void Deactivated__OnActivePageChanged_fn(Deactivated* __this, uObject* s, ::g::Fuse::Visual* active);

struct Deactivated : ::g::Fuse::Navigation::NavigationTrigger
{
    bool _isActive;

    void ctor_7();
    void OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active);
    static Deactivated* New2();
};
// }

}}} // ::g::Fuse::Navigation
