// This file was generated based on '.uno/ux11/PaschaNostrum.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Indent.h>
#include <_root.PaschaNostrum.h>
#include <_root.PsalmTitle.h>
#include <_root.Reference.h>
#include <_root.Rubric.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <iphod.Regular.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
static uString* STRINGS[20];
static uType* TYPES[1];

namespace g{

// public partial sealed class PaschaNostrum :2
// {
// static PaschaNostrum() :4
static void PaschaNostrum__cctor_4_fn(uType* __type)
{
}

static void PaschaNostrum_build(uType* type)
{
    ::STRINGS[0] = uString::Const("During the first week of Easter, the Pascha Nostrum will be used in place of the Invitatory Psalm. It is appropriate to use this canticle throughout Eastertide.");
    ::STRINGS[1] = uString::Const("Christ our Passover");
    ::STRINGS[2] = uString::Const("Pascha Nostrum");
    ::STRINGS[3] = uString::Const("1 Corinthians 5:7-8; Romans 6:9-11; 1 Corinthians 15:20-22");
    ::STRINGS[4] = uString::Const("Alleluia. Christ our Passover has been sacrificed for us;");
    ::STRINGS[5] = uString::Const("therefore let us keep the feast,");
    ::STRINGS[6] = uString::Const("Not with the old leaven, the leaven of malice and evil,");
    ::STRINGS[7] = uString::Const("but with the unleavened bread of sincerity and truth. Alleluia.");
    ::STRINGS[8] = uString::Const("Christ being raised from the dead will never die again;");
    ::STRINGS[9] = uString::Const("death no longer has dominion over him.");
    ::STRINGS[10] = uString::Const("The death that he died, he died to sin, once for all;");
    ::STRINGS[11] = uString::Const("but the life he lives, he lives to God.");
    ::STRINGS[12] = uString::Const("So also consider yourselves dead to sin,");
    ::STRINGS[13] = uString::Const("and alive to God in Jesus Christ our Lord. Alleluia.");
    ::STRINGS[14] = uString::Const("Christ has been raised from the dead,");
    ::STRINGS[15] = uString::Const("the first fruits of those who have fallen asleep.");
    ::STRINGS[16] = uString::Const("For since by a man came death,");
    ::STRINGS[17] = uString::Const("by a man has come also the resurrection of the dead.");
    ::STRINGS[18] = uString::Const("For as in Adam all die,");
    ::STRINGS[19] = uString::Const("so also in Christ shall all be made alive. Alleluia.");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(101);
}

::g::Fuse::Controls::Panel_type* PaschaNostrum_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::WrapPanel_typeof();
    options.FieldCount = 101;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(PaschaNostrum);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("PaschaNostrum", options);
    type->fp_build_ = PaschaNostrum_build;
    type->fp_ctor_ = (void*)PaschaNostrum__New5_fn;
    type->fp_cctor_ = PaschaNostrum__cctor_4_fn;
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

// public PaschaNostrum() :8
void PaschaNostrum__ctor_8_fn(PaschaNostrum* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void PaschaNostrum__InitializeUX_fn(PaschaNostrum* __this)
{
    __this->InitializeUX();
}

// public PaschaNostrum New() :8
void PaschaNostrum__New5_fn(PaschaNostrum** __retval)
{
    *__retval = PaschaNostrum::New5();
}

// public PaschaNostrum() [instance] :8
void PaschaNostrum::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void PaschaNostrum::InitializeUX()
{
    ::g::Rubric* temp = ::g::Rubric::New6();
    ::g::PsalmTitle* temp1 = ::g::PsalmTitle::New6();
    ::g::Reference* temp2 = ::g::Reference::New6();
    ::g::iphod::Regular* temp3 = ::g::iphod::Regular::New5();
    ::g::Indent* temp4 = ::g::Indent::New6();
    ::g::iphod::Regular* temp5 = ::g::iphod::Regular::New5();
    ::g::Indent* temp6 = ::g::Indent::New6();
    ::g::iphod::Regular* temp7 = ::g::iphod::Regular::New5();
    ::g::Indent* temp8 = ::g::Indent::New6();
    ::g::iphod::Regular* temp9 = ::g::iphod::Regular::New5();
    ::g::Indent* temp10 = ::g::Indent::New6();
    ::g::iphod::Regular* temp11 = ::g::iphod::Regular::New5();
    ::g::Indent* temp12 = ::g::Indent::New6();
    ::g::iphod::Regular* temp13 = ::g::iphod::Regular::New5();
    ::g::Indent* temp14 = ::g::Indent::New6();
    ::g::iphod::Regular* temp15 = ::g::iphod::Regular::New5();
    ::g::Indent* temp16 = ::g::Indent::New6();
    ::g::iphod::Regular* temp17 = ::g::iphod::Regular::New5();
    ::g::Indent* temp18 = ::g::Indent::New6();
    Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Value(::STRINGS[0/*"During the ...*/]);
    temp1->Value(::STRINGS[1/*"Christ our ...*/]);
    temp1->Text(::STRINGS[2/*"Pascha Nost...*/]);
    temp2->Value(::STRINGS[3/*"1 Corinthia...*/]);
    temp3->Value(::STRINGS[4/*"Alleluia. C...*/]);
    temp4->Value(::STRINGS[5/*"therefore l...*/]);
    temp5->Value(::STRINGS[6/*"Not with th...*/]);
    temp6->Value(::STRINGS[7/*"but with th...*/]);
    temp7->Value(::STRINGS[8/*"Christ bein...*/]);
    temp8->Value(::STRINGS[9/*"death no lo...*/]);
    temp9->Value(::STRINGS[10/*"The death t...*/]);
    temp10->Value(::STRINGS[11/*"but the lif...*/]);
    temp11->Value(::STRINGS[12/*"So also con...*/]);
    temp12->Value(::STRINGS[13/*"and alive t...*/]);
    temp13->Value(::STRINGS[14/*"Christ has ...*/]);
    temp14->Value(::STRINGS[15/*"the first f...*/]);
    temp15->Value(::STRINGS[16/*"For since b...*/]);
    temp16->Value(::STRINGS[17/*"by a man ha...*/]);
    temp17->Value(::STRINGS[18/*"For as in A...*/]);
    temp18->Value(::STRINGS[19/*"so also in ...*/]);
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public PaschaNostrum New() [static] :8
PaschaNostrum* PaschaNostrum::New5()
{
    PaschaNostrum* obj1 = (PaschaNostrum*)uNew(PaschaNostrum_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
