// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Capture.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.CustomPoin-ba20e234.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusGained.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLost.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavig-66c283ba.h>
#include <Fuse.Input.FocusPredi-2161b71d.h>
#include <Fuse.Input.FocusPredi-2503a529.h>
#include <Fuse.Input.FocusPrediction.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.HitTestHelpers.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.Input.INotifyFocus.h>
#include <Fuse.Input.IPointerEv-f0232aef.h>
#include <Fuse.Input.IsFocusabl-1a22ad48.h>
#include <Fuse.Input.IsFocusabl-2b64bc29.h>
#include <Fuse.Input.IsFocusabl-d09357f5.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressed.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleased.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.Ca-6b632455.h>
#include <Fuse.Input.Pointer.De-21c971a8.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.Pointer.PELHolder.h>
#include <Fuse.Input.Pointer.PELStatus.h>
#include <Fuse.Input.Pointer.Po-e761f634.h>
#include <Fuse.Input.PointerEnt-cfe04f3d.h>
#include <Fuse.Input.PointerEntered.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerLeft.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMoved.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPre-d85d5994.h>
#include <Fuse.Input.PointerPressed.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerRel-5863e73d.h>
#include <Fuse.Input.PointerReleased.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWhe-656d8f41.h>
#include <Fuse.Input.PointerWhe-d06481ac.h>
#include <Fuse.Input.PointerWheelMoved.h>
#include <Fuse.Input.SelectionQuery.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[20];
static uType* TYPES[32];

namespace g{
namespace Fuse{
namespace Input{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class Capture :937
// {
static void Capture_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid Capture parameters");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::Capture, Deleted), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Input::Capture, LostCallback), 0,
        ::TYPES[0/*Uno.Collections.List<int>*/], offsetof(::g::Fuse::Input::Capture, PointIndex), 0,
        ::g::Fuse::Input::CaptureType_typeof(), offsetof(::g::Fuse::Input::Capture, Type), 0,
        uObject_typeof(), offsetof(::g::Fuse::Input::Capture, _Identity), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::Capture, _Visual), 0);
}

uType* Capture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Capture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Capture", options);
    type->fp_build_ = Capture_build;
    return type;
}

// public Capture(Fuse.Visual n, object identity) :948
void Capture__ctor__fn(Capture* __this, ::g::Fuse::Visual* n, uObject* identity)
{
    __this->ctor_(n, identity);
}

// public bool AcceptsPoint(int index) :957
void Capture__AcceptsPoint_fn(Capture* __this, int* index, bool* __retval)
{
    *__retval = __this->AcceptsPoint(*index);
}

// public int CompareStrength(Fuse.Input.Capture o) :971
void Capture__CompareStrength_fn(Capture* __this, Capture* o, int* __retval)
{
    *__retval = __this->CompareStrength(o);
}

// public generated object get_Identity() :940
void Capture__get_Identity_fn(Capture* __this, uObject** __retval)
{
    *__retval = __this->Identity();
}

// private generated void set_Identity(object value) :940
void Capture__set_Identity_fn(Capture* __this, uObject* value)
{
    __this->Identity(value);
}

// public bool get_IsSuitable() :964
void Capture__get_IsSuitable_fn(Capture* __this, bool* __retval)
{
    *__retval = __this->IsSuitable();
}

// public Capture New(Fuse.Visual n, object identity) :948
void Capture__New1_fn(::g::Fuse::Visual* n, uObject* identity, Capture** __retval)
{
    *__retval = Capture::New1(n, identity);
}

// public generated Fuse.Visual get_Visual() :939
void Capture__get_Visual_fn(Capture* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :939
void Capture__set_Visual_fn(Capture* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Capture(Fuse.Visual n, object identity) [instance] :948
void Capture::ctor_(::g::Fuse::Visual* n, uObject* identity)
{
    PointIndex = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<int>*/]));

    if ((n == NULL) || (identity == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid Cap...*/]));

    Visual(n);
    Identity(identity);
}

// public bool AcceptsPoint(int index) [instance] :957
bool Capture::AcceptsPoint(int index)
{
    bool ret2;
    return (::g::Uno::Collections::List__Contains_fn(uPtr(PointIndex), uCRef<int>(index), &ret2), ret2);
}

// public int CompareStrength(Fuse.Input.Capture o) [instance] :971
int Capture::CompareStrength(Capture* o)
{
    bool hardThis = (Type & 2) == 2;
    bool hardO = (uPtr(o)->Type & 2) == 2;

    if (hardThis == hardO)
        return 0;

    return hardThis ? 1 : -1;
}

// public generated object get_Identity() [instance] :940
uObject* Capture::Identity()
{
    return _Identity;
}

// private generated void set_Identity(object value) [instance] :940
void Capture::Identity(uObject* value)
{
    _Identity = value;
}

// public bool get_IsSuitable() [instance] :964
bool Capture::IsSuitable()
{
    return uPtr(Visual())->IsContextEnabled() && uPtr(Visual())->IsRootingCompleted();
}

// public generated Fuse.Visual get_Visual() [instance] :939
::g::Fuse::Visual* Capture::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :939
void Capture::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public Capture New(Fuse.Visual n, object identity) [static] :948
Capture* Capture::New1(::g::Fuse::Visual* n, uObject* identity)
{
    Capture* obj1 = (Capture*)uNew(Capture_typeof());
    obj1->ctor_(n, identity);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class Pointer.CaptureLockImpl :1094
// {
static void Pointer__CaptureLockImpl_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Pointer__CaptureLockImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::Pointer__CaptureLockImpl, AnyDeleted), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::Pointer__CaptureLockImpl, Count), 0);
}

Pointer__CaptureLockImpl_type* Pointer__CaptureLockImpl_typeof()
{
    static uSStrong<Pointer__CaptureLockImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pointer__CaptureLockImpl);
    options.TypeSize = sizeof(Pointer__CaptureLockImpl_type);
    type = (Pointer__CaptureLockImpl_type*)uClassType::New("Fuse.Input.Pointer.CaptureLockImpl", options);
    type->fp_build_ = Pointer__CaptureLockImpl_build;
    type->fp_ctor_ = (void*)Pointer__CaptureLockImpl__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Pointer__CaptureLockImpl__Dispose_fn;
    return type;
}

// public generated CaptureLockImpl() :1094
void Pointer__CaptureLockImpl__ctor__fn(Pointer__CaptureLockImpl* __this)
{
    __this->ctor_();
}

// public void Delete(Fuse.Input.Capture c) :1115
void Pointer__CaptureLockImpl__Delete_fn(Pointer__CaptureLockImpl* __this, ::g::Fuse::Input::Capture* c)
{
    __this->Delete(c);
}

// public void Dispose() :1099
void Pointer__CaptureLockImpl__Dispose_fn(Pointer__CaptureLockImpl* __this)
{
    __this->Dispose();
}

// public generated CaptureLockImpl New() :1094
void Pointer__CaptureLockImpl__New1_fn(Pointer__CaptureLockImpl** __retval)
{
    *__retval = Pointer__CaptureLockImpl::New1();
}

// public generated CaptureLockImpl() [instance] :1094
void Pointer__CaptureLockImpl::ctor_()
{
}

// public void Delete(Fuse.Input.Capture c) [instance] :1115
void Pointer__CaptureLockImpl::Delete(::g::Fuse::Input::Capture* c)
{
    uPtr(c)->Deleted = true;
    AnyDeleted = true;
}

// public void Dispose() [instance] :1099
void Pointer__CaptureLockImpl::Dispose()
{
    ::g::Fuse::Input::Capture* ret2;

    if ((--Count) > 0)
        return;

    if (AnyDeleted)
    {
        for (int i = uPtr(::g::Fuse::Input::Pointer::_captures())->Count() - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_captures()), uCRef<int>(i), &ret2), ret2))->Deleted)
                uPtr(::g::Fuse::Input::Pointer::_captures())->RemoveAt(i);

        AnyDeleted = false;
    }
}

// public generated CaptureLockImpl New() [static] :1094
Pointer__CaptureLockImpl* Pointer__CaptureLockImpl::New1()
{
    Pointer__CaptureLockImpl* obj1 = (Pointer__CaptureLockImpl*)uNew(Pointer__CaptureLockImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public enum CaptureType :925
uEnumType* CaptureType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.CaptureType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "Soft", 1LL,
        "Hard", 2LL,
        "Children", 4LL,
        "NodeShare", 8LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract class CustomPointerEventArgs :1826
// {
static void CustomPointerEventArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* CustomPointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CustomPointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.CustomPointerEventArgs", options);
    type->fp_build_ = CustomPointerEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1828
void CustomPointerEventArgs__ctor_3_fn(CustomPointerEventArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(args, visual);
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1828
void CustomPointerEventArgs::ctor_3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ctor_2(uPtr(args)->Data(), visual);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class Pointer.DefaultPointerEventResponder :1584
// {
static void Pointer__DefaultPointerEventResponder_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), NULL);
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Pointer__DefaultPointerEventResponder_type, interface0));
}

Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof()
{
    static uSStrong<Pointer__DefaultPointerEventResponder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pointer__DefaultPointerEventResponder);
    options.TypeSize = sizeof(Pointer__DefaultPointerEventResponder_type);
    type = (Pointer__DefaultPointerEventResponder_type*)uClassType::New("Fuse.Input.Pointer.DefaultPointerEventResponder", options);
    type->fp_build_ = Pointer__DefaultPointerEventResponder_build;
    type->fp_ctor_ = (void*)Pointer__DefaultPointerEventResponder__New1_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Pointer__DefaultPointerEventResponder__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Pointer__DefaultPointerEventResponder__OnPointerReleased_fn;
    return type;
}

// public generated DefaultPointerEventResponder() :1584
void Pointer__DefaultPointerEventResponder__ctor__fn(Pointer__DefaultPointerEventResponder* __this)
{
    __this->ctor_();
}

// public generated DefaultPointerEventResponder New() :1584
void Pointer__DefaultPointerEventResponder__New1_fn(Pointer__DefaultPointerEventResponder** __retval)
{
    *__retval = Pointer__DefaultPointerEventResponder::New1();
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :1608
void Pointer__DefaultPointerEventResponder__OnPointerMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :1586
void Pointer__DefaultPointerEventResponder__OnPointerPressed_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :1625
void Pointer__DefaultPointerEventResponder__OnPointerReleased_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public generated DefaultPointerEventResponder() [instance] :1584
void Pointer__DefaultPointerEventResponder::ctor_()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :1608
void Pointer__DefaultPointerEventResponder::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    bool ret3;
    ::g::Fuse::Input::Pointer__PointerRecord* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret3), ret3))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret4), ret4);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        p->WindowPoint = args->WindowPoint();
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::Moved())->RaiseWithBubble(args, 1);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :1586
void Pointer__DefaultPointerEventResponder::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Fuse::Input::Pointer__PointerRecord* collection1;
    collection1 = ::g::Fuse::Input::Pointer__PointerRecord::New1();
    uPtr(collection1)->WindowPoint = uPtr(args)->WindowPoint();
    uPtr(collection1)->DistanceMoved = 0.0f;
    ::g::Fuse::Input::Pointer__PointerRecord* p = collection1;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), p);
    ::g::Fuse::Input::Pointer::Coord(args->WindowPoint());

    if (args->Visual() == NULL)
    {
        ::g::Fuse::Input::Focus::Release();
        return;
    }

    uPtr(::g::Fuse::Input::Pointer::Pressed())->RaiseWithBubble1(args, 1, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Input.PointerPressedArgs, Uno.Collections.IList<Fuse.Visual>>*/], (void*)::g::Fuse::Input::Pointer__CheckFocus_fn));
    uPtr(p)->WasHandled = args->IsHandled();
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :1625
void Pointer__DefaultPointerEventResponder::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    bool ret5;
    ::g::Fuse::Input::Pointer__PointerRecord* ret6;
    bool ret7;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret5), ret5))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret6), ret6);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), &ret7);
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::Released())->RaiseWithBubble(args, 1);
}

