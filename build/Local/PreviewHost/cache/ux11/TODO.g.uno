[Uno.Compiler.UxGenerated]
public partial class TODO: Fuse.Controls.Panel
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
    static TODO()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TODO()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, iphod_accessor_TODO_Text.Singleton);
        this_Text_inst = new iphod_TODO_Text_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.Color = Fuse.Drawing.Colors.Red;
        temp.Margin = float4(0f, 10f, 0f, 10f);
        temp.Font = global::MainView.ItalicFont;
        temp.Bindings.Add(temp3);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
}
