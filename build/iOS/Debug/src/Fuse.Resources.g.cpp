// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.Htt-2465a87a.h>
#include <Experimental.Http.HttpLoader.h>
#include <Experimental.TextureL-b6dfce5c.h>
#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Double-f01499f.h>
#include <Fuse.Resources.FileIm-3dfab082.h>
#include <Fuse.Resources.FileIm-450e0bee.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileIm-b247fd74.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.FloatR-da59ced4.h>
#include <Fuse.Resources.Generi-b2a7709f.h>
#include <Fuse.Resources.HttpIm-93bb70f8.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.HttpIm-c131ad92.h>
#include <Fuse.Resources.HttpIm-cfc77adc.h>
#include <Fuse.Resources.ImageS-355caaa1.h>
#include <Fuse.Resources.ImageS-87193ac7.h>
#include <Fuse.Resources.ImageS-a985306c.h>
#include <Fuse.Resources.ImageS-d58bb329.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.IntRes-305acbb5.h>
#include <Fuse.Resources.IResou-d55ce6c3.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.Loadin-4ba1d630.h>
#include <Fuse.Resources.Loadin-51208ece.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.Resources.Numeri-f2317bed.h>
#include <Fuse.Resources.ProxyI-8b63b1ea.h>
#include <Fuse.Resources.Resour-7da5075.h>
#include <Fuse.Resources.Resour-dcba2ee7.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <Fuse.Resources.Textur-749306c5.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[17];
static uType* TYPES[39];

namespace g{
namespace Fuse{
namespace Resources{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class FileImageSourceImpl.BackgroundLoad :236
// {
static void FileImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _done), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _fail), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _file), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* FileImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FileImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = FileImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :242
void FileImageSourceImpl__BackgroundLoad__ctor__fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(file, done, fail);
}

// private void GWDoneCallback(texture2D tex) :265
void FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :242
void FileImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail, FileImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = FileImageSourceImpl__BackgroundLoad::New1(file, done, fail);
}

// public void Run() :250
void FileImageSourceImpl__BackgroundLoad__Run_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :274
void FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :279
void FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :242
void FileImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    _file = file;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :265
void FileImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this));
}

// public void Run() [instance] :250
void FileImageSourceImpl__BackgroundLoad::Run()
{
    try
    {
        uArray* data = uPtr(_file)->ReadAllBytes();
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this));
    }
}

// private void UIDoneCallback() [instance] :274
void FileImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :279
void FileImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :242
FileImageSourceImpl__BackgroundLoad* FileImageSourceImpl__BackgroundLoad::New1(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    FileImageSourceImpl__BackgroundLoad* obj1 = (FileImageSourceImpl__BackgroundLoad*)uNew(FileImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(file, done, fail);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class HttpImageSourceImpl.BackgroundLoad :436
// {
static void HttpImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _contentType), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _data), 0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _done), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _fail), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* HttpImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = HttpImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :443
void HttpImageSourceImpl__BackgroundLoad__ctor__fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(data, contentType, done, fail);
}

// private void GWDoneCallback(texture2D tex) :466
void HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :443
void HttpImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail, HttpImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = HttpImageSourceImpl__BackgroundLoad::New1(data, contentType, done, fail);
}

// public void Run() :452
void HttpImageSourceImpl__BackgroundLoad__Run_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :475
void HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :480
void HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :443
void HttpImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    _data = data;
    _contentType = contentType;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :466
void HttpImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this), 0);
}

// public void Run() [instance] :452
void HttpImageSourceImpl__BackgroundLoad::Run()
{
    try
    {
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DContentType(_data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this), 0);
    }
}

// private void UIDoneCallback() [instance] :475
void HttpImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :480
void HttpImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :443
HttpImageSourceImpl__BackgroundLoad* HttpImageSourceImpl__BackgroundLoad::New1(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    HttpImageSourceImpl__BackgroundLoad* obj1 = (HttpImageSourceImpl__BackgroundLoad*)uNew(HttpImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(data, contentType, done, fail);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason :689
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// internal static class DisposalManager :9
// {
// static DisposalManager() :9
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

static void DisposalManager_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/], (uintptr_t)&::g::Fuse::Resources::DisposalManager::_items_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/], (uintptr_t)&::g::Fuse::Resources::DisposalManager::_softDisposables_, uFieldFlagsStatic);
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_build_ = DisposalManager_build;
    type->fp_cctor_ = DisposalManager__cctor__fn;
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item) :20
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item) :103
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) :77
void DisposalManager__Clean_fn(int* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item) :31
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// private static void Update() :56
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach() :39
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

