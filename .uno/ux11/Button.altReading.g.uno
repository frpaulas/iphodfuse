namespace Button
{
    [Uno.Compiler.UxGenerated]
    public partial class altReading: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        float _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public float FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float> temp_FontSize_inst;
        global::Uno.UX.Property<string> this_Text_inst;
        global::Uno.UX.Property<float> this_FontSize_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static altReading()
        {
        }
        [global::Uno.UX.UXConstructor]
        public altReading()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.This();
            var temp = new global::iphod.Text();
            temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, iphod_accessor_Button_altReading_Text.Singleton);
            this_Text_inst = new iphod_ButtonaltReading_Text_Property(this, __selector1);
            this_FontSize_inst = new iphod_ButtonaltReading_FontSize_Property(this, __selector2);
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp3 = new global::Fuse.Reactive.This();
            temp_FontSize_inst = new iphod_FuseControlsTextControl_FontSize_Property(temp, __selector2);
            var temp4 = new global::Fuse.Reactive.Property(temp3, iphod_accessor_Button_altReading_FontSize.Singleton);
            var temp5 = new global::Fuse.Controls.Rectangle();
            var temp6 = new global::Fuse.Effects.DropShadow();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp8 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp9 = new global::Fuse.Gestures.WhilePressed();
            var temp10 = new global::Fuse.Animations.Scale();
            this.Margin = float4(10f, 10f, 10f, 10f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            this.FontSize = 16f;
            temp5.CornerRadius = float4(4f, 4f, 4f, 4f);
            temp5.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
            temp5.Layer = Fuse.Layer.Background;
            temp5.Children.Add(temp6);
            temp6.Size = 2f;
            temp6.Angle = 90f;
            temp6.Distance = 1f;
            temp6.Spread = 0.2f;
            temp6.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp.Bindings.Add(temp7);
            temp.Bindings.Add(temp8);
            temp9.Animators.Add(temp10);
            temp10.Factor = 0.95f;
            temp10.Duration = 0.08;
            temp10.Easing = Fuse.Animations.Easing.QuadraticOut;
            __g_nametable.This = this;
            __g_nametable.Properties.Add(this_Text_inst);
            __g_nametable.Properties.Add(this_FontSize_inst);
            this.Children.Add(temp5);
            this.Children.Add(temp);
            this.Children.Add(temp9);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Text";
        static global::Uno.UX.Selector __selector2 = "FontSize";
    }
}
