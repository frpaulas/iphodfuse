// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRaw.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.ArrayMirror.h>
#include <Fuse.Reactive.BinaryO-44e56a7e.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.ClassInstance.h>
#include <Fuse.Reactive.Conditional.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Express-ee33104d.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.Functio-f65ac39e.h>
#include <Fuse.Reactive.FunctionMirror.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerLi-d480603c.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.Instant-c0c79dff.h>
#include <Fuse.Reactive.Instant-ca0b61c8.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.JavaScr-19c4c3b.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LazyObs-f17cb610.h>
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Reactive.Name.h>
#include <Fuse.Reactive.ObjectMirror.h>
#include <Fuse.Reactive.Observa-1fc6e0be.h>
#include <Fuse.Reactive.Observa-38896f02.h>
#include <Fuse.Reactive.Observa-3a149fa6.h>
#include <Fuse.Reactive.Observa-4374fb9b.h>
#include <Fuse.Reactive.Observa-462e40f6.h>
#include <Fuse.Reactive.Observa-9616d070.h>
#include <Fuse.Reactive.Observa-aeda3ee7.h>
#include <Fuse.Reactive.Observa-b5abfc6.h>
#include <Fuse.Reactive.Observable.Add.h>
#include <Fuse.Reactive.Observable.Clear.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.Observable.NewAt.h>
#include <Fuse.Reactive.Observable.Set.h>
#include <Fuse.Reactive.Observa-e52f656c.h>
#include <Fuse.Reactive.Observa-f11631de.h>
#include <Fuse.Reactive.Propert-3b65e5e6.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Quatern-13eb7fcd.h>
#include <Fuse.Reactive.Quatern-4692c3b2.h>
#include <Fuse.Reactive.Resourc-a4dc08c7.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.Rootabl-2ff41d03.h>
#include <Fuse.Reactive.Snapsho-9e1b433f.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Ternary-ba5fcd50.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Reactive.ThreadW-a73c34f4.h>
#include <Fuse.Reactive.ThreadW-e549989c.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.ValueFo-a26c06f.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.Vector3.h>
#include <Fuse.Reactive.Vector4.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.JavaSc-fcde12cf.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Script-102b1113.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dicti-87d2e37d.h>
#include <Uno.Collections.Dicti-98f6bc43.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dicti-d6e3a7c5.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Concurr-cd310558.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[111];
static uType* TYPES[95];

namespace g{
namespace Fuse{
namespace Reactive{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.Add :959
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Add, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Reactive.Observable obs, object value) :963
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Reactive.Observable obs, object value) :963
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :968
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Reactive.Observable obs, object value) [instance] :963
void Observable__Add::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Reactive.Observable obs, object value) [static] :963
Observable__Add* Observable__Add::New1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class ArrayMirror :8
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[3/*object[]*/], offsetof(::g::Fuse::Reactive::ArrayMirror, _items), 0);
}

::g::Fuse::Reactive::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ListMirror_type);
    type = (::g::Fuse::Reactive::ListMirror_type*)uClassType::New("Fuse.Reactive.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_2(worker, arr);
}

// public override sealed object get_Item(int index) :32
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// internal object[] get_ItemsReadonly() :19
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :37
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New1(worker, arr);
}

// public override sealed void Unsubscribe() :21
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(uPtr(__this->_items)->Strong<uObject*>(i), ::TYPES[4/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :12
void ArrayMirror::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ctor_1(arr);
    _items = uArray::New(::TYPES[3/*object[]*/], uPtr(arr)->Length());

    for (int i = 0; i < uPtr(_items)->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(worker)->Reflect(uPtr(arr)->Item(i));
}

// internal object[] get_ItemsReadonly() [instance] :19
uArray* ArrayMirror::ItemsReadonly()
{
    return _items;
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :12
ArrayMirror* ArrayMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj1 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj1->ctor_2(worker, arr);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class BinaryOperator :14
// {
static void BinaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" does not implement the required methods");
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Left), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Right), 0);
}

::g::Fuse::Reactive::Expression_type* BinaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    return type;
}

// protected object Compute(object left, object right) :32
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    *__retval = __this->Compute(left, right);
}

// protected bool get_IsLeftOptional() :29
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsLeftOptional();
}

// protected bool get_IsRightOptional() :30
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsRightOptional();
}

// public generated Fuse.Reactive.Expression get_Left() :16
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Left();
}

// private generated void set_Left(Fuse.Reactive.Expression value) :16
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Left(value);
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) :37
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right)
{
    __this->OnNewOperands(listener, left, right);
}

// public generated Fuse.Reactive.Expression get_Right() :17
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Right();
}

// private generated void set_Right(Fuse.Reactive.Expression value) :17
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Right(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void BinaryOperator__Subscribe_fn(BinaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)BinaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected object Compute(object left, object right) [instance] :32
uObject* BinaryOperator::Compute(uObject* left, uObject* right)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), ::STRINGS[0/*" does not i...*/])));
}

// protected bool get_IsLeftOptional() [instance] :29
bool BinaryOperator::IsLeftOptional()
{
    return false;
}

// protected bool get_IsRightOptional() [instance] :30
bool BinaryOperator::IsRightOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Left() [instance] :16
::g::Fuse::Reactive::Expression* BinaryOperator::Left()
{
    return _Left;
}

// private generated void set_Left(Fuse.Reactive.Expression value) [instance] :16
void BinaryOperator::Left(::g::Fuse::Reactive::Expression* value)
{
    _Left = value;
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) [instance] :37
void BinaryOperator::OnNewOperands(uObject* listener, uObject* left, uObject* right)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(left, right));
}

// public generated Fuse.Reactive.Expression get_Right() [instance] :17
::g::Fuse::Reactive::Expression* BinaryOperator::Right()
{
    return _Right;
}

// private generated void set_Right(Fuse.Reactive.Expression value) [instance] :17
void BinaryOperator::Right(::g::Fuse::Reactive::Expression* value)
{
    _Right = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum BindingMode :119
uEnumType* BindingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.BindingMode", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Read", 1LL,
        "Write", 2LL,
        "Clear", 4LL,
        "ReadClear", 5LL,
        "WriteClear", 6LL,
        "ReadWriteClear", 7LL,
        "ReadWrite", 3LL,
        "Default", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class FunctionMirror.CallClosure :173
// {
static void FunctionMirror__CallClosure_build(uType* type)
{
    ::STRINGS[1] = uString::Const("node");
    ::STRINGS[2] = uString::Const("data");
    ::STRINGS[3] = uString::Const("sender");
    ::STRINGS[4] = uString::Const("JavaScript call error");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno");
    ::STRINGS[6] = uString::Const("Call");
    ::TYPES[6] = ::g::Fuse::Reactive::IEventRecord_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    type->SetFields(0,
        ::TYPES[6/*Fuse.Reactive.IEventRecord*/], offsetof(::g::Fuse::Reactive::FunctionMirror__CallClosure, _e), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FunctionMirror__CallClosure, _f), 0);
}

uType* FunctionMirror__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionMirror__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FunctionMirror.CallClosure", options);
    type->fp_build_ = FunctionMirror__CallClosure_build;
    return type;
}

// public CallClosure(Fuse.Scripting.Function f, Fuse.Reactive.IEventRecord e) :178
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::Function* f, uObject* e)
{
    __this->ctor_(f, e);
}

// public void Call() :184
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.Function f, Fuse.Reactive.IEventRecord e) :178
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Scripting::Function* f, uObject* e, FunctionMirror__CallClosure** __retval)
{
    *__retval = FunctionMirror__CallClosure::New1(f, e);
}

// public CallClosure(Fuse.Scripting.Function f, Fuse.Reactive.IEventRecord e) [instance] :178
void FunctionMirror__CallClosure::ctor_(::g::Fuse::Scripting::Function* f, uObject* e)
{
    _f = f;
    _e = e;
}

// public void Call() [instance] :184
void FunctionMirror__CallClosure::Call()
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[1/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[2/*"data"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))), NULL))
        uPtr(obj)->Item(::STRINGS[3/*"sender"*/], uBox(::TYPES[32/*Uno.UX.Selector*/], ::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))), ::TYPES[7/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, object>>*/]), &ret3), ret3);
            uPtr(obj)->Item(arg.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(arg.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/])));
        }

    try
    {
        uPtr(_f)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Reactive::JavaScript::UserScriptError(::STRINGS[4/*"JavaScript ...*/], ex, this, ::STRINGS[5/*"/Users/paul...*/], 200, ::STRINGS[6/*"Call"*/]);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Scripting.Function f, Fuse.Reactive.IEventRecord e) [static] :178
FunctionMirror__CallClosure* FunctionMirror__CallClosure::New1(::g::Fuse::Scripting::Function* f, uObject* e)
{
    FunctionMirror__CallClosure* obj2 = (FunctionMirror__CallClosure*)uNew(FunctionMirror__CallClosure_typeof());
    obj2->ctor_(f, e);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class ClassInstance :53
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[7] = uString::Const("_tempMethod");
    ::TYPES[12] = ::g::Fuse::INotifyUnrooted_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _obj), 0,
        ::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/], offsetof(::g::Fuse::Reactive::ClassInstance, _properties), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _rootTable), 0,
        ::TYPES[15/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Reactive::ClassInstance, _self), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _worker), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) :80
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(method, args);
}

// private void DispatchUnroot() :117
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :112
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted() :88
void ClassInstance__EnsureRooted_fn(ClassInstance* __this)
{
    __this->EnsureRooted();
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) :124
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(p);
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__New1_fn(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot() :137
void ClassInstance__Unroot_fn(ClassInstance* __this)
{
    __this->Unroot();
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [instance] :72
void ClassInstance::ctor_(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _worker = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) [instance] :80
void ClassInstance::CallMethod(::g::Fuse::Scripting::Function* method, uArray* args)
{
    uPtr(_self)->Item(::STRINGS[7/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(::STRINGS[7/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :117
void ClassInstance::DispatchUnroot()
{
    uObject* n = (uObject*)uPtr(_rootTable)->This();
    ::g::Fuse::INotifyUnrooted::remove_Unrooted(uInterface(uPtr(n), ::TYPES[12/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :112
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/]));
}

// public void EnsureRooted() [instance] :88
void ClassInstance::EnsureRooted()
{
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    uObject* n = uAs<uObject*>(_obj, ::TYPES[12/*Fuse.INotifyUnrooted*/]);

    if (n != NULL)
        ::g::Fuse::INotifyUnrooted::add_Unrooted(uInterface(uPtr(n), ::TYPES[12/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_worker)->Unwrap(_obj), ::TYPES[15/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[16/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[17/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Reactive::LazyObservableProperty::New2(_worker, _self, p));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) [instance] :124
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Uno::UX::Property* p)
{
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Reactive::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Reactive::ObservableProperty::New1(_worker, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable())->Object();
}

// private void Unroot() [instance] :137
void ClassInstance::Unroot()
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)

        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8); enum2.MoveNext(::TYPES[18/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]); )
        {
            ::g::Fuse::Reactive::ObservableProperty* p = enum2.Current(::TYPES[18/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]);
            uPtr(p)->Reset();
        }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [static] :72
ClassInstance* ClassInstance::New1(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.Clear :854
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Clear, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    return type;
}

// public Clear(Fuse.Reactive.Observable obs, int origin) :858
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Reactive::Observable* obs, int* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) :858
void Observable__Clear__New1_fn(::g::Fuse::Reactive::Observable* obs, int* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :863
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]));
}

// public Clear(Fuse.Reactive.Observable obs, int origin) [instance] :858
void Observable__Clear::ctor_1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) [static] :858
Observable__Clear* Observable__Clear::New1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Conditional :495
// {
static void Conditional_build(uType* type)
{
    ::STRINGS[8] = uString::Const("(");
    ::STRINGS[9] = uString::Const(" ? ");
    ::STRINGS[10] = uString::Const(" : ");
    ::STRINGS[11] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Conditional);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Conditional", options);
    type->fp_build_ = Conditional_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Conditional__Compute_fn;
    type->fp_get_IsThirdOptional = (void(*)(::g::Fuse::Reactive::TernaryOperator*, bool*))Conditional__get_IsThirdOptional_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Conditional__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object cond, object trueVal, object falseVal) :501
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval)
{
    if (cond == NULL)
        return *__retval = NULL, void();

    if (::g::Fuse::Marshal::ToBool(cond))
        return *__retval = trueVal, void();

    return *__retval = falseVal, void();
}

// protected override sealed bool get_IsThirdOptional() :508
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed string ToString() :510
void Conditional__ToString_fn(Conditional* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*"("*/], __this->First()), ::STRINGS[9/*" ? "*/]), __this->Second()), ::STRINGS[10/*" : "*/]), __this->Third()), ::STRINGS[11/*")"*/]), void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/fusejs/$.uno
// ----------------------------------------------------------------------------------------------------------------

