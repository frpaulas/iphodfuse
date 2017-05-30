// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Internal{struct SystemFont;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class SystemFont :1906
// {
uClassType* SystemFont_typeof();
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval);
void SystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval);

struct SystemFont : uObject
{
    static ::g::Uno::Collections::List* GetFallback(::g::Uno::UX::FileSource* file);
    static ::g::Uno::Collections::List* Default();
};
// }

}}} // ::g::Fuse::Internal
