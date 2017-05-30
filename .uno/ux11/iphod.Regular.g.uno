namespace iphod
{
    [Uno.Compiler.UxGenerated]
    public partial class Regular: iphod.Text
    {
        static Regular()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Regular()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            this.Font = global::MainView.RegularFont;
        }
    }
}
