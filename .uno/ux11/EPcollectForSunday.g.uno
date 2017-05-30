[Uno.Compiler.UxGenerated]
public partial class EPcollectForSunday: Fuse.Controls.WrapPanel
{
    static EPcollectForSunday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForSunday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for for Resurrection Hope (Sunday)";
        temp1.Value = "Lord God, whose Son our Savior Jesus Christ triumphed over the\n    powers of death and prepared for us our place in the new Jerusalem:\n    Grant that we, who have this day given thanks for his resurrection,\n    may praise you in that City of which he is the light, and where he\n    lives and reigns forever and ever.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
