// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Controls.Native.-5139440e.h>
#include <Fuse.Controls.Native.-9b8fa15e.h>
#include <Fuse.Controls.Native.-b38d34c1.h>
#include <Fuse.Controls.Native.-cfc7adc7.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Node.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :767
// {
// static InputDispatch() :773
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_captureIdentity_ = ::g::Uno::Object::New();
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Visual>*/]));
    InputDispatch::_activeTouches_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Controls.Native.iOS.UITouch>*/]));
    InputDispatch::_eventHandler_ = InputDispatch::CreateEventHandler(uDelegate::New(::TYPES[2/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)InputDispatch__OnTouchEvent_fn));
}

static void InputDispatch_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Can only listen to events on UIControls");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Native::iOS::UITouch_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Controls.Native.iOS.UITouch>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_activeTouches_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_captureIdentity_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_eventHandler_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Visual>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_RootView_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// private static void ActivateTouch(Fuse.Controls.Native.iOS.UITouch touch) :793
void InputDispatch__ActivateTouch_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    InputDispatch::ActivateTouch(touch);
}

// public static void AddListener(Fuse.Visual visual, ObjC.Object handle) :939
void InputDispatch__AddListener_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle)
{
    InputDispatch::AddListener(visual, handle);
}

// private static void AddListener(ObjC.Object eventHandler, ObjC.Object uicontrol) :985
void InputDispatch__AddListener1_fn(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol)
{
    InputDispatch::AddListener1(eventHandler, uicontrol);
}

// private static ObjC.Object CreateEventHandler(Uno.Action<ObjC.Object, ObjC.Object> callback) :975
void InputDispatch__CreateEventHandler_fn(uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = InputDispatch::CreateEventHandler(callback);
}

// private static void DeactivateAllTouches() :804
void InputDispatch__DeactivateAllTouches_fn()
{
    InputDispatch::DeactivateAllTouches();
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :885
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static int GetPointerIndex(Fuse.Controls.Native.iOS.UITouch touch) :799
void InputDispatch__GetPointerIndex_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, int* __retval)
{
    *__retval = InputDispatch::GetPointerIndex(touch);
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, Fuse.Controls.Native.iOS.UIEvent uiEvent) :817
void InputDispatch__HandleEvent_fn(::g::ObjC::Object* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent)
{
    InputDispatch::HandleEvent(viewHandle, origin, uiEvent);
}

// public static bool IsUIControl(ObjC.Object handle) :959
void InputDispatch__IsUIControl_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = InputDispatch::IsUIControl(handle);
}

// private static bool IsUIEvent(ObjC.Object handle) :967
void InputDispatch__IsUIEvent_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = InputDispatch::IsUIEvent(handle);
}

// private static Fuse.Input.PointerEventData MakePointerEventData(Fuse.Controls.Native.iOS.UITouch touch, ObjC.Object rootView, int pointIndex) :872
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, ::g::ObjC::Object* rootView, int* pointIndex, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touch, rootView, *pointIndex);
}

// private static void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) :780
void InputDispatch__OnTouchEvent_fn(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    InputDispatch::OnTouchEvent(sender, uiEvent);
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) :927
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancelled(visual, data);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :902
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :890
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :914
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Visual visual, ObjC.Object handle) :948
void InputDispatch__RemoveListener_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle)
{
    InputDispatch::RemoveListener(visual, handle);
}

// private static void RemoveListener(ObjC.Object eventHandler, ObjC.Object uicontrol) :995
void InputDispatch__RemoveListener1_fn(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol)
{
    InputDispatch::RemoveListener1(eventHandler, uicontrol);
}

// public static generated ObjC.Object get_RootView() :809
void InputDispatch__get_RootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = InputDispatch::RootView();
}

// public static generated void set_RootView(ObjC.Object value) :809
void InputDispatch__set_RootView_fn(::g::ObjC::Object* value)
{
    InputDispatch::RootView(value);
}

uSStrong< ::g::Uno::Collections::List*> InputDispatch::_activeTouches_;
uSStrong<uObject*> InputDispatch::_captureIdentity_;
uSStrong< ::g::ObjC::Object*> InputDispatch::_eventHandler_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::ObjC::Object*> InputDispatch::_RootView_;

