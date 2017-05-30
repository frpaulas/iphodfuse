// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwitchedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class NavigatorSwitchedArgs :918
// {
::g::Fuse::VisualEventArgs_type* NavigatorSwitchedArgs_typeof();
void NavigatorSwitchedArgs__ctor_2_fn(NavigatorSwitchedArgs* __this, ::g::Fuse::Visual* v);
void NavigatorSwitchedArgs__New3_fn(::g::Fuse::Visual* v, NavigatorSwitchedArgs** __retval);

struct NavigatorSwitchedArgs : ::g::Fuse::VisualEventArgs
{
    int Mode;
    uStrong<uString*> NewParameter;
    uStrong<uString*> NewPath;
    uStrong< ::g::Fuse::Visual*> NewVisual;
    uStrong<uString*> OldParameter;
    uStrong<uString*> OldPath;
    uStrong< ::g::Fuse::Visual*> OldVisual;
    int Operation;
    uStrong<uString*> OperationStyle;

    void ctor_2(::g::Fuse::Visual* v);
    static NavigatorSwitchedArgs* New3(::g::Fuse::Visual* v);
};
// }

}}} // ::g::Fuse::Controls
