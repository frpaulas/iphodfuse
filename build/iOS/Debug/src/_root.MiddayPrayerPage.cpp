// This file was generated based on '.uno/ux11/MiddayPrayerPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Gloria.h>
#include <_root.iphod_bundle.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.iphod_FuseEleme-da6009.h>
#include <_root.iphod_FuseReact-bf7ca87a.h>
#include <_root.iphod_PsalmTitl-e4a1d1ab.h>
#include <_root.LordsPrayerContemporary.h>
#include <_root.LordsPrayerTraditional.h>
#include <_root.MiddayPrayerPag-8e5945cb.h>
#include <_root.MiddayPrayerPage.h>
#include <_root.MiddayPrayerPag-fbcda240.h>
#include <_root.PsalmTitle.h>
#include <_root.Reference.h>
#include <_root.Rubric.h>
#include <_root.SectionTitle.h>
#include <_root.Versical.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <iphod.Button.h>
#include <iphod.Italic.h>
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
static uString* STRINGS[75];
static uType* TYPES[6];

namespace g{

// public partial sealed class MiddayPrayerPage :2
// {
// static MiddayPrayerPage() :90
static void MiddayPrayerPage__cctor_5_fn(uType* __type)
{
    MiddayPrayerPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb11"*/], ::STRINGS[2/*"temp_eb12"*/], ::STRINGS[3/*"temp_eb13"*/], ::STRINGS[4/*"temp_eb14"*/], ::STRINGS[5/*"temp_eb15"*/], ::STRINGS[6/*"temp_eb16"*/]);
    MiddayPrayerPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    MiddayPrayerPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Text"*/]);
    MiddayPrayerPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Items"*/]);
    MiddayPrayerPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Visibility"*/]);
}

static void MiddayPrayerPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb11");
    ::STRINGS[2] = uString::Const("temp_eb12");
    ::STRINGS[3] = uString::Const("temp_eb13");
    ::STRINGS[4] = uString::Const("temp_eb14");
    ::STRINGS[5] = uString::Const("temp_eb15");
    ::STRINGS[6] = uString::Const("temp_eb16");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Text");
    ::STRINGS[9] = uString::Const("Items");
    ::STRINGS[10] = uString::Const("Visibility");
    ::STRINGS[11] = uString::Const("back");
    ::STRINGS[12] = uString::Const("psalm119");
    ::STRINGS[13] = uString::Const("psalm121");
    ::STRINGS[14] = uString::Const("psalm124");
    ::STRINGS[15] = uString::Const("psalm126");
    ::STRINGS[16] = uString::Const("psTitle");
    ::STRINGS[17] = uString::Const("psName");
    ::STRINGS[18] = uString::Const("vss");
    ::STRINGS[19] = uString::Const("directiveVisibility");
    ::STRINGS[20] = uString::Const("directives");
    ::STRINGS[21] = uString::Const("Pages/MiddayPrayerPage.ux");
    ::STRINGS[22] = uString::Const("Back");
    ::STRINGS[23] = uString::Const("Midday Prayer");
    ::STRINGS[24] = uString::Const("Officiant");
    ::STRINGS[25] = uString::Const("O God, make speed to save us.");
    ::STRINGS[26] = uString::Const("People");
    ::STRINGS[27] = uString::Const("O Lord, make haste to help us.");
    ::STRINGS[28] = uString::Const("Glory to the Father, and to the Son, and to the Holy Spirit;");
    ::STRINGS[29] = uString::Const("as it was in the beginning, is now, and ever shall be, world without end. Amen.");
    ::STRINGS[30] = uString::Const("Except in Lent, add");
    ::STRINGS[31] = uString::Const("");
    ::STRINGS[32] = uString::Const("Alleluia");
    ::STRINGS[33] = uString::Const("One or more of the following Psalms is sung or said. Other suitable selections include Psalms 19, 67, one or more sections of Psalm 119, or a selection from Psalms 120 through 133.");
    ::STRINGS[34] = uString::Const("Psalm 119");
    ::STRINGS[35] = uString::Const("Psalm 121");
    ::STRINGS[36] = uString::Const("Psalm 124");
    ::STRINGS[37] = uString::Const("Psalm 126");
    ::STRINGS[38] = uString::Const("One of the following, or some other suitable passage of Scripture, is read");
    ::STRINGS[39] = uString::Const("Jesus said, \342\200\234Now is the judgment of this world; now will the ruler of this world be cast out. And I, when I am lifted up from the earth, will draw all people to myself.\342\200\235");
    ::STRINGS[40] = uString::Const("John 12:31-32");
    ::STRINGS[41] = uString::Const("If anyone is in Christ, he is a new creation. The old has passed away; behold, the new has come. All this is from God, who through Christ reconciled us to himself and gave us the ministry of reconciliation.");
    ::STRINGS[42] = uString::Const("2 Corinthians 5:17-18");
    ::STRINGS[43] = uString::Const("From the rising of the sun to its setting my Name will be great among the nations, and in every place incense will be offered to my Name, and a pure offering. For my Name will be great among the nations, says the Lord of Hosts.");
    ::STRINGS[44] = uString::Const("Malachi 1:11");
    ::STRINGS[45] = uString::Const("At the end of the reading is said");
    ::STRINGS[46] = uString::Const("The Word of the Lord");
    ::STRINGS[47] = uString::Const("Thanks be to God.");
    ::STRINGS[48] = uString::Const("A meditation, silent or spoken, may follow.");
    ::STRINGS[49] = uString::Const("The Officiant then begins the Prayers");
    ::STRINGS[50] = uString::Const("I will bless the Lord at all times");
    ::STRINGS[51] = uString::Const("His praise shall continually be in my mouth");
    ::STRINGS[52] = uString::Const("Lord, have mercy [upon us].");
    ::STRINGS[53] = uString::Const("Christ, have mercy [upon us].");
    ::STRINGS[54] = uString::Const("Officient and People");
    ::STRINGS[55] = uString::Const("or this");
    ::STRINGS[56] = uString::Const("O Lord, hear our prayer;");
    ::STRINGS[57] = uString::Const("And let our cry come to you.");
    ::STRINGS[58] = uString::Const("Let us pray.");
    ::STRINGS[59] = uString::Const("The Officiant then says one or more of the following Collects. Other appropriate Collects may also be used.");
    ::STRINGS[60] = uString::Const("Blessed Savior, at this hour you hung upon the cross, stretching out your loving arms: Grant that all the peoples of the earth may look to you and be saved; for your tender mercies\342\200\231 sake.");
    ::STRINGS[61] = uString::Const("Amen");
    ::STRINGS[62] = uString::Const("Almighty Savior, who at mid-day called your servant Saint Paul to be an apostle to the Gentiles: We pray you to illumine the world with the radiance of your glory, that all nations may come and worship you; for you live and reign with the Father and the Holy Spirit, one God, for ever and ever.");
    ::STRINGS[63] = uString::Const("Father of all mercies, you revealed your boundless compassion to your apostle Saint Peter in a threefold vision: Forgive our unbelief, we pray, and so strengthen our hearts and enkindle our zeal, that we may fervently desire the salvation of all people, and diligently labor in the extension of your kingdom; through him who gave himself for the life of the world, your Son our Savior Jesus Christ.");
    ::STRINGS[64] = uString::Const("Silence may be kept, and other intersessions and thanksgiving may be offered");
    ::STRINGS[65] = uString::Const("Let us bless the Lord");
    ::STRINGS[66] = uString::Const("Thanks be to God");
    ::STRINGS[67] = uString::Const("From Easter Day through the Day of Pentecost \342\200\234Alleluia, alleluia\342\200\235 may be added to the preceding versicle and response.");
    ::STRINGS[68] = uString::Const("The Officiant may conclude with this, or one of the other Graces from Morning and Evening Prayer.");
    ::STRINGS[69] = uString::Const("The grace of our Lord Jesus Christ, and the love of God, and the fellowship of the Holy Spirit, be with us all evermore.");
    ::STRINGS[70] = uString::Const("Amen.");
    ::STRINGS[71] = uString::Const("2 Corinthians 13:14");
    ::STRINGS[72] = uString::Const("Additional Directions");
    ::STRINGS[73] = uString::Const("If desired, either version of the Lord\342\200\231s Prayer may conclude with the phrase, \342\200\234deliver us from evil,\342\200\235 omitting the doxology.");
    ::STRINGS[74] = uString::Const("Additional Directives");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
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
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MiddayPrayerPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MiddayPrayerPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb14), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MiddayPrayerPage, temp_eb16), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MiddayPrayerPage, temp_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MiddayPrayerPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MiddayPrayerPage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MiddayPrayerPage, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MiddayPrayerPage, temp3_Visibility_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MiddayPrayerPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MiddayPrayerPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MiddayPrayerPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MiddayPrayerPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MiddayPrayerPage::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MiddayPrayerPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::iphod::Page_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(MiddayPrayerPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MiddayPrayerPage", options);
    type->fp_build_ = MiddayPrayerPage_build;
    type->fp_cctor_ = MiddayPrayerPage__cctor_5_fn;
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

// public MiddayPrayerPage(Fuse.Navigation.Router router) :94
void MiddayPrayerPage__ctor_9_fn(MiddayPrayerPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :100
void MiddayPrayerPage__InitializeUX1_fn(MiddayPrayerPage* __this)
{
    __this->InitializeUX1();
}

// public MiddayPrayerPage New(Fuse.Navigation.Router router) :94
void MiddayPrayerPage__New6_fn(::g::Fuse::Navigation::Router* router1, MiddayPrayerPage** __retval)
{
    *__retval = MiddayPrayerPage::New6(router1);
}

uSStrong<uArray*> MiddayPrayerPage::__g_static_nametable1_;
::g::Uno::UX::Selector MiddayPrayerPage::__selector0_;
::g::Uno::UX::Selector MiddayPrayerPage::__selector1_;
::g::Uno::UX::Selector MiddayPrayerPage::__selector2_;
::g::Uno::UX::Selector MiddayPrayerPage::__selector3_;

// public MiddayPrayerPage(Fuse.Navigation.Router router) [instance] :94
void MiddayPrayerPage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :100
void MiddayPrayerPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MiddayPrayerPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"back"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"psalm119"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"psalm121"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"psalm124"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"psalm126"*/]);
    ::g::PsalmTitle* temp = ::g::PsalmTitle::New6();
    temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, MiddayPrayerPage::__selector0());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"psTitle"*/]);
    temp_Text_inst = ::g::iphod_PsalmTitle_Text_Property::New1(temp, MiddayPrayerPage::__selector1());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"psName"*/]);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::iphod_FuseReactiveEach_Items_Property::New1(temp1, MiddayPrayerPage::__selector2());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"vss"*/]);
    ::g::SectionTitle* temp2 = ::g::SectionTitle::New4();
    temp2_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp2, MiddayPrayerPage::__selector3());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp3, MiddayPrayerPage::__selector3());
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"directives"*/]);
    ::g::Fuse::Reactive::JavaScript* temp15 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp17 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::iphod::Button* temp18 = ::g::iphod::Button::New4();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp19 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::iphod::Title* temp21 = ::g::iphod::Title::New4();
    ::g::Versical* temp22 = ::g::Versical::New5();
    ::g::Versical* temp23 = ::g::Versical::New5();
    ::g::Versical* temp24 = ::g::Versical::New5();
    ::g::Versical* temp25 = ::g::Versical::New5();
    ::g::Rubric* temp26 = ::g::Rubric::New6();
    ::g::Versical* temp27 = ::g::Versical::New5();
    ::g::Rubric* temp28 = ::g::Rubric::New6();
    ::g::iphod::Button* temp29 = ::g::iphod::Button::New4();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5, __g_nametable1);
    ::g::iphod::Button* temp30 = ::g::iphod::Button::New4();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::iphod::Button* temp31 = ::g::iphod::Button::New4();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    ::g::iphod::Button* temp32 = ::g::iphod::Button::New4();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp_Text_inst, (uObject*)temp10, __g_nametable1, 3);
    MiddayPrayerPage__Template* temp35 = MiddayPrayerPage__Template::New2(this, this);
    MiddayPrayerPage__Template1* temp36 = MiddayPrayerPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Gloria* temp38 = ::g::Gloria::New5();
    ::g::Rubric* temp39 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp40 = ::g::iphod::Regular::New5();
    ::g::Reference* temp41 = ::g::Reference::New6();
    ::g::iphod::Regular* temp42 = ::g::iphod::Regular::New5();
    ::g::Reference* temp43 = ::g::Reference::New6();
    ::g::iphod::Regular* temp44 = ::g::iphod::Regular::New5();
    ::g::Reference* temp45 = ::g::Reference::New6();
    ::g::Rubric* temp46 = ::g::Rubric::New6();
    ::g::Versical* temp47 = ::g::Versical::New5();
    ::g::Versical* temp48 = ::g::Versical::New5();
    ::g::Rubric* temp49 = ::g::Rubric::New6();
    ::g::Rubric* temp50 = ::g::Rubric::New6();
    ::g::Versical* temp51 = ::g::Versical::New5();
    ::g::Versical* temp52 = ::g::Versical::New5();
    ::g::iphod::Regular* temp53 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp54 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp55 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp56 = ::g::Rubric::New6();
    ::g::LordsPrayerTraditional* temp57 = ::g::LordsPrayerTraditional::New5();
    ::g::Rubric* temp58 = ::g::Rubric::New6();
    ::g::LordsPrayerContemporary* temp59 = ::g::LordsPrayerContemporary::New5();
    ::g::Versical* temp60 = ::g::Versical::New5();
    ::g::Versical* temp61 = ::g::Versical::New5();
    ::g::Versical* temp62 = ::g::Versical::New5();
    ::g::Rubric* temp63 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp64 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp65 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp66 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp67 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp68 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp69 = ::g::iphod::Italic::New5();
    ::g::Rubric* temp70 = ::g::Rubric::New6();
    ::g::Versical* temp71 = ::g::Versical::New5();
    ::g::Versical* temp72 = ::g::Versical::New5();
    ::g::Rubric* temp73 = ::g::Rubric::New6();
    ::g::Rubric* temp74 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp75 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp76 = ::g::iphod::Italic::New5();
    ::g::Reference* temp77 = ::g::Reference::New6();
    ::g::Fuse::Reactive::DataBinding* temp78 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Visibility_inst, (uObject*)temp13, __g_nametable1, 3);
    ::g::iphod::Button* temp80 = ::g::iphod::Button::New4();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    temp15->LineNumber(3);
    temp15->FileName(::STRINGS[21/*"Pages/Midda...*/]);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::Helpers07079b1d()));
    temp16->LineNumber(4);
    temp16->FileName(::STRINGS[21/*"Pages/Midda...*/]);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::MiddayPrayerPage5ec16397()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp18->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    temp18->Text(::STRINGS[22/*"Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp21->Value(::STRINGS[23/*"Midday Prayer"*/]);
    temp22->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp22->Text(::STRINGS[25/*"O God, make...*/]);
    temp23->Speaker(::STRINGS[26/*"People"*/]);
    temp23->Text(::STRINGS[27/*"O Lord, mak...*/]);
    temp24->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp24->Text(::STRINGS[28/*"Glory to th...*/]);
    temp25->Speaker(::STRINGS[26/*"People"*/]);
    temp25->Text(::STRINGS[29/*"as it was i...*/]);
    temp26->Value(::STRINGS[30/*"Except in L...*/]);
    temp27->Speaker(::STRINGS[31/*""*/]);
    temp27->Text(::STRINGS[32/*"Alleluia"*/]);
    temp28->Value(::STRINGS[33/*"One or more...*/]);
    temp29->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp29, 3);
    temp29->Text(::STRINGS[34/*"Psalm 119"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp29, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp30->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp30->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp30, 3);
    temp30->Text(::STRINGS[35/*"Psalm 121"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp30, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp31->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp31->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp31, 3);
    temp31->Text(::STRINGS[36/*"Psalm 124"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp31, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp32->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp32->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp32, 3);
    temp32->Text(::STRINGS[37/*"Psalm 126"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp32, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp39->Value(::STRINGS[38/*"One of the ...*/]);
    temp40->Value(::STRINGS[39/*"Jesus said,...*/]);
    temp40->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp41->Value(::STRINGS[40/*"John 12:31-32"*/]);
    temp42->Value(::STRINGS[41/*"If anyone i...*/]);
    temp42->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp43->Value(::STRINGS[42/*"2 Corinthia...*/]);
    temp44->Value(::STRINGS[43/*"From the ri...*/]);
    temp44->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp45->Value(::STRINGS[44/*"Malachi 1:11"*/]);
    temp46->Value(::STRINGS[45/*"At the end ...*/]);
    temp47->Speaker(::STRINGS[31/*""*/]);
    temp47->Text(::STRINGS[46/*"The Word of...*/]);
    temp48->Speaker(::STRINGS[26/*"People"*/]);
    temp48->Text(::STRINGS[47/*"Thanks be t...*/]);
    temp49->Value(::STRINGS[48/*"A meditatio...*/]);
    temp50->Value(::STRINGS[49/*"The Officia...*/]);
    temp51->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp51->Text(::STRINGS[50/*"I will bles...*/]);
    temp52->Speaker(::STRINGS[26/*"People"*/]);
    temp52->Text(::STRINGS[51/*"His praise ...*/]);
    temp53->Value(::STRINGS[52/*"Lord, have ...*/]);
    temp54->Value(::STRINGS[53/*"Christ, hav...*/]);
    temp55->Value(::STRINGS[52/*"Lord, have ...*/]);
    temp56->Value(::STRINGS[54/*"Officient a...*/]);
    temp58->Value(::STRINGS[55/*"or this"*/]);
    temp60->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp60->Text(::STRINGS[56/*"O Lord, hea...*/]);
    temp61->Speaker(::STRINGS[26/*"People"*/]);
    temp61->Text(::STRINGS[57/*"And let our...*/]);
    temp62->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp62->Text(::STRINGS[58/*"Let us pray."*/]);
    temp63->Value(::STRINGS[59/*"The Officia...*/]);
    temp64->Value(::STRINGS[60/*"Blessed Sav...*/]);
    temp65->Value(::STRINGS[61/*"Amen"*/]);
    temp66->Value(::STRINGS[62/*"Almighty Sa...*/]);
    temp67->Value(::STRINGS[61/*"Amen"*/]);
    temp68->Value(::STRINGS[63/*"Father of a...*/]);
    temp69->Value(::STRINGS[61/*"Amen"*/]);
    temp70->Value(::STRINGS[64/*"Silence may...*/]);
    temp71->Speaker(::STRINGS[24/*"Officiant"*/]);
    temp71->Text(::STRINGS[65/*"Let us bles...*/]);
    temp72->Speaker(::STRINGS[26/*"People"*/]);
    temp72->Text(::STRINGS[66/*"Thanks be t...*/]);
    temp73->Value(::STRINGS[67/*"From Easter...*/]);
    temp74->Value(::STRINGS[68/*"The Officia...*/]);
    temp75->Value(::STRINGS[69/*"The grace o...*/]);
    temp76->Value(::STRINGS[70/*"Amen."*/]);
    temp77->Value(::STRINGS[71/*"2 Corinthia...*/]);
    temp2->Value(::STRINGS[72/*"Additional ...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp78);
    temp3->Value(::STRINGS[73/*"If desired,...*/]);
    temp3->TextWrapping(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp80->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp80->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp80, 3);
    temp80->Text(::STRINGS[74/*"Additional ...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp80, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public MiddayPrayerPage New(Fuse.Navigation.Router router) [static] :94
MiddayPrayerPage* MiddayPrayerPage::New6(::g::Fuse::Navigation::Router* router1)
{
    MiddayPrayerPage* obj1 = (MiddayPrayerPage*)uNew(MiddayPrayerPage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

} // ::g
