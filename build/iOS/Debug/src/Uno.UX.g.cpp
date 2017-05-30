// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.SelectorRegistry.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[14];
static uType* TYPES[22];

namespace g{
namespace Uno{
namespace UX{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
static void BundleFileSource_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::IO::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
}

::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->fp_build_ = BundleFileSource_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    return type;
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :37
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, __this->__type);

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :46
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::IO::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// private void OnChanged(Uno.IO.BundleFile bf) :17
void BundleFileSource__OnChanged_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bf)
{
    __this->OnChanged(bf);
}

// public override sealed Uno.IO.Stream OpenRead() :22
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :27
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :32
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::IO::BundleFile* bundleFile)
{
    ctor_(uPtr(bundleFile)->SourcePath());
    BundleFile = bundleFile;
    uPtr(BundleFile)->add_Changed(uDelegate::New(::TYPES[0/*Uno.Action<Uno.IO.BundleFile>*/], (void*)BundleFileSource__OnChanged_fn, this));
}

// private void OnChanged(Uno.IO.BundleFile bf) [instance] :17
void BundleFileSource::OnChanged(::g::Uno::IO::BundleFile* bf)
{
    OnDataChanged();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::IO::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------------

// public delegate T Expression<T>() :635
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract class FileSource :61
// {
static void FileSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File name can't be null");
    ::STRINGS[1] = uString::Const("name");
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/], offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
}

FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_build_ = FileSource_build;
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    return type;
}

// protected FileSource(string name) :74
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :65
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :65
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :67
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) :82
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :89
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :94
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :74
void FileSource::ctor_(uString* name)
{
    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"File name c...*/], ::STRINGS[1/*"name"*/]));

    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :65
void FileSource::add_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :65
void FileSource::remove_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :67
void FileSource::OnDataChanged()
{
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) [static] :82
FileSource* FileSource::op_Implicit(::g::Uno::IO::BundleFile* bundleFile)
{
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract interface IPropertyListener :319
// {
uInterfaceType* IPropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IPropertyListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class NameTable :175
// {
// static NameTable() :175
static void NameTable__cctor__fn(uType* __type)
{
    NameTable::Empty_ = NameTable::New1(NULL, uArray::New(::TYPES[2/*string[]*/], 0));
}

static void NameTable_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Collections.List<object>*/], offsetof(::g::Uno::UX::NameTable, _objects), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL), offsetof(::g::Uno::UX::NameTable, _properties), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::NameTable, _this), 0,
        ::TYPES[2/*string[]*/], offsetof(::g::Uno::UX::NameTable, Entries), 0,
        type, offsetof(::g::Uno::UX::NameTable, ParentTable), 0,
        type, (uintptr_t)&::g::Uno::UX::NameTable::Empty_, uFieldFlagsStatic);
}

uType* NameTable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NameTable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTable", options);
    type->fp_build_ = NameTable_build;
    type->fp_cctor_ = NameTable__cctor__fn;
    return type;
}

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) :213
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries)
{
    __this->ctor_(parentTable, entries);
}

// public object get_Item(string key) :193
void NameTable__get_Item_fn(NameTable* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) :213
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval)
{
    *__retval = NameTable::New1(parentTable, entries);
}

// public Uno.Collections.IList<object> get_Objects() :182
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Objects();
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() :187
void NameTable__get_Properties_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) :188
void NameTable__set_Properties_fn(NameTable* __this, uObject* value)
{
    __this->Properties(value);
}

// public object get_This() :207
void NameTable__get_This_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->This();
}

// public void set_This(object value) :208
void NameTable__set_This_fn(NameTable* __this, uObject* value)
{
    __this->This(value);
}

uSStrong<NameTable*> NameTable::Empty_;

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) [instance] :213
void NameTable::ctor_(NameTable* parentTable, uArray* entries)
{
    _objects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<object>*/]));
    _properties = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.UX.Property>*/]));
    ParentTable = parentTable;
    Entries = entries;
}

// public object get_Item(string key) [instance] :193
uObject* NameTable::Item(uString* key)
{
    uObject* ret4;

    for (int i = 0; i < uPtr(Entries)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(Entries)->Strong<uString*>(i), key))
            return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Objects()), ::TYPES[5/*Uno.Collections.IList<object>*/]), uCRef<int>(i), &ret4), ret4);

    if (ParentTable != NULL)
        return uPtr(ParentTable)->Item(key);

    return NULL;
}