bool DisposalManager::_actionAdded_;
int DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static] :20
void DisposalManager::Add(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items()), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static] :103
void DisposalManager::Add1(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables()), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static] :77
void DisposalManager::Clean(int dr)
{
    DisposalManager_typeof()->Init();
    uObject* ret1;
    uObject* ret2;

    for (int i = uPtr(DisposalManager::_items())->Count() - 1; i >= 0; --i)
    {
        if (i >= uPtr(DisposalManager::_items())->Count())
            continue;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int i1 = 0; i1 < uPtr(DisposalManager::_softDisposables())->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables()), uCRef<int>(i1), &ret2), ret2)), ::TYPES[6/*Fuse.Resources.ISoftDisposable*/]));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static] :31
void DisposalManager::Remove(uObject* item)
{
    DisposalManager_typeof()->Init();
    bool ret3;

    if ((::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items()), item, &ret3), ret3))
        DisposalManager::VerifyAttach();
}

// private static void Update() [static] :56
void DisposalManager::Update()
{
    DisposalManager_typeof()->Init();
    uObject* ret5;

    for (int i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items())->Count() == 0)
            return;

        DisposalManager::_disposeAt()++;

        if (DisposalManager::_disposeAt() >= uPtr(DisposalManager::_items())->Count())
            DisposalManager::_disposeAt() = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(DisposalManager::_disposeAt()), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(DisposalManager::_disposeAt());
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static] :39
void DisposalManager::VerifyAttach()
{
    DisposalManager_typeof()->Init();
    bool on = uPtr(DisposalManager::_items())->Count() > 0;

    if (on == DisposalManager::_actionAdded())
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded() = on;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// public enum DisposalRequest :203
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DoubleResourceConverter :3512
// {
static void DoubleResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.DoubleResourceConverter", options);
    type->fp_build_ = DoubleResourceConverter_build;
    type->fp_ctor_ = (void*)DoubleResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    return type;
}

// public generated DoubleResourceConverter() :3512
void DoubleResourceConverter__ctor_1_fn(DoubleResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed double Convert(object o) :3514
void DoubleResourceConverter__Convert_fn(DoubleResourceConverter* __this, uObject* o, double* __retval)
{
    return *__retval = __this->InternConvert(o), void();
}

// public generated DoubleResourceConverter New() :3512
void DoubleResourceConverter__New1_fn(DoubleResourceConverter** __retval)
{
    *__retval = DoubleResourceConverter::New1();
}

// public generated DoubleResourceConverter() [instance] :3512
void DoubleResourceConverter::ctor_1()
{
    ctor_();
}

// public generated DoubleResourceConverter New() [static] :3512
DoubleResourceConverter* DoubleResourceConverter::New1()
{
    DoubleResourceConverter* obj1 = (DoubleResourceConverter*)uNew(DoubleResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class FileImageSource :69
// {
static void FileImageSource_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    type->SetFields(4,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSource, _proxy), 0);
}

::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->fp_build_ = FileImageSource_build;
    type->fp_ctor_ = (void*)FileImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSource__get_State_fn;
    return type;
}

// public FileImageSource() :102
void FileImageSource__ctor_2_fn(FileImageSource* __this)
{
    __this->ctor_2();
}

// public FileImageSource(Uno.UX.FileSource file) :96
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :109
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :139
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :139
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :78
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :79
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed texture2D GetTexture() :132
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public FileImageSource New() :102
void FileImageSource__New2_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New2();
}

// public FileImageSource New(Uno.UX.FileSource file) :96
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New3(file);
}

// protected override sealed void OnPinChanged() :128
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :130
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed float2 get_Size() :129
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :134
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :131
void FileImageSource__get_State_fn(FileImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public FileImageSource() [instance] :102
void FileImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance] :96
void FileImageSource::ctor_3(::g::Uno::UX::FileSource* file)
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :109
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :139
float FileImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :139
void FileImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :78
::g::Uno::UX::FileSource* FileImageSource::File()
{
    return (uPtr(_proxy)->Impl() == NULL) ? uCast< ::g::Uno::UX::FileSource*>(NULL, ::TYPES[7/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[8/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :79
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_proxy)->Release();

    if (value == NULL)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value);
    uPtr(_proxy)->Attach(bf);
}

// public FileImageSource New() [static] :102
FileImageSource* FileImageSource::New2()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static] :96
FileImageSource* FileImageSource::New3(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal static class FileImageSourceCache :13
// {
// static FileImageSourceCache() :13
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

static void FileImageSourceCache_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/], (uintptr_t)&::g::Fuse::Resources::FileImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_build_ = FileImageSourceCache_build;
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) :17
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) [static] :17
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file)
{
    FileImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache()), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache()), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New2(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache()), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[10/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class FileImageSourceImpl :143
// {
// ~FileImageSourceImpl() :162
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

static void FileImageSourceImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("bundleFile");
    ::STRINGS[1] = uString::Const("BundleFileImageSource-failed-conversion");
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl, _file), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->fp_build_ = FileImageSourceImpl_build;
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file) :153
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// protected override sealed void AttemptLoad() :209
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    if (uPtr(__this->Policy())->BundlePreload())
    {
        __this->SyncLoad();
        return;
    }

    __this->_loading = true;
    FileImageSourceImpl__BackgroundLoad::New1(__this->_file, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.Exception>*/], (void*)FileImageSourceImpl__FailureCallback_fn, __this));
    __this->OnChanged();
}

