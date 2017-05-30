// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusGainedArgs :433
// {
::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof();
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Visual* visual);
void FocusGainedArgs__New3_fn(::g::Fuse::Visual* visual, FocusGainedArgs** __retval);

struct FocusGainedArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* visual);
    static FocusGainedArgs* New3(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
