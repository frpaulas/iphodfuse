// This file was generated based on '.uno/ux11/MiddayPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MiddayPrayerPage;}
namespace g{struct MiddayPrayerPage__Template1;}

namespace g{

// public partial sealed class MiddayPrayerPage.Template1 :41
// {
::g::Uno::UX::Template_type* MiddayPrayerPage__Template1_typeof();
void MiddayPrayerPage__Template1__ctor_1_fn(MiddayPrayerPage__Template1* __this, ::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
void MiddayPrayerPage__Template1__New1_fn(MiddayPrayerPage__Template1* __this, uObject** __retval);
void MiddayPrayerPage__Template1__New2_fn(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance, MiddayPrayerPage__Template1** __retval);

struct MiddayPrayerPage__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MiddayPrayerPage__Template1_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MiddayPrayerPage*> __parent1;
    uWeak< ::g::MiddayPrayerPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MiddayPrayerPage__Template1_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;

    void ctor_1(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
    static MiddayPrayerPage__Template1* New2(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
};
// }

} // ::g
