[Uno.Compiler.UxGenerated]
public partial class Rubric: iphod.Regular
{
    static Rubric()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Rubric()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 12f;
        this.Color = Fuse.Drawing.Colors.Red;
        this.Margin = float4(5f, 10f, 5f, 10f);
        this.Font = global::MainView.ItalicFont;
    }
}
