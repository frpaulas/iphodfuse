// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_PsalmTitl-e4a1d1ab.h>
#include <_root.PsalmTitle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_PsalmTitle_Text_Property :136
// {
static void iphod_PsalmTitle_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::PsalmTitle_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*PsalmTitle*/], offsetof(::g::iphod_PsalmTitle_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_PsalmTitle_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_PsalmTitle_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_PsalmTitle_Text_Property", options);
    type->fp_build_ = iphod_PsalmTitle_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_PsalmTitle_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_PsalmTitle_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_PsalmTitle_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_PsalmTitle_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public iphod_PsalmTitle_Text_Property(PsalmTitle obj, Uno.UX.Selector name) :139
void iphod_PsalmTitle_Text_Property__ctor_3_fn(iphod_PsalmTitle_Text_Property* __this, ::g::PsalmTitle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :141
void iphod_PsalmTitle_Text_Property__Get1_fn(iphod_PsalmTitle_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::PsalmTitle*>(obj, ::TYPES[0/*PsalmTitle*/]))->Text(), void();
}

// public iphod_PsalmTitle_Text_Property New(PsalmTitle obj, Uno.UX.Selector name) :139
void iphod_PsalmTitle_Text_Property__New1_fn(::g::PsalmTitle* obj, ::g::Uno::UX::Selector* name, iphod_PsalmTitle_Text_Property** __retval)
{
    *__retval = iphod_PsalmTitle_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :140
void iphod_PsalmTitle_Text_Property__get_Object_fn(iphod_PsalmTitle_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :142
void iphod_PsalmTitle_Text_Property__Set1_fn(iphod_PsalmTitle_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::PsalmTitle*>(obj, ::TYPES[0/*PsalmTitle*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :143
void iphod_PsalmTitle_Text_Property__get_SupportsOriginSetter_fn(iphod_PsalmTitle_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public iphod_PsalmTitle_Text_Property(PsalmTitle obj, Uno.UX.Selector name) [instance] :139
void iphod_PsalmTitle_Text_Property::ctor_3(::g::PsalmTitle* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_PsalmTitle_Text_Property New(PsalmTitle obj, Uno.UX.Selector name) [static] :139
iphod_PsalmTitle_Text_Property* iphod_PsalmTitle_Text_Property::New1(::g::PsalmTitle* obj, ::g::Uno::UX::Selector name)
{
    iphod_PsalmTitle_Text_Property* obj1 = (iphod_PsalmTitle_Text_Property*)uNew(iphod_PsalmTitle_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