// public Uno.Collections.IList<object> get_Objects() [instance] :182
uObject* NameTable::Objects()
{
    return (uObject*)_objects;
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() [instance] :187
uObject* NameTable::Properties()
{
    uObject* ind1 = _properties;
    return (ind1 != NULL) ? ind1 : (uObject*)uPtr(ParentTable)->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) [instance] :188
void NameTable::Properties(uObject* value)
{
    _properties = value;
}

// public object get_This() [instance] :207
uObject* NameTable::This()
{
    uObject* ind2 = _this;
    return (ind2 != NULL) ? ind2 : (ParentTable != NULL) ? (uObject*)uPtr(ParentTable)->This() : NULL;
}

// public void set_This(object value) [instance] :208
void NameTable::This(uObject* value)
{
    _this = value;
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) [static] :213
NameTable* NameTable::New1(NameTable* parentTable, uArray* entries)
{
    NameTable* obj3 = (NameTable*)uNew(NameTable_typeof());
    obj3->ctor_(parentTable, entries);
    return obj3;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract class Property :248
// {
static void Property_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Uno::UX::Property, _name), 0);
}

Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Property__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Property__GetHashCode_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Property__get_Name_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :255
void Property__ctor_1_fn(Property* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_1(*name);
}

// public void AddListener(Uno.UX.IPropertyListener listener) :260
void Property__AddListener_fn(Property* __this, uObject* listener)
{
    __this->AddListener(listener);
}

// public override sealed bool Equals(object obj) :270
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval)
{
    Property* p = uAs<Property*>(obj, Property_typeof());

    if (p == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(p)->Object() == __this->Object()) && ::g::Uno::UX::Selector__op_Equality(uPtr(p)->Name(), __this->_name), void();
}

// public object GetAsObject() :282
void Property__GetAsObject1_fn(Property* __this, uObject** __retval)
{
    *__retval = __this->GetAsObject1();
}

// public override sealed int GetHashCode() :277
void Property__GetHashCode_fn(Property* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object())) ^ __this->Name().Handle(), void();
}

// public override sealed Uno.UX.Selector get_Name() :253
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = __this->_name, void();
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) :265
void Property__RemoveListener_fn(Property* __this, uObject* listener)
{
    __this->RemoveListener(listener);
}

// public void SetAsObject(object value, Uno.UX.IPropertyListener origin) :283
void Property__SetAsObject1_fn(Property* __this, uObject* value, uObject* origin)
{
    __this->SetAsObject1(value, origin);
}

// protected Property(Uno.UX.Selector name) [instance] :255
void Property::ctor_1(::g::Uno::UX::Selector name)
{
    ctor_();
    _name = name;
}

// public void AddListener(Uno.UX.IPropertyListener listener) [instance] :260
void Property::AddListener(uObject* listener)
{
    uPtr(Object())->AddPropertyListener(listener);
}

// public object GetAsObject() [instance] :282
uObject* Property::GetAsObject1()
{
    return GetAsObject(Object());
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) [instance] :265
void Property::RemoveListener(uObject* listener)
{
    uPtr(Object())->RemovePropertyListener(listener);
}

// public void SetAsObject(object value, Uno.UX.IPropertyListener origin) [instance] :283
void Property::SetAsObject1(uObject* value, uObject* origin)
{
    SetAsObject(Object(), value, origin);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract class Property<T> :286
// {
static void Property1_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetFields(1);
}

