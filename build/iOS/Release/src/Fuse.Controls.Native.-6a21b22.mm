// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreFoundation/CoreFoundation.h>
#include <CoreText/CoreText.h>
#include <Fuse.Controls.Native.-6a21b22.h>
#include <Fuse.Internal.FontFac-589fc2ef.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FontCache :296
// {
// static FontCache() :296
static void FontCache__cctor__fn(uType* __type)
{
    FontCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/]));
}

static void FontCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempFont");
    ::STRINGS[1] = uString::Const("data/");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Resources::SystemFileSource_typeof();
    ::TYPES[4] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::FontCache::_cache_, uFieldFlagsStatic);
}

uClassType* FontCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_cctor_ = FontCache__cctor__fn;
    return type;
}

// private static string BundleFilePath(string resource) :362
void FontCache__BundleFilePath_fn(uString* resource, uString** __retval)
{
    *__retval = FontCache::BundleFilePath(resource);
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size) :301
void FontCache__Get_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::Get(descriptor, *size);
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource) :347
void FontCache__GetOptionalPath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = FontCache::GetOptionalPath(fileSource);
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size) :368
void FontCache__UIFontWithDescriptorAndSize_fn(::g::ObjC::Object* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::UIFontWithDescriptorAndSize(descriptor, *size);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FontCache::_cache_;

// private static string BundleFilePath(string resource) [static] :362
uString* FontCache::BundleFilePath(uString* resource)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* resource) -> ::NSString*
        {
            return [[NSBundle bundleForClass:[StrongUnoObject class]] pathForResource:resource ofType:nil];
        } (::uObjC::NativeString(resource)));
        
    }
    
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size) [static] :301
::g::ObjC::Object* FontCache::Get(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float size)
{
    FontCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::Collections::Dictionary* sizeDict;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FontCache::_cache()), descriptor, (void**)(&sizeDict), &ret1), ret1))
    {
        ::g::ObjC::Object* result;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(sizeDict), uCRef(size), (void**)(&result), &ret2), ret2))
            return result;
    }
    else
    {
        sizeDict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<float, ObjC.Object>*/]);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FontCache::_cache()), descriptor, sizeDict);
    }

    ::g::ObjC::Object* uifont;
    uString* path = FontCache::GetOptionalPath(uPtr(descriptor)->FileSource);

    if (::g::Uno::String::op_Inequality(path, NULL))
    {
        ::g::ObjC::Object* uifontdescriptor = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, uPtr(descriptor)->Index, uDelegate::New(::TYPES[2/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, uPtr(descriptor)));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor, size);
    }
    else
    {
        path = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempFont"*/]), uBox<int>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(uPtr(descriptor)->FileSource))));
        ::g::Uno::IO::File::WriteAllBytes(path, uPtr(descriptor->FileSource)->ReadAllBytes());
        ::g::ObjC::Object* uifontdescriptor1 = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, descriptor->Index, uDelegate::New(::TYPES[2/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, descriptor));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor1, size);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(sizeDict), uCRef(size), uifont);
    return uifont;
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource) [static] :347
uString* FontCache::GetOptionalPath(::g::Uno::UX::FileSource* fileSource)
{
    FontCache_typeof()->Init();

    if (uIs(fileSource, ::TYPES[3/*Fuse.Resources.SystemFileSource*/]))
        return uPtr(fileSource)->Name;
    else if (uIs(fileSource, ::TYPES[4/*Uno.UX.BundleFileSource*/]))
    {
        ::g::Uno::IO::BundleFile* bundleFile = uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[4/*Uno.UX.BundleFileSource*/]))->BundleFile;
        return FontCache::BundleFilePath(::g::Uno::String::op_Addition2(::STRINGS[1/*"data/"*/], uPtr(bundleFile)->BundlePath()));
    }

    return NULL;
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size) [static] :368
::g::ObjC::Object* FontCache::UIFontWithDescriptorAndSize(::g::ObjC::Object* descriptor, float size)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id descriptor, float size) -> ::id
        {
            return [::UIFont fontWithDescriptor:(::UIFontDescriptor*)descriptor size:size];
        } (::g::ObjC::Object::GetHandle(descriptor), size));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
