// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-11768b55.h>
#include <Fuse.Controls.Native.-118b98c3.h>
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-3800373f.h>
#include <Fuse.Controls.Native.-6c93d881.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-b1307a12.h>
#include <Fuse.Controls.Native.-b2e724e6.h>
#include <Fuse.Controls.Native.-be81896e.h>
#include <Fuse.Controls.Native.-c578532e.h>
#include <Fuse.Controls.Native.-d04e9e71.h>
#include <Fuse.Controls.Native.-dcf1df13.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.Resources.ImageSource.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface ICircleView :460
// {
uInterfaceType* ICircleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ICircleView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IGraphicsView :365
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IImageView :443
// {
uInterfaceType* IImageView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IImageView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface ILabelView :371
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed extern class ImageHandle :41
// {
static void ImageHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageHandle is disposed");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ImageHandle_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _isDisposed), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _pinCount), 0);
}

ImageHandle_type* ImageHandle_typeof()
{
    static uSStrong<ImageHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageHandle);
    options.TypeSize = sizeof(ImageHandle_type);
    type = (ImageHandle_type*)uClassType::New("Fuse.Controls.Native.ImageHandle", options);
    type->fp_build_ = ImageHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageHandle__Dispose_fn;
    return type;
}

// public ImageHandle(string name, object handle) :62
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle)
{
    __this->ctor_(name, handle);
}

// public void Dispose() :75
void ImageHandle__Dispose_fn(ImageHandle* __this)
{
    __this->Dispose();
}

// public object get_Handle() :45
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public string get_Name() :55
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ImageHandle New(string name, object handle) :62
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval)
{
    *__retval = ImageHandle::New1(name, handle);
}

// public void Pin() :69
void ImageHandle__Pin_fn(ImageHandle* __this)
{
    __this->Pin();
}

// public ImageHandle(string name, object handle) [instance] :62
void ImageHandle::ctor_(uString* name, uObject* handle)
{
    _handle = handle;
    _name = name;
    Pin();
}

// public void Dispose() [instance] :75
void ImageHandle::Dispose()
{
    if (!_isDisposed)
    {
        _pinCount--;

        if (_pinCount == 0)
        {
            ::g::Fuse::Controls::Native::ImageLoader::ReleaseHandle(this);
            _isDisposed = true;
        }
    }
}

// public object get_Handle() [instance] :45
uObject* ImageHandle::Handle()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"ImageHandle...*/]));

    return _handle;
}

// public string get_Name() [instance] :55
uString* ImageHandle::Name()
{
    return _name;
}

// public void Pin() [instance] :69
void ImageHandle::Pin()
{
    _pinCount++;
}

// public ImageHandle New(string name, object handle) [static] :62
ImageHandle* ImageHandle::New1(uString* name, uObject* handle)
{
    ImageHandle* obj1 = (ImageHandle*)uNew(ImageHandle_typeof());
    obj1->ctor_(name, handle);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IRectangleView :455
// {
uInterfaceType* IRectangleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRectangleView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IScrollView :468
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IScrollViewHost :474
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IShapeView :450
// {
uInterfaceType* IShapeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IShapeView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface ITextView :376
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IToggleView :397
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// public abstract interface IView :361
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed extern class NativeRootViewport :818
// {
static void NativeRootViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RootViewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::RootViewport_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::RootViewport_type, interface9),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface10),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::RootViewport_type, interface11),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface12));
    type->SetFields(63,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), offsetof(::g::Fuse::Controls::Native::NativeRootViewport, _rootView), 0);
}

::g::Fuse::RootViewport_type* NativeRootViewport_typeof()
{
    static uSStrong< ::g::Fuse::RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 64;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(NativeRootViewport);
    options.TypeSize = sizeof(::g::Fuse::RootViewport_type);
    type = (::g::Fuse::RootViewport_type*)uClassType::New("Fuse.Controls.Native.NativeRootViewport", options);
    type->fp_build_ = NativeRootViewport_build;
    type->interface11.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface10.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface10.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface12.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface12.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView) :832
void NativeRootViewport__ctor_5_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    __this->ctor_5(rootView);
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView) :832
void NativeRootViewport__New4_fn(::g::Fuse::Controls::Native::ViewHandle* rootView, NativeRootViewport** __retval)
{
    *__retval = NativeRootViewport::New4(rootView);
}

// public Fuse.Controls.Native.ViewHandle get_RootView() :822
void NativeRootViewport__get_RootView_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = __this->RootView();
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView) [instance] :832
void NativeRootViewport::ctor_5(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    ctor_3();
    _rootView = rootView;
}

// public Fuse.Controls.Native.ViewHandle get_RootView() [instance] :822
::g::Fuse::Controls::Native::ViewHandle* NativeRootViewport::RootView()
{
    return _rootView;
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView) [static] :832
NativeRootViewport* NativeRootViewport::New4(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    NativeRootViewport* obj2 = (NativeRootViewport*)uNew(NativeRootViewport_typeof());
    obj2->ctor_5(rootView);
    return obj2;
}
// }

}}}} // ::g::Fuse::Controls::Native