// private void FailureCallback(Uno.Exception e) :228
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// public Uno.UX.FileSource get_File() :150
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) :153
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New2(file);
}

// private void OnDataChanged(object s, object a) :167
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// private void SuccessCallback(texture2D texture) :222
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public void SyncLoad() :172
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file) [instance] :153
void FileImageSourceImpl::ctor_3(::g::Uno::UX::FileSource* file)
{
    ctor_2();

    if (file == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"bundleFile"*/]));

    _file = file;
    uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// private void FailureCallback(Uno.Exception e) [instance] :228
void FileImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Cleanup(1);
    OnError(::STRINGS[1/*"BundleFileI...*/], e);
}

// public Uno.UX.FileSource get_File() [instance] :150
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance] :167
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    Reload();
}

// private void SuccessCallback(texture2D texture) [instance] :222
void FileImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    _loading = false;
    SetTexture(texture);
}

// public void SyncLoad() [instance] :172
void FileImageSourceImpl::SyncLoad()
{
    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    try
    {
        uArray* data = uPtr(_file)->ReadAllBytes();
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
        OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Cleanup(1);
        OnError(::STRINGS[1/*"BundleFileI...*/], e);
    }
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) [static] :153
FileImageSourceImpl* FileImageSourceImpl::New2(::g::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class FileResource :181
// {
static void FileResource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileResource, _file), 0);
}

::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->fp_build_ = FileResource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    return type;
}

// public override sealed Uno.IO.Stream OpenRead() :191
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class FloatResourceConverter :3508
// {
static void FloatResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FloatResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.FloatResourceConverter", options);
    type->fp_build_ = FloatResourceConverter_build;
    type->fp_ctor_ = (void*)FloatResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    return type;
}

// public generated FloatResourceConverter() :3508
void FloatResourceConverter__ctor_1_fn(FloatResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed float Convert(object o) :3510
void FloatResourceConverter__Convert_fn(FloatResourceConverter* __this, uObject* o, float* __retval)
{
    return *__retval = (float)__this->InternConvert(o), void();
}

// public generated FloatResourceConverter New() :3508
void FloatResourceConverter__New1_fn(FloatResourceConverter** __retval)
{
    *__retval = FloatResourceConverter::New1();
}

// public generated FloatResourceConverter() [instance] :3508
void FloatResourceConverter::ctor_1()
{
    ctor_();
}

// public generated FloatResourceConverter New() [static] :3508
FloatResourceConverter* FloatResourceConverter::New1()
{
    FloatResourceConverter* obj1 = (FloatResourceConverter*)uNew(FloatResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class GenericResourceConverter<T> :3521
// {
static void GenericResourceConverter_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL), offsetof(GenericResourceConverter_type, interface0));
}

GenericResourceConverter_type* GenericResourceConverter_typeof()
{
    static uSStrong<GenericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(GenericResourceConverter);
    options.TypeSize = sizeof(GenericResourceConverter_type);
    type = (GenericResourceConverter_type*)uClassType::New("Fuse.Resources.GenericResourceConverter`1", options);
    type->fp_build_ = GenericResourceConverter_build;
    type->fp_ctor_ = (void*)GenericResourceConverter__New1_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))GenericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))GenericResourceConverter__Convert_fn;
    return type;
}

