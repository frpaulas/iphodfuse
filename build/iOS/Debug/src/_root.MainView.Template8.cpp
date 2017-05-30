// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template8.h>
#include <_root.ToTheSickPage.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template8 :173
// {
// static Template8() :182
static void MainView__Template8__cctor__fn(uType* __type)
{
    MainView__Template8::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"toTheSickPage"*/]);
}

static void MainView__Template8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("toTheSickPage");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template8, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template8, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template8::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template8", options);
    type->fp_build_ = MainView__Template8_build;
    type->fp_cctor_ = MainView__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template8__New1_fn;
    return type;
}

// public Template8(MainView parent, MainView parentInstance) :177
void MainView__Template8__ctor_1_fn(MainView__Template8* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :185
void MainView__Template8__New1_fn(MainView__Template8* __this, uObject** __retval)
{
    ::g::ToTheSickPage* __self1 = ::g::ToTheSickPage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template8::__selector0());
    return *__retval = __self1, void();
}

// public Template8 New(MainView parent, MainView parentInstance) :177
void MainView__Template8__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template8** __retval)
{
    *__retval = MainView__Template8::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template8::__selector0_;

// public Template8(MainView parent, MainView parentInstance) [instance] :177
void MainView__Template8::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"toTheSickPage"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template8 New(MainView parent, MainView parentInstance) [static] :177
MainView__Template8* MainView__Template8::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template8* obj1 = (MainView__Template8*)uNew(MainView__Template8_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