// internal static class Console :106
// {
static void Console_build(uType* type)
{
    ::STRINGS[12] = uString::Const("null");
    ::STRINGS[13] = uString::Const("\"");
    ::STRINGS[14] = uString::Const("function");
    ::STRINGS[15] = uString::Const("Object");
    ::STRINGS[16] = uString::Const("");
    ::STRINGS[17] = uString::Const(": ");
    ::STRINGS[18] = uString::Const("Array[");
    ::STRINGS[19] = uString::Const("]");
    ::STRINGS[20] = uString::Const("  ");
    ::STRINGS[21] = uString::Const("log");
    ::STRINGS[22] = uString::Const("dir");
    ::STRINGS[23] = uString::Const("console");
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[21] = ::g::Uno::Double_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :127
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :139
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :208
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :108
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :117
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :127
uObject* Console::Dir(uArray* args)
{
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :139
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[12/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[19/*int*/]) || uIs(obj, ::TYPES[20/*float*/])) || uIs(obj, ::TYPES[21/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[22/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[23/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[13/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[13/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[24/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[14/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[15/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[15/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[15/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*""*/], k), ::STRINGS[17/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[25/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[18/*"Array["*/], uBox<int>(::TYPES[19/*int*/], uPtr(a)->Length())), ::STRINGS[19/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[16/*""*/], uBox<int>(::TYPES[19/*int*/], i)), ::STRINGS[17/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :208
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[20/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :108
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[21/*"log"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[22/*"dir"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[23/*"console"*/], console);
}

// private static object Log(object[] args) [static] :117
uObject* Console::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ;

    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Constant :244
// {
static void Constant_build(uType* type)
{
    ::STRINGS[24] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Constant, _Value), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Constant);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Constant", options);
    type->fp_build_ = Constant_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Constant__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Constant__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public Constant(object value) :248
void Constant__ctor_2_fn(Constant* __this, uObject* value)
{
    __this->ctor_2(value);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :249
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval)
{
    return *__retval = __this->Value(), void();
}

// public Constant New(object value) :248
void Constant__New1_fn(uObject* value, Constant** __retval)
{
    *__retval = Constant::New1(value);
}

// public override sealed string ToString() :251
void Constant__ToString_fn(Constant* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[24/*"'"*/]), void();
}

// public generated object get_Value() :246
void Constant__get_Value_fn(Constant* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :246
void Constant__set_Value_fn(Constant* __this, uObject* value)
{
    __this->Value(value);
}

// public Constant(object value) [instance] :248
void Constant::ctor_2(uObject* value)
{
    ctor_1();
    Value(value);
}

// public generated object get_Value() [instance] :246
uObject* Constant::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :246
void Constant::Value(uObject* value)
{
    _Value = value;
}

// public Constant New(object value) [static] :248
Constant* Constant::New1(uObject* value)
{
    Constant* obj1 = (Constant*)uNew(Constant_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class ConstantExpression :233
// {
static void ConstantExpression_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0));
}

ConstantExpression_type* ConstantExpression_typeof()
{
    static uSStrong<ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConstantExpression);
    options.TypeSize = sizeof(ConstantExpression_type);
    type = (ConstantExpression_type*)uClassType::New("Fuse.Reactive.ConstantExpression", options);
    type->fp_build_ = ConstantExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    return type;
}

// protected generated ConstantExpression() :233
void ConstantExpression__ctor_1_fn(ConstantExpression* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :237
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :233
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class Instantiator.CountItem :1071
// {
static void Instantiator__CountItem_build(uType* type)
{
}

uType* Instantiator__CountItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__CountItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.CountItem", options);
    type->fp_build_ = Instantiator__CountItem_build;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Data :297
// {
static void Data_build(uType* type)
{
    ::STRINGS[25] = uString::Const("{");
    ::STRINGS[26] = uString::Const("}");
    ::TYPES[27] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Data, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Data_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Data", options);
    type->fp_build_ = Data_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Data__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    return type;
}

// public Data(string key) :301
void Data__ctor_1_fn(Data* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :299
void Data__get_Key_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :299
void Data__set_Key_fn(Data* __this, uString* value)
{
    __this->Key(value);
}

// public Data New(string key) :301
void Data__New1_fn(uString* key, Data** __retval)
{
    *__retval = Data::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :303
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :308
void Data__ToString_fn(Data* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[25/*"{"*/], __this->Key()), ::STRINGS[26/*"}"*/]), void();
}

// public Data(string key) [instance] :301
void Data::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :299
uString* Data::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :299
void Data::Key(uString* value)
{
    _Key = value;
}

// public Data New(string key) [static] :301
Data* Data::New1(uString* key)
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class DataBinding :154
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[16] = uString::Const("");
    ::STRINGS[27] = uString::Const("Cannot bind '");
    ::STRINGS[28] = uString::Const("' to property '");
    ::STRINGS[29] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[30] = uString::Const(".");
    ::STRINGS[31] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno");
    ::STRINGS[32] = uString::Const("InvalidListOperation");
    ::STRINGS[33] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[34] = uString::Const("number");
    ::STRINGS[35] = uString::Const("string");
    ::STRINGS[36] = uString::Const("value that can be converted to type ");
    ::TYPES[28] = ::g::Fuse::IArray_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Uno::Type_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[32] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[33] = ::g::Uno::Exception_typeof();
    ::TYPES[34] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[35] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface4));
    type->SetFields(4,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _busyTask), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::BindingMode_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _mode), 0,
        ::TYPES[35/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) :162
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int* mode)
{
    __this->ctor_2(target, key, nameTable, *mode);
}

// private bool Acceptor(object obj) :391
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private bool get_Clear() :179
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// private void ClearFailed() :248
void DataBinding__ClearFailed_fn(DataBinding* __this)
{
    __this->ClearFailed();
}

// private void ClearValue() :277
void DataBinding__ClearValue_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :282
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :203
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnClear() :181
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :213
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    __this->ClearValue();
    __this->MarkFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :230
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :219
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[28/*Fuse.IArray*/])) > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :208
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :225
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :186
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :198
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// private void MarkFailed(string message) :243
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message)
{
    __this->MarkFailed(message);
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) :162
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int* mode, DataBinding** __retval)
{
    *__retval = DataBinding::New1(target, key, nameTable, *mode);
}

// internal override sealed void NewValue(object value) :304
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[31/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;
        __this->_subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[31/*Fuse.Reactive.IObservable*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :235
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :254
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    __this->ClearFailed();
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->ClearValue();
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
}

// protected void PushValue(object newValue) :333
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private bool get_Read() :177
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Read();
}

// internal void SetTarget(object value) :271
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value)
{
    __this->SetTarget(value);
}

// public override sealed Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :172
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this, key, listener, uPtr(__this->Target())->PropertyType()), void();
}

// public generated Uno.UX.Property get_Target() :157
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :157
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :384
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :396
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :357
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :345
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :191
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(t);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :287
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
                ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(__this->_subscription), ::TYPES[35/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
        }
        else if (__this->CanWriteBack())
            __this->WriteBack(uPtr(__this->Target())->GetAsObject1());
    }
}

// private bool get_Write() :178
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Write();
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) [instance] :162
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int mode)
{
    ctor_1(key, nameTable);
    _mode = mode;
    Target(target);
}

// private bool Acceptor(object obj) [instance] :391
bool DataBinding::Acceptor(uObject* obj)
{
    return ::g::Fuse::Marshal::Is(obj, uPtr(Target())->PropertyType());
}

// private bool get_Clear() [instance] :179
bool DataBinding::Clear()
{
    return (_mode & 4) == 4;
}

// private void ClearFailed() [instance] :248
void DataBinding::ClearFailed()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[16/*""*/]);
}

// private void ClearValue() [instance] :277
void DataBinding::ClearValue()
{
    if (Clear())
        SetTarget(NULL);
}

// private void InvalidListOperation() [instance] :198
void DataBinding::InvalidListOperation()
{
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[27/*"Cannot bind '"*/], Key()), ::STRINGS[28/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[29/*"'. The obse...*/]), DataBinding::TypeToJSName(uPtr(Target())->PropertyType())), ::STRINGS[30/*"."*/]), this, ::STRINGS[31/*"/Users/paul...*/], 200, ::STRINGS[32/*"InvalidList...*/], NULL);
}

// private void MarkFailed(string message) [instance] :243
void DataBinding::MarkFailed(uString* message)
{
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :333
void DataBinding::PushValue(uObject* newValue)
{
    if (!Read())
        return;

    if (Parent() == NULL)
        return;

    _currentValue = newValue;

    if (TryPushAsValue(newValue))
        return;
    else if (TryPushAsName(newValue))
        return;
    else
        TryPushAsMarshalledValue(newValue);
}

// private bool get_Read() [instance] :177
bool DataBinding::Read()
{
    return (_mode & 1) == 1;
}

// internal void SetTarget(object value) [instance] :271
void DataBinding::SetTarget(uObject* value)
{
    ClearFailed();
    uPtr(Target())->SetAsObject1(value, (uObject*)this);
}

// public generated Uno.UX.Property get_Target() [instance] :157
::g::Uno::UX::Property* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :157
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :396
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(Target())->PropertyType(), newValue, &res, this))
    {
        try
        {
            SetTarget(res);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            MarkFailed(uPtr(e)->ToString());
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[31/*"/Users/paul...*/], 409, ::STRINGS[33/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :357
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[34/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

        if (k != NULL)
        {
            SetTarget(k);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(uPtr(Target())->PropertyType())) && !::g::Fuse::Marshal::CanConvertClass(uPtr(Target())->PropertyType()))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :345
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    if (::g::Fuse::Marshal::Is(newValue, uPtr(Target())->PropertyType()))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        SetTarget(newValue);
        return true;
    }

    return false;
}

// private bool get_Write() [instance] :178
bool DataBinding::Write()
{
    return (_mode & 2) == 2;
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) [static] :162
DataBinding* DataBinding::New1(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int mode)
{
    DataBinding* obj1 = (DataBinding*)uNew(DataBinding_typeof());
    obj1->ctor_2(target, key, nameTable, mode);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :384
::g::Uno::UX::Selector DataBinding::ToSelector(uObject* newValue)
{
    return uIs(newValue, ::TYPES[32/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[32/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[23/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[23/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :191
uString* DataBinding::TypeToJSName(uType* t)
{
    if ((::g::Uno::Type::op_Equality(t, ::TYPES[19/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[20/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[21/*double*/]))
        return ::STRINGS[34/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*string*/]))
        return ::STRINGS[35/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[36/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/subscription/$.uno
// --------------------------------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :8
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[25] = uString::Const("{");
    ::STRINGS[37] = uString::Const("} not found in data context");
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(DataSubscription_type, interface0),
        ::TYPES[29/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface2));
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _currentData), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::DataSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _isResolved), 0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::DataSubscription, _listener), 0,
        ::g::Fuse::Binding_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _source), 0);
}

DataSubscription_type* DataSubscription_typeof()
{
    static uSStrong<DataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataSubscription);
    options.TypeSize = sizeof(DataSubscription_type);
    type = (DataSubscription_type*)uClassType::New("Fuse.Reactive.DataSubscription", options);
    type->fp_build_ = DataSubscription_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*))DataSubscription__Resolve_fn;
    type->interface2.fp_OnDataChanged = (void(*)(uObject*))DataSubscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DataSubscription__Dispose_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__ctor_1_fn(DataSubscription* __this, uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener)
{
    __this->ctor_1(source, origin, key, listener);
}

// private void ClearDiagnostic() :66
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :52
void DataSubscription__Dispose_fn(DataSubscription* __this)
{
    __this->Dispose();
}

// private void FindData() :28
void DataSubscription__FindData_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :61
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this)
{
    __this->FindData();
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, DataSubscription** __retval)
{
    *__retval = DataSubscription::New1(source, origin, key, listener);
}

// protected override sealed void Resolve(object data) :42
void DataSubscription__Resolve_fn(DataSubscription* __this, uObject* data)
{
    __this->_isResolved = true;

    if (data != __this->_currentData)
    {
        __this->_currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), __this->_source, data);
    }
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener) [instance] :15
void DataSubscription::ctor_1(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener)
{
    ctor_(key);
    _source = source;
    _origin = origin;
    _listener = listener;
    uPtr(uPtr(_origin)->Parent())->AddDataListener(key, (uObject*)this);
    FindData();
}

// private void ClearDiagnostic() [instance] :66
void DataSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[29/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :52
void DataSubscription::Dispose()
{
    ClearDiagnostic();
    uPtr(uPtr(_origin)->Parent())->RemoveDataListener(Key(), (uObject*)this);
    _origin = NULL;
    _source = NULL;
    _listener = NULL;
}

// private void FindData() [instance] :28
void DataSubscription::FindData()
{
    if (_origin == NULL)
        return;

    ClearDiagnostic();
    _isResolved = false;
    uPtr(uPtr(_origin)->Parent())->EnumerateData((uObject*)this);

    if (!_isResolved)
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[25/*"{"*/], Key()), ::STRINGS[37/*"} not found...*/]), _origin);
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener) [static] :15
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_1(source, origin, key, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/fusejs/$.uno
// ----------------------------------------------------------------------------------------------------------------

// internal static class DebugLog :88
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[38] = uString::Const("debug_log");
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :90
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :95
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :90
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[38/*"debug_log"*/], uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :95
uObject* DebugLog::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ;

    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class Each :528
// {
// static Each() :528
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(25,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface7.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
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

// public Each() :579
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// public object get_Items() :587
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :588
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public Each New() :579
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :579
void Each::ctor_5()
{
    ctor_3();
}

// public object get_Items() [instance] :587
uObject* Each::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :588
void Each::Items(uObject* value)
{
    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public Each New() [static] :579
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class JavaScript.EvaluateDataContext :357
// {
static void JavaScript__EvaluateDataContext_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _dc), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _js), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _worker), 0);
}

uType* JavaScript__EvaluateDataContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__EvaluateDataContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.EvaluateDataContext", options);
    type->fp_build_ = JavaScript__EvaluateDataContext_build;
    return type;
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :363
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_(worker, js);
}

// private void Evaluate() :371
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->Evaluate();
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :363
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval)
{
    *__retval = JavaScript__EvaluateDataContext::New1(worker, js);
}

// private void SetDataContext() :380
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->SetDataContext();
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :363
void JavaScript__EvaluateDataContext::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__Evaluate_fn, this));
}

// private void Evaluate() [instance] :371
void JavaScript__EvaluateDataContext::Evaluate()
{
    _dc = uPtr(_worker)->Reflect(uPtr(_js)->EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :380
void JavaScript__EvaluateDataContext::SetDataContext()
{
    uPtr(_js)->SetDataContext(_dc);
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :363
JavaScript__EvaluateDataContext* JavaScript__EvaluateDataContext::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    JavaScript__EvaluateDataContext* obj1 = (JavaScript__EvaluateDataContext*)uNew(JavaScript__EvaluateDataContext_typeof());
    obj1->ctor_(worker, js);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class EventBinding :661
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[36] = ::g::Fuse::Reactive::IEventHandler_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[38] = ::g::Fuse::Node_typeof();
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(4,
        ::TYPES[36/*Fuse.Reactive.IEventHandler*/], offsetof(::g::Fuse::Reactive::EventBinding, _eventHandler), 0,
        ::TYPES[39/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/], offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionBinding_type);
    type = (::g::Fuse::Reactive::ExpressionBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// public EventBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :664
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(key, nameTable);
}

// public EventBinding New(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :664
void EventBinding__New1_fn(uObject* key, ::g::Uno::UX::NameTable* nameTable, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key, nameTable);
}

// internal override sealed void NewValue(object obj) :684
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[36/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :697
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :690
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :672
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [instance] :664
void EventBinding::ctor_2(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    ctor_1(key, nameTable);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :697
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Parent() == NULL)
        return;

    ::g::Fuse::Reactive::EventRecord* e = ::g::Fuse::Reactive::EventRecord::New1(uAs<uObject*>(args, ::TYPES[37/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[38/*Fuse.Node*/]));

    if (_eventHandler != NULL)
        ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[36/*Fuse.Reactive.IEventHandler*/]), (uObject*)e);
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), e);
    }
}

// private void ProcessQueuedEvents() [instance] :672
void EventBinding::ProcessQueuedEvents()
{
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[36/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2));
    }
}

// public EventBinding New(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [static] :664
EventBinding* EventBinding::New1(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key, nameTable);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class EventRecord :729
// {
static void EventRecord_build(uType* type)
{
    ::TYPES[38] = ::g::Fuse::Node_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[40] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0),
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventRecord_type, interface1));
    type->SetFields(0,
        ::TYPES[40/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::EventRecord, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventRecord, _data), 0,
        ::TYPES[38/*Fuse.Node*/], offsetof(::g::Fuse::Reactive::EventRecord, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventRecord, _sender), 0);
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    type->interface1.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventRecord__FuseScriptingIEventSerializerAddObject_fn;
    type->interface1.fp_AddString = (void(*)(uObject*, uString*, uString*))EventRecord__FuseScriptingIEventSerializerAddString_fn;
    type->interface1.fp_AddInt = (void(*)(uObject*, uString*, int*))EventRecord__FuseScriptingIEventSerializerAddInt_fn;
    type->interface1.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventRecord__FuseScriptingIEventSerializerAddDouble_fn;
    type->interface1.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventRecord__FuseScriptingIEventSerializerAddBool_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))EventRecord__get_Node_fn;
    type->interface0.fp_get_Data = (void(*)(uObject*, uObject**))EventRecord__get_Data_fn;
    type->interface0.fp_get_Sender = (void(*)(uObject*, ::g::Uno::UX::Selector*))EventRecord__get_Sender_fn;
    type->interface0.fp_get_Args = (void(*)(uObject*, uObject**))EventRecord__get_Args_fn;
    return type;
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) :736
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// private void AddObject(string key, object value) :756
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() :754
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// public object get_Data() :752
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private void Fuse.Scripting.IEventSerializer.AddBool(string key, bool value) :782
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value)
{
    bool value_ = *value;
    __this->AddObject(key, uBox(::TYPES[22/*bool*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddDouble(string key, double value) :777
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value)
{
    double value_ = *value;
    __this->AddObject(key, uBox(::TYPES[21/*double*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddInt(string key, int value) :772
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int* value)
{
    int value_ = *value;
    __this->AddObject(key, uBox(::TYPES[21/*double*/], (double)value_));
}

