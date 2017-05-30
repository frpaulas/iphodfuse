// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-a5b5d1b.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewFactory :1452
// {
static void ViewFactory_build(uType* type)
{
}

uClassType* ViewFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ViewFactory", options);
    type->fp_build_ = ViewFactory_build;
    return type;
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() :1454
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroup();
}

// private static ObjC.Object InstantiateViewGroupImpl() :1460
void ViewFactory__InstantiateViewGroupImpl_fn(::g::ObjC::Object** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroupImpl();
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() [static] :1454
::g::Fuse::Controls::Native::ViewHandle* ViewFactory::InstantiateViewGroup()
{
    return ::g::Fuse::Controls::Native::ViewHandle::New2(ViewFactory::InstantiateViewGroupImpl(), false);
}

// private static ObjC.Object InstantiateViewGroupImpl() [static] :1460
::g::ObjC::Object* ViewFactory::InstantiateViewGroupImpl()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* control = [[UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}
// }

}}}} // ::g::Fuse::Controls::Native
