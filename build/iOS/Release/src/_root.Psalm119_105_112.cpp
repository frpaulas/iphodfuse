// This file was generated based on '.uno/ux11/Psalm119_105_112.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Psalm1.h>
#include <_root.Psalm119_105_112.h>
#include <_root.Psalm2.h>
#include <_root.PsalmTitle.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
static uString* STRINGS[26];
static uType* TYPES[1];

namespace g{

// public partial sealed class Psalm119_105_112 :2
// {
// static Psalm119_105_112() :4
static void Psalm119_105_112__cctor_4_fn(uType* __type)
{
}

static void Psalm119_105_112_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Lucerna pedibus meis");
    ::STRINGS[1] = uString::Const("Psalm 119");
    ::STRINGS[2] = uString::Const("Your word is a lantern to my feet *");
    ::STRINGS[3] = uString::Const("105");
    ::STRINGS[4] = uString::Const("and a light upon my path.");
    ::STRINGS[5] = uString::Const("I have sworn and am determined *");
    ::STRINGS[6] = uString::Const("106");
    ::STRINGS[7] = uString::Const("to keep your righteous judgments.");
    ::STRINGS[8] = uString::Const("I am deeply troubled; *");
    ::STRINGS[9] = uString::Const("107");
    ::STRINGS[10] = uString::Const("preserve my life, O Lord, according to your word.");
    ::STRINGS[11] = uString::Const("Accept, O Lord, the willing tribute of my lips, *");
    ::STRINGS[12] = uString::Const("108");
    ::STRINGS[13] = uString::Const("and teach me your judgments.");
    ::STRINGS[14] = uString::Const("My life is always in my hand, *");
    ::STRINGS[15] = uString::Const("109");
    ::STRINGS[16] = uString::Const("yet I do not forget your law.");
    ::STRINGS[17] = uString::Const("The wicked have set a trap for me, *");
    ::STRINGS[18] = uString::Const("110");
    ::STRINGS[19] = uString::Const("but I have not strayed from your commandments.");
    ::STRINGS[20] = uString::Const("Your decrees are my inheritance for ever; *");
    ::STRINGS[21] = uString::Const("111");
    ::STRINGS[22] = uString::Const("truly, they are the joy of my heart.");
    ::STRINGS[23] = uString::Const("I have applied my heart to fulfill your *");
    ::STRINGS[24] = uString::Const("112");
    ::STRINGS[25] = uString::Const("for ever and to the end.");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface14));
    type->SetFields(99);
}

::g::Fuse::Controls::Control_type* Psalm119_105_112_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::WrapPanel_typeof();
    options.FieldCount = 99;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(Psalm119_105_112);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Psalm119_105_112", options);
    type->fp_build_ = Psalm119_105_112_build;
    type->fp_ctor_ = (void*)Psalm119_105_112__New5_fn;
    type->fp_cctor_ = Psalm119_105_112__cctor_4_fn;
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

// public Psalm119_105_112() :8
void Psalm119_105_112__ctor_8_fn(Psalm119_105_112* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void Psalm119_105_112__InitializeUX_fn(Psalm119_105_112* __this)
{
    __this->InitializeUX();
}

// public Psalm119_105_112 New() :8
void Psalm119_105_112__New5_fn(Psalm119_105_112** __retval)
{
    *__retval = Psalm119_105_112::New5();
}

// public Psalm119_105_112() [instance] :8
void Psalm119_105_112::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void Psalm119_105_112::InitializeUX()
{
    ::g::PsalmTitle* temp = ::g::PsalmTitle::New6();
    ::g::Psalm1* temp1 = ::g::Psalm1::New6();
    ::g::Psalm2* temp2 = ::g::Psalm2::New6();
    ::g::Psalm1* temp3 = ::g::Psalm1::New6();
    ::g::Psalm2* temp4 = ::g::Psalm2::New6();
    ::g::Psalm1* temp5 = ::g::Psalm1::New6();
    ::g::Psalm2* temp6 = ::g::Psalm2::New6();
    ::g::Psalm1* temp7 = ::g::Psalm1::New6();
    ::g::Psalm2* temp8 = ::g::Psalm2::New6();
    ::g::Psalm1* temp9 = ::g::Psalm1::New6();
    ::g::Psalm2* temp10 = ::g::Psalm2::New6();
    ::g::Psalm1* temp11 = ::g::Psalm1::New6();
    ::g::Psalm2* temp12 = ::g::Psalm2::New6();
    ::g::Psalm1* temp13 = ::g::Psalm1::New6();
    ::g::Psalm2* temp14 = ::g::Psalm2::New6();
    ::g::Psalm1* temp15 = ::g::Psalm1::New6();
    ::g::Psalm2* temp16 = ::g::Psalm2::New6();
    Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Value(::STRINGS[0/*"Lucerna ped...*/]);
    temp->Text(::STRINGS[1/*"Psalm 119"*/]);
    temp1->Value(::STRINGS[2/*"Your word i...*/]);
    temp1->Text(::STRINGS[3/*"105"*/]);
    temp2->Value(::STRINGS[4/*"and a light...*/]);
    temp3->Value(::STRINGS[5/*"I have swor...*/]);
    temp3->Text(::STRINGS[6/*"106"*/]);
    temp4->Value(::STRINGS[7/*"to keep you...*/]);
    temp5->Value(::STRINGS[8/*"I am deeply...*/]);
    temp5->Text(::STRINGS[9/*"107"*/]);
    temp6->Value(::STRINGS[10/*"preserve my...*/]);
    temp7->Value(::STRINGS[11/*"Accept, O L...*/]);
    temp7->Text(::STRINGS[12/*"108"*/]);
    temp8->Value(::STRINGS[13/*"and teach m...*/]);
    temp9->Value(::STRINGS[14/*"My life is ...*/]);
    temp9->Text(::STRINGS[15/*"109"*/]);
    temp10->Value(::STRINGS[16/*"yet I do no...*/]);
    temp11->Value(::STRINGS[17/*"The wicked ...*/]);
    temp11->Text(::STRINGS[18/*"110"*/]);
    temp12->Value(::STRINGS[19/*"but I have ...*/]);
    temp13->Value(::STRINGS[20/*"Your decree...*/]);
    temp13->Text(::STRINGS[21/*"111"*/]);
    temp14->Value(::STRINGS[22/*"truly, they...*/]);
    temp15->Value(::STRINGS[23/*"I have appl...*/]);
    temp15->Text(::STRINGS[24/*"112"*/]);
    temp16->Value(::STRINGS[25/*"for ever an...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public Psalm119_105_112 New() [static] :8
Psalm119_105_112* Psalm119_105_112::New5()
{
    Psalm119_105_112* obj1 = (Psalm119_105_112*)uNew(Psalm119_105_112_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
