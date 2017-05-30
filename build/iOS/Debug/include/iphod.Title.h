// This file was generated based on '.uno/ux11/iphod.Title.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace iphod{struct Title;}}

namespace g{
namespace iphod{

// public partial sealed class Title :4
// {
::g::Fuse::Controls::TextControl_type* Title_typeof();
void Title__ctor_8_fn(Title* __this);
void Title__InitializeUX1_fn(Title* __this);
void Title__New4_fn(Title** __retval);

struct Title : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static Title* New4();
};
// }

}} // ::g::iphod
