namespace iphod
{
    [Uno.Compiler.UxGenerated]
    public partial class Italic: iphod.Text
    {
        static Italic()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Italic()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.Font = global::MainView.ItalicFont;
        }
    }
}