// public generated DefaultPointerEventResponder New() [static] :1584
Pointer__DefaultPointerEventResponder* Pointer__DefaultPointerEventResponder::New1()
{
    Pointer__DefaultPointerEventResponder* obj2 = (Pointer__DefaultPointerEventResponder*)uNew(Pointer__DefaultPointerEventResponder_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public partial static class Focus :173
// {
// static Focus() :173
static void Focus__cctor__fn(uType* __type)
{
    Focus::_gained_ = ::g::Fuse::Input::FocusGained::New1();
    Focus::_lost_ = ::g::Fuse::Input::FocusLost::New1();
    Focus::_isFoucsableChanged_ = ::g::Fuse::Input::IsFocusableChangedEvent::New1();
    Focus::_focusDelegatorHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Focus_build(uType* type)
{
    ::STRINGS[1] = uString::Const("GiveTo");
    ::STRINGS[2] = uString::Const("Move");
    ::STRINGS[3] = uString::Const("Release");
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = ::g::Fuse::Input::INotifyFocus_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[6] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Input::FocusDelegator_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_focusDelegatorHandle_, uFieldFlagsStatic,
        ::TYPES[2/*Fuse.Visual*/], (uintptr_t)&::g::Fuse::Input::Focus::_focusedObject_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusGained_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_gained_, uFieldFlagsStatic,
        ::g::Fuse::Input::IsFocusableChangedEvent_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_isFoucsableChanged_, uFieldFlagsStatic,
        ::TYPES[2/*Fuse.Visual*/], (uintptr_t)&::g::Fuse::Input::Focus::_lastFocusedVisual_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusLost_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_lost_, uFieldFlagsStatic);
}

uClassType* Focus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Focus", options);
    type->fp_build_ = Focus_build;
    type->fp_cctor_ = Focus__cctor__fn;
    return type;
}

// internal static bool CanSetFocus(Fuse.Node node) :363
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = Focus::CanSetFocus(node);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName]) :311
void Focus__ChangeFocusedVisual_fn(::g::Fuse::Visual* node, uString* memberName)
{
    Focus::ChangeFocusedVisual(node, memberName);
}

// private static Fuse.Visual FindRoot() :262
void Focus__FindRoot_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FindRoot();
}

// public static Fuse.Visual get_FocusedVisual() :188
void Focus__get_FocusedVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FocusedVisual();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() :179
void Focus__get_Gained_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Gained();
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n) :198
void Focus__GetDelegator_fn(::g::Fuse::Visual* n, uDelegate** __retval)
{
    *__retval = Focus::GetDelegator(n);
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n) :403
void Focus__GetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::GetFocusDelegate(n);
}

// public static void GiveTo(Fuse.Visual n) :244
void Focus__GiveTo_fn(::g::Fuse::Visual* n)
{
    Focus::GiveTo(n);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n) :394
void Focus__HandlesFocusEvent_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::HandlesFocusEvent(n);
}

// public static bool IsFocusable(Fuse.Visual n) :372
void Focus__IsFocusable_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::IsFocusable(n);
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() :180
void Focus__get_Lost_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Lost();
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) :216
void Focus__Move_fn(int* direction)
{
    Focus::Move(*direction);
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction) :293
void Focus__Predict_fn(int* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::Predict(*direction);
}

// public static void Release() :225
void Focus__Release_fn()
{
    Focus::Release();
}

uSStrong< ::g::Fuse::PropertyHandle*> Focus::_focusDelegatorHandle_;
uSStrong< ::g::Fuse::Visual*> Focus::_focusedObject_;
uSStrong< ::g::Fuse::Input::FocusGained*> Focus::_gained_;
uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> Focus::_isFoucsableChanged_;
uSStrong< ::g::Fuse::Visual*> Focus::_lastFocusedVisual_;
uSStrong< ::g::Fuse::Input::FocusLost*> Focus::_lost_;

// internal static bool CanSetFocus(Fuse.Node node) [static] :363
bool Focus::CanSetFocus(::g::Fuse::Node* node)
{
    Focus_typeof()->Init();

    if (node == NULL)
        return true;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[2/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return (uPtr(v)->IsRootingCompleted() && uPtr(v)->IsContextEnabled()) && Focus::IsFocusable(v);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName]) [static] :311
void Focus::ChangeFocusedVisual(::g::Fuse::Visual* node, uString* memberName)
{
    Focus_typeof()->Init();

    if (node == Focus::_focusedObject())
        return;

    while (node != NULL)
    {
        uDelegate* delegator = Focus::GetDelegator(node);

        if (::g::Uno::Delegate::op_Inequality(delegator, NULL))
        {
            node = (::g::Fuse::Visual*)uPtr(delegator)->Invoke();
            continue;
        }

        ::g::Fuse::Visual* focusDelegate = Focus::GetFocusDelegate(node);

        if (focusDelegate != NULL)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus::CanSetFocus(node))
        node = NULL;

    if (node == Focus::_focusedObject())
        return;

    Focus::_lastFocusedVisual() = Focus::_focusedObject();
    Focus::_focusedObject() = node;

    if (Focus::_lastFocusedVisual() != NULL)
    {
        uObject* nf = uAs<uObject*>(Focus::_lastFocusedVisual(), ::TYPES[3/*Fuse.Input.INotifyFocus*/]);

        if (nf != NULL)
            ::g::Fuse::Input::INotifyFocus::OnFocusLost(uInterface(uPtr(nf), ::TYPES[3/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Lost())->RaiseWithBubble(::g::Fuse::Input::FocusLostArgs::New3(Focus::_lastFocusedVisual()), 0);
    }

    if (Focus::_focusedObject() != NULL)
    {
        uObject* nf1 = uAs<uObject*>(Focus::_focusedObject(), ::TYPES[3/*Fuse.Input.INotifyFocus*/]);

        if (nf1 != NULL)
            ::g::Fuse::Input::INotifyFocus::OnFocusGained(uInterface(uPtr(nf1), ::TYPES[3/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Gained())->RaiseWithBubble(::g::Fuse::Input::FocusGainedArgs::New3(Focus::_focusedObject()), 0);
    }
}

// private static Fuse.Visual FindRoot() [static] :262
::g::Fuse::Visual* Focus::FindRoot()
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* ret3;
    ::g::Fuse::AppBase* app = ::g::Fuse::AppBase::Current2();

    if (app != NULL)
    {
        ::g::Fuse::Visual* root = NULL;

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[4/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Node* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[6/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);

            if (uIs(child, ::TYPES[2/*Fuse.Visual*/]))
            {
                root = uCast< ::g::Fuse::Visual*>(child, ::TYPES[2/*Fuse.Visual*/]);
                break;
            }
        }

        while (root != NULL)
            if (uPtr(root)->Parent() != NULL)
                root = uPtr(root)->Parent();
            else
                break;

        return root;
    }

    return NULL;
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n) [static] :198
uDelegate* Focus::GetDelegator(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(n)->Properties())->TryGet(Focus::_focusDelegatorHandle(), &res))
        return uCast<uDelegate*>(res, ::TYPES[7/*Fuse.Input.FocusDelegator*/]);

    return NULL;
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n) [static] :403
::g::Fuse::Visual* Focus::GetFocusDelegate(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return uPtr(n)->_focusDelegate;
}

// public static void GiveTo(Fuse.Visual n) [static] :244
void Focus::GiveTo(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedVisual(n, ::STRINGS[1/*"GiveTo"*/]);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n) [static] :394
bool Focus::HandlesFocusEvent(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return (Focus::IsFocusable(n) || ::g::Uno::Delegate::op_Inequality(Focus::GetDelegator(n), NULL)) || (Focus::GetFocusDelegate(n) != NULL);
}

// public static bool IsFocusable(Fuse.Visual n) [static] :372
bool Focus::IsFocusable(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return uPtr(n)->_isFocusable;
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) [static] :216
void Focus::Move(int direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Visual* predictedFocus = Focus::Predict(direction);

    if (predictedFocus == NULL)
        return;

    Focus::ChangeFocusedVisual(predictedFocus, ::STRINGS[2/*"Move"*/]);
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction) [static] :293
::g::Fuse::Visual* Focus::Predict(int direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Visual* node = ::g::Fuse::Input::FocusPredictStrategy::Predict(Focus::_focusedObject(), direction);

    if (node == NULL)
    {
        ::g::Fuse::Visual* root = Focus::FindRoot();

        if (root != NULL)
        {
            node = ::g::Fuse::Input::FocusPredictStrategy::Predict(root, direction);

            if ((node == NULL) && Focus::CanSetFocus(root))
                node = root;
        }
    }

    return node;
}

// public static void Release() [static] :225
void Focus::Release()
{
    Focus_typeof()->Init();
    Focus::_lastFocusedVisual() = NULL;
    Focus::ChangeFocusedVisual(NULL, ::STRINGS[3/*"Release"*/]);
}

// public static Fuse.Visual get_FocusedVisual() [static] :188
::g::Fuse::Visual* Focus::FocusedVisual()
{
    Focus_typeof()->Init();
    return Focus::_focusedObject();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() [static] :179
::g::Fuse::VisualEvent* Focus::Gained()
{
    Focus_typeof()->Init();
    return Focus::_gained();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() [static] :180
::g::Fuse::VisualEvent* Focus::Lost()
{
    Focus_typeof()->Init();
    return Focus::_lost();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate Fuse.Visual FocusDelegator() :165
uDelegateType* FocusDelegator_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusDelegator", 0, 0);
    type->SetSignature(::g::Fuse::Visual_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class FocusGained :440
// {
static void FocusGained_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusGained_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusGained);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusGained", options);
    type->fp_build_ = FocusGained_build;
    type->fp_ctor_ = (void*)FocusGained__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusGained__Invoke_fn;
    return type;
}

// public generated FocusGained() :440
void FocusGained__ctor_1_fn(FocusGained* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusGainedHandler handler, object sender, Fuse.Input.FocusGainedArgs args) :442
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusGained New() :440
void FocusGained__New1_fn(FocusGained** __retval)
{
    *__retval = FocusGained::New1();
}

// public generated FocusGained() [instance] :440
void FocusGained::ctor_1()
{
    ctor_();
}

// public generated FocusGained New() [static] :440
FocusGained* FocusGained::New1()
{
    FocusGained* obj1 = (FocusGained*)uNew(FocusGained_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class FocusGainedArgs :433
// {
static void FocusGainedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusGainedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusGainedArgs", options);
    type->fp_build_ = FocusGainedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusGainedArgs(Fuse.Visual visual) :435
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual) :435
void FocusGainedArgs__New3_fn(::g::Fuse::Visual* visual, FocusGainedArgs** __retval)
{
    *__retval = FocusGainedArgs::New3(visual);
}

// public FocusGainedArgs(Fuse.Visual visual) [instance] :435
void FocusGainedArgs::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual) [static] :435
FocusGainedArgs* FocusGainedArgs::New3(::g::Fuse::Visual* visual)
{
    FocusGainedArgs* obj1 = (FocusGainedArgs*)uNew(FocusGainedArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void FocusGainedHandler(object sender, Fuse.Input.FocusGainedArgs args) :438
uDelegateType* FocusGainedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusGainedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusGainedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class FocusLost :458
// {
static void FocusLost_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusLost_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusLost);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusLost", options);
    type->fp_build_ = FocusLost_build;
    type->fp_ctor_ = (void*)FocusLost__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusLost__Invoke_fn;
    return type;
}

// public generated FocusLost() :458
void FocusLost__ctor_1_fn(FocusLost* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusLostHandler handler, object sender, Fuse.Input.FocusLostArgs args) :460
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusLost New() :458
void FocusLost__New1_fn(FocusLost** __retval)
{
    *__retval = FocusLost::New1();
}

// public generated FocusLost() [instance] :458
void FocusLost::ctor_1()
{
    ctor_();
}

// public generated FocusLost New() [static] :458
FocusLost* FocusLost::New1()
{
    FocusLost* obj1 = (FocusLost*)uNew(FocusLost_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class FocusLostArgs :451
// {
static void FocusLostArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusLostArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusLostArgs", options);
    type->fp_build_ = FocusLostArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusLostArgs(Fuse.Visual visual) :453
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusLostArgs New(Fuse.Visual visual) :453
void FocusLostArgs__New3_fn(::g::Fuse::Visual* visual, FocusLostArgs** __retval)
{
    *__retval = FocusLostArgs::New3(visual);
}

// public FocusLostArgs(Fuse.Visual visual) [instance] :453
void FocusLostArgs::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(visual);
}

// public FocusLostArgs New(Fuse.Visual visual) [static] :453
FocusLostArgs* FocusLostArgs::New3(::g::Fuse::Visual* visual)
{
    FocusLostArgs* obj1 = (FocusLostArgs*)uNew(FocusLostArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void FocusLostHandler(object sender, Fuse.Input.FocusLostArgs args) :456
uDelegateType* FocusLostHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusLostHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusLostArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public enum FocusNavigationDirection :157
uEnumType* FocusNavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.FocusNavigationDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal static class FocusPrediction :26
// {
static void FocusPrediction_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[6] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2/*IndexOf<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Func1_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], ::TYPES[2/*Fuse.Visual*/], NULL);
}

uClassType* FocusPrediction_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPrediction", options);
    type->fp_build_ = FocusPrediction_build;
    return type;
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual) :124
void FocusPrediction__FirstVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::FirstVisualChild(visual);
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual) :134
void FocusPrediction__LastVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::LastVisualChild(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual) :78
void FocusPrediction__NextSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child) :85
void FocusPrediction__NextSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling1(parent, child);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling) :55
void FocusPrediction__Predict_fn(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::Predict(visual, filter, getChild, getSibling);
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) :50
void FocusPrediction__PredictNextVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictNextVisual(visual, filter);
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) :45
void FocusPrediction__PredictPreviousVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictPreviousVisual(visual, filter);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual) :102
void FocusPrediction__PreviousSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling(visual);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child) :109
void FocusPrediction__PreviousSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling1(parent, child);
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual) [static] :124
::g::Fuse::Visual* FocusPrediction::FirstVisualChild(::g::Fuse::Visual* visual)
{
    ::g::Fuse::Node* ret2;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[4/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[6/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret2), ret2);

        if (uIs(c, ::TYPES[2/*Fuse.Visual*/]))
            return uCast< ::g::Fuse::Visual*>(c, ::TYPES[2/*Fuse.Visual*/]);
    }

    return NULL;
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual) [static] :134
::g::Fuse::Visual* FocusPrediction::LastVisualChild(::g::Fuse::Visual* visual)
{
    ::g::Fuse::Node* ret3;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; i--)
    {
        ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[2/*Fuse.Visual*/]);

        if (c != NULL)
            return c;
    }

    return NULL;
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual) [static] :78
::g::Fuse::Visual* FocusPrediction::NextSibling(::g::Fuse::Visual* visual)
{
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)FocusPrediction::NextSibling1(uPtr(visual)->Parent(), visual) : NULL;
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child) [static] :85
::g::Fuse::Visual* FocusPrediction::NextSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    int ret4;
    ::g::Fuse::Node* ret5;
    int count = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]));
    int index = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[10/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], parent->Children(), child, &ret4), ret4);
    int offset = index + 1;

    if (offset < count)

        for (int i = offset; i < count; i++)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), ::TYPES[2/*Fuse.Visual*/]);

            if (c != NULL)
                return c;
        }

    return FocusPrediction::NextSibling(parent);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling) [static] :55
