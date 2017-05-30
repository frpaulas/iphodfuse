// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FontCache;}}}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FontCache :296
// {
uClassType* FontCache_typeof();
void FontCache__BundleFilePath_fn(uString* resource, uString** __retval);
void FontCache__Get_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float* size, ::g::ObjC::Object** __retval);
void FontCache__GetOptionalPath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval);
void FontCache__UIFontWithDescriptorAndSize_fn(::g::ObjC::Object* descriptor, float* size, ::g::ObjC::Object** __retval);

struct FontCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return FontCache_typeof()->Init(), _cache_; }

    static uString* BundleFilePath(uString* resource);
    static ::g::ObjC::Object* Get(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float size);
    static uString* GetOptionalPath(::g::Uno::UX::FileSource* fileSource);
    static ::g::ObjC::Object* UIFontWithDescriptorAndSize(::g::ObjC::Object* descriptor, float size);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
