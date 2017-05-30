// This file was generated based on '.uno/ux11/MorningPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Jubilate.h>
#include <_root.MorningPrayerPa-a2bfd365.h>
#include <_root.MorningPrayerPage.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class MorningPrayerPage.Template :6
// {
// static Template() :15
static void MorningPrayerPage__Template__cctor__fn(uType* __type)
{
}

static void MorningPrayerPage__Template_build(uType* type)
{
    type->SetFields(2,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template, __parent1), uFieldFlagsWeak,
        ::g::MorningPrayerPage_typeof(), offsetof(::g::MorningPrayerPage__Template, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* MorningPrayerPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MorningPrayerPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MorningPrayerPage.Template", options);
    type->fp_build_ = MorningPrayerPage__Template_build;
    type->fp_cctor_ = MorningPrayerPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MorningPrayerPage__Template__New1_fn;
    return type;
}

// public Template(MorningPrayerPage parent, MorningPrayerPage parentInstance) :10
void MorningPrayerPage__Template__ctor_1_fn(MorningPrayerPage__Template* __this, ::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void MorningPrayerPage__Template__New1_fn(MorningPrayerPage__Template* __this, uObject** __retval)
{
    ::g::Jubilate* __self1 = ::g::Jubilate::New5();
    return *__retval = __self1, void();
}

// public Template New(MorningPrayerPage parent, MorningPrayerPage parentInstance) :10
void MorningPrayerPage__Template__New2_fn(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance, MorningPrayerPage__Template** __retval)
{
    *__retval = MorningPrayerPage__Template::New2(parent, parentInstance);
}

// public Template(MorningPrayerPage parent, MorningPrayerPage parentInstance) [instance] :10
void MorningPrayerPage__Template::ctor_1(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MorningPrayerPage parent, MorningPrayerPage parentInstance) [static] :10
MorningPrayerPage__Template* MorningPrayerPage__Template::New2(::g::MorningPrayerPage* parent, ::g::MorningPrayerPage* parentInstance)
{
    MorningPrayerPage__Template* obj1 = (MorningPrayerPage__Template*)uNew(MorningPrayerPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