::g::Fuse::Visual* FocusPrediction::Predict(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling)
{
    bool ret6;
    bool ret7;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/])) > 0)
    {
        ::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(getChild)->Invoke(1, visual);
        return (uPtr(filter)->Invoke(&ret6, 1, child), ret6) ? child : (::g::Fuse::Visual*)FocusPrediction::Predict(child, filter, getChild, getSibling);
    }

    ::g::Fuse::Visual* sibling = (::g::Fuse::Visual*)uPtr(getSibling)->Invoke(1, visual);

    if (sibling != NULL)
        return (uPtr(filter)->Invoke(&ret7, 1, sibling), ret7) ? sibling : (::g::Fuse::Visual*)FocusPrediction::Predict(sibling, filter, getChild, getSibling);

    return NULL;
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static] :50
::g::Fuse::Visual* FocusPrediction::PredictNextVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__FirstVisualChild_fn), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__NextSibling_fn));
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static] :45
::g::Fuse::Visual* FocusPrediction::PredictPreviousVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__LastVisualChild_fn), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__PreviousSibling_fn));
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual) [static] :102
::g::Fuse::Visual* FocusPrediction::PreviousSibling(::g::Fuse::Visual* visual)
{
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)FocusPrediction::PreviousSibling1(uPtr(visual)->Parent(), visual) : NULL;
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child) [static] :109
::g::Fuse::Visual* FocusPrediction::PreviousSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    int ret8;
    ::g::Fuse::Node* ret9;
    int offset = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[10/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(parent)->Children(), child, &ret8), ret8) - 1;

    if (offset >= 0)

        for (int i = offset; i >= 0; i--)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret9), ret9), ::TYPES[2/*Fuse.Visual*/]);

            if (c != NULL)
                return c;
        }

    return FocusPrediction::PreviousSibling(parent);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal static class FocusPredictStrategy :9
// {
static void FocusPredictStrategy_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
}

uClassType* FocusPredictStrategy_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPredictStrategy", options);
    type->fp_build_ = FocusPredictStrategy_build;
    return type;
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction) :11
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPredictStrategy::Predict(n, *direction);
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction) [static] :11
::g::Fuse::Visual* FocusPredictStrategy::Predict(::g::Fuse::Visual* n, int direction)
{
    if (n != NULL)
    {
        if (direction == 1)
            return ::g::Fuse::Input::FocusPrediction::PredictNextVisual(n, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
        else if (direction == 0)
            return ::g::Fuse::Input::FocusPrediction::PredictPreviousVisual(n, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
    }

    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class Gesture :537
// {
static void Gesture_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Missing LostCapture");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno");
    ::STRINGS[6] = uString::Const("OnPointerMoved");
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Fuse::Input::IGesture_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Gesture_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Input::CaptureType_typeof(), offsetof(::g::Fuse::Input::Gesture, _captureType), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::Gesture, _down), 0,
        ::TYPES[14/*Fuse.Input.IGesture*/], offsetof(::g::Fuse::Input::Gesture, Handler), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::Gesture, Target), 0,
        ::g::Fuse::Input::GestureType_typeof(), offsetof(::g::Fuse::Input::Gesture, Type), 0);
}

Gesture_type* Gesture_typeof()
{
    static uSStrong<Gesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Gesture);
    options.TypeSize = sizeof(Gesture_type);
    type = (Gesture_type*)uClassType::New("Fuse.Input.Gesture", options);
    type->fp_build_ = Gesture_build;
    type->fp_ctor_ = (void*)Gesture__New1_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Gesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public generated Gesture() :537
void Gesture__ctor__fn(Gesture* __this)
{
    __this->ctor_();
}

// private void Cancel() :607
void Gesture__Cancel_fn(Gesture* __this)
{
    __this->Cancel();
}

// private void Capture(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType) :562
void Gesture__Capture_fn(Gesture* __this, ::g::Fuse::Input::PointerEventArgs* args, int* captureType)
{
    __this->Capture(args, *captureType);
}

// public void Dispose() :647
void Gesture__Dispose_fn(Gesture* __this)
{
    __this->Dispose();
}

// private void HandleRequest(Fuse.Input.GestureRequest req, Fuse.Input.PointerEventArgs args) :546
void Gesture__HandleRequest_fn(Gesture* __this, int* req, ::g::Fuse::Input::PointerEventArgs* args)
{
    __this->HandleRequest(*req, args);
}

// public bool get_IsHardCapture() :590
void Gesture__get_IsHardCapture_fn(Gesture* __this, bool* __retval)
{
    *__retval = __this->IsHardCapture();
}

// private void LostCapture(bool forced) :598
void Gesture__LostCapture_fn(Gesture* __this, bool* forced)
{
    __this->LostCapture(*forced);
}

// private void Maintain() :558
void Gesture__Maintain_fn(Gesture* __this)
{
    __this->Maintain();
}

// public generated Gesture New() :537
void Gesture__New1_fn(Gesture** __retval)
{
    *__retval = Gesture::New1();
}

// private void OnLostCapture() :593
void Gesture__OnLostCapture_fn(Gesture* __this)
{
    __this->OnLostCapture();
}

// internal void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :623
void Gesture__OnPointerMoved_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// internal void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :615
void Gesture__OnPointerPressed_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// internal void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :639
void Gesture__OnPointerReleased_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :654
void Gesture__UnoUXIPropertyListenerOnPropertyChanged_fn(Gesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
}

// public generated Gesture() [instance] :537
void Gesture::ctor_()
{
    _down = -1;
}

// private void Cancel() [instance] :607
void Gesture::Cancel()
{
    if (_down == -1)
        return;

    LostCapture(false);
}

// private void Capture(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType) [instance] :562
void Gesture::Capture(::g::Fuse::Input::PointerEventArgs* args, int captureType)
{
    if ((Type & 2) == 2)
        captureType = captureType | 4;

    if ((Type & 4) == 4)
        captureType = captureType | 8;

    if (_captureType == captureType)
        return;

    if (!::g::Fuse::Input::Pointer::ModifyCapture1(this, Target, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Gesture__OnLostCapture_fn, this), captureType, uPtr(args)->PointIndex()))
    {
        OnLostCapture();
        return;
    }

    _down = uPtr(args)->PointIndex();
    _captureType = captureType;

    if ((captureType & 2) == 2)
        uPtr(Target)->BeginInteraction(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Gesture__OnLostCapture_fn, this));

    ::g::Fuse::Input::IGesture::OnCapture(uInterface(uPtr(Handler), ::TYPES[14/*Fuse.Input.IGesture*/]), args, captureType);
}

// public void Dispose() [instance] :647
void Gesture::Dispose()
{
    Cancel();
    ::g::Fuse::Input::Gestures::Remove(Handler);
}

// private void HandleRequest(Fuse.Input.GestureRequest req, Fuse.Input.PointerEventArgs args) [instance] :546
void Gesture::HandleRequest(int req, ::g::Fuse::Input::PointerEventArgs* args)
{
    switch (req)
    {
        case 0:
            break;
        case 1:
        {
            Maintain();
            break;
        }
        case 2:
        {
            Capture(args, 1);
            break;
        }
        case 3:
        {
            Capture(args, 2);
            break;
        }
        case 4:
        {
            Cancel();
            break;
        }
    }
}

