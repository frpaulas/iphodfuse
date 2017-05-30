// This file was generated based on '.uno/ux11/ComplinePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <iphod.Page.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ComplinePage;}

namespace g{

// public partial sealed class ComplinePage :2
// {
::g::Fuse::Controls::Panel_type* ComplinePage_typeof();
void ComplinePage__ctor_9_fn(ComplinePage* __this, ::g::Fuse::Navigation::Router* router1);
void ComplinePage__InitializeUX1_fn(ComplinePage* __this);
void ComplinePage__New6_fn(::g::Fuse::Navigation::Router* router1, ComplinePage** __retval);

struct ComplinePage : ::g::iphod::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ComplinePage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ComplinePage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ComplinePage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ComplinePage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ComplinePage_typeof()->Init(), __selector3_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Uno::UX::Property1*> temp_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Visibility_inst;

    void ctor_9(::g::Fuse::Navigation::Router* router1);
    void InitializeUX1();
    static ComplinePage* New6(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
