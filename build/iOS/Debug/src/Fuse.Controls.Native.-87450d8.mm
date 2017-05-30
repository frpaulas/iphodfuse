// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-816b8eb5.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FocusHelpers :188
// {
// static FocusHelpers() :191
static void FocusHelpers__cctor__fn(uType* __type)
{
    FocusHelpers::_keyboardView_ = ::g::Fuse::Controls::Native::iOS::KeyboardView::New1();
}

static void FocusHelpers_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::KeyboardView_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::FocusHelpers::_keyboardView_, uFieldFlagsStatic);
}

uClassType* FocusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers", options);
    type->fp_build_ = FocusHelpers_build;
    type->fp_cctor_ = FocusHelpers__cctor__fn;
    return type;
}

// public static ObjC.Object GetCurrentFirstResponder() :224
void FocusHelpers__GetCurrentFirstResponder_fn(::g::ObjC::Object** __retval)
{
    *__retval = FocusHelpers::GetCurrentFirstResponder();
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() :199
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval)
{
    *__retval = FocusHelpers::KeyboardView();
}

uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> FocusHelpers::_keyboardView_;

// public static ObjC.Object GetCurrentFirstResponder() [static] :224
::g::ObjC::Object* FocusHelpers::GetCurrentFirstResponder()
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            id responder = [UIResponder currentFirstResponder];	
            if ([responder isKindOfClass: [::UIView class]])
            {
            	return responder;
            }
            else
            {
            	return nil;
            }
        } ());
        
    }
    
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() [static] :199
::g::Fuse::Controls::Native::iOS::KeyboardView* FocusHelpers::KeyboardView()
{
    FocusHelpers_typeof()->Init();
    return FocusHelpers::_keyboardView();
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
