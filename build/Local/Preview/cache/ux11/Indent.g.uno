[Uno.Compiler.UxGenerated]
public partial class Indent: iphod.Regular
{
    static Indent()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Indent()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.Margin = float4(20f, 0f, 5f, 0f);
        this.Font = global::MainView.RegularFont;
    }
}
