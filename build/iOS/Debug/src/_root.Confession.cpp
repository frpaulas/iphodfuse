// This file was generated based on '.uno/ux11/Confession.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confession.h>
#include <_root.Indent.h>
#include <_root.Rubric.h>
#include <_root.SectionTitle.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <iphod.Regular.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
static uString* STRINGS[26];
static uType* TYPES[1];

namespace g{

// public partial sealed class Confession :2
// {
// static Confession() :4
static void Confession__cctor_4_fn(uType* __type)
{
}

static void Confession_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Confession of Sin");
    ::STRINGS[1] = uString::Const("The Officiant says to the People");
    ::STRINGS[2] = uString::Const("Dearly beloved, the Scriptures teach us to acknowledge our many sins and offenses, not concealing them from our heavenly Father, but confessing them with humble and obedient hearts that we may obtain forgiveness by his infinite goodness and mercy. We ought at all times humbly to acknowledge our sins before Almighty God, but especially when we come together in his presence to give thanks for the great benefits we have received at his hands, to declare his most worthy praise, to hear his holy Word, and to ask, for ourselves and others, those things necessary for our life and our salvation. Therefore, come with me to the throne of heavenly grace.");
    ::STRINGS[3] = uString::Const("or this");
    ::STRINGS[4] = uString::Const("Let us humbly confess our sins to Almighty God.");
    ::STRINGS[5] = uString::Const("Silence is kept. All kneeling the Officiant and People say");
    ::STRINGS[6] = uString::Const("Almighty and most merciful Father,");
    ::STRINGS[7] = uString::Const("we have erred and strayed from your ways like lost sheep.");
    ::STRINGS[8] = uString::Const("we have followed too much the deceits and desires of our");
    ::STRINGS[9] = uString::Const("own hearts.");
    ::STRINGS[10] = uString::Const("we have offended against your holy laws.");
    ::STRINGS[11] = uString::Const("we have left undone those things which we ought to have done");
    ::STRINGS[12] = uString::Const("and we have done those things which we ought not to have done;");
    ::STRINGS[13] = uString::Const("and apart from your grace, there is no health in us.");
    ::STRINGS[14] = uString::Const("O Lord, have mercy upon us.");
    ::STRINGS[15] = uString::Const("Spare those who confess their faults.");
    ::STRINGS[16] = uString::Const("Restore those who are penitent, according to your promises declared");
    ::STRINGS[17] = uString::Const("to all people in Christ Jesus our Lord;");
    ::STRINGS[18] = uString::Const("And grant, O most merciful Father, for his sake,");
    ::STRINGS[19] = uString::Const("that we may now live a godly, righteous, and sober life,");
    ::STRINGS[20] = uString::Const("to the glory of your holy Name. Amen.");
    ::STRINGS[21] = uString::Const("The Priest alone stands and saysM");
    ::STRINGS[22] = uString::Const("Almighty God, the Father of our Lord Jesus Christ,desires not the death of sinners, \n"
        "    but that they may turn from their wickedness and live. He has empowered and commanded his   \n"
        "    ministers to pronounce to his people, being penitent, the absolution and remission of \n"
        "    their sins. He pardons all who truly repent and genuinely believe his holy Gospel. \n"
        "    For this reason, we beseech him to grant us true repentance and his Holy Spirit, that \n"
        "    our present deeds may please him, the rest of our lives may be pure and holy, and that at  \n"
        "    the last we may come to his eternal joy; through Jesus Christ our Lord. Amen.");
    ::STRINGS[23] = uString::Const("The Almighty and merciful Lord grant you absolution and remission of all your sins, \n"
        "    true repentance, amendment of life, and the grace and consolation of his Holy Spirit. Amen.");
    ::STRINGS[24] = uString::Const("A deacon or layperson remains kneeling and prays");
    ::STRINGS[25] = uString::Const("Grant your faithful people, merciful Lord, pardon and peace; that we may be cleansed \n"
        "    from all our sins, and serve you with a quiet mind; through Jesus Christ our Lord. Amen.");
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

::g::Fuse::Controls::Panel_type* Confession_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::WrapPanel_typeof();
    options.FieldCount = 101;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Confession);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Confession", options);
    type->fp_build_ = Confession_build;
    type->fp_ctor_ = (void*)Confession__New5_fn;
    type->fp_cctor_ = Confession__cctor_4_fn;
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

// public Confession() :8
void Confession__ctor_8_fn(Confession* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void Confession__InitializeUX_fn(Confession* __this)
{
    __this->InitializeUX();
}

// public Confession New() :8
void Confession__New5_fn(Confession** __retval)
{
    *__retval = Confession::New5();
}

// public Confession() [instance] :8
void Confession::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void Confession::InitializeUX()
{
    ::g::SectionTitle* temp = ::g::SectionTitle::New4();
    ::g::Rubric* temp1 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp2 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp3 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp4 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp5 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp6 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp7 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp8 = ::g::iphod::Regular::New5();
    ::g::Indent* temp9 = ::g::Indent::New6();
    ::g::iphod::Regular* temp10 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp11 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp12 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp13 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp14 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp15 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp16 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp17 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp18 = ::g::iphod::Regular::New5();
    ::g::Indent* temp19 = ::g::Indent::New6();
    ::g::Indent* temp20 = ::g::Indent::New6();
    ::g::Rubric* temp21 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp22 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp23 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp24 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp25 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp26 = ::g::iphod::Regular::New5();
    Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Value(::STRINGS[0/*"Confession ...*/]);
    temp1->Value(::STRINGS[1/*"The Officia...*/]);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp2->Value(::STRINGS[2/*"Dearly belo...*/]);
    temp3->Value(::STRINGS[3/*"or this"*/]);
    temp4->Value(::STRINGS[4/*"Let us humb...*/]);
    temp5->Value(::STRINGS[5/*"Silence is ...*/]);
    temp6->Value(::STRINGS[6/*"Almighty an...*/]);
    temp7->Value(::STRINGS[7/*"we have err...*/]);
    temp8->Value(::STRINGS[8/*"we have fol...*/]);
    temp9->Value(::STRINGS[9/*"own hearts."*/]);
    temp10->Value(::STRINGS[10/*"we have off...*/]);
    temp11->Value(::STRINGS[11/*"we have lef...*/]);
    temp12->Value(::STRINGS[12/*"and we have...*/]);
    temp13->Value(::STRINGS[13/*"and apart f...*/]);
    temp14->Value(::STRINGS[14/*"O Lord, hav...*/]);
    temp15->Value(::STRINGS[15/*"Spare those...*/]);
    temp16->Value(::STRINGS[16/*"Restore tho...*/]);
    temp17->Value(::STRINGS[17/*"to all peop...*/]);
    temp18->Value(::STRINGS[18/*"And grant, ...*/]);
    temp19->Value(::STRINGS[19/*"that we may...*/]);
    temp20->Value(::STRINGS[20/*"to the glor...*/]);
    temp21->Value(::STRINGS[21/*"The Priest ...*/]);
    temp22->Value(::STRINGS[22/*"Almighty Go...*/]);
    temp23->Value(::STRINGS[3/*"or this"*/]);
    temp24->Value(::STRINGS[23/*"The Almight...*/]);
    temp25->Value(::STRINGS[24/*"A deacon or...*/]);
    temp26->Value(::STRINGS[25/*"Grant your ...*/]);
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
}

// public Confession New() [static] :8
Confession* Confession::New5()
{
    Confession* obj1 = (Confession*)uNew(Confession_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
