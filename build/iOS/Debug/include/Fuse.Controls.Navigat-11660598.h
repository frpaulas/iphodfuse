// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__DeferSwitch;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Navigator.DeferSwitch :1578
// {
uType* Navigator__DeferSwitch_typeof();
void Navigator__DeferSwitch__ctor__fn(Navigator__DeferSwitch* __this);
void Navigator__DeferSwitch__New1_fn(Navigator__DeferSwitch** __retval);

struct Navigator__DeferSwitch : uObject
{
    int GotoMode;
    int Operation;
    uStrong< ::g::Fuse::Visual*> Page;
    uStrong<uString*> Parameter;
    uStrong<uString*> Path;

    void ctor_();
    static Navigator__DeferSwitch* New1();
};
// }

}}} // ::g::Fuse::Controls