// public generated GenericResourceConverter() :3521
void GenericResourceConverter__ctor__fn(GenericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :3523
void GenericResourceConverter__Accept_fn(GenericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// public T Convert(object o) :3528
void GenericResourceConverter__Convert_fn(GenericResourceConverter* __this, uObject* o, uTRef __retval)
{
    return __retval.Store(__this->__type->T(0), uUnboxAny(__this->__type->T(0), o)), void();
}

// public generated GenericResourceConverter New() :3521
void GenericResourceConverter__New1_fn(uType* __type, GenericResourceConverter** __retval)
{
    *__retval = GenericResourceConverter::New1(__type);
}

// public generated GenericResourceConverter() [instance] :3521
void GenericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :3523
bool GenericResourceConverter::Accept(uObject* o)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(o, __types[0]);
}

// public generated GenericResourceConverter New() [static] :3521
GenericResourceConverter* GenericResourceConverter::New1(uType* __type)
{
    GenericResourceConverter* obj1 = (GenericResourceConverter*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class HttpImageSource :314
// {
static void HttpImageSource_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    ::TYPES[13] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetFields(4,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::HttpImageSource, _proxy), 0);
}

::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->fp_build_ = HttpImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSource__get_State_fn;
    return type;
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :344
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :358
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :358
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :351
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// protected override sealed void OnPinChanged() :347
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :349
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed float2 get_Size() :348
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :353
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :350
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public string get_Url() :320
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :321
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :344
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :358
float HttpImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :358
void HttpImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public string get_Url() [instance] :320
uString* HttpImageSource::Url()
{
    return (uPtr(_proxy)->Impl() == NULL) ? ::STRINGS[2/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[13/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance] :321
void HttpImageSource::Url(uString* value)
{
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, NULL) || ::g::Uno::String::op_Equality(value, ::STRINGS[2/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal static class HttpImageSourceCache :361
// {
// static HttpImageSourceCache() :361
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

static void HttpImageSourceCache_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[15] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/], (uintptr_t)&::g::Fuse::Resources::HttpImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_build_ = HttpImageSourceCache_build;
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) :364
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) [static] :364
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url)
{
    HttpImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache()), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache()), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New2(url);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache()), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[15/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl :381
// {
static void HttpImageSourceImpl_build(uType* type)
{
    ::STRINGS[3] = uString::Const("HttpImageSource-failed-request");
    ::STRINGS[4] = uString::Const("HttpImageSource-failed-converson");
    ::STRINGS[5] = uString::Const("HttpImageSource-failed-status: ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[7] = uString::Const("content-type");
    ::STRINGS[8] = uString::Const("x-missing");
    ::STRINGS[9] = uString::Const("HttpImageSource-protocol-failure for url '");
    ::STRINGS[10] = uString::Const("' : ");
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[16] = ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Buffer_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL);
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _contentType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _url), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->fp_build_ = HttpImageSourceImpl_build;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public HttpImageSourceImpl(string url) :387
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url)
{
    __this->ctor_3(url);
}

// protected override sealed void AttemptLoad() :392
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    try
    {
        ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), uDelegate::New(::TYPES[16/*Uno.Action<Experimental.Http.HttpResponseHeader, Uno.Buffer>*/], (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)HttpImageSourceImpl__LoadFailed_fn, __this));
        __this->_loading = true;
        __this->OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(::STRINGS[3/*"HttpImageSo...*/], e);
    }
}

// private void Fail(string msg, [Uno.Exception e]) :493
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void FailureCallback(Uno.Exception e) :412
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) :418
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    __this->HttpCallback(response, data);
}

// private void LoadFailed(string reason) :488
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url) :387
void HttpImageSourceImpl__New2_fn(uString* url, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New2(url);
}

// private void SuccessCallback(texture2D texture) :406
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public string get_Url() :384
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url) [instance] :387
void HttpImageSourceImpl::ctor_3(uString* url)
{
    ctor_2();
    _url = url;
}

// private void Fail(string msg, [Uno.Exception e]) [instance] :493
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    Cleanup(1);
    OnError(msg, e);
    ::g::Experimental::Http::HttpLoader::Discard(_url);
}

// private void FailureCallback(Uno.Exception e) [instance] :412
void HttpImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Fail(::STRINGS[4/*"HttpImageSo...*/], e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) [instance] :418
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"HttpImageSo...*/], uBox<int>(::TYPES[26/*int*/], uPtr(response)->StatusCode())), ::STRINGS[6/*" "*/]), uPtr(response)->ReasonPhrase()), NULL);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), ::STRINGS[7/*"content-type"*/], (void**)(&ct), &ret2), ret2))
        _contentType = ::STRINGS[8/*"x-missing"*/];
    else
        _contentType = ct;

    HttpImageSourceImpl__BackgroundLoad::New1(data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.Exception>*/], (void*)HttpImageSourceImpl__FailureCallback_fn, this));
}

// private void LoadFailed(string reason) [instance] :488
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"HttpImageSo...*/], Url()), ::STRINGS[10/*"' : "*/]), reason), NULL);
}

// private void SuccessCallback(texture2D texture) [instance] :406
void HttpImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    _loading = false;
    SetTexture(texture);
}

