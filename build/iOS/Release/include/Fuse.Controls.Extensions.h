// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct Extensions;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static extern class Extensions :2843
// {
uClassType* Extensions_typeof();
void Extensions__GetColor_fn(::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float4* __retval);

struct Extensions : uObject
{
    static ::g::Uno::Float4 GetColor(::g::Fuse::Drawing::Brush* brush);
};
// }

}}} // ::g::Fuse::Controls
