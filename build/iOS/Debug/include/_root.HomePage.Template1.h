// This file was generated based on '.uno/ux11/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HomePage;}
namespace g{struct HomePage__Template1;}

namespace g{

// public partial sealed class HomePage.Template1 :25
// {
::g::Uno::UX::Template_type* HomePage__Template1_typeof();
void HomePage__Template1__ctor_1_fn(HomePage__Template1* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance);
void HomePage__Template1__New1_fn(HomePage__Template1* __this, uObject** __retval);
void HomePage__Template1__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template1** __retval);

struct HomePage__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return HomePage__Template1_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::HomePage*> __parent1;
    uWeak< ::g::HomePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return HomePage__Template1_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance);
    static HomePage__Template1* New2(::g::HomePage* parent, ::g::HomePage* parentInstance);
};
// }

} // ::g
