// This file was generated based on '.uno/ux11/iphod.Button.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.iphod_accessor_-818ca195.h>
#include <_root.iphod_accessor_-ec967484.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.iphod_FuseContr-d7d17214.h>
#include <_root.iphod_iphodButt-3cb3fb87.h>
#include <_root.iphod_iphodButt-f34cb6a4.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <iphod.Button.h>
#include <iphod.Text.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
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
static uString* STRINGS[3];
static uType* TYPES[5];

namespace g{
namespace iphod{

// public partial sealed class Button :4
// {
// static Button() :43
static void Button__cctor_4_fn(uType* __type)
{
    Button::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    Button::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Button::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Text"*/]);
    Button::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"FontSize"*/]);
}

static void Button_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Text");
    ::STRINGS[2] = uString::Const("FontSize");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(100,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::iphod::Button, __g_nametable1), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::iphod::Button, _field_FontSize), 0,
        ::g::Uno::String_typeof(), offsetof(::g::iphod::Button, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::iphod::Button, temp_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Button, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::iphod::Button, this_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::iphod::Button, this_Text_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::iphod::Button::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Button::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Button::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::iphod::Button::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 111;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("iphod.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New4_fn;
    type->fp_cctor_ = Button__cctor_4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
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

// public Button() :47
void Button__ctor_7_fn(Button* __this)
{
    __this->ctor_7();
}

// public float get_FontSize() :25
void Button__get_FontSize_fn(Button* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :26
void Button__set_FontSize_fn(Button* __this, float* value)
{
    __this->FontSize(*value);
}

// private void InitializeUX() :51
void Button__InitializeUX_fn(Button* __this)
{
    __this->InitializeUX();
}

// public Button New() :47
void Button__New4_fn(Button** __retval)
{
    *__retval = Button::New4();
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :28
void Button__SetFontSize_fn(Button* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :13
void Button__SetText_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :10
void Button__get_Text_fn(Button* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :11
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

uSStrong<uArray*> Button::__g_static_nametable1_;
::g::Uno::UX::Selector Button::__selector0_;
::g::Uno::UX::Selector Button::__selector1_;
::g::Uno::UX::Selector Button::__selector2_;

// public Button() [instance] :47
void Button::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public float get_FontSize() [instance] :25
float Button::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :26
void Button::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance] :51
void Button::InitializeUX()
{
    ::g::Fuse::Reactive::This* temp1 = ::g::Fuse::Reactive::This::New1();
    ::g::iphod::Text* temp = ::g::iphod::Text::New4();
    temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, Button::__selector0());
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::iphod_accessor_iphod_Button_Text::Singleton());
    this_Text_inst = ::g::iphod_iphodButton_Text_Property::New1(this, Button::__selector1());
    this_FontSize_inst = ::g::iphod_iphodButton_FontSize_Property::New1(this, Button::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Button::__g_static_nametable1());
    ::g::Fuse::Reactive::This* temp3 = ::g::Fuse::Reactive::This::New1();
    temp_FontSize_inst = ::g::iphod_FuseControlsTextControl_FontSize_Property::New1(temp, Button::__selector2());
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::iphod_accessor_iphod_Button_FontSize::Singleton());
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Effects::DropShadow* temp6 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp4, __g_nametable1, 1);
    ::g::Fuse::Gestures::WhilePressed* temp9 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp10 = ::g::Fuse::Animations::Scale::New2();
    Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    FontSize(16.0f);
    temp5->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp5->Color(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    temp5->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->Size(2.0f);
    temp6->Angle(90.0f);
    temp6->Distance(1.0f);
    temp6->Spread(0.2f);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp->TextAlignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    temp10->Factor(0.95f);
    temp10->Duration(0.08);
    temp10->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Text_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_FontSize_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :28
void Button::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"FontSize"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :13
void Button::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :10
uString* Button::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :11
void Button::Text(uString* value)
{
    SetText(value, NULL);
}

// public Button New() [static] :47
Button* Button::New4()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::iphod