// public bool get_IsHardCapture() [instance] :590
bool Gesture::IsHardCapture()
{
    return (_captureType & 2) == 2;
}

// private void LostCapture(bool forced) [instance] :598
void Gesture::LostCapture(bool forced)
{
    _down = -1;
    _captureType = 0;
    ::g::Fuse::Input::Pointer::ReleaseCapture(this);
    uPtr(Target)->EndInteraction(this);
    ::g::Fuse::Input::IGesture::OnLostCapture(uInterface(uPtr(Handler), ::TYPES[14/*Fuse.Input.IGesture*/]), forced);
}

// private void Maintain() [instance] :558
void Gesture::Maintain()
{
}

// private void OnLostCapture() [instance] :593
void Gesture::OnLostCapture()
{
    LostCapture(true);
}

// internal void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :623
void Gesture::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"Missing Los...*/], this, ::STRINGS[5/*"/Users/paul...*/], 631, ::STRINGS[6/*"OnPointerMo...*/]);
        LostCapture(true);
        return;
    }

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerMoved(uInterface(uPtr(Handler), ::TYPES[14/*Fuse.Input.IGesture*/]), args), args);
}

// internal void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :615
void Gesture::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if (_down != -1)
        return;

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerPressed(uInterface(uPtr(Handler), ::TYPES[14/*Fuse.Input.IGesture*/]), args), args);
}

// internal void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :639
void Gesture::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerReleased(uInterface(uPtr(Handler), ::TYPES[14/*Fuse.Input.IGesture*/]), args), args);
}

// public generated Gesture New() [static] :537
Gesture* Gesture::New1()
{
    Gesture* obj1 = (Gesture*)uNew(Gesture_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public enum GestureRequest :523
uEnumType* GestureRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.GestureRequest", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Ignore", 0LL,
        "Maintain", 1LL,
        "SoftCapture", 2LL,
        "HardCapture", 3LL,
        "Cancel", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public static class Gestures :665
// {
// static Gestures() :665
static void Gestures__cctor__fn(uType* __type)
{
    Gestures::_gestures_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<Fuse.Input.IGesture, Fuse.Input.Gesture>*/]));
}

static void Gestures_build(uType* type)
{
    ::STRINGS[7] = uString::Const("This gesture handler is already registered");
    ::STRINGS[8] = uString::Const("Invalid gesture type");
    ::STRINGS[9] = uString::Const("Unregistered gesture");
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Input::IGesture_typeof(), ::g::Fuse::Input::Gesture_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    type->SetFields(0,
        ::TYPES[15/*Uno.Collections.Dictionary<Fuse.Input.IGesture, Fuse.Input.Gesture>*/], (uintptr_t)&::g::Fuse::Input::Gestures::_gestures_, uFieldFlagsStatic);
}

uClassType* Gestures_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Gestures", options);
    type->fp_build_ = Gestures_build;
    type->fp_cctor_ = Gestures__cctor__fn;
    return type;
}

// public static Fuse.Input.Gesture Add(Fuse.Input.IGesture handler, Fuse.Visual target, Fuse.Input.GestureType type) :672
void Gestures__Add_fn(uObject* handler, ::g::Fuse::Visual* target, int* type, ::g::Fuse::Input::Gesture** __retval)
{
    *__retval = Gestures::Add(handler, target, *type);
}

// internal static void Remove(Fuse.Input.IGesture handler) :696
void Gestures__Remove_fn(uObject* handler)
{
    Gestures::Remove(handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Gestures::_gestures_;

// public static Fuse.Input.Gesture Add(Fuse.Input.IGesture handler, Fuse.Visual target, Fuse.Input.GestureType type) [static] :672
::g::Fuse::Input::Gesture* Gestures::Add(uObject* handler, ::g::Fuse::Visual* target, int type)
{
    Gestures_typeof()->Init();
    ::g::Fuse::Input::Gesture* collection1;
    bool ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Gestures::_gestures()), handler, &ret2), ret2))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"This gestur...*/]));

    if (!((type & 1) == 1))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[8/*"Invalid ges...*/]));

    collection1 = ::g::Fuse::Input::Gesture::New1();
    uPtr(collection1)->Handler = handler;
    uPtr(collection1)->Type = type;
    uPtr(collection1)->Target = target;
    ::g::Fuse::Input::Gesture* g = collection1;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Gestures::_gestures()), handler, g);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), target, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerPressed_fn, uPtr(g)));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), target, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerReleased_fn, g));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), target, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerMoved_fn, g));
    return g;
}

// internal static void Remove(Fuse.Input.IGesture handler) [static] :696
void Gestures::Remove(uObject* handler)
{
    Gestures_typeof()->Init();
    bool ret3;
    bool ret4;
    ::g::Fuse::Input::Gesture* g;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Gestures::_gestures()), handler, (void**)(&g), &ret3), ret3))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[9/*"Unregistere...*/]));

    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), uPtr(g)->Target, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerPressed_fn, uPtr(g)));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), g->Target, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerReleased_fn, g));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), g->Target, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)::g::Fuse::Input::Gesture__OnPointerMoved_fn, g));
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Gestures::_gestures()), handler, &ret4);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public enum GestureType :513
uEnumType* GestureType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.GestureType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Primary", 1LL,
        "Children", 2LL,
        "NodeShare", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public static class HitTestHelpers :741
// {
static void HitTestHelpers_build(uType* type)
{
}

uClassType* HitTestHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.HitTestHelpers", options);
    type->fp_build_ = HitTestHelpers_build;
    return type;
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point) :743
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = HitTestHelpers::HitTestNearest(root, *point);
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point) [static] :743
::g::Fuse::HitTestResult* HitTestHelpers::HitTestNearest(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::Input::SelectionQuery* sq = ::g::Fuse::Input::SelectionQuery::New1();
    return sq->Select1(root, point);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract interface IGesture :497
// {
uInterfaceType* IGesture_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.IGesture", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract interface INotifyFocus :167
// {
uInterfaceType* INotifyFocus_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.INotifyFocus", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract interface IPointerEventResponder :982
// {
uInterfaceType* IPointerEventResponder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.IPointerEventResponder", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class IsFocusableChangedArgs :467
// {
static void IsFocusableChangedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IsFocusableChangedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.IsFocusableChangedArgs", options);
    type->fp_build_ = IsFocusableChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class IsFocusableChangedEvent :474
// {
static void IsFocusableChangedEvent_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IsFocusableChangedEvent);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.IsFocusableChangedEvent", options);
    type->fp_build_ = IsFocusableChangedEvent_build;
    type->fp_ctor_ = (void*)IsFocusableChangedEvent__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))IsFocusableChangedEvent__Invoke_fn;
    return type;
}

// public generated IsFocusableChangedEvent() :474
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.IsFocusableChangedHandler handler, object sender, Fuse.Input.IsFocusableChangedArgs args) :476
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated IsFocusableChangedEvent New() :474
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval)
{
    *__retval = IsFocusableChangedEvent::New1();
}

// public generated IsFocusableChangedEvent() [instance] :474
void IsFocusableChangedEvent::ctor_1()
{
    ctor_();
}

// public generated IsFocusableChangedEvent New() [static] :474
IsFocusableChangedEvent* IsFocusableChangedEvent::New1()
{
    IsFocusableChangedEvent* obj1 = (IsFocusableChangedEvent*)uNew(IsFocusableChangedEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void IsFocusableChangedHandler(object sender, Fuse.Input.IsFocusableChangedArgs args) :472
uDelegateType* IsFocusableChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.IsFocusableChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::IsFocusableChangedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public static class Keyboard :840
// {
// static Keyboard() :840
static void Keyboard__cctor__fn(uType* __type)
{
    Keyboard::_keyPressed_ = ::g::Fuse::Input::KeyPressed::New1();
    Keyboard::_keyReleased_ = ::g::Fuse::Input::KeyReleased::New1();
    Keyboard::_keysDown_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Uno.Platform.Key>*/]));
    Keyboard::_keyboardHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Keyboard_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyboardHandle_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyPressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyReleased_, uFieldFlagsStatic,
        ::TYPES[19/*Uno.Collections.List<Uno.Platform.Key>*/], (uintptr_t)&::g::Fuse::Input::Keyboard::_keysDown_, uFieldFlagsStatic);
}

uClassType* Keyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Keyboard", options);
    type->fp_build_ = Keyboard_build;
    type->fp_cctor_ = Keyboard__cctor__fn;
    return type;
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() :845
void Keyboard__get_KeyPressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyPressed();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() :846
void Keyboard__get_KeyReleased_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyReleased();
}

// private static Fuse.Visual get_KeyTargetVisual() :876
void Keyboard__get_KeyTargetVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Keyboard::KeyTargetVisual();
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :882
void Keyboard__RaiseKeyPressed_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyPressed(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :892
void Keyboard__RaiseKeyReleased_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyReleased(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

uSStrong< ::g::Fuse::PropertyHandle*> Keyboard::_keyboardHandle_;
uSStrong< ::g::Fuse::Input::KeyPressed*> Keyboard::_keyPressed_;
uSStrong< ::g::Fuse::Input::KeyReleased*> Keyboard::_keyReleased_;
uSStrong< ::g::Uno::Collections::List*> Keyboard::_keysDown_;

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :882
bool Keyboard::RaiseKeyPressed(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(key));
    ::g::Fuse::Input::KeyPressedArgs* args = ::g::Fuse::Input::KeyPressedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyPressed())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :892
bool Keyboard::RaiseKeyReleased(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    int ret3;

    for (int i = 0; i < uPtr(Keyboard::_keysDown())->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(i), &ret3), ret3) == key)
            uPtr(Keyboard::_keysDown())->RemoveAt(i--);

    ::g::Fuse::Input::KeyReleasedArgs* args = ::g::Fuse::Input::KeyReleasedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyReleased())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() [static] :845
::g::Fuse::VisualEvent* Keyboard::KeyPressed()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyPressed();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() [static] :846
::g::Fuse::VisualEvent* Keyboard::KeyReleased()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyReleased();
}

// private static Fuse.Visual get_KeyTargetVisual() [static] :876
::g::Fuse::Visual* Keyboard::KeyTargetVisual()
{
    Keyboard_typeof()->Init();
    ::g::Fuse::Visual* ind1 = ::g::Fuse::Input::Focus::FocusedVisual();
    return (ind1 != NULL) ? ind1 : (::g::Fuse::RootViewport*)::g::Fuse::AppBase::CurrentRootViewport();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract class KeyEventArgs :760
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsAltKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsControlKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsMetaKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsShiftKeyPressed), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _Key), 0);
}

::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual) :792
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int* key, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(*key, visual);
}

// public generated bool get_IsAltKeyPressed() :788
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// protected generated void set_IsAltKeyPressed(bool value) :789
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsAltKeyPressed(*value);
}

// public generated bool get_IsControlKeyPressed() :776
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// protected generated void set_IsControlKeyPressed(bool value) :777
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsControlKeyPressed(*value);
}

// public generated bool get_IsMetaKeyPressed() :770
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// protected generated void set_IsMetaKeyPressed(bool value) :771
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsMetaKeyPressed(*value);
}

// public generated bool get_IsShiftKeyPressed() :782
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// protected generated void set_IsShiftKeyPressed(bool value) :783
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsShiftKeyPressed(*value);
}