Property1_type* Property1_typeof()
{
    static uSStrong<Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Property1);
    options.TypeSize = sizeof(Property1_type);
    type = (Property1_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_build_ = Property1_build;
    type->fp_Get1 = Property1__Get1_fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Property1__GetAsObject_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Property1__get_PropertyType_fn;
    type->fp_Set1 = Property1__Set1_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Property1__SetAsObject_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :288
void Property1__ctor_2_fn(Property1* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(*name);
}

// public T Get() :295
void Property1__Get_fn(Property1* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property1_typeof())->Precalced(0/*T*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((__this->Get1_ex(__this->Object(), &ret1), ret1)), void();
}

// public virtual T Get(Uno.UX.PropertyObject obj) :292
void Property1__Get1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :298
void Property1__GetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property1_typeof())->Precalced(0/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = uBoxPtr(__types[0], (__this->Get1_ex(obj, &ret2), ret2)), void();
}

// public override sealed Uno.Type get_PropertyType() :290
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval)
{
    return *__retval = __this->__type->GetBase(Property1_typeof())->T(0), void();
}

// public void Set(T value, Uno.UX.IPropertyListener origin) :296
void Property1__Set_fn(Property1* __this, void* value, uObject* origin)
{
    __this->Set1_ex(__this->Object(), value, origin);
}

// public virtual void Set(Uno.UX.PropertyObject obj, T value, Uno.UX.IPropertyListener origin) :293
void Property1__Set1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object value, Uno.UX.IPropertyListener origin) :303
void Property1__SetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin)
{
    if ((value == NULL) && ::g::Uno::Type::IsValueType(uPtr(__this->__type->GetBase(Property1_typeof())->T(0))))
        __this->Set1_ex(obj, uT(__this->__type->GetBase(Property1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Property1_typeof())->T(0)->ValueSize)), origin);
    else
        __this->Set1_ex(obj, uUnboxAny(__this->__type->GetBase(Property1_typeof())->T(0), value), origin);
}

// protected Property(Uno.UX.Selector name) [instance] :288
void Property1::ctor_2(::g::Uno::UX::Selector name)
{
    ctor_1(name);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract class PropertyAccessor :239
// {
static void PropertyAccessor_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Property '");
    ::STRINGS[3] = uString::Const("' cannot be read.");
    ::STRINGS[4] = uString::Const("' cannot be written to.");
}

PropertyAccessor_type* PropertyAccessor_typeof()
{
    static uSStrong<PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyAccessor);
    options.TypeSize = sizeof(PropertyAccessor_type);
    type = (PropertyAccessor_type*)uClassType::New("Uno.UX.PropertyAccessor", options);
    type->fp_build_ = PropertyAccessor_build;
    type->fp_GetAsObject = PropertyAccessor__GetAsObject_fn;
    type->fp_SetAsObject = PropertyAccessor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = PropertyAccessor__get_SupportsOriginSetter_fn;
    return type;
}

// protected generated PropertyAccessor() :239
void PropertyAccessor__ctor__fn(PropertyAccessor* __this)
{
    __this->ctor_();
}

// public virtual object GetAsObject(Uno.UX.PropertyObject obj) :245
void PropertyAccessor__GetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    U_THROW(::g::Uno::NotSupportedException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"Property '"*/], ::g::Uno::UX::Selector__op_Implicit1(__this->Name())), ::STRINGS[3/*"' cannot be...*/])));
}

// public virtual void SetAsObject(Uno.UX.PropertyObject obj, object value, Uno.UX.IPropertyListener origin) :244
void PropertyAccessor__SetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin)
{
    U_THROW(::g::Uno::NotSupportedException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"Property '"*/], ::g::Uno::UX::Selector__op_Implicit1(__this->Name())), ::STRINGS[4/*"' cannot be...*/])));
}

// public virtual bool get_SupportsOriginSetter() :243
void PropertyAccessor__get_SupportsOriginSetter_fn(PropertyAccessor* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected generated PropertyAccessor() [instance] :239
void PropertyAccessor::ctor_()
{
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public class PropertyObject :324
// {
static void PropertyObject_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::IPropertyListener_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.List<Uno.UX.IPropertyListener>*/], offsetof(::g::Uno::UX::PropertyObject, _propListeners), 0);
}

uType* PropertyObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PropertyObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.PropertyObject", options);
    type->fp_build_ = PropertyObject_build;
    return type;
}

// public generated PropertyObject() :324
void PropertyObject__ctor__fn(PropertyObject* __this)
{
    __this->ctor_();
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) :329
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->AddPropertyListener(listener);
}

// protected void OnPropertyChanged(Uno.UX.Selector property) :357
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property)
{
    __this->OnPropertyChanged(*property);
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) :344
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin)
{
    __this->OnPropertyChanged1(*property, origin);
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) :338
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->RemovePropertyListener(listener);
}

