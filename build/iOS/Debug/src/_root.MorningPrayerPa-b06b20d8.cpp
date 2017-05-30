// This file was generated based on '.uno/ux11/MorningPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MorningPrayerPa-b06b20d8.h>
#include <_root.MorningPrayerPage.h>
#include <_root.PaschaNostrum.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class MorningPrayerPage.Template3 :63
// {
// static Template3() :72
static void MorningPrayerPage__Template3__cctor__fn(uType* __type)
{
}

static void MorningPrayerPage__Template3_build(uType* type)
{
    type->SetFields(2,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template3, __parent1), uFieldFlagsWeak,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template3, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MorningPrayerPage__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MorningPrayerPage__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MorningPrayerPage.Template3", options);
    type->fp_build_ = MorningPrayerPage__Template3_build;
    type->fp_cctor_ = MorningPrayerPage__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MorningPrayerPage__Template3__New1_fn;
    return type;
}

// public Template3(MorningPrayerPage parent, MorningPrayerPage parentInstance) :67
void MorningPrayerPage__Template3__ctor_1_fn(MorningPrayerPage__Template3* __this, ::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :75
void MorningPrayerPage__Template3__New1_fn(MorningPrayerPage__Template3* __this, uObject** __retval)
{
    ::g::PaschaNostrum* __self1 = ::g::PaschaNostrum::New5();
    return *__retval = __self1, void();
}

// public Template3 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) :67
void MorningPrayerPage__Template3__New2_fn(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance, MorningPrayerPage__Template3** __retval)
{
    *__retval = MorningPrayerPage__Template3::New2(parent, parentInstance);
}

// public Template3(MorningPrayerPage parent, MorningPrayerPage parentInstance) [instance] :67
void MorningPrayerPage__Template3::ctor_1(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(MorningPrayerPage parent, MorningPrayerPage parentInstance) [static] :67
MorningPrayerPage__Template3* MorningPrayerPage__Template3::New2(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    MorningPrayerPage__Template3* obj1 = (MorningPrayerPage__Template3*)uNew(MorningPrayerPage__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
