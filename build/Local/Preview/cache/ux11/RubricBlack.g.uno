[Uno.Compiler.UxGenerated]
public partial class RubricBlack: Rubric
{
    static RubricBlack()
    {
    }
    [global::Uno.UX.UXConstructor]
    public RubricBlack()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = Fuse.Drawing.Colors.Black;
        this.Margin = float4(5f, 10f, 5f, 10f);
    }
}
