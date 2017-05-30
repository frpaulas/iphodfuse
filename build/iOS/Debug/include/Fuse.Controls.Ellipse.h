// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Ellipse;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Ellipse :836
// {
::g::Fuse::Controls::Shape_type* Ellipse_typeof();
void Ellipse__CreateNativeView_fn(Ellipse* __this, uObject** __retval);
void Ellipse__CreateSurfacePath_fn(Ellipse* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Ellipse__get_NeedSurface_fn(Ellipse* __this, bool* __retval);

struct Ellipse : ::g::Fuse::Controls::EllipticalShape
{
};
// }

}}} // ::g::Fuse::Controls
