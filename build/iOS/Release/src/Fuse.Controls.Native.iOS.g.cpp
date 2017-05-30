// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-4c195cb7.h>
#include <Fuse.Controls.Native.-8c20fe6.h>
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.-9b8fa15e.h>
#include <Fuse.Controls.Native.-a3bae2d8.h>
#include <Fuse.Controls.Native.-e7f294af.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :147
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract extern class LeafView :1319
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface1));
    type->SetFields(7);
}

::g::Fuse::Controls::Native::iOS::View_type* LeafView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::View_type);
    type = (::g::Fuse::Controls::Native::iOS::View_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1321
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :1321
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal static extern class NativeFocus :153
// {
// static NativeFocus() :153
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void RaiseFocusGained(ObjC.Object handle) :169
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :177
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void RaiseFocusGained(ObjC.Object handle) [static] :169
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :177
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed extern class OSVersion :1157
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Patch), 0);
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :1162
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :1162
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :1168
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :1162
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :1162
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :1177
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// public enum UITouch.TouchPhase :1006
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract extern class View :3245
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(6,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _handle), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle) :3251
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_2(handle);
}

// protected View(ObjC.Object handle, bool isLeafView) :3253
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView)
{
    __this->ctor_3(handle, *isLeafView);
}

// public ObjC.Object get_Handle() :3247
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle) [instance] :3251
void View::ctor_2(::g::ObjC::Object* handle)
{
    ctor_3(handle, false);
}

// protected View(ObjC.Object handle, bool isLeafView) [instance] :3253
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView)
{
    ctor_1(handle, isLeafView);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :3247
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
