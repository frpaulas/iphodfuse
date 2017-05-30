// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Selection.Select-30798591.h>
#include <Fuse.Selection.Select-94349afa.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Selection.Selection.How.h>
#include <Fuse.Selection.SelectMode.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Visual.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[32];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Selection{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// private enum Selection.How :748
uEnumType* Selection__How_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.Selection.How", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "API", 0LL,
        "Observable", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// private sealed class Selection.ListWrapper :754
// {
static void Selection__ListWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Selection__ListWrapper_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Selection::Selection__ListWrapper, _list), 0);
}

Selection__ListWrapper_type* Selection__ListWrapper_typeof()
{
    static uSStrong<Selection__ListWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Selection__ListWrapper);
    options.TypeSize = sizeof(Selection__ListWrapper_type);
    type = (Selection__ListWrapper_type*)uClassType::New("Fuse.Selection.Selection.ListWrapper", options);
    type->fp_build_ = Selection__ListWrapper_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Selection__ListWrapper__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Selection__ListWrapper__get_Item_fn;
    return type;
}

// public ListWrapper(Uno.Collections.List<string> list) :757
void Selection__ListWrapper__ctor__fn(Selection__ListWrapper* __this, ::g::Uno::Collections::List* list)
{
    __this->ctor_(list);
}

// public object get_Item(int index) :762
void Selection__ListWrapper__get_Item_fn(Selection__ListWrapper* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :761
void Selection__ListWrapper__get_Length_fn(Selection__ListWrapper* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public ListWrapper New(Uno.Collections.List<string> list) :757
void Selection__ListWrapper__New1_fn(::g::Uno::Collections::List* list, Selection__ListWrapper** __retval)
{
    *__retval = Selection__ListWrapper::New1(list);
}

// public ListWrapper(Uno.Collections.List<string> list) [instance] :757
void Selection__ListWrapper::ctor_(::g::Uno::Collections::List* list)
{
    _list = list;
}

// public object get_Item(int index) [instance] :762
uObject* Selection__ListWrapper::Item(int index)
{
    uString* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret2), ret2);
}

// public int get_Length() [instance] :761
int Selection__ListWrapper::Length()
{
    return uPtr(_list)->Count();
}

// public ListWrapper New(Uno.Collections.List<string> list) [static] :757
Selection__ListWrapper* Selection__ListWrapper::New1(::g::Uno::Collections::List* list)
{
    Selection__ListWrapper* obj1 = (Selection__ListWrapper*)uNew(Selection__ListWrapper_typeof());
    obj1->ctor_(list);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class Selectable :11
// {
// static Selectable() :13
static void Selectable__cctor_1_fn(uType* __type)
{
    Selectable::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[1/*"add"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[2/*"remove"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[3/*"toggle"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__toggle_fn), 2)));
}

static void Selectable_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("add");
    ::STRINGS[2] = uString::Const("remove");
    ::STRINGS[3] = uString::Const("toggle");
    ::STRINGS[4] = uString::Const("add requires 0 arguments");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno");
    ::STRINGS[6] = uString::Const("No selection, perhaps not rooted");
    ::STRINGS[7] = uString::Const("Add");
    ::STRINGS[8] = uString::Const("Unable to locate `Selection`");
    ::STRINGS[9] = uString::Const("OnRooted");
    ::STRINGS[10] = uString::Const("remove requires 0 arguments");
    ::STRINGS[11] = uString::Const("Remove");
    ::STRINGS[12] = uString::Const("toggle requires 0 arguments");
    ::STRINGS[13] = uString::Const("Toggle");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(::g::Fuse::Selection::Selectable, _selection), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Selection::Selectable, _value), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Selection::Selectable::ValueName_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* Selectable_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Selectable);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Selection.Selectable", options);
    type->fp_build_ = Selectable_build;
    type->fp_cctor_ = Selectable__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selectable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selectable__OnUnrooted_fn;
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

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :26
void Selectable__add_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::add(c, s, args);
}

// public void Add() :153
void Selectable__Add1_fn(Selectable* __this)
{
    __this->Add1();
}

// protected override sealed void OnRooted() :110
void Selectable__OnRooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_selection = ::g::Fuse::Selection::Selection::TryFindSelection(__this->Parent());

    if (__this->_selection == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[8/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/paul...*/], 116, ::STRINGS[9/*"OnRooted"*/], NULL);
}

