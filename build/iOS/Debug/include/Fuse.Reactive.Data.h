// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Data;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Data :297
// {
::g::Fuse::Reactive::Expression_type* Data_typeof();
void Data__ctor_1_fn(Data* __this, uString* key);
void Data__get_Key_fn(Data* __this, uString** __retval);
void Data__set_Key_fn(Data* __this, uString* value);
void Data__New1_fn(uString* key, Data** __retval);
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval);
void Data__ToString_fn(Data* __this, uString** __retval);

struct Data : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    void ctor_1(uString* key);
    uString* Key();
    void Key(uString* value);
    static Data* New1(uString* key);
};
// }

}}} // ::g::Fuse::Reactive
