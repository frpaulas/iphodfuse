[Uno.Compiler.UxGenerated]
public partial class MPforMission: Fuse.Controls.WrapPanel
{
    static MPforMission()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPforMission()
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
        temp1.Value = "Almighty and everlasting God, who alone works great marvels: Send\n    down upon our clergy and the congregations committed to their\n    charge the life-giving Spirit of your grace, shower them with the\n    continual dew of your blessing, and ignite in them a zealous love of\n    your Gospel, through Jesus Christ our Lord. Amen.";
        temp2.Value = "O God, you have made of one blood all the peoples of the earth, and\n    sent your blessed Son to preach peace to those who are far off and to\n    those who are near: Grant that people everywhere may seek after you\n    and find you; bring the nations into your fold; pour out your Spirit\n    upon all flesh; and hasten the coming of your kingdom; through\n    Jesus Christ our Lord. Amen.";
        temp3.Value = "Lord Jesus Christ, you stretched out your arms of love on the hard\n    wood of the cross that everyone might come within the reach of your\n    saving embrace: So clothe us in your Spirit that we, reaching forth \n    our hands in love, may bring those who do not know you to the\n    knowledge and love of you; for the honor of your Name. Amen.";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
}
