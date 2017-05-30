// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Visibility.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct iphod_FuseElementsElement_Visibility_Property;}

namespace g{

// internal sealed class iphod_FuseElementsElement_Visibility_Property :162
// {
::g::Uno::UX::Property1_type* iphod_FuseElementsElement_Visibility_Property_typeof();
void iphod_FuseElementsElement_Visibility_Property__ctor_3_fn(iphod_FuseElementsElement_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void iphod_FuseElementsElement_Visibility_Property__Get1_fn(iphod_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void iphod_FuseElementsElement_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, iphod_FuseElementsElement_Visibility_Property** __retval);
void iphod_FuseElementsElement_Visibility_Property__get_Object_fn(iphod_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void iphod_FuseElementsElement_Visibility_Property__Set1_fn(iphod_FuseElementsElement_Visibility_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);
void iphod_FuseElementsElement_Visibility_Property__get_SupportsOriginSetter_fn(iphod_FuseElementsElement_Visibility_Property* __this, bool* __retval);

struct iphod_FuseElementsElement_Visibility_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static iphod_FuseElementsElement_Visibility_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