// public string get_Url() [instance] :384
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url) [static] :387
HttpImageSourceImpl* HttpImageSourceImpl::New2(uString* url)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_3(url);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class ImageSource :591
// {
static void ImageSource_build(uType* type)
{
    ::STRINGS[11] = uString::Const("ImageSource error: '");
    ::STRINGS[12] = uString::Const("'");
    ::STRINGS[13] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno");
    ::STRINGS[14] = uString::Const("OnError");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Resources::ImageSource, _pinCount), 0,
        ::TYPES[18/*Uno.EventHandler*/], offsetof(::g::Fuse::Resources::ImageSource, Changed1), 0,
        ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(::g::Fuse::Resources::ImageSource, Error1), 0);
}

ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_build_ = ImageSource_build;
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    return type;
}

// protected generated ImageSource() :591
void ImageSource__ctor_1_fn(ImageSource* __this)
{
    __this->ctor_1();
}

// public generated void add_Changed(Uno.EventHandler value) :593
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value) :593
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :613
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :613
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) :607
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    __this->FireChanged(args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) :630
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->FireError(args);
}

// public bool get_IsPinned() :651
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected void OnChanged() :594
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e]) :614
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged() :653
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin() :637
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) :602
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) :625
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public void Unpin() :643
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance] :591
void ImageSource::ctor_1()
{
    ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) [instance] :593
void ImageSource::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[18/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance] :593
void ImageSource::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[18/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :613
void ImageSource::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :613
void ImageSource::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) [instance] :607
void ImageSource::FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, this, args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) [instance] :630
void ImageSource::FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, args);
}

// public bool get_IsPinned() [instance] :651
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance] :594
void ImageSource::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceChangedArgs__Post_fn, ::g::Fuse::Resources::ImageSourceChangedArgs::New2(this)), -1, 0);
}

// protected void OnError(string msg, [Uno.Exception e]) [instance] :614
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    ::g::Fuse::Diagnostics::UnknownException(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"ImageSource...*/], msg), ::STRINGS[12/*"'"*/]), e, this, ::STRINGS[13/*"/Users/paul...*/], 616, ::STRINGS[14/*"OnError"*/]);

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2(this);
        sa->Reason = msg;
        sa->ExceptionCause = e;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceErrorArgs__Post_fn, sa), -1, 0);
    }
}

// public void Pin() [instance] :637
void ImageSource::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance] :602
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :625
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance] :643
void ImageSource::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class ImageSourceChangedArgs :556
// {
static void ImageSourceChangedArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ImageSourceChangedArgs, _imageSource), 0);
}

uType* ImageSourceChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImageSourceChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageSourceChangedArgs", options);
    type->fp_build_ = ImageSourceChangedArgs_build;
    return type;
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) :560
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) :560
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval)
{
    *__retval = ImageSourceChangedArgs::New2(imageSource);
}

// internal void Post() :565
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this)
{
    __this->Post();
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) [instance] :560
void ImageSourceChangedArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :565
void ImageSourceChangedArgs::Post()
{
    uPtr(_imageSource)->FireChanged(this);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) [static] :560
ImageSourceChangedArgs* ImageSourceChangedArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceChangedArgs* obj1 = (ImageSourceChangedArgs*)uNew(ImageSourceChangedArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs :530
// {
static void ImageSourceErrorArgs_build(uType* type)
{
    ::STRINGS[15] = uString::Const("reason");
    ::TYPES[20] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, _imageSource), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, Reason), 0);
}

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->fp_build_ = ImageSourceErrorArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) :543
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :536
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[20/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[15/*"reason"*/], __this->Reason);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) :543
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2(imageSource);
}

// internal void Post() :548
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this)
{
    __this->Post();
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) [instance] :543
void ImageSourceErrorArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :548
void ImageSourceErrorArgs::Post()
{
    uPtr(_imageSource)->FireError(this);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) [static] :543
ImageSourceErrorArgs* ImageSourceErrorArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args) :554
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum ImageSourceState :518
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// internal abstract interface IMemoryResource :353
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class IntResourceConverter :3516
// {
static void IntResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IntResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.IntResourceConverter", options);
    type->fp_build_ = IntResourceConverter_build;
    type->fp_ctor_ = (void*)IntResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    return type;
}

