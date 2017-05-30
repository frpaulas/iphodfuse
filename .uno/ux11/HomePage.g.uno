[Uno.Compiler.UxGenerated]
public partial class HomePage: iphod.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Separator();
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template1(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb10;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb10"
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::iphod.Text();
            temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("name");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Reactive.Data("goToPage");
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp4 = new global::Fuse.Gestures.WhilePressed();
            var temp5 = new global::Fuse.Animations.Scale();
            var temp_eb10 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
            __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb10.OnEvent);
            temp.Margin = float4(10f, 10f, 10f, 10f);
            temp.Bindings.Add(temp3);
            temp4.Animators.Add(temp5);
            temp5.Factor = 0.5f;
            temp5.Duration = 0.08;
            temp5.Easing = Fuse.Animations.Easing.QuadraticOut;
            __g_nametable.Objects.Add(temp_eb10);
            __self.Children.Add(temp);
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp_eb10);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new iphod_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pages");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::iphod.Text();
        var temp5 = new global::Fuse.Controls.ScrollView();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new Template(this, this);
        var temp8 = new Template1(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Separator();
        temp2.LineNumber = 4;
        temp2.FileName = "Pages/HomePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/HomePage.js"));
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp4.Value = "Legereme";
        temp4.FontSize = 30f;
        temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp4.Margin = float4(0f, 50f, 0f, 50f);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp5.Children.Add(temp6);
        temp6.Children.Add(temp);
        temp6.Children.Add(temp10);
        temp.Templates.Add(temp7);
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
