[Uno.Compiler.UxGenerated]
public partial class EPcollectForSaturday: Fuse.Controls.WrapPanel
{
    static EPcollectForSaturday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForSaturday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for the Eve of Worship (Saturday)";
        temp1.Value = "O God, the source of eternal light: Shed forth your unending day\n    upon us who watch for you, that our lips may praise you, our lives\n    may bless you, and our worship on the morrow give you glory;\n    through Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
