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
namespace g{namespace Fuse{namespace Navigation{struct Activated;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Activated :64
// {
::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof();
void Activated__ctor_7_fn(Activated* __this);
void Activated__NavReady_fn(Activated* __this);
void Activated__NavUnready_fn(Activated* __this);
void Activated__New2_fn(Activated** __retval);
void Activated__OnActivePageChanged_fn(Activated* __this, uObject* s, ::g::Fuse::Visual* active);

struct Activated : ::g::Fuse::Navigation::NavigationTrigger
{
    void ctor_7();
    void OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active);
    static Activated* New2();
};
// }

}}} // ::g::Fuse::Navigation