// private static void ActivateTouch(Fuse.Controls.Native.iOS.UITouch touch) [static] :793
void InputDispatch::ActivateTouch(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    InputDispatch_typeof()->Init();
    bool ret2;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(InputDispatch::_activeTouches()), touch, &ret2), ret2))
        ::g::Uno::Collections::List__Add_fn(uPtr(InputDispatch::_activeTouches()), touch);
}

// public static void AddListener(Fuse.Visual visual, ObjC.Object handle) [static] :939
void InputDispatch::AddListener(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle)
{
    InputDispatch_typeof()->Init();

    if (!InputDispatch::IsUIControl(handle))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Can only li...*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), handle, visual);
    InputDispatch::AddListener1(InputDispatch::_eventHandler(), handle);
}

// private static void AddListener(ObjC.Object eventHandler, ObjC.Object uicontrol) [static] :985
void InputDispatch::AddListener1(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id eventHandler, ::id uicontrol) -> void
        {
            UIControlEventHandler* handler = (UIControlEventHandler*)eventHandler;
            ::UIControl* control = (::UIControl*)uicontrol;
            [control addTarget:handler action:@selector(action:forEvent:) forControlEvents:UIControlEventAllTouchEvents];
        } (::g::ObjC::Object::GetHandle(eventHandler), ::g::ObjC::Object::GetHandle(uicontrol));
        
    }
    
}

// private static ObjC.Object CreateEventHandler(Uno.Action<ObjC.Object, ObjC.Object> callback) [static] :975
::g::ObjC::Object* InputDispatch::CreateEventHandler(uDelegate* callback)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::uObjC::Function<void, ::id, ::id> callback) -> ::id
        {
            UIControlEventHandler* handler = [[UIControlEventHandler alloc] init];
            [handler setCallback: callback];
            return handler;
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id, ::id>)nil : (^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::ObjC::Object::Create(arg1), ::g::ObjC::Object::Create(arg2));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static void DeactivateAllTouches() [static] :804
void InputDispatch::DeactivateAllTouches()
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::_activeTouches())->Clear();
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :885
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static int GetPointerIndex(Fuse.Controls.Native.iOS.UITouch touch) [static] :799
int InputDispatch::GetPointerIndex(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    InputDispatch_typeof()->Init();
    int ret3;
    return (::g::Uno::Collections::List__IndexOf_fn(uPtr(InputDispatch::_activeTouches()), touch, &ret3), ret3);
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, Fuse.Controls.Native.iOS.UIEvent uiEvent) [static] :817
void InputDispatch::HandleEvent(::g::ObjC::Object* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent)
{
    InputDispatch_typeof()->Init();

    if (InputDispatch::RootView() == NULL)
        return;

    uArray* touches = uPtr(uiEvent)->GetTouchesForView(viewHandle);
    bool touchEnded = false;
    ::g::ObjC::Object* rootView = InputDispatch::RootView();

    for (int i = 0; i < uPtr(touches)->Length(); i++)
    {
        ::g::Fuse::Controls::Native::iOS::UITouch* touch = uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i);
        InputDispatch::ActivateTouch(touch);
        int pointerIndex = InputDispatch::GetPointerIndex(touch);
        ::g::Fuse::Input::PointerEventData* data = InputDispatch::MakePointerEventData(touch, rootView, pointerIndex);

        if (uPtr(touch)->Phase() == 0)
            InputDispatch::RaisePressed(origin, data);
        else if (uPtr(touch)->Phase() == 1)
            InputDispatch::RaiseMoved(origin, data);
        else if (uPtr(touch)->Phase() == 3)
        {
            InputDispatch::RaiseReleased(origin, data);
            touchEnded = true;
        }
        else if (uPtr(touch)->Phase() == 4)
        {
            InputDispatch::RaiseCancelled(origin, data);
            touchEnded = true;
        }
    }

    if (touchEnded)
    {
        for (int i1 = 0; i1 < uPtr(touches)->Length(); i1++)
        {
            ::g::Fuse::Controls::Native::iOS::UITouch* touch1 = uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i1);
            int pointerIndex1 = InputDispatch::GetPointerIndex(touch1);

            if (uPtr(touch1)->Phase() != 3)
                InputDispatch::RaiseReleased(origin, InputDispatch::MakePointerEventData(touch1, rootView, pointerIndex1));
        }

        InputDispatch::DeactivateAllTouches();
    }
}

