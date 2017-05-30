// This file was generated based on '.uno/ux11/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{struct HomePage;}
namespace g{struct HomePage__Template;}

namespace g{

// public partial sealed class HomePage.Template :6
// {
::g::Uno::UX::Template_type* HomePage__Template_typeof();
void HomePage__Template__ctor_1_fn(HomePage__Template* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance);
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval);
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval);

struct HomePage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::HomePage*> __parent1;
    uWeak< ::g::HomePage*> __parentInstance1;

    void ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance);
    static HomePage__Template* New2(::g::HomePage* parent, ::g::HomePage* parentInstance);
};
// }

} // ::g
