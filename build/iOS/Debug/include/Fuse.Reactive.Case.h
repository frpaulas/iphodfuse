// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Case;}}}
namespace g{namespace Fuse{namespace Reactive{struct Match;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Case :1916
// {
uType* Case_typeof();
void Case__ctor__fn(Case* __this);
void Case__get_Factories_fn(Case* __this, uObject** __retval);
void Case__Invalidate_fn(Case* __this);
void Case__get_IsDefault_fn(Case* __this, bool* __retval);
void Case__set_IsDefault_fn(Case* __this, bool* value);
void Case__get_IsRooted_fn(Case* __this, bool* __retval);
void Case__New1_fn(Case** __retval);
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f);
void Case__Root_fn(Case* __this, ::g::Fuse::Reactive::Match* match);
void Case__get_String_fn(Case* __this, uString** __retval);
void Case__set_String_fn(Case* __this, uString* value);
void Case__Unroot_fn(Case* __this);
void Case__get_Value_fn(Case* __this, uObject** __retval);
void Case__set_Value_fn(Case* __this, uObject* value);

struct Case : uObject
{
    uStrong< ::g::Uno::Collections::RootableList*> _factories;
    uStrong< ::g::Fuse::Reactive::Match*> _match;
    uStrong<uObject*> _value;
    bool _IsDefault;

    void ctor_();
    uObject* Factories();
    void Invalidate();
    bool IsDefault();
    void IsDefault(bool value);
    bool IsRooted();
    void OnFactoriesChanged(::g::Uno::UX::Template* f);
    void Root(::g::Fuse::Reactive::Match* match);
    uString* String();
    void String(uString* value);
    void Unroot();
    uObject* Value();
    void Value(uObject* value);
    static Case* New1();
};
// }

}}} // ::g::Fuse::Reactive
