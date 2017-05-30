// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__DiagnosticSubject;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal class JavaScript.DiagnosticSubject :408
// {
uType* JavaScript__DiagnosticSubject_typeof();
void JavaScript__DiagnosticSubject__ctor__fn(JavaScript__DiagnosticSubject* __this);
void JavaScript__DiagnosticSubject__ClearDiagnostic_fn(JavaScript__DiagnosticSubject* __this);
void JavaScript__DiagnosticSubject__New1_fn(JavaScript__DiagnosticSubject** __retval);

struct JavaScript__DiagnosticSubject : uObject
{
    uStrong<uObject*> _diagnostic;

    void ctor_();
    void ClearDiagnostic();
    static JavaScript__DiagnosticSubject* New1();
};
// }

}}} // ::g::Fuse::Reactive
