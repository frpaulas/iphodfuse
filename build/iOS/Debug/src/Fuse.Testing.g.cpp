// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Testing.UnoTesti-f868a38f.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[4];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Testing{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class UnoTestingHelper.TestFailure :24
// {
static void UnoTestingHelper__TestFailure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno");
    ::STRINGS[1] = uString::Const("Fail");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Testing::UnoTestingHelper__TestFailure, _message), 0);
}

uType* UnoTestingHelper__TestFailure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UnoTestingHelper__TestFailure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Testing.UnoTestingHelper.TestFailure", options);
    type->fp_build_ = UnoTestingHelper__TestFailure_build;
    return type;
}

// public TestFailure(string message) :27
void UnoTestingHelper__TestFailure__ctor__fn(UnoTestingHelper__TestFailure* __this, uString* message)
{
    __this->ctor_(message);
}

// public void Fail() :32
void UnoTestingHelper__TestFailure__Fail_fn(UnoTestingHelper__TestFailure* __this)
{
    __this->Fail();
}

// public TestFailure New(string message) :27
void UnoTestingHelper__TestFailure__New1_fn(uString* message, UnoTestingHelper__TestFailure** __retval)
{
    *__retval = UnoTestingHelper__TestFailure::New1(message);
}

// public TestFailure(string message) [instance] :27
void UnoTestingHelper__TestFailure::ctor_(uString* message)
{
    _message = message;
}

// public void Fail() [instance] :32
void UnoTestingHelper__TestFailure::Fail()
{
    ::g::Uno::Testing::Assert::Fail(_message, ::STRINGS[0/*"/Users/paul...*/], 34, ::STRINGS[1/*"Fail"*/]);
}

// public TestFailure New(string message) [static] :27
UnoTestingHelper__TestFailure* UnoTestingHelper__TestFailure::New1(uString* message)
{
    UnoTestingHelper__TestFailure* obj1 = (UnoTestingHelper__TestFailure*)uNew(UnoTestingHelper__TestFailure_typeof());
    obj1->ctor_(message);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class UnoTestingHelper :12
// {
static void UnoTestingHelper_build(uType* type)
{
    ::STRINGS[2] = uString::Const("FuseJS/Internal/UnoTestingHelper");
    ::STRINGS[3] = uString::Const("testFailed");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Testing::UnoTestingHelper::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UnoTestingHelper_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnoTestingHelper);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Testing.UnoTestingHelper", options);
    type->fp_build_ = UnoTestingHelper_build;
    type->fp_ctor_ = (void*)UnoTestingHelper__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UnoTestingHelper() :15
void UnoTestingHelper__ctor_2_fn(UnoTestingHelper* __this)
{
    __this->ctor_2();
}

// public UnoTestingHelper New() :15
void UnoTestingHelper__New2_fn(UnoTestingHelper** __retval)
{
    *__retval = UnoTestingHelper::New2();
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) :38
void UnoTestingHelper__TestFailed_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = UnoTestingHelper::TestFailed(c, args);
}

uSStrong<UnoTestingHelper*> UnoTestingHelper::_instance_;

// public UnoTestingHelper() [instance] :15
void UnoTestingHelper::ctor_2()
{
    ctor_1();

    if (UnoTestingHelper::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UnoTestingHelper::_instance_ = this, ::STRINGS[2/*"FuseJS/Inte...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"testFailed"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UnoTestingHelper__TestFailed_fn)));
}

// public UnoTestingHelper New() [static] :15
UnoTestingHelper* UnoTestingHelper::New2()
{
    UnoTestingHelper* obj1 = (UnoTestingHelper*)uNew(UnoTestingHelper_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) [static] :38
uObject* UnoTestingHelper::TestFailed(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* message = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)UnoTestingHelper__TestFailure__Fail_fn, UnoTestingHelper__TestFailure::New1(message)));
    return NULL;
}
// }

}}} // ::g::Fuse::Testing
