// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_iphodVers-3b51c231.h>
#include <iphod.Versical.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_iphodVersical_Speaker_Property :179
// {
static void iphod_iphodVersical_Speaker_Property_build(uType* type)
{
    ::TYPES[0] = ::g::iphod::Versical_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*iphod.Versical*/], offsetof(::g::iphod_iphodVersical_Speaker_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_iphodVersical_Speaker_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_iphodVersical_Speaker_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_iphodVersical_Speaker_Property", options);
    type->fp_build_ = iphod_iphodVersical_Speaker_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_iphodVersical_Speaker_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_iphodVersical_Speaker_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_iphodVersical_Speaker_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))iphod_iphodVersical_Speaker_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public iphod_iphodVersical_Speaker_Property(iphod.Versical obj, Uno.UX.Selector name) :182
void iphod_iphodVersical_Speaker_Property__ctor_3_fn(iphod_iphodVersical_Speaker_Property* __this, ::g::iphod::Versical* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :184
void iphod_iphodVersical_Speaker_Property__Get1_fn(iphod_iphodVersical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::iphod::Versical*>(obj, ::TYPES[0/*iphod.Versical*/]))->Speaker(), void();
}

// public iphod_iphodVersical_Speaker_Property New(iphod.Versical obj, Uno.UX.Selector name) :182
void iphod_iphodVersical_Speaker_Property__New1_fn(::g::iphod::Versical* obj, ::g::Uno::UX::Selector* name, iphod_iphodVersical_Speaker_Property** __retval)
{
    *__retval = iphod_iphodVersical_Speaker_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :183
void iphod_iphodVersical_Speaker_Property__get_Object_fn(iphod_iphodVersical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :185
void iphod_iphodVersical_Speaker_Property__Set1_fn(iphod_iphodVersical_Speaker_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::iphod::Versical*>(obj, ::TYPES[0/*iphod.Versical*/]))->SetSpeaker(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :186
void iphod_iphodVersical_Speaker_Property__get_SupportsOriginSetter_fn(iphod_iphodVersical_Speaker_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public iphod_iphodVersical_Speaker_Property(iphod.Versical obj, Uno.UX.Selector name) [instance] :182
void iphod_iphodVersical_Speaker_Property::ctor_3(::g::iphod::Versical* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_iphodVersical_Speaker_Property New(iphod.Versical obj, Uno.UX.Selector name) [static] :182
iphod_iphodVersical_Speaker_Property* iphod_iphodVersical_Speaker_Property::New1(::g::iphod::Versical* obj, ::g::Uno::UX::Selector name)
{
    iphod_iphodVersical_Speaker_Property* obj1 = (iphod_iphodVersical_Speaker_Property*)uNew(iphod_iphodVersical_Speaker_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
