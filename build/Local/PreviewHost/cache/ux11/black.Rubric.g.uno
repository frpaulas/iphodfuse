namespace black
{
    [Uno.Compiler.UxGenerated]
    public partial class Rubric: Rubric
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
            this.Color = Fuse.Drawing.Colors.Black;
            this.Margin = float4(5f, 10f, 5f, 10f);
        }
    }
}
