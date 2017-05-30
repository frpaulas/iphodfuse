[Uno.Compiler.UxGenerated]
public partial class PrayerOfChrysostom: Fuse.Controls.WrapPanel
{
    static PrayerOfChrysostom()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PrayerOfChrysostom()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        this.Margin = float4(15f, 0f, 5f, 0f);
        temp.Value = "A Prayer of St. John Chrysostom";
        temp1.Value = "Almighty God, you have given us grace at this time with one accord\n  to make our common supplications to you; and you have promised \n  through your well beloved Son that when two or three are gathered\n  together in his name you will be in the midst of them: Fulfill now, O\n  Lord, our desires and petitions as may be best for us; granting us in\n  this world knowledge of your truth, and in the age to come life\n  everlasting. Amen.";
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
