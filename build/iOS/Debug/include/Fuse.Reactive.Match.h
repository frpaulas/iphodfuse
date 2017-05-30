// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Case;}}}
namespace g{namespace Fuse{namespace Reactive{struct Match;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Match :1670
// {
struct Match_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Reactive::IObserver interface6;
};

Match_type* Match_typeof();
void Match__ctor_3_fn(Match* __this);
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__get_Cases_fn(Match* __this, uObject** __retval);
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue);
void Match__FuseReactiveIObserverOnClear_fn(Match* __this);
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message);
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value);
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, uObject* values);
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value);
void Match__FuseReactiveIObserverOnRemoveAt_fn(Match* __this, int* index);
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue);
void Match__GetLastNodeInGroup_fn(Match* __this, ::g::Fuse::Node** __retval);
void Match__Invalidate_fn(Match* __this);
void Match__New2_fn(Match** __retval);
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c);
void Match__OnRooted_fn(Match* __this);
void Match__OnUnrooted_fn(Match* __this);
void Match__RemoveElements_fn(Match* __this);
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval);
void Match__Update_fn(Match* __this);
void Match__get_Value_fn(Match* __this, uObject** __retval);
void Match__set_Value_fn(Match* __this, uObject* value);

struct Match : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::RootableList*> _cases;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong< ::g::Fuse::Reactive::Case*> _oldCase;
    uStrong<uObject*> _realValue;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _value;

    void ctor_3();
    void AddElements(::g::Fuse::Reactive::Case* c);
    uObject* Cases();
    void Invalidate();
    void OnCaseAdded(::g::Fuse::Reactive::Case* c);
    void OnCaseRemoved(::g::Fuse::Reactive::Case* c);
    void RemoveElements();
    ::g::Fuse::Reactive::Case* SelectCase();
    void Update();
    uObject* Value();
    void Value(uObject* value);
    static Match* New2();
};
// }

}}} // ::g::Fuse::Reactive
