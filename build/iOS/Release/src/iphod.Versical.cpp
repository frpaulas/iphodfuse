// This file was generated based on '.uno/ux11/iphod.Versical.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_accessor_-39b8af92.h>
#include <_root.iphod_accessor_-678428fe.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.iphod_iphodVers-3b51c231.h>
#include <_root.iphod_iphodVers-42b6503b.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Visual.h>
#include <iphod.Italic.h>
#include <iphod.Regular.h>
#include <iphod.Versical.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[4];

namespace g{
namespace iphod{

// public partial sealed class Versical :4
// {
// static Versical() :43
static void Versical__cctor_4_fn(uType* __type)
{
    Versical::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    Versical::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Versical::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Speaker"*/]);
    Versical::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
}

static void Versical_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Speaker");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("auto");
    ::STRINGS[4] = uString::Const("70, 290");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface14));
    type->SetFields(99,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::iphod::Versical, __g_nametable1), 0,
        ::g::Uno::String_typeof(), offsetof(::g::iphod::Versical, _field_Speaker), 0,
        ::g::Uno::String_typeof(), offsetof(::g::iphod::Versical, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Versical, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Versical, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Versical, this_Speaker_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Versical, this_Text_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::iphod::Versical::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Versical::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Versical::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Versical::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Versical_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Grid_typeof();
    options.FieldCount = 110;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(Versical);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("iphod.Versical", options);
    type->fp_build_ = Versical_build;
    type->fp_ctor_ = (void*)Versical__New5_fn;
    type->fp_cctor_ = Versical__cctor_4_fn;
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

// public Versical() :47
void Versical__ctor_8_fn(Versical* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :51
void Versical__InitializeUX_fn(Versical* __this)
{
    __this->InitializeUX();
}

// public Versical New() :47
void Versical__New5_fn(Versical** __retval)
{
    *__retval = Versical::New5();
}

// public void SetSpeaker(string value, Uno.UX.IPropertyListener origin) :13
void Versical__SetSpeaker_fn(Versical* __this, uString* value, uObject* origin)
{
    __this->SetSpeaker(value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :28
void Versical__SetText_fn(Versical* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Speaker() :10
void Versical__get_Speaker_fn(Versical* __this, uString** __retval)
{
    *__retval = __this->Speaker();
}

// public void set_Speaker(string value) :11
void Versical__set_Speaker_fn(Versical* __this, uString* value)
{
    __this->Speaker(value);
}

// public string get_Text() :25
void Versical__get_Text_fn(Versical* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :26
void Versical__set_Text_fn(Versical* __this, uString* value)
{
    __this->Text(value);
}

uSStrong<uArray*> Versical::__g_static_nametable1_;
::g::Uno::UX::Selector Versical::__selector0_;
::g::Uno::UX::Selector Versical::__selector1_;
::g::Uno::UX::Selector Versical::__selector2_;

// public Versical() [instance] :47
void Versical::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :51
void Versical::InitializeUX()
{
    ::g::Fuse::Reactive::This* temp2 = ::g::Fuse::Reactive::This::New1();
    ::g::iphod::Italic* temp = ::g::iphod::Italic::New5();
    temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, Versical::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::iphod_accessor_iphod_Versical_Speaker::Singleton());
    this_Speaker_inst = ::g::iphod_iphodVersical_Speaker_Property::New1(this, Versical::__selector1());
    this_Text_inst = ::g::iphod_iphodVersical_Text_Property::New1(this, Versical::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Versical::__g_static_nametable1());
    ::g::Fuse::Reactive::This* temp4 = ::g::Fuse::Reactive::This::New1();
    ::g::iphod::Regular* temp1 = ::g::iphod::Regular::New5();
    temp1_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp1, Versical::__selector0());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::iphod_accessor_iphod_Versical_Text::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, __g_nametable1, 1);
    DefaultRow(::STRINGS[3/*"auto"*/]);
    Columns(::STRINGS[4/*"70, 290"*/]);
    Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[2/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Speaker_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[2/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Text_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public void SetSpeaker(string value, Uno.UX.IPropertyListener origin) [instance] :13
void Versical::SetSpeaker(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Speaker))
    {
        _field_Speaker = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Speaker"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :28
void Versical::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public string get_Speaker() [instance] :10
uString* Versical::Speaker()
{
    return _field_Speaker;
}

// public void set_Speaker(string value) [instance] :11
void Versical::Speaker(uString* value)
{
    SetSpeaker(value, NULL);
}

// public string get_Text() [instance] :25
uString* Versical::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :26
void Versical::Text(uString* value)
{
    SetText(value, NULL);
}

// public Versical New() [static] :47
Versical* Versical::New5()
{
    Versical* obj1 = (Versical*)uNew(Versical_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::iphod
