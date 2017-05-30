// This file was generated based on '.uno/ux11/iphod.Versical.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
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
namespace g{namespace iphod{struct Versical;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace iphod{

// public partial sealed class Versical :4
// {
::g::Fuse::Controls::Control_type* Versical_typeof();
void Versical__ctor_8_fn(Versical* __this);
void Versical__InitializeUX_fn(Versical* __this);
void Versical__New5_fn(Versical** __retval);
void Versical__SetSpeaker_fn(Versical* __this, uString* value, uObject* origin);
void Versical__SetText_fn(Versical* __this, uString* value, uObject* origin);
void Versical__get_Speaker_fn(Versical* __this, uString** __retval);
void Versical__set_Speaker_fn(Versical* __this, uString* value);
void Versical__get_Text_fn(Versical* __this, uString** __retval);
void Versical__set_Text_fn(Versical* __this, uString* value);

struct Versical : ::g::Fuse::Controls::Grid
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Versical_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Versical_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Versical_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Versical_typeof()->Init(), __selector2_; }
    uStrong<uString*> _field_Speaker;
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Speaker_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Text_inst;

    void ctor_8();
    void InitializeUX();
    void SetSpeaker(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Speaker();
    void Speaker(uString* value);
    uString* Text();
    void Text(uString* value);
    static Versical* New5();
};
// }

}} // ::g::iphod
