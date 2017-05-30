// This file was generated based on '.uno/ux11/Psalm1.g.uno'.
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
#include <Fuse.Triggers.IValue-1.h>
#include <iphod.Regular.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Psalm1;}

namespace g{

// public partial sealed class Psalm1 :2
// {
::g::Fuse::Controls::TextControl_type* Psalm1_typeof();
void Psalm1__ctor_10_fn(Psalm1* __this);
void Psalm1__InitializeUX3_fn(Psalm1* __this);
void Psalm1__New6_fn(Psalm1** __retval);
void Psalm1__SetText_fn(Psalm1* __this, uString* value, uObject* origin);
void Psalm1__get_Text_fn(Psalm1* __this, uString** __retval);
void Psalm1__set_Text_fn(Psalm1* __this, uString* value);

struct Psalm1 : ::g::iphod::Regular
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Psalm1_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Psalm1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Psalm1_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Text_inst;

    void ctor_10();
    void InitializeUX3();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static Psalm1* New6();
};
// }

} // ::g
