// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :177
// {
static void Application_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Uno::Platform::iOS::Application::_LaunchOptions_, uFieldFlagsStatic);
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// public static ObjC.Object GetRootView() :218
void Application__GetRootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = Application::GetRootView();
}

// public static bool IsLandscape() :236
void Application__IsLandscape_fn(bool* __retval)
{
    *__retval = Application::IsLandscape();
}

// public static bool IsRootView(ObjC.Object view) :230
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval)
{
    *__retval = Application::IsRootView(view);
}

// public static generated ObjC.Object get_LaunchOptions() :215
void Application__get_LaunchOptions_fn(::g::ObjC::Object** __retval)
{
    *__retval = Application::LaunchOptions();
}

// private static generated void set_LaunchOptions(ObjC.Object value) :215
void Application__set_LaunchOptions_fn(::g::ObjC::Object* value)
{
    Application::LaunchOptions(value);
}

// public static void SetRootView(ObjC.Object view) :224
void Application__SetRootView_fn(::g::ObjC::Object* view)
{
    Application::SetRootView(view);
}

uSStrong< ::g::ObjC::Object*> Application::_LaunchOptions_;

// public static ObjC.Object GetRootView() [static] :218
::g::ObjC::Object* Application::GetRootView()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return (UIView*)((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } ());
        
    }
    
}

// public static bool IsLandscape() [static] :236
bool Application::IsLandscape()
{
    @autoreleasepool
    {
        return UIInterfaceOrientationIsLandscape([UIApplication sharedApplication].statusBarOrientation);
    }
    
}

// public static bool IsRootView(ObjC.Object view) [static] :230
bool Application::IsRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        return [] (::id view) -> bool
        {
            return view == ((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}

// public static void SetRootView(ObjC.Object view) [static] :224
void Application::SetRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        [] (::id view) -> void
        {
            ((uAppDelegate*)[UIApplication sharedApplication].delegate).view = (UIView*)view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}

// public static generated ObjC.Object get_LaunchOptions() [static] :215
::g::ObjC::Object* Application::LaunchOptions()
{
    return Application::_LaunchOptions_;
}

// private static generated void set_LaunchOptions(ObjC.Object value) [static] :215
void Application::LaunchOptions(::g::ObjC::Object* value)
{
    Application::_LaunchOptions_ = value;
}
// }

}}}} // ::g::Uno::Platform::iOS