// private void Fuse.Scripting.IEventSerializer.AddObject(string key, object value) :762
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// private void Fuse.Scripting.IEventSerializer.AddString(string key, string value) :767
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value)
{
    __this->AddObject(key, value);
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) :736
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval)
{
    *__retval = EventRecord::New1(args, sender);
}

// public Fuse.Node get_Node() :751
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public Uno.UX.Selector get_Sender() :753
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Sender();
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) [instance] :736
void EventRecord::ctor_(uObject* args, uObject* sender)
{
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[38/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = uPtr(_node)->GetFirstData();

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[37/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// private void AddObject(string key, object value) [instance] :756
void EventRecord::AddObject(uString* key, uObject* value)
{
    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[40/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() [instance] :754
uObject* EventRecord::Args()
{
    return (uObject*)_args;
}

// public object get_Data() [instance] :752
uObject* EventRecord::Data()
{
    return _data;
}

// public Fuse.Node get_Node() [instance] :751
::g::Fuse::Node* EventRecord::Node()
{
    return _node;
}

// public Uno.UX.Selector get_Sender() [instance] :753
::g::Uno::UX::Selector EventRecord::Sender()
{
    return _sender;
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) [static] :736
EventRecord* EventRecord::New1(uObject* args, uObject* sender)
{
    EventRecord* obj1 = (EventRecord*)uNew(EventRecord_typeof());
    obj1->ctor_(args, sender);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class Expression :227
// {
static void Expression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression_type, interface0));
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Fuse.Reactive.Expression", options);
    type->fp_build_ = Expression_build;
    return type;
}

// protected generated Expression() :227
void Expression__ctor__fn(Expression* __this)
{
    __this->ctor_();
}

// protected generated Expression() [instance] :227
void Expression::ctor_()
{
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class ExpressionBinding :796
// {
static void ExpressionBinding_build(uType* type)
{
    ::STRINGS[39] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[41] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[42] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _expressionSub), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding, _nameTable), uFieldFlagsWeak,
        ::TYPES[41/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _Key), 0);
}

ExpressionBinding_type* ExpressionBinding_typeof()
{
    static uSStrong<ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionBinding);
    options.TypeSize = sizeof(ExpressionBinding_type);
    type = (ExpressionBinding_type*)uClassType::New("Fuse.Reactive.ExpressionBinding", options);
    type->fp_build_ = ExpressionBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))ExpressionBinding__get_NameTable_fn;
    return type;
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :805
void ExpressionBinding__ctor_1_fn(ExpressionBinding* __this, uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_1(key, nameTable);
}

// protected internal bool get_CanWriteBack() :813
void ExpressionBinding__get_CanWriteBack_fn(ExpressionBinding* __this, bool* __retval)
{
    *__retval = __this->CanWriteBack();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :827
void ExpressionBinding__FuseReactiveIContextget_Node_fn(ExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Parent(), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :822
void ExpressionBinding__FuseReactiveIContextSubscribe_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this, key, listener), void();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :841
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    __this->NewValue(obj);
}

// public generated Fuse.Reactive.IExpression get_Key() :798
void ExpressionBinding__get_Key_fn(ExpressionBinding* __this, uObject** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Fuse.Reactive.IExpression value) :798
void ExpressionBinding__set_Key_fn(ExpressionBinding* __this, uObject* value)
{
    __this->Key(value);
}

// public Uno.UX.NameTable get_NameTable() :802
void ExpressionBinding__get_NameTable_fn(ExpressionBinding* __this, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = __this->NameTable();
}

// protected override void OnRooted() :816
void ExpressionBinding__OnRooted_fn(ExpressionBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[41/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :834
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[29/*Uno.IDisposable*/]));
    __this->_expressionSub = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :829
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"The binding...*/]));
}

// protected internal void WriteBack(object value) :814
void ExpressionBinding__WriteBack_fn(ExpressionBinding* __this, uObject* value)
{
    __this->WriteBack(value);
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [instance] :805
void ExpressionBinding::ctor_1(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    ctor_();
    Key(key);
    _nameTable = nameTable;
}

// protected internal bool get_CanWriteBack() [instance] :813
bool ExpressionBinding::CanWriteBack()
{
    return uIs((uObject*)_expressionSub, ::TYPES[42/*Fuse.Reactive.IWriteable*/]);
}

// public generated Fuse.Reactive.IExpression get_Key() [instance] :798
uObject* ExpressionBinding::Key()
{
    return _Key;
}

// private generated void set_Key(Fuse.Reactive.IExpression value) [instance] :798
void ExpressionBinding::Key(uObject* value)
{
    _Key = value;
}

// public Uno.UX.NameTable get_NameTable() [instance] :802
::g::Uno::UX::NameTable* ExpressionBinding::NameTable()
{
    return _nameTable;
}

// protected internal void WriteBack(object value) [instance] :814
void ExpressionBinding::WriteBack(uObject* value)
{
    ::g::Fuse::Reactive::IWriteable::SetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[42/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.Failed :876
// {
static void Observable__Failed_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Observable__Failed, _message), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Failed_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Failed);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Failed", options);
    type->fp_build_ = Observable__Failed_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Failed__OnPerform_fn;
    return type;
}

// public Failed(Fuse.Reactive.Observable obs, string message) :880
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Reactive::Observable* obs, uString* message)
{
    __this->ctor_1(obs, message);
}

// public Failed New(Fuse.Reactive.Observable obs, string message) :880
void Observable__Failed__New1_fn(::g::Fuse::Reactive::Observable* obs, uString* message, Observable__Failed** __retval)
{
    *__retval = Observable__Failed::New1(obs, message);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :885
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_message);
}

// public Failed(Fuse.Reactive.Observable obs, string message) [instance] :880
void Observable__Failed::ctor_1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    ctor_(obs);
    _message = message;
}

// public Failed New(Fuse.Reactive.Observable obs, string message) [static] :880
Observable__Failed* Observable__Failed::New1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    Observable__Failed* obj1 = (Observable__Failed*)uNew(Observable__Failed_typeof());
    obj1->ctor_1(obs, message);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class FunctionMirror :164
// {
static void FunctionMirror_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(FunctionMirror_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FunctionMirror, _func), 0);
}

FunctionMirror_type* FunctionMirror_typeof()
{
    static uSStrong<FunctionMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FunctionMirror);
    options.TypeSize = sizeof(FunctionMirror_type);
    type = (FunctionMirror_type*)uClassType::New("Fuse.Reactive.FunctionMirror", options);
    type->fp_build_ = FunctionMirror_build;
    type->interface0.fp_Dispatch = (void(*)(uObject*, uObject*))FunctionMirror__Dispatch_fn;
    return type;
}

// public FunctionMirror(Fuse.Scripting.Function func) :168
void FunctionMirror__ctor__fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_(func);
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) :205
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e)
{
    __this->Dispatch(e);
}

// public FunctionMirror New(Fuse.Scripting.Function func) :168
void FunctionMirror__New1_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval)
{
    *__retval = FunctionMirror::New1(func);
}

// public FunctionMirror(Fuse.Scripting.Function func) [instance] :168
void FunctionMirror::ctor_(::g::Fuse::Scripting::Function* func)
{
    _func = func;
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) [instance] :205
void FunctionMirror::Dispatch(uObject* e)
{
    uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)FunctionMirror__CallClosure__Call_fn, FunctionMirror__CallClosure::New1(_func, e)));
}

// public FunctionMirror New(Fuse.Scripting.Function func) [static] :168
FunctionMirror* FunctionMirror::New1(::g::Fuse::Scripting::Function* func)
{
    FunctionMirror* obj1 = (FunctionMirror*)uNew(FunctionMirror_typeof());
    obj1->ctor_(func);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IContext :38
// {
uInterfaceType* IContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IContext", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IEventHandler :18
// {
uInterfaceType* IEventHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventHandler", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IEventRecord :10
// {
uInterfaceType* IEventRecord_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventRecord", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IExpression :63
// {
uInterfaceType* IExpression_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IExpression", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IListener :33
// {
uInterfaceType* IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class InnerListener :963
// {
static void InnerListener_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[43] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[44] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener, _diag), 0,
        ::TYPES[44/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/], offsetof(::g::Fuse::Reactive::InnerListener, _obsSubs), 0);
}

InnerListener_type* InnerListener_typeof()
{
    static uSStrong<InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener);
    options.TypeSize = sizeof(InnerListener_type);
    type = (InnerListener_type*)uClassType::New("Fuse.Reactive.InnerListener", options);
    type->fp_build_ = InnerListener_build;
    type->fp_Dispose = InnerListener__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__Dispose_fn;
    return type;
}

// protected generated InnerListener() :963
void InnerListener__ctor__fn(InnerListener* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :975
void InnerListener__ClearDiagnostic_fn(InnerListener* __this)
{
    __this->ClearDiagnostic();
}

// public virtual void Dispose() :984
void InnerListener__Dispose_fn(InnerListener* __this)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2); enum1.MoveNext(::TYPES[43/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]); )
        {
            InnerListener__ObservableSubscription* k = enum1.Current(::TYPES[43/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]);
            uPtr(k)->Dispose();
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :998
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[31/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[44/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/]));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_obsSubs), source, InnerListener__ObservableSubscription::New1(source, obs, __this));
    }
    else
        __this->OnNewData(source, value);
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :969
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// protected generated InnerListener() [instance] :963
void InnerListener::ctor_()
{
}

// public void ClearDiagnostic() [instance] :975
void InnerListener::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[29/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :969
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.InsertAll :1058
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAll, _index), 0,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAll, _items), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :1063
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :1063
void Observable__InsertAll__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1074
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :1069
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [instance] :1063
void Observable__InsertAll::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [static] :1063
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.InsertAt :1030
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) :1035
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) :1035
void Observable__InsertAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1046
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :1041
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) [instance] :1035
void Observable__InsertAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) [static] :1035
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// public class Instantiator :862
// {
static void Instantiator_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Template contains a non-Node");
    ::STRINGS[31] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno");
    ::STRINGS[41] = uString::Const("AddTemplate");
    ::STRINGS[16] = uString::Const("");
    ::STRINGS[42] = uString::Const("Limit cannot be less than 0");
    ::STRINGS[43] = uString::Const("set_Limit");
    ::STRINGS[44] = uString::Const("Offset cannot be less than 0");
    ::STRINGS[45] = uString::Const("set_Offset");
    ::TYPES[45] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), NULL);
    ::TYPES[46] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), uObject_typeof(), NULL);
    ::TYPES[38] = ::g::Fuse::Node_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[47] = Instantiator__ObservableLink_typeof();
    ::TYPES[48] = Instantiator__CountItem_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::IArray_typeof();
    ::TYPES[49] = ::g::Fuse::IObject_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[50] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[38/*Fuse.Node*/], NULL);
    ::TYPES[51] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[52] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2/*IndexOf<Fuse.Node>*/, ::TYPES[38/*Fuse.Node*/], NULL);
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[54] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[38/*Fuse.Node*/], NULL);
    ::TYPES[55] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Instantiator_type, interface6),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(Instantiator_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface8));
    type->SetFields(12,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _busyTask), 0,
        ::TYPES[46/*Uno.Collections.Dictionary<Fuse.Node, object>*/], offsetof(::g::Fuse::Reactive::Instantiator, _dataMap), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _hasLimit), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _items), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _listening), 0,
        ::TYPES[23/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _matchKey), 0,
        ::TYPES[45/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/], offsetof(::g::Fuse::Reactive::Instantiator, _nodes), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _offset), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Instantiator, _subscription), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator, _templates), 0,
        ::TYPES[23/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _TemplateKey), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _TemplateSource), 0);
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface7.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Instantiator__FuseReactiveIObserverOnClear_fn;
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

// protected internal Instantiator() :871
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// private void AddTemplate(object data, Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) :1450
void Instantiator__AddTemplate_fn(Instantiator* __this, uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    __this->AddTemplate(data, f, newElements);
}

// private void Fuse.ITemplateObserver.OnTemplatesChangedWileRooted() :943
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :1152
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    bool ret8;
    uObject* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret8), ret8))
    {
        Instantiator__ObservableLink* ol = uAs<Instantiator__ObservableLink*>(v, ::TYPES[47/*Fuse.Reactive.Instantiator.ObservableLink*/]);

        if (ol != NULL)
            return *__retval = uPtr(ol)->Data(), void();

        if (!uIs(v, ::TYPES[48/*Fuse.Reactive.Instantiator.CountItem*/]))
            return *__retval = v, void();
    }

    return *__retval = NULL, void();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1218
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    if (!__this->_listening)
        return;

    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnClear() :1275
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1210
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1248
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->InsertNew(index_);
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :1266
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1257
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->RemoveAt(index_);
    __this->InsertNew(index_);
    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :1226
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->RemoveAt(index_);
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1201
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->TrimAndPad();
    __this->SetValid();
}

// private object GetData(int dataIndex) :1128
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// private int GetDataCount() :1139
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->GetDataCount();
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :1478
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :1473
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_nodes)->Count() - 1), void();
}

// private string GetMatchKey(object data) :1344
void Instantiator__GetMatchKey_fn(Instantiator* __this, uObject* data, uString** __retval)
{
    *__retval = __this->GetMatchKey(data);
}

// internal bool get_HasLimit() :1067
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// private void InsertNew(int dataIndex) :1357
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex)
{
    __this->InsertNew(*dataIndex);
}

// internal int get_Limit() :1025
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :1026
void Instantiator__set_Limit_fn(Instantiator* __this, int* value)
{
    __this->Limit(*value);
}

// internal int get_Offset() :977
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :978
void Instantiator__set_Offset_fn(Instantiator* __this, int* value)
{
    __this->Offset(*value);
}

// protected internal void OnItemsChanged() :1093
void Instantiator__OnItemsChanged_fn(Instantiator* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :954
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :948
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :960
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
        __this->_listening = false;
    }

    __this->RemoveAll();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveAll() :1291
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int dataIndex) :1235
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex)
{
    __this->RemoveAt(*dataIndex);
}

// private void ReplaceAll(object[] dcs) :1284
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :1169
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :1193
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :1187
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// public generated string get_TemplateKey() :940
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :940
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :883
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Fuse.Visual get_TemplateSource() :929
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->TemplateSource();
}

// public generated void set_TemplateSource(Fuse.Visual value) :929
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value)
{
    __this->TemplateSource(value);
}

// private void TrimAndPad() :1044
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// protected internal Instantiator() [instance] :871
void Instantiator::ctor_3()
{
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[46/*Uno.Collections.Dictionary<Fuse.Node, object>*/]));
    ctor_2();
}

// private void AddTemplate(object data, Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) [instance] :1450
void Instantiator::AddTemplate(uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[38/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[40/*"Template co...*/], this, ::STRINGS[31/*"/Users/paul...*/], 1455, ::STRINGS[41/*"AddTemplate"*/]);
        return;
    }

    uObject* obs = uAs<uObject*>(data, ::TYPES[31/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), elm, Instantiator__ObservableLink::New1(obs, elm));
    else
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), elm, data);

    uPtr(elm)->OverrideContextParent = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
}

