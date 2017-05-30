// This file was generated based on iphod.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class iphod_bundle :0
// {
// static iphod_bundle() :0
static void iphod_bundle__cctor__fn(uType* __type)
{
    iphod_bundle::background2076335_960_7204c13da1d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[1/*"background-...*/]);
    iphod_bundle::Georgia20e42805_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[2/*"georgia-7fd...*/]);
    iphod_bundle::GeorgiaBold44cdd186_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[3/*"georgia_bol...*/]);
    iphod_bundle::GeorgiaBoldItalic0ff8881e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[4/*"georgia_bol...*/]);
    iphod_bundle::GeorgiaItalicfb8c494b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[5/*"georgia_ita...*/]);
    iphod_bundle::Helpers07079b1d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[6/*"helpers-791...*/]);
    iphod_bundle::HomePage16caee31_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"iphod"*/]))->GetFile(::STRINGS[7/*"homepage-a6...*/]);
}

static void iphod_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("iphod");
    ::STRINGS[1] = uString::Const("background-2076335_-4ef7681e.jpg");
    ::STRINGS[2] = uString::Const("georgia-7fdc9fb4.ttf");
    ::STRINGS[3] = uString::Const("georgia_bold-5c58fc0d.ttf");
    ::STRINGS[4] = uString::Const("georgia_bold_italic-90e8b44f.ttf");
    ::STRINGS[5] = uString::Const("georgia_italic-8f6e8de4.ttf");
    ::STRINGS[6] = uString::Const("helpers-791919b6.js");
    ::STRINGS[7] = uString::Const("homepage-a66ffa00.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::background2076335_960_7204c13da1d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::Georgia20e42805_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::GeorgiaBold44cdd186_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::GeorgiaBoldItalic0ff8881e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::GeorgiaItalicfb8c494b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::Helpers07079b1d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::iphod_bundle::HomePage16caee31_, uFieldFlagsStatic);
}

uClassType* iphod_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iphod_bundle", options);
    type->fp_build_ = iphod_bundle_build;
    type->fp_cctor_ = iphod_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::background2076335_960_7204c13da1d_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::Georgia20e42805_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::GeorgiaBold44cdd186_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::GeorgiaBoldItalic0ff8881e_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::GeorgiaItalicfb8c494b_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::Helpers07079b1d_;
uSStrong< ::g::Uno::IO::BundleFile*> iphod_bundle::HomePage16caee31_;
// }

} // ::g
