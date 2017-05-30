[Uno.Compiler.UxGenerated]
public partial class ReconciliationPage: iphod.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb19"
    };
    static ReconciliationPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ReconciliationPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("back");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.DockPanel();
        var temp3 = new global::iphod.Button();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        var temp4 = new global::iphod.Title();
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/ReconciliationPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Modules/Helpers.js"));
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp3.Margin = float4(10f, 10f, 10f, 10f);
        temp3.Padding = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Bottom);
        temp3.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb19.OnEvent);
        temp3.Bindings.Add(temp_eb19);
        temp4.Value = "Reconciliation";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb19);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
