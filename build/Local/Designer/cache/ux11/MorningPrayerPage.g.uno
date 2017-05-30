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
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template4(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::PsalmTitle();
            __self_Value_inst = new iphod_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("title");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_Text_inst = new iphod_PsalmTitle_Text_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("name");
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
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template5(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template6: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template5 __parent;
            [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
            public Template6(Template5 parent, Fuse.Reactive.Each parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __self_Value_inst;
            global::Uno.UX.Property<string> __self_Text_inst;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
            };
            static Template6()
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
        public partial class Template7: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template5 __parent;
            [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
            public Template7(Template5 parent, Fuse.Reactive.Each parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __self_Value_inst;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
            };
            static Template7()
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
        global::Uno.UX.Property<object> __self_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Reactive.Each();
            __self_Items_inst = new iphod_FuseReactiveEach_Items_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("vss");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new Template6(this, __self);
            var temp2 = new Template7(this, __self);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Templates.Add(temp1);
            __self.Templates.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MorningPrayerPage __parent;
        [Uno.WeakReference] internal readonly MorningPrayerPage __parentInstance;
        public Template6(MorningPrayerPage parent, MorningPrayerPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Value_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::PsalmTitle();
            var temp = new global::Fuse.Reactive.Data("chap");
            var temp1 = ":";
            var temp2 = new global::Fuse.Reactive.Constant(temp1);
            var temp3 = new global::Fuse.Reactive.Data("vsFrom");
            var temp4 = "-";
            var temp5 = new global::Fuse.Reactive.Constant(temp4);
            var temp6 = new global::Fuse.Reactive.Data("vsTo");
            var temp7 = new global::Fuse.Reactive.Add(temp5, temp6);
            var temp8 = new global::Fuse.Reactive.Add(temp3, temp7);
            var temp9 = new global::Fuse.Reactive.Add(temp2, temp8);
            __self_Value_inst = new iphod_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp10 = new global::Fuse.Reactive.Add(temp, temp9);
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_Text_inst = new iphod_PsalmTitle_Text_Property(__self, __selector1);
            var temp11 = new global::Fuse.Reactive.Data("title");
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Bindings.Add(temp12);
            __self.Bindings.Add(temp13);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Text";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<object> temp5_Value_inst;
    global::Uno.UX.Property<object> temp6_Items_inst;
    global::Uno.UX.Property<object> temp7_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb17"
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
        var temp8 = new global::Fuse.Reactive.Data("setup");
        var temp = new global::iphod.Title();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("title");
        var temp10 = new global::Fuse.Reactive.Data("openingSentence");
        var temp1 = new global::iphod.Regular();
        temp1_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp11 = new global::Fuse.Reactive.Member(temp10, "vss");
        var temp12 = new global::Fuse.Reactive.Data("openingSentence");
        var temp2 = new global::Reference();
        temp2_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp13 = new global::Fuse.Reactive.Member(temp12, "ref");
        var temp3 = new global::RubricBlack();
        temp3_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp3, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("nameOfSeason");
        var temp4 = new global::iphod.Regular();
        temp4_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp4, __selector0);
        var temp15 = new global::Fuse.Reactive.Data("antiphon");
        var temp5 = new global::Fuse.Reactive.Match();
        temp5_Value_inst = new iphod_FuseReactiveMatch_Value_Property(temp5, __selector0);
        var temp16 = new global::Fuse.Reactive.Data("invitatoryCanticle");
        var temp6 = new global::Fuse.Reactive.Each();
        temp6_Items_inst = new iphod_FuseReactiveEach_Items_Property(temp6, __selector1);
        var temp17 = new global::Fuse.Reactive.Data("psalms");
        var temp7 = new global::Fuse.Reactive.Each();
        temp7_Items_inst = new iphod_FuseReactiveEach_Items_Property(temp7, __selector1);
        var temp18 = new global::Fuse.Reactive.Data("firstReading");
        var temp19 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp20 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp21 = new global::Fuse.Navigation.Activated();
        var temp22 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp8, __g_nametable);
        var temp23 = new global::Fuse.Controls.ScrollView();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::iphod.Title();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Rubric();
        var temp28 = new global::SectionTitle();
        var temp29 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Confession();
        var temp32 = new global::SectionTitle();
        var temp33 = new global::Rubric();
        var temp34 = new global::Invitatory();
        var temp35 = new global::Rubric();
        var temp36 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp37 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp15, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp38 = new global::Fuse.Reactive.Case();
        var temp39 = new Template(this, this);
        var temp40 = new global::Fuse.Reactive.Case();
        var temp41 = new Template1(this, this);
        var temp42 = new global::Fuse.Reactive.Case();
        var temp43 = new Template2(this, this);
        var temp44 = new global::Fuse.Reactive.Case();
        var temp45 = new Template3(this, this);
        var temp46 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp16, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp47 = new global::Rubric();
        var temp48 = new global::SectionTitle();
        var temp49 = new Template4(this, this);
        var temp50 = new Template5(this, this);
        var temp51 = new global::Fuse.Reactive.DataBinding(temp6_Items_inst, temp17, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp52 = new global::Rubric();
        var temp53 = new global::Gloria();
        var temp54 = new global::SectionTitle();
        var temp55 = new global::Rubric();
        var temp56 = new Template6(this, this);
        var temp57 = new global::Fuse.Reactive.DataBinding(temp7_Items_inst, temp18, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp58 = new global::Rubric();
        var temp59 = new global::TheWordOfTheLord();
        var temp60 = new global::Rubric();
        var temp61 = new global::Versical();
        var temp62 = new global::Rubric();
        temp19.LineNumber = 3;
        temp19.FileName = "Pages/MorningPrayerPage.ux";
        temp19.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Modules/Helpers.js"));
        temp20.LineNumber = 4;
        temp20.FileName = "Pages/MorningPrayerPage.ux";
        temp20.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MorningPrayerPage.js"));
        temp21.Actions.Add(temp22);
        temp21.Bindings.Add(temp_eb17);
        temp22.Handler += temp_eb17.OnEvent;
        temp23.Children.Add(temp24);
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp);
        temp24.Children.Add(temp27);
        temp24.Children.Add(temp28);
        temp24.Children.Add(temp1);
        temp24.Children.Add(temp2);
        temp24.Children.Add(temp31);
        temp24.Children.Add(temp32);
        temp24.Children.Add(temp33);
        temp24.Children.Add(temp34);
        temp24.Children.Add(temp35);
        temp24.Children.Add(temp3);
        temp24.Children.Add(temp4);
        temp24.Children.Add(temp5);
        temp24.Children.Add(temp47);
        temp24.Children.Add(temp48);
        temp24.Children.Add(temp6);
        temp24.Children.Add(temp52);
        temp24.Children.Add(temp53);
        temp24.Children.Add(temp54);
        temp24.Children.Add(temp55);
        temp24.Children.Add(temp7);
        temp24.Children.Add(temp58);
        temp24.Children.Add(temp59);
        temp24.Children.Add(temp60);
        temp24.Children.Add(temp61);
        temp24.Children.Add(temp62);
        temp25.Value = "Morning Prayer";
        temp.FontSize = 12f;
        temp.Bindings.Add(temp26);
        temp27.Value = "The Officiant may begin Morning Prayer by reading an sentence of Scripture found on pages 17-19 or another appropriate Scripture. The Confession of Sin may be said, or the Office may continue with “O Lord, open our lips.”";
        temp28.Value = "Opening Sentences of Scripture";
        temp1.Bindings.Add(temp29);
        temp2.Bindings.Add(temp30);
        temp32.Value = "The Invitatory";
        temp33.Value = "All stand";
        temp35.Value = "Then follows the Venite. Alternatively, the Jubilate may be used.\nThese seasonal antiphons may be sung or said before and after the Invitatory Psalm.";
        temp3.Bindings.Add(temp36);
        temp4.Bindings.Add(temp37);
        temp5.Cases.Add(temp38);
        temp5.Cases.Add(temp40);
        temp5.Cases.Add(temp42);
        temp5.Cases.Add(temp44);
        temp5.Bindings.Add(temp46);
        temp38.String = "Jubilate";
        temp38.Factories.Add(temp39);
        temp40.String = "Venite";
        temp40.Factories.Add(temp41);
        temp42.String = "VeniteLent";
        temp42.Factories.Add(temp43);
        temp44.String = "PaschaNostrum";
        temp44.Factories.Add(temp45);
        temp47.Value = "Then follows";
        temp48.Value = "The Psalm or Psalms Appointed";
        temp6.Templates.Add(temp49);
        temp6.Templates.Add(temp50);
        temp6.Bindings.Add(temp51);
        temp52.Value = "At the end of the Psalms is sung or said";
        temp54.Value = "The Lessons";
        temp55.Value = "A citation giving chapter and verse may be added.";
        temp7.Templates.Add(temp56);
        temp7.Bindings.Add(temp57);
        temp58.Value = "After each Lesson the Reader may say";
        temp60.Value = "Or the Reader may say";
        temp61.Speaker = "";
        temp61.Text = "Here ends the Reading.";
        temp62.Value = "The following Canticles are normally sung or said aftereach of the lessons. The Officiant may also use a Canticle drawn from those on pages 35-43 or an appropriate song of praise.";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb17);
        this.Children.Add(temp19);
        this.Children.Add(temp20);
        this.Children.Add(temp21);
        this.Children.Add(temp23);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}
