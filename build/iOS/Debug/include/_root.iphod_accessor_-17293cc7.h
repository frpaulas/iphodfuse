// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct iphod_accessor_altReading_Button_FontSize;}

namespace g{

// internal sealed class iphod_accessor_altReading_Button_FontSize :11
// {
::g::Uno::UX::PropertyAccessor_type* iphod_accessor_altReading_Button_FontSize_typeof();
void iphod_accessor_altReading_Button_FontSize__ctor_1_fn(iphod_accessor_altReading_Button_FontSize* __this);
void iphod_accessor_altReading_Button_FontSize__GetAsObject_fn(iphod_accessor_altReading_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void iphod_accessor_altReading_Button_FontSize__get_Name_fn(iphod_accessor_altReading_Button_FontSize* __this, ::g::Uno::UX::Selector* __retval);
void iphod_accessor_altReading_Button_FontSize__New1_fn(iphod_accessor_altReading_Button_FontSize** __retval);
void iphod_accessor_altReading_Button_FontSize__get_PropertyType_fn(iphod_accessor_altReading_Button_FontSize* __this, uType** __retval);
void iphod_accessor_altReading_Button_FontSize__SetAsObject_fn(iphod_accessor_altReading_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void iphod_accessor_altReading_Button_FontSize__get_SupportsOriginSetter_fn(iphod_accessor_altReading_Button_FontSize* __this, bool* __retval);

struct iphod_accessor_altReading_Button_FontSize : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return iphod_accessor_altReading_Button_FontSize_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return iphod_accessor_altReading_Button_FontSize_typeof()->Init(), Singleton_; }

    void ctor_1();
    static iphod_accessor_altReading_Button_FontSize* New1();
};
// }

} // ::g
