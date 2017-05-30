[Uno.Compiler.UxGenerated]
public partial class Psalm1: iphod.Regular
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
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static Psalm1()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Psalm1()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.This();
        var temp = new global::iphod.Regular();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, iphod_accessor_Psalm1_Text.Singleton);
        this_Text_inst = new iphod_Psalm1_Text_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        this.Margin = float4(40f, 0f, 5f, 0f);
        temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp.Color = Fuse.Drawing.Colors.Red;
        temp.Margin = float4(-40f, 0f, 0f, 0f);
        temp.Bindings.Add(temp3);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
}
