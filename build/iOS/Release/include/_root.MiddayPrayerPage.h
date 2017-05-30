// This file was generated based on '.uno/ux11/MiddayPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <iphod.Page.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct MiddayPrayerPage;}

namespace g{

// public partial sealed class MiddayPrayerPage :2
// {
::g::Fuse::Controls::Control_type* MiddayPrayerPage_typeof();
void MiddayPrayerPage__ctor_9_fn(MiddayPrayerPage* __this, ::g::Fuse::Navigation::Router* router1);
void MiddayPrayerPage__InitializeUX1_fn(MiddayPrayerPage* __this);
void MiddayPrayerPage__New6_fn(::g::Fuse::Navigation::Router* router1, MiddayPrayerPage** __retval);

struct MiddayPrayerPage : ::g::iphod::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MiddayPrayerPage_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;

    void ctor_9(::g::Fuse::Navigation::Router* router1);
    void InitializeUX1();
    static MiddayPrayerPage* New6(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
