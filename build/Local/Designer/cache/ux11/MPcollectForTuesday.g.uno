[Uno.Compiler.UxGenerated]
public partial class MPcollectForTuesday: Fuse.Controls.WrapPanel
{
    static MPcollectForTuesday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForTuesday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Peace (Tuesday)";
        temp1.Value = "O God, the author of peace and lover of concord, to know you \n    is eternal life and to serve you is perfect freedom: Defend us, \n    your humble servants, in all assaults of our enemies; that we, \n    surely trusting in your defense, may not fear the power of \n    any adversaries, through the might of Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
