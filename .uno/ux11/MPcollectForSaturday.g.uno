[Uno.Compiler.UxGenerated]
public partial class MPcollectForSaturday: Fuse.Controls.WrapPanel
{
    static MPcollectForSaturday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForSaturday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Sabbath Rest (Saturday)";
        temp1.Value = "Almighty God, who after the creation of the world rested from all\n    your works and sanctified a day of rest for all your creatures: Grant\n    that we, putting away all earthly anxieties, may be duly prepared for\n    the service of your sanctuary, and that our rest here upon earth may\n    be a preparation for the eternal rest promised to your people in\n    heaven; through Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