// protected override sealed void OnUnrooted() :119
void Selectable__OnUnrooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_selection = NULL;
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :44
void Selectable__remove_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::remove(c, s, args);
}

// public void Remove() :167
void Selectable__Remove1_fn(Selectable* __this)
{
    __this->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :60
void Selectable__toggle_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::toggle(c, s, args);
}

// public void Toggle() :181
void Selectable__Toggle_fn(Selectable* __this)
{
    __this->Toggle();
}

// public string get_Value() :135
void Selectable__get_Value_fn(Selectable* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :136
void Selectable__set_Value_fn(Selectable* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector Selectable::ValueName_;

// public void Add() [instance] :153
void Selectable::Add1()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/paul...*/], 157, ::STRINGS[7/*"Add"*/], NULL);
        return;
    }

    uPtr(_selection)->Add1(this);
}

// public void Remove() [instance] :167
void Selectable::Remove1()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/paul...*/], 171, ::STRINGS[11/*"Remove"*/], NULL);
        return;
    }

    uPtr(_selection)->Remove1(this);
}

// public void Toggle() [instance] :181
void Selectable::Toggle()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/paul...*/], 185, ::STRINGS[13/*"Toggle"*/], NULL);
        return;
    }

    uPtr(_selection)->Toggle(this);
}

// public string get_Value() [instance] :135
uString* Selectable::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :136
void Selectable::Value(uString* value)
{
    if (::g::Uno::String::op_Equality(_value, value))
        return;

    uString* old = _value;
    _value = value;

    if (_selection != NULL)
        uPtr(_selection)->ModifyValue(old, _value);

    OnPropertyChanged(Selectable::ValueName());
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :26
void Selectable::add(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[4/*"add require...*/], s, ::STRINGS[5/*"/Users/paul...*/], 30, ::STRINGS[1/*"add"*/], NULL);
        return;
    }

    uPtr(s)->Add1();
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :44
void Selectable::remove(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[10/*"remove requ...*/], s, ::STRINGS[5/*"/Users/paul...*/], 48, ::STRINGS[2/*"remove"*/], NULL);
        return;
    }

    uPtr(s)->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :60
void Selectable::toggle(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"toggle requ...*/], s, ::STRINGS[5/*"/Users/paul...*/], 64, ::STRINGS[3/*"toggle"*/], NULL);
        return;
    }

    uPtr(s)->Toggle();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class Selection :302
// {
// static Selection() :304
static void Selection__cctor_1_fn(uType* __type)
{
    Selection::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 6, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[14/*"clear"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__clear_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[1/*"add"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[2/*"remove"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[15/*"forceAdd"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__forceAdd_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[16/*"forceRemove"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__forceRemove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[3/*"toggle"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__toggle_fn), 2)));
}

static void Selection_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[14] = uString::Const("clear");
    ::STRINGS[1] = uString::Const("add");
    ::STRINGS[2] = uString::Const("remove");
    ::STRINGS[15] = uString::Const("forceAdd");
    ::STRINGS[16] = uString::Const("forceRemove");
    ::STRINGS[3] = uString::Const("toggle");
    ::STRINGS[17] = uString::Const("add requires 1 argument, the value of the item");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno");
    ::STRINGS[18] = uString::Const("clear requires 0 arguments");
    ::STRINGS[19] = uString::Const("forceAdd requires 1 argument, the value of the item");
    ::STRINGS[20] = uString::Const("forceRemove requires 1 argument, the value of the item");
    ::STRINGS[21] = uString::Const("Fuse.Reactive.IObserver.OnFailed");
    ::STRINGS[22] = uString::Const("removing invalid observable item");
    ::STRINGS[23] = uString::Const("Fuse.Reactive.IObserver.OnInsertAt");
    ::STRINGS[24] = uString::Const("Fuse.Reactive.IObserver.OnNewAt");
    ::STRINGS[25] = uString::Const("Fuse.Reactive.IObserver.OnRemoveAt");
    ::STRINGS[26] = uString::Const("remove requires 1 argument, the value of the item");
    ::STRINGS[27] = uString::Const("toggle requires 1 argument, the value of them item");
    ::STRINGS[28] = uString::Const("MaxCount must >= 1");
    ::STRINGS[29] = uString::Const("set_MaxCount");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[5] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[6] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    ::TYPES[8] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[9] = ::g::Fuse::IArray_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::ISubscription_typeof();
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[13] = ::TYPES[12/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Selection.Selectable>*/, ::g::Fuse::Selection::Selectable_typeof(), NULL);
    ::TYPES[14] = ::TYPES[12/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Selection.Selection>*/, type, NULL);
    ::TYPES[15] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Selection_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Selection_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Selection_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface5),
        ::TYPES[8/*Fuse.Reactive.IObserver*/], offsetof(Selection_type, interface6));
    type->SetFields(12,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Selection::Selection, _hasMaxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Selection::Selection, _maxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Selection::Selection, _minCount), 0,
        ::TYPES[10/*Fuse.Reactive.IObservable*/], offsetof(::g::Fuse::Selection::Selection, _observableValues), 0,
        ::g::Fuse::Selection::SelectionReplace_typeof(), offsetof(::g::Fuse::Selection::Selection, _replace), 0,
        ::TYPES[11/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Selection::Selection, _subscription), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Selection::Selection, _values), 0,
        ::TYPES[15/*Uno.EventHandler*/], offsetof(::g::Fuse::Selection::Selection, SelectionChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Selection::Selection::ValueName_, uFieldFlagsStatic);
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Fuse.Selection.Selection", options);
    type->fp_build_ = Selection_build;
    type->fp_cctor_ = Selection__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selection__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selection__OnUnrooted_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Selection__FuseReactiveIObserverOnClear_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Selection__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Selection__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Selection__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Selection__FuseReactiveIObserverOnFailed_fn;
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

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :338
void Selection__add_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::add(c, s, args);
}

