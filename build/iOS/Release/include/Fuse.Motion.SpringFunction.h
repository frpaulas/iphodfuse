// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Motion{struct SpringFunction;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class SpringFunction :427
// {
::g::Fuse::Reactive::Expression_type* SpringFunction_typeof();
void SpringFunction__Subscribe_fn(SpringFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression** __retval);
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value);

struct SpringFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Value;

    ::g::Fuse::Reactive::Expression* Value();
    void Value(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Motion