// public generated IntResourceConverter() :3516
void IntResourceConverter__ctor_1_fn(IntResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed int Convert(object o) :3518
void IntResourceConverter__Convert_fn(IntResourceConverter* __this, uObject* o, int* __retval)
{
    return *__retval = (int)__this->InternConvert(o), void();
}

// public generated IntResourceConverter New() :3516
void IntResourceConverter__New1_fn(IntResourceConverter** __retval)
{
    *__retval = IntResourceConverter::New1();
}

// public generated IntResourceConverter() [instance] :3516
void IntResourceConverter::ctor_1()
{
    ctor_();
}

// public generated IntResourceConverter New() [static] :3516
IntResourceConverter* IntResourceConverter::New1()
{
    IntResourceConverter* obj1 = (IntResourceConverter*)uNew(IntResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface IResourceConverter<T> :3483
// {
uInterfaceType* IResourceConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IResourceConverter`1", 1, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// internal abstract interface ISoftDisposable :271
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal abstract class LoadingImageSource :687
// {
static void LoadingImageSource_build(uType* type)
{
    ::STRINGS[16] = uString::Const("value-cannot-be-null");
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _lastUsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _loading), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _texture), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _textureSize), 0);
}

LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->fp_build_ = LoadingImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// protected generated LoadingImageSource() :687
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this)
{
    __this->ctor_2();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) :765
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :697
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :699
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :696
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :700
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this)
{
    __this->Cleanup(2);
}

// public override sealed texture2D GetTexture() :733
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->LoadTexture();
    return *__retval = __this->_texture, void();
}

// protected bool get_IsLoaded() :786
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// private void LoadTexture() :745
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this)
{
    __this->LoadTexture();
}

// protected void MarkUsed() :705
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged() :843
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize() :833
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture == NULL)
        __this->LoadTexture();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :713
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :714
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public void Reload() :753
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    __this->Reload();
}

// protected void SetTexture(texture2D texture) :788
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size() :824
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity() :819
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :804
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance] :687
void LoadingImageSource::ctor_2()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    ctor_1();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance] :765
void LoadingImageSource::Cleanup(int reason)
{
    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance] :786
bool LoadingImageSource::IsLoaded()
{
    return _texture != NULL;
}

// private void LoadTexture() [instance] :745
void LoadingImageSource::LoadTexture()
{
    if (_loading || _failed)
        return;

    AttemptLoad();
}

// protected void MarkUsed() [instance] :705
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :713
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :714
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"value-canno...*/]));

    _policy = value;
}

// public void Reload() [instance] :753
void LoadingImageSource::Reload()
{
    Cleanup(0);
    LoadTexture();
}

// protected void SetTexture(texture2D texture) [instance] :788
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class MemoryPolicy :288
// {
// static MemoryPolicy() :288
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection3;
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection3 = MemoryPolicy::New1(), uPtr(collection3)->BundlePreload(true), true, collection3);
    MemoryPolicy::UnloadUnused_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->UnloadInBackground(true), true, uPtr(collection2)->UnusedTimeout(60.0), 60.0, uPtr(collection2)->UnpinInvisible(true), true, collection2);
    MemoryPolicy::UnloadInBackgroundPolicy_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, collection1);
}

static void MemoryPolicy_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnusedTimeout), 0,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uFieldFlagsStatic);
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_build_ = MemoryPolicy_build;
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    return type;
}

// public generated MemoryPolicy() :288
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree() :328
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value) :328
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload() :319
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value) :319
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New() :288
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) :333
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground() :322
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value) :322
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible() :331
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value) :331
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout() :325
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value) :325
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadInBackgroundPolicy_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;

// public generated MemoryPolicy() [instance] :288
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance] :328
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance] :328
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance] :319
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance] :319
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance] :333
bool MemoryPolicy::ShouldSoftDispose(int dr, uObject* resource)
{
    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((dr == 2) && (!::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])) || AllowPinnedFree()))
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance] :322
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance] :322
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance] :331
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance] :331
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance] :325
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance] :325
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static] :288
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj4 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class MultiDensityImageSource :882
// {
static void MultiDensityImageSource_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[24] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    type->SetFields(4,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _matchDensity), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _proxy), 0,
        ::TYPES[21/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], offsetof(::g::Fuse::Resources::MultiDensityImageSource, _sources), 0);
}

::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->fp_build_ = MultiDensityImageSource_build;
    type->fp_ctor_ = (void*)MultiDensityImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))MultiDensityImageSource__get_State_fn;
    return type;
}

// public MultiDensityImageSource() :897
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this)
{
    __this->ctor_2();
}

// public override sealed texture2D GetTexture() :1001
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public MultiDensityImageSource New() :897
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New2();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) :903
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) :909
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged() :971
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :987
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// private void SelectActive() :934
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size() :979
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :1013
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() :889
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :995
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use) :953
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance] :897
void MultiDensityImageSource::ctor_2()
{
    ctor_1();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[21/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[22/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[22/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance] :903
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance] :909
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance] :934
void MultiDensityImageSource::SelectActive()
{
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : uPtr(::g::Fuse::AppBase::Current2())->PixelsPerPoint();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = NULL;

    for (uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[23/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[24/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
        float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance] :889
uObject* MultiDensityImageSource::Sources()
{
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance] :953
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    if (use == _active)
        return;

    if (_active != NULL)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != NULL)
        uPtr(_proxy)->Attach(use);
}

// public MultiDensityImageSource New() [static] :897
MultiDensityImageSource* MultiDensityImageSource::New2()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class NumericResourceConverter<T> :3489
// {
static void NumericResourceConverter_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[27] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL), offsetof(NumericResourceConverter_type, interface0));
}

NumericResourceConverter_type* NumericResourceConverter_typeof()
{
    static uSStrong<NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NumericResourceConverter);
    options.TypeSize = sizeof(NumericResourceConverter_type);
    type = (NumericResourceConverter_type*)uClassType::New("Fuse.Resources.NumericResourceConverter`1", options);
    type->fp_build_ = NumericResourceConverter_build;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))NumericResourceConverter__Accept_fn;
    return type;
}

