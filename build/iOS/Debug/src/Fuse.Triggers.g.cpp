// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Anima-9f6f3909.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.Playe-8fa817d1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Animations.Trigg-21dd249.h>
#include <Fuse.Animations.Trigg-75f4f270.h>
#include <Fuse.Animations.Trigg-96b74ffc.h>
#include <Fuse.Controls.Navigat-2fbffbd2.h>
#include <Fuse.Controls.Navigat-340a5907.h>
#include <Fuse.Controls.Navigat-4da4086.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.ScrollP-640a7167.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navig-11678f15.h>
#include <Fuse.Navigation.Navig-4be788bd.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.Navig-c3ed68c1.h>
#include <Fuse.Navigation.Routi-30764b7e.h>
#include <Fuse.Node.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.Platform.SystemU-2024c55a.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scaling.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-b3c1f4a1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Busy.h>
#include <Fuse.Triggers.BusyOn.h>
#include <Fuse.Triggers.BusyTas-26a0325f.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTask.Type.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.BusyTaskMatch.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.Complet-462ee28e.h>
#include <Fuse.Triggers.Complet-9d1486a7.h>
#include <Fuse.Triggers.Completed.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IScroll-2d167265.h>
#include <Fuse.Triggers.IScroll-7d599e87.h>
#include <Fuse.Triggers.IScroll-c30a2192.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.IScroll-f5dfc45d.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.LayoutT-17f13160.h>
#include <Fuse.Triggers.LayoutT-38529711.h>
#include <Fuse.Triggers.LayoutT-3aa69d98.h>
#include <Fuse.Triggers.LayoutT-6adfe46a.h>
#include <Fuse.Triggers.LayoutT-6d66b793.h>
#include <Fuse.Triggers.LayoutT-999d3106.h>
#include <Fuse.Triggers.LayoutT-9d622a39.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.PulseTr-e6f97a32.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.Removin-3934475f.h>
#include <Fuse.Triggers.Scrolled.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Fuse.Triggers.ScrolledWhere.h>
#include <Fuse.Triggers.ScrollRegion.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGr-10cf9727.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Transit-122edce0.h>
#include <Fuse.Triggers.Transition.h>
#include <Fuse.Triggers.TransitionGroup.h>
#include <Fuse.Triggers.TransitionMode.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.Trigger-506bb336.h>
#include <Fuse.Triggers.Trigger-fd67b2ab.h>
#include <Fuse.Triggers.TriggerPlayState.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileKe-9ea3ef4d.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[53];
static uType* TYPES[58];

namespace g{
namespace Fuse{
namespace Triggers{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public partial sealed class Busy :137
// {
// static Busy() :245
static void Busy__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Busy>*/], ::STRINGS[0/*"activate"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Busy, object[]>*/], (void*)Busy__activate_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Busy>*/], ::STRINGS[1/*"deactivate"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Busy, object[]>*/], (void*)Busy__deactivate_fn), 2)));
}

static void Busy_build(uType* type)
{
    ::STRINGS[0] = uString::Const("activate");
    ::STRINGS[1] = uString::Const("deactivate");
    ::STRINGS[2] = uString::Const("Busy.activate takes no arguments");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[4] = uString::Const("Busy.deactivate takes no arguments");
    ::STRINGS[5] = uString::Const("");
    ::STRINGS[6] = uString::Const("On='ParameterChanged' requires a Visual parent");
    ::STRINGS[7] = uString::Const("UpdateState");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(::g::Fuse::Triggers::Busy, _activity), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Triggers::Busy, _busyTask), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Busy, _isActive), 0,
        ::g::Fuse::Triggers::BusyOn_typeof(), offsetof(::g::Fuse::Triggers::Busy, _on), 0,
        ::g::Fuse::Triggers::BusyOn_typeof(), offsetof(::g::Fuse::Triggers::Busy, _rootOn), 0);
}

::g::Fuse::Node_type* Busy_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Busy);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.Busy", options);
    type->fp_build_ = Busy_build;
    type->fp_cctor_ = Busy__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Busy__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Busy__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void activate(Fuse.Scripting.Context c, Fuse.Triggers.Busy b, object[] args) :260
void Busy__activate_fn(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args)
{
    Busy::activate(c, b, args);
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() :166
void Busy__get_Activity_fn(Busy* __this, int* __retval)
{
    *__retval = __this->Activity();
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) :167
void Busy__set_Activity_fn(Busy* __this, int* value)
{
    __this->Activity(*value);
}

// private static void deactivate(Fuse.Scripting.Context c, Fuse.Triggers.Busy b, object[] args) :278
void Busy__deactivate_fn(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args)
{
    Busy::deactivate(c, b, args);
}

// public bool get_IsActive() :147
void Busy__get_IsActive_fn(Busy* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :148
void Busy__set_IsActive_fn(Busy* __this, bool* value)
{
    __this->IsActive(*value);
}

// private void OnParameterChanged(object s, Uno.EventArgs args) :226
void Busy__OnParameterChanged_fn(Busy* __this, uObject* s, ::g::Uno::EventArgs* args)
{
    __this->OnParameterChanged(s, args);
}

// protected override sealed void OnRooted() :212
void Busy__OnRooted_fn(Busy* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if ((__this->_rootOn & 1) == 1)
        uPtr(uAs< ::g::Fuse::Visual*>(__this->Parent(), ::TYPES[4/*Fuse.Visual*/]))->remove_ParameterChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)Busy__OnParameterChanged_fn, __this));

    __this->UpdateState();
}

// protected override sealed void OnUnrooted() :220
void Busy__OnUnrooted_fn(Busy* __this)
{
    ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, 0, ::STRINGS[5/*""*/]);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void UpdateState() :189
void Busy__UpdateState_fn(Busy* __this)
{
    __this->UpdateState();
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() [instance] :166
int Busy::Activity()
{
    return _activity;
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) [instance] :167
void Busy::Activity(int value)
{
    if (value == _activity)
        return;

    _activity = value;
    UpdateState();
}

// public bool get_IsActive() [instance] :147
bool Busy::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :148
void Busy::IsActive(bool value)
{
    if (value == _isActive)
        return;

    _isActive = value;
    UpdateState();
}

// private void OnParameterChanged(object s, Uno.EventArgs args) [instance] :226
void Busy::OnParameterChanged(uObject* s, ::g::Uno::EventArgs* args)
{
    IsActive(true);
}

// private void UpdateState() [instance] :189
void Busy::UpdateState()
{
    if (!IsRootingStarted())
        return;

    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, IsActive() ? Activity() : 0, ::STRINGS[5/*""*/]);
    _rootOn = _on;

    if ((_rootOn & 1) == 1)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(Parent(), ::TYPES[4/*Fuse.Visual*/]);

        if (v == NULL)
        {
            _rootOn = (_rootOn & -2);
            ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"On='Paramet...*/], this, ::STRINGS[3/*"/Users/paul...*/], 203, ::STRINGS[7/*"UpdateState"*/], NULL);
        }
        else
            uPtr(v)->add_ParameterChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)Busy__OnParameterChanged_fn, this));
    }
}

// private static void activate(Fuse.Scripting.Context c, Fuse.Triggers.Busy b, object[] args) [static] :260
void Busy::activate(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args)
{
    Busy_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[2/*"Busy.activa...*/], b, ::STRINGS[3/*"/Users/paul...*/], 264, ::STRINGS[0/*"activate"*/], NULL);
        return;
    }

    uPtr(b)->IsActive(true);
}

// private static void deactivate(Fuse.Scripting.Context c, Fuse.Triggers.Busy b, object[] args) [static] :278
void Busy::deactivate(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args)
{
    Busy_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[4/*"Busy.deacti...*/], b, ::STRINGS[3/*"/Users/paul...*/], 282, ::STRINGS[1/*"deactivate"*/], NULL);
        return;
    }

    uPtr(b)->IsActive(false);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum BusyOn :77
uEnumType* BusyOn_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyOn", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "ParameterChanged", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class BusyTask :343
// {
// static BusyTask() :521
static void BusyTask__cctor__fn(uType* __type)
{
    BusyTask::_tasks_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.BusyTask>*/]));
    BusyTask::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Node, Uno.Collections.List<Uno.Action>>*/]));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[8/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.BusyTask>*/], ::STRINGS[8/*"done"*/], uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.BusyTask, object[]>*/], (void*)BusyTask__done_fn), 2)));
}

static void BusyTask_build(uType* type)
{
    ::STRINGS[8] = uString::Const("done");
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL);
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[9] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[10/*Uno.Action*/], NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Triggers::IBusyHandler_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(::g::Fuse::Triggers::BusyTask, _activity), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::BusyTask, _message), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::BusyTask, _node), 0,
        BusyTask__Type_typeof(), offsetof(::g::Fuse::Triggers::BusyTask, _type), 0,
        ::TYPES[7/*Uno.Collections.Dictionary<Fuse.Node, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&::g::Fuse::Triggers::BusyTask::_listeners_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.Collections.List<Fuse.Triggers.BusyTask>*/], (uintptr_t)&::g::Fuse::Triggers::BusyTask::_tasks_, uFieldFlagsStatic);
}

uType* BusyTask_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BusyTask);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.BusyTask", options);
    type->fp_build_ = BusyTask_build;
    type->fp_cctor_ = BusyTask__cctor__fn;
    return type;
}

// internal BusyTask(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) :359
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n, int* type, int* act, uString* message)
{
    __this->ctor_(n, *type, *act, message);
}

// internal static void AddListener(Fuse.Node n, Uno.Action handler) :457
void BusyTask__AddListener_fn(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask::AddListener(n, handler);
}

// private static void done(Fuse.Scripting.Context c, Fuse.Triggers.BusyTask bt, object[] args) :532
void BusyTask__done_fn(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args)
{
    BusyTask::done(c, bt, args);
}

// internal void Done() :385
void BusyTask__Done_fn(BusyTask* __this)
{
    __this->Done();
}

// public static Fuse.Triggers.BusyTaskActivity GetBusyActivity(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match]) :402
void BusyTask__GetBusyActivity_fn(::g::Fuse::Node* n, int* match, int* __retval)
{
    *__retval = BusyTask::GetBusyActivity(n, *match);
}

// private static bool IsBusyHandled(Fuse.Node n, Fuse.Triggers.BusyTaskActivity activity) :439
void BusyTask__IsBusyHandled_fn(::g::Fuse::Node* n, int* activity, bool* __retval)
{
    *__retval = BusyTask::IsBusyHandled(n, *activity);
}

// internal BusyTask New(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) :359
void BusyTask__New1_fn(::g::Fuse::Node* n, int* type, int* act, uString* message, BusyTask** __retval)
{
    *__retval = BusyTask::New1(n, *type, *act, message);
}

// private static void OnBusyChanged(Fuse.Node n) :473
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n)
{
    BusyTask::OnBusyChanged(n);
}

// private void OnRooted() :497
void BusyTask__OnRooted_fn(BusyTask* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :490
void BusyTask__OnUnrooted_fn(BusyTask* __this)
{
    __this->OnUnrooted();
}

// internal static void RemoveListener(Fuse.Node n, Uno.Action handler) :465
void BusyTask__RemoveListener_fn(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask::RemoveListener(n, handler);
}

// public static void SetBusy(Fuse.Node n, Fuse.Triggers.BusyTask& bt, Fuse.Triggers.BusyTaskActivity act, [string message]) :502
void BusyTask__SetBusy_fn(::g::Fuse::Node* n, BusyTask** bt, int* act, uString* message)
{
    BusyTask::SetBusy(n, bt, *act, message);
}

// internal void SetNodeActivity(Fuse.Node n, Fuse.Triggers.BusyTaskActivity act, string message) :376
void BusyTask__SetNodeActivity_fn(BusyTask* __this, ::g::Fuse::Node* n, int* act, uString* message)
{
    __this->SetNodeActivity(n, *act, message);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BusyTask::_listeners_;
uSStrong< ::g::Uno::Collections::List*> BusyTask::_tasks_;

// internal BusyTask(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) [instance] :359
void BusyTask::ctor_(::g::Fuse::Node* n, int type, int act, uString* message)
{
    _type = type;
    _node = n;
    _activity = act;
    _message = message;
    ::g::Uno::Collections::List__Add_fn(uPtr(BusyTask::_tasks()), this);
    uPtr(_node)->add_Unrooted(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
    uPtr(_node)->add_RootingCompleted(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)BusyTask__OnRooted_fn, this));

    if (uPtr(_node)->IsRootingStarted())
        BusyTask::OnBusyChanged(n);
}

// internal void Done() [instance] :385
void BusyTask::Done()
{
    bool ret4;
    bool ret5;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(BusyTask::_tasks()), this, &ret4), ret4))
    {
        uPtr(_node)->remove_Unrooted(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
        uPtr(_node)->remove_RootingCompleted(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)BusyTask__OnRooted_fn, this));
        ::g::Uno::Collections::List__Remove_fn(uPtr(BusyTask::_tasks()), this, &ret5);
        BusyTask::OnBusyChanged(_node);
    }
}

// private void OnRooted() [instance] :497
void BusyTask::OnRooted()
{
    BusyTask::OnBusyChanged(_node);
}

// private void OnUnrooted() [instance] :490
void BusyTask::OnUnrooted()
{
    if (_type == 1)
        Done();

    BusyTask::OnBusyChanged(_node);
}

// internal void SetNodeActivity(Fuse.Node n, Fuse.Triggers.BusyTaskActivity act, string message) [instance] :376
void BusyTask::SetNodeActivity(::g::Fuse::Node* n, int act, uString* message)
{
    _node = n;
    _activity = act;
    _message = message;

    if (uPtr(_node)->IsRootingStarted())
        BusyTask::OnBusyChanged(_node);
}

// internal static void AddListener(Fuse.Node n, Uno.Action handler) [static] :457
void BusyTask::AddListener(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BusyTask::_listeners()), n, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BusyTask::_listeners()), n, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners()), n, &ret3), ret3)), handler);
}

// private static void done(Fuse.Scripting.Context c, Fuse.Triggers.BusyTask bt, object[] args) [static] :532
void BusyTask::done(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args)
{
    BusyTask_typeof()->Init();
    uPtr(bt)->Done();
}

// public static Fuse.Triggers.BusyTaskActivity GetBusyActivity(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match]) [static] :402
int BusyTask::GetBusyActivity(::g::Fuse::Node* n, int match)
{
    BusyTask_typeof()->Init();
    BusyTask* ret6;
    int act = 0;

    for (int i = 0; i < uPtr(BusyTask::_tasks())->Count(); i++)
    {
        BusyTask* task = (::g::Uno::Collections::List__get_Item_fn(uPtr(BusyTask::_tasks()), uCRef<int>(i), &ret6), ret6);
        ::g::Fuse::Node* tnode = uPtr(task)->_node;

        if (!uPtr(tnode)->IsRootingStarted())
            continue;

        while (tnode != NULL)
        {
            if (match == 1)
            {
                if (uPtr(tnode)->ContextParent() == n)
                {
                    act = act | uPtr(task)->_activity;
                    break;
                }
            }
            else if (tnode == n)
            {
                act = act | uPtr(task)->_activity;
                break;
            }

            if (match == 2)
                break;

            if (BusyTask::IsBusyHandled(tnode, uPtr(task)->_activity))
                break;

            tnode = uPtr(tnode)->ContextParent();
        }
    }

    return act;
}

