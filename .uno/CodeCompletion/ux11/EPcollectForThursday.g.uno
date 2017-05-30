[Uno.Compiler.UxGenerated]
public partial class EPcollectForThursday: Fuse.Controls.WrapPanel
{
    static EPcollectForThursday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForThursday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Presence of Christ (Thursday)";
        temp1.Value = "Lord Jesus, stay with us, for evening is at hand and the day is past; be\n    our companion in the way, kindle our hearts, and awaken hope, that\n    we may know you as you are revealed in Scripture and the breaking\n    of bread. Grant this for the sake of your love.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