// protected generated NumericResourceConverter() :3489
void NumericResourceConverter__ctor__fn(NumericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :3491
void NumericResourceConverter__Accept_fn(NumericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// protected double InternConvert(object o) :3496
void NumericResourceConverter__InternConvert_fn(NumericResourceConverter* __this, uObject* o, double* __retval)
{
    *__retval = __this->InternConvert(o);
}

// protected generated NumericResourceConverter() [instance] :3489
void NumericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :3491
bool NumericResourceConverter::Accept(uObject* o)
{
    bool q = (uIs(o, ::TYPES[25/*float*/]) || uIs(o, ::TYPES[26/*int*/])) || uIs(o, ::TYPES[27/*double*/]);
    return q;
}

// protected double InternConvert(object o) [instance] :3496
double NumericResourceConverter::InternConvert(uObject* o)
{
    if (uIs(o, ::TYPES[25/*float*/]))
        return (double)uUnbox<float>(::TYPES[25/*float*/], o);

    if (uIs(o, ::TYPES[27/*double*/]))
        return uUnbox<double>(::TYPES[27/*double*/], o);

    if (uIs(o, ::TYPES[26/*int*/]))
        return (double)uUnbox<int>(::TYPES[26/*int*/], o);

    return 0.0;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class ProxyImageSource :1029
// {
static void ProxyImageSource_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[29] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _hasDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _policy), 0);
}

uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    type->fp_build_ = ProxyImageSource_build;
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) :1032
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl) :1161
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) :1065
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density() :1110
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :1116
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture() :1128
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() :1038
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) :1032
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged() :1040
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public int2 get_PixelSize() :1095
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) :1151
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) :1156
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release() :1139
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public float2 get_Size() :1083
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State() :1125
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy() :1074
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance] :1032
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance] :1161
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[18/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[28/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance] :1065
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance] :1110
float ProxyImageSource::Density()
{
    if (_hasDensity || (_impl == NULL))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance] :1116
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public texture2D GetTexture() [instance] :1128
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    return (_impl == NULL) ? uCast< ::g::Uno::Graphics::Texture2D*>(NULL, ::TYPES[29/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance] :1038
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void OnPinChanged() [instance] :1040
void ProxyImageSource::OnPinChanged()
{
    if (_impl == NULL)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public int2 get_PixelSize() [instance] :1095
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    if (_impl == NULL)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance] :1151
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :1156
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance] :1139
void ProxyImageSource::Release()
{
    if (_impl != NULL)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[18/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = NULL;
    }
}

// public float2 get_Size() [instance] :1083
::g::Uno::Float2 ProxyImageSource::Size()
{
    if (_impl == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), _density);
}

// public Fuse.Resources.ImageSourceState get_State() [instance] :1125
int ProxyImageSource::State()
{
    return (_impl == NULL) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance] :1074
void ProxyImageSource::UpdatePolicy()
{
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[28/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static] :1032
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class ResourceBinding<T> :3591
// {
static void ResourceBinding_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Resources::IResourceConverter_typeof();
    ::TYPES[32] = ::g::Fuse::Resources::ResourceConverters_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Resources::ResourceConverters_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetFields(1,
        ::TYPES[31/*Fuse.Resources.IResourceConverter`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Resources::ResourceBinding, _converter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Resources::ResourceBinding, _Target), 0);
}

::g::Fuse::Binding_type* ResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(ResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Binding_type);
    type = (::g::Fuse::Binding_type*)uClassType::New("Fuse.Resources.ResourceBinding`1", options);
    type->fp_build_ = ResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ResourceBinding__OnUnrooted_fn;
    return type;
}

// public generated string get_Key() :3597
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :3597
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private void OnChanged() :3621
void ResourceBinding__OnChanged_fn(ResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted() :3609
void ResourceBinding__OnRooted_fn(ResourceBinding* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Resources.ResourceConverters.Get<T>*/),
    };
    __this->_converter = ((uObject*)::g::Fuse::Resources::ResourceConverters::Get(__types[0]));
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// protected override sealed void OnUnrooted() :3616
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this)
{
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
}

