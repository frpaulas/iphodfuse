[Uno.Compiler.UxGenerated]
public partial class TheWordOfTheLord: Fuse.Controls.WrapPanel
{
    static TheWordOfTheLord()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TheWordOfTheLord()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Versical();
        var temp1 = new global::Versical();
        this.Margin = float4(5f, 0f, 5f, 0f);
        temp.Speaker = "";
        temp.Text = "The Word of the Lord";
        temp1.Speaker = "People";
        temp1.Text = "Thanks be to God";
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
