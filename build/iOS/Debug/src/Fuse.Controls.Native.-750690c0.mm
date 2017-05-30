// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-750690c0.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class ObjectExtensions :1658
// {
static void ObjectExtensions_build(uType* type)
{
}

uClassType* ObjectExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ObjectExtensions", options);
    type->fp_build_ = ObjectExtensions_build;
    return type;
}

// public static bool IsUIControl(ObjC.Object obj) :1661
void ObjectExtensions__IsUIControl_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIControl(obj);
}

// public static bool IsUIEvent(ObjC.Object obj) :1667
void ObjectExtensions__IsUIEvent_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIEvent(obj);
}

// public static bool IsUIControl(ObjC.Object obj) [static] :1661
bool ObjectExtensions::IsUIControl(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIControl class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}

// public static bool IsUIEvent(ObjC.Object obj) [static] :1667
bool ObjectExtensions::IsUIEvent(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIEvent class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