// public generated Uno.UX.Property<T> get_Target() :3594
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :3594
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public generated string get_Key() [instance] :3597
uString* ResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :3597
void ResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private void OnChanged() [instance] :3621
void ResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Fuse.Resources.IResourceConverter<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* resource;

    if (uPtr(Parent())->TryGetResource(Key(), uDelegate::New(::TYPES[30/*Uno.Predicate<object>*/], uInterface(uPtr(_converter), __types[1]), offsetof(::g::Fuse::Resources::IResourceConverter, fp_Accept)), &resource))
        ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), (::g::Fuse::Resources::IResourceConverter::Convert_ex(uInterface(uPtr(_converter), __types[1]), resource, &ret2), ret2), NULL);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :3594
::g::Uno::UX::Property1* ResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :3594
void ResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------------

// internal static class ResourceConverters :3538
// {
// static ResourceConverters() :3538
static void ResourceConverters__cctor__fn(uType* __type)
{
    ResourceConverters::_converters_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[33/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void ResourceConverters_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Type_typeof();
    ::TYPES[35] = ::g::Fuse::Resources::GenericResourceConverter_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[35/*Fuse.Resources.GenericResourceConverter`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::TYPES[33/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Resources::ResourceConverters::_converters_, uFieldFlagsStatic);
}

uClassType* ResourceConverters_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceConverters", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = ResourceConverters_build;
    type->fp_cctor_ = ResourceConverters__cctor__fn;
    return type;
}

// public static Fuse.Resources.IResourceConverter<T> Get<T>() :3542
void ResourceConverters__Get_fn(uType* __type, uObject** __retval)
{
    *__retval = ResourceConverters::Get(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceConverters::_converters_;

// public static Fuse.Resources.IResourceConverter<T> Get<T>() [static] :3542
uObject* ResourceConverters::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Resources.GenericResourceConverter<T>*/),
    };
    __type->Base->Init();
    bool ret1;
    uObject* converter;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceConverters::_converters()), __type->U(0), (void**)(&converter), &ret1), ret1))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[25/*float*/]))
            converter = ::g::Fuse::Resources::FloatResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[27/*double*/]))
            converter = ::g::Fuse::Resources::DoubleResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[26/*int*/]))
            converter = ::g::Fuse::Resources::IntResourceConverter::New1();
        else
            converter = (::g::Fuse::Resources::GenericResourceConverter*)::g::Fuse::Resources::GenericResourceConverter::New1(__types[0]);

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceConverters::_converters()), __type->U(0), converter);
    }

    return (uObject*)converter;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// public static class ResourceRegistry :371
// {
// static ResourceRegistry() :371
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[36/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

static void ResourceRegistry_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL);
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[36/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&::g::Fuse::Resources::ResourceRegistry::_handlers_, uFieldFlagsStatic);
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_build_ = ResourceRegistry_build;
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler) :375
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key) :391
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) :385
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static] :375
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static] :391
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    ResourceRegistry_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers()), key, (void**)(&list), &ret4), ret4))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5); enum1.MoveNext(::TYPES[38/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
        {
            uDelegate* h = enum1.Current(::TYPES[38/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            uPtr(h)->InvokeVoid();
        }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static] :385
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret8), ret8)), handler, &ret7);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/resources/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class SystemFileSource :409
// {
static void SystemFileSource_build(uType* type)
{
    type->SetFields(2);
}

::g::Uno::UX::FileSource_type* SystemFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SystemFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.SystemFileSource", options);
    type->fp_build_ = SystemFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))SystemFileSource__OpenRead_fn;
    return type;
}

// public SystemFileSource(string file) :411
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file)
{
    __this->ctor_1(file);
}

// public SystemFileSource New(string file) :411
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval)
{
    *__retval = SystemFileSource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :416
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->Name), void();
}

// public SystemFileSource(string file) [instance] :411
void SystemFileSource::ctor_1(uString* file)
{
    ctor_(file);
}

// public SystemFileSource New(string file) [static] :411
SystemFileSource* SystemFileSource::New1(uString* file)
{
    SystemFileSource* obj1 = (SystemFileSource*)uNew(SystemFileSource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/resources/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class TextureImageSource :1197
// {
static void TextureImageSource_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _density), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _texture), 0);
}

::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->fp_build_ = TextureImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))TextureImageSource__get_State_fn;
    return type;
}

// public float get_Density() :1219
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :1220
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :1265
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public override sealed int2 get_PixelSize() :1247
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size() :1237
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity() :1232
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :1257
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public float get_Density() [instance] :1219
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :1220
void TextureImageSource::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}
// }

}}} // ::g::Fuse::Resources
