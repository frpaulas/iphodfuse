// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{namespace Controls{struct WrapPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class WrapPanel :2947
// {
::g::Fuse::Controls::Control_type* WrapPanel_typeof();
void WrapPanel__ctor_7_fn(WrapPanel* __this);

struct WrapPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::WrapLayout*> _wrapLayout;

    void ctor_7();
};
// }

}}} // ::g::Fuse::Controls
