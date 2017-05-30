// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-77f1a6e0.h>
#include <Fuse.Controls.Native.-a3bae2d8.h>
#include <Fuse.Controls.Native.-e7f294af.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public static extern class iOSDevice :1165
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::OSVersion_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::iOSDevice::_osVersion_, uFieldFlagsStatic);
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size) :1192
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// private static bool IsLandscapeOrientation() :1208
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static Fuse.Controls.Native.iOS.OSVersion get_OperatingSystemVersion() :1176
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::Controls::Native::iOS::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

// public static Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation get_Orientation() :1189
void iOSDevice__get_Orientation_fn(int* __retval)
{
    *__retval = iOSDevice::Orientation();
}

uSStrong< ::g::Fuse::Controls::Native::iOS::OSVersion*> iOSDevice::_osVersion_;

// public static float2 CompensateForOrientation(float2 size) [static] :1192
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// private static bool IsLandscapeOrientation() [static] :1208
bool iOSDevice::IsLandscapeOrientation()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static Fuse.Controls.Native.iOS.OSVersion get_OperatingSystemVersion() [static] :1176
::g::Fuse::Controls::Native::iOS::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
    int minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
    int patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    return iOSDevice::_osVersion_ = ::g::Fuse::Controls::Native::iOS::OSVersion::New1(major, minor, patch);
}

// public static Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation get_Orientation() [static] :1189
int iOSDevice::Orientation()
{
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
