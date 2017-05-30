// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Data.Json.JsonWriter.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
static uString* STRINGS[9];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Uno.Data.Json/0.47.4/source/$.uno
// -----------------------------------------------------------------------------------------------------

// public static class JsonWriter :316
// {
static void JsonWriter_build(uType* type)
{
    ::STRINGS[0] = uString::Const("\"");
    ::STRINGS[1] = uString::Const("\\\"");
    ::STRINGS[2] = uString::Const("\\\\");
    ::STRINGS[3] = uString::Const("\\b");
    ::STRINGS[4] = uString::Const("\\f");
    ::STRINGS[5] = uString::Const("\\n");
    ::STRINGS[6] = uString::Const("\\r");
    ::STRINGS[7] = uString::Const("\\t");
    ::STRINGS[8] = uString::Const("\\u{0:x4}");
    ::TYPES[0] = uObject_typeof()->Array();
}

uClassType* JsonWriter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Data.Json.JsonWriter", options);
    type->fp_build_ = JsonWriter_build;
    return type;
}

// public static string QuoteString(string str) :322
void JsonWriter__QuoteString_fn(uString* str, uString** __retval)
{
    *__retval = JsonWriter::QuoteString(str);
}

// public static string QuoteString(string str) [static] :322
uString* JsonWriter::QuoteString(uString* str)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[0/*"\""*/]);

    for (int i = 0; i < uPtr(str)->Length(); ++i)
    {
        uChar ch = uPtr(str)->Item(i);

        switch (ch)
        {
            case '"':
            {
                uPtr(sb)->Append2(::STRINGS[1/*"\\\""*/]);
                break;
            }
            case '\\':
            {
                uPtr(sb)->Append2(::STRINGS[2/*"\\\\"*/]);
                break;
            }
            case 8:
            {
                uPtr(sb)->Append2(::STRINGS[3/*"\\b"*/]);
                break;
            }
            case 12:
            {
                uPtr(sb)->Append2(::STRINGS[4/*"\\f"*/]);
                break;
            }
            case 10:
            {
                uPtr(sb)->Append2(::STRINGS[5/*"\\n"*/]);
                break;
            }
            case 13:
            {
                uPtr(sb)->Append2(::STRINGS[6/*"\\r"*/]);
                break;
            }
            case 9:
            {
                uPtr(sb)->Append2(::STRINGS[7/*"\\t"*/]);
                break;
            }
            default:
            {
                if ((int)ch <= 31)
                    uPtr(sb)->Append2(::g::Uno::String::Format(::STRINGS[8/*"\\u{0:x4}"*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), (int)ch))));
                else
                    uPtr(sb)->Append(ch);

                break;
            }
        }
    }

    sb->Append2(::STRINGS[0/*"\""*/]);
    return sb->ToString();
}
// }

}}}} // ::g::Uno::Data::Json
