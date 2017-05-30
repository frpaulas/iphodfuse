[Uno.Compiler.UxGenerated]
public partial class EofPrayer: Fuse.Controls.WrapPanel
{
    static EofPrayer()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EofPrayer()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Versical();
        var temp1 = new global::Versical();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Speaker = "";
        temp.Text = "Let us bless the Lord";
        temp1.Speaker = "People";
        temp1.Text = "Thanks be to God";
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
