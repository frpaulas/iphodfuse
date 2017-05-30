// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :3344
// {
struct View_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Controls::Native::IView interface1;
};

View_type* View_typeof();
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle);
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView);
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval);

struct View : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_2(::g::ObjC::Object* handle);
    void ctor_3(::g::ObjC::Object* handle, bool isLeafView);
    ::g::ObjC::Object* Handle();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
