// This file was generated based on '.uno/ux11/Gloria.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
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
namespace g{struct Gloria;}

namespace g{

// public partial sealed class Gloria :2
// {
::g::Fuse::Controls::Panel_type* Gloria_typeof();
void Gloria__ctor_8_fn(Gloria* __this);
void Gloria__InitializeUX_fn(Gloria* __this);
void Gloria__New5_fn(Gloria** __retval);

struct Gloria : ::g::Fuse::Controls::Grid
{
    void ctor_8();
    void InitializeUX();
    static Gloria* New5();
};
// }

} // ::g
