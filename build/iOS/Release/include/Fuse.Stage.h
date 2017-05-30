// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.UpdateAction.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Stage;}}
namespace g{namespace Fuse{struct UpdateListener;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// internal sealed class Stage :3017
// {
uType* Stage_typeof();
void Stage__ctor__fn(Stage* __this, int* _updateStage);
void Stage__AddDeferredAction_fn(Stage* __this, uDelegate* pu, int* priority);
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
void Stage__New1_fn(int* _updateStage, Stage** __retval);
void Stage__ResetDeferredActions_fn(Stage* __this);

struct Stage : uObject
{
    bool HasListenersRemoved;
    uStrong< ::g::Uno::Collections::List*> Listeners;
    uStrong< ::g::Uno::Collections::List*> Onces;
    uStrong< ::g::Uno::Collections::List*> OncesPending;
    uStrong< ::g::Uno::Collections::List*> PhaseDeferredActions;
    int PhaseDeferredActionsAt;
    int UpdateStage;

    void ctor_(int _updateStage);
    void AddDeferredAction(uDelegate* pu, int priority);
    void Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us);
    void ResetDeferredActions();
    static Stage* New1(int _updateStage);
};
// }

}} // ::g::Fuse
