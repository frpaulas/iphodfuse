// This file was generated based on '.uno/ux11/MorningPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MorningPrayerPa-b06b20d6.h>
#include <_root.MorningPrayerPage.h>
#include <_root.Venite.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class MorningPrayerPage.Template1 :25
// {
// static Template1() :34
static void MorningPrayerPage__Template1__cctor__fn(uType* __type)
{
}

static void MorningPrayerPage__Template1_build(uType* type)
{
    type->SetFields(2,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template1, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MorningPrayerPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MorningPrayerPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MorningPrayerPage.Template1", options);
    type->fp_build_ = MorningPrayerPage__Template1_build;
    type->fp_cctor_ = MorningPrayerPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MorningPrayerPage__Template1__New1_fn;
    return type;
}

// public Template1(MorningPrayerPage parent, MorningPrayerPage parentInstance) :29
void MorningPrayerPage__Template1__ctor_1_fn(MorningPrayerPage__Template1* __this, ::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :37
void MorningPrayerPage__Template1__New1_fn(MorningPrayerPage__Template1* __this, uObject** __retval)
{
    ::g::Venite* __self1 = ::g::Venite::New5();
    return *__retval = __self1, void();
}

// public Template1 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) :29
void MorningPrayerPage__Template1__New2_fn(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance, MorningPrayerPage__Template1** __retval)
{
    *__retval = MorningPrayerPage__Template1::New2(parent, parentInstance);
}

// public Template1(MorningPrayerPage parent, MorningPrayerPage parentInstance) [instance] :29
void MorningPrayerPage__Template1::ctor_1(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) [static] :29
MorningPrayerPage__Template1* MorningPrayerPage__Template1::New2(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    MorningPrayerPage__Template1* obj1 = (MorningPrayerPage__Template1*)uNew(MorningPrayerPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
