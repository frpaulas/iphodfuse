// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template11;}

namespace g{

// public partial sealed class MainView.Template11 :236
// {
::g::Uno::UX::Template_type* MainView__Template11_typeof();
void MainView__Template11__ctor_1_fn(MainView__Template11* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template11__New1_fn(MainView__Template11* __this, uObject** __retval);
void MainView__Template11__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template11** __retval);

struct MainView__Template11 : ::g::Uno::UX::Template
{
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template11_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template11* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