// public generated PropertyObject() [instance] :324
void PropertyObject::ctor_()
{
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) [instance] :329
void PropertyObject::AddPropertyListener(uObject* listener)
{
    if (_propListeners == NULL)
        _propListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.UX.IPropertyListener>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_propListeners), listener);
}

// protected void OnPropertyChanged(Uno.UX.Selector property) [instance] :357
void PropertyObject::OnPropertyChanged(::g::Uno::UX::Selector property)
{
    OnPropertyChanged1(property, uAs<uObject*>(this, ::TYPES[8/*Uno.UX.IPropertyListener*/]));
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) [instance] :344
void PropertyObject::OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin)
{
    uObject* ret3;
    ::g::Uno::UX::Selector property_ = property;

    if (_propListeners != NULL)

        for (int i = 0; i < uPtr(_propListeners)->Count(); i++)
        {
            uObject* listener = (::g::Uno::Collections::List__get_Item_fn(uPtr(_propListeners), uCRef<int>(i), &ret3), ret3);

            if (listener != origin)
                ::g::Uno::UX::IPropertyListener::OnPropertyChanged(uInterface(uPtr(listener), ::TYPES[8/*Uno.UX.IPropertyListener*/]), this, property_);
        }
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) [instance] :338
void PropertyObject::RemovePropertyListener(uObject* listener)
{
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_propListeners), listener, &ret4);

    if (uPtr(_propListeners)->Count() == 0)
        _propListeners = NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class Resource :481
// {
// static Resource() :481
static void Resource__cctor__fn(uType* __type)
{
    Resource::_globals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));
    Resource::_listeners_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/]));
}

static void Resource_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::Collections::List_typeof();
    ::TYPES[3] = ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/], (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/], (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
}

uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Resource_build;
    type->fp_cctor_ = Resource__cctor__fn;
    return type;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :501
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :551
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() :563
void Resource__GetGlobalsOfType_fn(uType* __type, uObject** __retval)
{
    *__retval = Resource::GetGlobalsOfType(__type);
}

// public generated string get_Key() :483
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :483
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) :511
void Resource__RemoveGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::RemoveGlobalKeyListener(listener);
}

// public static void SetGlobalKey(object obj, string key) :528
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :584
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :484
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :484
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public generated string get_Key() [instance] :483
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :483
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :484
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :484
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :501
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    Resource_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
    }
}

// public static string GetGlobalKey(object obj) [static] :551
uString* Resource::GetGlobalKey(uObject* obj)
{
    Resource_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret6), ret6); enum4.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum4.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

            if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret7), ret7))
                return list.Key(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
        }
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() [static] :563
uObject* Resource::GetGlobalsOfType(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->U(0),
    };
    __type->Base->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret8;
    uObject* ret9;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret8), ret8); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > entry = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
            ::g::Uno::Collections::List* list = entry.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret9), ret9);

                if (uIs(v, __types[1]))
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uUnboxAny(__types[1], v));
            }
        }
    }

    return (uObject*)result;
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) [static] :511
void Resource::RemoveGlobalKeyListener(uDelegate* listener)
{
    Resource_typeof()->Init();
    bool ret10;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Remove_fn(uPtr(Resource::_listeners()), listener, &ret10);
    }
}

// public static void SetGlobalKey(object obj, string key) [static] :528
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    Resource_typeof()->Init();
    bool ret11;
    bool ret12;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* objs;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&objs), &ret11), ret11))
        {
            objs = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<object>*/]);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, objs);
        }

        if (!(::g::Uno::Collections::List__Contains_fn(uPtr(objs), obj, &ret12), ret12))
            ::g::Uno::Collections::List__Add_fn(uPtr(objs), obj);
    }

    uArray* listeners = NULL;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        listeners = (uArray*)uPtr(Resource::_listeners())->ToArray();
    }

    for (int index2 = 0, length3 = uPtr(listeners)->Length(); index2 < length3; ++index2)
    {
        uDelegate* listener = uPtr(listeners)->Strong<uDelegate*>(index2);
        uPtr(listener)->InvokeVoid(key);
    }
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :584
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    Resource_typeof()->Init();
    bool ret13;
    uObject* ret14;
    bool ret15;
    ::g::Uno::Collections::List* list;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret13), ret13))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret14), ret14);

                if (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret15, 1, v), ret15))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public struct Selector :649
