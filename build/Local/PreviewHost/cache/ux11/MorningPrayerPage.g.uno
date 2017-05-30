[Uno.Compiler.UxGenerated]
public partial class MorningPrayerPage: iphod.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
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
        var temp5 = new global::Fuse.Reactive.Data("setup");
        var temp6 = new global::Fuse.Reactive.Data("back");
        var temp = new global::iphod.Title();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("title");
        var temp8 = new global::Fuse.Reactive.Data("openingSentence");
        var temp1 = new global::iphod.Regular();
        temp1_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp9 = new global::Fuse.Reactive.Member(temp8, "vss");
        var temp10 = new global::Fuse.Reactive.Data("openingSentence");
        var temp2 = new global::Reference();
        temp2_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp11 = new global::Fuse.Reactive.Member(temp10, "ref");
        var temp3 = new global::RubricBlack();
        temp3_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp3, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("nameOfSeason");
        var temp4 = new global::iphod.Regular();
        temp4_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp4, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("antiphon");
        var temp14 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp16 = new global::Fuse.Navigation.Activated();
        var temp17 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp5, __g_nametable);
        var temp18 = new global::Fuse.Controls.DockPanel();
        var temp19 = new global::iphod.Button();
        temp_eb18 = new global::Fuse.Reactive.EventBinding(temp6, __g_nametable);
        var temp20 = new global::Fuse.Controls.ScrollView();
        var temp21 = new global::Fuse.Controls.StackPanel();
        var temp22 = new global::iphod.Title();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Rubric();
        var temp25 = new global::SectionTitle();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Confession();
        var temp29 = new global::SectionTitle();
        var temp30 = new global::Rubric();
        var temp31 = new global::Invitatory();
        var temp32 = new global::Rubric();
        var temp33 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp34 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp14.LineNumber = 3;
        temp14.FileName = "Pages/MorningPrayerPage.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Modules/Helpers.js"));
        temp15.LineNumber = 4;
        temp15.FileName = "Pages/MorningPrayerPage.ux";
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/MorningPrayerPage.js"));
        temp16.Actions.Add(temp17);
        temp16.Bindings.Add(temp_eb17);
        temp17.Handler += temp_eb17.OnEvent;
        temp18.Children.Add(temp19);
        temp19.Margin = float4(10f, 10f, 10f, 10f);
        temp19.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp19, Fuse.Layouts.Dock.Bottom);
        temp19.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp19, temp_eb18.OnEvent);
        temp19.Bindings.Add(temp_eb18);
        temp20.Children.Add(temp21);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp);
        temp21.Children.Add(temp24);
        temp21.Children.Add(temp25);
        temp21.Children.Add(temp1);
        temp21.Children.Add(temp2);
        temp21.Children.Add(temp28);
        temp21.Children.Add(temp29);
        temp21.Children.Add(temp30);
        temp21.Children.Add(temp31);
        temp21.Children.Add(temp32);
        temp21.Children.Add(temp3);
        temp21.Children.Add(temp4);
        temp22.Value = "Morning Prayer";
        temp.FontSize = 12f;
        temp.Bindings.Add(temp23);
        temp24.Value = "The Officiant may begin Morning Prayer by reading an sentence of Scripture found on pages 17-19 or another appropriate Scripture. The Confession of Sin may be said, or the Office may continue with “O Lord, open our lips.”";
        temp25.Value = "Opening Sentences of Scripture";
        temp1.Bindings.Add(temp26);
        temp2.Bindings.Add(temp27);
        temp29.Value = "The Invitatory";
        temp30.Value = "All stand";
        temp32.Value = "Then follows the Venite. Alternatively, the Jubilate may be used.\nThese seasonal antiphons may be sung or said before and after the Invitatory Psalm.";
        temp3.Bindings.Add(temp33);
        temp4.Bindings.Add(temp34);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb17);
        __g_nametable.Objects.Add(temp_eb18);
        this.Children.Add(temp14);
        this.Children.Add(temp15);
        this.Children.Add(temp16);
        this.Children.Add(temp18);
        this.Children.Add(temp20);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
