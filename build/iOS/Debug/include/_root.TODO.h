// This file was generated based on '.uno/ux11/TODO.g.uno'.
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
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TODO;}

namespace g{

// public partial sealed class TODO :2
// {
::g::Fuse::Controls::Panel_type* TODO_typeof();
void TODO__SetText_fn(TODO* __this, uString* value, uObject* origin);
void TODO__get_Text_fn(TODO* __this, uString** __retval);
void TODO__set_Text_fn(TODO* __this, uString* value);

struct TODO : ::g::Fuse::Controls::Panel
{
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return TODO_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TODO_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TODO_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_Text;

    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

} // ::g
