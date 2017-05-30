// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract interface ISurfaceDrawable :3779
// {
uInterfaceType* ISurfaceDrawable_typeof();

struct ISurfaceDrawable
{
    void(*fp_Draw)(uObject*, ::g::Fuse::Drawing::Surface*);
    static void Draw(const uInterface& __this, ::g::Fuse::Drawing::Surface* surface) { __this.VTable<ISurfaceDrawable>()->fp_Draw(__this, surface); }
};
// }

}}} // ::g::Fuse::Drawing