// public void Add(Fuse.Selection.Selectable b) :607
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Add1(b);
}

// private void Add(string value) :723
void Selection__Add2_fn(Selection* __this, uString* value)
{
    __this->Add2(value);
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :320
void Selection__clear_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::clear(c, s, args);
}

// public void Clear() :627
void Selection__Clear_fn(Selection* __this)
{
    __this->Clear();
}

// private void ClearSubscription() :829
void Selection__ClearSubscription_fn(Selection* __this)
{
    __this->ClearSubscription();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :370
void Selection__forceAdd_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceAdd(c, s, args);
}

// private void ForceAdd(string value) :641
void Selection__ForceAdd1_fn(Selection* __this, uString* value)
{
    __this->ForceAdd1(value);
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :384
void Selection__forceRemove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceRemove(c, s, args);
}

// private void ForceRemove(string value) :658
void Selection__ForceRemove1_fn(Selection* __this, uString* value)
{
    __this->ForceRemove1(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :870
void Selection__FuseReactiveIObserverOnAdd_fn(Selection* __this, uObject* addedValue)
{
    uString* ret9;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], addedValue, &ret9), ret9));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnClear() :838
void Selection__FuseReactiveIObserverOnClear_fn(Selection* __this)
{
    uPtr(__this->_values)->Clear();
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :898
void Selection__FuseReactiveIObserverOnFailed_fn(Selection* __this, uString* message)
{
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[8/*Fuse.Reactive.IObserver*/])), ::TYPES[8/*Fuse.Reactive.IObserver*/]));
    ::g::Fuse::Diagnostics::InternalError(message, __this, ::STRINGS[5/*"/Users/paul...*/], 901, ::STRINGS[21/*"Fuse.Reacti...*/]);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :887
void Selection__FuseReactiveIObserverOnInsertAt_fn(Selection* __this, int* index, uObject* value)
{
    int index_ = *index;
    uString* ret10;

    if ((index_ < 0) || (index_ > uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/paul...*/], 891, ::STRINGS[23/*"Fuse.Reacti...*/]);
        return;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], value, &ret10), ret10));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :844
void Selection__FuseReactiveIObserverOnNewAll_fn(Selection* __this, uObject* values)
{
    uString* ret11;
    uPtr(__this->_values)->Clear();

    for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[9/*Fuse.IArray*/])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[9/*Fuse.IArray*/]), i), &ret11), ret11));

    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :852
void Selection__FuseReactiveIObserverOnNewAt_fn(Selection* __this, int* index, uObject* newValue)
{
    int index_ = *index;
    uString* ret12;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/paul...*/], 856, ::STRINGS[24/*"Fuse.Reacti...*/]);
        return;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], newValue, &ret12), ret12));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :876