// private static bool IsBusyHandled(Fuse.Node n, Fuse.Triggers.BusyTaskActivity activity) [static] :439
bool BusyTask::IsBusyHandled(::g::Fuse::Node* n, int activity)
{
    BusyTask_typeof()->Init();
    ::g::Fuse::Node* ret7;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* handler = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret7), ret7), ::TYPES[13/*Fuse.Triggers.IBusyHandler*/]);
        int vact = (handler == NULL) ? 0 : ::g::Fuse::Triggers::IBusyHandler::BusyActivityHandled(uInterface(uPtr(handler), ::TYPES[13/*Fuse.Triggers.IBusyHandler*/]));
        activity = activity & ~vact;
    }

    return activity == 0;
}

// internal BusyTask New(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) [static] :359
BusyTask* BusyTask::New1(::g::Fuse::Node* n, int type, int act, uString* message)
{
    BusyTask* obj1 = (BusyTask*)uNew(BusyTask_typeof());
    obj1->ctor_(n, type, act, message);
    return obj1;
}

// private static void OnBusyChanged(Fuse.Node n) [static] :473
void BusyTask::OnBusyChanged(::g::Fuse::Node* n)
{
    BusyTask_typeof()->Init();
    bool ret8;
    ::g::Uno::Collections::List* ret9;
    uDelegate* ret10;

    if (uPtr(n)->IsUnrooted())
        return;

    while (n != NULL)
    {
        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BusyTask::_listeners()), n, &ret8), ret8))
        {
            ::g::Uno::Collections::List* listeners = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners()), n, &ret9), ret9);

            for (int i = 0; i < uPtr(listeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(listeners), uCRef<int>(i), &ret10), ret10))->InvokeVoid();
        }

        n = uPtr(n)->Parent();
    }
}

// internal static void RemoveListener(Fuse.Node n, Uno.Action handler) [static] :465
void BusyTask::RemoveListener(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask_typeof()->Init();
    bool ret11;
    ::g::Uno::Collections::List* ret12;
    ::g::Uno::Collections::List* ret13;
    bool ret14;
    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners()), n, &ret12), ret12)), handler, &ret11);

    if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners()), n, &ret13), ret13))->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(BusyTask::_listeners()), n, &ret14);
}

// public static void SetBusy(Fuse.Node n, Fuse.Triggers.BusyTask& bt, Fuse.Triggers.BusyTaskActivity act, [string message]) [static] :502
void BusyTask::SetBusy(::g::Fuse::Node* n, BusyTask** bt, int act, uString* message)
{
    BusyTask_typeof()->Init();

    if (act != 0)
    {
        if (*bt == NULL)
            *bt = BusyTask::New1(n, 0, act, message);
        else
            uPtr(*bt)->SetNodeActivity(n, act, message);
    }
    else
    {
        if (*bt != NULL)
        {
            uPtr(*bt)->Done();
            *bt = NULL;
        }
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum BusyTaskActivity :301
uEnumType* BusyTaskActivity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTaskActivity", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "None", 0LL,
        "Loading", 1LL,
        "Deferring", 2LL,
        "Processing", 4LL,
        "Preparing", 8LL,
        "Failed", 16LL,
        "Short", 10LL,
        "Long", 5LL,
        "Common", 15LL,
        "Any", 31LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum BusyTaskMatch :328
uEnumType* BusyTaskMatch_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTaskMatch", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Descendents", 0LL,
        "OnlyDescendents", 1LL,
        "Parent", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class BusyTaskModule :552
// {
static void BusyTaskModule_build(uType* type)
{
    ::STRINGS[9] = uString::Const("FuseJS/BusyTask");
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Triggers::BusyTaskModule::_module_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BusyTaskModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Triggers.BusyTaskModule", options);
    type->fp_build_ = BusyTaskModule_build;
    type->fp_ctor_ = (void*)BusyTaskModule__New2_fn;
    type->fp_CreateExportsObject = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**))BusyTaskModule__CreateExportsObject_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public BusyTaskModule() :556
void BusyTaskModule__ctor_2_fn(BusyTaskModule* __this)
{
    __this->ctor_2();
}

// private override sealed object CreateExportsObject(Fuse.Scripting.Context c) :597
void BusyTaskModule__CreateExportsObject_fn(BusyTaskModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    return *__retval = uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)BusyTaskModule__ConstructorClosure__Construct_fn, BusyTaskModule__ConstructorClosure::New1(c)), void();
}

// public BusyTaskModule New() :556
void BusyTaskModule__New2_fn(BusyTaskModule** __retval)
{
    *__retval = BusyTaskModule::New2();
}

uSStrong<BusyTaskModule*> BusyTaskModule::_module_;

// public BusyTaskModule() [instance] :556
void BusyTaskModule::ctor_2()
{
    ctor_1();

    if (BusyTaskModule::_module_ == NULL)
    {
        BusyTaskModule::_module_ = this;
        ::g::Uno::UX::Resource::SetGlobalKey(this, ::STRINGS[9/*"FuseJS/Busy...*/]);
    }
}

// public BusyTaskModule New() [static] :556
BusyTaskModule* BusyTaskModule::New2()
{
    BusyTaskModule* obj1 = (BusyTaskModule*)uNew(BusyTaskModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public partial sealed class Completed :644
// {
// static Completed() :806
static void Completed__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[16/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Completed>*/], ::STRINGS[10/*"reset"*/], uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Completed, object[]>*/], (void*)Completed__reset_fn), 2)));
}

static void Completed_build(uType* type)
{
    ::STRINGS[10] = uString::Const("reset");
    ::STRINGS[11] = uString::Const("Completed.reset takes no arguments");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[17] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Triggers::CompletedEventArgs_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(30,
        ::g::Fuse::Triggers::CompletedActivation_typeof(), offsetof(::g::Fuse::Triggers::Completed, _activation), 0,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(::g::Fuse::Triggers::Completed, _activity), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Completed, _listening), 0,
        ::g::Fuse::Triggers::BusyTaskMatch_typeof(), offsetof(::g::Fuse::Triggers::Completed, _match), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Completed, _pulsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Completed, _repeat), 0);
}

::g::Fuse::Triggers::Trigger_type* Completed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Completed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Completed", options);
    type->fp_build_ = Completed_build;
    type->fp_cctor_ = Completed__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Completed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Completed__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Fuse.Triggers.CompletedActivation get_Activation() :703
void Completed__get_Activation_fn(Completed* __this, int* __retval)
{
    *__retval = __this->Activation();
}

// public void set_Activation(Fuse.Triggers.CompletedActivation value) :704
void Completed__set_Activation_fn(Completed* __this, int* value)
{
    __this->Activation(*value);
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() :715
void Completed__get_Activity_fn(Completed* __this, int* __retval)
{
    *__retval = __this->Activity();
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) :716
void Completed__set_Activity_fn(Completed* __this, int* value)
{
    __this->Activity(*value);
}

// private void Cleanup(bool unroot) :673
void Completed__Cleanup_fn(Completed* __this, bool* unroot)
{
    __this->Cleanup(*unroot);
}

// private void DoPulse() :772
void Completed__DoPulse_fn(Completed* __this)
{
    __this->DoPulse();
}

// private bool get_IsBusy() :753
void Completed__get_IsBusy_fn(Completed* __this, bool* __retval)
{
    *__retval = __this->IsBusy();
}

// public Fuse.Triggers.BusyTaskMatch get_Match() :732
void Completed__get_Match_fn(Completed* __this, int* __retval)
{
    *__retval = __this->Match();
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value) :733
void Completed__set_Match_fn(Completed* __this, int* value)
{
    __this->Match(*value);
}

// protected override sealed void OnRooted() :648
void Completed__OnRooted_fn(Completed* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Reset();
}

// protected override sealed void OnUnrooted() :666
void Completed__OnUnrooted_fn(Completed* __this)
{
    __this->Cleanup(true);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public bool get_Repeat() :747
void Completed__get_Repeat_fn(Completed* __this, bool* __retval)
{
    *__retval = __this->Repeat();
}

// public void set_Repeat(bool value) :748
void Completed__set_Repeat_fn(Completed* __this, bool* value)
{
    __this->Repeat(*value);
}

// private static void reset(Fuse.Scripting.Context c, Fuse.Triggers.Completed cp, object[] args) :820
void Completed__reset_fn(::g::Fuse::Scripting::Context* c, Completed* cp, uArray* args)
{
    Completed::reset(c, cp, args);
}

// public void Reset() :786
void Completed__Reset_fn(Completed* __this)
{
    __this->Reset();
}

// private void Setup() :654
void Completed__Setup_fn(Completed* __this)
{
    __this->Setup();
}

// private void Update() :761
void Completed__Update_fn(Completed* __this)
{
    __this->Update();
}

// public Fuse.Triggers.CompletedActivation get_Activation() [instance] :703
int Completed::Activation()
{
    return _activation;
}

// public void set_Activation(Fuse.Triggers.CompletedActivation value) [instance] :704
void Completed::Activation(int value)
{
    _activation = value;
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() [instance] :715
int Completed::Activity()
{
    return _activity;
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) [instance] :716
void Completed::Activity(int value)
{
    _activity = value;

    if (IsRootingCompleted())
        Update();
}

// private void Cleanup(bool unroot) [instance] :673
void Completed::Cleanup(bool unroot)
{
    if (Repeat() && !unroot)
    {
        _pulsed = false;
        return;
    }

    if (_listening)
    {
        ::g::Fuse::Triggers::BusyTask::RemoveListener(Parent(), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Completed__Update_fn, this));
        _listening = false;
    }
}

// private void DoPulse() [instance] :772
void Completed::DoPulse()
{
    if (!IsBusy() && !_pulsed)
    {
        _pulsed = true;
        Cleanup(false);
        Pulse1(::g::Fuse::Triggers::CompletedEventArgs::New2());
    }
}

// private bool get_IsBusy() [instance] :753
bool Completed::IsBusy()
{
    int act = ::g::Fuse::Triggers::BusyTask::GetBusyActivity(Parent(), Match());
    bool busy = (act & Activity()) != 0;
    return busy;
}

// public Fuse.Triggers.BusyTaskMatch get_Match() [instance] :732
int Completed::Match()
{
    return _match;
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value) [instance] :733
void Completed::Match(int value)
{
    _match = value;

    if (IsRootingCompleted())
        Update();
}

// public bool get_Repeat() [instance] :747
bool Completed::Repeat()
{
    return _repeat;
}

// public void set_Repeat(bool value) [instance] :748
void Completed::Repeat(bool value)
{
    _repeat = value;
}

// public void Reset() [instance] :786
void Completed::Reset()
{
    _pulsed = false;
    Setup();
}

// private void Setup() [instance] :654
void Completed::Setup()
{
    if (!_listening)
    {
        ::g::Fuse::Triggers::BusyTask::AddListener(Parent(), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Completed__Update_fn, this));
        _listening = true;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Completed__Update_fn, this), -1, 0);
    }
}

// private void Update() [instance] :761
void Completed::Update()
{
    if (!IsBusy() && !_pulsed)
    {
        if (Activation() == 1)
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Completed__DoPulse_fn, this), 0);
        else
            DoPulse();
    }
}

// private static void reset(Fuse.Scripting.Context c, Fuse.Triggers.Completed cp, object[] args) [static] :820
void Completed::reset(::g::Fuse::Scripting::Context* c, Completed* cp, uArray* args)
{
    Completed_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[11/*"Completed.r...*/], cp, ::STRINGS[3/*"/Users/paul...*/], 824, ::STRINGS[10/*"reset"*/], NULL);
        return;
    }

    uPtr(cp)->Reset();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum CompletedActivation :614
uEnumType* CompletedActivation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.CompletedActivation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "SameFrame", 0LL,
        "NextFrame", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class CompletedEventArgs :612
// {
static void CompletedEventArgs_build(uType* type)
{
}

uType* CompletedEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(CompletedEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.CompletedEventArgs", options);
    type->fp_build_ = CompletedEventArgs_build;
    type->fp_ctor_ = (void*)CompletedEventArgs__New2_fn;
    return type;
}

// public generated CompletedEventArgs() :612
void CompletedEventArgs__ctor_1_fn(CompletedEventArgs* __this)
{
    __this->ctor_1();
}

// public generated CompletedEventArgs New() :612
void CompletedEventArgs__New2_fn(CompletedEventArgs** __retval)
{
    *__retval = CompletedEventArgs::New2();
}

// public generated CompletedEventArgs() [instance] :612
void CompletedEventArgs::ctor_1()
{
    ctor_();
}

// public generated CompletedEventArgs New() [static] :612
CompletedEventArgs* CompletedEventArgs::New2()
{
    CompletedEventArgs* obj1 = (CompletedEventArgs*)uNew(CompletedEventArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// private sealed class BusyTaskModule.ConstructorClosure :565
// {
static void BusyTaskModule__ConstructorClosure_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Use the `Busy` behavior instead of FuseJS/BusyTask");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[13] = uString::Const("Construct");
    ::STRINGS[14] = uString::Const("new BusyTask() - must provide 1 or 2 arguments");
    ::STRINGS[15] = uString::Const("new BusyTask() - argument must be an UX node");
    ::STRINGS[5] = uString::Const("");
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[20] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Triggers.BusyTaskActivity>*/, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Triggers::BusyTaskModule__ConstructorClosure, _c), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Triggers::BusyTaskModule__ConstructorClosure::_warning_, uFieldFlagsStatic);
}

uType* BusyTaskModule__ConstructorClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BusyTaskModule__ConstructorClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.BusyTaskModule.ConstructorClosure", options);
    type->fp_build_ = BusyTaskModule__ConstructorClosure_build;
    return type;
}

// public ConstructorClosure(Fuse.Scripting.Context c) :568
void BusyTaskModule__ConstructorClosure__ctor__fn(BusyTaskModule__ConstructorClosure* __this, ::g::Fuse::Scripting::Context* c)
{
    __this->ctor_(c);
}

// public object Construct(object[] args) :575
void BusyTaskModule__ConstructorClosure__Construct_fn(BusyTaskModule__ConstructorClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Construct(args);
}

// public ConstructorClosure New(Fuse.Scripting.Context c) :568
void BusyTaskModule__ConstructorClosure__New1_fn(::g::Fuse::Scripting::Context* c, BusyTaskModule__ConstructorClosure** __retval)
{
    *__retval = BusyTaskModule__ConstructorClosure::New1(c);
}

bool BusyTaskModule__ConstructorClosure::_warning_;

// public ConstructorClosure(Fuse.Scripting.Context c) [instance] :568
void BusyTaskModule__ConstructorClosure::ctor_(::g::Fuse::Scripting::Context* c)
{
    _c = c;
}

// public object Construct(object[] args) [instance] :575
uObject* BusyTaskModule__ConstructorClosure::Construct(uArray* args)
{
    int ret2;

    if (!BusyTaskModule__ConstructorClosure::_warning_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[12/*"Use the `Bu...*/], this, ::STRINGS[3/*"/Users/paul...*/], 580, ::STRINGS[13/*"Construct"*/]);
        BusyTaskModule__ConstructorClosure::_warning_ = true;
    }

    if ((uPtr(args)->Length() == 0) || (uPtr(args)->Length() > 2))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[14/*"new BusyTas...*/]));

    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(::g::Fuse::Scripting::IThreadWorker::Wrap(uInterface(uPtr(uPtr(_c)->ThreadWorker()), ::TYPES[19/*Fuse.Scripting.IThreadWorker*/]), uPtr(args)->Strong<uObject*>(0)), ::TYPES[18/*Fuse.Node*/]);

    if (n == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[15/*"new BusyTas...*/]));

    int act = 4;

    if (args->Length() == 2)
        act = (::g::Fuse::Marshal__ToType_fn(::TYPES[20/*Fuse.Marshal.ToType<Fuse.Triggers.BusyTaskActivity>*/], uPtr(args)->Strong<uObject*>(1), &ret2), ret2);

    return uPtr(_c)->Unwrap(::g::Fuse::Triggers::BusyTask::New1(n, 1, act, ::STRINGS[5/*""*/]));
}