// private object GetData(int dataIndex) [instance] :1128
uObject* Instantiator::GetData(int dataIndex)
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[28/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[28/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private int GetDataCount() [instance] :1139
int Instantiator::GetDataCount()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    uObject* a = uAs<uObject*>(_items, ::TYPES[28/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[28/*Fuse.IArray*/]));

    return 0;
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :1478
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int windowIndex)
{
    ::g::Uno::Collections::List* ret9;
    ::g::Fuse::Node* ret10;

    if (windowIndex >= uPtr(_nodes)->Count())
        windowIndex = uPtr(_nodes)->Count() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = (::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(windowIndex), &ret9), ret9);

        if (uPtr(lastList)->Count() != 0)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret10), ret10))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// private string GetMatchKey(object data) [instance] :1344
uString* Instantiator::GetMatchKey(uObject* data)
{
    uObject* so = uAs<uObject*>(data, ::TYPES[49/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[49/*Fuse.IObject*/]), _matchKey))
            return uAs<uString*>(::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[49/*Fuse.IObject*/]), _matchKey), ::TYPES[23/*string*/]);
    }

    return NULL;
}

// internal bool get_HasLimit() [instance] :1067
bool Instantiator::HasLimit()
{
    return _hasLimit;
}

// private void InsertNew(int dataIndex) [instance] :1357
void Instantiator::InsertNew(int dataIndex)
{
    ::g::Uno::UX::Template* ret11;
    int ret12;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret13;
    int windowIndex = dataIndex - Offset();

    if ((HasLimit() && (windowIndex >= Limit())) || (windowIndex < 0))
        return;

    uObject* data = GetData(dataIndex);
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[50/*Uno.Collections.List<Fuse.Node>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((TemplateSource() != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = uPtr(TemplateSource())->FindTemplate(TemplateKey());

        if (t != NULL)
        {
            anyMatched = true;
            AddTemplate(data, t, newElements);
        }
    }

    if (!anyMatched)
    {
        uString* key = GetMatchKey(data);

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Templates()), ::TYPES[51/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[8/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[52/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret11), ret11);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Key(), key))
                continue;

            anyMatched = true;
            AddTemplate(data, f, newElements);
        }
    }

    if (!anyMatched && (defaultTemplate != NULL))
        AddTemplate(data, defaultTemplate, newElements);

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);
    ::g::Uno::Collections::List__Insert_fn(uPtr(_nodes), uCRef<int>(windowIndex), newElements);
    uPtr(Parent())->InsertNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[53/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret12), ret12) + 1, uBox(::TYPES[54/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(newElements, &ret13), ret13)));
}

// internal int get_Limit() [instance] :1025
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :1026
void Instantiator::Limit(int value)
{
    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[42/*"Limit canno...*/], this, ::STRINGS[31/*"/Users/paul...*/], 1033, ::STRINGS[43/*"set_Limit"*/], NULL);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;

    if (IsRootingCompleted())
        TrimAndPad();
}

// internal int get_Offset() [instance] :977
int Instantiator::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :978
void Instantiator::Offset(int value)
{
    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[44/*"Offset cann...*/], this, ::STRINGS[31/*"/Users/paul...*/], 985, ::STRINGS[45/*"set_Offset"*/], NULL);
        value = 0;
    }

    if (!IsRootingCompleted())
    {
        _offset = value;
        return;
    }

    int dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemoveAt(_offset);

        _offset++;
        int end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertNew(end);
    }

    while (_offset > value)
    {
        int end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemoveAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertNew(_offset);
    }
}

// protected internal void OnItemsChanged() [instance] :1093
void Instantiator::OnItemsChanged()
{
    if (!IsRootingStarted())
        return;

    RemoveAll();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[31/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

        _listening = true;
        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[31/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :948
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void RemoveAll() [instance] :1291
void Instantiator::RemoveAll()
{
    ::g::Uno::Collections::List* ret14;
    ::g::Fuse::Node* ret15;

    if (uPtr(_nodes)->Count() == 0)
        return;

    ::g::Uno::Collections::List* nodes = _nodes;
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));

    for (int i = 0; i < uPtr(nodes)->Count(); i++)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(nodes), uCRef<int>(i), &ret14), ret14);

        for (int n = 0; n < uPtr(l)->Count(); n++)
            uPtr(Parent())->BeginRemoveChild((::g::Uno::Collections::List__get_Item_fn(uPtr(l), uCRef<int>(n), &ret15), ret15), NULL);
    }
}

// private void RemoveAt(int dataIndex) [instance] :1235
void Instantiator::RemoveAt(int dataIndex)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret16;
    ::g::Uno::Collections::List* ret17;
    int windowIndex = dataIndex - Offset();

    if ((windowIndex < 0) || (windowIndex >= uPtr(_nodes)->Count()))
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(windowIndex), &ret17), ret17)), &ret16), ret16); enum1.MoveNext(::TYPES[54/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[54/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(Parent())->BeginRemoveChild(c, NULL);
    }

    uPtr(_nodes)->RemoveAt(windowIndex);
    SetValid();
}

// private void ReplaceAll(object[] dcs) [instance] :1284
void Instantiator::ReplaceAll(uArray* dcs)
{
    RemoveAll();

    for (int i = 0; i < uPtr(dcs)->Length(); i++)
        InsertNew(i);
}

// private void Repopulate() [instance] :1169
void Instantiator::Repopulate()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);
    uObject* a = uAs<uObject*>(_items, ::TYPES[28/*Fuse.IArray*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[28/*Fuse.IArray*/])); i++)
            InsertNew(i);
    }
}

// private void SetFailed(string message) [instance] :1193
void Instantiator::SetFailed(uString* message)
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// private void SetValid() [instance] :1187
void Instantiator::SetValid()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[16/*""*/]);
}

// public generated string get_TemplateKey() [instance] :940
uString* Instantiator::TemplateKey()
{
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :940
void Instantiator::TemplateKey(uString* value)
{
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :883
uObject* Instantiator::Templates()
{
    uObject* ind3 = _templates;
    return (ind3 != NULL) ? ind3 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[55/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[56/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[56/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this))));
}

// public generated Fuse.Visual get_TemplateSource() [instance] :929
::g::Fuse::Visual* Instantiator::TemplateSource()
{
    return _TemplateSource;
}

// public generated void set_TemplateSource(Fuse.Visual value) [instance] :929
void Instantiator::TemplateSource(::g::Fuse::Visual* value)
{
    _TemplateSource = value;
}

// private void TrimAndPad() [instance] :1044
void Instantiator::TrimAndPad()
{
    if (HasLimit())

        while (uPtr(_nodes)->Count() > _limit)
            RemoveAt((Offset() + uPtr(_nodes)->Count()) - 1);

    int dataCount = GetDataCount();

    if (HasLimit())

        while ((uPtr(_nodes)->Count() < _limit) && ((Offset() + uPtr(_nodes)->Count()) < dataCount))
            InsertNew(Offset() + uPtr(_nodes)->Count());
    else

        while (uPtr(_nodes)->Count() < dataCount)
            InsertNew(Offset() + uPtr(_nodes)->Count());
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IObservable :85
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IObserver :97
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface ISubscription :90
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface ValueForwarder.IValueListener :197
// {
uInterfaceType* ValueForwarder__IValueListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ValueForwarder.IValueListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IWriteable :58
// {
uInterfaceType* IWriteable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IWriteable", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class JavaScript :233
// {
// static JavaScript() :233
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[46] = uString::Const("exports");
    ::STRINGS[47] = uString::Const("JavaScript error in ");
    ::STRINGS[48] = uString::Const(" fixed!");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno");
    ::STRINGS[49] = uString::Const("EvaluateModule");
    ::STRINGS[50] = uString::Const("JavaScript error");
    ::STRINGS[51] = uString::Const("Cannot require() a rooted module");
    ::STRINGS[52] = uString::Const(" in ");
    ::STRINGS[53] = uString::Const(" line ");
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[57] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[59] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Reactive::IObservable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(JavaScript_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface5),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface6),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(JavaScript_type, interface7),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(JavaScript_type, interface8));
    type->SetFields(12,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _siblingData), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::JavaScript, _sub), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface6.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface7.fp_NewValue = (void(*)(uObject*, uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface8.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseNodeISiblingDataProviderget_Data_fn;
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

// public JavaScript(Uno.UX.NameTable nameTable) :242
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// private void DispatchEvaluate() :300
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void DisposeSubscription() :348
void JavaScript__DisposeSubscription_fn(JavaScript* __this)
{
    __this->DisposeSubscription();
}

// private object EvaluateExports() :388
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :400
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :458
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :459
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :466
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :467
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Node.ISiblingDataProvider.get_Data() :345
void JavaScript__FuseNodeISiblingDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_siblingData, void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object data) :330
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :289
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :451
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :452
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :242
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :252
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter()++;
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :259
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    ::g::Fuse::Scripting::NativeModule* ret3;
    __this->SetDataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[58/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[57/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[59/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret3), ret3);
            uPtr(nm)->InternalReset();
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void SetDataContext(object newDc) :309
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// private void SetSiblingData(object data) :336
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// internal static void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) :280
void JavaScript__UserScriptError_fn(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    JavaScript::UserScriptError(msg, ex, obj, filePath, *lineNumber, memberName);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :237
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong<uObject*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :242
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker(), nameTable);
}

// private void DispatchEvaluate() [instance] :300
void JavaScript::DispatchEvaluate()
{
    if (!IsRootingStarted())
        return;

    JavaScript__EvaluateDataContext::New1(JavaScript::Worker(), this);
}

// private void DisposeSubscription() [instance] :348
void JavaScript::DisposeSubscription()
{
    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[29/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// private object EvaluateExports() [instance] :388
uObject* JavaScript::EvaluateExports()
{
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[46/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :400
void JavaScript::EvaluateModule()
{
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(JavaScript::_resetHookMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(JavaScript::_resetHookMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[19/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[47/*"JavaScript ...*/], FileName()), ::STRINGS[48/*" fixed!"*/]), this, ::STRINGS[5/*"/Users/paul...*/], 415, ::STRINGS[49/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                JavaScript::UserScriptError(::STRINGS[50/*"JavaScript ...*/], se, this, ::STRINGS[5/*"/Users/paul...*/], 426, ::STRINGS[49/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[19/*int*/], LineNumber()));
            }
        }
    }
}

// public Uno.UX.FileSource get_File() [instance] :458
::g::Uno::UX::FileSource* JavaScript::File()
{
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :459
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :466
uString* JavaScript::FileName()
{
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :467
void JavaScript::FileName(uString* value)
{
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :451
int JavaScript::LineNumber()
{
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :452
void JavaScript::LineNumber(int value)
{
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void SetDataContext(object newDc) [instance] :309
void JavaScript::SetDataContext(uObject* newDc)
{
    DisposeSubscription();
    uObject* oldDc = _currentDc;
    _currentDc = newDc;
    uObject* obs = uAs<uObject*>(newDc, ::TYPES[31/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SetSiblingData(NULL);
        _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    }
    else
        SetSiblingData(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(oldDc);
}

// private void SetSiblingData(object data) [instance] :336
void JavaScript::SetSiblingData(uObject* data)
{
    uObject* oldSiblingData = _siblingData;
    _siblingData = data;

    if (Parent() != NULL)
        uPtr(Parent())->BroadcastDataChange(oldSiblingData, data);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :242
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :280
void JavaScript::UserScriptError(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    JavaScript_typeof()->Init();
    msg = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(msg, ::STRINGS[52/*" in "*/]), uPtr(ex)->FileName()), ::STRINGS[53/*" line "*/]), uBox<int>(::TYPES[19/*int*/], uPtr(ex)->LineNumber()));
    ::g::Fuse::Diagnostics::UserError(msg, obj, filePath, lineNumber, memberName, ex);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :237
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :1101
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[32] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ObservableProperty_type);
    type = (::g::Fuse::Reactive::ObservableProperty_type*)uClassType::New("Fuse.Reactive.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1103
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_1(w, obj, p);
}

// private object Get(object[] args) :1108
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1103
void LazyObservableProperty__New2_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(w, obj, p);
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :1103
void LazyObservableProperty::ctor_1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ctor_(w, obj, p);
    uPtr(uPtr(w)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[32/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :1108
uObject* LazyObservableProperty::Get(uArray* args)
{
    return uPtr(_worker)->Unwrap(GetObservable());
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :1103
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(w, obj, p);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract class ListMirror :1972
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(ListMirror_type, interface1));
    type->SetFields(1);
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Reactive.ListMirror", options);
    type->fp_build_ = ListMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// protected ListMirror(object raw) :1977
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// protected ListMirror(object raw) [instance] :1977
void ListMirror::ctor_1(uObject* raw)
{
    ctor_(raw);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :1557
// {
// static MethodClosure() :1557
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[3/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::STRINGS[54] = uString::Const(" (ScriptMethod)");
    ::STRINGS[55] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[56] = uString::Const(" = function() { callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _worker), 0,
        ::TYPES[3/*object[]*/], (uintptr_t)&::g::Fuse::Reactive::ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :1561
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, m, worker);
}

// private object Callback(object[] args) :1574
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :1582
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :1561
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(cl, m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [instance] :1561
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    _m = m;
    _worker = worker;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[54/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"(function (...*/], uPtr(m)->Name), ::STRINGS[56/*" = function...*/])), ::TYPES[24/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, cl, uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, this)));
}

// private object Callback(object[] args) [instance] :1574
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[60/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[25/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(uPtr(_worker)->Context(), self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :1582
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    ThreadWorker__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[3/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [static] :1561
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(cl, m, worker);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Name :257
// {
static void Name_build(uType* type)
{
    ::STRINGS[57] = uString::Const("Named object not found: ");
    ::TYPES[27] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Name, _Identifier), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Name_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Name);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Name", options);
    type->fp_build_ = Name_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Name__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Name__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :263
void Name__GetValue_fn(Name* __this, uObject* context, uObject** __retval)
{
    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/])))->Item(__this->Identifier());

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[57/*"Named objec...*/], __this->Identifier())));
}

// public generated string get_Identifier() :259
void Name__get_Identifier_fn(Name* __this, uString** __retval)
{
    *__retval = __this->Identifier();
}

// private generated void set_Identifier(string value) :259
void Name__set_Identifier_fn(Name* __this, uString* value)
{
    __this->Identifier(value);
}

// public override sealed string ToString() :273
void Name__ToString_fn(Name* __this, uString** __retval)
{
    return *__retval = __this->Identifier(), void();
}

// public generated string get_Identifier() [instance] :259
uString* Name::Identifier()
{
    return _Identifier;
}

// private generated void set_Identifier(string value) [instance] :259
void Name::Identifier(uString* value)
{
    _Identifier = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.NewAll :928
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAll, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :933
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :933
void Observable__NewAll__New1_fn(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :944
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[61/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), (uObject*)__this->_newValues);
}

// protected override sealed void Unsubscribe() :939
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [instance] :933
void Observable__NewAll::ctor_1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [static] :933
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.NewAt :898
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) :903
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) :903
void Observable__NewAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :915
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :909
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) [instance] :903
void Observable__NewAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) [static] :903
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class ObjectMirror :480
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[40] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::ValueMirror_typeof();
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[63] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ObjectMirror_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ObjectMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[40/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::ObjectMirror, _props), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Reactive.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :484
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(worker, obj);
}

// public bool ContainsKey(string key) :503
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :510
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :515
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :484
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(worker, obj);
}

// public override sealed void Unsubscribe() :494
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret4), ret4); enum1.MoveNext(::TYPES[62/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[62/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(p.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[4/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :484
void ObjectMirror::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[40/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(obj);
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, uPtr(worker)->Reflect(uPtr(obj)->Item(s)));
    }
}

// public bool ContainsKey(string key) [instance] :503
bool ObjectMirror::ContainsKey(uString* key)
{
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3);
}

// public object get_Item(string key) [instance] :510
uObject* ObjectMirror::Item(uString* key)
{
    uObject* ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret5), ret5);
}

