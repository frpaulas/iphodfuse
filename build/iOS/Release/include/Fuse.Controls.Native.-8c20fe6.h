// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NativeFocus;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class NativeFocus :153
// {
uClassType* NativeFocus_typeof();
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle);
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle);

struct NativeFocus : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return NativeFocus_typeof()->Init(), _listeners_; }

    static void RaiseFocusGained(::g::ObjC::Object* handle);
    static void RaiseFocusLost(::g::ObjC::Object* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
