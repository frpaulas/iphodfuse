// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Bool :280
// {
uStructType* Bool_typeof();
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval);
void Bool__GetHashCode_fn(bool* __this, uType* __type, int* __retval);
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval);

struct Bool
{
    static bool Equals(bool __this, uType* __type, uObject* o) { bool __retval; return Bool__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(bool __this, uType* __type) { int __retval; return Bool__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(bool __this, uType* __type) { uString* __retval; return Bool__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
