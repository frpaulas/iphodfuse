namespace iphod
{
    [Uno.Compiler.UxGenerated]
    public partial class Page: Fuse.Controls.Page
    {
        static Page()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Page()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Image();
            temp.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp.Opacity = 0.5f;
            temp.Layer = Fuse.Layer.Background;
            temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background-2076335_960_720.jpg"));
            this.Children.Add(temp);
        }
    }
}
