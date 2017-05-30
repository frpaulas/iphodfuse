// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.NavDelegate.h>
#include <iOS/WVNavDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :14
// {
static void NavDelegate_build(uType* type)
{
}

uClassType* NavDelegate_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.NavDelegate", options);
    type->fp_build_ = NavDelegate_build;
    return type;
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes) :17
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, ::g::ObjC::Object** __retval)
{
    *__retval = NavDelegate::Create(beginLoading, pageLoaded, urlChanged, OnCustomURI, schemes);
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes) [static] :17
::g::ObjC::Object* NavDelegate::Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::uObjC::Function<void> beginLoading, ::uObjC::Function<void> pageLoaded, ::uObjC::Function<void> urlChanged, ::uObjC::Function<void, ::NSString*> OnCustomURI, id<UnoArray> schemes) -> ::id
        {
            return [[WVNavDelegate alloc] initWithEventHandlers:beginLoading loaded:pageLoaded change:urlChanged uriHandler:OnCustomURI schemes:[schemes copyArray]];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: beginLoading]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: pageLoaded]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: urlChanged]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: OnCustomURI]), [::StrongUnoArray strongUnoArrayWithUnoArray: schemes getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }]));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
