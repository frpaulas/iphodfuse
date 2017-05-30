[Uno.Compiler.UxGenerated]
public partial class MorningPrayerPage: iphod.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Jubilate();
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template1(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Venite();
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template2(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::VeniteLent();
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template3(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::PaschaNostrum();
            return __self;
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<object> temp5_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    internal global::Fuse.Reactive.EventBinding temp_eb18;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb17",
        "temp_eb18"
    };
    static MorningPrayerPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MorningPrayerPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp6 = new global::Fuse.Reactive.Data("setup");
        var temp7 = new global::Fuse.Reactive.Data("back");
        var temp = new global::iphod.Title();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("title");
        var temp9 = new global::Fuse.Reactive.Data("openingSentence");
        var temp1 = new global::iphod.Regular();
        temp1_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp10 = new global::Fuse.Reactive.Member(temp9, "vss");
        var temp11 = new global::Fuse.Reactive.Data("openingSentence");
        var temp2 = new global::Reference();
        temp2_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp12 = new global::Fuse.Reactive.Member(temp11, "ref");
        var temp3 = new global::RubricBlack();
        temp3_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp3, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("nameOfSeason");
        var temp4 = new global::iphod.Regular();
        temp4_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp4, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("antiphon");
        var temp5 = new global::Fuse.Reactive.Match();
        temp5_Value_inst = new iphod_FuseReactiveMatch_Value_Property(temp5, __selector0);
        var temp15 = new global::Fuse.Reactive.Data("invitatoryCanticle");
        var temp16 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new global::Fuse.Navigation.Activated();
        var temp19 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp6, __g_nametable);
        var temp20 = new global::Fuse.Controls.DockPanel();
        var temp21 = new global::iphod.Button();
        temp_eb18 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
        var temp22 = new global::Fuse.Controls.ScrollView();
        var temp23 = new global::Fuse.Controls.StackPanel();
        var temp24 = new global::iphod.Title();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Rubric();
        var temp27 = new global::SectionTitle();
        var temp28 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp29 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Confession();
        var temp31 = new global::SectionTitle();
        var temp32 = new global::Rubric();
        var temp33 = new global::Invitatory();
        var temp34 = new global::Rubric();
        var temp35 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp36 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp37 = new global::Fuse.Reactive.Case();
        var temp38 = new Template(this, this);
        var temp39 = new global::Fuse.Reactive.Case();
        var temp40 = new Template1(this, this);
        var temp41 = new global::Fuse.Reactive.Case();
        var temp42 = new Template2(this, this);
        var temp43 = new global::Fuse.Reactive.Case();
        var temp44 = new Template3(this, this);
        var temp45 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp15, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp46 = new global::Rubric();
        var temp47 = new global::SectionTitle();
        temp16.LineNumber = 3;
        temp16.FileName = "Pages/MorningPrayerPage.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Modules/Helpers.js"));
        temp17.LineNumber = 4;
        temp17.FileName = "Pages/MorningPrayerPage.ux";
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/MorningPrayerPage.js"));
        temp18.Actions.Add(temp19);
        temp18.Bindings.Add(temp_eb17);
        temp19.Handler += temp_eb17.OnEvent;
        temp20.Children.Add(temp21);
        temp21.Margin = float4(10f, 10f, 10f, 10f);
        temp21.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Bottom);
        temp21.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb18.OnEvent);
        temp21.Bindings.Add(temp_eb18);
        temp22.Children.Add(temp23);
        temp23.Children.Add(temp24);
        temp23.Children.Add(temp);
        temp23.Children.Add(temp26);
        temp23.Children.Add(temp27);
        temp23.Children.Add(temp1);
        temp23.Children.Add(temp2);
        temp23.Children.Add(temp30);
        temp23.Children.Add(temp31);
        temp23.Children.Add(temp32);
        temp23.Children.Add(temp33);
        temp23.Children.Add(temp34);
        temp23.Children.Add(temp3);
        temp23.Children.Add(temp4);
        temp23.Children.Add(temp5);
        temp23.Children.Add(temp46);
        temp23.Children.Add(temp47);
        temp24.Value = "Morning Prayer";
        temp.FontSize = 12f;
        temp.Bindings.Add(temp25);
        temp26.Value = "The Officiant may begin Morning Prayer by reading an sentence of Scripture found on pages 17-19 or another appropriate Scripture. The Confession of Sin may be said, or the Office may continue with “O Lord, open our lips.”";
        temp27.Value = "Opening Sentences of Scripture";
        temp1.Bindings.Add(temp28);
        temp2.Bindings.Add(temp29);
        temp31.Value = "The Invitatory";
        temp32.Value = "All stand";
        temp34.Value = "Then follows the Venite. Alternatively, the Jubilate may be used.\nThese seasonal antiphons may be sung or said before and after the Invitatory Psalm.";
        temp3.Bindings.Add(temp35);
        temp4.Bindings.Add(temp36);
        temp5.Cases.Add(temp37);
        temp5.Cases.Add(temp39);
        temp5.Cases.Add(temp41);
        temp5.Cases.Add(temp43);
        temp5.Bindings.Add(temp45);
        temp37.String = "Jubilate";
        temp37.Factories.Add(temp38);
        temp39.String = "Venite";
        temp39.Factories.Add(temp40);
        temp41.String = "VeniteLent";
        temp41.Factories.Add(temp42);
        temp43.String = "PaschaNostrum";
        temp43.Factories.Add(temp44);
        temp46.Value = "Then follows";
        temp47.Value = "The Psalm or Psalms Appointed";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb17);
        __g_nametable.Objects.Add(temp_eb18);
        this.Children.Add(temp16);
        this.Children.Add(temp17);
        this.Children.Add(temp18);
        this.Children.Add(temp20);
        this.Children.Add(temp22);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