void Selection__FuseReactiveIObserverOnRemoveAt_fn(Selection* __this, int* index)
{
    int index_ = *index;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/paul...*/], 880, ::STRINGS[25/*"Fuse.Reacti...*/]);
        return;
    }

    uPtr(__this->_values)->RemoveAt(index_);
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :863
void Selection__FuseReactiveIObserverOnSet_fn(Selection* __this, uObject* newValue)
{
    uString* ret13;
    uPtr(__this->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], newValue, &ret13), ret13));
    __this->OnSelectionChanged(1);
}

// public bool get_HasMaxCount() :567
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval)
{
    *__retval = __this->HasMaxCount();
}

// public int get_MaxCount() :545
void Selection__get_MaxCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MaxCount();
}

// public void set_MaxCount(int value) :546
void Selection__set_MaxCount_fn(Selection* __this, int* value)
{
    __this->MaxCount(*value);
}

// public int get_MinCount() :528
void Selection__get_MinCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MinCount();
}

// public void set_MinCount(int value) :529
void Selection__set_MinCount_fn(Selection* __this, int* value)
{
    __this->MinCount(*value);
}

// internal void ModifyValue(string old, string nw) :780
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw)
{
    __this->ModifyValue(old, nw);
}

// private void OnObservableValuesChanged() :819
void Selection__OnObservableValuesChanged_fn(Selection* __this)
{
    __this->OnObservableValuesChanged();
}

// protected override sealed void OnRooted() :500
void Selection__OnRooted_fn(Selection* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnObservableValuesChanged();
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) :765
void Selection__OnSelectionChanged_fn(Selection* __this, int* how)
{
    __this->OnSelectionChanged(*how);
}

// protected override sealed void OnUnrooted() :506
void Selection__OnUnrooted_fn(Selection* __this)
{
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :356
void Selection__remove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::remove(c, s, args);
}

// public void Remove(Fuse.Selection.Selectable b) :617
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Remove1(b);
}

// private void Remove(string value) :711
void Selection__Remove2_fn(Selection* __this, uString* value)
{
    __this->Remove2(value);
}

// public Fuse.Selection.SelectionReplace get_Replace() :518
void Selection__get_Replace_fn(Selection* __this, int* __retval)
{
    *__retval = __this->Replace();
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) :519
void Selection__set_Replace_fn(Selection* __this, int* value)
{
    __this->Replace(*value);
}

// public generated void add_SelectionChanged(Uno.EventHandler value) :746
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->add_SelectionChanged(value);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) :746
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->remove_SelectionChanged(value);
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :400
void Selection__toggle_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::toggle(c, s, args);
}

// public void Toggle(Fuse.Selection.Selectable b) :589
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Toggle(b);
}

// private void Toggle(string value) :594
void Selection__Toggle1_fn(Selection* __this, uString* value)
{
    __this->Toggle1(value);
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) :473
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval)
{
    *__retval = Selection::TryFindSelectable(n, selectable, selection);
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) :456
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval)
{
    *__retval = Selection::TryFindSelection(v);
}

::g::Uno::UX::Selector Selection::ValueName_;

// public void Add(Fuse.Selection.Selectable b) [instance] :607
void Selection::Add1(::g::Fuse::Selection::Selectable* b)
{
    Add2(uPtr(b)->Value());
}

// private void Add(string value) [instance] :723
void Selection::Add2(uString* value)
{
    bool ret3;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret3), ret3))
        return;

    if (HasMaxCount() && ((uPtr(_values)->Count() + 1) > MaxCount()))
    {
        if ((Replace() == 2) || (MaxCount() < 1))
            return;

        if (Replace() == 0)
            uPtr(_values)->RemoveAt(0);
        else
            uPtr(_values)->RemoveAt(uPtr(_values)->Count() - 1);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
    OnSelectionChanged(0);
}

// public void Clear() [instance] :627
void Selection::Clear()
{
    uPtr(_values)->Clear();
    OnSelectionChanged(0);
}

// private void ClearSubscription() [instance] :829
void Selection::ClearSubscription()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[7/*Uno.IDisposable*/]));
        _subscription = NULL;
    }
}

// private void ForceAdd(string value) [instance] :641
void Selection::ForceAdd1(uString* value)
{
    bool ret5;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret5), ret5))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
        OnSelectionChanged(0);
    }
}

