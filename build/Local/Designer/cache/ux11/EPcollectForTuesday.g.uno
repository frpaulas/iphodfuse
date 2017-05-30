[Uno.Compiler.UxGenerated]
public partial class EPcollectForTuesday: Fuse.Controls.WrapPanel
{
    static EPcollectForTuesday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForTuesday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Aid against Perils (Tuesday)";
        temp1.Value = "Lighten our darkness, we beseech you, O Lord; and by your great\n    mercy defend us from all perils and dangers of this night; for the love\n    of your only Son, our Savior Jesus Christ.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
