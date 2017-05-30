// This file was generated based on '.uno/ux11/MiddayPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MiddayPrayerPage;}
namespace g{struct MiddayPrayerPage__Template;}

namespace g{

// public partial sealed class MiddayPrayerPage.Template :6
// {
::g::Uno::UX::Template_type* MiddayPrayerPage__Template_typeof();
void MiddayPrayerPage__Template__ctor_1_fn(MiddayPrayerPage__Template* __this, ::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
void MiddayPrayerPage__Template__New1_fn(MiddayPrayerPage__Template* __this, uObject** __retval);
void MiddayPrayerPage__Template__New2_fn(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance, MiddayPrayerPage__Template** __retval);

struct MiddayPrayerPage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MiddayPrayerPage__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MiddayPrayerPage*> __parent1;
    uWeak< ::g::MiddayPrayerPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MiddayPrayerPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MiddayPrayerPage__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;

    void ctor_1(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
    static MiddayPrayerPage__Template* New2(::g::MiddayPrayerPage* parent, ::g::MiddayPrayerPage* parentInstance);
};
// }

} // ::g
