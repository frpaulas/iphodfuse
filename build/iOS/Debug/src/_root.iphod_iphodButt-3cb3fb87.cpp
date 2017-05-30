// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_iphodButt-3cb3fb87.h>
#include <iphod.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_iphodButton_FontSize_Property :233
// {
static void iphod_iphodButton_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::iphod::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*iphod.Button*/], offsetof(::g::iphod_iphodButton_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_iphodButton_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_iphodButton_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_iphodButton_FontSize_Property", options);
    type->fp_build_ = iphod_iphodButton_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_iphodButton_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_iphodButton_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_iphodButton_FontSize_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_iphodButton_FontSize_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public iphod_iphodButton_FontSize_Property(iphod.Button obj, Uno.UX.Selector name) :236
void iphod_iphodButton_FontSize_Property__ctor_3_fn(iphod_iphodButton_FontSize_Property* __this, ::g::iphod::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :238
void iphod_iphodButton_FontSize_Property__Get1_fn(iphod_iphodButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::iphod::Button*>(obj, ::TYPES[0/*iphod.Button*/]))->FontSize(), void();
}

// public iphod_iphodButton_FontSize_Property New(iphod.Button obj, Uno.UX.Selector name) :236
void iphod_iphodButton_FontSize_Property__New1_fn(::g::iphod::Button* obj, ::g::Uno::UX::Selector* name, iphod_iphodButton_FontSize_Property** __retval)
{
    *__retval = iphod_iphodButton_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :237
void iphod_iphodButton_FontSize_Property__get_Object_fn(iphod_iphodButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :239
void iphod_iphodButton_FontSize_Property__Set1_fn(iphod_iphodButton_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::iphod::Button*>(obj, ::TYPES[0/*iphod.Button*/]))->SetFontSize(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :240
void iphod_iphodButton_FontSize_Property__get_SupportsOriginSetter_fn(iphod_iphodButton_FontSize_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public iphod_iphodButton_FontSize_Property(iphod.Button obj, Uno.UX.Selector name) [instance] :236
void iphod_iphodButton_FontSize_Property::ctor_3(::g::iphod::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_iphodButton_FontSize_Property New(iphod.Button obj, Uno.UX.Selector name) [static] :236
iphod_iphodButton_FontSize_Property* iphod_iphodButton_FontSize_Property::New1(::g::iphod::Button* obj, ::g::Uno::UX::Selector name)
{
    iphod_iphodButton_FontSize_Property* obj1 = (iphod_iphodButton_FontSize_Property*)uNew(iphod_iphodButton_FontSize_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
