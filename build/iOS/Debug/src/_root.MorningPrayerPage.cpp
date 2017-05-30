// This file was generated based on '.uno/ux11/MorningPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confession.h>
#include <_root.Invitatory.h>
#include <_root.iphod_bundle.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.iphod_FuseReact-9da7415f.h>
#include <_root.MorningPrayerPa-a2bfd365.h>
#include <_root.MorningPrayerPa-b06b20d6.h>
#include <_root.MorningPrayerPa-b06b20d7.h>
#include <_root.MorningPrayerPa-b06b20d8.h>
#include <_root.MorningPrayerPage.h>
#include <_root.Reference.h>
#include <_root.Rubric.h>
#include <_root.RubricBlack.h>
#include <_root.SectionTitle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <iphod.Button.h>
#include <iphod.Regular.h>
#include <iphod.Title.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[27];
static uType* TYPES[9];

namespace g{

// public partial sealed class MorningPrayerPage :2
// {
// static MorningPrayerPage() :95
static void MorningPrayerPage__cctor_5_fn(uType* __type)
{
    MorningPrayerPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb17"*/], ::STRINGS[2/*"temp_eb18"*/]);
    MorningPrayerPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
}

static void MorningPrayerPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb17");
    ::STRINGS[2] = uString::Const("temp_eb18");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("setup");
    ::STRINGS[5] = uString::Const("back");
    ::STRINGS[6] = uString::Const("title");
    ::STRINGS[7] = uString::Const("openingSentence");
    ::STRINGS[8] = uString::Const("vss");
    ::STRINGS[9] = uString::Const("ref");
    ::STRINGS[10] = uString::Const("nameOfSeason");
    ::STRINGS[11] = uString::Const("antiphon");
    ::STRINGS[12] = uString::Const("invitatoryCanticle");
    ::STRINGS[13] = uString::Const("Pages/MorningPrayerPage.ux");
    ::STRINGS[14] = uString::Const("Back");
    ::STRINGS[15] = uString::Const("Morning Prayer");
    ::STRINGS[16] = uString::Const("The Officiant may begin Morning Prayer by reading an sentence of Scripture found on pages 17-19 or another appropriate Scripture. The Confession of Sin may be said, or the Office may continue with \342\200\234O Lord, open our lips.\342\200\235");
    ::STRINGS[17] = uString::Const("Opening Sentences of Scripture");
    ::STRINGS[18] = uString::Const("The Invitatory");
    ::STRINGS[19] = uString::Const("All stand");
    ::STRINGS[20] = uString::Const("Then follows the Venite. Alternatively, the Jubilate may be used.\n"
        "These seasonal antiphons may be sung or said before and after the Invitatory Psalm.");
    ::STRINGS[21] = uString::Const("Jubilate");
    ::STRINGS[22] = uString::Const("Venite");
    ::STRINGS[23] = uString::Const("VeniteLent");
    ::STRINGS[24] = uString::Const("PaschaNostrum");
    ::STRINGS[25] = uString::Const("Then follows");
    ::STRINGS[26] = uString::Const("The Psalm or Psalms Appointed");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MorningPrayerPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MorningPrayerPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MorningPrayerPage, temp_eb17), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MorningPrayerPage, temp_eb18), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MorningPrayerPage, temp5_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MorningPrayerPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MorningPrayerPage::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MorningPrayerPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::iphod::Page_typeof();
    options.FieldCount = 118;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(MorningPrayerPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MorningPrayerPage", options);
    type->fp_build_ = MorningPrayerPage_build;
    type->fp_cctor_ = MorningPrayerPage__cctor_5_fn;
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

// public MorningPrayerPage(Fuse.Navigation.Router router) :99
void MorningPrayerPage__ctor_9_fn(MorningPrayerPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :105
void MorningPrayerPage__InitializeUX1_fn(MorningPrayerPage* __this)
{
    __this->InitializeUX1();
}

// public MorningPrayerPage New(Fuse.Navigation.Router router) :99
void MorningPrayerPage__New6_fn(::g::Fuse::Navigation::Router* router1, MorningPrayerPage** __retval)
{
    *__retval = MorningPrayerPage::New6(router1);
}

uSStrong<uArray*> MorningPrayerPage::__g_static_nametable1_;
::g::Uno::UX::Selector MorningPrayerPage::__selector0_;

// public MorningPrayerPage(Fuse.Navigation.Router router) [instance] :99
void MorningPrayerPage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :105
void MorningPrayerPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MorningPrayerPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"setup"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"back"*/]);
    ::g::iphod::Title* temp = ::g::iphod::Title::New4();
    temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"title"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"openingSent...*/]);
    ::g::iphod::Regular* temp1 = ::g::iphod::Regular::New5();
    temp1_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp1, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Member* temp10 = ::g::Fuse::Reactive::Member::New1(temp9, ::STRINGS[8/*"vss"*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"openingSent...*/]);
    ::g::Reference* temp2 = ::g::Reference::New6();
    temp2_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp2, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Member* temp12 = ::g::Fuse::Reactive::Member::New1(temp11, ::STRINGS[9/*"ref"*/]);
    ::g::RubricBlack* temp3 = ::g::RubricBlack::New7();
    temp3_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp3, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"nameOfSeason"*/]);
    ::g::iphod::Regular* temp4 = ::g::iphod::Regular::New5();
    temp4_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp4, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"antiphon"*/]);
    ::g::Fuse::Reactive::Match* temp5 = ::g::Fuse::Reactive::Match::New2();
    temp5_Value_inst = ::g::iphod_FuseReactiveMatch_Value_Property::New1(temp5, MorningPrayerPage::__selector0());
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"invitatoryC...*/]);
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Navigation::Activated* temp18 = ::g::Fuse::Navigation::Activated::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp19 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp20 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::iphod::Button* temp21 = ::g::iphod::Button::New4();
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp22 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::iphod::Title* temp24 = ::g::iphod::Title::New4();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Rubric* temp26 = ::g::Rubric::New6();
    ::g::SectionTitle* temp27 = ::g::SectionTitle::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Confession* temp30 = ::g::Confession::New5();
    ::g::SectionTitle* temp31 = ::g::SectionTitle::New4();
    ::g::Rubric* temp32 = ::g::Rubric::New6();
    ::g::Invitatory* temp33 = ::g::Invitatory::New5();
    ::g::Rubric* temp34 = ::g::Rubric::New6();
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp13, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp14, __g_nametable1, 3);
    ::g::Fuse::Reactive::Case* temp37 = ::g::Fuse::Reactive::Case::New1();
    MorningPrayerPage__Template* temp38 = MorningPrayerPage__Template::New2(this, this);
    ::g::Fuse::Reactive::Case* temp39 = ::g::Fuse::Reactive::Case::New1();
    MorningPrayerPage__Template1* temp40 = MorningPrayerPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::Case* temp41 = ::g::Fuse::Reactive::Case::New1();
    MorningPrayerPage__Template2* temp42 = MorningPrayerPage__Template2::New2(this, this);
    ::g::Fuse::Reactive::Case* temp43 = ::g::Fuse::Reactive::Case::New1();
    MorningPrayerPage__Template3* temp44 = MorningPrayerPage__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp15, __g_nametable1, 3);
    ::g::Rubric* temp46 = ::g::Rubric::New6();
    ::g::SectionTitle* temp47 = ::g::SectionTitle::New4();
    temp16->LineNumber(3);
    temp16->FileName(::STRINGS[13/*"Pages/Morni...*/]);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::Helpers07079b1d()));
    temp17->LineNumber(4);
    temp17->FileName(::STRINGS[13/*"Pages/Morni...*/]);
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::MorningPrayerPagebc8016e1()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb17);
    temp19->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp21->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp21->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 3);
    temp21->Text(::STRINGS[14/*"Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp24->Value(::STRINGS[15/*"Morning Pra...*/]);
    temp->FontSize(12.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Value(::STRINGS[16/*"The Officia...*/]);
    temp27->Value(::STRINGS[17/*"Opening Sen...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp31->Value(::STRINGS[18/*"The Invitat...*/]);
    temp32->Value(::STRINGS[19/*"All stand"*/]);
    temp34->Value(::STRINGS[20/*"Then follow...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Cases()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Reactive.Case>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Cases()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Reactive.Case>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Cases()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Reactive.Case>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Cases()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Reactive.Case>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    temp37->String(::STRINGS[21/*"Jubilate"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Factories()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp38);
    temp39->String(::STRINGS[22/*"Venite"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Factories()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp40);
    temp41->String(::STRINGS[23/*"VeniteLent"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Factories()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp42);
    temp43->String(::STRINGS[24/*"PaschaNostrum"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Factories()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp44);
    temp46->Value(::STRINGS[25/*"Then follows"*/]);
    temp47->Value(::STRINGS[26/*"The Psalm o...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
}

// public MorningPrayerPage New(Fuse.Navigation.Router router) [static] :99
MorningPrayerPage* MorningPrayerPage::New6(::g::Fuse::Navigation::Router* router1)
{
    MorningPrayerPage* obj1 = (MorningPrayerPage*)uNew(MorningPrayerPage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

} // ::g