// public generated Uno.Platform.Key get_Key() :764
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :765
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual) [instance] :792
void KeyEventArgs::ctor_2(int key, ::g::Fuse::Visual* visual)
{
    ctor_1(visual);
    Key(key);
}

// public generated bool get_IsAltKeyPressed() [instance] :788
bool KeyEventArgs::IsAltKeyPressed()
{
    return _IsAltKeyPressed;
}

// protected generated void set_IsAltKeyPressed(bool value) [instance] :789
void KeyEventArgs::IsAltKeyPressed(bool value)
{
    _IsAltKeyPressed = value;
}

// public generated bool get_IsControlKeyPressed() [instance] :776
bool KeyEventArgs::IsControlKeyPressed()
{
    return _IsControlKeyPressed;
}

// protected generated void set_IsControlKeyPressed(bool value) [instance] :777
void KeyEventArgs::IsControlKeyPressed(bool value)
{
    _IsControlKeyPressed = value;
}

// public generated bool get_IsMetaKeyPressed() [instance] :770
bool KeyEventArgs::IsMetaKeyPressed()
{
    return _IsMetaKeyPressed;
}

// protected generated void set_IsMetaKeyPressed(bool value) [instance] :771
void KeyEventArgs::IsMetaKeyPressed(bool value)
{
    _IsMetaKeyPressed = value;
}

// public generated bool get_IsShiftKeyPressed() [instance] :782
bool KeyEventArgs::IsShiftKeyPressed()
{
    return _IsShiftKeyPressed;
}

// protected generated void set_IsShiftKeyPressed(bool value) [instance] :783
void KeyEventArgs::IsShiftKeyPressed(bool value)
{
    _IsShiftKeyPressed = value;
}

// public generated Uno.Platform.Key get_Key() [instance] :764
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :765
void KeyEventArgs::Key(int value)
{
    _Key = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class KeyPressed :811
// {
static void KeyPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyPressed", options);
    type->fp_build_ = KeyPressed_build;
    type->fp_ctor_ = (void*)KeyPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyPressed__Invoke_fn;
    return type;
}

// public generated KeyPressed() :811
void KeyPressed__ctor_1_fn(KeyPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyPressedHandler handler, object sender, Fuse.Input.KeyPressedArgs args) :813
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyPressed New() :811
void KeyPressed__New1_fn(KeyPressed** __retval)
{
    *__retval = KeyPressed::New1();
}

// public generated KeyPressed() [instance] :811
void KeyPressed::ctor_1()
{
    ctor_();
}

// public generated KeyPressed New() [static] :811
KeyPressed* KeyPressed::New1()
{
    KeyPressed* obj1 = (KeyPressed*)uNew(KeyPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class KeyPressedArgs :798
// {
static void KeyPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
}

::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyPressedArgs", options);
    type->fp_build_ = KeyPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :800
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :800
void KeyPressedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyPressedArgs** __retval)
{
    *__retval = KeyPressedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance] :800
void KeyPressedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static] :800
KeyPressedArgs* KeyPressedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyPressedArgs* obj1 = (KeyPressedArgs*)uNew(KeyPressedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void KeyPressedHandler(object sender, Fuse.Input.KeyPressedArgs args) :809
uDelegateType* KeyPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyPressedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class KeyReleased :832
// {
static void KeyReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyReleased", options);
    type->fp_build_ = KeyReleased_build;
    type->fp_ctor_ = (void*)KeyReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyReleased__Invoke_fn;
    return type;
}

// public generated KeyReleased() :832
void KeyReleased__ctor_1_fn(KeyReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyReleasedHandler handler, object sender, Fuse.Input.KeyReleasedArgs args) :834
void KeyReleased__Invoke_fn(KeyReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyReleased New() :832
void KeyReleased__New1_fn(KeyReleased** __retval)
{
    *__retval = KeyReleased::New1();
}

// public generated KeyReleased() [instance] :832
void KeyReleased::ctor_1()
{
    ctor_();
}

// public generated KeyReleased New() [static] :832
KeyReleased* KeyReleased::New1()
{
    KeyReleased* obj1 = (KeyReleased*)uNew(KeyReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class KeyReleasedArgs :819
// {
static void KeyReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
}

::g::Fuse::VisualEventArgs_type* KeyReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyReleasedArgs", options);
    type->fp_build_ = KeyReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :821
void KeyReleasedArgs__ctor_3_fn(KeyReleasedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :821
void KeyReleasedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyReleasedArgs** __retval)
{
    *__retval = KeyReleasedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance] :821
void KeyReleasedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static] :821
KeyReleasedArgs* KeyReleasedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyReleasedArgs* obj1 = (KeyReleasedArgs*)uNew(KeyReleasedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void KeyReleasedHandler(object sender, Fuse.Input.KeyReleasedArgs args) :830
uDelegateType* KeyReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyReleasedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class Pointer.PELHolder :1538
// {
static void Pointer__PELHolder_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Input::Pointer__PELStatus_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Status), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Visual), 0);
}

uType* Pointer__PELHolder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Pointer__PELHolder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PELHolder", options);
    type->fp_build_ = Pointer__PELHolder_build;
    type->fp_ctor_ = (void*)Pointer__PELHolder__New1_fn;
    return type;
}

// public generated PELHolder() :1538
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this)
{
    __this->ctor_();
}

// public generated PELHolder New() :1538
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval)
{
    *__retval = Pointer__PELHolder::New1();
}

// public generated PELHolder() [instance] :1538
void Pointer__PELHolder::ctor_()
{
}

// public generated PELHolder New() [static] :1538
Pointer__PELHolder* Pointer__PELHolder::New1()
{
    Pointer__PELHolder* obj1 = (Pointer__PELHolder*)uNew(Pointer__PELHolder_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private enum Pointer.PELStatus :1532
uEnumType* Pointer__PELStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.Pointer.PELStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public partial static class Pointer :999
// {
// static Pointer() :1003
static void Pointer__cctor__fn(uType* __type)
{
    Pointer::_pressed_ = ::g::Fuse::Input::PointerPressed::New1();
    Pointer::_moved_ = ::g::Fuse::Input::PointerMoved::New1();
    Pointer::_released_ = ::g::Fuse::Input::PointerReleased::New1();
    Pointer::_entered_ = ::g::Fuse::Input::PointerEntered::New1();
    Pointer::_left_ = ::g::Fuse::Input::PointerLeft::New1();
    Pointer::_wheelMoved_ = ::g::Fuse::Input::PointerWheelMoved::New1();
    Pointer::_pointersDown_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>*/]));
    Pointer::_captures_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[21/*Uno.Collections.List<Fuse.Input.Capture>*/]));
    Pointer::_captureLockImpl_ = Pointer__CaptureLockImpl::New1();
    Pointer::_lastHitVisuals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[22/*Uno.Collections.Dictionary<int, Uno.Collections.List<Fuse.Input.Pointer.PELHolder>>*/]));
    Pointer::EventResponder((uObject*)Pointer__DefaultPointerEventResponder::New1());
}

static void Pointer_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Capture requires lostCallback Action");
    ::STRINGS[11] = uString::Const("Capture requires identity object");
    ::STRINGS[12] = uString::Const("Capture requires visual");
    ::STRINGS[13] = uString::Const("Capture can only be done on rooted enabled node");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno");
    ::STRINGS[14] = uString::Const("ModifyCapture");
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::Capture_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof(), NULL), NULL);
    ::TYPES[23] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::IDisposable_typeof();
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[29] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    type->SetFields(0,
        Pointer__CaptureLockImpl_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_captureLockImpl_, uFieldFlagsStatic,
        ::TYPES[21/*Uno.Collections.List<Fuse.Input.Capture>*/], (uintptr_t)&::g::Fuse::Input::Pointer::_captures_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerEntered_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_entered_, uFieldFlagsStatic,
        ::TYPES[22/*Uno.Collections.Dictionary<int, Uno.Collections.List<Fuse.Input.Pointer.PELHolder>>*/], (uintptr_t)&::g::Fuse::Input::Pointer::_lastHitVisuals_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerLeft_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_left_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_moved_, uFieldFlagsStatic,
        ::TYPES[20/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>*/], (uintptr_t)&::g::Fuse::Input::Pointer::_pointersDown_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_pressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_released_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerWheelMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_wheelMoved_, uFieldFlagsStatic,
        ::g::Uno::Float2_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_Coord_, uFieldFlagsStatic,
        ::TYPES[29/*Fuse.Input.IPointerEventResponder*/], (uintptr_t)&::g::Fuse::Input::Pointer::_EventResponder_, uFieldFlagsStatic);
}

uClassType* Pointer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Pointer", options);
    type->fp_build_ = Pointer_build;
    type->fp_cctor_ = Pointer__cctor__fn;
    return type;
}

// private static Fuse.Input.Pointer.CaptureLockImpl CaptureLock() :1123
void Pointer__CaptureLock_fn(Pointer__CaptureLockImpl** __retval)
{
    *__retval = Pointer::CaptureLock();
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes) :1562
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer::CheckFocus(args, nodes);
}

// public static generated float2 get_Coord() :1090
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval)
{
    *__retval = Pointer::Coord();
}

// private static generated void set_Coord(float2 value) :1090
void Pointer__set_Coord_fn(::g::Uno::Float2* value)
{
    Pointer::Coord(*value);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() :1018
void Pointer__get_Entered_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() :1001
void Pointer__get_EventResponder_fn(uObject** __retval)
{
    *__retval = Pointer::EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) :1001
void Pointer__set_EventResponder_fn(uObject* value)
{
    Pointer::EventResponder(value);
}

// internal static Fuse.Input.Capture GetCapture(object identity) :1158
void Pointer__GetCapture_fn(uObject* identity, ::g::Fuse::Input::Capture** __retval)
{
    *__retval = Pointer::GetCapture(identity);
}

// private static Fuse.Input.Capture GetFirstCapture(Fuse.Input.CaptureType type, int pointIndex, object identity) :1188
void Pointer__GetFirstCapture_fn(int* type, int* pointIndex, uObject* identity, ::g::Fuse::Input::Capture** __retval)
{
    *__retval = Pointer::GetFirstCapture(*type, *pointIndex, identity);
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) :1547
void Pointer__GetLastHitList_fn(int* pointIndex, ::g::Uno::Collections::List** __retval)
{
    *__retval = Pointer::GetLastHitList(*pointIndex);
}

// internal static Fuse.Input.Capture GetPrimaryCapture(int pointIndex) :1128
void Pointer__GetPrimaryCapture_fn(int* pointIndex, ::g::Fuse::Input::Capture** __retval)
{
    *__retval = Pointer::GetPrimaryCapture(*pointIndex);
}

// private static bool IsCaptureAllowed(Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) :1210
void Pointer__IsCaptureAllowed_fn(int* type, ::g::Fuse::Visual* visual, int* pointIndex, uObject* identity, bool* __retval)
{
    *__retval = Pointer::IsCaptureAllowed(*type, visual, *pointIndex, identity);
}

// private static bool IsCaptureAllowedAgainst(Fuse.Input.Capture current, Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) :1227
void Pointer__IsCaptureAllowedAgainst_fn(::g::Fuse::Input::Capture* current, int* type, ::g::Fuse::Visual* visual, int* pointIndex, uObject* identity, bool* __retval)
{
    *__retval = Pointer::IsCaptureAllowedAgainst(current, *type, visual, *pointIndex, identity);
}

// public static bool IsCaptured(Fuse.Input.CaptureType type, int pointIndex, object identity) :1183
void Pointer__IsCaptured_fn(int* type, int* pointIndex, uObject* identity, bool* __retval)
{
    *__retval = Pointer::IsCaptured(*type, *pointIndex, identity);
}

// public static bool IsPressed() :1079
void Pointer__IsPressed_fn(bool* __retval)
{
    *__retval = Pointer::IsPressed();
}

// public static bool IsPressed(int pointIndex) :1084
void Pointer__IsPressed1_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsPressed1(*pointIndex);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() :1019
void Pointer__get_Left_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Left();
}

