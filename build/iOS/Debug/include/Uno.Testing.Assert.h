// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Testing{struct Assert;}}}

namespace g{
namespace Uno{
namespace Testing{

// public partial static class Assert :117
// {
uClassType* Assert_typeof();
void Assert__Fail_fn(uString* message, uString* filePath, int* lineNumber, uString* memberName);

struct Assert : uObject
{
    static int maxStringLength_;
    static int& maxStringLength() { return Assert_typeof()->Init(), maxStringLength_; }

    static void Fail(uString* message, uString* filePath, int lineNumber, uString* memberName);
};
// }

}}} // ::g::Uno::Testing
