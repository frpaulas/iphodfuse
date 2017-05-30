// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static uSStrong< ::g::Fuse::Font*> BoldFont_;
    static uSStrong< ::g::Fuse::Font*>& BoldFont() { return MainView_typeof()->Init(), BoldFont_; }
    static uSStrong< ::g::Fuse::Font*> BoldItalicFont_;
    static uSStrong< ::g::Fuse::Font*>& BoldItalicFont() { return MainView_typeof()->Init(), BoldItalicFont_; }
    static uSStrong< ::g::Fuse::Font*> ItalicFont_;
    static uSStrong< ::g::Fuse::Font*>& ItalicFont() { return MainView_typeof()->Init(), ItalicFont_; }
    static uSStrong< ::g::Fuse::Font*> RegularFont_;
    static uSStrong< ::g::Fuse::Font*>& RegularFont() { return MainView_typeof()->Init(), RegularFont_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_4();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