// internal static void LoseCapture(int pointIndex) :1289
void Pointer__LoseCapture_fn(int* pointIndex)
{
    Pointer::LoseCapture(*pointIndex);
}

// private static void LoseSoftCapturesTo(Fuse.Input.Capture to) :1245
void Pointer__LoseSoftCapturesTo_fn(::g::Fuse::Input::Capture* to)
{
    Pointer::LoseSoftCapturesTo(to);
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) :1502
void Pointer__MarkAncestorHits_fn(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer::MarkAncestorHits(hitObject, list);
}

// public static bool ModifyCapture(object identity, Fuse.Visual visual, Uno.Action lostCallback, Fuse.Input.CaptureType type, int pointIndex) :1312
void Pointer__ModifyCapture1_fn(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int* type, int* pointIndex, bool* __retval)
{
    *__retval = Pointer::ModifyCapture1(identity, visual, lostCallback, *type, *pointIndex);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() :1016
void Pointer__get_Moved_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Moved();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() :1015
void Pointer__get_Pressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Pressed();
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) :1478
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer::ProcessPointerEnterLeave(result, args);
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) :1406
void Pointer__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseMoved(root, data);
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) :1398
void Pointer__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaisePressed(root, data);
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) :1414
void Pointer__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseReleased(root, data);
}

// public static void ReleaseCapture(object identity) :1274
void Pointer__ReleaseCapture_fn(uObject* identity)
{
    Pointer::ReleaseCapture(identity);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() :1017
void Pointer__get_Released_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Released();
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root) :1440
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RoutePointerEvent(plainEvent, root);
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root) :1462
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RouteToHit(args, root);
}

uSStrong<Pointer__CaptureLockImpl*> Pointer::_captureLockImpl_;
uSStrong< ::g::Uno::Collections::List*> Pointer::_captures_;
uSStrong< ::g::Fuse::Input::PointerEntered*> Pointer::_entered_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_lastHitVisuals_;
uSStrong< ::g::Fuse::Input::PointerLeft*> Pointer::_left_;
uSStrong< ::g::Fuse::Input::PointerMoved*> Pointer::_moved_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_pointersDown_;
uSStrong< ::g::Fuse::Input::PointerPressed*> Pointer::_pressed_;
uSStrong< ::g::Fuse::Input::PointerReleased*> Pointer::_released_;
uSStrong< ::g::Fuse::Input::PointerWheelMoved*> Pointer::_wheelMoved_;
::g::Uno::Float2 Pointer::_Coord_;
uSStrong<uObject*> Pointer::_EventResponder_;

// private static Fuse.Input.Pointer.CaptureLockImpl CaptureLock() [static] :1123
Pointer__CaptureLockImpl* Pointer::CaptureLock()
{
    Pointer_typeof()->Init();
    return Pointer::_captureLockImpl();
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes) [static] :1562
void Pointer::CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* ret4;

    if (uPtr(args)->IsHandled())
        return;

    bool b = false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Visual>*/])); ++i)
        if (::g::Fuse::Input::Focus::HandlesFocusEvent((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[24/*Uno.Collections.IList<Fuse.Visual>*/]), uCRef<int>(i), &ret4), ret4)))
        {
            b = true;
            break;
        }

    if (!b)
        ::g::Fuse::Input::Focus::Release();
}

// internal static Fuse.Input.Capture GetCapture(object identity) [static] :1158
::g::Fuse::Input::Capture* Pointer::GetCapture(uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret6;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[25/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (int i = 0; i < uPtr(Pointer::_captures())->Count(); ++i)
        {
            ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret6), ret6);

            if (uPtr(c)->Deleted)
                continue;

            if (uPtr(c)->Identity() != identity)
                continue;

            return c;
        }
    }

    return NULL;
}

// private static Fuse.Input.Capture GetFirstCapture(Fuse.Input.CaptureType type, int pointIndex, object identity) [static] :1188
::g::Fuse::Input::Capture* Pointer::GetFirstCapture(int type, int pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret7;

    for (int i = 0; i < uPtr(Pointer::_captures())->Count(); ++i)
    {
        ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->Deleted)
            continue;

        if ((pointIndex >= 0) && !uPtr(c)->AcceptsPoint(pointIndex))
            continue;

        if ((identity != NULL) && (uPtr(c)->Identity() != identity))
            continue;

        if ((uPtr(c)->Type & type) != type)
            continue;

        return c;
    }

    return NULL;
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) [static] :1547
::g::Uno::Collections::List* Pointer::GetLastHitList(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret8;
    ::g::Uno::Collections::List* lastHitList = NULL;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Pointer::_lastHitVisuals()), uCRef<int>(pointIndex), (void**)(&lastHitList), &ret8), ret8))
    {
        lastHitList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Input.Pointer.PELHolder>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_lastHitVisuals()), uCRef<int>(pointIndex), lastHitList);
    }

    return lastHitList;
}

// internal static Fuse.Input.Capture GetPrimaryCapture(int pointIndex) [static] :1128
::g::Fuse::Input::Capture* Pointer::GetPrimaryCapture(int pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret9;
    ::g::Fuse::Input::Capture* best = NULL;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[25/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (int i = 0; i < uPtr(Pointer::_captures())->Count(); ++i)
        {
            ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret9), ret9);

            if (uPtr(c)->Deleted)
                continue;

            if (!uPtr(c)->AcceptsPoint(pointIndex))
                continue;

            if (!uPtr(c)->IsSuitable())
            {
                uPtr(uPtr(c)->LostCallback)->InvokeVoid();
                uPtr(cl)->Delete(c);
                continue;
            }

            int str = (best == NULL) ? 1 : uPtr(c)->CompareStrength(best);

            if (str > 0)
                best = c;
        }
    }

    return best;
}

// private static bool IsCaptureAllowed(Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) [static] :1210
bool Pointer::IsCaptureAllowed(int type, ::g::Fuse::Visual* visual, int pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret10;

    for (int i = 0; i < uPtr(Pointer::_captures())->Count(); ++i)
    {
        ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret10), ret10);

        if (uPtr(c)->Deleted)
            continue;

        if (!Pointer::IsCaptureAllowedAgainst(c, type, visual, pointIndex, identity))
            return false;
    }

    return true;
}

// private static bool IsCaptureAllowedAgainst(Fuse.Input.Capture current, Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) [static] :1227
bool Pointer::IsCaptureAllowedAgainst(::g::Fuse::Input::Capture* current, int type, ::g::Fuse::Visual* visual, int pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();

    if (uPtr(current)->Identity() == identity)
        return true;

    if (!uPtr(current)->AcceptsPoint(pointIndex))
        return true;

    if ((uPtr(current)->Type & 2) == 2)
        return ((visual == uPtr(current)->Visual()) && ((uPtr(current)->Type & 8) == 8)) && ((type & 8) == 8);

    return true;
}

// public static bool IsCaptured(Fuse.Input.CaptureType type, int pointIndex, object identity) [static] :1183
bool Pointer::IsCaptured(int type, int pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();
    return Pointer::GetFirstCapture(type, pointIndex, identity) != NULL;
}

// public static bool IsPressed() [static] :1079
bool Pointer::IsPressed()
{
    Pointer_typeof()->Init();
    return uPtr(Pointer::_pointersDown())->Count() > 0;
}

// public static bool IsPressed(int pointIndex) [static] :1084
bool Pointer::IsPressed1(int pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > ret11;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown()), &ret11), ret11); enum2.MoveNext(::TYPES[27/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<Pointer__PointerRecord*> > p = enum2.Current(::TYPES[27/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]);

        if (p.Key(::TYPES[28/*Uno.Collections.KeyValuePair<int, Fuse.Input.Pointer.PointerRecord>*/]) == pointIndex)
            return true;
    }

    return false;
}

// internal static void LoseCapture(int pointIndex) [static] :1289
void Pointer::LoseCapture(int pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret12;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[25/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (int i = uPtr(Pointer::_captures())->Count() - 1; i >= 0; --i)
        {
            ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret12), ret12);

            if (uPtr(c)->Deleted)
                continue;

            if (uPtr(c)->AcceptsPoint(pointIndex))
            {
                uPtr(uPtr(c)->LostCallback)->InvokeVoid();
                uPtr(cl)->Delete(c);
            }
        }
    }
}

// private static void LoseSoftCapturesTo(Fuse.Input.Capture to) [static] :1245
void Pointer::LoseSoftCapturesTo(::g::Fuse::Input::Capture* to)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret13;
    int ret14;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[25/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (int i = 0; i < uPtr(Pointer::_captures())->Count(); ++i)
        {
            ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret13), ret13);

            if (uPtr(c)->Deleted)
                continue;

            for (int p = 0; p < uPtr(uPtr(c)->PointIndex)->Count(); ++p)
                if (!Pointer::IsCaptureAllowedAgainst(to, uPtr(c)->Type, uPtr(c)->Visual(), (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(c)->PointIndex), uCRef<int>(p), &ret14), ret14), uPtr(c)->Identity()))
                {
                    uPtr(uPtr(c)->LostCallback)->InvokeVoid();
                    uPtr(cl)->Delete(c);
                    break;
                }
        }
    }
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) [static] :1502
void Pointer::MarkAncestorHits(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* collection3;
    Pointer__PELHolder* ret15;
    Pointer__PELHolder* ret16;
    Pointer__PELHolder* ret17;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret15), ret15))->Status = 1;

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i1 = 0; i1 < uPtr(list)->Count(); ++i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret16), ret16))->Visual == hitObject)
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret17), ret17))->Status = 2;
                found = true;
                break;
            }

        if (!found)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), (collection3 = Pointer__PELHolder::New1(), uPtr(collection3)->Visual = hitObject, uPtr(collection3)->Status = 0, collection3));

        hitObject = uPtr(hitObject)->Parent();
    }
}