// public static bool IsUIControl(ObjC.Object handle) [static] :959
bool InputDispatch::IsUIControl(::g::ObjC::Object* handle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            NSObject* obj = (NSObject*)handle;
            return [obj isKindOfClass:[UIControl class]];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static bool IsUIEvent(ObjC.Object handle) [static] :967
bool InputDispatch::IsUIEvent(::g::ObjC::Object* handle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            NSObject* obj = (NSObject*)handle;
            return [obj isKindOfClass:[::UIEvent class]];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static Fuse.Input.PointerEventData MakePointerEventData(Fuse.Controls.Native.iOS.UITouch touch, ObjC.Object rootView, int pointIndex) [static] :872
::g::Fuse::Input::PointerEventData* InputDispatch::MakePointerEventData(::g::Fuse::Controls::Native::iOS::UITouch* touch, ::g::ObjC::Object* rootView, int pointIndex)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    ::g::Uno::Float2 windowPoint = uPtr(touch)->LocationInView(rootView);
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = pointIndex;
    uPtr(collection1)->WindowPoint = windowPoint;
    uPtr(collection1)->Timestamp = (touch->Timestamp() - ::g::Fuse::Time::FrameTimeBase());
    uPtr(collection1)->PointerType = 2;
    uPtr(collection1)->IsPrimary = (pointIndex == 0);
    return collection1;
}

// private static void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) [static] :780
void InputDispatch::OnTouchEvent(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    InputDispatch_typeof()->Init();
    bool ret4;
    ::g::Fuse::Visual* ret5;

    if (InputDispatch::IsUIControl(sender) && InputDispatch::IsUIEvent(uiEvent))
    {
        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), sender, &ret4), ret4))
        {
            ::g::Fuse::Visual* visual = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(InputDispatch::_listeners()), sender, &ret5), ret5);
            ::g::Fuse::Controls::Native::iOS::UIEvent* ev = ::g::Fuse::Controls::Native::iOS::UIEvent::New1(uiEvent);
            InputDispatch::HandleEvent(sender, visual, ev);
        }
    }
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :927
void InputDispatch::RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::LoseCapture(uPtr(data)->PointIndex);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :902
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :890
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :914
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Visual visual, ObjC.Object handle) [static] :948
void InputDispatch::RemoveListener(::g::Fuse::Visual* visual, ::g::ObjC::Object* handle)
{
    InputDispatch_typeof()->Init();
    bool ret6;
    bool ret7;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), handle, &ret6), ret6))
    {
        InputDispatch::RemoveListener1(InputDispatch::_eventHandler(), handle);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), handle, &ret7);
    }
}

// private static void RemoveListener(ObjC.Object eventHandler, ObjC.Object uicontrol) [static] :995
void InputDispatch::RemoveListener1(::g::ObjC::Object* eventHandler, ::g::ObjC::Object* uicontrol)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id eventHandler, ::id uicontrol) -> void
        {
            UIControlEventHandler* handler = (UIControlEventHandler*)eventHandler;
            ::UIControl* control = (::UIControl*)uicontrol;
            [control removeTarget:handler action:@selector(action:forEvent:) forControlEvents:UIControlEventAllTouchEvents];
        } (::g::ObjC::Object::GetHandle(eventHandler), ::g::ObjC::Object::GetHandle(uicontrol));
        
    }
    
}

// public static generated ObjC.Object get_RootView() [static] :809
::g::ObjC::Object* InputDispatch::RootView()
{
    InputDispatch_typeof()->Init();
    return InputDispatch::_RootView();
}

// public static generated void set_RootView(ObjC.Object value) [static] :809
void InputDispatch::RootView(::g::ObjC::Object* value)
{
    InputDispatch_typeof()->Init();
    InputDispatch::_RootView() = value;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
