[Uno.Compiler.UxGenerated]
public partial class PrayerIntro: Fuse.Controls.WrapPanel
{
    static PrayerIntro()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PrayerIntro()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Versical();
        var temp1 = new global::Versical();
        var temp2 = new global::Versical();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Speaker = "Officiant";
        temp.Text = "The Lord be with you.";
        temp1.Speaker = "People";
        temp1.Text = "And with your spirit.";
        temp2.Speaker = "Officiant";
        temp2.Text = "Let us pray.";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
