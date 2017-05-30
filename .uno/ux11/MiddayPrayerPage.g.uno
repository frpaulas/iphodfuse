[Uno.Compiler.UxGenerated]
public partial class MiddayPrayerPage: iphod.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MiddayPrayerPage __parent;
        [Uno.WeakReference] internal readonly MiddayPrayerPage __parentInstance;
        public Template(MiddayPrayerPage parent, MiddayPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Psalm1();
            __self_Value_inst = new iphod_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("first");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_Text_inst = new iphod_Psalm1_Text_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("number");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Text";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MiddayPrayerPage __parent;
        [Uno.WeakReference] internal readonly MiddayPrayerPage __parentInstance;
        public Template1(MiddayPrayerPage parent, MiddayPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Psalm2();
            __self_Value_inst = new iphod_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("second");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp_Text_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp2_Visibility_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp3_Visibility_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Reactive.EventBinding temp_eb14;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb11",
        "temp_eb12",
        "temp_eb13",
        "temp_eb14",
        "temp_eb15",
        "temp_eb16"
    };
    static MiddayPrayerPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MiddayPrayerPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Data("back");
        var temp5 = new global::Fuse.Reactive.Data("psalm119");
        var temp6 = new global::Fuse.Reactive.Data("psalm121");
        var temp7 = new global::Fuse.Reactive.Data("psalm124");
        var temp8 = new global::Fuse.Reactive.Data("psalm126");
        var temp = new global::PsalmTitle();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("psTitle");
        temp_Text_inst = new iphod_PsalmTitle_Text_Property(temp, __selector1);
        var temp10 = new global::Fuse.Reactive.Data("psName");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new iphod_FuseReactiveEach_Items_Property(temp1, __selector2);
        var temp11 = new global::Fuse.Reactive.Data("vss");
        var temp2 = new global::SectionTitle();
        temp2_Visibility_inst = new iphod_FuseElementsElement_Visibility_Property(temp2, __selector3);
        var temp12 = new global::Fuse.Reactive.Data("directiveVisibility");
        var temp3 = new global::Fuse.Controls.Text();
        temp3_Visibility_inst = new iphod_FuseElementsElement_Visibility_Property(temp3, __selector3);
        var temp13 = new global::Fuse.Reactive.Data("directiveVisibility");
        var temp14 = new global::Fuse.Reactive.Data("directives");
        var temp15 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp16 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new global::Fuse.Controls.DockPanel();
        var temp18 = new global::iphod.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        var temp19 = new global::Fuse.Controls.ScrollView();
        var temp20 = new global::Fuse.Controls.StackPanel();
        var temp21 = new global::iphod.Title();
        var temp22 = new global::Versical();
        var temp23 = new global::Versical();
        var temp24 = new global::Versical();
        var temp25 = new global::Versical();
        var temp26 = new global::Rubric();
        var temp27 = new global::Versical();
        var temp28 = new global::Rubric();
        var temp29 = new global::iphod.Button();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp5, __g_nametable);
        var temp30 = new global::iphod.Button();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp6, __g_nametable);
        var temp31 = new global::iphod.Button();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
        var temp32 = new global::iphod.Button();
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp8, __g_nametable);
        var temp33 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp34 = new global::Fuse.Reactive.DataBinding(temp_Text_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp35 = new Template(this, this);
        var temp36 = new Template1(this, this);
        var temp37 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp38 = new global::Gloria();
        var temp39 = new global::Rubric();
        var temp40 = new global::iphod.Regular();
        var temp41 = new global::Reference();
        var temp42 = new global::iphod.Regular();
        var temp43 = new global::Reference();
        var temp44 = new global::iphod.Regular();
        var temp45 = new global::Reference();
        var temp46 = new global::Rubric();
        var temp47 = new global::Versical();
        var temp48 = new global::Versical();
        var temp49 = new global::Rubric();
        var temp50 = new global::Rubric();
        var temp51 = new global::Versical();
        var temp52 = new global::Versical();
        var temp53 = new global::iphod.Regular();
        var temp54 = new global::iphod.Italic();
        var temp55 = new global::iphod.Regular();
        var temp56 = new global::Rubric();
        var temp57 = new global::LordsPrayerTraditional();
        var temp58 = new global::Rubric();
        var temp59 = new global::LordsPrayerContemporary();
        var temp60 = new global::Versical();
        var temp61 = new global::Versical();
        var temp62 = new global::Versical();
        var temp63 = new global::Rubric();
        var temp64 = new global::iphod.Regular();
        var temp65 = new global::iphod.Italic();
        var temp66 = new global::iphod.Regular();
        var temp67 = new global::iphod.Italic();
        var temp68 = new global::iphod.Regular();
        var temp69 = new global::iphod.Italic();
        var temp70 = new global::Rubric();
        var temp71 = new global::Versical();
        var temp72 = new global::Versical();
        var temp73 = new global::Rubric();
        var temp74 = new global::Rubric();
        var temp75 = new global::iphod.Regular();
        var temp76 = new global::iphod.Italic();
        var temp77 = new global::Reference();
        var temp78 = new global::Fuse.Reactive.DataBinding(temp2_Visibility_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp79 = new global::Fuse.Reactive.DataBinding(temp3_Visibility_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp80 = new global::iphod.Button();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp14, __g_nametable);
        temp15.LineNumber = 3;
        temp15.FileName = "Pages/MiddayPrayerPage.ux";
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Modules/Helpers.js"));
        temp16.LineNumber = 4;
        temp16.FileName = "Pages/MiddayPrayerPage.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/MiddayPrayerPage.js"));
        temp17.Children.Add(temp18);
        temp18.Margin = float4(10f, 10f, 10f, 10f);
        temp18.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Bottom);
        temp18.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb11.OnEvent);
        temp18.Bindings.Add(temp_eb11);
        temp19.Children.Add(temp20);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp20.Children.Add(temp23);
        temp20.Children.Add(temp24);
        temp20.Children.Add(temp25);
        temp20.Children.Add(temp26);
        temp20.Children.Add(temp27);
        temp20.Children.Add(temp28);
        temp20.Children.Add(temp29);
        temp20.Children.Add(temp30);
        temp20.Children.Add(temp31);
        temp20.Children.Add(temp32);
        temp20.Children.Add(temp);
        temp20.Children.Add(temp1);
        temp20.Children.Add(temp38);
        temp20.Children.Add(temp39);
        temp20.Children.Add(temp40);
        temp20.Children.Add(temp41);
        temp20.Children.Add(temp42);
        temp20.Children.Add(temp43);
        temp20.Children.Add(temp44);
        temp20.Children.Add(temp45);
        temp20.Children.Add(temp46);
        temp20.Children.Add(temp47);
        temp20.Children.Add(temp48);
        temp20.Children.Add(temp49);
        temp20.Children.Add(temp50);
        temp20.Children.Add(temp51);
        temp20.Children.Add(temp52);
        temp20.Children.Add(temp53);
        temp20.Children.Add(temp54);
        temp20.Children.Add(temp55);
        temp20.Children.Add(temp56);
        temp20.Children.Add(temp57);
        temp20.Children.Add(temp58);
        temp20.Children.Add(temp59);
        temp20.Children.Add(temp60);
        temp20.Children.Add(temp61);
        temp20.Children.Add(temp62);
        temp20.Children.Add(temp63);
        temp20.Children.Add(temp64);
        temp20.Children.Add(temp65);
        temp20.Children.Add(temp66);
        temp20.Children.Add(temp67);
        temp20.Children.Add(temp68);
        temp20.Children.Add(temp69);
        temp20.Children.Add(temp70);
        temp20.Children.Add(temp71);
        temp20.Children.Add(temp72);
        temp20.Children.Add(temp73);
        temp20.Children.Add(temp74);
        temp20.Children.Add(temp75);
        temp20.Children.Add(temp76);
        temp20.Children.Add(temp77);
        temp20.Children.Add(temp2);
        temp20.Children.Add(temp3);
        temp20.Children.Add(temp80);
        temp21.Value = "Midday Prayer";
        temp22.Speaker = "Officiant";
        temp22.Text = "O God, make speed to save us.";
        temp23.Speaker = "People";
        temp23.Text = "O Lord, make haste to help us.";
        temp24.Speaker = "Officiant";
        temp24.Text = "Glory to the Father, and to the Son, and to the Holy Spirit;";
        temp25.Speaker = "People";
        temp25.Text = "as it was in the beginning, is now, and ever shall be, world without end. Amen.";
        temp26.Value = "Except in Lent, add";
        temp27.Speaker = "";
        temp27.Text = "Alleluia";
        temp28.Value = "One or more of the following Psalms is sung or said. Other suitable selections include Psalms 19, 67, one or more sections of Psalm 119, or a selection from Psalms 120 through 133.";
        temp29.Margin = float4(1f, 1f, 1f, 1f);
        temp29.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp29, Fuse.Layouts.Dock.Bottom);
        temp29.Text = "Psalm 119";
        global::Fuse.Gestures.Clicked.AddHandler(temp29, temp_eb12.OnEvent);
        temp29.Bindings.Add(temp_eb12);
        temp30.Margin = float4(1f, 1f, 1f, 1f);
        temp30.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp30, Fuse.Layouts.Dock.Bottom);
        temp30.Text = "Psalm 121";
        global::Fuse.Gestures.Clicked.AddHandler(temp30, temp_eb13.OnEvent);
        temp30.Bindings.Add(temp_eb13);
        temp31.Margin = float4(1f, 1f, 1f, 1f);
        temp31.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp31, Fuse.Layouts.Dock.Bottom);
        temp31.Text = "Psalm 124";
        global::Fuse.Gestures.Clicked.AddHandler(temp31, temp_eb14.OnEvent);
        temp31.Bindings.Add(temp_eb14);
        temp32.Margin = float4(1f, 1f, 1f, 1f);
        temp32.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp32, Fuse.Layouts.Dock.Bottom);
        temp32.Text = "Psalm 126";
        global::Fuse.Gestures.Clicked.AddHandler(temp32, temp_eb15.OnEvent);
        temp32.Bindings.Add(temp_eb15);
        temp.Bindings.Add(temp33);
        temp.Bindings.Add(temp34);
        temp1.Templates.Add(temp35);
        temp1.Templates.Add(temp36);
        temp1.Bindings.Add(temp37);
        temp39.Value = "One of the following, or some other suitable passage of Scripture, is read";
        temp40.Value = "Jesus said, “Now is the judgment of this world; now will the ruler of this world be cast out. And I, when I am lifted up from the earth, will draw all people to myself.”";
        temp40.Margin = float4(2f, 0f, 2f, 0f);
        temp41.Value = "John 12:31-32";
        temp42.Value = "If anyone is in Christ, he is a new creation. The old has passed away; behold, the new has come. All this is from God, who through Christ reconciled us to himself and gave us the ministry of reconciliation.";
        temp42.Margin = float4(2f, 0f, 2f, 0f);
        temp43.Value = "2 Corinthians 5:17-18";
        temp44.Value = "From the rising of the sun to its setting my Name will be great among the nations, and in every place incense will be offered to my Name, and a pure offering. For my Name will be great among the nations, says the Lord of Hosts.";
        temp44.Margin = float4(2f, 0f, 2f, 0f);
        temp45.Value = "Malachi 1:11";
        temp46.Value = "At the end of the reading is said";
        temp47.Speaker = "";
        temp47.Text = "The Word of the Lord";
        temp48.Speaker = "People";
        temp48.Text = "Thanks be to God.";
        temp49.Value = "A meditation, silent or spoken, may follow.";
        temp50.Value = "The Officiant then begins the Prayers";
        temp51.Speaker = "Officiant";
        temp51.Text = "I will bless the Lord at all times";
        temp52.Speaker = "People";
        temp52.Text = "His praise shall continually be in my mouth";
        temp53.Value = "Lord, have mercy [upon us].";
        temp54.Value = "Christ, have mercy [upon us].";
        temp55.Value = "Lord, have mercy [upon us].";
        temp56.Value = "Officient and People";
        temp58.Value = "or this";
        temp60.Speaker = "Officiant";
        temp60.Text = "O Lord, hear our prayer;";
        temp61.Speaker = "People";
        temp61.Text = "And let our cry come to you.";
        temp62.Speaker = "Officiant";
        temp62.Text = "Let us pray.";
        temp63.Value = "The Officiant then says one or more of the following Collects. Other appropriate Collects may also be used.";
        temp64.Value = "Blessed Savior, at this hour you hung upon the cross, stretching out your loving arms: Grant that all the peoples of the earth may look to you and be saved; for your tender mercies’ sake.";
        temp65.Value = "Amen";
        temp66.Value = "Almighty Savior, who at mid-day called your servant Saint Paul to be an apostle to the Gentiles: We pray you to illumine the world with the radiance of your glory, that all nations may come and worship you; for you live and reign with the Father and the Holy Spirit, one God, for ever and ever.";
        temp67.Value = "Amen";
        temp68.Value = "Father of all mercies, you revealed your boundless compassion to your apostle Saint Peter in a threefold vision: Forgive our unbelief, we pray, and so strengthen our hearts and enkindle our zeal, that we may fervently desire the salvation of all people, and diligently labor in the extension of your kingdom; through him who gave himself for the life of the world, your Son our Savior Jesus Christ.";
        temp69.Value = "Amen";
        temp70.Value = "Silence may be kept, and other intersessions and thanksgiving may be offered";
        temp71.Speaker = "Officiant";
        temp71.Text = "Let us bless the Lord";
        temp72.Speaker = "People";
        temp72.Text = "Thanks be to God";
        temp73.Value = "From Easter Day through the Day of Pentecost “Alleluia, alleluia” may be added to the preceding versicle and response.";
        temp74.Value = "The Officiant may conclude with this, or one of the other Graces from Morning and Evening Prayer.";
        temp75.Value = "The grace of our Lord Jesus Christ, and the love of God, and the fellowship of the Holy Spirit, be with us all evermore.";
        temp76.Value = "Amen.";
        temp77.Value = "2 Corinthians 13:14";
        temp2.Value = "Additional Directions";
        temp2.Bindings.Add(temp78);
        temp3.Value = "If desired, either version of the Lord’s Prayer may conclude with the phrase, “deliver us from evil,” omitting the doxology.";
        temp3.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp3.Bindings.Add(temp79);
        temp80.Margin = float4(1f, 1f, 1f, 1f);
        temp80.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp80, Fuse.Layouts.Dock.Bottom);
        temp80.Text = "Additional Directives";
        global::Fuse.Gestures.Clicked.AddHandler(temp80, temp_eb16.OnEvent);
        temp80.Bindings.Add(temp_eb16);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb11);
        __g_nametable.Objects.Add(temp_eb12);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(temp_eb14);
        __g_nametable.Objects.Add(temp_eb15);
        __g_nametable.Objects.Add(temp_eb16);
        this.Children.Add(temp15);
        this.Children.Add(temp16);
        this.Children.Add(temp17);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Visibility";
}