// public ConstructorClosure New(Fuse.Scripting.Context c) [static] :568
BusyTaskModule__ConstructorClosure* BusyTaskModule__ConstructorClosure::New1(::g::Fuse::Scripting::Context* c)
{
    BusyTaskModule__ConstructorClosure* obj1 = (BusyTaskModule__ConstructorClosure*)uNew(BusyTaskModule__ConstructorClosure_typeof());
    obj1->ctor_(c);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.ContentSizeLength :670
// {
static void IScrolledLengths__ContentSizeLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__ContentSizeLength_type, interface0));
}

IScrolledLengths__ContentSizeLength_type* IScrolledLengths__ContentSizeLength_typeof()
{
    static uSStrong<IScrolledLengths__ContentSizeLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__ContentSizeLength);
    options.TypeSize = sizeof(IScrolledLengths__ContentSizeLength_type);
    type = (IScrolledLengths__ContentSizeLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.ContentSizeLength", options);
    type->fp_build_ = IScrolledLengths__ContentSizeLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__ContentSizeLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__ContentSizeLength__GetPoints_fn;
    return type;
}

// public generated ContentSizeLength() :670
void IScrolledLengths__ContentSizeLength__ctor__fn(IScrolledLengths__ContentSizeLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) :672
void IScrolledLengths__ContentSizeLength__GetPoints_fn(IScrolledLengths__ContentSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated ContentSizeLength New() :670
void IScrolledLengths__ContentSizeLength__New1_fn(IScrolledLengths__ContentSizeLength** __retval)
{
    *__retval = IScrolledLengths__ContentSizeLength::New1();
}

// public generated ContentSizeLength() [instance] :670
void IScrolledLengths__ContentSizeLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance] :672
::g::Uno::Float2 IScrolledLengths__ContentSizeLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Uno::Float2__op_Multiply(value, ::g::Uno::Float2__op_Subtraction2(uPtr(scrollable)->MaxScroll(), uPtr(scrollable)->MinScroll()));
}

// public generated ContentSizeLength New() [static] :670
IScrolledLengths__ContentSizeLength* IScrolledLengths__ContentSizeLength::New1()
{
    IScrolledLengths__ContentSizeLength* obj1 = (IScrolledLengths__ContentSizeLength*)uNew(IScrolledLengths__ContentSizeLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// private sealed class Trigger.DeferredItem :2902
// {
static void Trigger__DeferredItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), offsetof(::g::Fuse::Triggers::Trigger__DeferredItem, Action), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Trigger__DeferredItem, Parent), 0);
}

uType* Trigger__DeferredItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Trigger__DeferredItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Trigger.DeferredItem", options);
    type->fp_build_ = Trigger__DeferredItem_build;
    type->fp_ctor_ = (void*)Trigger__DeferredItem__New1_fn;
    return type;
}

// public generated DeferredItem() :2902
void Trigger__DeferredItem__ctor__fn(Trigger__DeferredItem* __this)
{
    __this->ctor_();
}

// public generated DeferredItem New() :2902
void Trigger__DeferredItem__New1_fn(Trigger__DeferredItem** __retval)
{
    *__retval = Trigger__DeferredItem::New1();
}

// public void Perform() :2907
void Trigger__DeferredItem__Perform_fn(Trigger__DeferredItem* __this)
{
    __this->Perform();
}

// public generated DeferredItem() [instance] :2902
void Trigger__DeferredItem::ctor_()
{
}

// public void Perform() [instance] :2907
void Trigger__DeferredItem::Perform()
{
    uPtr(Action)->PerformFromNode(Parent);
}

// public generated DeferredItem New() [static] :2902
Trigger__DeferredItem* Trigger__DeferredItem::New1()
{
    Trigger__DeferredItem* obj1 = (Trigger__DeferredItem*)uNew(Trigger__DeferredItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// private sealed class StateGroup.GotoImpl :2010
// {
static void StateGroup__GotoImpl_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::StateGroup__GotoImpl, Group), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup__GotoImpl, Next), 0);
}

uType* StateGroup__GotoImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StateGroup__GotoImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.StateGroup.GotoImpl", options);
    type->fp_build_ = StateGroup__GotoImpl_build;
    type->fp_ctor_ = (void*)StateGroup__GotoImpl__New1_fn;
    return type;
}

// public generated GotoImpl() :2010
void StateGroup__GotoImpl__ctor__fn(StateGroup__GotoImpl* __this)
{
    __this->ctor_();
}

// public void Go() :2015
void StateGroup__GotoImpl__Go_fn(StateGroup__GotoImpl* __this)
{
    __this->Go();
}

// public generated GotoImpl New() :2010
void StateGroup__GotoImpl__New1_fn(StateGroup__GotoImpl** __retval)
{
    *__retval = StateGroup__GotoImpl::New1();
}

// public generated GotoImpl() [instance] :2010
void StateGroup__GotoImpl::ctor_()
{
}

// public void Go() [instance] :2015
void StateGroup__GotoImpl::Go()
{
    ::g::Fuse::Triggers::State* ret4;
    ::g::Fuse::Triggers::State* ret5;

    switch (uPtr(Group)->Transition())
    {
        case 0:
        {
            for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret4), ret4);
                uPtr(state)->On(state == Next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret5), ret5);
                uPtr(state1)->On(false);
            }

            uPtr(Group)->CheckAllDone();
            break;
        }
    }
}

// public generated GotoImpl New() [static] :2010
StateGroup__GotoImpl* StateGroup__GotoImpl::New1()
{
    StateGroup__GotoImpl* obj3 = (StateGroup__GotoImpl*)uNew(StateGroup__GotoImpl_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface IBusyHandler :338
// {
uInterfaceType* IBusyHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IBusyHandler", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------------

// public abstract interface IMediaPlayback :289
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------------

// public abstract interface IPlayback :264
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface IProgress :1444
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface IPulseTrigger :2189
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public abstract interface IScrolledLength :639
// {
uInterfaceType* IScrolledLength_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IScrolledLength", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public static class IScrolledLengths :644
// {
// static IScrolledLengths() :644
static void IScrolledLengths__cctor__fn(uType* __type)
{
    IScrolledLengths::Points_ = (uObject*)IScrolledLengths__PointsLength::New1();
    IScrolledLengths::Pixels_ = (uObject*)IScrolledLengths__PixelsLength::New1();
    IScrolledLengths::ContentSize_ = (uObject*)IScrolledLengths__ContentSizeLength::New1();
    IScrolledLengths::ScrollViewSize_ = (uObject*)IScrolledLengths__ScrollViewSizeLength::New1();
}

static void IScrolledLengths_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&::g::Fuse::Triggers::IScrolledLengths::ContentSize_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&::g::Fuse::Triggers::IScrolledLengths::Pixels_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&::g::Fuse::Triggers::IScrolledLengths::Points_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, uFieldFlagsStatic);
}

uClassType* IScrolledLengths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.IScrolledLengths", options);
    type->fp_build_ = IScrolledLengths_build;
    type->fp_cctor_ = IScrolledLengths__cctor__fn;
    return type;
}

uSStrong<uObject*> IScrolledLengths::ContentSize_;
uSStrong<uObject*> IScrolledLengths::Pixels_;
uSStrong<uObject*> IScrolledLengths::Points_;
uSStrong<uObject*> IScrolledLengths::ScrollViewSize_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface IValue<T> :1131
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// public static class LayoutTransition :26
// {
// static LayoutTransition() :26
static void LayoutTransition__cctor__fn(uType* __type)
{
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutTransition_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_sizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uFieldFlagsStatic);
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_build_ = LayoutTransition_build;
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    return type;
}

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) :79
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) :141
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) :49
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) :89
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) :136
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) :56
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() :30
void LayoutTransition__get_Transitioned_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;
uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) [static] :79
bool LayoutTransition::GetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) [static] :141
bool LayoutTransition::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) [static] :49
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Node* n)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) [static] :89
void LayoutTransition::SetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) [static] :136
void LayoutTransition::SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) [static] :56
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::g::Uno::Float3_typeof(), change));
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::VisualEvent* LayoutTransition::Transitioned()
{
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class LayoutTransitioned :17
// {
static void LayoutTransitioned_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->fp_build_ = LayoutTransitioned_build;
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))LayoutTransitioned__Invoke_fn;
    return type;
}

// public generated LayoutTransitioned() :17
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args) :19
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New() :17
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance] :17
void LayoutTransitioned::ctor_1()
{
    ctor_();
}

// public generated LayoutTransitioned New() [static] :17
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class LayoutTransitionedArgs :10
// {
static void LayoutTransitionedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* LayoutTransitionedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->fp_build_ = LayoutTransitionedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LayoutTransitionedArgs(Fuse.Visual node) :12
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Visual* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) :12
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Visual* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Visual node) [instance] :12
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Visual* node)
{
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) [static] :12
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Visual* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :16
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.PixelsLength :658
// {
static void IScrolledLengths__PixelsLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__PixelsLength_type, interface0));
}

IScrolledLengths__PixelsLength_type* IScrolledLengths__PixelsLength_typeof()
{
    static uSStrong<IScrolledLengths__PixelsLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__PixelsLength);
    options.TypeSize = sizeof(IScrolledLengths__PixelsLength_type);
    type = (IScrolledLengths__PixelsLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.PixelsLength", options);
    type->fp_build_ = IScrolledLengths__PixelsLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__PixelsLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__PixelsLength__GetPoints_fn;
    return type;
}

// public generated PixelsLength() :658
void IScrolledLengths__PixelsLength__ctor__fn(IScrolledLengths__PixelsLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) :660
void IScrolledLengths__PixelsLength__GetPoints_fn(IScrolledLengths__PixelsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated PixelsLength New() :658
void IScrolledLengths__PixelsLength__New1_fn(IScrolledLengths__PixelsLength** __retval)
{
    *__retval = IScrolledLengths__PixelsLength::New1();
}

// public generated PixelsLength() [instance] :658
void IScrolledLengths__PixelsLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance] :660
::g::Uno::Float2 IScrolledLengths__PixelsLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New1(value), uPtr(scrollable)->AbsoluteZoom());
}

// public generated PixelsLength New() [static] :658
IScrolledLengths__PixelsLength* IScrolledLengths__PixelsLength::New1()
{
    IScrolledLengths__PixelsLength* obj1 = (IScrolledLengths__PixelsLength*)uNew(IScrolledLengths__PixelsLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.PointsLength :646
// {
static void IScrolledLengths__PointsLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__PointsLength_type, interface0));
}

IScrolledLengths__PointsLength_type* IScrolledLengths__PointsLength_typeof()
{
    static uSStrong<IScrolledLengths__PointsLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__PointsLength);
    options.TypeSize = sizeof(IScrolledLengths__PointsLength_type);
    type = (IScrolledLengths__PointsLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.PointsLength", options);
    type->fp_build_ = IScrolledLengths__PointsLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__PointsLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__PointsLength__GetPoints_fn;
    return type;
}

// public generated PointsLength() :646
void IScrolledLengths__PointsLength__ctor__fn(IScrolledLengths__PointsLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) :648
void IScrolledLengths__PointsLength__GetPoints_fn(IScrolledLengths__PointsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated PointsLength New() :646
void IScrolledLengths__PointsLength__New1_fn(IScrolledLengths__PointsLength** __retval)
{
    *__retval = IScrolledLengths__PointsLength::New1();
}

// public generated PointsLength() [instance] :646
void IScrolledLengths__PointsLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance] :648
::g::Uno::Float2 IScrolledLengths__PointsLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Uno::Float2__New1(value);
}