// {
static void Selector_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::UX::Selector, _handle), 0);
}

uStructType* Selector_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(Selector);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Selector", options);
    type->fp_build_ = Selector_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Selector__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Selector__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Selector__ToString_fn;
    return type;
}

// public Selector(string value) :657
void Selector__ctor__fn(Selector* __this, uString* value)
{
    __this->ctor_(value);
}

// public override sealed bool Equals(object obj) :672
void Selector__Equals_fn(Selector* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Selector sel = uUnbox<Selector>(__type, obj);
        return *__retval = sel._handle == __this->_handle, void();
    }

    uString* s = uAs<uString*>(obj, ::TYPES[14/*string*/]);

    if (::g::Uno::String::op_Inequality(s, NULL))
        return *__retval = __this->Equals(__type, uBox(__type, Selector__New1(s))), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :667
void Selector__GetHashCode_fn(Selector* __this, uType* __type, int* __retval)
{
    return *__retval = __this->_handle, void();
}

// internal int get_Handle() :654
void Selector__get_Handle_fn(Selector* __this, int* __retval)
{
    *__retval = __this->Handle();
}

// public bool get_IsNull() :664
void Selector__get_IsNull_fn(Selector* __this, bool* __retval)
{
    *__retval = __this->IsNull();
}

// public Selector New(string value) :657
void Selector__New1_fn(uString* value, Selector* __retval)
{
    *__retval = Selector__New1(value);
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) :699
void Selector__op_Equality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Equality(*a, *b);
}

// public static implicit operator Uno.UX.Selector(string s) :689
void Selector__op_Implicit_fn(uString* s, Selector* __retval)
{
    *__retval = Selector__op_Implicit(s);
}

// public static implicit operator string(Uno.UX.Selector s) :694
void Selector__op_Implicit1_fn(Selector* s, uString** __retval)
{
    *__retval = Selector__op_Implicit1(*s);
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) :704
void Selector__op_Inequality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Inequality(*a, *b);
}

// public override sealed string ToString() :709
void Selector__ToString_fn(Selector* __this, uType* __type, uString** __retval)
{
    if (__this->_handle == 0)
        return *__retval = NULL, void();

    return *__retval = ::g::Uno::UX::SelectorRegistry::GetValue(__this->_handle), void();
}

// public Selector(string value) [instance] :657
void Selector::ctor_(uString* value)
{
    _handle = ::g::Uno::UX::SelectorRegistry::GetHandle(value);
}

// internal int get_Handle() [instance] :654
int Selector::Handle()
{
    return _handle;
}

// public bool get_IsNull() [instance] :664
bool Selector::IsNull()
{
    return _handle == 0;
}

// public Selector New(string value) [static] :657
Selector Selector__New1(uString* value)
{
    Selector obj1;
    obj1.ctor_(value);
    return obj1;
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) [static] :699
bool Selector__op_Equality(Selector a, Selector b)
{
    return a._handle == b._handle;
}

// public static implicit operator Uno.UX.Selector(string s) [static] :689
Selector Selector__op_Implicit(uString* s)
{
    return Selector__New1(s);
}

// public static implicit operator string(Uno.UX.Selector s) [static] :694
uString* Selector__op_Implicit1(Selector s)
{
    return s.ToString(Selector_typeof());
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) [static] :704
bool Selector__op_Inequality(Selector a, Selector b)
{
    return a._handle != b._handle;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// internal static class SelectorRegistry :618
// {
// static SelectorRegistry() :618
static void SelectorRegistry__cctor__fn(uType* __type)
{
    SelectorRegistry::_mutex_ = ::g::Uno::Object::New();
    SelectorRegistry::_stringToHandle_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<string, int>*/]));
    SelectorRegistry::_handleToString_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<int, string>*/]));
    SelectorRegistry::_counter_ = 1;
}

static void SelectorRegistry_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_counter_, uFieldFlagsStatic,
        ::TYPES[16/*Uno.Collections.Dictionary<int, string>*/], (uintptr_t)&::g::Uno::UX::SelectorRegistry::_handleToString_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_mutex_, uFieldFlagsStatic,
        ::TYPES[15/*Uno.Collections.Dictionary<string, int>*/], (uintptr_t)&::g::Uno::UX::SelectorRegistry::_stringToHandle_, uFieldFlagsStatic);
}

