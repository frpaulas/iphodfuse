[Uno.Compiler.UxGenerated]
public partial class MPcollectForSunday: Fuse.Controls.WrapPanel
{
    static MPcollectForSunday()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MPcollectForSunday()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::SectionTitle();
        var temp1 = new global::iphod.Regular();
        var temp2 = new global::iphod.Italic();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "A Collect for Strength to Await Christ’s Return (Sunday)";
        temp1.Value = "O God our King, by the resurrection of your Son Jesus Christ on the first day of the week, \n    you conquered sin, put death to flight, and gave us the hope of everlasting life: \n    Redeem all our days by this victory; forgive our sins, banish our fears, make us \n    bold to praise you and to do your will; and steel us to wait for the consummation \n    of your kingdom on the last great Day; through the same Jesus Christ our Lord.";
        temp2.Value = "Amen";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
