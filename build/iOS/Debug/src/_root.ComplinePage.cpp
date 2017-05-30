// This file was generated based on '.uno/ux11/ComplinePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ComplinePage.h>
#include <_root.ComplinePage.Template.h>
#include <_root.ComplinePage.Template1.h>
#include <_root.Gloria.h>
#include <_root.Indent.h>
#include <_root.iphod_bundle.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <_root.iphod_FuseEleme-da6009.h>
#include <_root.iphod_FuseReact-bf7ca87a.h>
#include <_root.iphod_PsalmTitl-e4a1d1ab.h>
#include <_root.LordsPrayerContemporary.h>
#include <_root.LordsPrayerTraditional.h>
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
static uString* STRINGS[125];
static uType* TYPES[6];

namespace g{

// public partial sealed class ComplinePage :2
// {
// static ComplinePage() :98
static void ComplinePage__cctor_5_fn(uType* __type)
{
    ComplinePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb2"*/], ::STRINGS[2/*"temp_eb3"*/], ::STRINGS[3/*"temp_eb4"*/], ::STRINGS[4/*"temp_eb5"*/], ::STRINGS[5/*"temp_eb6"*/], ::STRINGS[6/*"temp_eb7"*/]);
    ComplinePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    ComplinePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Text"*/]);
    ComplinePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Items"*/]);
    ComplinePage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Visibility"*/]);
}

static void ComplinePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb2");
    ::STRINGS[2] = uString::Const("temp_eb3");
    ::STRINGS[3] = uString::Const("temp_eb4");
    ::STRINGS[4] = uString::Const("temp_eb5");
    ::STRINGS[5] = uString::Const("temp_eb6");
    ::STRINGS[6] = uString::Const("temp_eb7");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Text");
    ::STRINGS[9] = uString::Const("Items");
    ::STRINGS[10] = uString::Const("Visibility");
    ::STRINGS[11] = uString::Const("back");
    ::STRINGS[12] = uString::Const("psalm4");
    ::STRINGS[13] = uString::Const("psalm31");
    ::STRINGS[14] = uString::Const("psalm91");
    ::STRINGS[15] = uString::Const("psalm134");
    ::STRINGS[16] = uString::Const("psTitle");
    ::STRINGS[17] = uString::Const("psName");
    ::STRINGS[18] = uString::Const("vss");
    ::STRINGS[19] = uString::Const("directiveVisibility");
    ::STRINGS[20] = uString::Const("directives");
    ::STRINGS[21] = uString::Const("Pages/ComplinePage.ux");
    ::STRINGS[22] = uString::Const("Back");
    ::STRINGS[23] = uString::Const("Compline");
    ::STRINGS[24] = uString::Const("The Officiant begins");
    ::STRINGS[25] = uString::Const("");
    ::STRINGS[26] = uString::Const("Our help is in the Name of the Lord;");
    ::STRINGS[27] = uString::Const("People");
    ::STRINGS[28] = uString::Const("The maker of heaven and earth.");
    ::STRINGS[29] = uString::Const("The Officiant continues");
    ::STRINGS[30] = uString::Const("Let us humbly confess our sins to Almighty God.");
    ::STRINGS[31] = uString::Const("Silence may be kept. The Officiant and People then say");
    ::STRINGS[32] = uString::Const("Almighty God and Father, we confess to you,");
    ::STRINGS[33] = uString::Const("to one another, and to the whole company of heaven,");
    ::STRINGS[34] = uString::Const("that we have sinned, through our own fault,");
    ::STRINGS[35] = uString::Const("in thought, and word, and deed,");
    ::STRINGS[36] = uString::Const("and in what we have left undone.");
    ::STRINGS[37] = uString::Const("For the sake of your Son our Lord Jesus Christ,");
    ::STRINGS[38] = uString::Const("have mercy upon us, forgive us all our sins,");
    ::STRINGS[39] = uString::Const("and by the power of your Holy Spirit");
    ::STRINGS[40] = uString::Const("raise us up to serve you in newness of life,");
    ::STRINGS[41] = uString::Const("to the glory of your Name.");
    ::STRINGS[42] = uString::Const("Amen.");
    ::STRINGS[43] = uString::Const("The Officiant alone says");
    ::STRINGS[44] = uString::Const("May Almighty God grant us forgiveness of our sins,");
    ::STRINGS[45] = uString::Const("and the grace and comfort of his Holy Spirit.");
    ::STRINGS[46] = uString::Const("Officiant");
    ::STRINGS[47] = uString::Const("O God, make speed to save us.");
    ::STRINGS[48] = uString::Const("O Lord, make haste to help us.");
    ::STRINGS[49] = uString::Const("Glory to the Father, and to the Son, and to the Holy Spirit;");
    ::STRINGS[50] = uString::Const("as it was in the beginning, is now, and ever shall be, world without end. Amen.");
    ::STRINGS[51] = uString::Const("Except in Lent, add");
    ::STRINGS[52] = uString::Const("Alleluia");
    ::STRINGS[53] = uString::Const("One or more of the following Psalms are sung or said. Traditionally three are used: 4, 91, and 134. Other suitable selections from the Psalms may be substituted.");
    ::STRINGS[54] = uString::Const("Psalm 4");
    ::STRINGS[55] = uString::Const("Psalm 31:1-5");
    ::STRINGS[56] = uString::Const("Psalm 91");
    ::STRINGS[57] = uString::Const("Psalm 134");
    ::STRINGS[58] = uString::Const("One of the following, or some other suitable passage of Scripture, is read");
    ::STRINGS[59] = uString::Const("You, O Lord, are in the midst of us, and we are called by your Name: do not forsake us.");
    ::STRINGS[60] = uString::Const("Jeremiah 14:9");
    ::STRINGS[61] = uString::Const("Come to me, all who labor and are heavy-laden, and I will give you rest. Take my yoke upon you, and learn from me, for I am gentle and lowly in heart, and you will find rest for your souls. For my yoke is easy, and my burden is light.");
    ::STRINGS[62] = uString::Const("Matthew 11:28-30");
    ::STRINGS[63] = uString::Const("Now may the God of peace who brought again from the dead our Lord Jesus, the great shepherd of the sheep, by the blood of the eternal covenant, equip you with everything good that you may do his will, working in us that which is pleasing in his sight, through Jesus Christ, to whom be glory forever and ever. Amen.");
    ::STRINGS[64] = uString::Const("Hebrews 13:20-21");
    ::STRINGS[65] = uString::Const("Be sober-minded, be watchful. Your adversary the devil prowls around like a roaring lion, seeking someone to devour. Resist him, firm in your faith.");
    ::STRINGS[66] = uString::Const("1 Peter 5:8-9a");
    ::STRINGS[67] = uString::Const("At the end of the reading is said");
    ::STRINGS[68] = uString::Const("The Word of the Lord");
    ::STRINGS[69] = uString::Const("Thanks be to God.");
    ::STRINGS[70] = uString::Const("A period of silence may follow. A suitable hymn may be sung");
    ::STRINGS[71] = uString::Const("Into your hands, O Lord, I commend my spirit;");
    ::STRINGS[72] = uString::Const("For you have redeemed me, O Lord, O God of truth.");
    ::STRINGS[73] = uString::Const("Keep me as the apple of your eye;");
    ::STRINGS[74] = uString::Const("Hide me under the shadow of your wings.");
    ::STRINGS[75] = uString::Const("Lord, have mercy [upon us].");
    ::STRINGS[76] = uString::Const("Christ, have mercy [upon us].");
    ::STRINGS[77] = uString::Const("Officient and People");
    ::STRINGS[78] = uString::Const("or this");
    ::STRINGS[79] = uString::Const("O Lord, hear our prayer;");
    ::STRINGS[80] = uString::Const("And let our cry come to you.");
    ::STRINGS[81] = uString::Const("Let us pray.");
    ::STRINGS[82] = uString::Const("The Officiant then says one or more of the following Collects. Other appropriate Collects may also be used.");
    ::STRINGS[83] = uString::Const("Visit this place, O Lord, and drive far from it all snares of the enemy; let your holy angels dwell with us to preserve us in peace; and let your blessing be upon us always; through Jesus Christ our Lord.");
    ::STRINGS[84] = uString::Const("Amen");
    ::STRINGS[85] = uString::Const("Lighten our darkness, we beseech you, O Lord; and by your great mercy defend us from all perils and dangers of this night; for the love of your only Son, our Savior Jesus Christ.");
    ::STRINGS[86] = uString::Const("Be present, O merciful God, and protect us through the hours of this night, so that we who are wearied by the changes and chances of this life may rest in your eternal changelessness; through Jesus Christ our Lord.");
    ::STRINGS[87] = uString::Const("Look down, O Lord, from your heavenly throne, illumine this night with your celestial brightness, and from the children of light banish the deeds of darkness; through Jesus Christ our Lord.");
    ::STRINGS[88] = uString::Const("A Collect for Saturdays");
    ::STRINGS[89] = uString::Const("We give you thanks, O God, for revealing your Son Jesus Christ to us by the light of his resurrection: Grant that as we sing your glory at the close of this day, our joy may abound in the morning as we celebrate the Paschal mystery; through Jesus Christ our Lord.");
    ::STRINGS[90] = uString::Const("One of the following prayers may be added");
    ::STRINGS[91] = uString::Const("Keep watch, dear Lord, with those who work, or watch, or weep this night, and give your angels charge over those who sleep. Tend the sick, Lord Christ; give rest to the weary, bless the dying, soothe the suffering, pity the afflicted, shield the joyous; and all for your love\342\200\231s sake.");
    ::STRINGS[92] = uString::Const("O God, your unfailing providence sustains the world we live in and the life we live: Watch over those, both night and day, who work while others sleep, and grant that we may never forget that our common life depends upon each other\342\200\231s toil; through Jesus Christ our Lord. Amen.");
    ::STRINGS[93] = uString::Const("Silence may be kept and free intercessions and thanksgivings may be offered.");
    ::STRINGS[94] = uString::Const("The Officiant and People say or sing the Song of Simeon (Luke 2:29-32) with this Antiphon");
    ::STRINGS[95] = uString::Const("Guide us waking, O Lord, and guard us sleeping; that awake,");
    ::STRINGS[96] = uString::Const("we may watch with Christ, and asleep we may rest in peace.");
    ::STRINGS[97] = uString::Const("In Easter Season, add");
    ::STRINGS[98] = uString::Const("Alleluia, alleluia, alleluia.");
    ::STRINGS[99] = uString::Const("Lord, now let your servant depart in peace,");
    ::STRINGS[100] = uString::Const("according to your word.");
    ::STRINGS[101] = uString::Const("For my eyes have seen your salvation,");
    ::STRINGS[102] = uString::Const("which you have prepared before the face of all people;");
    ::STRINGS[103] = uString::Const("to be a light to lighten the Gentiles,");
    ::STRINGS[104] = uString::Const("and to be the glory of your people Israel.");
    ::STRINGS[105] = uString::Const("as it was in the beginning, is now, and ever shall be, world");
    ::STRINGS[106] = uString::Const("without end. Amen.");
    ::STRINGS[107] = uString::Const("Guide us waking, O Lord, and guard us sleeping; that awake");
    ::STRINGS[108] = uString::Const("Let us bless the Lord.");
    ::STRINGS[109] = uString::Const("The Officiant concludes with the following");
    ::STRINGS[110] = uString::Const("The Lord Almighty grant us a peaceful night and a perfect end. Amen.");
    ::STRINGS[111] = uString::Const("Or this");
    ::STRINGS[112] = uString::Const("The almighty and merciful Lord, Father, Son, and Holy Spirit,");
    ::STRINGS[113] = uString::Const("bless us and keep us, this night and evermore. Amen.");
    ::STRINGS[114] = uString::Const("Additional Directions");
    ::STRINGS[115] = uString::Const("For those saying Compline every day, particularly in families or other communities, additional short Scriptural readings may be desired. Some appropriate readings include:");
    ::STRINGS[116] = uString::Const("Isaiah 26:3-4");
    ::STRINGS[117] = uString::Const("Isaiah 30:15a");
    ::STRINGS[118] = uString::Const("Matthew 6:31-34");
    ::STRINGS[119] = uString::Const("2 Corinthians 4:6");
    ::STRINGS[120] = uString::Const("1 Thessalonians 5:9-10");
    ::STRINGS[121] = uString::Const("1 Thessalonians 5:23");
    ::STRINGS[122] = uString::Const("Ephesians 4:26-27");
    ::STRINGS[123] = uString::Const("If desired, either version of the Lord\342\200\231s Prayer may conclude with the phrase, \342\200\234deliver us from evil,\342\200\235 omitting the doxology.");
    ::STRINGS[124] = uString::Const("Additional Directives");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ComplinePage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::ComplinePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ComplinePage, temp_eb7), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ComplinePage, temp_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ComplinePage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::ComplinePage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp10_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp11_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp3_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp4_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp5_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp6_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp7_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp8_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::ComplinePage, temp9_Visibility_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ComplinePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ComplinePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ComplinePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ComplinePage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ComplinePage::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ComplinePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::iphod::Page_typeof();
    options.FieldCount = 132;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(ComplinePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ComplinePage", options);
    type->fp_build_ = ComplinePage_build;
    type->fp_cctor_ = ComplinePage__cctor_5_fn;
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

// public ComplinePage(Fuse.Navigation.Router router) :102
void ComplinePage__ctor_9_fn(ComplinePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :108
void ComplinePage__InitializeUX1_fn(ComplinePage* __this)
{
    __this->InitializeUX1();
}

// public ComplinePage New(Fuse.Navigation.Router router) :102
void ComplinePage__New6_fn(::g::Fuse::Navigation::Router* router1, ComplinePage** __retval)
{
    *__retval = ComplinePage::New6(router1);
}

uSStrong<uArray*> ComplinePage::__g_static_nametable1_;
::g::Uno::UX::Selector ComplinePage::__selector0_;
::g::Uno::UX::Selector ComplinePage::__selector1_;
::g::Uno::UX::Selector ComplinePage::__selector2_;
::g::Uno::UX::Selector ComplinePage::__selector3_;

// public ComplinePage(Fuse.Navigation.Router router) [instance] :102
void ComplinePage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :108
void ComplinePage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ComplinePage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"back"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"psalm4"*/]);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"psalm31"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"psalm91"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"psalm134"*/]);
    ::g::PsalmTitle* temp = ::g::PsalmTitle::New6();
    temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, ComplinePage::__selector0());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"psTitle"*/]);
    temp_Text_inst = ::g::iphod_PsalmTitle_Text_Property::New1(temp, ComplinePage::__selector1());
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"psName"*/]);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::iphod_FuseReactiveEach_Items_Property::New1(temp1, ComplinePage::__selector2());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"vss"*/]);
    ::g::SectionTitle* temp2 = ::g::SectionTitle::New4();
    temp2_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp2, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp3, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp4, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp5, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp6, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp7, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp8, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp9, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp10, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Visibility_inst = ::g::iphod_FuseElementsElement_Visibility_Property::New1(temp11, ComplinePage::__selector3());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"directiveVi...*/]);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"directives"*/]);
    ::g::Fuse::Reactive::JavaScript* temp31 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp32 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp33 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::iphod::Button* temp34 = ::g::iphod::Button::New4();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12, __g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp35 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp36 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::iphod::Title* temp37 = ::g::iphod::Title::New4();
    ::g::Rubric* temp38 = ::g::Rubric::New6();
    ::g::Versical* temp39 = ::g::Versical::New5();
    ::g::Versical* temp40 = ::g::Versical::New5();
    ::g::Rubric* temp41 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp42 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp43 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp44 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp45 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp46 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp47 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp48 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp49 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp50 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp51 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp52 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp53 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp54 = ::g::iphod::Italic::New5();
    ::g::Rubric* temp55 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp56 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp57 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp58 = ::g::iphod::Italic::New5();
    ::g::Versical* temp59 = ::g::Versical::New5();
    ::g::Versical* temp60 = ::g::Versical::New5();
    ::g::Versical* temp61 = ::g::Versical::New5();
    ::g::Versical* temp62 = ::g::Versical::New5();
    ::g::Rubric* temp63 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp64 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp65 = ::g::Rubric::New6();
    ::g::iphod::Button* temp66 = ::g::iphod::Button::New4();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13, __g_nametable1);
    ::g::iphod::Button* temp67 = ::g::iphod::Button::New4();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    ::g::iphod::Button* temp68 = ::g::iphod::Button::New4();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15, __g_nametable1);
    ::g::iphod::Button* temp69 = ::g::iphod::Button::New4();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp17, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp_Text_inst, (uObject*)temp18, __g_nametable1, 3);
    ComplinePage__Template* temp72 = ComplinePage__Template::New2(this, this);
    ComplinePage__Template1* temp73 = ComplinePage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp74 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp19, __g_nametable1, 3);
    ::g::Gloria* temp75 = ::g::Gloria::New5();
    ::g::Rubric* temp76 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp77 = ::g::iphod::Regular::New5();
    ::g::Reference* temp78 = ::g::Reference::New6();
    ::g::iphod::Regular* temp79 = ::g::iphod::Regular::New5();
    ::g::Reference* temp80 = ::g::Reference::New6();
    ::g::iphod::Regular* temp81 = ::g::iphod::Regular::New5();
    ::g::Reference* temp82 = ::g::Reference::New6();
    ::g::iphod::Regular* temp83 = ::g::iphod::Regular::New5();
    ::g::Reference* temp84 = ::g::Reference::New6();
    ::g::Rubric* temp85 = ::g::Rubric::New6();
    ::g::Versical* temp86 = ::g::Versical::New5();
    ::g::Versical* temp87 = ::g::Versical::New5();
    ::g::Rubric* temp88 = ::g::Rubric::New6();
    ::g::Versical* temp89 = ::g::Versical::New5();
    ::g::Versical* temp90 = ::g::Versical::New5();
    ::g::Versical* temp91 = ::g::Versical::New5();
    ::g::Versical* temp92 = ::g::Versical::New5();
    ::g::iphod::Regular* temp93 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp94 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp95 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp96 = ::g::Rubric::New6();
    ::g::LordsPrayerTraditional* temp97 = ::g::LordsPrayerTraditional::New5();
    ::g::Rubric* temp98 = ::g::Rubric::New6();
    ::g::LordsPrayerContemporary* temp99 = ::g::LordsPrayerContemporary::New5();
    ::g::Versical* temp100 = ::g::Versical::New5();
    ::g::Versical* temp101 = ::g::Versical::New5();
    ::g::Versical* temp102 = ::g::Versical::New5();
    ::g::Rubric* temp103 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp104 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp105 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp106 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp107 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp108 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp109 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp110 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp111 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp112 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp113 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp114 = ::g::iphod::Italic::New5();
    ::g::Rubric* temp115 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp116 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp117 = ::g::iphod::Italic::New5();
    ::g::Rubric* temp118 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp119 = ::g::iphod::Regular::New5();
    ::g::iphod::Italic* temp120 = ::g::iphod::Italic::New5();
    ::g::Rubric* temp121 = ::g::Rubric::New6();
    ::g::Rubric* temp122 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp123 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp124 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp125 = ::g::Rubric::New6();
    ::g::iphod::Italic* temp126 = ::g::iphod::Italic::New5();
    ::g::iphod::Regular* temp127 = ::g::iphod::Regular::New5();
    ::g::Indent* temp128 = ::g::Indent::New6();
    ::g::iphod::Regular* temp129 = ::g::iphod::Regular::New5();
    ::g::Indent* temp130 = ::g::Indent::New6();
    ::g::iphod::Regular* temp131 = ::g::iphod::Regular::New5();
    ::g::Indent* temp132 = ::g::Indent::New6();
    ::g::iphod::Regular* temp133 = ::g::iphod::Regular::New5();
    ::g::Indent* temp134 = ::g::Indent::New6();
    ::g::Indent* temp135 = ::g::Indent::New6();
    ::g::iphod::Regular* temp136 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp137 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp138 = ::g::Rubric::New6();
    ::g::iphod::Italic* temp139 = ::g::iphod::Italic::New5();
    ::g::Versical* temp140 = ::g::Versical::New5();
    ::g::Versical* temp141 = ::g::Versical::New5();
    ::g::Rubric* temp142 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp143 = ::g::iphod::Regular::New5();
    ::g::Rubric* temp144 = ::g::Rubric::New6();
    ::g::iphod::Regular* temp145 = ::g::iphod::Regular::New5();
    ::g::iphod::Regular* temp146 = ::g::iphod::Regular::New5();
    ::g::Fuse::Reactive::DataBinding* temp147 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp20, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp148 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Visibility_inst, (uObject*)temp21, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp149 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Visibility_inst, (uObject*)temp22, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp150 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Visibility_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp151 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Visibility_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp152 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Visibility_inst, (uObject*)temp25, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp153 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Visibility_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp154 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Visibility_inst, (uObject*)temp27, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp155 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Visibility_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp156 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Visibility_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::iphod::Button* temp157 = ::g::iphod::Button::New4();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30, __g_nametable1);
    temp31->LineNumber(3);
    temp31->FileName(::STRINGS[21/*"Pages/Compl...*/]);
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::Helpers07079b1d()));
    temp32->LineNumber(4);
    temp32->FileName(::STRINGS[21/*"Pages/Compl...*/]);
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::iphod_bundle::ComplinePage46af91ad()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp34->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp34->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp34, 3);
    temp34->Text(::STRINGS[22/*"Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp34, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    temp37->Value(::STRINGS[23/*"Compline"*/]);
    temp38->Value(::STRINGS[24/*"The Officia...*/]);
    temp39->Speaker(::STRINGS[25/*""*/]);
    temp39->Text(::STRINGS[26/*"Our help is...*/]);
    temp40->Speaker(::STRINGS[27/*"People"*/]);
    temp40->Text(::STRINGS[28/*"The maker o...*/]);
    temp41->Value(::STRINGS[29/*"The Officia...*/]);
    temp42->Value(::STRINGS[30/*"Let us humb...*/]);
    temp43->Value(::STRINGS[31/*"Silence may...*/]);
    temp44->Value(::STRINGS[32/*"Almighty Go...*/]);
    temp45->Value(::STRINGS[33/*"to one anot...*/]);
    temp46->Value(::STRINGS[34/*"that we hav...*/]);
    temp47->Value(::STRINGS[35/*"in thought,...*/]);
    temp48->Value(::STRINGS[36/*"and in what...*/]);
    temp49->Value(::STRINGS[37/*"For the sak...*/]);
    temp50->Value(::STRINGS[38/*"have mercy ...*/]);
    temp51->Value(::STRINGS[39/*"and by the ...*/]);
    temp52->Value(::STRINGS[40/*"raise us up...*/]);
    temp53->Value(::STRINGS[41/*"to the glor...*/]);
    temp54->Value(::STRINGS[42/*"Amen."*/]);
    temp55->Value(::STRINGS[43/*"The Officia...*/]);
    temp56->Value(::STRINGS[44/*"May Almight...*/]);
    temp57->Value(::STRINGS[45/*"and the gra...*/]);
    temp58->Value(::STRINGS[42/*"Amen."*/]);
    temp59->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp59->Text(::STRINGS[47/*"O God, make...*/]);
    temp60->Speaker(::STRINGS[27/*"People"*/]);
    temp60->Text(::STRINGS[48/*"O Lord, mak...*/]);
    temp61->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp61->Text(::STRINGS[49/*"Glory to th...*/]);
    temp62->Speaker(::STRINGS[27/*"People"*/]);
    temp62->Text(::STRINGS[50/*"as it was i...*/]);
    temp63->Value(::STRINGS[51/*"Except in L...*/]);
    temp64->Value(::STRINGS[52/*"Alleluia"*/]);
    temp65->Value(::STRINGS[53/*"One or more...*/]);
    temp66->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp66->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 3);
    temp66->Text(::STRINGS[54/*"Psalm 4"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp66, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp67->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp67->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp67, 3);
    temp67->Text(::STRINGS[55/*"Psalm 31:1-5"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp67, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp68->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp68->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp68, 3);
    temp68->Text(::STRINGS[56/*"Psalm 91"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp68, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp69->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp69, 3);
    temp69->Text(::STRINGS[57/*"Psalm 134"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp69, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp74);
    temp76->Value(::STRINGS[58/*"One of the ...*/]);
    temp77->Value(::STRINGS[59/*"You, O Lord...*/]);
    temp77->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp78->Value(::STRINGS[60/*"Jeremiah 14:9"*/]);
    temp79->Value(::STRINGS[61/*"Come to me,...*/]);
    temp79->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp80->Value(::STRINGS[62/*"Matthew 11:...*/]);
    temp81->Value(::STRINGS[63/*"Now may the...*/]);
    temp81->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp82->Value(::STRINGS[64/*"Hebrews 13:...*/]);
    temp83->Value(::STRINGS[65/*"Be sober-mi...*/]);
    temp83->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 2.0f, 0.0f));
    temp84->Value(::STRINGS[66/*"1 Peter 5:8...*/]);
    temp85->Value(::STRINGS[67/*"At the end ...*/]);
    temp86->Speaker(::STRINGS[25/*""*/]);
    temp86->Text(::STRINGS[68/*"The Word of...*/]);
    temp87->Speaker(::STRINGS[27/*"People"*/]);
    temp87->Text(::STRINGS[69/*"Thanks be t...*/]);
    temp88->Value(::STRINGS[70/*"A period of...*/]);
    temp89->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp89->Text(::STRINGS[71/*"Into your h...*/]);
    temp90->Speaker(::STRINGS[27/*"People"*/]);
    temp90->Text(::STRINGS[72/*"For you hav...*/]);
    temp91->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp91->Text(::STRINGS[73/*"Keep me as ...*/]);
    temp92->Speaker(::STRINGS[27/*"People"*/]);
    temp92->Text(::STRINGS[74/*"Hide me und...*/]);
    temp93->Value(::STRINGS[75/*"Lord, have ...*/]);
    temp94->Value(::STRINGS[76/*"Christ, hav...*/]);
    temp95->Value(::STRINGS[75/*"Lord, have ...*/]);
    temp96->Value(::STRINGS[77/*"Officient a...*/]);
    temp98->Value(::STRINGS[78/*"or this"*/]);
    temp100->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp100->Text(::STRINGS[79/*"O Lord, hea...*/]);
    temp101->Speaker(::STRINGS[27/*"People"*/]);
    temp101->Text(::STRINGS[80/*"And let our...*/]);
    temp102->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp102->Text(::STRINGS[81/*"Let us pray."*/]);
    temp103->Value(::STRINGS[82/*"The Officia...*/]);
    temp104->Value(::STRINGS[83/*"Visit this ...*/]);
    temp105->Value(::STRINGS[84/*"Amen"*/]);
    temp106->Value(::STRINGS[85/*"Lighten our...*/]);
    temp107->Value(::STRINGS[84/*"Amen"*/]);
    temp108->Value(::STRINGS[86/*"Be present,...*/]);
    temp109->Value(::STRINGS[84/*"Amen"*/]);
    temp110->Value(::STRINGS[87/*"Look down, ...*/]);
    temp111->Value(::STRINGS[84/*"Amen"*/]);
    temp112->Value(::STRINGS[88/*"A Collect f...*/]);
    temp113->Value(::STRINGS[89/*"We give you...*/]);
    temp114->Value(::STRINGS[84/*"Amen"*/]);
    temp115->Value(::STRINGS[90/*"One of the ...*/]);
    temp116->Value(::STRINGS[91/*"Keep watch,...*/]);
    temp117->Value(::STRINGS[84/*"Amen"*/]);
    temp118->Value(::STRINGS[78/*"or this"*/]);
    temp119->Value(::STRINGS[92/*"O God, your...*/]);
    temp120->Value(::STRINGS[84/*"Amen"*/]);
    temp121->Value(::STRINGS[93/*"Silence may...*/]);
    temp122->Value(::STRINGS[94/*"The Officia...*/]);
    temp123->Value(::STRINGS[95/*"Guide us wa...*/]);
    temp124->Value(::STRINGS[96/*"we may watc...*/]);
    temp125->Value(::STRINGS[97/*"In Easter S...*/]);
    temp126->Value(::STRINGS[98/*"Alleluia, a...*/]);
    temp127->Value(::STRINGS[99/*"Lord, now l...*/]);
    temp128->Value(::STRINGS[100/*"according t...*/]);
    temp129->Value(::STRINGS[101/*"For my eyes...*/]);
    temp130->Value(::STRINGS[102/*"which you h...*/]);
    temp131->Value(::STRINGS[103/*"to be a lig...*/]);
    temp132->Value(::STRINGS[104/*"and to be t...*/]);
    temp133->Value(::STRINGS[49/*"Glory to th...*/]);
    temp134->Value(::STRINGS[105/*"as it was i...*/]);
    temp135->Value(::STRINGS[106/*"without end...*/]);
    temp136->Value(::STRINGS[107/*"Guide us wa...*/]);
    temp137->Value(::STRINGS[96/*"we may watc...*/]);
    temp138->Value(::STRINGS[97/*"In Easter S...*/]);
    temp139->Value(::STRINGS[98/*"Alleluia, a...*/]);
    temp140->Speaker(::STRINGS[46/*"Officiant"*/]);
    temp140->Text(::STRINGS[108/*"Let us bles...*/]);
    temp141->Speaker(::STRINGS[27/*"People"*/]);
    temp141->Text(::STRINGS[69/*"Thanks be t...*/]);
    temp142->Value(::STRINGS[109/*"The Officia...*/]);
    temp143->Value(::STRINGS[110/*"The Lord Al...*/]);
    temp144->Value(::STRINGS[111/*"Or this"*/]);
    temp145->Value(::STRINGS[112/*"The almight...*/]);
    temp146->Value(::STRINGS[113/*"bless us an...*/]);
    temp2->Value(::STRINGS[114/*"Additional ...*/]);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp147);
    temp3->Value(::STRINGS[115/*"For those s...*/]);
    temp3->TextWrapping(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp148);
    temp4->Value(::STRINGS[116/*"Isaiah 26:3-4"*/]);
    temp4->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp149);
    temp5->Value(::STRINGS[117/*"Isaiah 30:15a"*/]);
    temp5->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp150);
    temp6->Value(::STRINGS[118/*"Matthew 6:3...*/]);
    temp6->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp151);
    temp7->Value(::STRINGS[119/*"2 Corinthia...*/]);
    temp7->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp152);
    temp8->Value(::STRINGS[120/*"1 Thessalon...*/]);
    temp8->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp153);
    temp9->Value(::STRINGS[121/*"1 Thessalon...*/]);
    temp9->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp154);
    temp10->Value(::STRINGS[122/*"Ephesians 4...*/]);
    temp10->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp155);
    temp11->Value(::STRINGS[123/*"If desired,...*/]);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp156);
    temp157->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp157->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp157, 3);
    temp157->Text(::STRINGS[124/*"Additional ...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp157, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
}

// public ComplinePage New(Fuse.Navigation.Router router) [static] :102
ComplinePage* ComplinePage::New6(::g::Fuse::Navigation::Router* router1)
{
    ComplinePage* obj1 = (ComplinePage*)uNew(ComplinePage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

} // ::g
