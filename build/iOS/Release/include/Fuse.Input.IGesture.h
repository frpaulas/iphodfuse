// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IGesture :497
// {
uInterfaceType* IGesture_typeof();

struct IGesture
{
    void(*fp_OnCapture)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*);
    void(*fp_OnLostCapture)(uObject*, bool*);
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*);
    static void OnCapture(const uInterface& __this, ::g::Fuse::Input::PointerEventArgs* args, int how) { __this.VTable<IGesture>()->fp_OnCapture(__this, args, &how); }
    static void OnLostCapture(const uInterface& __this, bool forced) { __this.VTable<IGesture>()->fp_OnLostCapture(__this, &forced); }
    static int OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerMoved(__this, args, &__retval), __retval; }
    static int OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerPressed(__this, args, &__retval), __retval; }
    static int OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerReleased(__this, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Input
