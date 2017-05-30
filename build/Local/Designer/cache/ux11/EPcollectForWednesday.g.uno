[Uno.Compiler.UxGenerated]
public partial class EPcollectForWednesday: Fuse.Controls.WrapPanel
{
    static EPcollectForWednesday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForWednesday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Protection (Wednesday)";
        temp1.Value = "O God, the life of all who live, the light of the faithful, the strength\n    of those who labor, and the repose of the dead: We thank you for the\n    blessings of the day that is past, and humbly ask for your protection\n    through the coming night. Bring us in safety to the morning hours;\n    through him who died and rose again for us, your Son our Savior\n    Jesus Christ.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