// public string[] get_Keys() [instance] :515
uArray* ObjectMirror::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[63/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :484
ObjectMirror* ObjectMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj2 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj2->ctor_1(worker, obj);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class Observable :527
// {
static void Observable_build(uType* type)
{
    ::STRINGS[58] = uString::Const("addSubscriber");
    ::STRINGS[59] = uString::Const("set");
    ::STRINGS[60] = uString::Const("clear");
    ::STRINGS[61] = uString::Const("newAt");
    ::STRINGS[62] = uString::Const("newAll");
    ::STRINGS[63] = uString::Const("add");
    ::STRINGS[64] = uString::Const("removeAt");
    ::STRINGS[65] = uString::Const("insertAt");
    ::STRINGS[66] = uString::Const("removeRange");
    ::STRINGS[67] = uString::Const("insertAll");
    ::STRINGS[68] = uString::Const("failed");
    ::STRINGS[69] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[70] = uString::Const("removeSubscriber");
    ::TYPES[64] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[65] = ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[66] = ::g::Fuse::Reactive::ArrayMirror_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[21] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(Observable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface2));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable, _isUnsubscribed), 0,
        ::TYPES[15/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Reactive::Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::Observable, _observeChange), 0,
        ::TYPES[65/*Uno.Collections.List<Fuse.Reactive.Observable.Subscription>*/], offsetof(::g::Fuse::Reactive::Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable, _usingObservers), 0,
        ::TYPES[64/*Uno.Collections.List<object>*/], offsetof(::g::Fuse::Reactive::Observable, _values), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::Observable, _worker), 0);
}

Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__Subscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) :670
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* supressCallback)
{
    __this->ctor_2(worker, obj, *supressCallback);
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) :678
void Observable__Create_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(worker);
}

// public bool get_IsUnsubscribed() :746
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :535
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :531
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) :670
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* supressCallback, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, *supressCallback);
}

// internal Fuse.Scripting.Object get_Object() :666
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :692
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void ObserversCleanup() :547
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber() :769
void Observable__RemoveSubscriber_fn(Observable* __this)
{
    __this->RemoveSubscriber();
}

// public void SetValue(int index, object value) :539
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :658
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// private int ToInt(object obj) :683
void Observable__ToInt_fn(Observable* __this, uObject* obj, int* __retval)
{
    *__retval = __this->ToInt(obj);
}

// public override sealed void Unsubscribe() :749
void Observable__Unsubscribe_fn(Observable* __this)
{
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :760
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) [instance] :670
void Observable::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[64/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[65/*Uno.Collections.List<Fuse.Reactive.Observable.Subscription>*/]));
    ctor_1(obj);
    _worker = worker;
    _observable = obj;
    _observeChange = uPtr(uPtr(worker)->Context())->CallbackToFunction(uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(::STRINGS[58/*"addSubscriber"*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::TYPES[22/*bool*/], supressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :746
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :666
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :692
uObject* Observable::ObserveChange(uArray* args)
{
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[23/*string*/]);
    int origin = ToInt(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, ::STRINGS[59/*"set"*/]))
        uPtr(_worker)->Enqueue(Observable__Set::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[60/*"clear"*/]))
        uPtr(_worker)->Enqueue(Observable__Clear::New1(this, origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[61/*"newAt"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[62/*"newAll"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAll::New1(this, uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::TYPES[66/*Fuse.Reactive.ArrayMirror*/]), origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[63/*"add"*/]))
        uPtr(_worker)->Enqueue(Observable__Add::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[64/*"removeAt"*/]))
        uPtr(_worker)->Enqueue(Observable__RemoveAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[65/*"insertAt"*/]))
        uPtr(_worker)->Enqueue(Observable__InsertAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[66/*"removeRange"*/]))
        uPtr(_worker)->Enqueue(Observable__RemoveRange::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), ToInt(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[67/*"insertAll"*/]))
        uPtr(_worker)->Enqueue(Observable__InsertAll::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)), ::TYPES[66/*Fuse.Reactive.ArrayMirror*/])));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[68/*"failed"*/]))
        uPtr(_worker)->Enqueue(Observable__Failed::New1(this, uAs<uString*>(uPtr(args)->Strong<uObject*>(3), ::TYPES[23/*string*/])));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[69/*"Unhandled o...*/], op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :547
void Observable::ObserversCleanup()
{
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber() [instance] :769
void Observable::RemoveSubscriber()
{
    uPtr(_observable)->CallMethod(::STRINGS[70/*"removeSubsc...*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :539
void Observable::SetValue(int index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :658
uObject* Observable::Subscribe(uObject* observer)
{
    return (uObject*)Observable__Subscription::New1(this, observer);
}

// private int ToInt(object obj) [instance] :683
int Observable::ToInt(uObject* obj)
{
    if (uIs(obj, ::TYPES[19/*int*/]))
        return uUnbox<int>(::TYPES[19/*int*/], obj);

    if (uIs(obj, ::TYPES[21/*double*/]))
        return (int)uUnbox<double>(::TYPES[21/*double*/], obj);

    return -1;
}

// private void UnsubscribeValues() [instance] :760
void Observable::UnsubscribeValues()
{
    uObject* ret3;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* vm = uAs< ::g::Fuse::Reactive::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret3), ret3), ::TYPES[4/*Fuse.Reactive.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) [static] :678
Observable* Observable::Create(::g::Fuse::Reactive::ThreadWorker* worker)
{
    return Observable::New1(worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(worker)->Context())->Observable())->Call(uArray::New(::TYPES[3/*object[]*/], 0)), ::TYPES[15/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) [static] :670
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_2(worker, obj, supressCallback);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class Instantiator.ObservableLink :1417
// {
static void Instantiator__ObservableLink_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__ObservableLink, _currentData), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__ObservableLink, _target), 0);
}

::g::Fuse::Reactive::ValueObserver_type* Instantiator__ObservableLink_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Instantiator__ObservableLink);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.Instantiator.ObservableLink", options);
    type->fp_build_ = Instantiator__ObservableLink_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))Instantiator__ObservableLink__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))Instantiator__ObservableLink__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Instantiator__ObservableLink__Dispose_fn;
    return type;
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Node target) :1421
void Instantiator__ObservableLink__ctor_1_fn(Instantiator__ObservableLink* __this, uObject* obs, ::g::Fuse::Node* target)
{
    __this->ctor_1(obs, target);
}

// public object get_Data() :1435
void Instantiator__ObservableLink__get_Data_fn(Instantiator__ObservableLink* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public override sealed void Dispose() :1427
void Instantiator__ObservableLink__Dispose_fn(Instantiator__ObservableLink* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_target = NULL;
    __this->_currentData = NULL;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Node target) :1421
void Instantiator__ObservableLink__New1_fn(uObject* obs, ::g::Fuse::Node* target, Instantiator__ObservableLink** __retval)
{
    *__retval = Instantiator__ObservableLink::New1(obs, target);
}

// protected override sealed void PushData(object newData) :1437
void Instantiator__ObservableLink__PushData_fn(Instantiator__ObservableLink* __this, uObject* newData)
{
    if (__this->_target == NULL)
        return;

    uObject* oldData = __this->_currentData;
    __this->_currentData = newData;
    uPtr(__this->_target)->BroadcastDataChange(oldData, newData);
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Node target) [instance] :1421
void Instantiator__ObservableLink::ctor_1(uObject* obs, ::g::Fuse::Node* target)
{
    ctor_();
    _target = target;
    Subscribe(obs);
}

// public object get_Data() [instance] :1435
uObject* Instantiator__ObservableLink::Data()
{
    return _currentData;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Node target) [static] :1421
Instantiator__ObservableLink* Instantiator__ObservableLink::New1(uObject* obs, ::g::Fuse::Node* target)
{
    Instantiator__ObservableLink* obj1 = (Instantiator__ObservableLink*)uNew(Instantiator__ObservableLink_typeof());
    obj1->ctor_1(obs, target);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal class ObservableProperty :1120
// {
static void ObservableProperty_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::IArray_typeof();
    ::TYPES[35] = ::g::Fuse::Reactive::ISubscription_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[67] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _obj), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _property), 0,
        ::TYPES[35/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Reactive::ObservableProperty, _subscription), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _worker), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Reactive.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1126
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1189
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnClear() :1171
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this)
{
    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject1(NULL, (uObject*)__this);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1201
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1197
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :1177
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[28/*Fuse.IArray*/])) == 1)
        __this->Set(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :1181
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :1193
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1185
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    __this->Set(newValue);
}

// internal Fuse.Reactive.Observable GetObservable() :1137
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->GetObservable();
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1126
void ObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(w, obj, p);
}

// private void PushValue(object val) :1239
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val)
{
    __this->PushValue(val);
}

// public void Reset() :1155
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :1206
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :1148
void ObservableProperty__Subscribe_fn(ObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1213
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::TYPES[67/*Uno.Action<object>*/], (void*)ObservableProperty__PushValue_fn, __this), uPtr(__this->_property)->GetAsObject1())));
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :1126
void ObservableProperty::ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _worker = w;
    _property = p;
}

// internal Fuse.Reactive.Observable GetObservable() [instance] :1137
::g::Fuse::Reactive::Observable* ObservableProperty::GetObservable()
{
    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Reactive::Observable::Create(_worker);
        Subscribe();
    }

    return _observable;
}

// private void PushValue(object val) [instance] :1239
void ObservableProperty::PushValue(uObject* val)
{
    if (val != NULL)
        ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(_subscription), ::TYPES[35/*Fuse.Reactive.ISubscription*/]), val);
    else
        ::g::Fuse::Reactive::ISubscription::ClearExclusive(uInterface(uPtr(_subscription), ::TYPES[35/*Fuse.Reactive.ISubscription*/]));
}

// public void Reset() [instance] :1155
void ObservableProperty::Reset()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :1206
void ObservableProperty::Set(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &res, this))
        uPtr(_property)->SetAsObject1(res, (uObject*)this);
}

// private void Subscribe() [instance] :1148
void ObservableProperty::Subscribe()
{
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    PushValue(uPtr(_property)->GetAsObject1());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :1126
ObservableProperty* ObservableProperty::New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class InnerListener.ObservableSubscription :1019
// {
static void InnerListener__ObservableSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InnerListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener__ObservableSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InnerListener__ObservableSubscription, _source), 0);
}

::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener__ObservableSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.InnerListener.ObservableSubscription", options);
    type->fp_build_ = InnerListener__ObservableSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))InnerListener__ObservableSubscription__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :1024
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    __this->ctor_1(source, obs, listener);
}

// public override sealed void Dispose() :1031
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_source = NULL;
    __this->_listener = NULL;
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :1024
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval)
{
    *__retval = InnerListener__ObservableSubscription::New1(source, obs, listener);
}

// protected override sealed void PushData(object newValue) :1038
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue)
{
    uPtr(__this->_listener)->OnNewData(__this->_source, newValue);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :1024
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    ctor_();
    _listener = listener;
    _source = source;
    Subscribe(obs);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [static] :1024
InnerListener__ObservableSubscription* InnerListener__ObservableSubscription::New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    InnerListener__ObservableSubscription* obj1 = (InnerListener__ObservableSubscription*)uNew(InnerListener__ObservableSubscription_typeof());
    obj1->ctor_1(source, obs, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract class Observable.Operation :776
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _isPerformed), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _observable), 0);
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Reactive.Observable observable) :782
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Reactive.Observable get_Observable() :787
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :789
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :811
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Reactive.Observable observable) [instance] :782
void Observable__Operation::ctor_(::g::Fuse::Reactive::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Reactive.Observable get_Observable() [instance] :787
::g::Fuse::Reactive::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :789
void Observable__Operation::Perform()
{
    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_observable)->_usingObservers = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_observable)->_usingObservers = true;
        OnPerform((uObject*)uPtr(Observable())->_observers);
        uPtr(_observable)->ObserversCleanup();
    }

    _isPerformed = true;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Property :628
// {
static void Property_build(uType* type)
{
    ::TYPES[68] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(::g::Fuse::Reactive::Property, _Object), 0);
}

::g::Fuse::Reactive::Expression_type* Property_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    return type;
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :634
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    __this->ctor_1(obj, accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() :631
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval)
{
    *__retval = __this->Accessor();
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) :631
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value)
{
    __this->Accessor(value);
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :634
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval)
{
    *__retval = Property::New1(obj, accessor);
}

// public generated Fuse.Reactive.ConstantExpression get_Object() :630
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) :630
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value)
{
    __this->Object(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :639
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::TYPES[68/*Uno.UX.PropertyObject*/]);
    return *__retval = (uObject*)Property__Subscription::New1(__this, obj, __this->Accessor(), listener), void();
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [instance] :634
void Property::ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    ctor_();
    Object(obj);
    Accessor(accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() [instance] :631
::g::Uno::UX::PropertyAccessor* Property::Accessor()
{
    return _Accessor;
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) [instance] :631
void Property::Accessor(::g::Uno::UX::PropertyAccessor* value)
{
    _Accessor = value;
}

// public generated Fuse.Reactive.ConstantExpression get_Object() [instance] :630
::g::Fuse::Reactive::ConstantExpression* Property::Object()
{
    return _Object;
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) [instance] :630
void Property::Object(::g::Fuse::Reactive::ConstantExpression* value)
{
    _Object = value;
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [static] :634
Property* Property::New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    Property* obj1 = (Property*)uNew(Property_typeof());
    obj1->ctor_1(obj, accessor);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class ThreadWorker.PropertyClosure :1516
// {
static void ThreadWorker__PropertyClosure_build(uType* type)
{
    ::STRINGS[71] = uString::Const("this._raw_");
    ::STRINGS[72] = uString::Const("this._");
    ::STRINGS[73] = uString::Const(" (ScriptProperty)");
    ::STRINGS[74] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[75] = uString::Const("', ");
    ::STRINGS[25] = uString::Const("{");
    ::STRINGS[76] = uString::Const("get: function() { ");
    ::STRINGS[77] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[78] = uString::Const("if (");
    ::STRINGS[79] = uString::Const(" != obs) {");
    ::STRINGS[80] = uString::Const(" = obs;");
    ::STRINGS[81] = uString::Const(" = obs");
    ::STRINGS[82] = uString::Const(";");
    ::STRINGS[26] = uString::Const("}");
    ::STRINGS[83] = uString::Const("return ");
    ::STRINGS[84] = uString::Const("})");
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[68] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__PropertyClosure, _p), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__PropertyClosure, _worker), 0);
}

uType* ThreadWorker__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ThreadWorker__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.PropertyClosure", options);
    type->fp_build_ = ThreadWorker__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :1521
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, p, worker);
}