// private void ForceRemove(string value) [instance] :658
void Selection::ForceRemove1(uString* value)
{
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret8);
        OnSelectionChanged(0);
    }
}

// public bool get_HasMaxCount() [instance] :567
bool Selection::HasMaxCount()
{
    return _hasMaxCount;
}

// public int get_MaxCount() [instance] :545
int Selection::MaxCount()
{
    return _maxCount;
}

// public void set_MaxCount(int value) [instance] :546
void Selection::MaxCount(int value)
{
    if (_hasMaxCount && (value == _maxCount))
        return;

    if (value < 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[28/*"MaxCount mu...*/], this, ::STRINGS[5/*"/Users/paul...*/], 553, ::STRINGS[29/*"set_MaxCount"*/], NULL);
        return;
    }

    _hasMaxCount = true;
    _maxCount = value;
}

// public int get_MinCount() [instance] :528
int Selection::MinCount()
{
    return _minCount;
}

// public void set_MinCount(int value) [instance] :529
void Selection::MinCount(int value)
{
    if (value == _minCount)
        return;

    _minCount = value;
}

// internal void ModifyValue(string old, string nw) [instance] :780
void Selection::ModifyValue(uString* old, uString* nw)
{
    bool ret15;
    bool ret16;

    if (::g::Uno::String::IsNullOrEmpty(old) || ::g::Uno::String::IsNullOrEmpty(nw))
        return;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), old, &ret15), ret15))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), old, &ret16);
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), nw);
        OnSelectionChanged(0);
    }
}

// private void OnObservableValuesChanged() [instance] :819
void Selection::OnObservableValuesChanged()
{
    ClearSubscription();

    if (_observableValues == NULL)
        return;

    _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(_observableValues), ::TYPES[10/*Fuse.Reactive.IObservable*/]), (uObject*)this);
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) [instance] :765
void Selection::OnSelectionChanged(int how)
{
    OnPropertyChanged(Selection::ValueName());

    if (::g::Uno::Delegate::op_Inequality(SelectionChanged1, NULL))
        uPtr(SelectionChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if ((how == 0) && (_subscription != NULL))
        ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(_subscription), ::TYPES[11/*Fuse.Reactive.ISubscription*/]), (uObject*)Selection__ListWrapper::New1(_values));
}

// public void Remove(Fuse.Selection.Selectable b) [instance] :617
void Selection::Remove1(::g::Fuse::Selection::Selectable* b)
{
    Remove2(uPtr(b)->Value());
}

// private void Remove(string value) [instance] :711
void Selection::Remove2(uString* value)
{
    bool ret18;
    bool ret19;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret18), ret18))
        return;

    if ((uPtr(_values)->Count() - 1) < MinCount())
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret19);
    OnSelectionChanged(0);
}

// public Fuse.Selection.SelectionReplace get_Replace() [instance] :518
int Selection::Replace()
{
    return _replace;
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) [instance] :519
void Selection::Replace(int value)
{
    _replace = value;
}

// public generated void add_SelectionChanged(Uno.EventHandler value) [instance] :746
void Selection::add_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionChanged1, value), ::TYPES[15/*Uno.EventHandler*/]);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) [instance] :746
void Selection::remove_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionChanged1, value), ::TYPES[15/*Uno.EventHandler*/]);
}

// public void Toggle(Fuse.Selection.Selectable b) [instance] :589
void Selection::Toggle(::g::Fuse::Selection::Selectable* b)
{
    Toggle1(uPtr(b)->Value());
}

// private void Toggle(string value) [instance] :594
void Selection::Toggle1(uString* value)
{
    bool ret24;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret24), ret24))
        Remove2(value);
    else
        Add2(value);
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :338
void Selection::add(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[17/*"add require...*/], s, ::STRINGS[5/*"/Users/paul...*/], 342, ::STRINGS[1/*"add"*/], NULL);
        return;
    }

    uPtr(s)->Add2((::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret2), ret2));
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :320
void Selection::clear(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[18/*"clear requi...*/], s, ::STRINGS[5/*"/Users/paul...*/], 324, ::STRINGS[14/*"clear"*/], NULL);
        return;
    }

    uPtr(s)->Clear();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :370