// public static bool ModifyCapture(object identity, Fuse.Visual visual, Uno.Action lostCallback, Fuse.Input.CaptureType type, int pointIndex) [static] :1312
bool Pointer::ModifyCapture1(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int type, int pointIndex)
{
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Capture req...*/]));

    if (identity == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Capture req...*/]));

    if (visual == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"Capture req...*/]));

    if (!uPtr(visual)->IsContextEnabled() || !uPtr(visual)->IsRootingCompleted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[13/*"Capture can...*/], NULL, ::STRINGS[5/*"/Users/paul...*/], 1323, ::STRINGS[14/*"ModifyCapture"*/]);
        return false;
    }

    if (!Pointer::IsCaptureAllowed(type, visual, pointIndex, identity))
        return false;

    ::g::Fuse::Input::Capture* c = Pointer::GetCapture(identity);

    if (c != NULL)
        ;
    else
    {
        c = ::g::Fuse::Input::Capture::New1(visual, identity);
        ::g::Uno::Collections::List__Add_fn(uPtr(Pointer::_captures()), c);
    }

    uPtr(c)->Type = type;
    c->LostCallback = lostCallback;
    uPtr(c->PointIndex)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(c->PointIndex), uCRef<int>(pointIndex));
    Pointer::LoseSoftCapturesTo(c);
    return true;
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) [static] :1478
void Pointer::ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* ret18;
    Pointer__PELHolder* ret19;
    Pointer__PELHolder* ret20;
    Pointer__PELHolder* ret21;
    ::g::Uno::Collections::List* lastHitList = Pointer::GetLastHitList(uPtr(args)->PointIndex);
    Pointer::MarkAncestorHits((result == NULL) ? uCast< ::g::Fuse::Visual*>(NULL, ::TYPES[2/*Fuse.Visual*/]) : (::g::Fuse::Visual*)uPtr(result)->HitObject(), lastHitList);

    for (int j = uPtr(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret18), ret18))->Status != 1)
            continue;

        uPtr(Pointer::Left())->RaiseWithoutBubble(::g::Fuse::Input::PointerLeftArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret19), ret19))->Visual), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j1 = 0; j1 < lastHitList->Count(); ++j1)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret20), ret20))->Status != 0)
            continue;

        uPtr(Pointer::Entered())->RaiseWithoutBubble(::g::Fuse::Input::PointerEnteredArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret21), ret21))->Visual), 1);
    }
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1406
bool Pointer::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerMovedArgs* e = ::g::Fuse::Input::PointerMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);
    return e->IsHandled();
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1398
bool Pointer::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerPressedArgs* e = ::g::Fuse::Input::PointerPressedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);
    return e->IsHandled();
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1414
bool Pointer::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerReleasedArgs* e = ::g::Fuse::Input::PointerReleasedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);

    if (uPtr(data)->PointerType == 2)
        Pointer::ProcessPointerEnterLeave(NULL, data);

    return e->IsHandled();
}

// public static void ReleaseCapture(object identity) [static] :1274
void Pointer::ReleaseCapture(uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret22;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[25/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (int i = uPtr(Pointer::_captures())->Count() - 1; i >= 0; --i)
        {
            ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures()), uCRef<int>(i), &ret22), ret22);

            if (uPtr(c)->Deleted)
                continue;

            if (uPtr(c)->Identity() == identity)
                uPtr(cl)->Delete(c);
        }
    }
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root) [static] :1440
::g::Fuse::Visual* Pointer::RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = root;
    bool toHit = true;
    ::g::Fuse::Input::Capture* c = Pointer::GetPrimaryCapture(uPtr(plainEvent)->PointIndex);

    if (c != NULL)
    {
        target = uPtr(c)->Visual();
        toHit = (c->Type & 4) == 4;
    }

    if (toHit)
    {
        ::g::Fuse::Visual* n = Pointer::RouteToHit(plainEvent, target);

        if (n != NULL)
            target = n;
    }

    return target;
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root) [static] :1462
::g::Fuse::Visual* Pointer::RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::HitTestResult* result = ::g::Fuse::Input::HitTestHelpers::HitTestNearest(root, uPtr(args)->WindowPoint);

    while ((result != NULL) && !uPtr(uPtr(result)->HitObject())->IsContextEnabled())
        uPtr(result)->HitObject(uPtr(uPtr(result)->HitObject())->Parent());

    Pointer::ProcessPointerEnterLeave(result, args);

    if (result == NULL)
        return NULL;

    return uPtr(result)->HitObject();
}

// public static generated float2 get_Coord() [static] :1090
::g::Uno::Float2 Pointer::Coord()
{
    Pointer_typeof()->Init();
    return Pointer::_Coord();
}

// private static generated void set_Coord(float2 value) [static] :1090
void Pointer::Coord(::g::Uno::Float2 value)
{
    Pointer_typeof()->Init();
    Pointer::_Coord() = value;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() [static] :1018
::g::Fuse::VisualEvent* Pointer::Entered()
{
    Pointer_typeof()->Init();
    return Pointer::_entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() [static] :1001
uObject* Pointer::EventResponder()
{
    Pointer_typeof()->Init();
    return Pointer::_EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) [static] :1001
void Pointer::EventResponder(uObject* value)
{
    Pointer_typeof()->Init();
    Pointer::_EventResponder() = value;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() [static] :1019
::g::Fuse::VisualEvent* Pointer::Left()
{
    Pointer_typeof()->Init();
    return Pointer::_left();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() [static] :1016
::g::Fuse::VisualEvent* Pointer::Moved()
{
    Pointer_typeof()->Init();
    return Pointer::_moved();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() [static] :1015
::g::Fuse::VisualEvent* Pointer::Pressed()
{
    Pointer_typeof()->Init();
    return Pointer::_pressed();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() [static] :1017
::g::Fuse::VisualEvent* Pointer::Released()
{
    Pointer_typeof()->Init();
    return Pointer::_released();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerEntered :1905
// {
static void PointerEntered_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerEntered_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerEntered);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerEntered", options);
    type->fp_build_ = PointerEntered_build;
    type->fp_ctor_ = (void*)PointerEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerEntered__Invoke_fn;
    return type;
}

// public generated PointerEntered() :1905
void PointerEntered__ctor_1_fn(PointerEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerEnteredHandler handler, object sender, Fuse.Input.PointerEnteredArgs args) :1907
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerEntered New() :1905
void PointerEntered__New1_fn(PointerEntered** __retval)
{
    *__retval = PointerEntered::New1();
}

// public generated PointerEntered() [instance] :1905
void PointerEntered::ctor_1()
{
    ctor_();
}

// public generated PointerEntered New() [static] :1905
PointerEntered* PointerEntered::New1()
{
    PointerEntered* obj1 = (PointerEntered*)uNew(PointerEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerEnteredArgs :1897
// {
static void PointerEnteredArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEnteredArgs", options);
    type->fp_build_ = PointerEnteredArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1899
void PointerEnteredArgs__ctor_3_fn(PointerEnteredArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1899
void PointerEnteredArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerEnteredArgs** __retval)
{
    *__retval = PointerEnteredArgs::New3(data, visual);
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1899
void PointerEnteredArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :1899
PointerEnteredArgs* PointerEnteredArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerEnteredArgs* obj1 = (PointerEnteredArgs*)uNew(PointerEnteredArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerEnteredHandler(object sender, Fuse.Input.PointerEnteredArgs args) :1903
uDelegateType* PointerEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerEnteredArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract class PointerEventArgs :1731
// {
static void PointerEventArgs_build(uType* type)
{
    ::STRINGS[15] = uString::Const("x");
    ::STRINGS[16] = uString::Const("y");
    ::STRINGS[17] = uString::Const("index");
    ::STRINGS[18] = uString::Const("localX");
    ::STRINGS[19] = uString::Const("localY");
    ::TYPES[30] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Input::PointerEventData_typeof(), offsetof(::g::Fuse::Input::PointerEventArgs, _data), 0);
}

::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEventArgs", options);
    type->fp_build_ = PointerEventArgs_build;
    type->fp_Serialize = (void(*)(::g::Fuse::VisualEventArgs*, uObject*))PointerEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1783
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(data, visual);
}

// internal Fuse.Input.PointerEventData get_Data() :1735
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->Data();
}

// public bool IsHardCapturedTo(object behavior) :1778
void PointerEventArgs__IsHardCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval)
{
    *__retval = __this->IsHardCapturedTo(behavior);
}

// public Uno.Platform.PointerType get_PointerType() :1743
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public int get_PointIndex() :1742
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointIndex();
}

// public void ReleaseCapture(object behavior) :1758
void PointerEventArgs__ReleaseCapture_fn(PointerEventArgs* __this, uObject* behavior)
{
    __this->ReleaseCapture(behavior);
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s) :1788
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::TYPES[30/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[15/*"x"*/], (double)__this->WindowPoint().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[30/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[16/*"y"*/], (double)__this->WindowPoint().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddInt(uInterface(s, ::TYPES[30/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"index"*/], __this->PointIndex());
    ::g::Uno::Float2 localPoint = uPtr(__this->Visual())->WindowToLocal(__this->WindowPoint());
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[30/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[18/*"localX"*/], (double)localPoint.X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[30/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[19/*"localY"*/], (double)localPoint.Y);
}

// public double get_Timestamp() :1737
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) :1746
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TryHardCapture(identity, lostCallback, captureVisual);
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) :1752
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TrySoftCapture(identity, lostCallback, captureVisual);
}

// public float2 get_WindowPoint() :1739
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1783
void PointerEventArgs::ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_1(visual);
    _data = data;
}

// internal Fuse.Input.PointerEventData get_Data() [instance] :1735
::g::Fuse::Input::PointerEventData* PointerEventArgs::Data()
{
    return _data;
}

// public bool IsHardCapturedTo(object behavior) [instance] :1778
bool PointerEventArgs::IsHardCapturedTo(uObject* behavior)
{
    return ::g::Fuse::Input::Pointer::IsCaptured(2, PointIndex(), behavior);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :1743
int PointerEventArgs::PointerType()
{
    return uPtr(_data)->PointerType;
}

// public int get_PointIndex() [instance] :1742
int PointerEventArgs::PointIndex()
{
    return uPtr(_data)->PointIndex;
}

// public void ReleaseCapture(object behavior) [instance] :1758
void PointerEventArgs::ReleaseCapture(uObject* behavior)
{
    ::g::Fuse::Input::Pointer::ReleaseCapture(behavior);
}

// public double get_Timestamp() [instance] :1737
double PointerEventArgs::Timestamp()
{
    return uPtr(_data)->Timestamp;
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance] :1746
bool PointerEventArgs::TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    return ::g::Fuse::Input::Pointer::ModifyCapture1(identity, (captureVisual != NULL) ? captureVisual : (::g::Fuse::Visual*)Visual(), lostCallback, 2, PointIndex());
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance] :1752
bool PointerEventArgs::TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    return ::g::Fuse::Input::Pointer::ModifyCapture1(identity, (captureVisual != NULL) ? captureVisual : (::g::Fuse::Visual*)Visual(), lostCallback, 1, PointIndex());
}

// public float2 get_WindowPoint() [instance] :1739
::g::Uno::Float2 PointerEventArgs::WindowPoint()
{
    return uPtr(_data)->WindowPoint;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerEventData :1720
// {
static void PointerEventData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::PointerEventData, IsPrimary), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointerType), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointIndex), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::PointerEventData, Timestamp), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WindowPoint), 0);
}

uType* PointerEventData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(PointerEventData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.PointerEventData", options);
    type->fp_build_ = PointerEventData_build;
    type->fp_ctor_ = (void*)PointerEventData__New1_fn;
    return type;
}

// public generated PointerEventData() :1720
void PointerEventData__ctor__fn(PointerEventData* __this)
{
    __this->ctor_();
}

// public generated PointerEventData New() :1720
void PointerEventData__New1_fn(PointerEventData** __retval)
{
    *__retval = PointerEventData::New1();
}

// public generated PointerEventData() [instance] :1720
void PointerEventData::ctor_()
{
}

// public generated PointerEventData New() [static] :1720
PointerEventData* PointerEventData::New1()
{
    PointerEventData* obj1 = (PointerEventData*)uNew(PointerEventData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerLeft :1925
// {
static void PointerLeft_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerLeft_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerLeft);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerLeft", options);
    type->fp_build_ = PointerLeft_build;
    type->fp_ctor_ = (void*)PointerLeft__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerLeft__Invoke_fn;
    return type;
}

// public generated PointerLeft() :1925
void PointerLeft__ctor_1_fn(PointerLeft* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerLeftHandler handler, object sender, Fuse.Input.PointerLeftArgs args) :1927
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerLeft New() :1925
void PointerLeft__New1_fn(PointerLeft** __retval)
{
    *__retval = PointerLeft::New1();
}

