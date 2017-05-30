// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Testing{struct AssertionFailedException;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class AssertionFailedException :750
// {
::g::Uno::Exception_type* AssertionFailedException_typeof();
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1);
void AssertionFailedException__New4_fn(uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1, AssertionFailedException** __retval);

struct AssertionFailedException : ::g::Uno::Exception
{
    uStrong<uObject*> actual;
    uStrong<uObject*> expected;
    uStrong<uString*> filename;
    int line;
    uStrong<uString*> membername;

    void ctor_3(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1);
    static AssertionFailedException* New4(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1);
};
// }

}}} // ::g::Uno::Testing
