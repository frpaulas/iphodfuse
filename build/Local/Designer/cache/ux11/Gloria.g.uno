[Uno.Compiler.UxGenerated]
public partial class Gloria: Fuse.Controls.Grid
{
    static Gloria()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Gloria()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.WrapPanel();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::Indent();
        var temp3 = new global::Indent();
        this.Margin = float4(0f, 10f, 0f, 10f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        temp.Children.Add(temp3);
        temp1.Value = "Glory to the Father, and to the Son, and to the Holy Spirit;";
        temp2.Value = "as it was in the beginning, is now, and ever shall be,";
        temp3.Value = "world without end. Amen.";
        this.Children.Add(temp);
    }
}
