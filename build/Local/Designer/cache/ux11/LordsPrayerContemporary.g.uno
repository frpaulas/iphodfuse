[Uno.Compiler.UxGenerated]
public partial class LordsPrayerContemporary: Fuse.Controls.WrapPanel
{
    static LordsPrayerContemporary()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LordsPrayerContemporary()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::iphod.Regular();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Regular();
        var temp3 = new global::iphod.Regular();
        var temp4 = new global::iphod.Regular();
        var temp5 = new global::iphod.Regular();
        var temp6 = new global::Indent();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "Our Father in heaven, hallowed be your Name.";
        temp1.Value = "Your kingdom come, your will be done, on earth as it is in heaven.";
        temp2.Value = "Give us today our daily bread.";
        temp3.Value = "And forgive us our sins as we forgive those who sin against us.";
        temp4.Value = "Save us from the time of trial, and deliver us from evil.";
        temp5.Value = "For the kingdom, the power, and the glory are yours,";
        temp6.Value = "now and forever. Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
}
