[Uno.Compiler.UxGenerated]
public partial class MPcollectForWednesday: Fuse.Controls.WrapPanel
{
    static MPcollectForWednesday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForWednesday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Grace (Wednesday)";
        temp1.Value = "O Lord, our heavenly Father, almighty and everlasting God, you have\n    brought us safely to the beginning of this day: Defend us by your\n    mighty power, that we may not fall into sin nor run into any danger;\n    and that guided by your Spirit, we may do what is righteous in your\n    sight; through Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
