// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template7.h>
#include <_root.ReconciliationPage.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template7 :152
// {
// static Template7() :161
static void MainView__Template7__cctor__fn(uType* __type)
{
    MainView__Template7::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"reconciliat...*/]);
}

static void MainView__Template7_build(uType* type)
{
    ::STRINGS[0] = uString::Const("reconciliationPage");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template7, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template7, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template7::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template7", options);
    type->fp_build_ = MainView__Template7_build;
    type->fp_cctor_ = MainView__Template7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template7__New1_fn;
    return type;
}

// public Template7(MainView parent, MainView parentInstance) :156
void MainView__Template7__ctor_1_fn(MainView__Template7* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :164
void MainView__Template7__New1_fn(MainView__Template7* __this, uObject** __retval)
{
    ::g::ReconciliationPage* __self1 = ::g::ReconciliationPage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template7::__selector0());
    return *__retval = __self1, void();
}

// public Template7 New(MainView parent, MainView parentInstance) :156
void MainView__Template7__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template7** __retval)
{
    *__retval = MainView__Template7::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template7::__selector0_;

// public Template7(MainView parent, MainView parentInstance) [instance] :156
void MainView__Template7::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"reconciliat...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template7 New(MainView parent, MainView parentInstance) [static] :156
MainView__Template7* MainView__Template7::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template7* obj1 = (MainView__Template7*)uNew(MainView__Template7_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
