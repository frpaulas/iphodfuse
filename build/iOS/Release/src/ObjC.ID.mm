// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
static uType* TYPES[1];

namespace g{
namespace ObjC{

// public extern struct ID :12
// {
static void ID_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.IntPtr*/], offsetof(::g::ObjC::ID, _dummy), 0);
}

uStructType* ID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::id);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.ID", options);
    type->fp_build_ = ID_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ID__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ID__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval)
{
    return *__retval = uIs(o, __type) && ID::op_Equality(*__this, uUnbox< ::id>(__type, o)), void();
}

// public override sealed int GetHashCode() :22
void ID__GetHashCode_fn(::id* __this, uType* __type, int* __retval)
{
    return *__retval = ::g::Uno::IntPtr::GetHashCode((__bridge void*)*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static ObjC.ID get_Null() :15
void ID__get_Null_fn(::id* __retval)
{
    *__retval = ID::Null();
}

// public static operator ==(ObjC.ID a, ObjC.ID b) :27
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Equality(*a, *b);
}

// public static operator ==(ObjC.ID a, ObjC.ID b) [static] :27
bool ID::op_Equality(::id a, ::id b)
{
    return a == b;
}

// public static ObjC.ID get_Null() [static] :15
::id ID::Null()
{
    return nil;
}
// }

}} // ::g::ObjC
