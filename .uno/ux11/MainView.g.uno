[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("home", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::HomePage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "home";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("calendarPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::CalendarPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "calendarPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("morningPrayerPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::MorningPrayerPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "morningPrayerPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base("middayPrayerPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::MiddayPrayerPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "middayPrayerPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base("eveningPrayerPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::EveningPrayerPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "eveningPrayerPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template5(MainView parent, MainView parentInstance): base("complinePage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::ComplinePage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "complinePage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template6(MainView parent, MainView parentInstance): base("familyPrayerPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::FamilyPrayerPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "familyPrayerPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template7: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template7(MainView parent, MainView parentInstance): base("reconciliationPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template7()
        {
        }
        public override object New()
        {
            var __self = new global::ReconciliationPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "reconciliationPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template8: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template8(MainView parent, MainView parentInstance): base("toTheSickPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template8()
        {
        }
        public override object New()
        {
            var __self = new global::ToTheSickPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "toTheSickPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template9: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template9(MainView parent, MainView parentInstance): base("communionToSickPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template9()
        {
        }
        public override object New()
        {
            var __self = new global::CommunionToSickPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "communionToSickPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template10: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template10(MainView parent, MainView parentInstance): base("timeOfDeathPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template10()
        {
        }
        public override object New()
        {
            var __self = new global::TimeOfDeathPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "timeOfDeathPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template11: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template11(MainView parent, MainView parentInstance): base("stationsOfTheCrossPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template11()
        {
        }
        public override object New()
        {
            var __self = new global::StationsOfTheCrossPage(__parent.router);
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "stationsOfTheCrossPage";
    }
    [global::Uno.UX.UXGlobalResource("RegularFont")] public static readonly Fuse.Font RegularFont;
    [global::Uno.UX.UXGlobalResource("ItalicFont")] public static readonly Fuse.Font ItalicFont;
    [global::Uno.UX.UXGlobalResource("BoldFont")] public static readonly Fuse.Font BoldFont;
    [global::Uno.UX.UXGlobalResource("BoldItalicFont")] public static readonly Fuse.Font BoldItalicFont;
    internal global::Fuse.Navigation.Router router;
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.RegularFont, "RegularFont");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.ItalicFont, "ItalicFont");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.BoldFont, "BoldFont");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.BoldItalicFont, "BoldItalicFont");
        RegularFont = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Georgia.ttf")));
        ItalicFont = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Georgia Italic.ttf")));
        BoldFont = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Georgia Bold.ttf")));
        BoldItalicFont = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Georgia Bold Italic.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(RegularFont, "RegularFont");
        global::Uno.UX.Resource.SetGlobalKey(ItalicFont, "ItalicFont");
        global::Uno.UX.Resource.SetGlobalKey(BoldFont, "BoldFont");
        global::Uno.UX.Resource.SetGlobalKey(BoldItalicFont, "BoldItalicFont");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp1 = new global::Fuse.Reactive.FuseJS.Http();
        var temp2 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp3 = new global::Fuse.Drawing.BrushConverter();
        var temp4 = new global::Fuse.Triggers.BusyTaskModule();
        var temp5 = new global::Fuse.Testing.UnoTestingHelper();
        var temp6 = new global::Fuse.FileSystem.FileSystemModule();
        var temp7 = new global::Fuse.Storage.StorageModule();
        var temp8 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp9 = new global::Polyfills.Window.WindowModule();
        var temp10 = new global::FuseJS.Globals();
        var temp11 = new global::FuseJS.Lifecycle();
        var temp12 = new global::FuseJS.Environment();
        var temp13 = new global::FuseJS.Base64();
        var temp14 = new global::FuseJS.Bundle();
        var temp15 = new global::FuseJS.FileReaderImpl();
        var temp16 = new global::FuseJS.UserEvents();
        var temp17 = new global::Fuse.iOS.StatusBarConfig();
        var temp18 = new global::Fuse.Android.StatusBarConfig();
        router = new global::Fuse.Navigation.Router();
        var temp19 = new global::Fuse.Controls.ClientPanel();
        var temp20 = new global::Fuse.Controls.Navigator();
        var home = new Template(this, this);
        var calendarPage = new Template1(this, this);
        var morningPrayerPage = new Template2(this, this);
        var middayPrayerPage = new Template3(this, this);
        var eveningPrayerPage = new Template4(this, this);
        var complinePage = new Template5(this, this);
        var familyPrayerPage = new Template6(this, this);
        var reconciliationPage = new Template7(this, this);
        var toTheSickPage = new Template8(this, this);
        var communionToSickPage = new Template9(this, this);
        var timeOfDeathPage = new Template10(this, this);
        var stationsOfTheCrossPage = new Template11(this, this);
        this.Background = float4(1f, 1f, 1f, 1f);
        temp17.Style = Fuse.Platform.StatusBarStyle.Light;
        temp18.Color = float4(0.007843138f, 0.1372549f, 0.1568628f, 1f);
        router.Name = __selector0;
        temp19.Children.Add(temp20);
        temp20.DefaultPath = "home";
        temp20.Templates.Add(home);
        temp20.Templates.Add(calendarPage);
        temp20.Templates.Add(morningPrayerPage);
        temp20.Templates.Add(middayPrayerPage);
        temp20.Templates.Add(eveningPrayerPage);
        temp20.Templates.Add(complinePage);
        temp20.Templates.Add(familyPrayerPage);
        temp20.Templates.Add(reconciliationPage);
        temp20.Templates.Add(toTheSickPage);
        temp20.Templates.Add(communionToSickPage);
        temp20.Templates.Add(timeOfDeathPage);
        temp20.Templates.Add(stationsOfTheCrossPage);
        this.Children.Add(temp17);
        this.Children.Add(temp18);
        this.Children.Add(router);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "router";
}
