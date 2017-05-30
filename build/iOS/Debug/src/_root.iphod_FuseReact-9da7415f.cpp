// This file was generated based on '.uno/ux11/iphod.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_FuseReact-9da7415f.h>
#include <Fuse.Reactive.Match.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class iphod_FuseReactiveMatch_Value_Property :171
// {
static void iphod_FuseReactiveMatch_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Match_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Match*/], offsetof(::g::iphod_FuseReactiveMatch_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* iphod_FuseReactiveMatch_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(iphod_FuseReactiveMatch_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("iphod_FuseReactiveMatch_Value_Property", options);
    type->fp_build_ = iphod_FuseReactiveMatch_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))iphod_FuseReactiveMatch_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))iphod_FuseReactiveMatch_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))iphod_FuseReactiveMatch_Value_Property__Set1_fn;
    return type;
}

// public iphod_FuseReactiveMatch_Value_Property(Fuse.Reactive.Match obj, Uno.UX.Selector name) :174
void iphod_FuseReactiveMatch_Value_Property__ctor_3_fn(iphod_FuseReactiveMatch_Value_Property* __this, ::g::Fuse::Reactive::Match* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :176
void iphod_FuseReactiveMatch_Value_Property__Get1_fn(iphod_FuseReactiveMatch_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Match*>(obj, ::TYPES[0/*Fuse.Reactive.Match*/]))->Value(), void();
}

// public iphod_FuseReactiveMatch_Value_Property New(Fuse.Reactive.Match obj, Uno.UX.Selector name) :174
void iphod_FuseReactiveMatch_Value_Property__New1_fn(::g::Fuse::Reactive::Match* obj, ::g::Uno::UX::Selector* name, iphod_FuseReactiveMatch_Value_Property** __retval)
{
    *__retval = iphod_FuseReactiveMatch_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :175
void iphod_FuseReactiveMatch_Value_Property__get_Object_fn(iphod_FuseReactiveMatch_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :177
void iphod_FuseReactiveMatch_Value_Property__Set1_fn(iphod_FuseReactiveMatch_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Reactive::Match*>(obj, ::TYPES[0/*Fuse.Reactive.Match*/]))->Value(v);
}

// public iphod_FuseReactiveMatch_Value_Property(Fuse.Reactive.Match obj, Uno.UX.Selector name) [instance] :174
void iphod_FuseReactiveMatch_Value_Property::ctor_3(::g::Fuse::Reactive::Match* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public iphod_FuseReactiveMatch_Value_Property New(Fuse.Reactive.Match obj, Uno.UX.Selector name) [static] :174
iphod_FuseReactiveMatch_Value_Property* iphod_FuseReactiveMatch_Value_Property::New1(::g::Fuse::Reactive::Match* obj, ::g::Uno::UX::Selector name)
{
    iphod_FuseReactiveMatch_Value_Property* obj1 = (iphod_FuseReactiveMatch_Value_Property*)uNew(iphod_FuseReactiveMatch_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
