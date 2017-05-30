// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Platform/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <CoreGraphics/CoreGraphics.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUI;}}}
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Platform{

// public static extern class SystemUI :31
// {
uClassType* SystemUI_typeof();
void SystemUI___statusBarWillChangeFrame_fn(CGRect* _endFrame, double* animationDuration);
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value);
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__EnableKeyboardResizeNotifications_fn();
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_Frame_fn(::g::Uno::Rect* value);
void SystemUI__add_FrameChanged_fn(uDelegate* value);
void SystemUI__remove_FrameChanged_fn(uDelegate* value);
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval);
void SystemUI__set_IsTopFrameVisible_fn(bool* value);
void SystemUI__OnCreate_fn();
void SystemUI__OnFrameChanged_fn(uObject* s, uObject* a);
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
void SystemUI__Pre_iOS8_HandleDeviceOrientation_Size_fn(CGSize* cgsize, ::g::ObjC::Object* view, CGSize* __retval);
void SystemUI__get_RootView_fn(::g::ObjC::Object** __retval);
void SystemUI__set_RootView_fn(::g::ObjC::Object* value);
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value);
void SystemUI__uKeyboardWillChangeFrame1_fn(CGRect* frameBegin, CGRect* frameEnd, double* animationDuration, int* animationCurve, int* reason);
void SystemUI__get_uStatusBarAnimation_fn(int* __retval);
void SystemUI__set_uStatusBarAnimation_fn(int* value);
void SystemUI__get_uStatusBarStyle_fn(int* __retval);
void SystemUI__set_uStatusBarStyle_fn(int* value);

struct SystemUI : uObject
{
    static bool _isTopFrameVisible_;
    static bool& _isTopFrameVisible() { return SystemUI_typeof()->Init(), _isTopFrameVisible_; }
    static int _style_;
    static int& _style() { return SystemUI_typeof()->Init(), _style_; }
    static ::g::Uno::Rect _BottomFrame_;
    static ::g::Uno::Rect& _BottomFrame() { return SystemUI_typeof()->Init(), _BottomFrame_; }
    static ::g::Uno::Rect _Frame_;
    static ::g::Uno::Rect& _Frame() { return SystemUI_typeof()->Init(), _Frame_; }
    static int _uStatusBarAnimation_;
    static int& _uStatusBarAnimation() { return SystemUI_typeof()->Init(), _uStatusBarAnimation_; }
    static uSStrong<uDelegate*> BottomFrameWillResize1_;
    static uSStrong<uDelegate*>& BottomFrameWillResize1() { return SystemUI_typeof()->Init(), BottomFrameWillResize1_; }
    static uSStrong<uDelegate*> FrameChanged1_;
    static uSStrong<uDelegate*>& FrameChanged1() { return SystemUI_typeof()->Init(), FrameChanged1_; }
    static uSStrong<uDelegate*> TopFrameWillResize1_;
    static uSStrong<uDelegate*>& TopFrameWillResize1() { return SystemUI_typeof()->Init(), TopFrameWillResize1_; }

    static void _statusBarWillChangeFrame(CGRect _endFrame, double animationDuration);
    static void EnableKeyboardResizeNotifications();
    static ::g::Uno::Rect GetStatusBarFrame();
    static void OnCreate();
    static void OnFrameChanged(uObject* s, uObject* a);
    static void OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
    static CGSize Pre_iOS8_HandleDeviceOrientation_Size(CGSize cgsize, ::g::ObjC::Object* view);
    static void uKeyboardWillChangeFrame1(CGRect frameBegin, CGRect frameEnd, double animationDuration, int animationCurve, int reason);
    static ::g::Uno::Rect BottomFrame();
    static void BottomFrame(::g::Uno::Rect value);
    static ::g::Uno::Rect Frame();
    static void Frame(::g::Uno::Rect value);
    static bool IsTopFrameVisible();
    static void IsTopFrameVisible(bool value);
    static ::g::ObjC::Object* RootView();
    static void RootView(::g::ObjC::Object* value);
    static ::g::Uno::Rect TopFrame();
    static int uStatusBarAnimation1();
    static void uStatusBarAnimation1(int value);
    static int uStatusBarStyle1();
    static void uStatusBarStyle1(int value);
    static void add_BottomFrameWillResize(uDelegate* value);
    static void remove_BottomFrameWillResize(uDelegate* value);
    static void add_FrameChanged(uDelegate* value);
    static void remove_FrameChanged(uDelegate* value);
    static void add_TopFrameWillResize(uDelegate* value);
    static void remove_TopFrameWillResize(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
