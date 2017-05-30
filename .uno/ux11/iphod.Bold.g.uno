namespace iphod
{
    [Uno.Compiler.UxGenerated]
    public partial class Bold: iphod.Text
    {
        static Bold()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Bold()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.Font = global::MainView.BoldFont;
        }
    }
}
