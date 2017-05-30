[Uno.Compiler.UxGenerated]
public partial class EPcollectForFriday: Fuse.Controls.WrapPanel
{
    static EPcollectForFriday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public EPcollectForFriday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Faith (Friday)";
        temp1.Value = "Lord Jesus Christ, by your death you took away the sting of death:\n    Grant to us your servants so to follow in faith where you have led the\n    way, that we may at length fall asleep peacefully in you and wake up\n    in your likeness; for your tender mercies’ sake.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
