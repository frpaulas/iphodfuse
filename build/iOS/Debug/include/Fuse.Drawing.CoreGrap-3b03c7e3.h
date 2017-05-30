// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.SurfacePath.h>
namespace g{namespace Fuse{namespace Drawing{struct CoreGraphicsSurfacePath;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class CoreGraphicsSurfacePath :742
// {
uType* CoreGraphicsSurfacePath_typeof();
void CoreGraphicsSurfacePath__ctor_1_fn(CoreGraphicsSurfacePath* __this);
void CoreGraphicsSurfacePath__New1_fn(CoreGraphicsSurfacePath** __retval);

struct CoreGraphicsSurfacePath : ::g::Fuse::Drawing::SurfacePath
{
    int FillRule;
    void* Path;

    void ctor_1();
    static CoreGraphicsSurfacePath* New1();
};
// }

}}} // ::g::Fuse::Drawing
