// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Color;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public static class Color :1358
// {
uClassType* Color_typeof();
void Color__FromHex_fn(uString* hex, ::g::Uno::Float4* __retval);
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval);
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval);
void Color__ParseHexByte_fn(uChar* ch1, uChar* ch2, int* __retval);
void Color__ParseHexNibble_fn(uChar* ch, int* __retval);
void Color__ParseHexString_fn(uString* hex, ::g::Uno::Int4* __retval);
void Color__ParseHexValue_fn(uChar* ch, int* __retval);

struct Color : uObject
{
    static ::g::Uno::Float3x3 ToYCbCrMat_;
    static ::g::Uno::Float3x3& ToYCbCrMat() { return Color_typeof()->Init(), ToYCbCrMat_; }
    static ::g::Uno::Float3x3 ToYCbCrMatInv_;
    static ::g::Uno::Float3x3& ToYCbCrMatInv() { return Color_typeof()->Init(), ToYCbCrMatInv_; }

    static ::g::Uno::Float4 FromHex(uString* hex);
    static ::g::Uno::Float4 FromInt4(::g::Uno::Int4 rgba);
    static ::g::Uno::Float4 FromRgba(uint32_t rgba);
    static int ParseHexByte(uChar ch1, uChar ch2);
    static int ParseHexNibble(uChar ch);
    static ::g::Uno::Int4 ParseHexString(uString* hex);
    static int ParseHexValue(uChar ch);
};
// }

}} // ::g::Uno
