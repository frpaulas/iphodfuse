// This file was generated based on '.uno/ux11/Psalm.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Psalm;}

namespace g{

// public partial sealed class Psalm :2
// {
::g::Fuse::Controls::TextControl_type* Psalm_typeof();
void Psalm__get_EndVs_fn(Psalm* __this, uString** __retval);
void Psalm__set_EndVs_fn(Psalm* __this, uString* value);
void Psalm__get_Number_fn(Psalm* __this, uString** __retval);
void Psalm__set_Number_fn(Psalm* __this, uString* value);
void Psalm__SetEndVs_fn(Psalm* __this, uString* value, uObject* origin);
void Psalm__SetNumber_fn(Psalm* __this, uString* value, uObject* origin);
void Psalm__SetStartVs_fn(Psalm* __this, uString* value, uObject* origin);
void Psalm__get_StartVs_fn(Psalm* __this, uString** __retval);
void Psalm__set_StartVs_fn(Psalm* __this, uString* value);

struct Psalm : ::g::Fuse::Controls::Text
{
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Psalm_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Psalm_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Psalm_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Psalm_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Psalm_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Psalm_typeof()->Init(), __selector4_; }
    uStrong<uString*> _field_EndVs;
    uStrong<uString*> _field_Number;
    uStrong<uString*> _field_StartVs;

    uString* EndVs();
    void EndVs(uString* value);
    uString* Number();
    void Number(uString* value);
    void SetEndVs(uString* value, uObject* origin);
    void SetNumber(uString* value, uObject* origin);
    void SetStartVs(uString* value, uObject* origin);
    uString* StartVs();
    void StartVs(uString* value);
};
// }

} // ::g
