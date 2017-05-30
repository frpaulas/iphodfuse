// This file was generated based on '.uno/ux11/Psalm.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Psalm.h>
#include <Uno.Bool.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[1];

namespace g{

// public partial sealed class Psalm :2
// {
// static Psalm() :57
static void Psalm__cctor_4_fn(uType* __type)
{
    Psalm::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    Psalm::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"StartVs"*/]);
    Psalm::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"EndVs"*/]);
    Psalm::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Number"*/]);
    Psalm::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Speaker"*/]);
    Psalm::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Text"*/]);
}

static void Psalm_build(uType* type)
{
    ::STRINGS[0] = uString::Const("StartVs");
    ::STRINGS[1] = uString::Const("EndVs");
    ::STRINGS[2] = uString::Const("Number");
    ::STRINGS[3] = uString::Const("Speaker");
    ::STRINGS[4] = uString::Const("Text");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface14),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextControl_type, interface15));
    type->SetFields(100,
        ::g::Uno::String_typeof(), offsetof(::g::Psalm, _field_EndVs), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Psalm, _field_Number), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Psalm, _field_StartVs), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Psalm::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Psalm::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Psalm::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Psalm::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Psalm::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Psalm::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::TextControl_type* Psalm_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Text_typeof();
    options.FieldCount = 109;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Psalm);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Psalm", options);
    type->fp_build_ = Psalm_build;
    type->fp_cctor_ = Psalm__cctor_4_fn;
    type->interface15.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface15.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface15.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface15.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public string get_EndVs() :23
void Psalm__get_EndVs_fn(Psalm* __this, uString** __retval)
{
    *__retval = __this->EndVs();
}

// public void set_EndVs(string value) :24
void Psalm__set_EndVs_fn(Psalm* __this, uString* value)
{
    __this->EndVs(value);
}

// public string get_Number() :38
void Psalm__get_Number_fn(Psalm* __this, uString** __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(string value) :39
void Psalm__set_Number_fn(Psalm* __this, uString* value)
{
    __this->Number(value);
}

// public void SetEndVs(string value, Uno.UX.IPropertyListener origin) :26
void Psalm__SetEndVs_fn(Psalm* __this, uString* value, uObject* origin)
{
    __this->SetEndVs(value, origin);
}

// public void SetNumber(string value, Uno.UX.IPropertyListener origin) :41
void Psalm__SetNumber_fn(Psalm* __this, uString* value, uObject* origin)
{
    __this->SetNumber(value, origin);
}

// public void SetStartVs(string value, Uno.UX.IPropertyListener origin) :11
void Psalm__SetStartVs_fn(Psalm* __this, uString* value, uObject* origin)
{
    __this->SetStartVs(value, origin);
}

// public string get_StartVs() :8
void Psalm__get_StartVs_fn(Psalm* __this, uString** __retval)
{
    *__retval = __this->StartVs();
}

// public void set_StartVs(string value) :9
void Psalm__set_StartVs_fn(Psalm* __this, uString* value)
{
    __this->StartVs(value);
}

uSStrong<uArray*> Psalm::__g_static_nametable1_;
::g::Uno::UX::Selector Psalm::__selector0_;
::g::Uno::UX::Selector Psalm::__selector1_;
::g::Uno::UX::Selector Psalm::__selector2_;
::g::Uno::UX::Selector Psalm::__selector3_;
::g::Uno::UX::Selector Psalm::__selector4_;

// public string get_EndVs() [instance] :23
uString* Psalm::EndVs()
{
    return _field_EndVs;
}

// public void set_EndVs(string value) [instance] :24
void Psalm::EndVs(uString* value)
{
    SetEndVs(value, NULL);
}

// public string get_Number() [instance] :38
uString* Psalm::Number()
{
    return _field_Number;
}

// public void set_Number(string value) [instance] :39
void Psalm::Number(uString* value)
{
    SetNumber(value, NULL);
}

// public void SetEndVs(string value, Uno.UX.IPropertyListener origin) [instance] :26
void Psalm::SetEndVs(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_EndVs))
    {
        _field_EndVs = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"EndVs"*/]), origin);
    }
}

// public void SetNumber(string value, Uno.UX.IPropertyListener origin) [instance] :41
void Psalm::SetNumber(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Number))
    {
        _field_Number = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Number"*/]), origin);
    }
}

// public void SetStartVs(string value, Uno.UX.IPropertyListener origin) [instance] :11
void Psalm::SetStartVs(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_StartVs))
    {
        _field_StartVs = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"StartVs"*/]), origin);
    }
}

// public string get_StartVs() [instance] :8
uString* Psalm::StartVs()
{
    return _field_StartVs;
}

// public void set_StartVs(string value) [instance] :9
void Psalm::StartVs(uString* value)
{
    SetStartVs(value, NULL);
}
// }

} // ::g
