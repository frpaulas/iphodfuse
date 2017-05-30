[Uno.Compiler.UxGenerated]
public partial class EPcollectForMonday: Fuse.Controls.WrapPanel
{
    static EPcollectForMonday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForMonday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Peace (Monday)";
        temp1.Value = "O God, the source of all holy desires, all good counsels, and all just\n    works: Give to your servants that peace which the world cannot give,\n    that our hearts may be set to obey your commandments, and that we,\n    being defended from the fear of our enemies, may pass our time in \n    rest and quietness, through the merits of Jesus Christ our Savior.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