// public generated PointerLeft() [instance] :1925
void PointerLeft::ctor_1()
{
    ctor_();
}

// public generated PointerLeft New() [static] :1925
PointerLeft* PointerLeft::New1()
{
    PointerLeft* obj1 = (PointerLeft*)uNew(PointerLeft_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerLeftArgs :1916
// {
static void PointerLeftArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerLeftArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerLeftArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerLeftArgs", options);
    type->fp_build_ = PointerLeftArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1918
void PointerLeftArgs__ctor_3_fn(PointerLeftArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1918
void PointerLeftArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerLeftArgs** __retval)
{
    *__retval = PointerLeftArgs::New3(data, visual);
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1918
void PointerLeftArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :1918
PointerLeftArgs* PointerLeftArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerLeftArgs* obj1 = (PointerLeftArgs*)uNew(PointerLeftArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerLeftHandler(object sender, Fuse.Input.PointerLeftArgs args) :1923
uDelegateType* PointerLeftHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerLeftHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerLeftArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerMoved :1866
// {
static void PointerMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerMoved", options);
    type->fp_build_ = PointerMoved_build;
    type->fp_ctor_ = (void*)PointerMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerMoved__Invoke_fn;
    return type;
}

// public generated PointerMoved() :1866
void PointerMoved__ctor_1_fn(PointerMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerMovedHandler handler, object sender, Fuse.Input.PointerMovedArgs args) :1868
void PointerMoved__Invoke_fn(PointerMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerMoved New() :1866
void PointerMoved__New1_fn(PointerMoved** __retval)
{
    *__retval = PointerMoved::New1();
}

// public generated PointerMoved() [instance] :1866
void PointerMoved::ctor_1()
{
    ctor_();
}

// public generated PointerMoved New() [static] :1866
PointerMoved* PointerMoved::New1()
{
    PointerMoved* obj1 = (PointerMoved*)uNew(PointerMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerMovedArgs :1857
// {
static void PointerMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerMovedArgs", options);
    type->fp_build_ = PointerMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1859
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1859
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerMovedArgs** __retval)
{
    *__retval = PointerMovedArgs::New3(data, visual);
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1859
void PointerMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :1859
PointerMovedArgs* PointerMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerMovedArgs* obj1 = (PointerMovedArgs*)uNew(PointerMovedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerMovedHandler(object sender, Fuse.Input.PointerMovedArgs args) :1864
uDelegateType* PointerMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerMovedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerPressed :1846
// {
static void PointerPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerPressed", options);
    type->fp_build_ = PointerPressed_build;
    type->fp_ctor_ = (void*)PointerPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerPressed__Invoke_fn;
    return type;
}

// public generated PointerPressed() :1846
void PointerPressed__ctor_1_fn(PointerPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerPressedHandler handler, object sender, Fuse.Input.PointerPressedArgs args) :1848
void PointerPressed__Invoke_fn(PointerPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerPressed New() :1846
void PointerPressed__New1_fn(PointerPressed** __retval)
{
    *__retval = PointerPressed::New1();
}

// public generated PointerPressed() [instance] :1846
void PointerPressed::ctor_1()
{
    ctor_();
}

// public generated PointerPressed New() [static] :1846
PointerPressed* PointerPressed::New1()
{
    PointerPressed* obj1 = (PointerPressed*)uNew(PointerPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerPressedArgs :1837
// {
static void PointerPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerPressedArgs", options);
    type->fp_build_ = PointerPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1839
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1839
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerPressedArgs** __retval)
{
    *__retval = PointerPressedArgs::New3(data, visual);
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1839
void PointerPressedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :1839
PointerPressedArgs* PointerPressedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerPressedArgs* obj1 = (PointerPressedArgs*)uNew(PointerPressedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerPressedHandler(object sender, Fuse.Input.PointerPressedArgs args) :1844
uDelegateType* PointerPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerPressedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class Pointer.PointerRecord :1067
// {
static void Pointer__PointerRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, DistanceMoved), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, TimeAppeared), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WasHandled), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WindowPoint), 0);
}

uType* Pointer__PointerRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Pointer__PointerRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PointerRecord", options);
    type->fp_build_ = Pointer__PointerRecord_build;
    type->fp_ctor_ = (void*)Pointer__PointerRecord__New1_fn;
    return type;
}

// public generated PointerRecord() :1067
void Pointer__PointerRecord__ctor__fn(Pointer__PointerRecord* __this)
{
    __this->ctor_();
}

// public generated PointerRecord New() :1067
void Pointer__PointerRecord__New1_fn(Pointer__PointerRecord** __retval)
{
    *__retval = Pointer__PointerRecord::New1();
}

// public generated PointerRecord() [instance] :1067
void Pointer__PointerRecord::ctor_()
{
    TimeAppeared = ::g::Uno::Diagnostics::Clock::GetSeconds();
}

// public generated PointerRecord New() [static] :1067
Pointer__PointerRecord* Pointer__PointerRecord::New1()
{
    Pointer__PointerRecord* obj1 = (Pointer__PointerRecord*)uNew(Pointer__PointerRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerReleased :1886
// {
static void PointerReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerReleased", options);
    type->fp_build_ = PointerReleased_build;
    type->fp_ctor_ = (void*)PointerReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerReleased__Invoke_fn;
    return type;
}

// public generated PointerReleased() :1886
void PointerReleased__ctor_1_fn(PointerReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerReleasedHandler handler, object sender, Fuse.Input.PointerReleasedArgs args) :1888
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerReleased New() :1886
void PointerReleased__New1_fn(PointerReleased** __retval)
{
    *__retval = PointerReleased::New1();
}

// public generated PointerReleased() [instance] :1886
void PointerReleased::ctor_1()
{
    ctor_();
}

// public generated PointerReleased New() [static] :1886
PointerReleased* PointerReleased::New1()
{
    PointerReleased* obj1 = (PointerReleased*)uNew(PointerReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerReleasedArgs :1877
// {
static void PointerReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerReleasedArgs", options);
    type->fp_build_ = PointerReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1879
void PointerReleasedArgs__ctor_3_fn(PointerReleasedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :1879
void PointerReleasedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerReleasedArgs** __retval)
{
    *__retval = PointerReleasedArgs::New3(data, visual);
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :1879
void PointerReleasedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :1879
PointerReleasedArgs* PointerReleasedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerReleasedArgs* obj1 = (PointerReleasedArgs*)uNew(PointerReleasedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerReleasedHandler(object sender, Fuse.Input.PointerReleasedArgs args) :1884
uDelegateType* PointerReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerReleasedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class PointerWheelMoved :1945
// {
static void PointerWheelMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerWheelMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerWheelMoved", options);
    type->fp_build_ = PointerWheelMoved_build;
    type->fp_ctor_ = (void*)PointerWheelMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerWheelMoved__Invoke_fn;
    return type;
}

// public generated PointerWheelMoved() :1945
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerWheelMovedHandler handler, object sender, Fuse.Input.PointerWheelMovedArgs args) :1947
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerWheelMoved New() :1945
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval)
{
    *__retval = PointerWheelMoved::New1();
}

// public generated PointerWheelMoved() [instance] :1945
void PointerWheelMoved::ctor_1()
{
    ctor_();
}

// public generated PointerWheelMoved New() [static] :1945
PointerWheelMoved* PointerWheelMoved::New1()
{
    PointerWheelMoved* obj1 = (PointerWheelMoved*)uNew(PointerWheelMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class PointerWheelMovedArgs :1936
// {
static void PointerWheelMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerWheelMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerWheelMovedArgs", options);
    type->fp_build_ = PointerWheelMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// public delegate void PointerWheelMovedHandler(object sender, Fuse.Input.PointerWheelMovedArgs args) :1943
uDelegateType* PointerWheelMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerWheelMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerWheelMovedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class FocusPrediction.PredictFilter :28
// {
static void FocusPrediction__PredictFilter_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Input::FocusPrediction__PredictFilter, _filter), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::FocusPrediction__PredictFilter, _origin), 0);
}

uType* FocusPrediction__PredictFilter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusPrediction__PredictFilter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.FocusPrediction.PredictFilter", options);
    type->fp_build_ = FocusPrediction__PredictFilter_build;
    return type;
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) :33
void FocusPrediction__PredictFilter__ctor__fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Visual* origin, uDelegate* filter)
{
    __this->ctor_(origin, filter);
}

// public bool Filter(Fuse.Node node) :39
void FocusPrediction__PredictFilter__Filter_fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->Filter(node);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) :33
void FocusPrediction__PredictFilter__New1_fn(::g::Fuse::Visual* origin, uDelegate* filter, FocusPrediction__PredictFilter** __retval)
{
    *__retval = FocusPrediction__PredictFilter::New1(origin, filter);
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [instance] :33
void FocusPrediction__PredictFilter::ctor_(::g::Fuse::Visual* origin, uDelegate* filter)
{
    _origin = origin;
    _filter = filter;
}

// public bool Filter(Fuse.Node node) [instance] :39
bool FocusPrediction__PredictFilter::Filter(::g::Fuse::Node* node)
{
    bool ret2;
    return (node != _origin) && (uPtr(_filter)->Invoke(&ret2, 1, node), ret2);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [static] :33
FocusPrediction__PredictFilter* FocusPrediction__PredictFilter::New1(::g::Fuse::Visual* origin, uDelegate* filter)
{
    FocusPrediction__PredictFilter* obj1 = (FocusPrediction__PredictFilter*)uNew(FocusPrediction__PredictFilter_typeof());
    obj1->ctor_(origin, filter);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class SelectionQuery :718
// {
static void SelectionQuery_build(uType* type)
{
    ::TYPES[31] = ::g::Fuse::HitTestCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestResult_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, _result), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, count), 0);
}

uType* SelectionQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SelectionQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.SelectionQuery", options);
    type->fp_build_ = SelectionQuery_build;
    type->fp_ctor_ = (void*)SelectionQuery__New1_fn;
    return type;
}

// public generated SelectionQuery() :718
void SelectionQuery__ctor__fn(SelectionQuery* __this)
{
    __this->ctor_();
}

// public generated SelectionQuery New() :718
void SelectionQuery__New1_fn(SelectionQuery** __retval)
{
    *__retval = SelectionQuery::New1();
}

// private void Select(Fuse.HitTestResult result) :731
void SelectionQuery__Select_fn(SelectionQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point) :722
void SelectionQuery__Select1_fn(SelectionQuery* __this, ::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = __this->Select1(root, *point);
}

// public generated SelectionQuery() [instance] :718
void SelectionQuery::ctor_()
{
}

// private void Select(Fuse.HitTestResult result) [instance] :731
void SelectionQuery::Select(::g::Fuse::HitTestResult* result)
{
    count++;

    if ((_result == NULL) || ((uPtr(_result)->HasHitDistance() && uPtr(result)->HasHitDistance()) && (uPtr(result)->HitDistance() < uPtr(_result)->HitDistance())))
        _result = result;
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point) [instance] :722
::g::Fuse::HitTestResult* SelectionQuery::Select1(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[31/*Fuse.HitTestCallback*/], (void*)SelectionQuery__Select_fn, this));
    uPtr(root)->HitTest(args);
    args->Dispose();
    return _result;
}

// public generated SelectionQuery New() [static] :718
SelectionQuery* SelectionQuery::New1()
{
    SelectionQuery* obj1 = (SelectionQuery*)uNew(SelectionQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Input