// private object GetObservable(object[] args) :1549
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(args);
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :1521
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval)
{
    *__retval = ThreadWorker__PropertyClosure::New1(cl, p, worker);
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [instance] :1521
void ThreadWorker__PropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    _worker = worker;
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[71/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[72/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[73/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[74/*"(function(c...*/], p->Name), ::STRINGS[75/*"', "*/]), ::STRINGS[25/*"{"*/]), ::STRINGS[76/*"get: functi...*/]), ::STRINGS[77/*"var obs = g...*/]), ::STRINGS[78/*"if ("*/]), rawField), ::STRINGS[79/*" != obs) {"*/]), rawField), ::STRINGS[80/*" = obs;"*/]), propField), ::STRINGS[81/*" = obs"*/]), p->Modifier), ::STRINGS[82/*";"*/]), ::STRINGS[26/*"}"*/]), ::STRINGS[83/*"return "*/]), propField), ::STRINGS[26/*"}"*/]), ::STRINGS[84/*"})"*/]), ::STRINGS[84/*"})"*/])), ::TYPES[24/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, cl, uDelegate::New(::TYPES[26/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(object[] args) [instance] :1549
uObject* ThreadWorker__PropertyClosure::GetObservable(uArray* args)
{
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[68/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Reactive::ClassInstance* ci = uPtr(_worker)->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [static] :1521
ThreadWorker__PropertyClosure* ThreadWorker__PropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__PropertyClosure* obj1 = (ThreadWorker__PropertyClosure*)uNew(ThreadWorker__PropertyClosure_typeof());
    obj1->ctor_(cl, p, worker);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :1222
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty__PushCapture, _arg), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Fuse::Reactive::ObservableProperty__PushCapture, _push), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<object> push, object arg) :1227
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) :1227
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run() :1233
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this)
{
    __this->Run();
}

// public PushCapture(Uno.Action<object> push, object arg) [instance] :1227
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run() [instance] :1233
void ObservableProperty__PushCapture::Run()
{
    uPtr(_push)->InvokeVoid(_arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) [static] :1227
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class QuaternaryOperator :704
// {
static void QuaternaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(QuaternaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Fourth), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Third), 0);
}

QuaternaryOperator_type* QuaternaryOperator_typeof()
{
    static uSStrong<QuaternaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(QuaternaryOperator);
    options.TypeSize = sizeof(QuaternaryOperator_type);
    type = (QuaternaryOperator_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator", options);
    type->fp_build_ = QuaternaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :706
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :706
void QuaternaryOperator__set_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// public generated Fuse.Reactive.Expression get_Fourth() :709
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Fourth();
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) :709
void QuaternaryOperator__set_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Fourth(value);
}

// protected bool get_IsFirstOptional() :724
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsFourthOptional() :727
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFourthOptional();
}

// protected bool get_IsSecondOptional() :725
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :726
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// public generated Fuse.Reactive.Expression get_Second() :707
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :707
void QuaternaryOperator__set_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :719
void QuaternaryOperator__Subscribe_fn(QuaternaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)QuaternaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :708
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :708
void QuaternaryOperator__set_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :706
::g::Fuse::Reactive::Expression* QuaternaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :706
void QuaternaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// public generated Fuse.Reactive.Expression get_Fourth() [instance] :709
::g::Fuse::Reactive::Expression* QuaternaryOperator::Fourth()
{
    return _Fourth;
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) [instance] :709
void QuaternaryOperator::Fourth(::g::Fuse::Reactive::Expression* value)
{
    _Fourth = value;
}

// protected bool get_IsFirstOptional() [instance] :724
bool QuaternaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsFourthOptional() [instance] :727
bool QuaternaryOperator::IsFourthOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :725
bool QuaternaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :726
bool QuaternaryOperator::IsThirdOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :707
::g::Fuse::Reactive::Expression* QuaternaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :707
void QuaternaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :708
::g::Fuse::Reactive::Expression* QuaternaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :708
void QuaternaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :980
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveAt, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) :984
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) :984
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :989
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) [instance] :984
void Observable__RemoveAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) [static] :984
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Reactive::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :1002
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveRange, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveRange, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) :1007
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Reactive::Observable* obs, int* index, int* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) :1007
void Observable__RemoveRange__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1013
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) [instance] :1007
void Observable__RemoveRange::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) [static] :1007
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Resource :833
// {
static void Resource_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Resource, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Resource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    return type;
}

// public generated string get_Key() :835
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :835
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :841
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public generated string get_Key() [instance] :835
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :835
void Resource::Key(uString* value)
{
    _Key = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/0.47.7/subscription/$.uno
// --------------------------------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :86
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[85] = uString::Const("{Resource ");
    ::STRINGS[37] = uString::Const("} not found in data context");
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[69] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _diag), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _key), 0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _listener), 0,
        ::g::Fuse::Binding_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _source), 0,
        ::g::Uno::Type_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _type), 0);
}

ResourceSubscription_type* ResourceSubscription_typeof()
{
    static uSStrong<ResourceSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ResourceSubscription);
    options.TypeSize = sizeof(ResourceSubscription_type);
    type = (ResourceSubscription_type*)uClassType::New("Fuse.Reactive.ResourceSubscription", options);
    type->fp_build_ = ResourceSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ResourceSubscription__Dispose_fn;
    return type;
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :95
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type)
{
    __this->ctor_(source, origin, key, listener, type);
}

// private bool Accept(object o) :139
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// private void ClearDiagnostic() :115
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :107
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this)
{
    __this->Dispose();
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :95
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval)
{
    *__retval = ResourceSubscription::New1(source, origin, key, listener, type);
}

// private void OnChanged() :124
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this)
{
    __this->OnChanged();
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [instance] :95
void ResourceSubscription::ctor_(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type)
{
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :139
bool ResourceSubscription::Accept(uObject* o)
{
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :115
void ResourceSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[29/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :107
void ResourceSubscription::Dispose()
{
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :124
void ResourceSubscription::OnChanged()
{
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(uPtr(_origin)->Parent())->TryGetResource(_key, uDelegate::New(::TYPES[69/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[85/*"{Resource "*/], _key), ::STRINGS[37/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Binding origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :95
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Binding* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :1265
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[86] = uString::Const(", ");
    ::TYPES[70] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(7,
        ::g::Fuse::Reactive::ClassInstance_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1271
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :1308
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :1283
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :1277
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :1289
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret2;
    uObject* ret3;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret2), ret2);
    ::g::Uno::UX::NameTable* nt = __this->_names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[70/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(nt)->Entries)->Length(); ++i)
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[86/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(i)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(__this->_worker)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nt->Objects()), ::TYPES[71/*Uno.Collections.IList<object>*/]), uCRef<int>(i), &ret3), ret3)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1271
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :1271
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :1283
void RootableScriptModule::EnsureClassInstanceRooted()
{
    if (_classInstance == NULL)
        _classInstance = uPtr(_worker)->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :1271
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj1 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj1->ctor_2(worker, names);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// private sealed class Observable.Set :823
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _origin), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) :828
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) :828
void Observable__Set__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :839
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :834
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) [instance] :828
void Observable__Set::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) [static] :828
Observable__Set* Observable__Set::New1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Snapshot :860
// {
static void Snapshot_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::Snapshot, _Source), 0);
}

::g::Fuse::Reactive::Expression_type* Snapshot_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Snapshot);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Snapshot", options);
    type->fp_build_ = Snapshot_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Source() :862
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Reactive.Expression value) :862
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Source(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :870
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Source() [instance] :862
::g::Fuse::Reactive::Expression* Snapshot::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Reactive.Expression value) [instance] :862
void Snapshot::Source(::g::Fuse::Reactive::Expression* value)
{
    _Source = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class Property.Subscription :645
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _accessor), 0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Property__Subscription, _listener), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _object), 0,
        ::g::Fuse::Reactive::Property_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _prop), 0);
}

Property__Subscription_type* Property__Subscription_typeof()
{
    static uSStrong<Property__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Property__Subscription);
    options.TypeSize = sizeof(Property__Subscription_type);
    type = (Property__Subscription_type*)uClassType::New("Fuse.Reactive.Property.Subscription", options);
    type->fp_build_ = Property__Subscription_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetExclusive = (void(*)(uObject*, uObject*))Property__Subscription__SetExclusive_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))Property__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :652
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    __this->ctor_(prop, obj, accessor, listener);
}

// public void Dispose() :671
void Property__Subscription__Dispose_fn(Property__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :652
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval)
{
    *__retval = Property__Subscription::New1(prop, obj, accessor, listener);
}

// private void PushValue() :684
void Property__Subscription__PushValue_fn(Property__Subscription* __this)
{
    __this->PushValue();
}

// public void SetExclusive(object value) :664
void Property__Subscription__SetExclusive_fn(Property__Subscription* __this, uObject* value)
{
    __this->SetExclusive(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :679
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :652
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    _prop = prop;
    _listener = listener;
    _accessor = accessor;
    _object = obj;
    uPtr(_object)->AddPropertyListener((uObject*)this);
    PushValue();
}

// public void Dispose() [instance] :671
void Property__Subscription::Dispose()
{
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :684
void Property__Subscription::PushValue()
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public void SetExclusive(object value) [instance] :664
void Property__Subscription::SetExclusive(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_accessor)->PropertyType(), value, &res, _object))
        uPtr(_accessor)->SetAsObject(_object, res, (uObject*)this);
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [static] :652
Property__Subscription* Property__Subscription::New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    Property__Subscription* obj1 = (Property__Subscription*)uNew(Property__Subscription_typeof());
    obj1->ctor_(prop, obj, accessor, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Observable.Subscription :573
// {
// static Subscription() :573
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    ::STRINGS[60] = uString::Const("clear");
    ::STRINGS[87] = uString::Const("replaceAllWithOrigin");
    ::STRINGS[88] = uString::Const("Unexpected null object");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno");
    ::STRINGS[89] = uString::Const("SetExclusive");
    ::STRINGS[90] = uString::Const("setValueWithOrigin");
    ::STRINGS[91] = uString::Const("Failed to set Observable value");
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::IArray_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Observable__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[2/*Fuse.Reactive.IObserver*/], offsetof(::g::Fuse::Reactive::Observable__Subscription, _obs), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _om), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::Observable__Subscription::_counter_, uFieldFlagsStatic);
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Reactive.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_ClearExclusive = (void(*)(uObject*))Observable__Subscription__ClearExclusive_fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__SetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__ReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :590
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    __this->ctor_(om, obs);
}

// public void ClearExclusive() :635
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose() :643
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :590
void Observable__Subscription__New1_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New1(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :588
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :579
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :579
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) :623
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues)
{
    __this->ReplaceAllExclusive(newValues);
}

// public void SetExclusive(object newValue) :603
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public bool ShouldSend([int origin]) :581
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [instance] :590
void Observable__Subscription::ctor_(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    Removed(false);
    _origin = (Observable__Subscription::_counter()++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;

    if (uPtr(_om)->Length() == 1)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(obs), ::TYPES[2/*Fuse.Reactive.IObserver*/]), uPtr(_om)->Item(0));
    else
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(obs), ::TYPES[2/*Fuse.Reactive.IObserver*/]), (uObject*)_om);
}

// public void ClearExclusive() [instance] :635
void Observable__Subscription::ClearExclusive()
{
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[60/*"clear"*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[19/*int*/], _origin)));
}

// public void Dispose() [instance] :643
void Observable__Subscription::Dispose()
{
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :588
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :579
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :579
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) [instance] :623
void Observable__Subscription::ReplaceAllExclusive(uObject* newValues)
{
    uArray* arr = uArray::New(::TYPES[3/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::TYPES[28/*Fuse.IArray*/])));

    for (int i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = uPtr(uPtr(_om)->_worker)->Unwrap(::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::TYPES[28/*Fuse.IArray*/]), i));

    ::g::Fuse::Scripting::Array* sa = uPtr(uPtr(uPtr(_om)->_worker)->Context())->NewArray(arr);
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[87/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, sa, uBox<int>(::TYPES[19/*int*/], _origin)));
}

// public void SetExclusive(object newValue) [instance] :603
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[88/*"Unexpected ...*/], this, ::STRINGS[5/*"/Users/paul...*/], 607, ::STRINGS[89/*"SetExclusive"*/]);
        return;
    }

    try
    {
        uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[90/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, (uObject*)uPtr(uPtr(_om)->_worker)->Unwrap(newValue), uBox<int>(::TYPES[19/*int*/], _origin)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Reactive::JavaScript::UserScriptError(::STRINGS[91/*"Failed to s...*/], ex, this, ::STRINGS[5/*"/Users/paul...*/], 619, ::STRINGS[89/*"SetExclusive"*/]);
        }
        else throw __t;
    }
}

// public bool ShouldSend([int origin]) [instance] :581
bool Observable__Subscription::ShouldSend(int origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [static] :590
Observable__Subscription* Observable__Subscription::New1(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_(om, obs);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// protected sealed class UnaryOperator.Subscription :1196
// {
static void UnaryOperator__Subscription_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[72] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _listener), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _operandSub), 0,
        ::g::Fuse::Reactive::UnaryOperator_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _uo), 0);
}

::g::Fuse::Reactive::InnerListener_type* UnaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.UnaryOperator.Subscription", options);
    type->fp_build_ = UnaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))UnaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))UnaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :1202
void UnaryOperator__Subscription__ctor_1_fn(UnaryOperator__Subscription* __this, ::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    __this->ctor_1(uo, listener);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1208
void UnaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::Create(uo, context, listener);
}

// public override sealed void Dispose() :1222
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_operandSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_operandSub), ::TYPES[29/*Uno.IDisposable*/]));

    __this->_operandSub = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :1217
void UnaryOperator__Subscription__Init_fn(UnaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :1202
void UnaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::New1(uo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :1229
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    __this->OnNewOperand(value);
}

// protected void OnNewOperand(object value) :1234
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->OnNewOperand(value);
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [instance] :1202
void UnaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    ctor_();
    _uo = uo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :1217
void UnaryOperator__Subscription::Init(uObject* context)
{
    _operandSub = uPtr(uPtr(_uo)->Operand())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperand(object value) [instance] :1234
void UnaryOperator__Subscription::OnNewOperand(uObject* value)
{
    ClearDiagnostic();

    try
    {
        uPtr(_uo)->OnNewOperand(_listener, value);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[72/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_uo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1208
UnaryOperator__Subscription* UnaryOperator__Subscription::Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener)
{
    UnaryOperator__Subscription* sub = UnaryOperator__Subscription::New1(uo, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [static] :1202
UnaryOperator__Subscription* UnaryOperator__Subscription::New1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    UnaryOperator__Subscription* obj1 = (UnaryOperator__Subscription*)uNew(UnaryOperator__Subscription_typeof());
    obj1->ctor_1(uo, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class BinaryOperator.Subscription :42
// {
static void BinaryOperator__Subscription_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[72] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::BinaryOperator_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _bo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasRight), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _left), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _leftSub), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _right), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _rightSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* BinaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BinaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.BinaryOperator.Subscription", options);
    type->fp_build_ = BinaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))BinaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))BinaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :54
void BinaryOperator__Subscription__ctor_1_fn(BinaryOperator__Subscription* __this, ::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    __this->ctor_1(bo, listener);
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :60
void BinaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::Create(bo, context, listener);
}

