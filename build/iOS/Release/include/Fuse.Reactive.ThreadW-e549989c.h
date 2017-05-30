// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker__PropertyClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class ThreadWorker.PropertyClosure :1516
// {
uType* ThreadWorker__PropertyClosure_typeof();
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker);
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval);
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval);

struct ThreadWorker__PropertyClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::ScriptProperty*> _p;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker);
    uObject* GetObservable(uArray* args);
    static ThreadWorker__PropertyClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker);
};
// }

}}} // ::g::Fuse::Reactive
