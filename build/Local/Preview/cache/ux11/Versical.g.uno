[Uno.Compiler.UxGenerated]
public partial class Versical: Fuse.Controls.Grid
{
    string _field_Speaker;
    [global::Uno.UX.UXOriginSetter("SetSpeaker")]
    public string Speaker
    {
        get { return _field_Speaker; }
        set { SetSpeaker(value, null); }
    }
    public void SetSpeaker(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Speaker)
        {
            _field_Speaker = value;
            OnPropertyChanged("Speaker", origin);
        }
    }
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
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> this_Speaker_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static Versical()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Versical()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.This();
        var temp = new global::iphod.Italic();
        temp_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, iphod_accessor_Versical_Speaker.Singleton);
        this_Speaker_inst = new iphod_Versical_Speaker_Property(this, __selector1);
        this_Text_inst = new iphod_Versical_Text_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.This();
        var temp1 = new global::iphod.Regular();
        temp1_Value_inst = new iphod_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Property(temp4, iphod_accessor_Versical_Text.Singleton);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Read);
        this.DefaultRow = "auto";
        this.Columns = "70, 290";
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Bindings.Add(temp6);
        temp1.Bindings.Add(temp7);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Speaker_inst);
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Speaker";
    static global::Uno.UX.Selector __selector2 = "Text";
}
