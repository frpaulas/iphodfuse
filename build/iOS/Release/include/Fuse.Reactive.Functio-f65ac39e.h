// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct FunctionMirror__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class FunctionMirror.CallClosure :173
// {
uType* FunctionMirror__CallClosure_typeof();
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::Function* f, uObject* e);
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this);
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Scripting::Function* f, uObject* e, FunctionMirror__CallClosure** __retval);

struct FunctionMirror__CallClosure : uObject
{
    uStrong<uObject*> _e;
    uStrong< ::g::Fuse::Scripting::Function*> _f;

    void ctor_(::g::Fuse::Scripting::Function* f, uObject* e);
    void Call();
    static FunctionMirror__CallClosure* New1(::g::Fuse::Scripting::Function* f, uObject* e);
};
// }

}}} // ::g::Fuse::Reactive
