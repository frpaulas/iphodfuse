// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Uno.Data.Json/0.47.4/source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonWriter;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public static class JsonWriter :316
// {
uClassType* JsonWriter_typeof();
void JsonWriter__QuoteString_fn(uString* str, uString** __retval);

struct JsonWriter : uObject
{
    static uString* QuoteString(uString* str);
};
// }

}}}} // ::g::Uno::Data::Json
