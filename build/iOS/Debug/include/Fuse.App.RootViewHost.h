// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.INativeViewRoot.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{struct App__RootViewHost;}}

namespace g{
namespace Fuse{

// private sealed class App.RootViewHost :115
// {
struct App__RootViewHost_type : uType
{
    ::g::Fuse::Controls::INativeViewRoot interface0;
};

App__RootViewHost_type* App__RootViewHost_typeof();
void App__RootViewHost__ctor__fn(App__RootViewHost* __this);
void App__RootViewHost__FuseControlsINativeViewRootAdd_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle);
void App__RootViewHost__FuseControlsINativeViewRootRemove_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle);
void App__RootViewHost__New1_fn(App__RootViewHost** __retval);

struct App__RootViewHost : uObject
{
    void ctor_();
    static App__RootViewHost* New1();
};
// }

}} // ::g::Fuse
