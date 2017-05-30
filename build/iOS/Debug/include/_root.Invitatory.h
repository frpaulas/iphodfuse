// This file was generated based on '.uno/ux11/Invitatory.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.WrapPanel.h>
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
namespace g{struct Invitatory;}

namespace g{

// public partial sealed class Invitatory :2
// {
::g::Fuse::Controls::Panel_type* Invitatory_typeof();
void Invitatory__ctor_8_fn(Invitatory* __this);
void Invitatory__InitializeUX_fn(Invitatory* __this);
void Invitatory__New5_fn(Invitatory** __retval);

struct Invitatory : ::g::Fuse::Controls::WrapPanel
{
    void ctor_8();
    void InitializeUX();
    static Invitatory* New5();
};
// }

} // ::g
