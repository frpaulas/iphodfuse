// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template10.h>
#include <_root.TimeOfDeathPage.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template10 :215
// {
// static Template10() :224
static void MainView__Template10__cctor__fn(uType* __type)
{
    MainView__Template10::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"timeOfDeath...*/]);
}

static void MainView__Template10_build(uType* type)
{
    ::STRINGS[0] = uString::Const("timeOfDeathPage");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template10, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template10, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template10::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template10_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template10);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template10", options);
    type->fp_build_ = MainView__Template10_build;
    type->fp_cctor_ = MainView__Template10__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template10__New1_fn;
    return type;
}

// public Template10(MainView parent, MainView parentInstance) :219
void MainView__Template10__ctor_1_fn(MainView__Template10* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :227
void MainView__Template10__New1_fn(MainView__Template10* __this, uObject** __retval)
{
    ::g::TimeOfDeathPage* __self1 = ::g::TimeOfDeathPage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template10::__selector0());
    return *__retval = __self1, void();
}

// public Template10 New(MainView parent, MainView parentInstance) :219
void MainView__Template10__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template10** __retval)
{
    *__retval = MainView__Template10::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template10::__selector0_;

// public Template10(MainView parent, MainView parentInstance) [instance] :219
void MainView__Template10::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"timeOfDeath...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template10 New(MainView parent, MainView parentInstance) [static] :219
MainView__Template10* MainView__Template10::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template10* obj1 = (MainView__Template10*)uNew(MainView__Template10_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
