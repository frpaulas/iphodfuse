// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class DockPanel :170
// {
::g::Fuse::Controls::Panel_type* DockPanel_typeof();
void DockPanel__ctor_7_fn(DockPanel* __this);
void DockPanel__New4_fn(DockPanel** __retval);
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock);

struct DockPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::DockLayout*> _dockLayout;

    void ctor_7();
    static DockPanel* New4();
    static void SetDock(::g::Fuse::Elements::Element* elm, int dock);
};
// }

}}} // ::g::Fuse::Controls
