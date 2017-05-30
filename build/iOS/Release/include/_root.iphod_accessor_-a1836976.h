// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct iphod_accessor_altReading_Button_Text;}

namespace g{

// internal sealed class iphod_accessor_altReading_Button_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* iphod_accessor_altReading_Button_Text_typeof();
void iphod_accessor_altReading_Button_Text__ctor_1_fn(iphod_accessor_altReading_Button_Text* __this);
void iphod_accessor_altReading_Button_Text__GetAsObject_fn(iphod_accessor_altReading_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void iphod_accessor_altReading_Button_Text__get_Name_fn(iphod_accessor_altReading_Button_Text* __this, ::g::Uno::UX::Selector* __retval);
void iphod_accessor_altReading_Button_Text__New1_fn(iphod_accessor_altReading_Button_Text** __retval);
void iphod_accessor_altReading_Button_Text__get_PropertyType_fn(iphod_accessor_altReading_Button_Text* __this, uType** __retval);
void iphod_accessor_altReading_Button_Text__SetAsObject_fn(iphod_accessor_altReading_Button_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void iphod_accessor_altReading_Button_Text__get_SupportsOriginSetter_fn(iphod_accessor_altReading_Button_Text* __this, bool* __retval);

struct iphod_accessor_altReading_Button_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return iphod_accessor_altReading_Button_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return iphod_accessor_altReading_Button_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static iphod_accessor_altReading_Button_Text* New1();
};
// }

} // ::g