// public override sealed void Dispose() :98
void BinaryOperator__Subscription__Dispose_fn(BinaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_leftSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_leftSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_leftSub = NULL;
    }

    if (__this->_rightSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_rightSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_rightSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :69
void BinaryOperator__Subscription__Init_fn(BinaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :54
void BinaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::New1(bo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :75
void BinaryOperator__Subscription__OnNewData_fn(BinaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_bo)->Left())
    {
        __this->_hasLeft = true;
        __this->_left = value;
    }

    if (source == uPtr(__this->_bo)->Right())
    {
        __this->_hasRight = true;
        __this->_right = value;
    }

    if ((__this->_hasLeft || uPtr(__this->_bo)->IsLeftOptional()) && (__this->_hasRight || uPtr(__this->_bo)->IsRightOptional()))
        __this->OnNewOperands(__this->_left, __this->_right);
}

// protected void OnNewOperands(object left, object right) :84
void BinaryOperator__Subscription__OnNewOperands_fn(BinaryOperator__Subscription* __this, uObject* left, uObject* right)
{
    __this->OnNewOperands(left, right);
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [instance] :54
void BinaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    ctor_();
    _bo = bo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :69
void BinaryOperator__Subscription::Init(uObject* context)
{
    _leftSub = uPtr(uPtr(_bo)->Left())->Subscribe(context, (uObject*)this);
    _rightSub = uPtr(uPtr(_bo)->Right())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object left, object right) [instance] :84
void BinaryOperator__Subscription::OnNewOperands(uObject* left, uObject* right)
{
    ClearDiagnostic();

    try
    {
        uPtr(_bo)->OnNewOperands(_listener, left, right);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[72/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_bo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :60
BinaryOperator__Subscription* BinaryOperator__Subscription::Create(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener)
{
    BinaryOperator__Subscription* res = BinaryOperator__Subscription::New1(bo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [static] :54
BinaryOperator__Subscription* BinaryOperator__Subscription::New1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    BinaryOperator__Subscription* obj1 = (BinaryOperator__Subscription*)uNew(BinaryOperator__Subscription_typeof());
    obj1->ctor_1(bo, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class TernaryOperator.Subscription :1079
// {
static void TernaryOperator__Subscription_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[72] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _first), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _firstSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasThird), 0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _second), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _third), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _thirdSub), 0,
        ::g::Fuse::Reactive::TernaryOperator_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _to), 0);
}

::g::Fuse::Reactive::InnerListener_type* TernaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TernaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.TernaryOperator.Subscription", options);
    type->fp_build_ = TernaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))TernaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))TernaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TernaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :1091
void TernaryOperator__Subscription__ctor_1_fn(TernaryOperator__Subscription* __this, ::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    __this->ctor_1(to, listener);
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1097
void TernaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::Create(to, context, listener);
}

// public override sealed void Dispose() :1137
void TernaryOperator__Subscription__Dispose_fn(TernaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :1106
void TernaryOperator__Subscription__Init_fn(TernaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :1091
void TernaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::New1(to, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :1113
void TernaryOperator__Subscription__OnNewData_fn(TernaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_to)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_to)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_to)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (((__this->_hasFirst || uPtr(__this->_to)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_to)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_to)->IsThirdOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third);
}

// protected void OnNewOperands(object first, object second, object third) :1123
void TernaryOperator__Subscription__OnNewOperands_fn(TernaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third)
{
    __this->OnNewOperands(first, second, third);
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [instance] :1091
void TernaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    ctor_();
    _to = to;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :1106
void TernaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_to)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_to)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_to)->Third())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third) [instance] :1123
void TernaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)_to, uPtr(_to)->Compute(first, second, third));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[72/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_to);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1097
TernaryOperator__Subscription* TernaryOperator__Subscription::Create(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener)
{
    TernaryOperator__Subscription* sub = TernaryOperator__Subscription::New1(to, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [static] :1091
TernaryOperator__Subscription* TernaryOperator__Subscription::New1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    TernaryOperator__Subscription* obj1 = (TernaryOperator__Subscription*)uNew(TernaryOperator__Subscription_typeof());
    obj1->ctor_1(to, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class Snapshot.Subscription :875
// {
static void Snapshot__Subscription_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _listener), 0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _snap), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _sub), 0);
}

Snapshot__Subscription_type* Snapshot__Subscription_typeof()
{
    static uSStrong<Snapshot__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot__Subscription);
    options.TypeSize = sizeof(Snapshot__Subscription_type);
    type = (Snapshot__Subscription_type*)uClassType::New("Fuse.Reactive.Snapshot.Subscription", options);
    type->fp_build_ = Snapshot__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Snapshot__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :881
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    __this->ctor_(snap, context, listener);
}

// public void Dispose() :888
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :898
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value)
{
    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :881
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval)
{
    *__retval = Snapshot__Subscription::New1(snap, context, listener);
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :881
void Snapshot__Subscription::ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :888
void Snapshot__Subscription::Dispose()
{
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[29/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :881
Snapshot__Subscription* Snapshot__Subscription::New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    Snapshot__Subscription* obj1 = (Snapshot__Subscription*)uNew(Snapshot__Subscription_typeof());
    obj1->ctor_(snap, context, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// private sealed class QuaternaryOperator.Subscription :731
// {
static void QuaternaryOperator__Subscription_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[72] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _first), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _firstSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourth), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourthSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFourth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasThird), 0,
        ::TYPES[5/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _listener), 0,
        ::g::Fuse::Reactive::QuaternaryOperator_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _qo), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _second), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _third), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _thirdSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* QuaternaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(QuaternaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator.Subscription", options);
    type->fp_build_ = QuaternaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))QuaternaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))QuaternaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))QuaternaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :744
void QuaternaryOperator__Subscription__ctor_1_fn(QuaternaryOperator__Subscription* __this, ::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    __this->ctor_1(qo, listener);
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :750
void QuaternaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::Create(qo, context, listener);
}

// public override sealed void Dispose() :792
void QuaternaryOperator__Subscription__Dispose_fn(QuaternaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    if (__this->_fourthSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_fourthSub), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_fourthSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :759
void QuaternaryOperator__Subscription__Init_fn(QuaternaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :744
void QuaternaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::New1(qo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :767
void QuaternaryOperator__Subscription__OnNewData_fn(QuaternaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_qo)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_qo)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_qo)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (source == uPtr(__this->_qo)->Fourth())
    {
        __this->_hasFourth = true;
        __this->_fourth = value;
    }

    if ((((__this->_hasFirst || uPtr(__this->_qo)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_qo)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_qo)->IsThirdOptional())) && (__this->_hasFourth || uPtr(__this->_qo)->IsFourthOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third, __this->_fourth);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) :778
void QuaternaryOperator__Subscription__OnNewOperands_fn(QuaternaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    __this->OnNewOperands(first, second, third, fourth);
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [instance] :744
void QuaternaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    ctor_();
    _qo = qo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :759
void QuaternaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_qo)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_qo)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_qo)->Third())->Subscribe(context, (uObject*)this);
    _fourthSub = uPtr(uPtr(_qo)->Fourth())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) [instance] :778
void QuaternaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)_qo, uPtr(_qo)->Compute(first, second, third, fourth));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[72/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_qo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :750
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::Create(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener)
{
    QuaternaryOperator__Subscription* res = QuaternaryOperator__Subscription::New1(qo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [static] :744
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::New1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    QuaternaryOperator__Subscription* obj1 = (QuaternaryOperator__Subscription*)uNew(QuaternaryOperator__Subscription_typeof());
    obj1->ctor_1(qo, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class TernaryOperator :1055
// {
static void TernaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(TernaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _Third), 0);
}

TernaryOperator_type* TernaryOperator_typeof()
{
    static uSStrong<TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TernaryOperator);
    options.TypeSize = sizeof(TernaryOperator_type);
    type = (TernaryOperator_type*)uClassType::New("Fuse.Reactive.TernaryOperator", options);
    type->fp_build_ = TernaryOperator_build;
    type->fp_get_IsThirdOptional = TernaryOperator__get_IsThirdOptional_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :1057
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :1057
void TernaryOperator__set_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// protected bool get_IsFirstOptional() :1073
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsSecondOptional() :1074
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected virtual bool get_IsThirdOptional() :1075
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public generated Fuse.Reactive.Expression get_Second() :1058
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :1058
void TernaryOperator__set_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1068
void TernaryOperator__Subscribe_fn(TernaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)TernaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :1059
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :1059
void TernaryOperator__set_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :1057
::g::Fuse::Reactive::Expression* TernaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :1057
void TernaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// protected bool get_IsFirstOptional() [instance] :1073
bool TernaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :1074
bool TernaryOperator::IsSecondOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :1058
::g::Fuse::Reactive::Expression* TernaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :1058
void TernaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :1059
::g::Fuse::Reactive::Expression* TernaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :1059
void TernaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class This :279
// {
static void This_build(uType* type)
{
    ::STRINGS[92] = uString::Const("Name table missing 'this' pointer");
    ::STRINGS[93] = uString::Const("this");
    ::TYPES[27] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
}

::g::Fuse::Reactive::ConstantExpression_type* This_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(This);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.This", options);
    type->fp_build_ = This_build;
    type->fp_ctor_ = (void*)This__New1_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))This__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))This__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public generated This() :279
void This__ctor_2_fn(This* __this)
{
    __this->ctor_2();
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :281
void This__GetValue_fn(This* __this, uObject* context, uObject** __retval)
{
    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[27/*Fuse.Reactive.IContext*/])))->This();

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[92/*"Name table ...*/]));
}

// public generated This New() :279
void This__New1_fn(This** __retval)
{
    *__retval = This::New1();
}

// public override sealed string ToString() :291
void This__ToString_fn(This* __this, uString** __retval)
{
    return *__retval = ::STRINGS[93/*"this"*/], void();
}

// public generated This() [instance] :279
void This::ctor_2()
{
    ctor_1();
}

// public generated This New() [static] :279
This* This::New1()
{
    This* obj1 = (This*)uNew(This_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal partial sealed class ThreadWorker :1324
// {
// static ThreadWorker() :1436
static void ThreadWorker__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(uObject_typeof(), uArray::New(::TYPES[73/*Fuse.Scripting.ScriptMember[]*/], 0));
}

static void ThreadWorker_build(uType* type)
{
    ::STRINGS[94] = uString::Const("Skipped Exception");
    ::STRINGS[5] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno");
    ::STRINGS[95] = uString::Const("CheckAndThrow");
    ::STRINGS[96] = uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly.");
    ::STRINGS[97] = uString::Const("CreateMirror");
    ::STRINGS[98] = uString::Const("Cannot use object of type '");
    ::STRINGS[99] = uString::Const("' as 'this' in JavaScript module; must be 'IProperties' or 'App'");
    ::STRINGS[100] = uString::Const("external_object");
    ::STRINGS[101] = uString::Const(" (ScriptClass)");
    ::STRINGS[102] = uString::Const("(function(external_object) { this.external_object = external_object; })");
    ::STRINGS[103] = uString::Const("(set-superclass)");
    ::STRINGS[104] = uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })");
    ::STRINGS[30] = uString::Const(".");
    ::STRINGS[54] = uString::Const(" (ScriptMethod)");
    ::STRINGS[105] = uString::Const("(function(cl, Observable) { cl.prototype.");
    ::STRINGS[106] = uString::Const(" = ");
    ::STRINGS[107] = uString::Const("; })");
    ::STRINGS[108] = uString::Const("ThreadWorked failed");
    ::STRINGS[109] = uString::Const("Run");
    ::STRINGS[110] = uString::Const("Could not create script context");
    ::TYPES[30] = ::g::Uno::Type_typeof();
    ::TYPES[73] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[74] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Observable__Operation_typeof(), NULL);
    ::TYPES[75] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL);
    ::TYPES[76] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[77] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[78] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[79] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[80] = ::g::Fuse::IProperties_typeof();
    ::TYPES[81] = ::g::Fuse::Reactive::ClassInstance_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[82] = ::g::Fuse::Scripting::ScriptMethodInline_typeof();
    ::TYPES[83] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[84] = ::g::Fuse::Scripting::ScriptProperty_typeof();
    ::TYPES[33] = ::g::Uno::Exception_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[23] = ::g::Uno::String_typeof();
    ::TYPES[85] = ::g::Fuse::IRaw_typeof();
    ::TYPES[86] = ::g::Uno::Float2_typeof();
    ::TYPES[87] = ::g::Uno::Float3_typeof();
    ::TYPES[88] = ::g::Uno::Float4_typeof();
    ::TYPES[89] = ::g::Uno::Int2_typeof();
    ::TYPES[90] = ::g::Uno::Int3_typeof();
    ::TYPES[91] = ::g::Uno::Int4_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[92] = ::g::Uno::UInt_typeof();
    ::TYPES[93] = ::g::Fuse::Scripting::IScriptObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _classInstanceProperty), 0,
        ::TYPES[77/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _idle), 0,
        ::TYPES[74/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _messages), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _messagesMutex), 0,
        ::TYPES[76/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _ready), 0,
        ::TYPES[19/*int*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _reflectionDepth), 0,
        ::TYPES[75/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _registeredClasses), 0,
        ::TYPES[24/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _setSuperclass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _thread), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface2.fp_Wrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerWrap_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    type->interface2.fp_Unwrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__Unwrap_fn;
    return type;
}

// public ThreadWorker() :1675
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :1814
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :1662
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :1653
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// private object CreateMirror(object obj) :1386
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// public void Dispose() :1697
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) :1341
void ThreadWorker__Enqueue_fn(ThreadWorker* __this, ::g::Fuse::Reactive::Observable__Operation* op)
{
    __this->Enqueue(op);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :1623
void ThreadWorker__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = ThreadWorker::FindRootTable(names);
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :1650
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :1651
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = uPtr(__this->FuseJS())->Observable, void();
}

// private object Fuse.Scripting.IThreadWorker.Wrap(object obj) :1888
void ThreadWorker__FuseScriptingIThreadWorkerWrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    return *__retval = ThreadWorker::Wrap(obj), void();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :1665
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :1463
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :1601
void ThreadWorker__GetClassInstance_fn(ThreadWorker* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :1593
void ThreadWorker__GetClassInstance1_fn(ThreadWorker* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public void Invoke(Uno.Action action) :1828
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public ThreadWorker New() :1675
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) :1692
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int* newState)
{
    __this->OnTerminating(*newState);
}

// public void ProcessUIMessages() :1348
void ThreadWorker__ProcessUIMessages_fn(ThreadWorker* __this)
{
    __this->ProcessUIMessages();
}

// public object Reflect(object obj) :1362
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :1474
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :1708
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :1724
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() :1329
void ThreadWorker__TakeMessages_fn(ThreadWorker* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TakeMessages();
}

// private Fuse.Scripting.Array ToArray(float2 v) :1912
void ThreadWorker__ToArray_fn(ThreadWorker* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray(*v);
}

// private Fuse.Scripting.Array ToArray(float3 v) :1917
void ThreadWorker__ToArray1_fn(ThreadWorker* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray1(*v);
}

// private Fuse.Scripting.Array ToArray(float4 v) :1922
void ThreadWorker__ToArray2_fn(ThreadWorker* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray2(*v);
}

// private Fuse.Scripting.Array ToArray(int2 v) :1927
void ThreadWorker__ToArray3_fn(ThreadWorker* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray3(*v);
}

// private Fuse.Scripting.Array ToArray(int3 v) :1932
void ThreadWorker__ToArray4_fn(ThreadWorker* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray4(*v);
}

// private Fuse.Scripting.Array ToArray(int4 v) :1937
void ThreadWorker__ToArray5_fn(ThreadWorker* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray5(*v);
}

// public object Unwrap(object dc) :1895
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :1869
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :1442
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :1675
void ThreadWorker::ctor_()
{
    _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[74/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
    _messagesMutex = ::g::Uno::Object::New();
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[75/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/]));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    _ready = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _idle = ::g::Uno::Threading::ManualResetEvent::New2(true);
    _terminate = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[76/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[77/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    _thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[78/*Uno.Threading.ThreadStart*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
    uPtr(_ready)->WaitOne();
    uPtr(_ready)->Dispose();
}

// public void CheckAndThrow() [instance] :1814
void ThreadWorker::CheckAndThrow()
{
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[94/*"Skipped Exc...*/], next, this, ::STRINGS[5/*"/Users/paul...*/], 1820, ::STRINGS[95/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :1662
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context();
}

