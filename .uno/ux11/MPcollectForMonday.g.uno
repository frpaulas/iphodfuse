[Uno.Compiler.UxGenerated]
public partial class MPcollectForMonday: Fuse.Controls.WrapPanel
{
    static MPcollectForMonday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForMonday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for the Renewal of Life (Monday)";
        temp1.Value = "O God, the King eternal, whose light divides the day from the night and turns \n    the shadow of death into the morning: Drive far from us all wrong desires, \n    incline our hearts to keep your law, and guide our feet into the way of peace; \n    that, having done your will with cheerfulness during the day, we may, when \n    night comes, rejoice to give you thanks; through Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
