// This file was generated based on '.uno/ux11/MorningPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MorningPrayerPa-b06b20d7.h>
#include <_root.MorningPrayerPage.h>
#include <_root.VeniteLent.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class MorningPrayerPage.Template2 :44
// {
// static Template2() :53
static void MorningPrayerPage__Template2__cctor__fn(uType* __type)
{
}

static void MorningPrayerPage__Template2_build(uType* type)
{
    type->SetFields(2,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template2, __parent1), uFieldFlagsWeak,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template2, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MorningPrayerPage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MorningPrayerPage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MorningPrayerPage.Template2", options);
    type->fp_build_ = MorningPrayerPage__Template2_build;
    type->fp_cctor_ = MorningPrayerPage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MorningPrayerPage__Template2__New1_fn;
    return type;
}

// public Template2(MorningPrayerPage parent, MorningPrayerPage parentInstance) :48
void MorningPrayerPage__Template2__ctor_1_fn(MorningPrayerPage__Template2* __this, ::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :56
void MorningPrayerPage__Template2__New1_fn(MorningPrayerPage__Template2* __this, uObject** __retval)
{
    ::g::VeniteLent* __self1 = ::g::VeniteLent::New5();
    return *__retval = __self1, void();
}

// public Template2 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) :48
void MorningPrayerPage__Template2__New2_fn(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance, MorningPrayerPage__Template2** __retval)
{
    *__retval = MorningPrayerPage__Template2::New2(parent, parentInstance);
}

// public Template2(MorningPrayerPage parent, MorningPrayerPage parentInstance) [instance] :48
void MorningPrayerPage__Template2::ctor_1(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) [static] :48
MorningPrayerPage__Template2* MorningPrayerPage__Template2::New2(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    MorningPrayerPage__Template2* obj1 = (MorningPrayerPage__Template2*)uNew(MorningPrayerPage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
