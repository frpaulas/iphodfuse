// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface INativeViewRoot :3067
// {
uInterfaceType* INativeViewRoot_typeof();

struct INativeViewRoot
{
    void(*fp_Add)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_Remove)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    static void Add(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<INativeViewRoot>()->fp_Add(__this, viewHandle); }
    static void Remove(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<INativeViewRoot>()->fp_Remove(__this, viewHandle); }
};
// }

}}} // ::g::Fuse::Controls