// public generated PointsLength New() [static] :646
IScrolledLengths__PointsLength* IScrolledLengths__PointsLength::New1()
{
    IScrolledLengths__PointsLength* obj1 = (IScrolledLengths__PointsLength*)uNew(IScrolledLengths__PointsLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode :61
// {
static void LayoutTransition__PositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
}

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_build_ = LayoutTransition__PositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__PositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__PositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated PositionChangeMode() :61
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :63
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New() :61
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :71
void LayoutTransition__PositionChangeMode__Subscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :72
void LayoutTransition__PositionChangeMode__Unsubscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated PositionChangeMode() [instance] :61
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :63
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    ::g::Uno::Float2 oldPos, newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :71
uObject* LayoutTransition__PositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :72
void LayoutTransition__PositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated PositionChangeMode New() [static] :61
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public delegate void PulseTrigger<ArgsT>.PulseHandler(object sender, ArgsT args) :1569
uDelegateType* PulseTrigger__PulseHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.PulseTrigger`1.PulseHandler", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract class PulseTrigger<ArgsT> :1566
// {
static void PulseTrigger_build(uType* type)
{
    ::TYPES[24] = PulseTrigger__PulseHandler_typeof();
    type->SetPrecalc(
        PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::TYPES[24/*Fuse.Triggers.PulseTrigger`1.PulseHandler*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::PulseTrigger, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 30;
    options.GenericCount = 1;
    options.InterfaceCount = 8;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PulseTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PulseTrigger`1", options);
    type->fp_build_ = PulseTrigger_build;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated PulseTrigger() :1566
void PulseTrigger__ctor_5_fn(PulseTrigger* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) :1574
void PulseTrigger__add_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) :1574
void PulseTrigger__remove_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected void Pulse(ArgsT args) :1576
void PulseTrigger__Pulse1_fn(PulseTrigger* __this, ::g::Uno::EventArgs* args)
{
    __this->Pulse1(args);
}

// protected generated PulseTrigger() [instance] :1566
void PulseTrigger::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance] :1574
void PulseTrigger::add_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), __types[0]);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance] :1574
void PulseTrigger::remove_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), __types[0]);
}

// protected void Pulse(ArgsT args) [instance] :1576
void PulseTrigger::Pulse1(::g::Uno::EventArgs* args)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode :1227
// {
static void WhileKeyboardVisible__RelativeToKeyboardMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface1));
}

WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof()
{
    static uSStrong<WhileKeyboardVisible__RelativeToKeyboardMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode);
    options.TypeSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode_type);
    type = (WhileKeyboardVisible__RelativeToKeyboardMode_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", options);
    type->fp_build_ = WhileKeyboardVisible__RelativeToKeyboardMode_build;
    type->fp_ctor_ = (void*)WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))WhileKeyboardVisible__RelativeToKeyboardMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))WhileKeyboardVisible__RelativeToKeyboardMode__Unsubscribe_fn;
    return type;
}

// public generated RelativeToKeyboardMode() :1227
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :1229
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated RelativeToKeyboardMode New() :1227
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval)
{
    *__retval = WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :1234
void WhileKeyboardVisible__RelativeToKeyboardMode__Subscribe_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :1235
void WhileKeyboardVisible__RelativeToKeyboardMode__Unsubscribe_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated RelativeToKeyboardMode() [instance] :1227
void WhileKeyboardVisible__RelativeToKeyboardMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :1229
::g::Uno::Float3 WhileKeyboardVisible__RelativeToKeyboardMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(uPtr(t)->Vector(), ::g::Uno::Float3__New2(0.0f, ::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY(), 0.0f));
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :1234
uObject* WhileKeyboardVisible__RelativeToKeyboardMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :1235
void WhileKeyboardVisible__RelativeToKeyboardMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated RelativeToKeyboardMode New() [static] :1227
WhileKeyboardVisible__RelativeToKeyboardMode* WhileKeyboardVisible__RelativeToKeyboardMode::New1()
{
    WhileKeyboardVisible__RelativeToKeyboardMode* obj1 = (WhileKeyboardVisible__RelativeToKeyboardMode*)uNew(WhileKeyboardVisible__RelativeToKeyboardMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public class RemovingAnimation :1734
// {
static void RemovingAnimation_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Double removal of Visual");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[17] = uString::Const("Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual");
    ::STRINGS[18] = uString::Const("Unexpected done");
    ::STRINGS[19] = uString::Const("OnDone");
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RemovingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RemovingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RemovingAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface7),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(RemovingAnimation_type, interface8));
    type->SetFields(29,
        ::g::Fuse::PendingRemoveVisual_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation, _args), 0);
}

RemovingAnimation_type* RemovingAnimation_typeof()
{
    static uSStrong<RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(RemovingAnimation_type);
    type = (RemovingAnimation_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->fp_build_ = RemovingAnimation_build;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RemovingAnimation__OnUnrooted_fn;
    type->interface8.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated RemovingAnimation() :1734
void RemovingAnimation__ctor_5_fn(RemovingAnimation* __this)
{
    __this->ctor_5();
}

// private void Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual pr) :1738
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr)
{
    if (__this->_args != NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[16/*"Double remo...*/], __this, ::STRINGS[3/*"/Users/paul...*/], 1742, ::STRINGS[17/*"Fuse.IBegin...*/]);
        return;
    }

    __this->_args = pr;
    uPtr(__this->_args)->AddSubscriber();
    __this->Activate(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, __this));
}

// private void OnDone() :1751
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// protected override sealed void OnUnrooted() :1763
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);

    if (__this->_args != NULL)
    {
        uPtr(__this->_args)->RemoveSubscriber();
        __this->_args = NULL;
    }
}

// public generated RemovingAnimation() [instance] :1734
void RemovingAnimation::ctor_5()
{
    ctor_4();
}

// private void OnDone() [instance] :1751
void RemovingAnimation::OnDone()
{
    if (_args == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[18/*"Unexpected ...*/], this, ::STRINGS[3/*"/Users/paul...*/], 1755, ::STRINGS[19/*"OnDone"*/]);
        return;
    }

    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode :95
// {
static void LayoutTransition__ResizeChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0));
}

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_build_ = LayoutTransition__ResizeChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    return type;
}

// public generated ResizeChangeMode() :95
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) :97
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, relative, baseSize, deltaSize);
}

// public generated ResizeChangeMode New() :95
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance] :95
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance] :97
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static] :95
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode :109
// {
static void LayoutTransition__ScaleChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
}

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_build_ = LayoutTransition__ScaleChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__ScaleChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__ScaleChangeMode__Unsubscribe_fn;
    return type;
}

// public generated ScaleChangeMode() :109
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling v) :111
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New() :109
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :123
void LayoutTransition__ScaleChangeMode__Subscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :124
void LayoutTransition__ScaleChangeMode__Unsubscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ScaleChangeMode() [instance] :109
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :111
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return uPtr(v)->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :123
uObject* LayoutTransition__ScaleChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :124
void LayoutTransition__ScaleChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated ScaleChangeMode New() [static] :109
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public partial sealed class Scrolled :223
// {
// static Scrolled() :225
static void Scrolled__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[25/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Scrolled>*/], ::STRINGS[20/*"check"*/], uDelegate::New(::TYPES[26/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Scrolled, object[]>*/], (void*)Scrolled__check_fn), 2)));
}

static void Scrolled_build(uType* type)
{
    ::STRINGS[20] = uString::Const("check");
    ::STRINGS[21] = uString::Const("check takes no parameters");
    ::STRINGS[22] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno");
    ::STRINGS[23] = uString::Const("Scrolled could not find a Scrollable control.");
    ::STRINGS[24] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[26] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FindByType<Fuse.Controls.ScrollViewBase>*/, ::g::Fuse::Controls::ScrollViewBase_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Triggers::ScrolledArgs_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(30,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _inZone), 0,
        ::g::Fuse::Triggers::ScrollRegion_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _region), 0,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::Fuse::Triggers::Scrolled, _scrollable), 0);
}

::g::Fuse::Triggers::Trigger_type* Scrolled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Scrolled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Scrolled", options);
    type->fp_build_ = Scrolled_build;
    type->fp_cctor_ = Scrolled__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scrolled__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scrolled__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void check(Fuse.Scripting.Context c, Fuse.Triggers.Scrolled s, object[] args) :238
void Scrolled__check_fn(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args)
{
    Scrolled::check(c, s, args);
}

// private void Check() :318
void Scrolled__Check_fn(Scrolled* __this)
{
    __this->Check();
}

// protected override sealed void OnRooted() :282
void Scrolled__OnRooted_fn(Scrolled* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollViewBase*)uPtr(__this->Parent())->FindByType(::TYPES[27/*Fuse.Visual.FindByType<Fuse.Controls.ScrollViewBase>*/]));

    if (__this->_scrollable == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[23/*"Scrolled co...*/], __this, ::STRINGS[22/*"/Users/paul...*/], 288, ::STRINGS[24/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[28/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
    __this->_inZone = uPtr(__this->_region)->IsInZone(__this->_scrollable);
}

// private void OnScrollPositionChanged(object s, object args) :306
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted() :296
void Scrolled__OnUnrooted_fn(Scrolled* __this)
{
    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[28/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Check() [instance] :318
void Scrolled::Check()
{
    if ((_scrollable != NULL) && uPtr(_region)->IsInZone(_scrollable))
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// private void OnScrollPositionChanged(object s, object args) [instance] :306
void Scrolled::OnScrollPositionChanged(uObject* s, uObject* args)
{
    bool inz = uPtr(_region)->IsInZone(_scrollable);

    if (inz == _inZone)
        return;

    _inZone = inz;

    if (_inZone)
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// private static void check(Fuse.Scripting.Context c, Fuse.Triggers.Scrolled s, object[] args) [static] :238
void Scrolled::check(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args)
{
    Scrolled_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[21/*"check takes...*/], s, ::STRINGS[22/*"/Users/paul...*/], 242, ::STRINGS[20/*"check"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Scrolled__Check_fn, uPtr(s)), 1, ::g::Fuse::LayoutPriority::Post());
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class ScrolledArgs :261
// {
static void ScrolledArgs_build(uType* type)
{
}

uType* ScrolledArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(ScrolledArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrolledArgs", options);
    type->fp_build_ = ScrolledArgs_build;
    type->fp_ctor_ = (void*)ScrolledArgs__New2_fn;
    return type;
}

// public generated ScrolledArgs() :261
void ScrolledArgs__ctor_1_fn(ScrolledArgs* __this)
{
    __this->ctor_1();
}

// public generated ScrolledArgs New() :261
void ScrolledArgs__New2_fn(ScrolledArgs** __retval)
{
    *__retval = ScrolledArgs::New2();
}

// public generated ScrolledArgs() [instance] :261
void ScrolledArgs::ctor_1()
{
    ctor_();
}

// public generated ScrolledArgs New() [static] :261
ScrolledArgs* ScrolledArgs::New2()
{
    ScrolledArgs* obj1 = (ScrolledArgs*)uNew(ScrolledArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public enum ScrolledWhere :697
uEnumType* ScrolledWhere_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrolledWhere", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Start", 1LL,
        "End", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class ScrollRegion :707
// {
static void ScrollRegion_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Triggers::IScrolledLength_typeof();
    type->SetFields(0,
        ::TYPES[29/*Fuse.Triggers.IScrolledLength*/], offsetof(::g::Fuse::Triggers::ScrollRegion, RelativeTo), 0,
        ::g::Fuse::Triggers::ScrolledWhere_typeof(), offsetof(::g::Fuse::Triggers::ScrollRegion, To), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollRegion, Within), 0);
}

uType* ScrollRegion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScrollRegion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrollRegion", options);
    type->fp_build_ = ScrollRegion_build;
    return type;
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable) :736
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcWithin(scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable) :741
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval)
{
    *__retval = __this->IsInZone(scrollable);
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable) [instance] :736
::g::Uno::Float2 ScrollRegion::CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Fuse::Triggers::IScrolledLength::GetPoints(uInterface(uPtr(RelativeTo), ::TYPES[29/*Fuse.Triggers.IScrolledLength*/]), Within, scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable) [instance] :741
bool ScrollRegion::IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    ::g::Uno::Float2 w = CalcWithin(scrollable);
    float sw = uPtr(scrollable)->ToScalarPosition(w);
    float sp = scrollable->ToScalarPosition(scrollable->ScrollPosition());

    switch (To)
    {
        case 0:
            return false;
        case 1:
        {
            float smin = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MinScroll());
            return sp <= (smin + sw);
        }
        case 2:
        {
            float smax = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MaxScroll());
            return sp >= (smax - sw);
        }
    }

    return false;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/triggers/$.uno
// -----------------------------------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.ScrollViewSizeLength :683
// {
static void IScrolledLengths__ScrollViewSizeLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__ScrollViewSizeLength_type, interface0));
}

IScrolledLengths__ScrollViewSizeLength_type* IScrolledLengths__ScrollViewSizeLength_typeof()
{
    static uSStrong<IScrolledLengths__ScrollViewSizeLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__ScrollViewSizeLength);
    options.TypeSize = sizeof(IScrolledLengths__ScrollViewSizeLength_type);
    type = (IScrolledLengths__ScrollViewSizeLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.ScrollViewSizeLength", options);
    type->fp_build_ = IScrolledLengths__ScrollViewSizeLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__ScrollViewSizeLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__ScrollViewSizeLength__GetPoints_fn;
    return type;
}

// public generated ScrollViewSizeLength() :683
void IScrolledLengths__ScrollViewSizeLength__ctor__fn(IScrolledLengths__ScrollViewSizeLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) :685
void IScrolledLengths__ScrollViewSizeLength__GetPoints_fn(IScrolledLengths__ScrollViewSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated ScrollViewSizeLength New() :683
void IScrolledLengths__ScrollViewSizeLength__New1_fn(IScrolledLengths__ScrollViewSizeLength** __retval)
{
    *__retval = IScrolledLengths__ScrollViewSizeLength::New1();
}

// public generated ScrollViewSizeLength() [instance] :683
void IScrolledLengths__ScrollViewSizeLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance] :685
::g::Uno::Float2 IScrolledLengths__ScrollViewSizeLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Uno::Float2__op_Multiply(value, uPtr(scrollable)->ActualSize());
}

// public generated ScrollViewSizeLength New() [static] :683
IScrolledLengths__ScrollViewSizeLength* IScrolledLengths__ScrollViewSizeLength::New1()
{
    IScrolledLengths__ScrollViewSizeLength* obj1 = (IScrolledLengths__ScrollViewSizeLength*)uNew(IScrolledLengths__ScrollViewSizeLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public partial sealed class State :2067
// {
// static State() :2069
static void State__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[30/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.State>*/], ::STRINGS[25/*"goto"*/], uDelegate::New(::TYPES[31/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.State, object[]>*/], (void*)State__goto__fn), 2)));
}

static void State_build(uType* type)
{
    ::STRINGS[25] = uString::Const("goto");
    ::STRINGS[26] = uString::Const("Cannot call `Goto` on an unrooted `State`");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[27] = uString::Const("Goto");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[31] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::State, _stateGroup), 0);
}

::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->fp_build_ = State_build;
    type->fp_cctor_ = State__cctor_2_fn;
    type->fp_OnPlayStateChanged = (void(*)(::g::Fuse::Triggers::Trigger*, int*))State__OnPlayStateChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))State__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))State__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public void Goto() :2157
void State__Goto_fn(State* __this)
{
    __this->Goto();
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.State n, object[] args) :2083
void State__goto__fn(::g::Fuse::Scripting::Context* c, State* n, uArray* args)
{
    State::goto_(c, n, args);
}

// internal bool get_On() :2118
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// internal void set_On(bool value) :2119
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state) :2168
void State__OnPlayStateChanged_fn(State* __this, int* state)
{
    int state_ = *state;

    if ((__this->_stateGroup != NULL) && (state_ == 0))
        uPtr(__this->_stateGroup)->StateStopped();
}

// protected override sealed void OnRooted() :2134
void State__OnRooted_fn(State* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->_on)
        __this->Activate(NULL);
}

// protected override sealed void OnUnrooted() :2148
void State__OnUnrooted_fn(State* __this)
{
    if (__this->OverrideContextParent == __this->_stateGroup)
        __this->OverrideContextParent = NULL;

    __this->_stateGroup = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public new double get_Progress() :2155
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) :2142
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup)
{
    __this->RootStateGroup(stateGroup);
}

// public void Goto() [instance] :2157
void State::Goto()
{
    if (_stateGroup == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[26/*"Cannot call...*/], NULL, ::STRINGS[3/*"/Users/paul...*/], 2161, ::STRINGS[27/*"Goto"*/]);
        return;
    }

    uPtr(_stateGroup)->Goto(this);
}

// internal bool get_On() [instance] :2118
bool State::On()
{
    return _on;
}

// internal void set_On(bool value) [instance] :2119
void State::On(bool value)
{
    if (_on == value)
        return;

    _on = value;

    if (Parent() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance] :2155
double State::Progress1()
{
    return Progress();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) [instance] :2142
void State::RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup)
{
    ::g::Fuse::Node* ind1;
    OverrideContextParent = (ind1 = OverrideContextParent, ((ind1 != NULL) ? ind1 : stateGroup));
    _stateGroup = stateGroup;
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.State n, object[] args) [static] :2083
void State::goto_(::g::Fuse::Scripting::Context* c, State* n, uArray* args)
{
    State_typeof()->Init();
    uPtr(n)->Goto();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// private enum Timeline.State :2269
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public partial sealed class StateGroup :1785
// {
// static StateGroup() :1787
static void StateGroup__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[32/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[25/*"goto"*/], uDelegate::New(::TYPES[33/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__goto__fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[32/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.StateGroup>*/], ::STRINGS[28/*"gotoNext"*/], uDelegate::New(::TYPES[33/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.StateGroup, object[]>*/], (void*)StateGroup__gotoNext_fn), 2)));
}

static void StateGroup_build(uType* type)
{
    ::STRINGS[25] = uString::Const("goto");
    ::STRINGS[28] = uString::Const("gotoNext");
    ::STRINGS[29] = uString::Const("StateGroup.goto requires 1 argument");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[30] = uString::Const("goto_");
    ::STRINGS[31] = uString::Const("Unable to find State with Name: ");
    ::STRINGS[32] = uString::Const("gotoName");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[32] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[33] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[34] = ::g::Uno::String_typeof();
    ::TYPES[35] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[36] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Triggers.State*/], NULL);
    ::TYPES[38] = ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[35/*Fuse.Triggers.State*/], NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12,
        ::TYPES[35/*Fuse.Triggers.State*/], offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/], offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
}

::g::Fuse::Node_type* StateGroup_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->fp_build_ = StateGroup_build;
    type->fp_cctor_ = StateGroup__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Fuse.Triggers.State get_Active() :1919
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value) :1920
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex() :1943
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value) :1950
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone() :2040
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) :1961
void StateGroup__FindObjectByName_fn(StateGroup* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(*name, acceptor);
}

// internal void Goto(Fuse.Triggers.State next) :2002
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) :1821
void StateGroup__goto__fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup::goto_(c, n, args);
}

// private static void gotoName(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, string name) :1800
void StateGroup__gotoName_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name)
{
    StateGroup::gotoName(c, n, name);
}

// private static void gotoNext(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) :1841
void StateGroup__gotoNext_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup::gotoNext(c, n, args);
}

// public void GotoNextState() :1956
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// protected override sealed void OnRooted() :1987
void StateGroup__OnRooted_fn(StateGroup* __this)
{
    ::g::Fuse::Triggers::State* ret10;
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Node__OnRooted_fn(__this);

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret10), ret10);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
        uPtr(state)->On(state == __this->_active);
        state->RootStateGroup(__this);
        uPtr(__this->Parent())->Add1(state);
    }
}

// protected override sealed void OnUnrooted() :1977
void StateGroup__OnUnrooted_fn(StateGroup* __this)
{
    ::g::Fuse::Triggers::State* ret12;
    ::g::Fuse::Node__OnUnrooted_fn(__this);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
        uPtr(__this->Parent())->Remove1(state);
    }
}

// private static bool StateAcceptor(object o) :1795
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval)
{
    *__retval = StateGroup::StateAcceptor(o);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() :1914
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// internal void StateStopped() :2034
void StateGroup__StateStopped_fn(StateGroup* __this)
{
    __this->StateStopped();
}

// public Fuse.Triggers.StateTransition get_Transition() :1973
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value) :1974
void StateGroup__set_Transition_fn(StateGroup* __this, int* value)
{
    __this->Transition(*value);
}

// public Fuse.Triggers.State get_Active() [instance] :1919
::g::Fuse::Triggers::State* StateGroup::Active()
{
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :1920
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :1943
int StateGroup::ActiveIndex()
{
    ::g::Fuse::Triggers::State* ret13;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret13), ret13))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :1950
void StateGroup::ActiveIndex(int value)
{
    ::g::Fuse::Triggers::State* ret14;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[38/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret14), ret14));
}

// private void CheckAllDone() [instance] :2040
void StateGroup::CheckAllDone()
{
    ::g::Fuse::Triggers::State* ret7;
    bool all = true;

    for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret7), ret7);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) [instance] :1961
uObject* StateGroup::FindObjectByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    ::g::Fuse::Triggers::State* ret8;
    bool ret9;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (::g::Uno::UX::Selector__op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret9, 1, s), ret9))
            return s;
    }

    return NULL;
}

// internal void Goto(Fuse.Triggers.State next) [instance] :2002
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    StateGroup__GotoImpl* collection4;
    _active = next;
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)StateGroup__GotoImpl__Go_fn, uPtr((collection4 = StateGroup__GotoImpl::New1(), uPtr(collection4)->Next = next, uPtr(collection4)->Group = this, collection4))), -1, 0);
}

// public void GotoNextState() [instance] :1956
void StateGroup::GotoNextState()
{
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :1914
uObject* StateGroup::States()
{
    return _states;
}

// internal void StateStopped() [instance] :2034
void StateGroup::StateStopped()
{
    if (Transition() == 1)
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)StateGroup__CheckAllDone_fn, this), -1, 0);
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :1973
int StateGroup::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :1974
void StateGroup::Transition(int value)
{
    _transition = value;
}

// private static void goto_(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) [static] :1821
void StateGroup::goto_(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[29/*"StateGroup....*/], n, ::STRINGS[3/*"/Users/paul...*/], 1825, ::STRINGS[30/*"goto_"*/], NULL);
        return;
    }

    if (uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[34/*string*/]))
        StateGroup::gotoName(c, n, uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[34/*string*/]));
    else
        uPtr(n)->Goto(uAs< ::g::Fuse::Triggers::State*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[35/*Fuse.Triggers.State*/]));
}

// private static void gotoName(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, string name) [static] :1800
void StateGroup::gotoName(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name)
{
    StateGroup_typeof()->Init();
    ::g::Fuse::Triggers::State* state = uAs< ::g::Fuse::Triggers::State*>(uPtr(n)->FindObjectByName(::g::Uno::UX::Selector__op_Implicit(name), uDelegate::New(::TYPES[36/*Uno.Predicate<object>*/], (void*)StateGroup__StateAcceptor_fn)), ::TYPES[35/*Fuse.Triggers.State*/]);

    if (state == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[31/*"Unable to f...*/], name), n, ::STRINGS[3/*"/Users/paul...*/], 1805, ::STRINGS[32/*"gotoName"*/], NULL);
        return;
    }

    n->Goto(state);
}

// private static void gotoNext(Fuse.Scripting.Context c, Fuse.Triggers.StateGroup n, object[] args) [static] :1841
void StateGroup::gotoNext(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args)
{
    StateGroup_typeof()->Init();
    uPtr(n)->GotoNextState();
}

// private static bool StateAcceptor(object o) [static] :1795
bool StateGroup::StateAcceptor(uObject* o)
{
    StateGroup_typeof()->Init();
    return uIs(o, ::TYPES[35/*Fuse.Triggers.State*/]);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum StateTransition :1858
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public partial sealed class Timeline :2254
// {
// static Timeline() :2530
static void Timeline__cctor_2_fn(uType* __type)
{
    Timeline::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"Progress"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 9, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[34/*"pause"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pause_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[35/*"pulse"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulse_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[36/*"pulseBackward"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseBackward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[37/*"pulseForward"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__pulseForward_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[38/*"play"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[39/*"playTo"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__playTo_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[40/*"resume"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__resume_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[41/*"seek"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__seek_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[39/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Timeline>*/], ::STRINGS[42/*"stop"*/], uDelegate::New(::TYPES[40/*Uno.Action<Fuse.Scripting.Context, Fuse.Triggers.Timeline, object[]>*/], (void*)Timeline__stop_fn), 2)));
}

static void Timeline_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Progress");
    ::STRINGS[34] = uString::Const("pause");
    ::STRINGS[35] = uString::Const("pulse");
    ::STRINGS[36] = uString::Const("pulseBackward");
    ::STRINGS[37] = uString::Const("pulseForward");
    ::STRINGS[38] = uString::Const("play");
    ::STRINGS[39] = uString::Const("playTo");
    ::STRINGS[40] = uString::Const("resume");
    ::STRINGS[41] = uString::Const("seek");
    ::STRINGS[42] = uString::Const("stop");
    ::STRINGS[43] = uString::Const("Timeline.seek requires 1 argument");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[39] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[40] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[41] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[42] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[43] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Timeline_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Timeline_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Timeline_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(Timeline_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(Timeline_type, interface7),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(Timeline_type, interface9),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface10));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasInitialProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _hasTargetProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _initialProgress), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _lastPlay), 0,
        ::TYPES[41/*Uno.UX.IPropertyListener*/], offsetof(::g::Fuse::Triggers::Timeline, _progressOrigin), 0,
        Timeline__State_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _state), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _targetProgress), 0,
        ::TYPES[43/*Uno.UX.ValueChangedHandler<double>*/], offsetof(::g::Fuse::Triggers::Timeline, ProgressChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Triggers::Timeline::_progressName_, uFieldFlagsStatic);
}

Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->fp_build_ = Timeline_build;
    type->fp_cctor_ = Timeline__cctor_2_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface8.fp_Stop = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackStop_fn;
    type->interface8.fp_Pause = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackPause_fn;
    type->interface8.fp_Resume = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackResume_fn;
    type->interface8.fp_PlayTo = (void(*)(uObject*, double*))Timeline__FuseTriggersIPlaybackPlayTo_fn;
    type->interface8.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface8.fp_set_Progress = (void(*)(uObject*, double*))Timeline__set_Progress_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))Timeline__Pulse1_fn;
    type->interface10.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface10.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface10.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private void BypassOff() :2503
void Timeline__BypassOff_fn(Timeline* __this)
{
    __this->BypassOff();
}

// private void Fuse.Triggers.IPlayback.Pause() :2424
void Timeline__FuseTriggersIPlaybackPause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Fuse.Triggers.IPlayback.PlayTo(double progress) :2438
void Timeline__FuseTriggersIPlaybackPlayTo_fn(Timeline* __this, double* progress)
{
    double progress_ = *progress;
    __this->PlayTo1(progress_);
}

// private void Fuse.Triggers.IPlayback.Resume() :2429
void Timeline__FuseTriggersIPlaybackResume_fn(Timeline* __this)
{
    if (__this->IsRootingCompleted())
        __this->Play((double)((__this->_lastPlay == 0) ? 1 : 0));
}

// private void Fuse.Triggers.IPlayback.Stop() :2414
void Timeline__FuseTriggersIPlaybackStop_fn(Timeline* __this)
{
    if (__this->IsRootingCompleted())
    {
        __this->Seek(0.0, 0);
        __this->_targetProgress = 0.0;
        __this->_state = 1;
    }
}

// protected override sealed void OnProgressChanged() :2483
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    ::g::Uno::UX::ValueChangedArgs* ret3;
    uObject* ind1 = __this->_progressOrigin;
    uObject* sender = (ind1 != NULL) ? ind1 : uAs<uObject*>(__this, ::TYPES[41/*Uno.UX.IPropertyListener*/]);
    __this->OnPropertyChanged1(Timeline::_progressName(), sender);

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, sender, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[42/*Uno.UX.ValueChangedArgs<double>*/], uCRef(__this->Progress1()), &ret3), ret3));
}

// protected override sealed void OnRooted() :2330
void Timeline__OnRooted_fn(Timeline* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_initialProgress, 0);

        if ((__this->Bypass() == 0) && !__this->_hasInitialProgress)
            __this->BypassSeek(__this->TargetProgress(), 0);

        if (__this->_state == 0)
            __this->Play(__this->TargetProgress());
    }
}

// private static void pause(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2621
void Timeline__pause_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pause(c, n, args);
}

// public void Pause() :2393
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Play(double progress) :2382
void Timeline__Play_fn(Timeline* __this, double* progress)
{
    __this->Play(*progress);
}

// private static void playTo(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2583
void Timeline__playTo_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::playTo(c, n, args);
}

// public void PlayTo(double progress) :2369
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public new double get_Progress() :2457
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public new void set_Progress(double value) :2458
void Timeline__set_Progress_fn(Timeline* __this, double* value)
{
    __this->Progress1(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2347
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2347
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private static void pulse(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2550
void Timeline__pulse_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulse(c, n, args);
}

// public new void Pulse() :2492
void Timeline__Pulse1_fn(Timeline* __this)
{
    __this->Pulse1();
}

// private static void pulseBackward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2570
void Timeline__pulseBackward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulseBackward(c, n, args);
}

// public new void PulseBackward() :2509
void Timeline__PulseBackward1_fn(Timeline* __this)
{
    __this->PulseBackward1();
}

// private static void pulseForward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2560
void Timeline__pulseForward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::pulseForward(c, n, args);
}

// public void PulseForward() :2497
void Timeline__PulseForward_fn(Timeline* __this)
{
    __this->PulseForward();
}

// private static void resume(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2611
void Timeline__resume_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::resume(c, n, args);
}

// public void Resume() :2405
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// private static void seek(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2632
void Timeline__seek_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::seek(c, n, args);
}

// private static void stop(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) :2600
void Timeline__stop_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline::stop(c, n, args);
}

// public void Stop() :2354
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress() :2294
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value) :2295
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

// public void TimelinePlayTo(double progress) :2375
void Timeline__TimelinePlayTo_fn(Timeline* __this, double* progress)
{
    __this->TimelinePlayTo(*progress);
}

::g::Uno::UX::Selector Timeline::_progressName_;

// private void BypassOff() [instance] :2503
void Timeline::BypassOff()
{
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public void Pause() [instance] :2393
void Timeline::Pause()
{
    if (IsRootingCompleted())
    {
        _state = 1;
        Seek(Progress1(), 0);
    }
}

// private void Play(double progress) [instance] :2382
void Timeline::Play(double progress)
{
    _state = 0;
    _lastPlay = ((progress >= Progress1()) ? 0 : 1);
    PlayTo(progress, _lastPlay);
    _targetProgress = progress;
}

// public void PlayTo(double progress) [instance] :2369
void Timeline::PlayTo1(double progress)
{
    TimelinePlayTo(progress);
}

// public new double get_Progress() [instance] :2457
double Timeline::Progress1()
{
    return Progress();
}

// public new void set_Progress(double value) [instance] :2458
void Timeline::Progress1(double value)
{
    Seek(value, 0);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2347
void Timeline::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[43/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2347
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[43/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance] :2492
void Timeline::Pulse1()
{
    Pulse();
}

// public new void PulseBackward() [instance] :2509
void Timeline::PulseBackward1()
{
    BypassActivate();
    _targetProgress = 0.0;
    DirectDeactivate();
}

// public void PulseForward() [instance] :2497
void Timeline::PulseForward()
{
    _targetProgress = 1.0;
    DirectActivate(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance] :2405
void Timeline::Resume()
{
    if (IsRootingCompleted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void Stop() [instance] :2354
void Timeline::Stop1()
{
    if (IsRootingCompleted())
    {
        Seek(Progress1(), 0);
        _targetProgress = Progress1();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance] :2294
double Timeline::TargetProgress()
{
    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :2295
void Timeline::TargetProgress(double value)
{
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRootingCompleted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// public void TimelinePlayTo(double progress) [instance] :2375
void Timeline::TimelinePlayTo(double progress)
{
    if (IsRootingCompleted())
        Play(progress);
}

// private static void pause(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2621
void Timeline::pause(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Pause();
}

// private static void playTo(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2583
void Timeline::playTo(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"Timeline.se...*/], n, ::STRINGS[3/*"/Users/paul...*/], 2587, ::STRINGS[39/*"playTo"*/], NULL);
        return;
    }

    uPtr(n)->PlayTo1(::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void pulse(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2550
void Timeline::pulse(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Pulse1();
}

// private static void pulseBackward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2570
void Timeline::pulseBackward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->PulseBackward1();
}

// private static void pulseForward(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2560
void Timeline::pulseForward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->PulseForward();
}

// private static void resume(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2611
void Timeline::resume(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Resume();
}

// private static void seek(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2632
void Timeline::seek(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"Timeline.se...*/], n, ::STRINGS[3/*"/Users/paul...*/], 2636, ::STRINGS[41/*"seek"*/], NULL);
        return;
    }

    uPtr(n)->Progress1(::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void stop(Fuse.Scripting.Context c, Fuse.Triggers.Timeline n, object[] args) [static] :2600
void Timeline::stop(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args)
{
    Timeline_typeof()->Init();
    uPtr(n)->Stop1();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno
// --------------------------------------------------------------------------------------------------------

// public class Transition :2951
// {
static void Transition_build(uType* type)
{
    ::TYPES[44] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[45] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[46] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[47] = ::g::Fuse::Internal::MiniList_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Transition, _autoRelease), 0,
        ::g::Fuse::Triggers::TransitionDirection_typeof(), offsetof(::g::Fuse::Triggers::Transition, _direction), 0,
        ::TYPES[47/*Fuse.Internal.MiniList<string>*/], offsetof(::g::Fuse::Triggers::Transition, _from), 0,
        ::g::Fuse::Triggers::TransitionGroup_typeof(), offsetof(::g::Fuse::Triggers::Transition, _group), 0,
        ::g::Fuse::Triggers::TransitionMode_typeof(), offsetof(::g::Fuse::Triggers::Transition, _mode), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Transition, _style), 0,
        ::TYPES[47/*Fuse.Internal.MiniList<string>*/], offsetof(::g::Fuse::Triggers::Transition, _to), 0,
        ::g::Fuse::Animations::Animator_typeof(), offsetof(::g::Fuse::Triggers::Transition, _useAnimator), 0,
        ::g::Fuse::Controls::NavigationControlTransition_typeof(), offsetof(::g::Fuse::Triggers::Transition, _useTransition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Transition, IsSelected), 0);
}

::g::Fuse::Triggers::Trigger_type* Transition_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Transition);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Transition", options);
    type->fp_build_ = Transition_build;
    type->fp_ctor_ = (void*)Transition__New2_fn;
    type->fp_OnPlayStateChanged = (void(*)(::g::Fuse::Triggers::Trigger*, int*))Transition__OnPlayStateChanged_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Transition__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Transition__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Transition__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Transition() :2951
void Transition__ctor_5_fn(Transition* __this)
{
    __this->ctor_5();
}

// private void AddUseTransition() :3064
void Transition__AddUseTransition_fn(Transition* __this)
{
    __this->AddUseTransition();
}

// public bool get_AutoRelease() :3017
void Transition__get_AutoRelease_fn(Transition* __this, bool* __retval)
{
    *__retval = __this->AutoRelease();
}

// public void set_AutoRelease(bool value) :3018
void Transition__set_AutoRelease_fn(Transition* __this, bool* value)
{
    __this->AutoRelease(*value);
}

// public Fuse.Triggers.TransitionDirection get_Direction() :3005
void Transition__get_Direction_fn(Transition* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.TransitionDirection value) :3006
void Transition__set_Direction_fn(Transition* __this, int* value)
{
    __this->Direction(*value);
}

// public Fuse.Triggers.TransitionMode get_Mode() :3024
void Transition__get_Mode_fn(Transition* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Triggers.TransitionMode value) :3025
void Transition__set_Mode_fn(Transition* __this, int* value)
{
    __this->Mode(*value);
}

// public generated Transition New() :2951
void Transition__New2_fn(Transition** __retval)
{
    *__retval = Transition::New2();
}

// private void OnPageProgressChanged(object sender, Fuse.Navigation.NavigationArgs args) :3233
void Transition__OnPageProgressChanged_fn(Transition* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    __this->OnPageProgressChanged(sender, args);
}

// protected override sealed void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state) :3210
void Transition__OnPlayStateChanged_fn(Transition* __this, int* state)
{
    int state_ = *state;

    if (__this->_group == NULL)
        return;

    uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, state_ != 0);
}

// protected override sealed void OnProgressChanged() :3200
void Transition__OnProgressChanged_fn(Transition* __this)
{
    ::g::Fuse::Triggers::Trigger__OnProgressChanged_fn(__this);

    if ((((__this->_group != NULL) && (__this->Progress() >= 1.0)) && (__this->PlayState() == 2)) && __this->AutoRelease())
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)::g::Fuse::Triggers::TransitionGroup__ReleasePage_fn, uPtr(__this->_group)), -1, 0);
}

// protected override sealed void OnRooted() :3049
void Transition__OnRooted_fn(Transition* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_group = ::g::Fuse::Triggers::TransitionGroup::Root(__this);

    if (__this->_group != NULL)
    {
        __this->AddUseTransition();
        uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, false);
        uPtr(uPtr(__this->_group)->Navigator())->add_PageProgressChanged(uDelegate::New(::TYPES[46/*Fuse.Navigation.NavigationHandler*/], (void*)Transition__OnPageProgressChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted() :3093
void Transition__OnUnrooted_fn(Transition* __this)
{
    bool ret2;

    if (__this->_useAnimator != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Animators()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), __this->_useAnimator, &ret2);

    if (__this->_group != NULL)
    {
        uPtr(uPtr(__this->_group)->Navigator())->remove_PageProgressChanged(uDelegate::New(::TYPES[46/*Fuse.Navigation.NavigationHandler*/], (void*)Transition__OnPageProgressChanged_fn, __this));
        uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, false);
        uPtr(__this->_group)->Unroot(__this);
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal int Priority(bool isActive, bool isBackward, string newPath, string oldPath, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) :3107
void Transition__Priority_fn(Transition* __this, bool* isActive, bool* isBackward, uString* newPath, uString* oldPath, int* mode, uString* operationStyle, int* __retval)
{
    *__retval = __this->Priority(*isActive, *isBackward, newPath, oldPath, *mode, operationStyle);
}

// internal void QuickDeactivate() :3218
void Transition__QuickDeactivate_fn(Transition* __this)
{
    __this->QuickDeactivate();
}

// public string get_Style() :3032
void Transition__get_Style_fn(Transition* __this, uString** __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(string value) :3033
void Transition__set_Style_fn(Transition* __this, uString* value)
{
    __this->Style(value);
}

// public Fuse.Controls.NavigationControlTransition get_UseTransition() :3044
void Transition__get_UseTransition_fn(Transition* __this, int* __retval)
{
    *__retval = __this->UseTransition();
}

// public void set_UseTransition(Fuse.Controls.NavigationControlTransition value) :3045
void Transition__set_UseTransition_fn(Transition* __this, int* value)
{
    __this->UseTransition(*value);
}

// public generated Transition() [instance] :2951
void Transition::ctor_5()
{
    _autoRelease = true;
    _useTransition = 1;
    ctor_4();
}

// private void AddUseTransition() [instance] :3064
void Transition::AddUseTransition()
{
    int use = UseTransition();

    if (use == 0)
        use = uPtr(uPtr(_group)->Navigator())->Transition();

    switch (use)
    {
        case 0:
        case 1:
            break;
        case 2:
        {
            ::g::Fuse::Animations::Move* move = ::g::Fuse::Animations::Move::New2();
            move->X((float)((Direction() == 1) ? 1 : -1));
            move->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
            move->Duration(0.3);
            move->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
            _useAnimator = move;
            break;
        }
    }

    if (_useAnimator != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), _useAnimator);
}

// public bool get_AutoRelease() [instance] :3017
bool Transition::AutoRelease()
{
    return _autoRelease;
}

// public void set_AutoRelease(bool value) [instance] :3018
void Transition::AutoRelease(bool value)
{
    _autoRelease = value;
}

// public Fuse.Triggers.TransitionDirection get_Direction() [instance] :3005
int Transition::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Triggers.TransitionDirection value) [instance] :3006
void Transition::Direction(int value)
{
    _direction = value;
}

// public Fuse.Triggers.TransitionMode get_Mode() [instance] :3024
int Transition::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Triggers.TransitionMode value) [instance] :3025
void Transition::Mode(int value)
{
    _mode = value;
}

// private void OnPageProgressChanged(object sender, Fuse.Navigation.NavigationArgs args) [instance] :3233
void Transition::OnPageProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    if (!IsSelected || (_group == NULL))
    {
        if (uPtr(args)->Mode() == 1)
            BypassDeactivate();
        else
            QuickDeactivate();

        return;
    }

    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(uAs<uObject*>(uPtr(_group)->Navigator(), ::TYPES[45/*Fuse.Navigation.INavigation*/])), ::TYPES[45/*Fuse.Navigation.INavigation*/]), uPtr(_group)->Page());
    int d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;
    float p = ::g::Uno::Math::Abs1(ps.Progress);

    if (uPtr(args)->Mode() == 0)
        PlayTo((double)p, d);
    else if (uPtr(args)->Mode() == 2)
        DirectSeek((double)p, d);
    else
        BypassSeek((double)p, d);
}

// internal int Priority(bool isActive, bool isBackward, string newPath, string oldPath, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) [instance] :3107
int Transition::Priority(bool isActive, bool isBackward, uString* newPath, uString* oldPath, int mode, uString* operationStyle)
{
    bool normActive = isActive != isBackward;
    uString* toPath = isBackward ? oldPath : newPath;
    uString* fromPath = isBackward ? newPath : oldPath;
    int priority = 0;

    if (Direction() != 0)
    {
        bool exclude = false;

        switch (Direction())
        {
            case 1:
            {
                priority = 1;
                exclude = isActive == isBackward;
                break;
            }
            case 2:
            {
                priority = 1;
                exclude = isActive != isBackward;
                break;
            }
            case 3:
            {
                priority = 2;
                exclude = !isActive;
                break;
            }
            case 4:
            {
                priority = 2;
                exclude = isActive;
                break;
            }
            case 5:
            {
                priority = 3;
                exclude = isBackward || isActive;
                break;
            }
            case 7:
            {
                priority = 3;
                exclude = !isBackward || isActive;
                break;
            }
            case 6:
            {
                priority = 3;
                exclude = !isBackward || !isActive;
                break;
            }
            case 8:
            {
                priority = 3;
                exclude = isBackward || !isActive;
                break;
            }
        }

        if (exclude)
            return -1;
    }

    if (::g::Uno::String::op_Inequality(Style(), NULL))
    {
        priority = priority + 1000;

        if (::g::Uno::String::op_Inequality(Style(), operationStyle))
            return -1;
    }

    if (Mode() != 0)
    {
        priority = priority + 100;

        if ((Mode() == 2) && (mode != 2))
            return -1;

        if ((Mode() == 1) && (mode == 2))
            return -1;
    }

    if (_to.Count(::TYPES[47/*Fuse.Internal.MiniList<string>*/]) > 0)
    {
        if (!normActive && _to.Contains(::TYPES[47/*Fuse.Internal.MiniList<string>*/], toPath))
            return priority + 20;

        return -1;
    }

    if (_from.Count(::TYPES[47/*Fuse.Internal.MiniList<string>*/]) > 0)
    {
        if (normActive && _from.Contains(::TYPES[47/*Fuse.Internal.MiniList<string>*/], fromPath))
            return priority + 10;

        return -1;
    }

    return priority;
}

// internal void QuickDeactivate() [instance] :3218
void Transition::QuickDeactivate()
{
    if (Progress() < 1.0)
        Deactivate();
    else
        BypassDeactivate();
}

// public string get_Style() [instance] :3032
uString* Transition::Style()
{
    return _style;
}

// public void set_Style(string value) [instance] :3033
void Transition::Style(uString* value)
{
    _style = value;
}

// public Fuse.Controls.NavigationControlTransition get_UseTransition() [instance] :3044
int Transition::UseTransition()
{
    return _useTransition;
}

// public void set_UseTransition(Fuse.Controls.NavigationControlTransition value) [instance] :3045
void Transition::UseTransition(int value)
{
    _useTransition = value;
}

// public generated Transition New() [static] :2951
Transition* Transition::New2()
{
    Transition* obj1 = (Transition*)uNew(Transition_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno
// --------------------------------------------------------------------------------------------------------

// public enum TransitionDirection :2897
uEnumType* TransitionDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TransitionDirection", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Any", 0LL,
        "InFront", 1LL,
        "Behind", 2LL,
        "ToActive", 3LL,
        "ToInactive", 4LL,
        "ToBack", 5LL,
        "FromBack", 6LL,
        "ToFront", 7LL,
        "FromFront", 8LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno
// --------------------------------------------------------------------------------------------------------

// internal sealed class TransitionGroup :2762
// {
// static TransitionGroup() :2762
static void TransitionGroup__cctor__fn(uType* __type)
{
    TransitionGroup::_groupMap_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[48/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Triggers.TransitionGroup>*/]));
}

static void TransitionGroup_build(uType* type)
{
    ::STRINGS[44] = uString::Const("Transition must have a Navigator ancestor");
    ::STRINGS[45] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno");
    ::STRINGS[46] = uString::Const("Root");
    ::STRINGS[47] = uString::Const("Transition must have a Visual parent");
    ::TYPES[48] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), type, NULL);
    ::TYPES[49] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Transition_typeof(), NULL);
    ::TYPES[50] = ::g::Fuse::Controls::NavigationSwitchedHandler_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[51] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetFields(0,
        ::TYPES[51/*Fuse.Controls.Navigator*/], offsetof(::g::Fuse::Triggers::TransitionGroup, _navigator), 0,
        ::TYPES[4/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::TransitionGroup, _parent), 0,
        ::g::Fuse::Triggers::Transition_typeof(), offsetof(::g::Fuse::Triggers::TransitionGroup, _selected), 0,
        ::TYPES[49/*Uno.Collections.List<Fuse.Triggers.Transition>*/], offsetof(::g::Fuse::Triggers::TransitionGroup, _states), 0,
        ::TYPES[48/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Triggers.TransitionGroup>*/], (uintptr_t)&::g::Fuse::Triggers::TransitionGroup::_groupMap_, uFieldFlagsStatic);
}

uType* TransitionGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TransitionGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.TransitionGroup", options);
    type->fp_build_ = TransitionGroup_build;
    type->fp_cctor_ = TransitionGroup__cctor__fn;
    return type;
}

// public TransitionGroup(Fuse.Controls.Navigator navigator, Fuse.Visual parent) :2801
void TransitionGroup__ctor__fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    __this->ctor_(navigator, parent);
}

// public void Add(Fuse.Triggers.Transition t) :2823
void TransitionGroup__Add_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t)
{
    __this->Add(t);
}

// private void Cleanup() :2817
void TransitionGroup__Cleanup_fn(TransitionGroup* __this)
{
    __this->Cleanup();
}

// public Fuse.Controls.Navigator get_Navigator() :2808
void TransitionGroup__get_Navigator_fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator** __retval)
{
    *__retval = __this->Navigator();
}

// public TransitionGroup New(Fuse.Controls.Navigator navigator, Fuse.Visual parent) :2801
void TransitionGroup__New1_fn(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent, TransitionGroup** __retval)
{
    *__retval = TransitionGroup::New1(navigator, parent);
}

// private void OnSwitched(object sender, Fuse.Controls.NavigatorSwitchedArgs args) :2840
void TransitionGroup__OnSwitched_fn(TransitionGroup* __this, uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args)
{
    __this->OnSwitched(sender, args);
}

// public Fuse.Visual get_Page() :2810
void TransitionGroup__get_Page_fn(TransitionGroup* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// public void ReleasePage() :2812
void TransitionGroup__ReleasePage_fn(TransitionGroup* __this)
{
    __this->ReleasePage();
}

// public static Fuse.Triggers.TransitionGroup Root(Fuse.Triggers.Transition t) :2766
void TransitionGroup__Root_fn(::g::Fuse::Triggers::Transition* t, TransitionGroup** __retval)
{
    *__retval = TransitionGroup::Root(t);
}

// private void SelectTransition(Fuse.Triggers.Transition which) :2885
void TransitionGroup__SelectTransition_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* which)
{
    __this->SelectTransition(which);
}

// public void Unroot(Fuse.Triggers.Transition t) :2828
void TransitionGroup__Unroot_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t)
{
    __this->Unroot(t);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TransitionGroup::_groupMap_;

// public TransitionGroup(Fuse.Controls.Navigator navigator, Fuse.Visual parent) [instance] :2801
void TransitionGroup::ctor_(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    _states = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[49/*Uno.Collections.List<Fuse.Triggers.Transition>*/]));
    _parent = parent;
    _navigator = navigator;
    uPtr(_navigator)->add_Switched(uDelegate::New(::TYPES[50/*Fuse.Controls.NavigationSwitchedHandler*/], (void*)TransitionGroup__OnSwitched_fn, this));
}

// public void Add(Fuse.Triggers.Transition t) [instance] :2823
void TransitionGroup::Add(::g::Fuse::Triggers::Transition* t)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_states), t);
}

// private void Cleanup() [instance] :2817
void TransitionGroup::Cleanup()
{
    uPtr(_navigator)->remove_Switched(uDelegate::New(::TYPES[50/*Fuse.Controls.NavigationSwitchedHandler*/], (void*)TransitionGroup__OnSwitched_fn, this));
}

// public Fuse.Controls.Navigator get_Navigator() [instance] :2808
::g::Fuse::Controls::Navigator* TransitionGroup::Navigator()
{
    return _navigator;
}

// private void OnSwitched(object sender, Fuse.Controls.NavigatorSwitchedArgs args) [instance] :2840
void TransitionGroup::OnSwitched(uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args)
{
    ::g::Fuse::Triggers::Transition* ret2;
    ::g::Fuse::Triggers::Transition* ret3;
    int activeDirection = (uPtr(args)->OldVisual == _parent) ? -1 : (uPtr(args)->NewVisual == _parent) ? 1 : 0;

    if ((activeDirection == 0) && (_selected != NULL))
    {
        SelectTransition(_selected);
        return;
    }

    bool thisActive = activeDirection == 1;
    bool isBackward = args->Operation == 3;
    ::g::Fuse::Triggers::Transition* selectTrans = NULL;
    int prio = -1;

    for (int i = 0; i < uPtr(_states)->Count(); ++i)
    {
        int p = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int>(i), &ret2), ret2))->Priority(thisActive, isBackward, uPtr(args)->NewPath, uPtr(args)->OldPath, uPtr(args)->Mode, uPtr(args)->OperationStyle);

        if (p > prio)
        {
            selectTrans = (::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int>(i), &ret3), ret3);
            prio = p;
        }
    }

    if ((selectTrans == NULL) && (uPtr(_navigator)->Transition() != 1))
    {
        bool forward = thisActive != isBackward;
        ::g::Fuse::Triggers::Transition* trans = ::g::Fuse::Triggers::Transition::New2();
        trans->UseTransition(0);
        trans->Direction(forward ? 1 : 2);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_parent)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), trans);
        selectTrans = trans;
    }

    SelectTransition(selectTrans);
}

// public Fuse.Visual get_Page() [instance] :2810
::g::Fuse::Visual* TransitionGroup::Page()
{
    return _parent;
}

// public void ReleasePage() [instance] :2812
void TransitionGroup::ReleasePage()
{
    uPtr(_navigator)->ReleasePage(_parent);
}

// private void SelectTransition(Fuse.Triggers.Transition which) [instance] :2885
void TransitionGroup::SelectTransition(::g::Fuse::Triggers::Transition* which)
{
    ::g::Fuse::Triggers::Transition* ret5;
    ::g::Fuse::Triggers::Transition* ret6;

    for (int i = 0; i < uPtr(_states)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int>(i), &ret5), ret5))->IsSelected = ((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int>(i), &ret6), ret6) == which);

    _selected = which;
}

// public void Unroot(Fuse.Triggers.Transition t) [instance] :2828
void TransitionGroup::Unroot(::g::Fuse::Triggers::Transition* t)
{
    bool ret7;
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_states), t, &ret7);

    if (uPtr(_states)->Count() == 0)
    {
        Cleanup();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(TransitionGroup::_groupMap()), _parent, &ret8);
    }
}

// public TransitionGroup New(Fuse.Controls.Navigator navigator, Fuse.Visual parent) [static] :2801
TransitionGroup* TransitionGroup::New1(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    TransitionGroup* obj1 = (TransitionGroup*)uNew(TransitionGroup_typeof());
    obj1->ctor_(navigator, parent);
    return obj1;
}

// public static Fuse.Triggers.TransitionGroup Root(Fuse.Triggers.Transition t) [static] :2766
TransitionGroup* TransitionGroup::Root(::g::Fuse::Triggers::Transition* t)
{
    TransitionGroup_typeof()->Init();
    bool ret4;
    ::g::Fuse::Node* q = uPtr(t)->ContextParent();
    ::g::Fuse::Controls::Navigator* nav = NULL;

    while ((q != NULL) && (nav == NULL))
    {
        nav = uAs< ::g::Fuse::Controls::Navigator*>(q, ::TYPES[51/*Fuse.Controls.Navigator*/]);
        q = uPtr(q)->ContextParent();
    }

    if (nav == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[44/*"Transition ...*/], t, ::STRINGS[45/*"/Users/paul...*/], 2777, ::STRINGS[46/*"Root"*/], NULL);
        return NULL;
    }

    ::g::Fuse::Visual* vis = uAs< ::g::Fuse::Visual*>(t->Parent(), ::TYPES[4/*Fuse.Visual*/]);

    if (vis == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[47/*"Transition ...*/], t, ::STRINGS[45/*"/Users/paul...*/], 2784, ::STRINGS[46/*"Root"*/], NULL);
        return NULL;
    }

    TransitionGroup* tg;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(TransitionGroup::_groupMap()), t->Parent(), (void**)(&tg), &ret4), ret4))
    {
        tg = TransitionGroup::New1(nav, vis);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(TransitionGroup::_groupMap()), uPtr(t)->Parent(), tg);
    }

    uPtr(tg)->Add(t);
    return tg;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno
// --------------------------------------------------------------------------------------------------------

// public enum TransitionMode :2932
uEnumType* TransitionMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TransitionMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "NonPrepare", 1LL,
        "Prepare", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract class Trigger :2718
// {
// static Trigger() :2718
static void Trigger__cctor_1_fn(uType* __type)
{
    Trigger::ProgressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"Progress"*/]);
}

static void Trigger_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Progress");
    ::STRINGS[48] = uString::Const("Trigger.OnPlaybackdone called with _animState == null");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[49] = uString::Const("Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone");
    ::STRINGS[50] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[44] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(Trigger_type, interface7));
    type->SetFields(16,
        ::TYPES[52/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/], offsetof(::g::Fuse::Triggers::Trigger, _actions), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animation), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animState), 0,
        ::TYPES[10/*Uno.Action*/], offsetof(::g::Fuse::Triggers::Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneOn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _isStarted), 0,
        ::g::Fuse::Triggers::TriggerPlayState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _lastPlayState), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootCaptureIndex1), 0,
        ::g::Fuse::Triggers::TriggerPlayState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootPlayState), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _rootProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _startAtZero), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _suppressPropertyChangedProgress), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _Bypass), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Triggers::Trigger::ProgressName_, uFieldFlagsStatic);
}

Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::NodeGroupBase_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->fp_build_ = Trigger_build;
    type->fp_cctor_ = Trigger__cctor_1_fn;
    type->fp_OnPlayStateChanged = Trigger__OnPlayStateChanged_fn;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Trigger() :2718
void Trigger__ctor_4_fn(Trigger* __this)
{
    __this->ctor_4();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() :2842
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done]) :3042
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// private void AddDeferredAction(Fuse.Triggers.Actions.TriggerAction i) :2912
void Trigger__AddDeferredAction_fn(Trigger* __this, ::g::Fuse::Triggers::Actions::TriggerAction* i)
{
    __this->AddDeferredAction(i);
}

// public Fuse.Animations.TriggerAnimation get_Animation() :2753
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) :2758
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :2828
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() :2805
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) :2806
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() :2742
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) :2742
void Trigger__set_Bypass_fn(Trigger* __this, int* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate() :3053
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate() :3087
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :3333
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupStableState() :2959
void Trigger__CleanupStableState_fn(Trigger* __this)
{
    __this->CleanupStableState();
}

// private void CleanupState() :3164
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState() :3173
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// protected void Deactivate() :3070
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// protected void DirectActivate([Uno.Action done]) :3060
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done)
{
    __this->DirectActivate(done);
}

// protected void DirectDeactivate() :3081
void Trigger__DirectDeactivate_fn(Trigger* __this)
{
    __this->DirectDeactivate();
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :3328
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->DirectSeek(*progress, *direction);
}

// private void EnsureAnimationLength() :3192
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress) :3182
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// private void Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone(object s) :2924
void Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    __this->SetPlayState(0);

    if (__this->_animState == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[48/*"Trigger.OnP...*/], __this, ::STRINGS[3/*"/Users/paul...*/], 2930, ::STRINGS[49/*"Fuse.Animat...*/]);
        return;
    }

    uDelegate* perform = NULL;

    if (::g::Uno::Delegate::op_Inequality(__this->_doneAction, NULL))
    {
        if ((__this->_doneOn && uPtr(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && uPtr(__this->_animState)->ProgressFullOff()))
            perform = __this->_doneAction;

        __this->_doneAction = NULL;
    }

    __this->CleanupStableState();

    if (::g::Uno::Delegate::op_Inequality(perform, NULL))
        uPtr(perform)->InvokeVoid();
}

// private void Fuse.Animations.IBasePlayerFeedback.OnStable(object s) :2954
void Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn(Trigger* __this, uObject* s)
{
    __this->CleanupStableState();
}

// private void Fuse.Animations.IUnwrappedPlayerFeedback.OnProgressUpdated(object s, double prev, double cur, Fuse.Animations.PlayerFeedbackFlags flags) :3262
void Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s, double* prev, double* cur, int* flags)
{
    double cur_ = *cur;
    double prev_ = *prev;
    int flags_ = *flags;
    ::g::Fuse::Triggers::Actions::TriggerAction* ret3;
    double diff = cur_ - prev_;
    __this->SetPlayState(__this->WhatDirection(diff, (flags_ & 2) == 2));
    __this->OnProgressChanged();

    if (!__this->_suppressPropertyChangedProgress)
        __this->OnPropertyChanged(Trigger::ProgressName());

    if (__this->_actions == NULL)
        return;

    int dir = (diff > 0.0) ? 0 : 1;

    for (int i = 0; i < uPtr(__this->_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_actions), uCRef<int>(i), &ret3), ret3);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(__this->_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev_) && ((double)tp < cur_)) || ((tp == 1.0f) && (cur_ == 1.0)) : (((double)tp <= prev_) && ((double)tp > cur_)) || ((tp == 0.0f) && (cur_ == 0.0));

        if (call && ((action->When() == 2) || (action->When() == dir)))
            __this->AddDeferredAction(action);
    }
}

// public bool get_HasActions() :2851
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasBackwardAnimation() :2814
void Trigger__get_HasBackwardAnimation_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasBackwardAnimation();
}

// protected void InversePulse() :3124
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// private bool IsForward(Fuse.Triggers.TriggerPlayState ps) :3246
void Trigger__IsForward_fn(Trigger* __this, int* ps, bool* __retval)
{
    *__retval = __this->IsForward(*ps);
}

// protected virtual void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state) :2917
void Trigger__OnPlayStateChanged_fn(Trigger* __this, int* state)
{
}

// protected virtual void OnProgressChanged() :3235
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// protected override void OnRooted() :3353
void Trigger__OnRooted_fn(Trigger* __this)
{
    ::g::Fuse::NodeGroupBase__OnRooted_fn(__this);
    __this->_rootCaptureIndex1 = ::g::Fuse::Node::RootCaptureIndex();

    if (__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_rootProgress, 0);

        if (__this->_rootPlayState != 0)
            __this->PlayEnd((__this->_rootPlayState == 2) ? true : false, __this->_doneAction);
    }
    else
    {
        __this->_lastPlayState = 0;
        __this->_doneAction = NULL;
        __this->_doneOn = false;

        if (__this->_startAtZero)
        {
            __this->Start();
            __this->EnsureState(0.0);
        }
    }
}

// protected override void OnUnrooted() :3385
void Trigger__OnUnrooted_fn(Trigger* __this)
{
    __this->Stop(true);
    __this->CleanupState();
    ::g::Fuse::NodeGroupBase__OnUnrooted_fn(__this);
}

// private void PlayActions(Fuse.Triggers.Actions.TriggerWhen when) :2979
void Trigger__PlayActions_fn(Trigger* __this, int* when)
{
    __this->PlayActions(*when);
}

// protected void PlayEnd(bool on, [Uno.Action done]) :3140
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn() :3129
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected internal Fuse.Triggers.TriggerPlayState get_PlayState() :2922
void Trigger__get_PlayState_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->PlayState();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) :3298
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant)
{
    __this->PlayTo(*progress, *variant);
}

// public double get_Progress() :2868
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse() :3100
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) :3317
void Trigger__Seek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->Seek(*progress, *direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :3339
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int* direction, int* flags)
{
    __this->SeekImpl(*progress, *direction, *flags);
}

// private void SetDone(Uno.Action done, bool on) :2854
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayState(Fuse.Triggers.TriggerPlayState next) :2879
void Trigger__SetPlayState_fn(Trigger* __this, int* next)
{
    __this->SetPlayState(*next);
}

// private bool get_ShouldBypass() :3019
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldBypass();
}

// private bool get_ShouldIgnore() :3010
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldIgnore();
}

// protected void Start() :2967
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop([bool force]) :2995
void Trigger__Stop_fn(Trigger* __this, bool* force)
{
    __this->Stop(*force);
}

// private void StopAction() :3093
void Trigger__StopAction_fn(Trigger* __this)
{
    __this->StopAction();
}

// private Fuse.Triggers.TriggerPlayState WhatDirection(double diff, bool animating) :3239
void Trigger__WhatDirection_fn(Trigger* __this, double* diff, bool* animating, int* __retval)
{
    *__retval = __this->WhatDirection(*diff, *animating);
}

::g::Uno::UX::Selector Trigger::ProgressName_;

// protected generated Trigger() [instance] :2718
void Trigger::ctor_4()
{
    ctor_3();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :2842
uObject* Trigger::Actions()
{
    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[52/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :3042
void Trigger::Activate(uDelegate* done)
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassActivate();
    else
        DirectActivate(done);
}

// private void AddDeferredAction(Fuse.Triggers.Actions.TriggerAction i) [instance] :2912
void Trigger::AddDeferredAction(::g::Fuse::Triggers::Actions::TriggerAction* i)
{
    Trigger__DeferredItem* collection1;
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Trigger__DeferredItem__Perform_fn, uPtr((collection1 = Trigger__DeferredItem::New1(), uPtr(collection1)->Action = i, uPtr(collection1)->Parent = Parent(), collection1))), -1, 0);
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :2753
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2758
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :2828
uObject* Trigger::Animators()
{
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :2805
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :2806
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uPtr(Animation())->Backward(value);
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :2742
int Trigger::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :2742
void Trigger::Bypass(int value)
{
    _Bypass = value;
}

// protected void BypassActivate() [instance] :3053
void Trigger::BypassActivate()
{
    BypassSeek(1.0, 0);
    PlayOn();
}

// protected void BypassDeactivate() [instance] :3087
void Trigger::BypassDeactivate()
{
    BypassSeek(0.0, 0);
    DirectDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :3333
void Trigger::BypassSeek(double progress, int direction)
{
    SeekImpl(progress, direction, 3);
}

// private void CleanupStableState() [instance] :2959
void Trigger::CleanupStableState()
{
    if ((_animState == NULL) || !uPtr(_animState)->IsStable())
        return;

    if (uPtr(_animState)->ProgressFullOff() && !_startAtZero)
        CleanupState();
}

// private void CleanupState() [instance] :3164
void Trigger::CleanupState()
{
    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :3173
void Trigger::CreateState()
{
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(Parent());
    uPtr(_animState)->Feedback = (uObject*)this;
}

// protected void Deactivate() [instance] :3070
void Trigger::Deactivate()
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassDeactivate();
    else
        DirectDeactivate();
}

// protected void DirectActivate([Uno.Action done]) [instance] :3060
void Trigger::DirectActivate(uDelegate* done)
{
    PlayEnd(true, done);
}

// protected void DirectDeactivate() [instance] :3081
void Trigger::DirectDeactivate()
{
    PlayEnd(false, uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :3328
void Trigger::DirectSeek(double progress, int direction)
{
    SeekImpl(progress, direction, 1);
}

// private void EnsureAnimationLength() [instance] :3192
void Trigger::EnsureAnimationLength()
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret2;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret2), ret2);
        float when = uPtr(action)->Delay();

        if ((action->When() == 0) || (action->When() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->When() == 1) || (action->When() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New2();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);

    if (HasBackwardAnimation())
    {
        n = ::g::Fuse::Animations::Nothing::New2();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::TYPES[44/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);
    }
}

// private bool EnsureState(double progress) [instance] :3182
bool Trigger::EnsureState(double progress)
{
    if ((progress > 0.0) || _startAtZero)
    {
        if (_animState == NULL)
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance] :2851
bool Trigger::HasActions()
{
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasBackwardAnimation() [instance] :2814
bool Trigger::HasBackwardAnimation()
{
    return uPtr(Animation())->HasBackward();
}

// protected void InversePulse() [instance] :3124
void Trigger::InversePulse()
{
    PlayEnd(false, uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// private bool IsForward(Fuse.Triggers.TriggerPlayState ps) [instance] :3246
bool Trigger::IsForward(int ps)
{
    return (ps == 2) || (ps == 4);
}

// private void PlayActions(Fuse.Triggers.Actions.TriggerWhen when) [instance] :2979
void Trigger::PlayActions(int when)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret4;

    if (_actions != NULL)

        for (int i = 0; i < uPtr(_actions)->Count(); ++i)
        {
            ::g::Fuse::Triggers::Actions::TriggerAction* act = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret4), ret4);

            if (uPtr(act)->When() == when)
                uPtr(act)->PerformFromNode(Parent());
        }
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :3140
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    if (on)
        Start();

    SetDone(done, on);

    if (((on && (Progress() < 1.0)) || (!on && (Progress() > 0.0))) || (_lastPlayState != 0))
        SetPlayState(on ? 2 : 1);

    if ((!on && (Progress() <= 0.0)) && (_animState == NULL))
    {
        if (::g::Uno::Delegate::op_Inequality(done, NULL))
            uPtr(done)->InvokeVoid();

        _doneAction = NULL;
    }
    else if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :3129
void Trigger::PlayOn()
{
    PlayEnd(true, NULL);
}

// protected internal Fuse.Triggers.TriggerPlayState get_PlayState() [instance] :2922
int Trigger::PlayState()
{
    return _lastPlayState;
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :3298
void Trigger::PlayTo(double progress, int variant)
{
    if (progress > Progress())
        SetPlayState(2);
    else if (progress < Progress())
        SetPlayState(1);

    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// public double get_Progress() [instance] :2868
double Trigger::Progress()
{
    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :3100
void Trigger::Pulse()
{
    if (ShouldIgnore())
        return;

    SetPlayState(0);
    DirectActivate(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Trigger__DirectDeactivate_fn, this));
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :3317
void Trigger::Seek(double progress, int direction)
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassSeek(progress, direction);
    else
        DirectSeek(progress, direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :3339
void Trigger::SeekImpl(double progress, int direction, int flags)
{
    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, flags);
}

// private void SetDone(Uno.Action done, bool on) [instance] :2854
void Trigger::SetDone(uDelegate* done, bool on)
{
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayState(Fuse.Triggers.TriggerPlayState next) [instance] :2879
void Trigger::SetPlayState(int next)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret5;

    if (next == _lastPlayState)
        return;

    _lastPlayState = next;
    OnPlayStateChanged(next);

    if ((next == 0) || (_actions == NULL))
        return;

    int dir = IsForward(next) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret5), ret5);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->When() == dir) || (uPtr(action)->When() == 2))
            AddDeferredAction(action);
    }
}

// private bool get_ShouldBypass() [instance] :3019
bool Trigger::ShouldBypass()
{
    if (Bypass() == 1)
        return false;

    if (IsPreservedRootFrame() && (Bypass() != 2))
        return false;

    if (::g::Fuse::Node::IsRootCapture(_rootCaptureIndex1))
        return true;
    else
        _rootCaptureIndex1 = 0;

    return !IsRootingCompleted();
}

// private bool get_ShouldIgnore() [instance] :3010
bool Trigger::ShouldIgnore()
{
    return !IsRootingStarted();
}

// protected void Start() [instance] :2967
void Trigger::Start()
{
    if (!_isStarted)
    {
        if (!IsRootingStarted())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[50/*"Trigger sta...*/], this)));

        _isStarted = true;
        UseContent(true);
        PlayActions(3);
    }
}

// protected void Stop([bool force]) [instance] :2995
void Trigger::Stop(bool force)
{
    if (_startAtZero && !force)
        return;

    if (_isStarted)
    {
        PlayActions(4);
        UseContent(false);
        _isStarted = false;
    }
}

// private void StopAction() [instance] :3093
void Trigger::StopAction()
{
    Stop(false);
}

// private Fuse.Triggers.TriggerPlayState WhatDirection(double diff, bool animating) [instance] :3239
int Trigger::WhatDirection(double diff, bool animating)
{
    if (animating)
        return (diff > 0.0) ? 2 : (diff < 0.0) ? 1 : 0;

    return (diff > 0.0) ? 4 : (diff < 0.0) ? 3 : 0;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum TriggerBypassMode :2657
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL,
        "Rooting", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public enum TriggerPlayState :2667
uEnumType* TriggerPlayState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerPlayState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Stopped", 0LL,
        "Backward", 1LL,
        "Forward", 2LL,
        "SeekBackward", 3LL,
        "SeekForward", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// internal enum BusyTask.Type :349
uEnumType* BusyTask__Type_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTask.Type", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RootingPersistent", 0LL,
        "UnrootingDone", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract class WhileBool :3405
// {
static void WhileBool_build(uType* type)
{
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileBool_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileBool_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileBool_type, interface7),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileBool_type, interface8),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(WhileBool_type, interface9));
    type->SetFields(35);
}

WhileBool_type* WhileBool_typeof()
{
    static uSStrong<WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileValue_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(WhileBool_type);
    type = (WhileBool_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->fp_build_ = WhileBool_build;
    type->interface9.fp_Toggle = (void(*)(uObject*))WhileBool__Toggle_fn;
    type->interface8.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileBool() :3405
void WhileBool__ctor_7_fn(WhileBool* __this)
{
    __this->ctor_7();
}

// public void Toggle() :3413
void WhileBool__Toggle_fn(WhileBool* __this)
{
    __this->Toggle();
}

// public new bool get_Value() :3409
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value) :3410
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance] :3405
void WhileBool::ctor_7()
{
    ctor_6();
}

// public void Toggle() [instance] :3413
void WhileBool::Toggle()
{
    Value1(!Value1());
}

// public new bool get_Value() [instance] :3409
bool WhileBool::Value1()
{
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :3410
void WhileBool::Value1(bool value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhileCompleted :3997
// {
// static WhileCompleted() :3997
static void WhileCompleted__cctor_2_fn(uType* __type)
{
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileCompleted_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(30,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->fp_build_ = WhileCompleted_build;
    type->fp_cctor_ = WhileCompleted__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static bool IsCompleted(Fuse.Visual n) :4001
void WhileCompleted__IsCompleted_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// protected override sealed void OnRooted() :4022
void WhileCompleted__OnRooted_fn(WhileCompleted* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileCompleted::IsCompleted(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :4008
void WhileCompleted__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// private static bool IsCompleted(Fuse.Visual n) [static] :4001
bool WhileCompleted::IsCompleted(::g::Fuse::Visual* n)
{
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[53/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[53/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :4008
void WhileCompleted::SetState(::g::Fuse::Visual* n, bool paused)
{
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[53/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhileCompleted* wl = uAs<WhileCompleted*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhileCompleted_typeof());

            if ((wl != NULL) && uPtr(wl)->IsRootingCompleted())
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhileFalse :3495
// {
static void WhileFalse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface7),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface8),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface9));
    type->SetFields(35);
}

::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->fp_build_ = WhileFalse_build;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface9.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface8.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected override sealed bool get_IsOn() :3497
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    return *__retval = !__this->Value1(), void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhileKeyboardVisible :1149
// {
// static WhileKeyboardVisible() :1149
static void WhileKeyboardVisible__cctor_2_fn(uType* __type)
{
    WhileKeyboardVisible::Keyboard_ = (uObject*)WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

static void WhileKeyboardVisible_build(uType* type)
{
    ::TYPES[54] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[55] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _baseHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _threshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileKeyboardVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible", options);
    type->fp_build_ = WhileKeyboardVisible_build;
    type->fp_cctor_ = WhileKeyboardVisible__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private float GetHeight(Uno.Rect r) :1189
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval)
{
    *__retval = __this->GetHeight(*r);
}

// private void OnBottomBarResize(object sender, Fuse.Platform.SystemUIWillResizeEventArgs args) :1196
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnBottomBarResize(sender, args);
}

// protected override sealed void OnRooted() :1160
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[55/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    __this->_baseHeight = 0.0f;
}

// protected override sealed void OnUnrooted() :1179
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this)
{
    ::g::Fuse::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[55/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public float get_Threshold() :1156
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

float WhileKeyboardVisible::_deltaY_;
uSStrong<uObject*> WhileKeyboardVisible::Keyboard_;

// private float GetHeight(Uno.Rect r) [instance] :1189
float WhileKeyboardVisible::GetHeight(::g::Uno::Rect r)
{
    return r.Bottom - r.Top;
}

// private void OnBottomBarResize(object sender, Fuse.Platform.SystemUIWillResizeEventArgs args) [instance] :1196
void WhileKeyboardVisible::OnBottomBarResize(uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = GetHeight(uPtr(args)->EndFrame());
    newHeight = ::g::Uno::Rect__Intersect(::g::Fuse::Platform::SystemUI::Frame(), uPtr(args)->EndFrame()).Size().Y;
    float density = 1.0f;
    uObject* vp = uPtr(Parent())->Viewport();

    if (vp != NULL)
        density = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(vp), ::TYPES[54/*Fuse.ICommonViewport*/]));

    float newDeltaY = (newHeight - _baseHeight) / density;

    if (newDeltaY > Threshold())
    {
        WhileKeyboardVisible::_deltaY() = newDeltaY;
        Activate(NULL);
    }
    else
        Deactivate();
}

// public float get_Threshold() [instance] :1156
float WhileKeyboardVisible::Threshold()
{
    return _threshold;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhilePaused :3958
// {
// static WhilePaused() :3958
static void WhilePaused__cctor_2_fn(uType* __type)
{
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePaused_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(30,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->fp_build_ = WhilePaused_build;
    type->fp_cctor_ = WhilePaused__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePaused__OnRooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static bool IsPaused(Fuse.Visual n) :3962
void WhilePaused__IsPaused_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// protected override sealed void OnRooted() :3983
void WhilePaused__OnRooted_fn(WhilePaused* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePaused::IsPaused(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused) :3969
void WhilePaused__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// private static bool IsPaused(Fuse.Visual n) [static] :3962
bool WhilePaused::IsPaused(::g::Fuse::Visual* n)
{
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[53/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[53/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool paused) [static] :3969
void WhilePaused::SetState(::g::Fuse::Visual* n, bool paused)
{
    WhilePaused_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[53/*bool*/], paused));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePaused* wl = uAs<WhilePaused*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhilePlaying :3919
// {
// static WhilePlaying() :3919
static void WhilePlaying__cctor_2_fn(uType* __type)
{
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePlaying_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(30,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->fp_build_ = WhilePlaying_build;
    type->fp_cctor_ = WhilePlaying__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static bool IsPlaying(Fuse.Visual n) :3923
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// protected override sealed void OnRooted() :3944
void WhilePlaying__OnRooted_fn(WhilePlaying* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePlaying::IsPlaying(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool playing) :3930
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// private static bool IsPlaying(Fuse.Visual n) [static] :3923
bool WhilePlaying::IsPlaying(::g::Fuse::Visual* n)
{
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[53/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[53/*bool*/], v);
}

// public static void SetState(Fuse.Visual n, bool playing) [static] :3930
void WhilePlaying::SetState(::g::Fuse::Visual* n, bool playing)
{
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Node* ret2;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[53/*bool*/], playing));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(n->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            WhilePlaying* wl = uAs<WhilePlaying*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract class WhileTrigger :4226
// {
static void WhileTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->fp_build_ = WhileTrigger_build;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileTrigger() :4226
void WhileTrigger__ctor_5_fn(WhileTrigger* __this)
{
    __this->ctor_5();
}

// public generated bool get_Invert() :4230
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value) :4230
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected void SetActive(bool on) :4232
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance] :4226
void WhileTrigger::ctor_5()
{
    ctor_4();
}

// public generated bool get_Invert() [instance] :4230
bool WhileTrigger::Invert()
{
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :4230
void WhileTrigger::Invert(bool value)
{
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :4232
void WhileTrigger::SetActive(bool on)
{
    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public class WhileTrue :3482
// {
static void WhileTrue_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface7),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface8),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface9));
    type->SetFields(35);
}

::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->fp_build_ = WhileTrue_build;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface9.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface8.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileTrue() :3482
void WhileTrue__ctor_8_fn(WhileTrue* __this)
{
    __this->ctor_8();
}

// protected override sealed bool get_IsOn() :3484
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue() [instance] :3482
void WhileTrue::ctor_8()
{
    ctor_7();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract class WhileValue<T> :4264
// {
static void WhileValue_build(uType* type)
{
    ::STRINGS[51] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno");
    ::STRINGS[52] = uString::Const("Pulse");
    ::TYPES[56] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[57] = ::g::Uno::UX::ValueChangedHandler_typeof();
    type->SetPrecalc(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileValue_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileValue_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileValue_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileValue_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileValue_type, interface7),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface8));
    type->SetFields(30,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::TYPES[56/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::TYPES[56/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[57/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
}

WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 35;
    options.GenericCount = 1;
    options.InterfaceCount = 9;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->fp_build_ = WhileValue_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface8.fp_Pulse = (void(*)(uObject*))WhileValue__Pulse1_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileValue() :4264
void WhileValue__ctor_6_fn(WhileValue* __this)
{
    __this->ctor_6();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) :4312
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted() :4320
void WhileValue__OnRooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(__this->__type->GetBase(WhileValue_typeof()), __this->Parent())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted() :4328
void WhileValue__OnUnrooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) :4338
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse() :4296
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source() :4290
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value) :4291
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// public T get_Value() :4270
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(2/*T*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[1]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :4276
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), __this->_value()), uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;
        __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :4294
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :4294
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance] :4264
void WhileValue::ctor_6()
{
    ctor_5();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :4338
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :4296
void WhileValue::Pulse1()
{
    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[51/*"`Pulse` on ...*/], this, ::STRINGS[3/*"/Users/paul...*/], 4300, ::STRINGS[52/*"Pulse"*/]);
        ::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_ = true;
    }

    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance] :4290
uObject* WhileValue::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :4291
void WhileValue::Source(uObject* value)
{
    _source = value;
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :4294
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :4294
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :4312
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->ContextParent() != NULL)
        return WhileValue::FindValueNode(__type, uPtr(n)->ContextParent());

    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------

// internal static class WhileValueStatic :4259
// {
static void WhileValueStatic_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_, uFieldFlagsStatic);
}

uClassType* WhileValueStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.WhileValueStatic", options);
    type->fp_build_ = WhileValueStatic_build;
    return type;
}

bool WhileValueStatic::_deprecatedNote_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
static void LayoutTransition__WorldPositionChangeMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
}

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_build_ = LayoutTransition__WorldPositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__WorldPositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated WorldPositionChangeMode() :32
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :34
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New() :32
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :39
void LayoutTransition__WorldPositionChangeMode__Subscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :40
void LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated WorldPositionChangeMode() [instance] :32
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :39
uObject* LayoutTransition__WorldPositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :40
void LayoutTransition__WorldPositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated WorldPositionChangeMode New() [static] :32
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
