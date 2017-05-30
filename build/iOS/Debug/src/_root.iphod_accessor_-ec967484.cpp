// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_accessor_-ec967484.h>
#include <iphod.Button.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class iphod_accessor_iphod_Button_FontSize :31
// {
// static iphod_accessor_iphod_Button_FontSize() :31
static void iphod_accessor_iphod_Button_FontSize__cctor__fn(uType* __type)
{
    iphod_accessor_iphod_Button_FontSize::Singleton_ = iphod_accessor_iphod_Button_FontSize::New1();
    iphod_accessor_iphod_Button_FontSize::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
}

static void iphod_accessor_iphod_Button_FontSize_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::TYPES[0] = ::g::iphod::Button_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod_accessor_iphod_Button_FontSize::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::iphod_accessor_iphod_Button_FontSize::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* iphod_accessor_iphod_Button_FontSize_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_accessor_iphod_Button_FontSize);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("iphod_accessor_iphod_Button_FontSize", options);
    type->fp_build_ = iphod_accessor_iphod_Button_FontSize_build;
    type->fp_ctor_ = (void*)iphod_accessor_iphod_Button_FontSize__New1_fn;
    type->fp_cctor_ = iphod_accessor_iphod_Button_FontSize__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))iphod_accessor_iphod_Button_FontSize__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))iphod_accessor_iphod_Button_FontSize__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))iphod_accessor_iphod_Button_FontSize__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))iphod_accessor_iphod_Button_FontSize__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_accessor_iphod_Button_FontSize__get_SupportsOriginSetter_fn;
    return type;
}

// public generated iphod_accessor_iphod_Button_FontSize() :31
void iphod_accessor_iphod_Button_FontSize__ctor_1_fn(iphod_accessor_iphod_Button_FontSize* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void iphod_accessor_iphod_Button_FontSize__GetAsObject_fn(iphod_accessor_iphod_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(uCast< ::g::iphod::Button*>(obj, ::TYPES[0/*iphod.Button*/]))->FontSize()), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void iphod_accessor_iphod_Button_FontSize__get_Name_fn(iphod_accessor_iphod_Button_FontSize* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = iphod_accessor_iphod_Button_FontSize::_name(), void();
}

// public generated iphod_accessor_iphod_Button_FontSize New() :31
void iphod_accessor_iphod_Button_FontSize__New1_fn(iphod_accessor_iphod_Button_FontSize** __retval)
{
    *__retval = iphod_accessor_iphod_Button_FontSize::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void iphod_accessor_iphod_Button_FontSize__get_PropertyType_fn(iphod_accessor_iphod_Button_FontSize* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void iphod_accessor_iphod_Button_FontSize__SetAsObject_fn(iphod_accessor_iphod_Button_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::iphod::Button*>(obj, ::TYPES[0/*iphod.Button*/]))->SetFontSize(uUnbox<float>(::g::Uno::Float_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void iphod_accessor_iphod_Button_FontSize__get_SupportsOriginSetter_fn(iphod_accessor_iphod_Button_FontSize* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector iphod_accessor_iphod_Button_FontSize::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> iphod_accessor_iphod_Button_FontSize::Singleton_;

// public generated iphod_accessor_iphod_Button_FontSize() [instance] :31
void iphod_accessor_iphod_Button_FontSize::ctor_1()
{
    ctor_();
}

// public generated iphod_accessor_iphod_Button_FontSize New() [static] :31
iphod_accessor_iphod_Button_FontSize* iphod_accessor_iphod_Button_FontSize::New1()
{
    iphod_accessor_iphod_Button_FontSize* obj1 = (iphod_accessor_iphod_Button_FontSize*)uNew(iphod_accessor_iphod_Button_FontSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
