// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct NavDelegate;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :14
// {
uClassType* NavDelegate_typeof();
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, ::g::ObjC::Object** __retval);

struct NavDelegate : uObject
{
    static ::g::ObjC::Object* Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes);
};
// }

}}}} // ::g::Fuse::iOS::Controls
