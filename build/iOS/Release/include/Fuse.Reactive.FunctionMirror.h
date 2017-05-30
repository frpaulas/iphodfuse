// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventHandler.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct FunctionMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class FunctionMirror :164
// {
struct FunctionMirror_type : uType
{
    ::g::Fuse::Reactive::IEventHandler interface0;
};

FunctionMirror_type* FunctionMirror_typeof();
void FunctionMirror__ctor__fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func);
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e);
void FunctionMirror__New1_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval);

struct FunctionMirror : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _func;

    void ctor_(::g::Fuse::Scripting::Function* func);
    void Dispatch(uObject* e);
    static FunctionMirror* New1(::g::Fuse::Scripting::Function* func);
};
// }

}}} // ::g::Fuse::Reactive
