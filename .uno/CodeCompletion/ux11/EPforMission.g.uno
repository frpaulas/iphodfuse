[Uno.Compiler.UxGenerated]
public partial class EPforMission: Fuse.Controls.WrapPanel
{
    static EPforMission()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPforMission()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Regular();
        var temp3 = new global::iphod.Regular();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "Collect for Mission";
        temp1.Value = "O God and Father of all, whom the whole heavens adore: Let the\n      whole earth also worship you, all nations obey you, all tongues\n      confess and bless you, and men, women and children everywhere\n      love you and serve you in peace; through Jesus Christ our Lord.\n      Amen.";
        temp2.Value = "Keep watch, dear Lord, with those who work, or watch, or weep this\n      night, and give your angels charge over those who sleep. Tend the\n      sick, Lord Christ; give rest to the weary, bless the dying, soothe the\n      suffering, pity the afflicted, shield the joyous; and all for your love’s\n      sake. Amen.";
        temp3.Value = "O God, you manifest in your servants the signs of your presence:\n      Send forth upon us the Spirit of love, that in companionship with\n      one another your abounding grace may increase among us; through\n      Jesus Christ our Lord. Amen.";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
}
