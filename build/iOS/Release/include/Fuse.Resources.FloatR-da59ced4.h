// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IResou-d55ce6c3.h>
#include <Fuse.Resources.Numeri-f2317bed.h>
#include <Uno.Float.h>
namespace g{namespace Fuse{namespace Resources{struct FloatResourceConverter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class FloatResourceConverter :3446
// {
::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof();
void FloatResourceConverter__ctor_1_fn(FloatResourceConverter* __this);
void FloatResourceConverter__Convert_fn(FloatResourceConverter* __this, uObject* o, float* __retval);
void FloatResourceConverter__New1_fn(FloatResourceConverter** __retval);

struct FloatResourceConverter : ::g::Fuse::Resources::NumericResourceConverter
{
    void ctor_1();
    static FloatResourceConverter* New1();
};
// }

}}} // ::g::Fuse::Resources
