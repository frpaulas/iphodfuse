// This file was generated based on '.uno/ux11/ComplinePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ComplinePage;}
namespace g{struct ComplinePage__Template;}

namespace g{

// public partial sealed class ComplinePage.Template :6
// {
::g::Uno::UX::Template_type* ComplinePage__Template_typeof();
void ComplinePage__Template__ctor_1_fn(ComplinePage__Template* __this, ::g::ComplinePage* parent, ::g::ComplinePage* parentInstance);
void ComplinePage__Template__New1_fn(ComplinePage__Template* __this, uObject** __retval);
void ComplinePage__Template__New2_fn(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance, ComplinePage__Template** __retval);

struct ComplinePage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ComplinePage__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::ComplinePage*> __parent1;
    uWeak< ::g::ComplinePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ComplinePage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ComplinePage__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;

    void ctor_1(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance);
    static ComplinePage__Template* New2(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance);
};
// }

} // ::g
