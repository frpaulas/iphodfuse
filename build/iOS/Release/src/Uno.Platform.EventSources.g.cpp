// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.EventSou-afb2ad40.h>
#include <Uno.Platform.EventSou-b16da529.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.OSFrame.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------------

// public static class HardwareKeys :1181
// {
static void HardwareKeys_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&::g::Uno::Platform::EventSources::HardwareKeys::KeyDown1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&::g::Uno::Platform::EventSources::HardwareKeys::KeyUp1_, uFieldFlagsStatic);
}

uClassType* HardwareKeys_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.EventSources.HardwareKeys", options);
    type->fp_build_ = HardwareKeys_build;
    return type;
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :1183
void HardwareKeys__add_KeyDown_fn(uDelegate* value)
{
    HardwareKeys::add_KeyDown(value);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :1183
void HardwareKeys__remove_KeyDown_fn(uDelegate* value)
{
    HardwareKeys::remove_KeyDown(value);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :1184
void HardwareKeys__add_KeyUp_fn(uDelegate* value)
{
    HardwareKeys::add_KeyUp(value);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :1184
void HardwareKeys__remove_KeyUp_fn(uDelegate* value)
{
    HardwareKeys::remove_KeyUp(value);
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :1186
void HardwareKeys__OnKeyDown_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = HardwareKeys::OnKeyDown(*key, *modifiers);
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :1196
void HardwareKeys__OnKeyUp_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = HardwareKeys::OnKeyUp(*key, *modifiers);
}

uSStrong<uDelegate*> HardwareKeys::KeyDown1_;
uSStrong<uDelegate*> HardwareKeys::KeyUp1_;

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :1186
bool HardwareKeys::OnKeyDown(int key, int modifiers)
{
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers, NULL);
    uDelegate* handler = HardwareKeys::KeyDown1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :1196
bool HardwareKeys::OnKeyUp(int key, int modifiers)
{
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers, NULL);
    uDelegate* handler = HardwareKeys::KeyUp1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :1183
void HardwareKeys::add_KeyDown(uDelegate* value)
{
    HardwareKeys::KeyDown1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HardwareKeys::KeyDown1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :1183
void HardwareKeys::remove_KeyDown(uDelegate* value)
{
    HardwareKeys::KeyDown1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HardwareKeys::KeyDown1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :1184
void HardwareKeys::add_KeyUp(uDelegate* value)
{
    HardwareKeys::KeyUp1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HardwareKeys::KeyUp1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :1184
void HardwareKeys::remove_KeyUp(uDelegate* value)
{
    HardwareKeys::KeyUp1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HardwareKeys::KeyUp1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------------

// public static class InterAppInvoke :1148
// {
// static InterAppInvoke() :1148
static void InterAppInvoke__cctor__fn(uType* __type)
{
    InterAppInvoke::DelayedUri_ = ::STRINGS[0/*""*/];
}

static void InterAppInvoke_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Platform::EventSources::InterAppInvoke::DelayedUri_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::EventSources::InterAppInvoke::ReceivedURI1_, uFieldFlagsStatic);
}

uClassType* InterAppInvoke_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.EventSources.InterAppInvoke", options);
    type->fp_build_ = InterAppInvoke_build;
    type->fp_cctor_ = InterAppInvoke__cctor__fn;
    return type;
}

// private static void DispatchDelayedUri(Uno.Platform.ApplicationState state) :1166
void InterAppInvoke__DispatchDelayedUri_fn(int* state)
{
    InterAppInvoke::DispatchDelayedUri(*state);
}

// internal static void OnReceivedURI(string Uri) :1152
void InterAppInvoke__OnReceivedURI_fn(uString* Uri)
{
    InterAppInvoke::OnReceivedURI(Uri);
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) :1150
void InterAppInvoke__add_ReceivedURI_fn(uDelegate* value)
{
    InterAppInvoke::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) :1150
void InterAppInvoke__remove_ReceivedURI_fn(uDelegate* value)
{
    InterAppInvoke::remove_ReceivedURI(value);
}

uSStrong<uString*> InterAppInvoke::DelayedUri_;
uSStrong<uDelegate*> InterAppInvoke::ReceivedURI1_;

// private static void DispatchDelayedUri(Uno.Platform.ApplicationState state) [static] :1166
void InterAppInvoke::DispatchDelayedUri(int state)
{
    InterAppInvoke_typeof()->Init();
    uDelegate* handler = InterAppInvoke::ReceivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)InterAppInvoke::DelayedUri());

    InterAppInvoke::DelayedUri() = ::STRINGS[0/*""*/];
    ::g::Uno::Platform::CoreApp::remove_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)InterAppInvoke__DispatchDelayedUri_fn));
}

// internal static void OnReceivedURI(string Uri) [static] :1152
void InterAppInvoke::OnReceivedURI(uString* Uri)
{
    InterAppInvoke_typeof()->Init();

    if ((::g::Uno::Platform::CoreApp::State() == 2) || (::g::Uno::Platform::CoreApp::State() == 3))
    {
        uDelegate* handler = InterAppInvoke::ReceivedURI1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, Uri);
    }
    else
    {
        InterAppInvoke::DelayedUri() = Uri;
        ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)InterAppInvoke__DispatchDelayedUri_fn));
    }
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) [static] :1150
void InterAppInvoke::add_ReceivedURI(uDelegate* value)
{
    InterAppInvoke_typeof()->Init();
    InterAppInvoke::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterAppInvoke::ReceivedURI1(), value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) [static] :1150
void InterAppInvoke::remove_ReceivedURI(uDelegate* value)
{
    InterAppInvoke_typeof()->Init();
    InterAppInvoke::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterAppInvoke::ReceivedURI1(), value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}
// }

}}}} // ::g::Uno::Platform::EventSources