uClassType* SelectorRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.SelectorRegistry", options);
    type->fp_build_ = SelectorRegistry_build;
    type->fp_cctor_ = SelectorRegistry__cctor__fn;
    return type;
}

// internal static int GetHandle(string value) :625
void SelectorRegistry__GetHandle_fn(uString* value, int* __retval)
{
    *__retval = SelectorRegistry::GetHandle(value);
}

// public static string GetValue(int handle) :640
void SelectorRegistry__GetValue_fn(int* handle, uString** __retval)
{
    *__retval = SelectorRegistry::GetValue(*handle);
}

int SelectorRegistry::_counter_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_handleToString_;
uSStrong<uObject*> SelectorRegistry::_mutex_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_stringToHandle_;

// internal static int GetHandle(string value) [static] :625
int SelectorRegistry::GetHandle(uString* value)
{
    SelectorRegistry_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int handle;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SelectorRegistry::_stringToHandle()), value, &handle, &ret1), ret1))
        {
            handle = SelectorRegistry::_counter()++;
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_stringToHandle()), value, uCRef<int>(handle));
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), value);
        }

        return handle;
    }
}

// public static string GetValue(int handle) [static] :640
uString* SelectorRegistry::GetValue(int handle)
{
    SelectorRegistry_typeof()->Init();
    uString* ret2;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), &ret2), ret2);
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public struct Size :748
// {
static void Size_build(uType* type)
{
    ::STRINGS[5] = uString::Const(" (unspecified unit)");
    ::STRINGS[6] = uString::Const("pt");
    ::STRINGS[7] = uString::Const("px");
    ::STRINGS[8] = uString::Const("%");
    ::STRINGS[9] = uString::Const("(auto)");
    ::STRINGS[10] = uString::Const(" (");
    ::STRINGS[11] = uString::Const(")");
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[17/*float*/], offsetof(::g::Uno::UX::Size, Value), 0,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::Size, Unit), 0);
}

uStructType* Size_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size", options);
    type->fp_build_ = Size_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size__ToString_fn;
    return type;
}

// public Size(float value, Uno.UX.Unit unit) :753
void Size__ctor__fn(Size* __this, float* value, int* unit)
{
    __this->ctor_(*value, *unit);
}

// public static Uno.UX.Size get_Auto() :828
void Size__get_Auto_fn(Size* __retval)
{
    *__retval = Size__Auto();
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) :774
void Size__Combine_fn(int* a, int* b, int* __retval)
{
    *__retval = Size::Combine(*a, *b);
}

// public Uno.UX.Unit DetermineUnit() :782
void Size__DetermineUnit_fn(Size* __this, int* __retval)
{
    *__retval = __this->DetermineUnit();
}

// public override sealed bool Equals(object obj) :860
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Size s = uUnbox<Size>(__type, obj);

        if (s.Unit != __this->Unit)
            return *__retval = false, void();

        if (s.Value != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else if (uIs(obj, ::TYPES[17/*float*/]))
    {
        if ((__this->Unit != 2) && (__this->Unit != 1))
            return *__retval = false, void();

        float f = uUnbox<float>(::TYPES[17/*float*/], obj);

        if (f != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :879
void Size__GetHashCode_fn(Size* __this, uType* __type, int* __retval)
{
    float ind7;
    return *__retval = ::g::Uno::Float::GetHashCode((ind7 = __this->Value, ind7), ::TYPES[17/*float*/]), void();
}

// public bool get_IsAuto() :830
void Size__get_IsAuto_fn(Size* __this, bool* __retval)
{
    *__retval = __this->IsAuto();
}

// public Size New(float value, Uno.UX.Unit unit) :753
void Size__New1_fn(float* value, int* unit, Size* __retval)
{
    *__retval = Size__New1(*value, *unit);
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) :788
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Addition(*a, *b);
}

// public static explicit operator float(Uno.UX.Size s) :769
void Size__op_Explicit_fn(Size* s, float* __retval)
{
    *__retval = Size__op_Explicit(*s);
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) :759
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit(*unspecifiedUnits);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) :764
void Size__op_Implicit1_fn(int* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit1(*unspecifiedUnits);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) :823
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size a, float b) :798
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) :793
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :847
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval)
{
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    int ind6;

    switch (__this->Unit)
    {
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind1 = __this->Value, ind1), ::TYPES[17/*float*/]), ::STRINGS[5/*" (unspecifi...*/]), void();
        case 2:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind2 = __this->Value, ind2), ::TYPES[17/*float*/]), ::STRINGS[6/*"pt"*/]), void();
        case 3:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind3 = __this->Value, ind3), ::TYPES[17/*float*/]), ::STRINGS[7/*"px"*/]), void();
        case 4:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind4 = __this->Value, ind4), ::TYPES[17/*float*/]), ::STRINGS[8/*"%"*/]), void();
        case 0:
            return *__retval = ::STRINGS[9/*"(auto)"*/], void();
        default:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind5 = __this->Value, ind5), ::TYPES[17/*float*/]), ::STRINGS[10/*" ("*/]), ::g::Uno::Int::ToString((ind6 = __this->Unit, ind6), ::TYPES[18/*int*/])), ::STRINGS[11/*")"*/]), void();
    }
}

