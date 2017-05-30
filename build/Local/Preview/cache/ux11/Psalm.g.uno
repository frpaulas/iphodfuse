[Uno.Compiler.UxGenerated]
public partial class Psalm: Fuse.Controls.Text
{
    string _field_StartVs;
    [global::Uno.UX.UXOriginSetter("SetStartVs")]
    public string StartVs
    {
        get { return _field_StartVs; }
        set { SetStartVs(value, null); }
    }
    public void SetStartVs(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_StartVs)
        {
            _field_StartVs = value;
            OnPropertyChanged("StartVs", origin);
        }
    }
    string _field_EndVs;
    [global::Uno.UX.UXOriginSetter("SetEndVs")]
    public string EndVs
    {
        get { return _field_EndVs; }
        set { SetEndVs(value, null); }
    }
    public void SetEndVs(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_EndVs)
        {
            _field_EndVs = value;
            OnPropertyChanged("EndVs", origin);
        }
    }
    string _field_Number;
    [global::Uno.UX.UXOriginSetter("SetNumber")]
    public string Number
    {
        get { return _field_Number; }
        set { SetNumber(value, null); }
    }
    public void SetNumber(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Number)
        {
            _field_Number = value;
            OnPropertyChanged("Number", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Speaker_inst;
    global::Uno.UX.Property<string> temp_Text_inst;
    global::Uno.UX.Property<string> this_StartVs_inst;
    global::Uno.UX.Property<string> this_EndVs_inst;
    global::Uno.UX.Property<string> this_Number_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static Psalm()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Psalm()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_StartVs_inst = new iphod_Psalm_StartVs_Property(this, __selector0);
        this_EndVs_inst = new iphod_Psalm_EndVs_Property(this, __selector1);
        this_Number_inst = new iphod_Psalm_Number_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Versical();
        temp_Speaker_inst = new iphod_Versical_Speaker_Property(temp, __selector3);
        var temp1 = new global::Fuse.Reactive.Data("name");
        var temp2 = new global::Fuse.Reactive.This();
        temp_Text_inst = new iphod_Versical_Text_Property(temp, __selector4);
        var temp3 = new global::Fuse.Reactive.Property(temp2, iphod_accessor_Psalm_StartVs.Singleton);
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Speaker_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Text_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Read);
        this.Margin = float4(140f, 0f, 5f, 0f);
        temp4.LineNumber = 2;
        temp4.FileName = "Components/Psalm.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Components/Psalm.js"));
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_StartVs_inst);
        __g_nametable.Properties.Add(this_EndVs_inst);
        __g_nametable.Properties.Add(this_Number_inst);
        this.Children.Add(temp4);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "StartVs";
    static global::Uno.UX.Selector __selector1 = "EndVs";
    static global::Uno.UX.Selector __selector2 = "Number";
    static global::Uno.UX.Selector __selector3 = "Speaker";
    static global::Uno.UX.Selector __selector4 = "Text";
}
