// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct iphod_Psalm1_Text_Property;}
namespace g{struct Psalm1;}

namespace g{

// internal sealed class iphod_Psalm1_Text_Property :152
// {
::g::Uno::UX::Property1_type* iphod_Psalm1_Text_Property_typeof();
void iphod_Psalm1_Text_Property__ctor_3_fn(iphod_Psalm1_Text_Property* __this, ::g::Psalm1* obj, ::g::Uno::UX::Selector* name);
void iphod_Psalm1_Text_Property__Get1_fn(iphod_Psalm1_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void iphod_Psalm1_Text_Property__New1_fn(::g::Psalm1* obj, ::g::Uno::UX::Selector* name, iphod_Psalm1_Text_Property** __retval);
void iphod_Psalm1_Text_Property__get_Object_fn(iphod_Psalm1_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void iphod_Psalm1_Text_Property__Set1_fn(iphod_Psalm1_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void iphod_Psalm1_Text_Property__get_SupportsOriginSetter_fn(iphod_Psalm1_Text_Property* __this, bool* __retval);

struct iphod_Psalm1_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Psalm1*> _obj;

    void ctor_3(::g::Psalm1* obj, ::g::Uno::UX::Selector name);
    static iphod_Psalm1_Text_Property* New1(::g::Psalm1* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