// public Size(float value, Uno.UX.Unit unit) [instance] :753
void Size::ctor_(float value, int unit)
{
    Value = value;
    Unit = unit;
}

// public Uno.UX.Unit DetermineUnit() [instance] :782
int Size::DetermineUnit()
{
    if (Unit == 1)
        return 2;
    else
        return Unit;
}

// public bool get_IsAuto() [instance] :830
bool Size::IsAuto()
{
    return Unit == 0;
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) [static] :774
int Size::Combine(int a, int b)
{
    if (a == b)
        return a;

    if (a == 1)
        return b;

    if (b == 1)
        return a;

    return 1;
}

// public Size New(float value, Uno.UX.Unit unit) [static] :753
Size Size__New1(float value, int unit)
{
    Size obj8;
    obj8.ctor_(value, unit);
    return obj8;
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) [static] :788
Size Size__op_Addition(Size a, Size b)
{
    return Size__New1(a.Value + b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static explicit operator float(Uno.UX.Size s) [static] :769
float Size__op_Explicit(Size s)
{
    return s.Value;
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) [static] :759
Size Size__op_Implicit(float unspecifiedUnits)
{
    return Size__New1(unspecifiedUnits, 1);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) [static] :764
Size Size__op_Implicit1(int unspecifiedUnits)
{
    return Size__New1((float)unspecifiedUnits, 1);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) [static] :823
bool Size__op_Inequality(Size a, Size b)
{
    return (a.Value != b.Value) || (a.Unit != b.Unit);
}

// public static operator *(Uno.UX.Size a, float b) [static] :798
Size Size__op_Multiply(Size a, float b)
{
    return Size__New1(a.Value * b, a.Unit);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) [static] :793
Size Size__op_Subtraction(Size a, Size b)
{
    return Size__New1(a.Value - b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static Uno.UX.Size get_Auto() [static] :828
Size Size__Auto()
{
    return Size__New1(0.0f, 0);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public struct Size2 :897
// {
static void Size2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[19] = ::g::Uno::UX::Size_typeof();
    type->SetFields(0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(::g::Uno::UX::Size2, X), 0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(::g::Uno::UX::Size2, Y), 0);
}

uStructType* Size2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size2", options);
    type->fp_build_ = Size2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size2__ToString_fn;
    return type;
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) :902
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y)
{
    __this->ctor_(*x, *y);
}

// public static Uno.UX.Size2 get_Auto() :967
void Size2__get_Auto_fn(Size2* __retval)
{
    *__retval = Size2__Auto();
}

// public override sealed bool Equals(object obj) :990
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Size2 s = uUnbox<Size2>(__type, obj);

        if (::g::Uno::UX::Size__op_Inequality(s.X, __this->X))
            return *__retval = false, void();

        if (::g::Uno::UX::Size__op_Inequality(s.Y, __this->Y))
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :1002
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int* __retval)
{
    ::g::Uno::UX::Size ind3;
    ::g::Uno::UX::Size ind4;
    return *__retval = (ind3 = __this->X, (&ind3))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]) ^ (ind4 = __this->Y, (&ind4))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]), void();
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) :902
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval)
{
    *__retval = Size2__New1(*x, *y);
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) :925
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Addition(*a, *b);
}

