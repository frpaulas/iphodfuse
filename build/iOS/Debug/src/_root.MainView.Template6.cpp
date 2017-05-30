// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FamilyPrayerPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template6.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template6 :131
// {
// static Template6() :140
static void MainView__Template6__cctor__fn(uType* __type)
{
    MainView__Template6::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"familyPraye...*/]);
}

static void MainView__Template6_build(uType* type)
{
    ::STRINGS[0] = uString::Const("familyPrayerPage");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template6, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template6, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template6::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template6", options);
    type->fp_build_ = MainView__Template6_build;
    type->fp_cctor_ = MainView__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template6__New1_fn;
    return type;
}

// public Template6(MainView parent, MainView parentInstance) :135
void MainView__Template6__ctor_1_fn(MainView__Template6* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :143
void MainView__Template6__New1_fn(MainView__Template6* __this, uObject** __retval)
{
    ::g::FamilyPrayerPage* __self1 = ::g::FamilyPrayerPage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template6::__selector0());
    return *__retval = __self1, void();
}

// public Template6 New(MainView parent, MainView parentInstance) :135
void MainView__Template6__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template6** __retval)
{
    *__retval = MainView__Template6::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template6::__selector0_;

// public Template6(MainView parent, MainView parentInstance) [instance] :135
void MainView__Template6::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"familyPraye...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template6 New(MainView parent, MainView parentInstance) [static] :135
MainView__Template6* MainView__Template6::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template6* obj1 = (MainView__Template6*)uNew(MainView__Template6_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
