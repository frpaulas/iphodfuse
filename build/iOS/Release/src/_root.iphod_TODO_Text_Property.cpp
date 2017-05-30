// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_TODO_Text_Property.h>
#include <_root.TODO.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_TODO_Text_Property :170
// {
static void iphod_TODO_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::TODO_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*TODO*/], offsetof(::g::iphod_TODO_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_TODO_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_TODO_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_TODO_Text_Property", options);
    type->fp_build_ = iphod_TODO_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_TODO_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_TODO_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_TODO_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_TODO_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public iphod_TODO_Text_Property(TODO obj, Uno.UX.Selector name) :173
void iphod_TODO_Text_Property__ctor_3_fn(iphod_TODO_Text_Property* __this, ::g::TODO* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :175
void iphod_TODO_Text_Property__Get1_fn(iphod_TODO_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::TODO*>(obj, ::TYPES[0/*TODO*/]))->Text(), void();
}

// public iphod_TODO_Text_Property New(TODO obj, Uno.UX.Selector name) :173
void iphod_TODO_Text_Property__New1_fn(::g::TODO* obj, ::g::Uno::UX::Selector* name, iphod_TODO_Text_Property** __retval)
{
    *__retval = iphod_TODO_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :174
void iphod_TODO_Text_Property__get_Object_fn(iphod_TODO_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :176
void iphod_TODO_Text_Property__Set1_fn(iphod_TODO_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::TODO*>(obj, ::TYPES[0/*TODO*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :177
void iphod_TODO_Text_Property__get_SupportsOriginSetter_fn(iphod_TODO_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public iphod_TODO_Text_Property(TODO obj, Uno.UX.Selector name) [instance] :173
void iphod_TODO_Text_Property::ctor_3(::g::TODO* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_TODO_Text_Property New(TODO obj, Uno.UX.Selector name) [static] :173
iphod_TODO_Text_Property* iphod_TODO_Text_Property::New1(::g::TODO* obj, ::g::Uno::UX::Selector name)
{
    iphod_TODO_Text_Property* obj1 = (iphod_TODO_Text_Property*)uNew(iphod_TODO_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
