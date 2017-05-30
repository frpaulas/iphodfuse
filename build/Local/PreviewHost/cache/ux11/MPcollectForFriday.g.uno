[Uno.Compiler.UxGenerated]
public partial class MPcollectForFriday: Fuse.Controls.WrapPanel
{
    static MPcollectForFriday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForFriday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Endurance (Friday)";
        temp1.Value = "Almighty God, whose most dear Son went not up to joy but first he\n    suffered pain, and entered not into glory before he was crucified:\n    Mercifully grant that we, walking in the way of the cross, may find it\n    none other than the way of life and peace; through Jesus Christ your\n    Son our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
