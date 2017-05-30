// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Platform{struct CoreApp;}}}

namespace g{
namespace Uno{
namespace Platform{

// public abstract class CoreApp :28
// {
uType* CoreApp_typeof();
void CoreApp__ctor__fn(CoreApp* __this);
void CoreApp__get_Current_fn(CoreApp** __retval);
void CoreApp__set_Current_fn(CoreApp* value);
void CoreApp__EnterBackground_fn();
void CoreApp__EnterForeground_fn();
void CoreApp__add_EnteringBackground_fn(uDelegate* value);
void CoreApp__remove_EnteringBackground_fn(uDelegate* value);
void CoreApp__add_EnteringForeground_fn(uDelegate* value);
void CoreApp__remove_EnteringForeground_fn(uDelegate* value);
void CoreApp__add_EnteringInteractive_fn(uDelegate* value);
void CoreApp__remove_EnteringInteractive_fn(uDelegate* value);
void CoreApp__EnterInteractive_fn();
void CoreApp__add_ExitedInteractive_fn(uDelegate* value);
void CoreApp__remove_ExitedInteractive_fn(uDelegate* value);
void CoreApp__ExitInteractive_fn();
void CoreApp__Load_fn(CoreApp* __this);
void CoreApp__OnReceivedLowMemoryWarning_fn();
void CoreApp__add_ReceivedLowMemoryWarning_fn(uDelegate* value);
void CoreApp__remove_ReceivedLowMemoryWarning_fn(uDelegate* value);
void CoreApp__Start_fn();
void CoreApp__add_Started_fn(uDelegate* value);
void CoreApp__remove_Started_fn(uDelegate* value);
void CoreApp__get_State_fn(int* __retval);
void CoreApp__set_State_fn(int* value);
void CoreApp__Terminate_fn();
void CoreApp__add_Terminating_fn(uDelegate* value);
void CoreApp__remove_Terminating_fn(uDelegate* value);

struct CoreApp : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _delayedURIS_;
    static uSStrong< ::g::Uno::Collections::List*>& _delayedURIS() { return CoreApp_typeof()->Init(), _delayedURIS_; }
    static uSStrong<CoreApp*> _Current_;
    static uSStrong<CoreApp*>& _Current() { return CoreApp_typeof()->Init(), _Current_; }
    static int _State_;
    static int& _State() { return CoreApp_typeof()->Init(), _State_; }
    static uSStrong<uDelegate*> EnteringBackground1_;
    static uSStrong<uDelegate*>& EnteringBackground1() { return CoreApp_typeof()->Init(), EnteringBackground1_; }
    static uSStrong<uDelegate*> EnteringForeground1_;
    static uSStrong<uDelegate*>& EnteringForeground1() { return CoreApp_typeof()->Init(), EnteringForeground1_; }
    static uSStrong<uDelegate*> EnteringInteractive1_;
    static uSStrong<uDelegate*>& EnteringInteractive1() { return CoreApp_typeof()->Init(), EnteringInteractive1_; }
    static uSStrong<uDelegate*> ExitedInteractive1_;
    static uSStrong<uDelegate*>& ExitedInteractive1() { return CoreApp_typeof()->Init(), ExitedInteractive1_; }
    static uSStrong<uDelegate*> ReceivedLowMemoryWarning1_;
    static uSStrong<uDelegate*>& ReceivedLowMemoryWarning1() { return CoreApp_typeof()->Init(), ReceivedLowMemoryWarning1_; }
    static uSStrong<uDelegate*> Started1_;
    static uSStrong<uDelegate*>& Started1() { return CoreApp_typeof()->Init(), Started1_; }
    static uSStrong<uDelegate*> Terminating1_;
    static uSStrong<uDelegate*>& Terminating1() { return CoreApp_typeof()->Init(), Terminating1_; }

    void ctor_();
    void Load();
    static void EnterBackground();
    static void EnterForeground();
    static void EnterInteractive();
    static void ExitInteractive();
    static void OnReceivedLowMemoryWarning();
    static void Start();
    static void Terminate();
    static CoreApp* Current();
    static void Current(CoreApp* value);
    static int State();
    static void State(int value);
    static void add_EnteringBackground(uDelegate* value);
    static void remove_EnteringBackground(uDelegate* value);
    static void add_EnteringForeground(uDelegate* value);
    static void remove_EnteringForeground(uDelegate* value);
    static void add_EnteringInteractive(uDelegate* value);
    static void remove_EnteringInteractive(uDelegate* value);
    static void add_ExitedInteractive(uDelegate* value);
    static void remove_ExitedInteractive(uDelegate* value);
    static void add_ReceivedLowMemoryWarning(uDelegate* value);
    static void remove_ReceivedLowMemoryWarning(uDelegate* value);
    static void add_Started(uDelegate* value);
    static void remove_Started(uDelegate* value);
    static void add_Terminating(uDelegate* value);
    static void remove_Terminating(uDelegate* value);
};
// }

}}} // ::g::Uno::Platform