// public static explicit operator float2(Uno.UX.Size2 v) :918
void Size2__op_Explicit_fn(Size2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Size2__op_Explicit(*v);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) :908
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval)
{
    *__retval = Size2__op_Implicit1(*unspecifiedUnitsVector);
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) :960
void Size2__op_Inequality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size2 a, float b) :935
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) :930
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :985
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval)
{
    ::g::Uno::UX::Size ind1;
    ::g::Uno::UX::Size ind2;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind1 = __this->X, (&ind1))->ToString(::TYPES[19/*Uno.UX.Size*/]), ::STRINGS[12/*", "*/]), (ind2 = __this->Y, (&ind2))->ToString(::TYPES[19/*Uno.UX.Size*/])), void();
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) [instance] :902
void Size2::ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    X = x;
    Y = y;
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) [static] :902
Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    Size2 obj5;
    obj5.ctor_(x, y);
    return obj5;
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :925
Size2 Size2__op_Addition(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Addition(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static explicit operator float2(Uno.UX.Size2 v) [static] :918
::g::Uno::Float2 Size2__op_Explicit(Size2 v)
{
    ::g::Uno::UX::Size x = v.X;
    ::g::Uno::UX::Size y = v.Y;
    return ::g::Uno::Float2__New2(x.Value, y.Value);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) [static] :908
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector)
{
    return Size2__New1(::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.X), ::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.Y));
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :960
bool Size2__op_Inequality(Size2 a, Size2 b)
{
    return ::g::Uno::UX::Size__op_Inequality(a.X, b.X) || ::g::Uno::UX::Size__op_Inequality(a.Y, b.Y);
}

// public static operator *(Uno.UX.Size2 a, float b) [static] :935
Size2 Size2__op_Multiply(Size2 a, float b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Multiply(a.X, b), ::g::Uno::UX::Size__op_Multiply(a.Y, b));
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :930
Size2 Size2__op_Subtraction(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Subtraction(a.X, b.X), ::g::Uno::UX::Size__op_Subtraction(a.Y, b.Y));
}

// public static Uno.UX.Size2 get_Auto() [static] :967
Size2 Size2__Auto()
{
    return Size2__New1(::g::Uno::UX::Size__Auto(), ::g::Uno::UX::Size__Auto());
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// internal static class StreamExtensions :100
// {
static void StreamExtensions_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[20] = ::g::Uno::IDisposable_typeof();
    ::TYPES[21] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    type->fp_build_ = StreamExtensions_build;
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :102
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :120
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :102
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[20/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[13/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :120
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[21/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract class Template :1023
// {
static void Template_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _isDefault), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Template, _key), 0);
}

Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template", options);
    type->fp_build_ = Template_build;
    return type;
}

// protected Template(string key, bool isDefault) :1033
void Template__ctor__fn(Template* __this, uString* key, bool* isDefault)
{
    __this->ctor_(key, *isDefault);
}

// public bool get_IsDefault() :1031
void Template__get_IsDefault_fn(Template* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public string get_Key() :1027
void Template__get_Key_fn(Template* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// protected Template(string key, bool isDefault) [instance] :1033
void Template::ctor_(uString* key, bool isDefault)
{
    _key = key;
    _isDefault = isDefault;
}

// public bool get_IsDefault() [instance] :1031
bool Template::IsDefault()
{
    return _isDefault;
}

// public string get_Key() [instance] :1027
uString* Template::Key()
{
    return _key;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public enum Unit :725
uEnumType* Unit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.UX.Unit", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Auto", 0LL,
        "Unspecified", 1LL,
        "Points", 2LL,
        "Pixels", 3LL,
        "Percent", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public class ValueChangedArgs<T> :227
// {
static void ValueChangedArgs_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->fp_build_ = ValueChangedArgs_build;
    return type;
}

// public ValueChangedArgs(T value) :231
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value)
{
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
}

// public ValueChangedArgs New(T value) :231
void ValueChangedArgs__New2_fn(uType* __type, void* value, ValueChangedArgs** __retval)
{
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated T get_Value() :229
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :229
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    __this->_Value() = value;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno
// ------------------------------------------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :237
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0), NULL));
    return type;
}

}}} // ::g::Uno::UX