// private object CreateMirror(object obj) [instance] :1386
uObject* ThreadWorker::CreateMirror(uObject* obj)
{
    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[96/*"JavaScript ...*/], this, ::STRINGS[5/*"/Users/paul...*/], 1390, ::STRINGS[97/*"CreateMirror"*/]);
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[25/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Reactive::ArrayMirror::New1(this, a);

    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[24/*Fuse.Scripting.Function*/]);

    if (f != NULL)
        return ::g::Fuse::Reactive::FunctionMirror::New1(f);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[15/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(uPtr(Context())->Observable()))
            return ::g::Fuse::Reactive::Observable::New1(this, o, false);
        else
            return ::g::Fuse::Reactive::ObjectMirror::New1(this, o);
    }

    return NULL;
}

// public void Dispose() [instance] :1697
void ThreadWorker::Dispose()
{
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)ThreadWorker__OnTerminating_fn, this));
    uPtr(_terminate)->Set();
    uPtr(_thread)->Join();
    uPtr(_terminate)->Dispose();
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) [instance] :1341
void ThreadWorker::Enqueue(::g::Fuse::Reactive::Observable__Operation* op)
{
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_messages), op);
    }
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :1665
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    return ThreadWorker::_fuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :1463
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :1601
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uObject* n = uAs<uObject*>(obj, ::TYPES[80/*Fuse.IProperties*/]);

    if (n != NULL)
    {
        ::g::Fuse::Reactive::ClassInstance* ni = uAs< ::g::Fuse::Reactive::ClassInstance*>(uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::TYPES[80/*Fuse.IProperties*/])))->Get(_classInstanceProperty), ::TYPES[81/*Fuse.Reactive.ClassInstance*/]);

        if (ni == NULL)
        {
            ni = ::g::Fuse::Reactive::ClassInstance::New1(this, obj, rootTable);
            uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::TYPES[80/*Fuse.IProperties*/])))->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[98/*"Cannot use ...*/], ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), ::STRINGS[99/*"' as 'this'...*/])));
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :1593
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    ::g::Uno::UX::NameTable* rootTable = ThreadWorker::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// public void Invoke(Uno.Action action) [instance] :1828
void ThreadWorker::Invoke(uDelegate* action)
{
    uPtr(_idle)->Reset();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) [instance] :1692
void ThreadWorker::OnTerminating(int newState)
{
    Dispose();
}

// public void ProcessUIMessages() [instance] :1348
void ThreadWorker::ProcessUIMessages()
{
    ::g::Fuse::Reactive::Observable__Operation* ret4;
    ::g::Uno::Collections::List* msgs = TakeMessages();

    if (msgs == NULL)
        return;

    for (int i = 0; i < uPtr(msgs)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(msgs), uCRef<int>(i), &ret4), ret4))->Perform();
}

// public object Reflect(object obj) [instance] :1362
uObject* ThreadWorker::Reflect(uObject* obj)
{
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[60/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[15/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(::STRINGS[100/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[100/*"external_ob...*/]), ::TYPES[60/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    uObject* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :1474
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[101/*" (ScriptCla...*/]), ::STRINGS[102/*"(function(e...*/]), ::TYPES[24/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = GetClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::STRINGS[103/*"(set-superc...*/], ::STRINGS[104/*"(function(c...*/]), ::TYPES[24/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[82/*Fuse.Scripting.ScriptMethodInline*/]);

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[30/*"."*/]), uPtr(inlineMethod)->Name), ::STRINGS[54/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[105/*"(function(c...*/], uPtr(inlineMethod)->Name), ::STRINGS[106/*" = "*/]), uPtr(inlineMethod)->Code), ::STRINGS[107/*"; })"*/])), ::TYPES[24/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)uPtr(Context())->Observable()));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[83/*Fuse.Scripting.ScriptMethod*/]);

        if (method != NULL)
        {
            ThreadWorker__MethodClosure::New1(cl, method, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[84/*Fuse.Scripting.ScriptProperty*/]);

        if (property != NULL)
        {
            ThreadWorker__PropertyClosure::New1(cl, property, this);
            continue;
        }
    }

    return cl;
}

// private void Run() [instance] :1708
void ThreadWorker::Run()
{
    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[108/*"ThreadWorke...*/], e, this, ::STRINGS[5/*"/Users/paul...*/], 1716, ::STRINGS[109/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }

    if (ThreadWorker::_context() != NULL)
        uPtr(ThreadWorker::_context())->Dispose();
}

// private void RunInner() [instance] :1724
void ThreadWorker::RunInner()
{
    bool ret5;

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_ready)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context() == NULL)
        {
            ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context() == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[110/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS() = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context());
        }
    }

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)ThreadWorker__ProcessUIMessages_fn, this), 0);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (true)
    {
        if (uPtr(_terminate)->WaitOne1(0))
            break;

        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current1() != NULL)
            {
                ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)ThreadWorker__OnTerminating_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uDelegate* action;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret5), ret5))
        {
            try
            {
                didAnything = true;
                uPtr(action)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
            }
        }
        else
            uPtr(_idle)->Set();

        try
        {
            uPtr(ThreadWorker::_fuseJS())->UpdateModules(ThreadWorker::_context());
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;
            ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() [instance] :1329
::g::Uno::Collections::List* ThreadWorker::TakeMessages()
{
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(_messages)->Count() == 0)
            return NULL;

        ::g::Uno::Collections::List* msgs = _messages;
        _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[74/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
        return msgs;
    }
}

// private Fuse.Scripting.Array ToArray(float2 v) [instance] :1912
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(float3 v) [instance] :1917
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y), uBox(::TYPES[21/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(float4 v) [instance] :1922
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 4, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y), uBox(::TYPES[21/*double*/], (double)v.Z), uBox(::TYPES[21/*double*/], (double)v.W)));
}

// private Fuse.Scripting.Array ToArray(int2 v) [instance] :1927
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(int3 v) [instance] :1932
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y), uBox(::TYPES[21/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(int4 v) [instance] :1937
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 4, uBox(::TYPES[21/*double*/], (double)v.X), uBox(::TYPES[21/*double*/], (double)v.Y), uBox(::TYPES[21/*double*/], (double)v.Z), uBox(::TYPES[21/*double*/], (double)v.W)));
}

// public object Unwrap(object dc) [instance] :1895
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[23/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[85/*Fuse.IRaw*/]))
        return ::g::Fuse::IRaw::Raw(uInterface(uPtr((uObject*)dc), ::TYPES[85/*Fuse.IRaw*/]));
    else if (uIs(dc, ::TYPES[24/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[86/*float2*/]))
        return ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[86/*float2*/], dc));
    else if (uIs(dc, ::TYPES[87/*float3*/]))
        return ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[87/*float3*/], dc));
    else if (uIs(dc, ::TYPES[88/*float4*/]))
        return ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[88/*float4*/], dc));
    else if (uIs(dc, ::TYPES[89/*int2*/]))
        return ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[89/*int2*/], dc));
    else if (uIs(dc, ::TYPES[90/*int3*/]))
        return ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[90/*int3*/], dc));
    else if (uIs(dc, ::TYPES[91/*int4*/]))
        return ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[91/*int4*/], dc));
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :1442
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uObject* so = uAs<uObject*>(obj, ::TYPES[93/*Fuse.Scripting.IScriptObject*/]);

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[93/*Fuse.Scripting.IScriptObject*/])) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[93/*Fuse.Scripting.IScriptObject*/]));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::TYPES[93/*Fuse.Scripting.IScriptObject*/]), res, Context());

    return res;
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :1653
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::JavaScriptCore::Context::New1(worker);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :1623
::g::Uno::UX::NameTable* ThreadWorker::FindRootTable(::g::Uno::UX::NameTable* names)
{
    ThreadWorker_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// public ThreadWorker New() [static] :1675
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object Wrap(object obj) [static] :1869
uObject* ThreadWorker::Wrap(uObject* obj)
{
    ThreadWorker_typeof()->Init();

    if (uIs(obj, ::TYPES[60/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[60/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[15/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[15/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->ContainsKey(::STRINGS[100/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[100/*"external_ob...*/]), ::TYPES[60/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[20/*float*/]))
        return uBox(::TYPES[21/*double*/], (double)uUnbox<float>(::TYPES[20/*float*/], obj));

    if (uIs(obj, ::TYPES[19/*int*/]))
        return uBox(::TYPES[21/*double*/], (double)uUnbox<int>(::TYPES[19/*int*/], obj));

    if (uIs(obj, ::TYPES[92/*uint*/]))
        return uBox(::TYPES[21/*double*/], (double)uUnbox<uint32_t>(::TYPES[92/*uint*/], obj));

    return obj;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class UnaryOperator :1173
// {
static void UnaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" does not implement the required methods");
    ::TYPES[5] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator, _Operand), 0);
}

::g::Fuse::Reactive::Expression_type* UnaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    return type;
}

// protected object Compute(object operand) :1186
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    *__retval = __this->Compute(operand);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) :1191
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->OnNewOperand(listener, operand);
}

// public generated Fuse.Reactive.Expression get_Operand() :1175
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Operand();
}

// private generated void set_Operand(Fuse.Reactive.Expression value) :1175
void UnaryOperator__set_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Operand(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1181
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)UnaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected object Compute(object operand) [instance] :1186
uObject* UnaryOperator::Compute(uObject* operand)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), ::STRINGS[0/*" does not i...*/])));
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :1191
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[5/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(operand));
}

// public generated Fuse.Reactive.Expression get_Operand() [instance] :1175
::g::Fuse::Reactive::Expression* UnaryOperator::Operand()
{
    return _Operand;
}

// private generated void set_Operand(Fuse.Reactive.Expression value) [instance] :1175
void UnaryOperator::Operand(::g::Fuse::Reactive::Expression* value)
{
    _Operand = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class ValueForwarder :195
// {
static void ValueForwarder_build(uType* type)
{
    ::TYPES[94] = ValueForwarder__IValueListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::TYPES[94/*Fuse.Reactive.ValueForwarder.IValueListener*/], offsetof(::g::Fuse::Reactive::ValueForwarder, _listener), 0);
}

::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueForwarder);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueForwarder", options);
    type->fp_build_ = ValueForwarder_build;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))ValueForwarder__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__Dispose_fn;
    return type;
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :200
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener)
{
    __this->ctor_1(obs, listener);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :200
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval)
{
    *__retval = ValueForwarder::New1(obs, listener);
}

// protected override sealed void PushData(object newValue) :206
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue)
{
    ValueForwarder__IValueListener::NewValue(uInterface(uPtr(__this->_listener), ::TYPES[94/*Fuse.Reactive.ValueForwarder.IValueListener*/]), newValue);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :200
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    ctor_();
    _listener = listener;
    Subscribe(obs);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [static] :200
ValueForwarder* ValueForwarder::New1(uObject* obs, uObject* listener)
{
    ValueForwarder* obj1 = (ValueForwarder*)uNew(ValueForwarder_typeof());
    obj1->ctor_1(obs, listener);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract class ValueMirror :1953
// {
static void ValueMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ValueMirror_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ValueMirror, _raw), 0);
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Reactive.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))ValueMirror__get_Raw_fn;
    return type;
}

// protected ValueMirror(object raw) :1960
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_(raw);
}

// public object get_Raw() :1958
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public static void Unsubscribe(object obj) :1965
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :1960
void ValueMirror::ctor_(uObject* raw)
{
    _raw = raw;
}

// public object get_Raw() [instance] :1958
uObject* ValueMirror::Raw()
{
    return _raw;
}

// public static void Unsubscribe(object obj) [static] :1965
void ValueMirror::Unsubscribe1(uObject* obj)
{
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract class ValueObserver :125
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::IArray_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[29/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[31/*Fuse.Reactive.IObservable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obs), 0,
        ::TYPES[29/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obsSub), 0);
}

ValueObserver_type* ValueObserver_typeof()
{
    static uSStrong<ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueObserver);
    options.TypeSize = sizeof(ValueObserver_type);
    type = (ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueObserver", options);
    type->fp_build_ = ValueObserver_build;
    type->fp_Dispose = ValueObserver__Dispose_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ValueObserver__Dispose_fn;
    return type;
}

// protected generated ValueObserver() :125
void ValueObserver__ctor__fn(ValueObserver* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :145
void ValueObserver__Dispose_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :162
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnClear() :152
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this)
{
    __this->PushData(NULL);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :172
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :189
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :177
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[28/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :167
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :183
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int* index)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[28/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :157
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue)
{
    __this->PushData(newValue);
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) :132
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs)
{
    __this->Subscribe(obs);
}

// protected void Unsubscribe() :138
void ValueObserver__Unsubscribe_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected generated ValueObserver() [instance] :125
void ValueObserver::ctor_()
{
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :132
void ValueObserver::Subscribe(uObject* obs)
{
    _obs = obs;
    _obsSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[31/*Fuse.Reactive.IObservable*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :138
void ValueObserver::Unsubscribe()
{
    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[29/*Uno.IDisposable*/]));

    _obsSub = NULL;
    _obs = NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Vector3 :1289
// {
static void Vector3_build(uType* type)
{
    ::STRINGS[8] = uString::Const("(");
    ::STRINGS[86] = uString::Const(", ");
    ::STRINGS[11] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Vector3_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vector3);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Vector3", options);
    type->fp_build_ = Vector3_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Vector3__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Vector3__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object first, object second, object third) :1294
void Vector3__Compute_fn(Vector3* __this, uObject* first, uObject* second, uObject* third, uObject** __retval)
{
    return *__retval = uBox(::TYPES[87/*float3*/], ::g::Uno::Float3__New2(::g::Fuse::Marshal::ToFloat(first), ::g::Fuse::Marshal::ToFloat(second), ::g::Fuse::Marshal::ToFloat(third))), void();
}

// public override sealed string ToString() :1299
void Vector3__ToString_fn(Vector3* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*"("*/], __this->First()), ::STRINGS[86/*", "*/]), __this->Second()), ::STRINGS[86/*", "*/]), __this->Third()), ::STRINGS[11/*")"*/]), void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class Vector4 :1305
// {
static void Vector4_build(uType* type)
{
    ::STRINGS[8] = uString::Const("(");
    ::STRINGS[86] = uString::Const(", ");
    ::STRINGS[11] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator_type, interface0));
    type->SetFields(4);
}

::g::Fuse::Reactive::QuaternaryOperator_type* Vector4_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::QuaternaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::QuaternaryOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vector4);
    options.TypeSize = sizeof(::g::Fuse::Reactive::QuaternaryOperator_type);
    type = (::g::Fuse::Reactive::QuaternaryOperator_type*)uClassType::New("Fuse.Reactive.Vector4", options);
    type->fp_build_ = Vector4_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::QuaternaryOperator*, uObject*, uObject*, uObject*, uObject*, uObject**))Vector4__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Vector4__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::QuaternaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object first, object second, object third, object fourth) :1310
void Vector4__Compute_fn(Vector4* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** __retval)
{
    return *__retval = uBox(::TYPES[88/*float4*/], ::g::Uno::Float4__New2(::g::Fuse::Marshal::ToFloat(first), ::g::Fuse::Marshal::ToFloat(second), ::g::Fuse::Marshal::ToFloat(third), ::g::Fuse::Marshal::ToFloat(fourth))), void();
}

// public override sealed string ToString() :1315
void Vector4__ToString_fn(Vector4* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*"("*/], __this->First()), ::STRINGS[86/*", "*/]), __this->Second()), ::STRINGS[86/*", "*/]), __this->Third()), ::STRINGS[86/*", "*/]), __this->Fourth()), ::STRINGS[11/*")"*/]), void();
}
// }

}}} // ::g::Fuse::Reactive
