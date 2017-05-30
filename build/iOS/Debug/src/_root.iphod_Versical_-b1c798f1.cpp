// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_Versical_-b1c798f1.h>
#include <_root.Versical.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_Versical_Text_Property :127
// {
static void iphod_Versical_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Versical_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Versical*/], offsetof(::g::iphod_Versical_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_Versical_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_Versical_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_Versical_Text_Property", options);
    type->fp_build_ = iphod_Versical_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_Versical_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_Versical_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_Versical_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_Versical_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public iphod_Versical_Text_Property(Versical obj, Uno.UX.Selector name) :130
void iphod_Versical_Text_Property__ctor_3_fn(iphod_Versical_Text_Property* __this, ::g::Versical* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :132
void iphod_Versical_Text_Property__Get1_fn(iphod_Versical_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Versical*>(obj, ::TYPES[0/*Versical*/]))->Text(), void();
}

// public iphod_Versical_Text_Property New(Versical obj, Uno.UX.Selector name) :130
void iphod_Versical_Text_Property__New1_fn(::g::Versical* obj, ::g::Uno::UX::Selector* name, iphod_Versical_Text_Property** __retval)
{
    *__retval = iphod_Versical_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :131
void iphod_Versical_Text_Property__get_Object_fn(iphod_Versical_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :133
void iphod_Versical_Text_Property__Set1_fn(iphod_Versical_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Versical*>(obj, ::TYPES[0/*Versical*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :134
void iphod_Versical_Text_Property__get_SupportsOriginSetter_fn(iphod_Versical_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public iphod_Versical_Text_Property(Versical obj, Uno.UX.Selector name) [instance] :130
void iphod_Versical_Text_Property::ctor_3(::g::Versical* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_Versical_Text_Property New(Versical obj, Uno.UX.Selector name) [static] :130
iphod_Versical_Text_Property* iphod_Versical_Text_Property::New1(::g::Versical* obj, ::g::Uno::UX::Selector name)
{
    iphod_Versical_Text_Property* obj1 = (iphod_Versical_Text_Property*)uNew(iphod_Versical_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
