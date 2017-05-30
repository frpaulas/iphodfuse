// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.iOS/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.App.h>
#include <Fuse.App.RootViewHost.h>
#include <Fuse.AppRoot.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.INativeViewRoot.h>
#include <Fuse.Controls.ITextRenderer.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <Fuse.Controls.Native.-8c20fe6.h>
#include <Fuse.Controls.Native.-cfc7adc7.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TreeRen-26cd82a8.h>
#include <Fuse.Device.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <uObjC.Foreign.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{

// public extern class App :108
// {
static void App_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Fuse::Controls::ITextRenderer_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(7,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::App, _currentFocus), 0,
        ::g::Fuse::Controls::GraphicsView_typeof(), offsetof(::g::Fuse::App, _graphicsView), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::App, _prevStatusBarOrientation), 0,
        ::g::Fuse::Controls::TreeRendererPanel_typeof(), offsetof(::g::Fuse::App, _renderPanel), 0);
}

::g::Fuse::AppBase_type* App_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::AppBase_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(App);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("Fuse.App", options);
    type->fp_build_ = App_build;
    type->fp_get_Children = (void(*)(::g::Fuse::AppBase*, uObject**))App__get_Children_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))App__OnUpdate_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public App() :119
void App__ctor_3_fn(App* __this)
{
    __this->ctor_3();
}

// private void CheckFocus() :188
void App__CheckFocus_fn(App* __this)
{
    __this->CheckFocus();
}

// private void CheckStatusBarOrientation() :219
void App__CheckStatusBarOrientation_fn(App* __this)
{
    __this->CheckStatusBarOrientation();
}

// public override sealed Uno.Collections.IList<Fuse.Node> get_Children() :144
void App__get_Children_fn(App* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->_graphicsView)->Children(), void();
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) :206
void App__Compare_fn(::g::ObjC::Object* x, ::g::ObjC::Object* y, bool* __retval)
{
    *__retval = App::Compare(x, y);
}

// private static bool IsNull(ObjC.Object x) :213
void App__IsNull_fn(::g::ObjC::Object* x, bool* __retval)
{
    *__retval = App::IsNull(x);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :152
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// protected override sealed void OnUpdate() :179
void App__OnUpdate_fn(App* __this)
{
    __this->CheckFocus();
    __this->CheckStatusBarOrientation();
    ::g::Fuse::AppBase__OnUpdate_fn(__this);
}

// private void PropagateBackground() :174
void App__PropagateBackground_fn(App* __this)
{
    __this->PropagateBackground();
}

// public App() [instance] :119
void App::ctor_3()
{
    _prevStatusBarOrientation = -1;
    ctor_2();
    ::g::Fuse::Platform::SystemUI::OnCreate();
    ::g::Fuse::Controls::TextControl::TextRendererFactory(uDelegate::New(::TYPES[0/*Uno.Func<Fuse.Controls.TextControl, Fuse.Controls.ITextRenderer>*/], (void*)::g::Fuse::iOS::Bindings::TextRenderer__Create_fn));
    ::g::Fuse::MobileBootstrapping::Init();
    RootViewport(::g::Fuse::RootViewport::New2());
    ::g::Fuse::Time::Init(::g::Uno::Diagnostics::Clock::GetSeconds());
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->add_Tick(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)App__OnTick_fn, this));
    _renderPanel = ::g::Fuse::Controls::TreeRendererPanel::New4((uObject*)App__RootViewHost::New1());
    _graphicsView = ::g::Fuse::Controls::GraphicsView::New3();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_renderPanel)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), _graphicsView);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RootView(::g::Fuse::AppRoot::Handle());
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(_renderPanel, ::g::Fuse::AppRoot::Handle());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), _renderPanel);
}

// private void CheckFocus() [instance] :188
void App::CheckFocus()
{
    ::g::ObjC::Object* newFocus = ::g::Fuse::Controls::Native::iOS::FocusHelpers::GetCurrentFirstResponder();

    if (!App::Compare(_currentFocus, newFocus))
    {
        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusLost(_currentFocus);

        _currentFocus = newFocus;

        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusGained(_currentFocus);
    }
}

// private void CheckStatusBarOrientation() [instance] :219
void App::CheckStatusBarOrientation()
{
    int o = ::g::Fuse::Device::StatusBarOrientation();

    if (_prevStatusBarOrientation != o)
    {
        _prevStatusBarOrientation = o;
        ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_renderPanel)), 0);
    }
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :152
void App::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    try
    {
        PropagateBackground();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    ::g::Fuse::Time::Set(::g::Uno::Diagnostics::Clock::GetSeconds());

    try
    {
        OnUpdate();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }
}

// private void PropagateBackground() [instance] :174
void App::PropagateBackground()
{
    ::g::Fuse::AppRoot::ClearColor(Background());
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) [static] :206
bool App::Compare(::g::ObjC::Object* x, ::g::ObjC::Object* y)
{
    @autoreleasepool
    {
        return [] (::id x, ::id y) -> bool
        {
            return [x isEqual: y];
        } (::g::ObjC::Object::GetHandle(x), ::g::ObjC::Object::GetHandle(y));
        
    }
    
}

// private static bool IsNull(ObjC.Object x) [static] :213
bool App::IsNull(::g::ObjC::Object* x)
{
    @autoreleasepool
    {
        return [] (::id x) -> bool
        {
            return x == nil;
        } (::g::ObjC::Object::GetHandle(x));
        
    }
    
}
// }

}} // ::g::Fuse
