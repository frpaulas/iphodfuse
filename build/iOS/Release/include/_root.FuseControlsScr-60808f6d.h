// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.47.7/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property;}

namespace g{

// internal sealed class FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property :188
// {
::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof();
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__ctor_3_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name);
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property** __retval);
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Gestures::Scroller*> _obj;

    void ctor_3(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name);
    static FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* New1(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
