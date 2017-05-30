// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Testing.Assertion-65eaa948.h>
static uString* STRINGS[1];

namespace g{
namespace Uno{
namespace Testing{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------------

// public partial static class Assert :117
// {
// static Assert() :117
static void Assert__cctor__fn(uType* __type)
{
    Assert::maxStringLength_ = 300;
}

static void Assert_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Testing::Assert::maxStringLength_, uFieldFlagsStatic);
}

uClassType* Assert_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Testing.Assert", options);
    type->fp_build_ = Assert_build;
    type->fp_cctor_ = Assert__cctor__fn;
    return type;
}

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) :522
void Assert__Fail_fn(uString* message, uString* filePath, int* lineNumber, uString* memberName)
{
    Assert::Fail(message, filePath, *lineNumber, memberName);
}

int Assert::maxStringLength_;

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) [static] :522
void Assert::Fail(uString* message, uString* filePath, int lineNumber, uString* memberName)
{
    Assert_typeof()->Init();
    U_THROW(::g::Uno::Testing::AssertionFailedException::New4(filePath, lineNumber, memberName, ::STRINGS[0/*""*/], message));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class AssertionFailedException :750
// {
static void AssertionFailedException_build(uType* type)
{
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, actual), 0,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, expected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, filename), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, line), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, membername), 0);
}

::g::Uno::Exception_type* AssertionFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(AssertionFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Testing.AssertionFailedException", options);
    type->fp_build_ = AssertionFailedException_build;
    return type;
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) :758
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1)
{
    __this->ctor_3(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) :758
void AssertionFailedException__New4_fn(uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1, AssertionFailedException** __retval)
{
    *__retval = AssertionFailedException::New4(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) [instance] :758
void AssertionFailedException::ctor_3(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    ctor_();
    filename = filename1;
    line = line1;
    membername = membername1;
    expected = expected1;
    actual = actual1;
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) [static] :758
AssertionFailedException* AssertionFailedException::New4(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    AssertionFailedException* obj1 = (AssertionFailedException*)uNew(AssertionFailedException_typeof());
    obj1->ctor_3(filename1, line1, membername1, expected1, actual1);
    return obj1;
}
// }

}}} // ::g::Uno::Testing
