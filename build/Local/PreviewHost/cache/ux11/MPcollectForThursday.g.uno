[Uno.Compiler.UxGenerated]
public partial class MPcollectForThursday: Fuse.Controls.WrapPanel
{
    static MPcollectForThursday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForThursday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Guidance (Thursday)";
        temp1.Value = "Heavenly Father, in you we live and move and have our being: We\n    humbly pray you so to guide and govern us by your Holy Spirit, that\n    in all the cares and occupations of our life we may not forget you, but\n    may remember that we are ever walking in your sight; through Jesus\n    Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
