// This file was generated based on '.uno/ux11/Confession.g.uno'.
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
namespace g{struct Confession;}

namespace g{

// public partial sealed class Confession :2
// {
::g::Fuse::Controls::Panel_type* Confession_typeof();
void Confession__ctor_8_fn(Confession* __this);
void Confession__InitializeUX_fn(Confession* __this);
void Confession__New5_fn(Confession** __retval);

struct Confession : ::g::Fuse::Controls::WrapPanel
{
    void ctor_8();
    void InitializeUX();
    static Confession* New5();
};
// }

} // ::g
