// This file was generated based on '.uno/ux11/ComplinePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ComplinePage.h>
#include <_root.ComplinePage.Template1.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.Psalm2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{

// public partial sealed class ComplinePage.Template1 :41
// {
// static Template1() :54
static void ComplinePage__Template1__cctor__fn(uType* __type)
{
    ComplinePage__Template1::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    ComplinePage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void ComplinePage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("second");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ComplinePage__Template1, __g_nametable1), 0,
        ::g::ComplinePage_typeof(), offsetof(::g::ComplinePage__Template1, __parent1), uFieldFlagsWeak,
        ::g::ComplinePage_typeof(), offsetof(::g::ComplinePage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ComplinePage__Template1, __self_Value_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ComplinePage__Template1::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ComplinePage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ComplinePage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ComplinePage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ComplinePage.Template1", options);
    type->fp_build_ = ComplinePage__Template1_build;
    type->fp_cctor_ = ComplinePage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ComplinePage__Template1__New1_fn;
    return type;
}

// public Template1(ComplinePage parent, ComplinePage parentInstance) :45
void ComplinePage__Template1__ctor_1_fn(ComplinePage__Template1* __this, ::g::ComplinePage* parent, ::g::ComplinePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :57
void ComplinePage__Template1__New1_fn(ComplinePage__Template1* __this, uObject** __retval)
{
    ::g::Psalm2* __self1 = ::g::Psalm2::New6();
    __this->__self_Value_inst1 = ::g::iphod_FuseControlsTextControl_Value_Property::New1(__self1, ComplinePage__Template1::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"second"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, ComplinePage__Template1::__g_static_nametable1());
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, __this->__g_nametable1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template1 New(ComplinePage parent, ComplinePage parentInstance) :45
void ComplinePage__Template1__New2_fn(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance, ComplinePage__Template1** __retval)
{
    *__retval = ComplinePage__Template1::New2(parent, parentInstance);
}

uSStrong<uArray*> ComplinePage__Template1::__g_static_nametable1_;
::g::Uno::UX::Selector ComplinePage__Template1::__selector0_;

// public Template1(ComplinePage parent, ComplinePage parentInstance) [instance] :45
void ComplinePage__Template1::ctor_1(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(ComplinePage parent, ComplinePage parentInstance) [static] :45
ComplinePage__Template1* ComplinePage__Template1::New2(::g::ComplinePage* parent, ::g::ComplinePage* parentInstance)
{
    ComplinePage__Template1* obj1 = (ComplinePage__Template1*)uNew(ComplinePage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