void Selection::forceAdd(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret4;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"forceAdd re...*/], s, ::STRINGS[5/*"/Users/paul...*/], 374, ::STRINGS[15/*"forceAdd"*/], NULL);
        return;
    }

    uPtr(s)->ForceAdd1((::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret4), ret4));
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :384
void Selection::forceRemove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret6;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[20/*"forceRemove...*/], s, ::STRINGS[5/*"/Users/paul...*/], 388, ::STRINGS[16/*"forceRemove"*/], NULL);
        return;
    }

    uPtr(s)->ForceRemove1((::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret6), ret6));
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :356
void Selection::remove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret17;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[26/*"remove requ...*/], s, ::STRINGS[5/*"/Users/paul...*/], 360, ::STRINGS[2/*"remove"*/], NULL);
        return;
    }

    uPtr(s)->Remove2((::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret17), ret17));
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :400
void Selection::toggle(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret23;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[27/*"toggle requ...*/], s, ::STRINGS[5/*"/Users/paul...*/], 404, ::STRINGS[3/*"toggle"*/], NULL);
        return;
    }

    uPtr(s)->Toggle1((::g::Fuse::Marshal__ToType_fn(::TYPES[6/*Fuse.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret23), ret23));
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) [static] :473
bool Selection::TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection)
{
    Selection_typeof()->Init();
    *selectable = NULL;
    *selection = NULL;

    while (n != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(n, ::TYPES[12/*Fuse.Visual*/]);

        if (vs != NULL)
        {
            if (*selectable == NULL)
                *selectable = (::g::Fuse::Selection::Selectable*)uPtr(vs)->FirstChild(::TYPES[13/*Fuse.Visual.FirstChild<Fuse.Selection.Selectable>*/]);
            else
                *selection = (Selection*)uPtr(vs)->FirstChild(::TYPES[14/*Fuse.Visual.FirstChild<Fuse.Selection.Selection>*/]);

            if ((*selectable != NULL) && (*selection != NULL))
                return true;
        }

        n = uPtr(n)->ContextParent();
    }

    *selectable = NULL;
    *selection = NULL;
    return false;
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) [static] :456
Selection* Selection::TryFindSelection(::g::Fuse::Node* v)
{
    Selection_typeof()->Init();

    while (v != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(v, ::TYPES[12/*Fuse.Visual*/]);

        if (vs != NULL)
        {
            Selection* l = (Selection*)uPtr(vs)->FirstChild(::TYPES[14/*Fuse.Visual.FirstChild<Fuse.Selection.Selection>*/]);

            if (l != NULL)
                return l;
        }

        v = uPtr(v)->ContextParent();
    }

    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// public enum SelectionReplace :424
uEnumType* SelectionReplace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectionReplace", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Oldest", 0LL,
        "Newest", 1LL,
        "None", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// public enum SelectMode :927
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Toggle", 0LL,
        "AddOnly", 1LL,
        "RemoveOnly", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class ToggleSelection :945
// {
static void ToggleSelection_build(uType* type)
{
    ::STRINGS[30] = uString::Const("Unable to locate Selectable");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Selection/1.0.2/$.uno");
    ::STRINGS[31] = uString::Const("Perform");
    type->SetFields(8,
        ::g::Fuse::Selection::SelectMode_typeof(), offsetof(::g::Fuse::Selection::ToggleSelection, _mode), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSelection);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Selection.ToggleSelection", options);
    type->fp_build_ = ToggleSelection_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSelection__Perform_fn;
    return type;
}

// public Fuse.Selection.SelectMode get_Mode() :955
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Selection.SelectMode value) :956
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int* value)
{
    __this->Mode(*value);
}

// protected override sealed void Perform(Fuse.Node target) :959
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Selection::Selectable* selectable;
    ::g::Fuse::Selection::Selection* selection;

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(target, &selectable, &selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[30/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/paul...*/], 965, ::STRINGS[31/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Mode())
    {
        case 0:
        {
            uPtr(selection)->Toggle(selectable);
            break;
        }
        case 1:
        {
            uPtr(selection)->Add1(selectable);
            break;
        }
        case 2:
        {
            uPtr(selection)->Remove1(selectable);
            break;
        }
    }
}

// public Fuse.Selection.SelectMode get_Mode() [instance] :955
int ToggleSelection::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Selection.SelectMode value) [instance] :956
void ToggleSelection::Mode(int value)
{
    _mode = value;
}
// }

}}} // ::g::Fuse::Selection
