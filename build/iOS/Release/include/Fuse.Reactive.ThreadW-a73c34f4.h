// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker__MethodClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class ThreadWorker.MethodClosure :1557
// {
uType* ThreadWorker__MethodClosure_typeof();
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker);
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval);
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval);
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval);

struct ThreadWorker__MethodClosure : uObject
{
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return ThreadWorker__MethodClosure_typeof()->Init(), _emptyArgs_; }
    uStrong< ::g::Fuse::Scripting::ScriptMethod*> _m;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker);
    uObject* Callback(uArray* args);
    static uArray* CopyArgs(::g::Fuse::Scripting::Array* args);
    static ThreadWorker__MethodClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker);
};
// }

}}} // ::g::Fuse::Reactive
