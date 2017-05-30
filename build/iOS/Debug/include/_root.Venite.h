// This file was generated based on '.uno/ux11/Venite.g.uno'.
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
namespace g{struct Venite;}

namespace g{

// public partial sealed class Venite :2
// {
::g::Fuse::Controls::Panel_type* Venite_typeof();
void Venite__ctor_8_fn(Venite* __this);
void Venite__InitializeUX_fn(Venite* __this);
void Venite__New5_fn(Venite** __retval);

struct Venite : ::g::Fuse::Controls::WrapPanel
{
    void ctor_8();
    void InitializeUX();
    static Venite* New5();
};
// }

} // ::g
