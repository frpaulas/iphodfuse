[Uno.Compiler.UxGenerated]
public partial class Mercy3: Fuse.Controls.WrapPanel
{
    static Mercy3()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Mercy3()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::iphod.Regular();
        var temp1 = new global::iphod.Italic();
        var temp2 = new global::iphod.Regular();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Value = "Lord, have mercy [upon us].";
        temp1.Value = "Christ, have mercy [upon us].";
        temp2.Value = "Lord, have mercy [upon us].";
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
