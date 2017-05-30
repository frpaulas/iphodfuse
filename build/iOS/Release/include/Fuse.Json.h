// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Json;}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Fuse{

// public static class Json :1942
// {
uClassType* Json_typeof();
void Json__Stringify_fn(uObject* value, bool* normalized, uString** __retval);
void Json__Stringify1_fn(uObject* value, bool* normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet);
void Json__ToLiteral_fn(bool* b, uString** __retval);
void Json__ToLiteral1_fn(double* s, uString** __retval);
void Json__ToLiteral3_fn(uString* s, ::g::Uno::Text::StringBuilder* sb);

struct Json : uObject
{
    static uString* Stringify(uObject* value, bool normalized);
    static void Stringify1(uObject* value, bool normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet);
    static uString* ToLiteral(bool b);
    static uString* ToLiteral1(double s);
    static void ToLiteral3(uString* s, ::g::Uno::Text::StringBuilder* sb);
};
// }

}} // ::g::Fuse
