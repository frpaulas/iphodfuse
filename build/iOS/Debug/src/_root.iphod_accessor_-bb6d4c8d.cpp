// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_accessor_-bb6d4c8d.h>
#include <_root.Psalm.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class iphod_accessor_Psalm_StartVs :41
// {
// static iphod_accessor_Psalm_StartVs() :41
static void iphod_accessor_Psalm_StartVs__cctor__fn(uType* __type)
{
    iphod_accessor_Psalm_StartVs::Singleton_ = iphod_accessor_Psalm_StartVs::New1();
    iphod_accessor_Psalm_StartVs::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"StartVs"*/]);
}

static void iphod_accessor_Psalm_StartVs_build(uType* type)
{
    ::STRINGS[0] = uString::Const("StartVs");
    ::TYPES[0] = ::g::Psalm_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod_accessor_Psalm_StartVs::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::iphod_accessor_Psalm_StartVs::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* iphod_accessor_Psalm_StartVs_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_accessor_Psalm_StartVs);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("iphod_accessor_Psalm_StartVs", options);
    type->fp_build_ = iphod_accessor_Psalm_StartVs_build;
    type->fp_ctor_ = (void*)iphod_accessor_Psalm_StartVs__New1_fn;
    type->fp_cctor_ = iphod_accessor_Psalm_StartVs__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))iphod_accessor_Psalm_StartVs__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))iphod_accessor_Psalm_StartVs__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))iphod_accessor_Psalm_StartVs__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))iphod_accessor_Psalm_StartVs__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_accessor_Psalm_StartVs__get_SupportsOriginSetter_fn;
    return type;
}

// public generated iphod_accessor_Psalm_StartVs() :41
void iphod_accessor_Psalm_StartVs__ctor_1_fn(iphod_accessor_Psalm_StartVs* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void iphod_accessor_Psalm_StartVs__GetAsObject_fn(iphod_accessor_Psalm_StartVs* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Psalm*>(obj, ::TYPES[0/*Psalm*/]))->StartVs(), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void iphod_accessor_Psalm_StartVs__get_Name_fn(iphod_accessor_Psalm_StartVs* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = iphod_accessor_Psalm_StartVs::_name(), void();
}

// public generated iphod_accessor_Psalm_StartVs New() :41
void iphod_accessor_Psalm_StartVs__New1_fn(iphod_accessor_Psalm_StartVs** __retval)
{
    *__retval = iphod_accessor_Psalm_StartVs::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void iphod_accessor_Psalm_StartVs__get_PropertyType_fn(iphod_accessor_Psalm_StartVs* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void iphod_accessor_Psalm_StartVs__SetAsObject_fn(iphod_accessor_Psalm_StartVs* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Psalm*>(obj, ::TYPES[0/*Psalm*/]))->SetStartVs(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void iphod_accessor_Psalm_StartVs__get_SupportsOriginSetter_fn(iphod_accessor_Psalm_StartVs* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector iphod_accessor_Psalm_StartVs::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> iphod_accessor_Psalm_StartVs::Singleton_;

// public generated iphod_accessor_Psalm_StartVs() [instance] :41
void iphod_accessor_Psalm_StartVs::ctor_1()
{
    ctor_();
}

// public generated iphod_accessor_Psalm_StartVs New() [static] :41
iphod_accessor_Psalm_StartVs* iphod_accessor_Psalm_StartVs::New1()
{
    iphod_accessor_Psalm_StartVs* obj1 = (iphod_accessor_Psalm_StartVs*)uNew(iphod_accessor_Psalm_StartVs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
