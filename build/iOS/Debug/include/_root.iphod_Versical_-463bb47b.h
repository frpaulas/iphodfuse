// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct iphod_Versical_Speaker_Property;}
namespace g{struct Versical;}

namespace g{

// internal sealed class iphod_Versical_Speaker_Property :118
// {
::g::Uno::UX::Property1_type* iphod_Versical_Speaker_Property_typeof();
void iphod_Versical_Speaker_Property__ctor_3_fn(iphod_Versical_Speaker_Property* __this, ::g::Versical* obj, ::g::Uno::UX::Selector* name);
void iphod_Versical_Speaker_Property__Get1_fn(iphod_Versical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void iphod_Versical_Speaker_Property__New1_fn(::g::Versical* obj, ::g::Uno::UX::Selector* name, iphod_Versical_Speaker_Property** __retval);
void iphod_Versical_Speaker_Property__get_Object_fn(iphod_Versical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void iphod_Versical_Speaker_Property__Set1_fn(iphod_Versical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void iphod_Versical_Speaker_Property__get_SupportsOriginSetter_fn(iphod_Versical_Speaker_Property* __this, bool* __retval);

struct iphod_Versical_Speaker_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Versical*> _obj;

    void ctor_3(::g::Versical* obj, ::g::Uno::UX::Selector name);
    static iphod_Versical_Speaker_Property* New1(::g::Versical* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
