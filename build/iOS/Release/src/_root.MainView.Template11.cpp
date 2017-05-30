// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template11.h>
#include <_root.StationsOfTheCrossPage.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template11 :236
// {
// static Template11() :245
static void MainView__Template11__cctor__fn(uType* __type)
{
    MainView__Template11::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"stationsOfT...*/]);
}

static void MainView__Template11_build(uType* type)
{
    ::STRINGS[0] = uString::Const("stationsOfTheCrossPage");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template11, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template11, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template11::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template11_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template11);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template11", options);
    type->fp_build_ = MainView__Template11_build;
    type->fp_cctor_ = MainView__Template11__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template11__New1_fn;
    return type;
}

// public Template11(MainView parent, MainView parentInstance) :240
void MainView__Template11__ctor_1_fn(MainView__Template11* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :248
void MainView__Template11__New1_fn(MainView__Template11* __this, uObject** __retval)
{
    ::g::StationsOfTheCrossPage* __self1 = ::g::StationsOfTheCrossPage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template11::__selector0());
    return *__retval = __self1, void();
}

// public Template11 New(MainView parent, MainView parentInstance) :240
void MainView__Template11__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template11** __retval)
{
    *__retval = MainView__Template11::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template11::__selector0_;

// public Template11(MainView parent, MainView parentInstance) [instance] :240
void MainView__Template11::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"stationsOfT...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template11 New(MainView parent, MainView parentInstance) [static] :240
MainView__Template11* MainView__Template11::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template11* obj1 = (MainView__Template11*)uNew(MainView__Template11_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
