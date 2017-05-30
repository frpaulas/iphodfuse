// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseNodes_bundle.h>
#include <Fuse.App.RootViewHost.h>
#include <Fuse.AppBase.h>
#include <Fuse.AppRoot.h>
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Computer.h>
#include <Fuse.Computer-1.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Diagnostics.Temporal.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHelpers.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FastProperty1.h>
#include <Fuse.FastProperty1Link.h>
#include <Fuse.FastProperty1Link-1.h>
#include <Fuse.FastProperty2.h>
#include <Fuse.FastProperty2Link.h>
#include <Fuse.FastProperty2Link-1.h>
#include <Fuse.FileSourceConverter.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.Float2Computer.h>
#include <Fuse.Float3Computer.h>
#include <Fuse.Float4Computer.h>
#include <Fuse.Font.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FramebufferPoolImpl.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IArray.h>
#include <Fuse.IBeginRemoveVisu-90c91ef5.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IFrustum.h>
#include <Fuse.ILoading.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.INameListener.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusNavig-66c283ba.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Internal.FontFac-589fc2ef.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IObject.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRaw.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IUpdateListener.h>
#include <Fuse.IViewport.h>
#include <Fuse.JSFileSource.h>
#include <Fuse.Json.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.Flags.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Marshal.h>
#include <Fuse.Marshal.IConverter.h>
#include <Fuse.MarshalException.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.DataFinder.h>
#include <Fuse.Node.DataWatcher.h>
#include <Fuse.Node.FirstDataEnumerator.h>
#include <Fuse.Node.h>
#include <Fuse.Node.IDataEnumerator.h>
#include <Fuse.Node.IDataListener.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.NumberComputer.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.OSVersion.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.RenderTargetEntry.h>
#include <Fuse.RequestBringInto-2d120b4f.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.RootStage.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.ScalingModes.IdentityMode.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Script-102b1113.h>
#include <Fuse.Scripting.Script-1fc6121d.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Shear.h>
#include <Fuse.Size2Computer.h>
#include <Fuse.SizeComputer.h>
#include <Fuse.Stage.h>
#include <Fuse.StringComputer.h>
#include <Fuse.SystemFont.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.TranslationModes.SizeMode.h>
#include <Fuse.TranslationModes-400fada6.h>
#include <Fuse.TranslationModes-5183f957.h>
#include <Fuse.TranslationModes-98d57f14.h>
#include <Fuse.TranslationModes-f01a2450.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateAction.h>
#include <Fuse.UpdateDispatcher.h>
#include <Fuse.UpdateListener.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.ViewportHelpers.h>
#include <Fuse.Visual.CancelInt-459c56d4.h>
#include <Fuse.Visual.h>
#include <Fuse.Visual.HitTestRecord.h>
#include <Fuse.Visual.HitTestTr-39a91efd.h>
#include <Fuse.Visual.InteractionItem.h>
#include <Fuse.Visual.ParameterProperty.h>
#include <Fuse.Visual.VisualBits.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualContext.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Fuse.VisualListCache.h>
#include <Fuse.WrapException.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLInteger4Name.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.AggregateException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-6803b39e.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dicti-98f6bc43.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dicti-d6e3a7c5.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IList-b56be992.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.Data.Json.JsonWriter.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.EventSou-b16da529.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implement-5299dae0.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.Vector.h>
static uString* STRINGS[95];
static uType* TYPES[154];

namespace g{
namespace Fuse{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class AppBase :164
// {
static void AppBase_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No AppBase Current defined");
    ::STRINGS[1] = uString::Const("No RootViewport defined");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[7] = ::g::Fuse::IViewport_typeof();
    ::TYPES[8] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(AppBase_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _isInvalidateSelectionScheduled), 0,
        ::g::Fuse::Properties_typeof(), offsetof(::g::Fuse::AppBase, _properties), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Visual>*/], offsetof(::g::Fuse::AppBase, _selection), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::AppBase, _Background), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(::g::Fuse::AppBase, _RootViewport), 0,
        ::TYPES[8/*Fuse.UnhandledExceptionHandler*/], offsetof(::g::Fuse::AppBase, UnhandledException1), 0,
        ::g::Fuse::RootViewport_typeof(), (uintptr_t)&::g::Fuse::AppBase::_testRootViewport_, uFieldFlagsStatic);
}

AppBase_type* AppBase_typeof()
{
    static uSStrong<AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Application_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AppBase);
    options.TypeSize = sizeof(AppBase_type);
    type = (AppBase_type*)uClassType::New("Fuse.AppBase", options);
    type->fp_build_ = AppBase_build;
    type->fp_OnUpdate = AppBase__OnUpdate_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))AppBase__get_Properties_fn;
    return type;
}

// protected AppBase() :175
void AppBase__ctor_2_fn(AppBase* __this)
{
    __this->ctor_2();
}

// public generated float4 get_Background() :387
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background();
}

// public generated void set_Background(float4 value) :387
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value)
{
    __this->Background(*value);
}

// public static new Fuse.AppBase get_Current() :345
void AppBase__get_Current2_fn(AppBase** __retval)
{
    *__retval = AppBase::Current2();
}

// internal static Fuse.RootViewport get_CurrentRootViewport() :357
void AppBase__get_CurrentRootViewport_fn(::g::Fuse::RootViewport** __retval)
{
    *__retval = AppBase::CurrentRootViewport();
}

// private void DoInvalidateSelection() :269
void AppBase__DoInvalidateSelection_fn(AppBase* __this)
{
    __this->DoInvalidateSelection();
}

// public void DrawSelection(Fuse.DrawContext dc) :285
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawSelection(dc);
}

// private void FindSelection(Fuse.Node n) :242
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->FindSelection(n);
}

// private void InvalidateGraphicsView(Fuse.Node n) :253
void AppBase__InvalidateGraphicsView_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->InvalidateGraphicsView(n);
}

// public void InvalidateSelection() :275
void AppBase__InvalidateSelection_fn(AppBase* __this)
{
    __this->InvalidateSelection();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) :296
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnLowMemory() :301
void AppBase__OnLowMemory_fn(AppBase* __this)
{
    __this->OnLowMemory();
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) :231
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSelectionChanged(sender, args);
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) :318
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e, bool* propagate)
{
    __this->OnUnhandledException(e, *propagate);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) :335
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e)
{
    AppBase::OnUnhandledExceptionInternal(e);
}

// protected virtual void OnUpdate() :411
void AppBase__OnUpdate_fn(AppBase* __this)
{
    ::g::Fuse::UpdateManager::Update();
    ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// internal float get_PixelsPerPoint() :211
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Fuse.Properties get_Properties() :172
void AppBase__get_Properties_fn(AppBase* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// public generated Fuse.RootViewport get_RootViewport() :167
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// protected generated void set_RootViewport(Fuse.RootViewport value) :167
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value)
{
    __this->RootViewport(value);
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) :311
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->add_UnhandledException(value);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) :311
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->remove_UnhandledException(value);
}

uSStrong< ::g::Fuse::RootViewport*> AppBase::_testRootViewport_;

// protected AppBase() [instance] :175
void AppBase::ctor_2()
{
    _selection = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_1();
    Background(::g::Uno::Float4__New1(1.0f));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AppBase__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)AppBase__OnLowMemory_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler<Uno.EventArgs>*/], (void*)AppBase__OnSelectionChanged_fn, this));
}

// public generated float4 get_Background() [instance] :387
::g::Uno::Float4 AppBase::Background()
{
    return _Background;
}

// public generated void set_Background(float4 value) [instance] :387
void AppBase::Background(::g::Uno::Float4 value)
{
    ::g::Uno::Float4 value_ = value;
    _Background = value_;
}

// private void DoInvalidateSelection() [instance] :269
void AppBase::DoInvalidateSelection()
{
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Node>*/], (void*)AppBase__InvalidateGraphicsView_fn, this));
    _isInvalidateSelectionScheduled = false;
}

// public void DrawSelection(Fuse.DrawContext dc) [instance] :285
void AppBase::DrawSelection(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret3;

    if (uPtr(_selection)->Count() > 0)
    {
        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_selection), &ret3), ret3); enum1.MoveNext(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
        {
            ::g::Fuse::Visual* n = enum1.Current(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            uPtr(n)->DrawSelection(dc);
        }

        InvalidateSelection();
    }
}

// private void FindSelection(Fuse.Node n) [instance] :242
void AppBase::FindSelection(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[6/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (::g::Fuse::Preview::SelectionManager::IsSelected(v))
        ::g::Uno::Collections::List__Add_fn(uPtr(_selection), v);
}

// private void InvalidateGraphicsView(Fuse.Node n) [instance] :253
void AppBase::InvalidateGraphicsView(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[6/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (!uIs(v, ::TYPES[7/*Fuse.IViewport*/]))
        return;

    uPtr(v)->InvalidateVisual();
}

// public void InvalidateSelection() [instance] :275
void AppBase::InvalidateSelection()
{
    if (_isInvalidateSelectionScheduled)
        return;

    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)AppBase__DoInvalidateSelection_fn, this), 0);
    _isInvalidateSelectionScheduled = true;
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) [instance] :296
void AppBase::OnEnteringBackground(int s)
{
    ::g::Fuse::Resources::DisposalManager::Clean(1);
}

// private void OnLowMemory() [instance] :301
void AppBase::OnLowMemory()
{
    ::g::Fuse::Resources::DisposalManager::Clean(2);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) [instance] :231
void AppBase::OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uPtr(_selection)->Clear();
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Node>*/], (void*)AppBase__FindSelection_fn, this));
    InvalidateSelection();
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) [instance] :318
void AppBase::OnUnhandledException(::g::Uno::Exception* e, bool propagate)
{
    ::g::Uno::Diagnostics::Debug::Log4(uPtr(e)->ToString(), 3);

    if (::g::Uno::Delegate::op_Inequality(UnhandledException1, NULL))
    {
        ::g::Fuse::UnhandledExceptionArgs* args = ::g::Fuse::UnhandledExceptionArgs::New2(e);
        uPtr(UnhandledException1)->Invoke(2, this, args);

        if (args->IsHandled())
            return;
    }

    if (propagate)
        U_THROW(::g::Fuse::WrapException::New4(e));
}

// internal float get_PixelsPerPoint() [instance] :211
float AppBase::PixelsPerPoint()
{
    if (RootViewport() == NULL)
        return 1.0f;

    return uPtr(RootViewport())->PixelsPerPoint();
}

// public Fuse.Properties get_Properties() [instance] :172
::g::Fuse::Properties* AppBase::Properties()
{
    ::g::Fuse::Properties* ind2 = _properties;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Properties*)(_properties = ::g::Fuse::Properties::New1());
}

// public generated Fuse.RootViewport get_RootViewport() [instance] :167
::g::Fuse::RootViewport* AppBase::RootViewport()
{
    return _RootViewport;
}

// protected generated void set_RootViewport(Fuse.RootViewport value) [instance] :167
void AppBase::RootViewport(::g::Fuse::RootViewport* value)
{
    _RootViewport = value;
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :311
void AppBase::add_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UnhandledException1, value), ::TYPES[8/*Fuse.UnhandledExceptionHandler*/]);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :311
void AppBase::remove_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UnhandledException1, value), ::TYPES[8/*Fuse.UnhandledExceptionHandler*/]);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) [static] :335
void AppBase::OnUnhandledExceptionInternal(::g::Uno::Exception* e)
{
    AppBase* app = AppBase::Current2();

    if (app != NULL)
        uPtr(app)->OnUnhandledException(e, true);
}

// public static new Fuse.AppBase get_Current() [static] :345
AppBase* AppBase::Current2()
{
    return uAs<AppBase*>(::g::Uno::Platform::CoreApp::Current(), AppBase_typeof());
}

// internal static Fuse.RootViewport get_CurrentRootViewport() [static] :357
::g::Fuse::RootViewport* AppBase::CurrentRootViewport()
{
    if (AppBase::_testRootViewport_ != NULL)
        return AppBase::_testRootViewport_;

    if (AppBase::Current2() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"No AppBase ...*/]));

    ::g::Fuse::RootViewport* rv = uPtr(AppBase::Current2())->RootViewport();

    if (rv == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"No RootView...*/]));

    return rv;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class Behavior :433
// {
static void Behavior_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12);
}

::g::Fuse::Node_type* Behavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Behavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Behavior", options);
    type->fp_build_ = Behavior_build;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Behavior() :433
void Behavior__ctor_2_fn(Behavior* __this)
{
    __this->ctor_2();
}

// protected generated Behavior() [instance] :433
void Behavior::ctor_2()
{
    ctor_1();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class Binding :445
// {
static void Binding_build(uType* type)
{
    ::STRINGS[2] = uString::Const("double Binding rooting detected");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno");
    ::STRINGS[4] = uString::Const("Root");
    ::STRINGS[5] = uString::Const("double Binding unrooting detected");
    ::STRINGS[6] = uString::Const("Unroot");
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Binding, _Parent), 0);
}

Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Binding", options);
    type->fp_build_ = Binding_build;
    type->fp_OnRooted = Binding__OnRooted_fn;
    type->fp_OnUnrooted = Binding__OnUnrooted_fn;
    return type;
}

// protected generated Binding() :445
void Binding__ctor__fn(Binding* __this)
{
    __this->ctor_();
}

// protected virtual void OnRooted() :450
void Binding__OnRooted_fn(Binding* __this)
{
}

// protected virtual void OnUnrooted() :451
void Binding__OnUnrooted_fn(Binding* __this)
{
}

// public generated Fuse.Node get_Parent() :448
void Binding__get_Parent_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Node value) :448
void Binding__set_Parent_fn(Binding* __this, ::g::Fuse::Node* value)
{
    __this->Parent(value);
}

// internal void Root(Fuse.Node parent) :453
void Binding__Root_fn(Binding* __this, ::g::Fuse::Node* parent)
{
    __this->Root(parent);
}

// internal void Unroot() :462
void Binding__Unroot_fn(Binding* __this)
{
    __this->Unroot();
}

// protected generated Binding() [instance] :445
void Binding::ctor_()
{
}

// public generated Fuse.Node get_Parent() [instance] :448
::g::Fuse::Node* Binding::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Node value) [instance] :448
void Binding::Parent(::g::Fuse::Node* value)
{
    _Parent = value;
}

// internal void Root(Fuse.Node parent) [instance] :453
void Binding::Root(::g::Fuse::Node* parent)
{
    if (Parent() != NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[2/*"double Bind...*/], this, ::STRINGS[3/*"/Users/paul...*/], 456, ::STRINGS[4/*"Root"*/]);

    Parent(parent);
    OnRooted();
}

// internal void Unroot() [instance] :462
void Binding::Unroot()
{
    if (Parent() == NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[5/*"double Bind...*/], this, ::STRINGS[3/*"/Users/paul...*/], 465, ::STRINGS[6/*"Unroot"*/]);

    OnUnrooted();
    Parent(NULL);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class CacheFramebuffer :10
// {
static void CacheFramebuffer_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Cannot access unpinned CacheFramebuffer");
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isContentValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isPinned), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _lastFrameUsed), 0,
        ::g::Uno::Graphics::FramebufferFlags_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Flags), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Format), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Height), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Width), 0);
}

uType* CacheFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(CacheFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CacheFramebuffer", options);
    type->fp_build_ = CacheFramebuffer_build;
    return type;
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :109
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, int* width, int* height, int* format, int* flags)
{
    __this->ctor_(*width, *height, *format, *flags);
}

// internal void Collect() :29
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :36
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this)
{
    __this->Dispose();
}

// private void EnsurePinned() :22
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() :107
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) :107
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value)
{
    __this->Flags(*value);
}

// public generated Uno.Graphics.Format get_Format() :106
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :106
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value)
{
    __this->Format(*value);
}

// public framebuffer get_Framebuffer() :50
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Framebuffer();
}

// internal int get_FramesSinceLastUse() :78
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->FramesSinceLastUse();
}

// public generated int get_Height() :105
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Height();
}

// private generated void set_Height(int value) :105
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value)
{
    __this->Height(*value);
}

// public bool get_IsContentValid() :60
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsContentValid();
}

// public bool get_IsPinned() :16
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :109
void CacheFramebuffer__New1_fn(int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval)
{
    *__retval = CacheFramebuffer::New1(*width, *height, *format, *flags);
}

// public void Pin() :84
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this)
{
    __this->Pin();
}

// public void Unpin(bool validate) :96
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate)
{
    __this->Unpin(*validate);
}

// public generated int get_Width() :104
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Width();
}

// private generated void set_Width(int value) :104
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value)
{
    __this->Width(*value);
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :109
void CacheFramebuffer::ctor_(int width, int height, int format, int flags)
{
    Width(width);
    Height(height);
    Format(format);
    Flags(flags);
}

// internal void Collect() [instance] :29
void CacheFramebuffer::Collect()
{
    if (_fb != NULL)
        ::g::Fuse::FramebufferPool::Release(_fb);

    _fb = NULL;
    _isContentValid = false;
}

// public void Dispose() [instance] :36
void CacheFramebuffer::Dispose()
{
    Collect();
    ::g::Fuse::FramebufferPool::UnRegister(this);
}

// private void EnsurePinned() [instance] :22
void CacheFramebuffer::EnsurePinned()
{
    if (!IsPinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Cannot acce...*/]));
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() [instance] :107
int CacheFramebuffer::Flags()
{
    return _Flags;
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) [instance] :107
void CacheFramebuffer::Flags(int value)
{
    _Flags = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :106
int CacheFramebuffer::Format()
{
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :106
void CacheFramebuffer::Format(int value)
{
    _Format = value;
}

// public framebuffer get_Framebuffer() [instance] :50
::g::Uno::Graphics::Framebuffer* CacheFramebuffer::Framebuffer()
{
    EnsurePinned();
    return _fb;
}

// internal int get_FramesSinceLastUse() [instance] :78
int CacheFramebuffer::FramesSinceLastUse()
{
    return ::g::Fuse::FramebufferPool::Frame() - _lastFrameUsed;
}

// public generated int get_Height() [instance] :105
int CacheFramebuffer::Height()
{
    return _Height;
}

// private generated void set_Height(int value) [instance] :105
void CacheFramebuffer::Height(int value)
{
    _Height = value;
}

// public bool get_IsContentValid() [instance] :60
bool CacheFramebuffer::IsContentValid()
{
    EnsurePinned();
    return _isContentValid;
}

// public bool get_IsPinned() [instance] :16
bool CacheFramebuffer::IsPinned()
{
    return _isPinned;
}

// public void Pin() [instance] :84
void CacheFramebuffer::Pin()
{
    _isPinned = true;
    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();

    if (_fb == NULL)
    {
        _fb = ::g::Fuse::FramebufferPool::Lock(Width(), Height(), Format(), (Flags() & 1) == 1);
        ::g::Fuse::FramebufferPool::Register(this);
    }
}

// public void Unpin(bool validate) [instance] :96
void CacheFramebuffer::Unpin(bool validate)
{
    EnsurePinned();
    _isPinned = false;

    if (validate)
        _isContentValid = true;

    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();
}

// public generated int get_Width() [instance] :104
int CacheFramebuffer::Width()
{
    return _Width;
}

// private generated void set_Width(int value) [instance] :104
void CacheFramebuffer::Width(int value)
{
    _Width = value;
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :109
CacheFramebuffer* CacheFramebuffer::New1(int width, int height, int format, int flags)
{
    CacheFramebuffer* obj1 = (CacheFramebuffer*)uNew(CacheFramebuffer_typeof());
    obj1->ctor_(width, height, format, flags);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum Visual.CancelInteractionsType :5842
uEnumType* Visual__CancelInteractionsType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.CancelInteractionsType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Recursive", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal abstract class Computer :16
// {
static void Computer_build(uType* type)
{
}

uType* Computer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Computer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Computer", options);
    type->fp_build_ = Computer_build;
    return type;
}

// protected generated Computer() :16
void Computer__ctor__fn(Computer* __this)
{
    __this->ctor_();
}

// protected generated Computer() [instance] :16
void Computer::ctor_()
{
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal abstract class Computer<T> :31
// {
static void Computer1_build(uType* type)
{
}

uType* Computer1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Computer1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Computer`1", options);
    type->fp_build_ = Computer1_build;
    return type;
}

// protected generated Computer() :31
void Computer1__ctor_1_fn(Computer1* __this)
{
    __this->ctor_1();
}

// protected generated Computer() [instance] :31
void Computer1::ctor_1()
{
    ctor_();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal abstract class Node.DataFinder :2370
// {
static void Node__DataFinder_build(uType* type)
{
    ::STRINGS[8] = uString::Const("");
    ::TYPES[9] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__DataFinder_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Node__DataFinder, _key), 0);
}

Node__DataFinder_type* Node__DataFinder_typeof()
{
    static uSStrong<Node__DataFinder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Node__DataFinder);
    options.TypeSize = sizeof(Node__DataFinder_type);
    type = (Node__DataFinder_type*)uClassType::New("Fuse.Node.DataFinder", options);
    type->fp_build_ = Node__DataFinder_build;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))Node__DataFinder__NextData_fn;
    return type;
}

// protected DataFinder(string key) :2374
void Node__DataFinder__ctor__fn(Node__DataFinder* __this, uString* key)
{
    __this->ctor_(key);
}

// protected string get_Key() :2373
void Node__DataFinder__get_Key_fn(Node__DataFinder* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// public bool NextData(object data) :2375
void Node__DataFinder__NextData_fn(Node__DataFinder* __this, uObject* data, bool* __retval)
{
    *__retval = __this->NextData(data);
}

// protected DataFinder(string key) [instance] :2374
void Node__DataFinder::ctor_(uString* key)
{
    _key = key;
}

// protected string get_Key() [instance] :2373
uString* Node__DataFinder::Key()
{
    return _key;
}

// public bool NextData(object data) [instance] :2375
bool Node__DataFinder::NextData(uObject* data)
{
    if (::g::Uno::String::op_Equality(_key, ::STRINGS[8/*""*/]))
    {
        Resolve(data);
        return false;
    }
    else
    {
        uObject* obj = uAs<uObject*>(data, ::TYPES[9/*Fuse.IObject*/]);

        if (obj != NULL)
        {
            if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[9/*Fuse.IObject*/]), _key))
            {
                Resolve(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[9/*Fuse.IObject*/]), _key));
                return false;
            }
        }
    }

    return true;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class Node.DataWatcher :2866
// {
static void Node__DataWatcher_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__DataWatcher_type, interface0),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(Node__DataWatcher_type, interface1));
    type->SetFields(1,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Node__DataWatcher, _context), 0,
        uObject_typeof(), offsetof(::g::Fuse::Node__DataWatcher, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Node__DataWatcher, _node), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Node__DataWatcher, _updateCallback), 0);
}

Node__DataWatcher_type* Node__DataWatcher_typeof()
{
    static uSStrong<Node__DataWatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Node__DataWatcher);
    options.TypeSize = sizeof(Node__DataWatcher_type);
    type = (Node__DataWatcher_type*)uClassType::New("Fuse.Node.DataWatcher", options);
    type->fp_build_ = Node__DataWatcher_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*))Node__DataWatcher__Resolve_fn;
    type->interface1.fp_OnDataChanged = (void(*)(uObject*))Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataWatcher(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) :2872
void Node__DataWatcher__ctor_1_fn(Node__DataWatcher* __this, ::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    __this->ctor_1(node, context, updateCallback, key);
}

// public void Dispose() :2897
void Node__DataWatcher__Dispose_fn(Node__DataWatcher* __this)
{
    __this->Dispose();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :2892
void Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn(Node__DataWatcher* __this)
{
    uPtr(__this->_node)->EnumerateData((uObject*)__this);
}

// public DataWatcher New(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) :2872
void Node__DataWatcher__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key, Node__DataWatcher** __retval)
{
    *__retval = Node__DataWatcher::New1(node, context, updateCallback, key);
}

// protected override sealed void Resolve(object data) :2903
void Node__DataWatcher__Resolve_fn(Node__DataWatcher* __this, uObject* data)
{
    __this->_data = data;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_context)->Dispatcher()), ::TYPES[10/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Node__DataWatcher__Update_fn, __this));
}

// private void Subscribe() :2881
void Node__DataWatcher__Subscribe_fn(Node__DataWatcher* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :2887
void Node__DataWatcher__Unsubscribe_fn(Node__DataWatcher* __this)
{
    __this->Unsubscribe();
}

// private void Update() :2909
void Node__DataWatcher__Update_fn(Node__DataWatcher* __this)
{
    __this->Update();
}

// public DataWatcher(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) [instance] :2872
void Node__DataWatcher::ctor_1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    ctor_(key);
    _node = node;
    _context = context;
    _updateCallback = updateCallback;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Node__DataWatcher__Subscribe_fn, this));
}

// public void Dispose() [instance] :2897
void Node__DataWatcher::Dispose()
{
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Node__DataWatcher__Unsubscribe_fn, this));
}

// private void Subscribe() [instance] :2881
void Node__DataWatcher::Subscribe()
{
    uPtr(_node)->EnumerateData((uObject*)this);
    uPtr(_node)->AddDataListener(Key(), (uObject*)this);
}

// private void Unsubscribe() [instance] :2887
void Node__DataWatcher::Unsubscribe()
{
    uPtr(_node)->RemoveDataListener(Key(), (uObject*)this);
}

// private void Update() [instance] :2909
void Node__DataWatcher::Update()
{
    uPtr(_updateCallback)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, (uObject*)uPtr(_context)->Unwrap(_data)));
}

// public DataWatcher New(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) [static] :2872
Node__DataWatcher* Node__DataWatcher::New1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    Node__DataWatcher* obj1 = (Node__DataWatcher*)uNew(Node__DataWatcher_typeof());
    obj1->ctor_1(node, context, updateCallback, key);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class Diagnostic :142
// {
static void Diagnostic_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Success");
    ::STRINGS[10] = uString::Const("Error");
    ::STRINGS[11] = uString::Const("Warning");
    ::STRINGS[12] = uString::Const(": ");
    ::STRINGS[13] = uString::Const(" in ");
    ::STRINGS[14] = uString::Const("<");
    ::STRINGS[15] = uString::Const(":");
    ::STRINGS[16] = uString::Const(">");
    ::STRINGS[17] = uString::Const("invalid Type: ");
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Diagnostic, Exception), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, FilePath), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Diagnostic, LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, MemberName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, Message), 0,
        uObject_typeof(), offsetof(::g::Fuse::Diagnostic, SourceObject), 0,
        ::g::Fuse::DiagnosticType_typeof(), offsetof(::g::Fuse::Diagnostic, Type), 0);
}

uType* Diagnostic_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Diagnostic);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Diagnostic", options);
    type->fp_build_ = Diagnostic_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Diagnostic__ToString_fn;
    return type;
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :177
void Diagnostic__ctor__fn(Diagnostic* __this, int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    __this->ctor_(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :177
void Diagnostic__New1_fn(int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval)
{
    *__retval = Diagnostic::New1(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public override sealed string ToString() :189
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval)
{
    uString* msg = ::g::Uno::String::Empty();

    switch (__this->Type)
    {
        case 0:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[9/*"Success"*/]);
            break;
        }
        case 1:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[10/*"Error"*/]);
            break;
        }
        case 2:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[11/*"Warning"*/]);
            break;
        }
        default:
        {
            msg = ::g::Uno::String::op_Addition1(msg, uBox<int>(::g::Fuse::DiagnosticType_typeof(), __this->Type));
            break;
        }
    }

    msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[12/*": "*/]);

    if (::g::Uno::String::op_Inequality(__this->Message, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, __this->Message);

    if (__this->Exception != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::STRINGS[12/*": "*/], uPtr(__this->Exception)->Message()));

    if (__this->SourceObject != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition1(::STRINGS[13/*" in "*/], __this->SourceObject));

    if (::g::Uno::String::op_Inequality(__this->FilePath, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[14/*"<"*/], __this->FilePath), ::STRINGS[15/*":"*/]), uBox<int>(::TYPES[39/*int*/], __this->LineNumber)), ::STRINGS[16/*">"*/]));

    return *__retval = msg, void();
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() :154
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->UnoType();
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [instance] :177
void Diagnostic::ctor_(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    Type = type;
    Message = message;
    SourceObject = sourceObject;
    FilePath = filePath;
    LineNumber = lineNumber;
    MemberName = memberName;
    Exception = ::g::Fuse::WrapException::Unwrap(exception);
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() [instance] :154
int Diagnostic::UnoType()
{
    switch (Type)
    {
        case 0:
            return 2;
        case 2:
        case 4:
        case 5:
        case 6:
            return 4;
        case 1:
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[17/*"invalid Typ...*/], uBox<int>(::g::Fuse::DiagnosticType_typeof(), Type))));
    }
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [static] :177
Diagnostic* Diagnostic::New1(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    Diagnostic* obj1 = (Diagnostic*)uNew(Diagnostic_typeof());
    obj1->ctor_(type, message, sourceObject, filePath, lineNumber, memberName, exception);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public delegate void DiagnosticHandler(Fuse.Diagnostic d) :225
uDelegateType* DiagnosticHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DiagnosticHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Diagnostic_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class Diagnostics :245
// {
// static Diagnostics() :245
static void Diagnostics__cctor__fn(uType* __type)
{
    Diagnostics::_currentDiagnostics_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Diagnostic>*/]));
}

static void Diagnostics_build(uType* type)
{
    ::STRINGS[18] = uString::Const(" cannot be used in a ");
    ::STRINGS[19] = uString::Const(".");
    ::STRINGS[20] = uString::Const(" A ");
    ::STRINGS[21] = uString::Const(" parent is expected");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::DiagnosticHandler_typeof();
    type->SetFields(0,
        ::TYPES[12/*Uno.Collections.List<Fuse.Diagnostic>*/], (uintptr_t)&::g::Fuse::Diagnostics::_currentDiagnostics_, uFieldFlagsStatic,
        ::TYPES[13/*Fuse.DiagnosticHandler*/], (uintptr_t)&::g::Fuse::Diagnostics::DiagnosticReported1_, uFieldFlagsStatic);
}

uClassType* Diagnostics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Diagnostics", options);
    type->fp_build_ = Diagnostics_build;
    type->fp_cctor_ = Diagnostics__cctor__fn;
    return type;
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :362
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Deprecated(msg, obj, filePath, *lineNumber, memberName);
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) :247
void Diagnostics__add_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::add_DiagnosticReported(value);
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) :247
void Diagnostics__remove_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::remove_DiagnosticReported(value);
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) :344
void Diagnostics__InternalError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::InternalError(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Report(Fuse.Diagnostic d) :249
void Diagnostics__Report_fn(::g::Fuse::Diagnostic* d)
{
    Diagnostics::Report(d);
}

// public static Uno.IDisposable ReportTemporal(Fuse.Diagnostic diag) :280
void Diagnostics__ReportTemporal_fn(::g::Fuse::Diagnostic* diag, uObject** __retval)
{
    *__retval = Diagnostics::ReportTemporal(diag);
}

// public static Uno.IDisposable ReportTemporalUserWarning(string message, object origin) :285
void Diagnostics__ReportTemporalUserWarning_fn(uString* message, uObject* origin, uObject** __retval)
{
    *__retval = Diagnostics::ReportTemporalUserWarning(message, origin);
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) :355
void Diagnostics__UnknownException_fn(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UnknownException(msg, ex, obj, filePath, *lineNumber, memberName);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :369
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Unsupported(msg, obj, filePath, *lineNumber, memberName);
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName], [Uno.Exception e]) :294
void Diagnostics__UserError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* e)
{
    Diagnostics::UserError(msg, obj, filePath, *lineNumber, memberName, e);
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) :332
void Diagnostics__UserRootError_fn(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserRootError(expectedType, actualParent, obj, filePath, *lineNumber, memberName);
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :305
void Diagnostics__UserSuccess_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserSuccess(msg, obj, filePath, *lineNumber, memberName);
}

// private static string UserTypeOf(object a) :317
void Diagnostics__UserTypeOf_fn(uObject* a, uString** __retval)
{
    *__retval = Diagnostics::UserTypeOf(a);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :390
void Diagnostics__UserWarning_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserWarning(msg, obj, filePath, *lineNumber, memberName);
}

uSStrong< ::g::Uno::Collections::List*> Diagnostics::_currentDiagnostics_;
uSStrong<uDelegate*> Diagnostics::DiagnosticReported1_;

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :362
void Diagnostics::Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(4, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) [static] :344
void Diagnostics::InternalError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void Report(Fuse.Diagnostic d) [static] :249
void Diagnostics::Report(::g::Fuse::Diagnostic* d)
{
    Diagnostics_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Diagnostics::DiagnosticReported1(), NULL))
        uPtr(Diagnostics::DiagnosticReported1())->InvokeVoid(d);
    else
        ::g::Uno::Diagnostics::Debug::Log4(uPtr(d)->ToString(), uPtr(d)->UnoType());
}

// public static Uno.IDisposable ReportTemporal(Fuse.Diagnostic diag) [static] :280
uObject* Diagnostics::ReportTemporal(::g::Fuse::Diagnostic* diag)
{
    Diagnostics_typeof()->Init();
    return (uObject*)Diagnostics__Temporal::New1(diag);
}

// public static Uno.IDisposable ReportTemporalUserWarning(string message, object origin) [static] :285
uObject* Diagnostics::ReportTemporalUserWarning(uString* message, uObject* origin)
{
    Diagnostics_typeof()->Init();
    return Diagnostics::ReportTemporal(::g::Fuse::Diagnostic::New1(2, message, origin, NULL, 0, NULL, NULL));
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :355
void Diagnostics::UnknownException(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, ex));
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :369
void Diagnostics::Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(5, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName], [Uno.Exception e]) [static] :294
void Diagnostics::UserError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* e)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(1, msg, obj, filePath, lineNumber, memberName, e));
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :332
void Diagnostics::UserRootError(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Diagnostics::UserTypeOf(obj), ::STRINGS[18/*" cannot be ...*/]), Diagnostics::UserTypeOf(actualParent)), ::STRINGS[19/*"."*/]), ::STRINGS[20/*" A "*/]), expectedType), ::STRINGS[21/*" parent is ...*/]), obj, filePath, lineNumber, memberName, NULL);
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :305
void Diagnostics::UserSuccess(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(0, msg, obj, filePath, lineNumber, memberName, NULL));
}

// private static string UserTypeOf(object a) [static] :317
uString* Diagnostics::UserTypeOf(uObject* a)
{
    Diagnostics_typeof()->Init();
    uString* q = ::g::Uno::String::op_Addition1(::STRINGS[8/*""*/], a);
    int e = ::g::Uno::String::LastIndexOf(uPtr(q), '.');

    if (e == -1)
        e = 0;
    else
        e = e + 1;

    return ::g::Uno::String::Substring(q, e);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :390
void Diagnostics::UserWarning(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics_typeof()->Init();
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(2, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :247
void Diagnostics::add_DiagnosticReported(uDelegate* value)
{
    Diagnostics_typeof()->Init();
    Diagnostics::DiagnosticReported1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Diagnostics::DiagnosticReported1(), value), ::TYPES[13/*Fuse.DiagnosticHandler*/]);
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :247
void Diagnostics::remove_DiagnosticReported(uDelegate* value)
{
    Diagnostics_typeof()->Init();
    Diagnostics::DiagnosticReported1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Diagnostics::DiagnosticReported1(), value), ::TYPES[13/*Fuse.DiagnosticHandler*/]);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public enum DiagnosticType :128
uEnumType* DiagnosticType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.DiagnosticType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "UserSuccess", 0LL,
        "UserError", 1LL,
        "UserWarning", 2LL,
        "InternalError", 3LL,
        "Deprecated", 4LL,
        "Unsupported", 5LL,
        "PerformanceWarning", 6LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class DrawContext :502
// {
static void DrawContext_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno");
    ::STRINGS[22] = uString::Const("CaptureRootbuffer");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[23] = uString::Const("Clear");
    ::STRINGS[24] = uString::Const("PopRenderTarget");
    ::STRINGS[25] = uString::Const("PushRenderTarget");
    ::STRINGS[26] = uString::Const("Unpopped Scissor");
    ::STRINGS[27] = uString::Const("ReleaseRootbuffer");
    ::STRINGS[28] = uString::Const("Unpopped CullFace");
    ::STRINGS[29] = uString::Const("Unpopped Viewport");
    ::STRINGS[30] = uString::Const("Unpopped RenderTarget");
    ::STRINGS[31] = uString::Const("set_GLFramebuffer");
    ::STRINGS[32] = uString::Const("set_GLScissor");
    ::STRINGS[33] = uString::Const("set_GLViewportPixelSize");
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IRenderViewport_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof(), NULL);
    ::TYPES[18] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<Fuse.RenderTargetEntry>*/, ::g::Fuse::RenderTargetEntry_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<int4>*/, ::g::Uno::Int4_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<Fuse.IRenderViewport>*/, ::TYPES[18/*Fuse.IRenderViewport*/], NULL);
    ::TYPES[22] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[23] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::DrawContext, _cullFace), 0,
        ::TYPES[17/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/], offsetof(::g::Fuse::DrawContext, _cullFaces), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::DrawContext, _glFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glScissor), 0,
        ::TYPES[16/*Uno.Collections.List<int4>*/], offsetof(::g::Fuse::DrawContext, _glScissors), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glViewport), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(::g::Fuse::DrawContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _renderTarget), 0,
        ::TYPES[15/*Uno.Collections.List<Fuse.RenderTargetEntry>*/], offsetof(::g::Fuse::DrawContext, _renderTargets), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _rootbuffer), 0,
        ::TYPES[18/*Fuse.IRenderViewport*/], offsetof(::g::Fuse::DrawContext, _viewport), 0,
        ::TYPES[14/*Uno.Collections.List<Fuse.IRenderViewport>*/], offsetof(::g::Fuse::DrawContext, _viewports), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::DrawContext, _IsCaching), 0,
        ::TYPES[23/*Uno.EventHandler*/], offsetof(::g::Fuse::DrawContext, RenderTargetChange1), 0);
}

uType* DrawContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(DrawContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawContext", options);
    type->fp_build_ = DrawContext_build;
    return type;
}

// public DrawContext(Fuse.IRenderViewport viewport) :535
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport)
{
    __this->ctor_(viewport);
}

// internal void CaptureRootbuffer() :555
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this)
{
    __this->CaptureRootbuffer();
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) :835
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName)
{
    __this->CheckGLError(filePath, *lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) :700
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// public Uno.Graphics.PolygonFace get_CullFace() :821
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) :525
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Visual* n, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetLocalToClipTransform(n);
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() :630
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval)
{
    *__retval = __this->GetRenderTargetEntry();
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() :612
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebuffer();
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) :622
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value)
{
    __this->GLFramebuffer(*value);
}

// private int4 get_GLScissor() :732
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval)
{
    *__retval = __this->GLScissor();
}

// private void set_GLScissor(int4 value) :743
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value)
{
    __this->GLScissor(*value);
}

// public int2 get_GLViewportPixelSize() :776
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->GLViewportPixelSize();
}

// private void set_GLViewportPixelSize(int2 value) :787
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value)
{
    __this->GLViewportPixelSize(*value);
}

// public generated bool get_IsCaching() :815
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval)
{
    *__retval = __this->IsCaching();
}

// public generated void set_IsCaching(bool value) :815
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value)
{
    __this->IsCaching(*value);
}

// public DrawContext New(Fuse.IRenderViewport viewport) :535
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval)
{
    *__retval = DrawContext::New1(viewport);
}

// internal void OnRenderTargetChange() :549
void DrawContext__OnRenderTargetChange_fn(DrawContext* __this)
{
    __this->OnRenderTargetChange();
}

// public void PopRenderTarget() :662
void DrawContext__PopRenderTarget_fn(DrawContext* __this)
{
    __this->PopRenderTarget();
}

// public void PopRenderTargetFrustum() :688
void DrawContext__PopRenderTargetFrustum_fn(DrawContext* __this)
{
    __this->PopRenderTargetFrustum();
}

// public void PopScissor() :762
void DrawContext__PopScissor_fn(DrawContext* __this)
{
    __this->PopScissor();
}

// public void PopViewport() :519
void DrawContext__PopViewport_fn(DrawContext* __this)
{
    __this->PopViewport();
}

// public void PushRenderTarget(framebuffer fb) :638
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget(fb);
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) :643
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget1(rt);
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) :648
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor)
{
    __this->PushRenderTarget2(rt, *viewportPixelSize, *glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) :676
void DrawContext__PushRenderTargetFrustum_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    __this->PushRenderTargetFrustum(fb, frustum);
}

// public void PushScissor(Uno.Recti scissor) :756
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor)
{
    __this->PushScissor(*scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) :512
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v)
{
    __this->PushViewport(v);
}

// internal void ReleaseRootbuffer() :581
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this)
{
    __this->ReleaseRootbuffer();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :606
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public generated void add_RenderTargetChange(Uno.EventHandler value) :547
void DrawContext__add_RenderTargetChange_fn(DrawContext* __this, uDelegate* value)
{
    __this->add_RenderTargetChange(value);
}

// public generated void remove_RenderTargetChange(Uno.EventHandler value) :547
void DrawContext__remove_RenderTargetChange_fn(DrawContext* __this, uDelegate* value)
{
    __this->remove_RenderTargetChange(value);
}

// public Uno.Recti get_Scissor() :714
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// internal void set_Scissor(Uno.Recti value) :722
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public Fuse.IRenderViewport get_Viewport() :508
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public float get_ViewportPixelsPerPoint() :809
void DrawContext__get_ViewportPixelsPerPoint_fn(DrawContext* __this, float* __retval)
{
    *__retval = __this->ViewportPixelsPerPoint();
}

// public DrawContext(Fuse.IRenderViewport viewport) [instance] :535
void DrawContext::ctor_(uObject* viewport)
{
    _viewports = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<Fuse.IRenderViewport>*/]));
    _renderTargets = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.RenderTargetEntry>*/]));
    _glScissors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<int4>*/]));
    _cullFaces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/]));
    _handle = (void*)NULL;
    _viewport = viewport;
    _rootbuffer = ::g::Uno::Graphics::RenderTarget::New1();
    _renderTarget = _rootbuffer;
}

// internal void CaptureRootbuffer() [instance] :555
void DrawContext::CaptureRootbuffer()
{
    ::g::OpenGL::GL::Enable(3089);
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 560, ::STRINGS[22/*"CaptureRoot...*/]);
    _glScissor = ::g::OpenGL::GL::GetInteger(3088);
    _glViewport = ::g::OpenGL::GL::GetInteger(2978);
    _glFramebuffer = ::g::OpenGL::GL::GetFramebufferBinding();
    uPtr(_rootbuffer)->GLFramebufferHandle(_glFramebuffer);
    ::g::Uno::Float2 size = ::g::Fuse::Platform::SystemUI::Frame().Size();
    uPtr(_rootbuffer)->Size(::g::Uno::Int2__New2((int)size.X, (int)size.Y));
    uPtr(_rootbuffer)->HasDepth(true);
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) [instance] :835
void DrawContext::CheckGLError(uString* filePath, int lineNumber, uString* memberName)
{
    int e = ::g::OpenGL::GL::GetError();

    if (e != 0)
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[8/*""*/], uBox<int>(::g::OpenGL::GLError_typeof(), e)), this, filePath, lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) [instance] :700
void DrawContext::Clear(::g::Uno::Float4 color, float depth)
{
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 708, ::STRINGS[23/*"Clear"*/]);
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :821
int DrawContext::CullFace()
{
    return _cullFace;
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) [instance] :525
::g::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::g::Fuse::Visual* n)
{
    ::g::Uno::Float4x4 m = uPtr(n)->WorldTransform();
    ::g::Uno::Float4x4 p = ::g::Uno::Matrix::Mul8(m, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(_viewport), ::TYPES[18/*Fuse.IRenderViewport*/])));
    return p;
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() [instance] :630
::g::Fuse::RenderTargetEntry* DrawContext::GetRenderTargetEntry()
{
    return ::g::Fuse::RenderTargetEntry::New1(RenderTarget(), GLViewportPixelSize(), GLScissor(), GLFramebuffer());
    return NULL;
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() [instance] :612
uint32_t DrawContext::GLFramebuffer()
{
    return _glFramebuffer;
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) [instance] :622
void DrawContext::GLFramebuffer(uint32_t value)
{
    _glFramebuffer = value;
    ::g::OpenGL::GL::BindFramebuffer(36160, value);
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 626, ::STRINGS[31/*"set_GLFrame...*/]);
}

// private int4 get_GLScissor() [instance] :732
::g::Uno::Int4 DrawContext::GLScissor()
{
    return _glScissor;
}

// private void set_GLScissor(int4 value) [instance] :743
void DrawContext::GLScissor(::g::Uno::Int4 value)
{
    _glScissor = value;
    ::g::OpenGL::GL::Scissor(value.Item(0), value.Item(1), value.Item(2), value.Item(3));
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 749, ::STRINGS[32/*"set_GLScissor"*/]);
}

// public int2 get_GLViewportPixelSize() [instance] :776
::g::Uno::Int2 DrawContext::GLViewportPixelSize()
{
    ::g::Uno::Int4 ind1 = _glViewport;
    return ::g::Uno::Int2__New2(ind1.Z, ind1.W);
}

// private void set_GLViewportPixelSize(int2 value) [instance] :787
void DrawContext::GLViewportPixelSize(::g::Uno::Int2 value)
{
    _glViewport = ::g::Uno::Int4__New2(0, 0, value.X, value.Y);
    ::g::OpenGL::GL::Viewport(0, 0, value.X, value.Y);
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 793, ::STRINGS[33/*"set_GLViewp...*/]);
}

// public generated bool get_IsCaching() [instance] :815
bool DrawContext::IsCaching()
{
    return _IsCaching;
}

// public generated void set_IsCaching(bool value) [instance] :815
void DrawContext::IsCaching(bool value)
{
    _IsCaching = value;
}

// internal void OnRenderTargetChange() [instance] :549
void DrawContext::OnRenderTargetChange()
{
    if (::g::Uno::Delegate::op_Inequality(RenderTargetChange1, NULL))
        uPtr(RenderTargetChange1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void PopRenderTarget() [instance] :662
void DrawContext::PopRenderTarget()
{
    ::g::Fuse::RenderTargetEntry* ret4;
    OnRenderTargetChange();
    ::g::Fuse::RenderTargetEntry* old = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[19/*Uno.Collections.IListExtensions.RemoveLast<Fuse.RenderTargetEntry>*/], (uObject*)_renderTargets, &ret4), ret4);
    _renderTarget = uPtr(old)->RenderTarget;
    GLFramebuffer(uPtr(old)->GLFramebuffer);
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 670, ::STRINGS[24/*"PopRenderTa...*/]);
    GLViewportPixelSize(old->GLViewportPixelSize);
    GLScissor(old->GLScissor);
}

// public void PopRenderTargetFrustum() [instance] :688
void DrawContext::PopRenderTargetFrustum()
{
    PopViewport();
    PopRenderTarget();
}

// public void PopScissor() [instance] :762
void DrawContext::PopScissor()
{
    ::g::Uno::Int4 ret5;
    ::g::Uno::Int4 s = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[20/*Uno.Collections.IListExtensions.RemoveLast<int4>*/], (uObject*)_glScissors, &ret5), ret5);
    GLScissor(s);
}

// public void PopViewport() [instance] :519
void DrawContext::PopViewport()
{
    uObject* ret6;
    OnRenderTargetChange();
    _viewport = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[21/*Uno.Collections.IListExtensions.RemoveLast<Fuse.IRenderViewport>*/], (uObject*)_viewports, &ret6), ret6);
}

// public void PushRenderTarget(framebuffer fb) [instance] :638
void DrawContext::PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb)
{
    PushRenderTarget1(uPtr(fb)->RenderTarget());
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) [instance] :643
void DrawContext::PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt)
{
    PushRenderTarget2(rt, uPtr(rt)->Size(), ::g::Uno::Int4__New2(0, 0, uPtr(rt)->Size().X, uPtr(rt)->Size().Y));
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) [instance] :648
void DrawContext::PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor)
{
    OnRenderTargetChange();
    ::g::Uno::Collections::List__Add_fn(uPtr(_renderTargets), GetRenderTargetEntry());
    GLFramebuffer(uPtr(rt)->GLFramebufferHandle());
    CheckGLError(::STRINGS[3/*"/Users/paul...*/], 655, ::STRINGS[25/*"PushRenderT...*/]);
    _renderTarget = rt;
    GLViewportPixelSize(viewportPixelSize);
    GLScissor(glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) [instance] :676
void DrawContext::PushRenderTargetFrustum(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport((uObject*)::g::Fuse::FixedViewport::New1(fb->Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[22/*Fuse.ICommonViewport*/])), frustum));
}

// public void PushScissor(Uno.Recti scissor) [instance] :756
void DrawContext::PushScissor(::g::Uno::Recti scissor)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_glScissors), uCRef(GLScissor()));
    Scissor(scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) [instance] :512
void DrawContext::PushViewport(uObject* v)
{
    OnRenderTargetChange();
    ::g::Uno::Collections::List__Add_fn(uPtr(_viewports), _viewport);
    _viewport = v;
}

// internal void ReleaseRootbuffer() [instance] :581
void DrawContext::ReleaseRootbuffer()
{
    if (uPtr(_glScissors)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[26/*"Unpopped Sc...*/], this, ::STRINGS[3/*"/Users/paul...*/], 586, ::STRINGS[27/*"ReleaseRoot...*/]);

    uPtr(_glScissors)->Clear();

    if (uPtr(_cullFaces)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[28/*"Unpopped Cu...*/], this, ::STRINGS[3/*"/Users/paul...*/], 590, ::STRINGS[27/*"ReleaseRoot...*/]);

    uPtr(_cullFaces)->Clear();

    if (uPtr(_viewports)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[29/*"Unpopped Vi...*/], this, ::STRINGS[3/*"/Users/paul...*/], 594, ::STRINGS[27/*"ReleaseRoot...*/]);

    uPtr(_viewports)->Clear();

    if (uPtr(_renderTargets)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[30/*"Unpopped Re...*/], this, ::STRINGS[3/*"/Users/paul...*/], 598, ::STRINGS[27/*"ReleaseRoot...*/]);

    uPtr(_renderTargets)->Clear();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :606
::g::Uno::Graphics::RenderTarget* DrawContext::RenderTarget()
{
    return _renderTarget;
}

// public generated void add_RenderTargetChange(Uno.EventHandler value) [instance] :547
void DrawContext::add_RenderTargetChange(uDelegate* value)
{
    RenderTargetChange1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderTargetChange1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// public generated void remove_RenderTargetChange(Uno.EventHandler value) [instance] :547
void DrawContext::remove_RenderTargetChange(uDelegate* value)
{
    RenderTargetChange1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderTargetChange1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// public Uno.Recti get_Scissor() [instance] :714
::g::Uno::Recti DrawContext::Scissor()
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    ::g::Uno::Int4 gl = GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::g::Uno::Recti__New1(x, y, x + gl.Z, y + gl.W);
}

// internal void set_Scissor(Uno.Recti value) [instance] :722
void DrawContext::Scissor(::g::Uno::Recti value)
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    GLScissor(::g::Uno::Int4__New2(value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// public Fuse.IRenderViewport get_Viewport() [instance] :508
uObject* DrawContext::Viewport()
{
    return _viewport;
}

// public float get_ViewportPixelsPerPoint() [instance] :809
float DrawContext::ViewportPixelsPerPoint()
{
    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[22/*Fuse.ICommonViewport*/]));
}

// public DrawContext New(Fuse.IRenderViewport viewport) [static] :535
DrawContext* DrawContext::New1(uObject* viewport)
{
    DrawContext* obj2 = (DrawContext*)uNew(DrawContext_typeof());
    obj2->ctor_(viewport);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class DrawHelpers :5179
// {
static void DrawHelpers_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::DrawHelpers, _draw_1e24cb92), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Coord_1e24cb92_1_2_1), 0,
        ::TYPES[24/*float2[]*/], offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Vertices_1e24cb92_1_1_4), 0,
        type, (uintptr_t)&::g::Fuse::DrawHelpers::_instance_, uFieldFlagsStatic);
}

uType* DrawHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DrawHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawHelpers", options);
    type->fp_build_ = DrawHelpers_build;
    type->fp_ctor_ = (void*)DrawHelpers__New1_fn;
    return type;
}

// public generated DrawHelpers() :5179
void DrawHelpers__ctor__fn(DrawHelpers* __this)
{
    __this->ctor_();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) :5193
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color)
{
    __this->DrawLocalRect(dc, *rect, *transform, *lineWidth, *color);
}

// private generated void init_DrawCalls() :5179
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

// public generated DrawHelpers New() :5179
void DrawHelpers__New1_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::New1();
}

// internal static Fuse.DrawHelpers get_Singelton() :5185
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::Singelton();
}

uSStrong<DrawHelpers*> DrawHelpers::_instance_;

// public generated DrawHelpers() [instance] :5179
void DrawHelpers::ctor_()
{
    init_DrawCalls();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) [instance] :5193
void DrawHelpers::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color)
{
    _draw_1e24cb92.BlendEnabled(true);
    _draw_1e24cb92.DepthTestEnabled(false);
    _draw_1e24cb92.LineWidth(lineWidth);
    _draw_1e24cb92.PrimitiveType(5);
    _draw_1e24cb92.BlendSrcRgb(2);
    _draw_1e24cb92.BlendDstRgb(3);
    _draw_1e24cb92.BlendDstAlpha(3);
    _draw_1e24cb92.Use();
    _draw_1e24cb92.Attrib1(0, 2, DrawLocalRect_Coord_1e24cb92_1_2_1, 8, 0);
    _draw_1e24cb92.Uniform2(1, rect.Size());
    _draw_1e24cb92.Uniform2(2, rect.Position());
    _draw_1e24cb92.Uniform12(3, transform);
    _draw_1e24cb92.Uniform10(4, color);
    _draw_1e24cb92.DrawArrays(uPtr(DrawLocalRect_Vertices_1e24cb92_1_1_4)->Length());
}

// private generated void init_DrawCalls() [instance] :5179
void DrawHelpers::init_DrawCalls()
{
    uArray* Vertices_1e24cb92_1_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[24/*float2[]*/], 5, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 0.0f));
    DrawLocalRect_Coord_1e24cb92_1_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_1e24cb92_1_1_0), 0);
    DrawLocalRect_Vertices_1e24cb92_1_1_4 = Vertices_1e24cb92_1_1_0;
    _draw_1e24cb92 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseNodes_bundle::DrawHelpers4c5c39ae());
}

// public generated DrawHelpers New() [static] :5179
DrawHelpers* DrawHelpers::New1()
{
    DrawHelpers* obj1 = (DrawHelpers*)uNew(DrawHelpers_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static Fuse.DrawHelpers get_Singelton() [static] :5185
DrawHelpers* DrawHelpers::Singelton()
{
    if (DrawHelpers::_instance_ == NULL)
        DrawHelpers::_instance_ = DrawHelpers::New1();

    return DrawHelpers::_instance_;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class FastMatrix :1206
// {
static void FastMatrix_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _hasNonTranslation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _isValid), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FastMatrix, _matrix), 0);
}

uType* FastMatrix_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FastMatrix);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastMatrix", options);
    type->fp_build_ = FastMatrix_build;
    type->fp_ctor_ = (void*)FastMatrix__New1_fn;
    return type;
}

// private FastMatrix() :1221
void FastMatrix__ctor__fn(FastMatrix* __this)
{
    __this->ctor_();
}

// private FastMatrix(Fuse.FastMatrix orig) :1226
void FastMatrix__ctor_1_fn(FastMatrix* __this, FastMatrix* orig)
{
    __this->ctor_1(orig);
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) :1400
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->AppendFastMatrix(fm);
}

// public void AppendRotation(float zRadians) :1279
void FastMatrix__AppendRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->AppendRotation(*zRadians);
}

// public void AppendRotationQuaternion(float4 q) :1356
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->AppendRotationQuaternion(*q);
}

// public void AppendScale(float factor) :1291
void FastMatrix__AppendScale_fn(FastMatrix* __this, float* factor)
{
    __this->AppendScale(*factor);
}

// public void AppendScale(float3 scale) :1350
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->AppendScale1(*scale);
}

// public void AppendShear(float xRadians, float yRadians) :1309
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->AppendShear(*xRadians, *yRadians);
}

// public void AppendTranslation(float x, float y, float z) :1255
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->AppendTranslation(*x, *y, *z);
}

// public Fuse.FastMatrix Copy() :1235
void FastMatrix__Copy_fn(FastMatrix* __this, FastMatrix** __retval)
{
    *__retval = __this->Copy();
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) :1247
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval)
{
    *__retval = FastMatrix::FromFloat4x4(*m);
}

// public static Fuse.FastMatrix Identity() :1233
void FastMatrix__Identity_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::Identity();
}

// public void Invert() :1334
void FastMatrix__Invert_fn(FastMatrix* __this)
{
    __this->Invert();
}

// public bool get_IsValid() :1219
void FastMatrix__get_IsValid_fn(FastMatrix* __this, bool* __retval)
{
    *__retval = __this->IsValid();
}

// public float4x4 get_Matrix() :1209
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) :1322
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval)
{
    *__retval = __this->Mul(m);
}

// private FastMatrix New() :1221
void FastMatrix__New1_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::New1();
}

// private FastMatrix New(Fuse.FastMatrix orig) :1226
void FastMatrix__New2_fn(FastMatrix* orig, FastMatrix** __retval)
{
    *__retval = FastMatrix::New2(orig);
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) :1384
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->PrependFastMatrix(fm);
}

// public void PrependRotation(float zRadians) :1285
void FastMatrix__PrependRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->PrependRotation(*zRadians);
}

// public void PrependRotationQuaternion(float4 q) :1373
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->PrependRotationQuaternion(*q);
}

// public void PrependScale(float factor) :1297
void FastMatrix__PrependScale_fn(FastMatrix* __this, float* factor)
{
    __this->PrependScale(*factor);
}

// public void PrependScale(float3 scale) :1367
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->PrependScale1(*scale);
}

// public void PrependShear(float xRadians, float yRadians) :1303
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->PrependShear(*xRadians, *yRadians);
}

// public void PrependTranslation(float x, float y, float z) :1267
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->PrependTranslation(*x, *y, *z);
}

// public void PrependTranslation(float3 offset) :1379
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->PrependTranslation1(*offset);
}

// public void ResetIdentity() :1240
void FastMatrix__ResetIdentity_fn(FastMatrix* __this)
{
    __this->ResetIdentity();
}

// private void SimpleTranslation(float x, float y, float z) :1315
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->SimpleTranslation(*x, *y, *z);
}

// private FastMatrix() [instance] :1221
void FastMatrix::ctor_()
{
    _isValid = true;
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private FastMatrix(Fuse.FastMatrix orig) [instance] :1226
void FastMatrix::ctor_1(FastMatrix* orig)
{
    _isValid = true;
    _matrix = uPtr(orig)->_matrix;
    _hasNonTranslation = orig->_hasNonTranslation;
    _isValid = orig->_isValid;
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) [instance] :1400
void FastMatrix::AppendFastMatrix(FastMatrix* fm)
{
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(fm)->Matrix());
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void AppendRotation(float zRadians) [instance] :1279
void FastMatrix::AppendRotation(float zRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationZ(zRadians));
    _hasNonTranslation = true;
}

// public void AppendRotationQuaternion(float4 q) [instance] :1356
void FastMatrix::AppendRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationQuaternion(q));
    _hasNonTranslation = true;
}

// public void AppendScale(float factor) [instance] :1291
void FastMatrix::AppendScale(float factor)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)));
    _hasNonTranslation = true;
}

// public void AppendScale(float3 scale) [instance] :1350
void FastMatrix::AppendScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(scale));
    _hasNonTranslation = true;
}

// public void AppendShear(float xRadians, float yRadians) [instance] :1309
void FastMatrix::AppendShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)));
    _hasNonTranslation = true;
}

// public void AppendTranslation(float x, float y, float z) [instance] :1255
void FastMatrix::AppendTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)));
}

// public Fuse.FastMatrix Copy() [instance] :1235
FastMatrix* FastMatrix::Copy()
{
    return FastMatrix::New2(this);
}

// public void Invert() [instance] :1334
void FastMatrix::Invert()
{
    if (!_hasNonTranslation)
    {
        _matrix.M41 = -_matrix.M41;
        _matrix.M42 = -_matrix.M42;
        _matrix.M43 = -_matrix.M43;
    }
    else
    {
        ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
        _isValid = (_isValid && ::g::Uno::Matrix::TryInvert2(_matrix, &result));
        _matrix = result;
    }
}

// public bool get_IsValid() [instance] :1219
bool FastMatrix::IsValid()
{
    return _isValid;
}

// public float4x4 get_Matrix() [instance] :1209
::g::Uno::Float4x4 FastMatrix::Matrix()
{
    return _matrix;
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) [instance] :1322
FastMatrix* FastMatrix::Mul(FastMatrix* m)
{
    FastMatrix* res = FastMatrix::New1();
    res->_matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(m)->_matrix);
    res->_hasNonTranslation = (_hasNonTranslation || m->_hasNonTranslation);
    res->_isValid = (_isValid && m->_isValid);
    return res;
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) [instance] :1384
void FastMatrix::PrependFastMatrix(FastMatrix* fm)
{
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(uPtr(fm)->Matrix(), _matrix);
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void PrependRotation(float zRadians) [instance] :1285
void FastMatrix::PrependRotation(float zRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationZ(zRadians), _matrix);
    _hasNonTranslation = true;
}

// public void PrependRotationQuaternion(float4 q) [instance] :1373
void FastMatrix::PrependRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationQuaternion(q), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float factor) [instance] :1297
void FastMatrix::PrependScale(float factor)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float3 scale) [instance] :1367
void FastMatrix::PrependScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(scale), _matrix);
    _hasNonTranslation = true;
}

// public void PrependShear(float xRadians, float yRadians) [instance] :1303
void FastMatrix::PrependShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependTranslation(float x, float y, float z) [instance] :1267
void FastMatrix::PrependTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)), _matrix);
}

// public void PrependTranslation(float3 offset) [instance] :1379
void FastMatrix::PrependTranslation1(::g::Uno::Float3 offset)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(offset), _matrix);
}

// public void ResetIdentity() [instance] :1240
void FastMatrix::ResetIdentity()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    _hasNonTranslation = false;
    _isValid = true;
}

// private void SimpleTranslation(float x, float y, float z) [instance] :1315
void FastMatrix::SimpleTranslation(float x, float y, float z)
{
    _matrix.M41 = (_matrix.M41 + x);
    _matrix.M42 = (_matrix.M42 + y);
    _matrix.M43 = (_matrix.M43 + z);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) [static] :1247
FastMatrix* FastMatrix::FromFloat4x4(::g::Uno::Float4x4 m)
{
    FastMatrix* k = FastMatrix::New1();
    k->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

// public static Fuse.FastMatrix Identity() [static] :1233
FastMatrix* FastMatrix::Identity()
{
    return FastMatrix::New1();
}

// private FastMatrix New() [static] :1221
FastMatrix* FastMatrix::New1()
{
    FastMatrix* obj1 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj1->ctor_();
    return obj1;
}

// private FastMatrix New(Fuse.FastMatrix orig) [static] :1226
FastMatrix* FastMatrix::New2(FastMatrix* orig)
{
    FastMatrix* obj2 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj2->ctor_1(orig);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal enum FastProperty1 :5319
uEnumType* FastProperty1_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty1", ::g::Uno::Int_typeof(), 29);
    type->SetLiterals(
        "IsEnabled", 1LL,
        "IsContextEnabledCache", 2LL,
        "IsLocalFlat", 4LL,
        "IsLocalFlatCached", 8LL,
        "AreChildrenFlatCached", 16LL,
        "AreChildrenFlat", 32LL,
        "MinWidth", 64LL,
        "MinHeight", 128LL,
        "MaxWidth", 256LL,
        "MaxHeight", 512LL,
        "Margin", 1024LL,
        "Padding", 2048LL,
        "Anchor", 4096LL,
        "Offset", 8192LL,
        "X", 16384LL,
        "Y", 32768LL,
        "Aspect", 65536LL,
        "AspectConstraint", 131072LL,
        "CachingMode", 262144LL,
        "HitTestMode", 524288LL,
        "ClipToBounds", 1048576LL,
        "TransformOrigin", 2097152LL,
        "Opacity", 4194304LL,
        "LimitWidth", 8388608LL,
        "LimitHeight", 16777216LL,
        "SnapToPixels", 33554432LL,
        "ContextSnapToPixelsCache", 67108864LL,
        "HasSnapToPixels", 134217728LL,
        "PendingRemove", 268435456LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal class FastProperty1Link :5361
// {
static void FastProperty1Link_build(uType* type)
{
    type->SetFields(0,
        type, offsetof(::g::Fuse::FastProperty1Link, Next), 0,
        ::g::Fuse::FastProperty1_typeof(), offsetof(::g::Fuse::FastProperty1Link, Property), 0);
}

uType* FastProperty1Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty1Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link", options);
    type->fp_build_ = FastProperty1Link_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p) :5366
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty1Link(Fuse.FastProperty1 p) [instance] :5366
void FastProperty1Link::ctor_(int p)
{
    Property = p;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class FastProperty1Link<T> :5372
// {
static void FastProperty1Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty1Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty1Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty1Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link`1", options);
    type->fp_build_ = FastProperty1Link1_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p, T value) :5375
void FastProperty1Link1__ctor_1_fn(FastProperty1Link1* __this, int* p, void* value)
{
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty1Link New(Fuse.FastProperty1 p, T value) :5375
void FastProperty1Link1__New2_fn(uType* __type, int* p, void* value, FastProperty1Link1** __retval)
{
    int p_ = *p;
    FastProperty1Link1* obj1 = (FastProperty1Link1*)uNew(__type);
    FastProperty1Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal enum FastProperty2 :5492
uEnumType* FastProperty2_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty2", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Color", 1LL,
        "TextWrapping", 2LL,
        "IsMultiline", 4LL,
        "InputHint", 8LL,
        "PlaceholderText", 16LL,
        "PlaceholderColor", 32LL,
        "ActionStyle", 64LL,
        "CaretColor", 128LL,
        "SelectionColor", 256LL,
        "LineSpacing", 512LL,
        "TextAlignment", 1024LL,
        "TextTruncation", 2048LL,
        "IsPassword", 4096LL,
        "IsReadOnly", 8192LL,
        "AutoCorrectHint", 16384LL,
        "AutoCapitalizationHint", 32768LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal class FastProperty2Link :5514
// {
static void FastProperty2Link_build(uType* type)
{
    type->SetFields(0,
        type, offsetof(::g::Fuse::FastProperty2Link, Next), 0,
        ::g::Fuse::FastProperty2_typeof(), offsetof(::g::Fuse::FastProperty2Link, Property), 0);
}

uType* FastProperty2Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty2Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link", options);
    type->fp_build_ = FastProperty2Link_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p) :5519
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty2Link(Fuse.FastProperty2 p) [instance] :5519
void FastProperty2Link::ctor_(int p)
{
    Property = p;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class FastProperty2Link<T> :5525
// {
static void FastProperty2Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty2Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty2Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty2Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link`1", options);
    type->fp_build_ = FastProperty2Link1_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p, T value) :5528
void FastProperty2Link1__ctor_1_fn(FastProperty2Link1* __this, int* p, void* value)
{
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty2Link New(Fuse.FastProperty2 p, T value) :5528
void FastProperty2Link1__New2_fn(uType* __type, int* p, void* value, FastProperty2Link1** __retval)
{
    int p_ = *p;
    FastProperty2Link1* obj1 = (FastProperty2Link1*)uNew(__type);
    FastProperty2Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class FileSourceConverter :147
// {
static void FileSourceConverter_build(uType* type)
{
    ::STRINGS[34] = uString::Const("path");
    ::TYPES[25] = ::g::Uno::Type_typeof();
    ::TYPES[26] = ::g::Uno::String_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[29] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Marshal__IConverter_typeof(), offsetof(FileSourceConverter_type, interface0));
}

FileSourceConverter_type* FileSourceConverter_typeof()
{
    static uSStrong<FileSourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileSourceConverter);
    options.TypeSize = sizeof(FileSourceConverter_type);
    type = (FileSourceConverter_type*)uClassType::New("Fuse.FileSourceConverter", options);
    type->fp_build_ = FileSourceConverter_build;
    type->fp_ctor_ = (void*)FileSourceConverter__New1_fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))FileSourceConverter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))FileSourceConverter__TryConvert_fn;
    return type;
}

// public generated FileSourceConverter() :147
void FileSourceConverter__ctor__fn(FileSourceConverter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t) :149
void FileSourceConverter__CanConvert_fn(FileSourceConverter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated FileSourceConverter New() :147
void FileSourceConverter__New1_fn(FileSourceConverter** __retval)
{
    *__retval = FileSourceConverter::New1();
}

// public object TryConvert(Uno.Type t, object obj) :150
void FileSourceConverter__TryConvert_fn(FileSourceConverter* __this, uType* t, uObject* obj, uObject** __retval)
{
    *__retval = __this->TryConvert(t, obj);
}

// public generated FileSourceConverter() [instance] :147
void FileSourceConverter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance] :149
bool FileSourceConverter::CanConvert(uType* t)
{
    return ::g::Uno::Type::op_Equality(t, ::g::Uno::UX::FileSource_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Uno::UX::FileSource_typeof());
}

// public object TryConvert(Uno.Type t, object obj) [instance] :150
uObject* FileSourceConverter::TryConvert(uType* t, uObject* obj)
{
    ::g::Uno::IO::BundleFile* ret3;

    if (!CanConvert(t))
        return NULL;

    if (uIs(obj, ::TYPES[26/*string*/]))
    {
        uString* path = uCast<uString*>(obj, ::TYPES[26/*string*/]);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[27/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[28/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[29/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret3), ret3);

            if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), path))
                return ::g::Uno::UX::BundleFileSource::New1(f);
        }

        return ::g::Fuse::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[26/*string*/]));
    }
    else if (uIs(obj, ::TYPES[9/*Fuse.IObject*/]))
        return ::g::Fuse::JSFileSource::New1(uAs<uString*>(::g::Fuse::IObject::Item(uInterface(uPtr((uObject*)obj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[34/*"path"*/]), ::TYPES[26/*string*/]));

    return NULL;
}

// public generated FileSourceConverter New() [static] :147
FileSourceConverter* FileSourceConverter::New1()
{
    FileSourceConverter* obj2 = (FileSourceConverter*)uNew(FileSourceConverter_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class Node.FirstDataEnumerator :2364
// {
static void Node__FirstDataEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__FirstDataEnumerator_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Node__FirstDataEnumerator, _Data), 0);
}

Node__FirstDataEnumerator_type* Node__FirstDataEnumerator_typeof()
{
    static uSStrong<Node__FirstDataEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Node__FirstDataEnumerator);
    options.TypeSize = sizeof(Node__FirstDataEnumerator_type);
    type = (Node__FirstDataEnumerator_type*)uClassType::New("Fuse.Node.FirstDataEnumerator", options);
    type->fp_build_ = Node__FirstDataEnumerator_build;
    type->fp_ctor_ = (void*)Node__FirstDataEnumerator__New1_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))Node__FirstDataEnumerator__NextData_fn;
    return type;
}

// public generated FirstDataEnumerator() :2364
void Node__FirstDataEnumerator__ctor__fn(Node__FirstDataEnumerator* __this)
{
    __this->ctor_();
}

// public generated object get_Data() :2366
void Node__FirstDataEnumerator__get_Data_fn(Node__FirstDataEnumerator* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private generated void set_Data(object value) :2366
void Node__FirstDataEnumerator__set_Data_fn(Node__FirstDataEnumerator* __this, uObject* value)
{
    __this->Data(value);
}

// public generated FirstDataEnumerator New() :2364
void Node__FirstDataEnumerator__New1_fn(Node__FirstDataEnumerator** __retval)
{
    *__retval = Node__FirstDataEnumerator::New1();
}

// public bool NextData(object data) :2367
void Node__FirstDataEnumerator__NextData_fn(Node__FirstDataEnumerator* __this, uObject* data, bool* __retval)
{
    *__retval = __this->NextData(data);
}

// public generated FirstDataEnumerator() [instance] :2364
void Node__FirstDataEnumerator::ctor_()
{
}

// public generated object get_Data() [instance] :2366
uObject* Node__FirstDataEnumerator::Data()
{
    return _Data;
}

// private generated void set_Data(object value) [instance] :2366
void Node__FirstDataEnumerator::Data(uObject* value)
{
    _Data = value;
}

// public bool NextData(object data) [instance] :2367
bool Node__FirstDataEnumerator::NextData(uObject* data)
{
    Data(data);
    return false;
}

// public generated FirstDataEnumerator New() [static] :2364
Node__FirstDataEnumerator* Node__FirstDataEnumerator::New1()
{
    Node__FirstDataEnumerator* obj1 = (Node__FirstDataEnumerator*)uNew(Node__FirstDataEnumerator_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class FixedViewport :1373
// {
static void FixedViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRenderViewport_typeof(), offsetof(FixedViewport_type, interface0),
        ::g::Fuse::IViewport_typeof(), offsetof(FixedViewport_type, interface1),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(FixedViewport_type, interface2));
    type->SetFields(0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::FixedViewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::FixedViewport, _frustumViewport), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelsPerPoint), 0);
}

FixedViewport_type* FixedViewport_typeof()
{
    static uSStrong<FixedViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FixedViewport);
    options.TypeSize = sizeof(FixedViewport_type);
    type = (FixedViewport_type*)uClassType::New("Fuse.FixedViewport", options);
    type->fp_build_ = FixedViewport_build;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransform_fn;
    type->interface1.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))FixedViewport__PointToWorldRay_fn;
    type->interface1.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))FixedViewport__WorldToLocalRay_fn;
    type->interface2.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))FixedViewport__get_PixelsPerPoint_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_Size_fn;
    return type;
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :1412
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum)
{
    __this->ctor_(*pixelSize, *pixelsPerPoint, frustum);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :1412
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval)
{
    *__retval = FixedViewport::New1(*pixelSize, *pixelsPerPoint, frustum);
}

// public float2 get_PixelSize() :1381
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :1376
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :1401
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float2 get_Size() :1378
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float4x4 get_ViewProjectionTransform() :1390
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :1405
void FixedViewport__WorldToLocalRay_fn(FixedViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [instance] :1412
void FixedViewport::ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = frustum;
    _pixelSize = ::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y);
    _pixelsPerPoint = pixelsPerPoint;
    uPtr(_frustumViewport)->Update((uObject*)this, frustum);
}

// public float2 get_PixelSize() [instance] :1381
::g::Uno::Float2 FixedViewport::PixelSize()
{
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :1376
float FixedViewport::PixelsPerPoint()
{
    return _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :1401
::g::Uno::Geometry::Ray FixedViewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    return ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pointPos);
}

// public float2 get_Size() [instance] :1378
::g::Uno::Float2 FixedViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float4x4 get_ViewProjectionTransform() [instance] :1390
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [instance] :1405
::g::Uno::Geometry::Ray FixedViewport::WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [static] :1412
FixedViewport* FixedViewport::New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    FixedViewport* obj1 = (FixedViewport*)uNew(FixedViewport_typeof());
    obj1->ctor_(pixelSize, pixelsPerPoint, frustum);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private enum LayoutParams.Flags :1530
uEnumType* LayoutParams__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutParams.Flags", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Temporary", 4LL,
        "MaxX", 8LL,
        "MaxY", 16LL,
        "MinX", 32LL,
        "MinY", 64LL,
        "RelativeX", 128LL,
        "RelativeY", 256LL,
        "NoRelativeX", 512LL,
        "NoRelativeY", 1024LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class Float2Computer :107
// {
static void Float2Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
}

uType* Float2Computer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float2Computer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Float2Computer", options);
    type->fp_build_ = Float2Computer_build;
    type->fp_ctor_ = (void*)Float2Computer__New1_fn;
    return type;
}

// public generated Float2Computer() :107
void Float2Computer__ctor_2_fn(Float2Computer* __this)
{
    __this->ctor_2();
}

// public generated Float2Computer New() :107
void Float2Computer__New1_fn(Float2Computer** __retval)
{
    *__retval = Float2Computer::New1();
}

// public generated Float2Computer() [instance] :107
void Float2Computer::ctor_2()
{
    ctor_1();
}

// public generated Float2Computer New() [static] :107
Float2Computer* Float2Computer::New1()
{
    Float2Computer* obj1 = (Float2Computer*)uNew(Float2Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class Float3Computer :117
// {
static void Float3Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
}

uType* Float3Computer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float3Computer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Float3Computer", options);
    type->fp_build_ = Float3Computer_build;
    type->fp_ctor_ = (void*)Float3Computer__New1_fn;
    return type;
}

// public generated Float3Computer() :117
void Float3Computer__ctor_2_fn(Float3Computer* __this)
{
    __this->ctor_2();
}

// public generated Float3Computer New() :117
void Float3Computer__New1_fn(Float3Computer** __retval)
{
    *__retval = Float3Computer::New1();
}

// public generated Float3Computer() [instance] :117
void Float3Computer::ctor_2()
{
    ctor_1();
}

// public generated Float3Computer New() [static] :117
Float3Computer* Float3Computer::New1()
{
    Float3Computer* obj1 = (Float3Computer*)uNew(Float3Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class Float4Computer :127
// {
static void Float4Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
}

uType* Float4Computer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float4Computer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Float4Computer", options);
    type->fp_build_ = Float4Computer_build;
    type->fp_ctor_ = (void*)Float4Computer__New1_fn;
    return type;
}

// public generated Float4Computer() :127
void Float4Computer__ctor_2_fn(Float4Computer* __this)
{
    __this->ctor_2();
}

// public generated Float4Computer New() :127
void Float4Computer__New1_fn(Float4Computer** __retval)
{
    *__retval = Float4Computer::New1();
}

// public generated Float4Computer() [instance] :127
void Float4Computer::ctor_2()
{
    ctor_1();
}

// public generated Float4Computer New() [static] :127
Float4Computer* Float4Computer::New1()
{
    Float4Computer* obj1 = (Float4Computer*)uNew(Float4Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public class Font :1446
// {
static void Font_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL), offsetof(::g::Fuse::Font, Descriptors), 0,
        type, (uintptr_t)&::g::Fuse::Font::_fallback_, uFieldFlagsStatic);
}

uType* Font_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Font", options);
    type->fp_build_ = Font_build;
    return type;
}

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :1464
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors)
{
    __this->ctor_(descriptors);
}

// public Font(Uno.UX.FileSource file) :1459
void Font__ctor_1_fn(Font* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :1464
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval)
{
    *__retval = Font::New1(descriptors);
}

// public Font New(Uno.UX.FileSource file) :1459
void Font__New2_fn(::g::Uno::UX::FileSource* file, Font** __retval)
{
    *__retval = Font::New2(file);
}

// public static Fuse.Font get_PlatformDefault() :1475
void Font__get_PlatformDefault_fn(Font** __retval)
{
    *__retval = Font::PlatformDefault();
}

// public static float get_PlatformDefaultSize() :1486
void Font__get_PlatformDefaultSize_fn(float* __retval)
{
    *__retval = Font::PlatformDefaultSize();
}

// public static float4 get_PlatformDefaultTextColor() :1496
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = Font::PlatformDefaultTextColor();
}

uSStrong<Font*> Font::_fallback_;

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [instance] :1464
void Font::ctor_(::g::Uno::Collections::List* descriptors)
{
    Descriptors = descriptors;
}

// public Font(Uno.UX.FileSource file) [instance] :1459
void Font::ctor_1(::g::Uno::UX::FileSource* file)
{
    ctor_(::g::Fuse::Internal::SystemFont::GetFallback(file));
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [static] :1464
Font* Font::New1(::g::Uno::Collections::List* descriptors)
{
    Font* obj2 = (Font*)uNew(Font_typeof());
    obj2->ctor_(descriptors);
    return obj2;
}

// public Font New(Uno.UX.FileSource file) [static] :1459
Font* Font::New2(::g::Uno::UX::FileSource* file)
{
    Font* obj1 = (Font*)uNew(Font_typeof());
    obj1->ctor_1(file);
    return obj1;
}

// public static Fuse.Font get_PlatformDefault() [static] :1475
Font* Font::PlatformDefault()
{
    if (Font::_fallback_ == NULL)
        Font::_fallback_ = Font::New1(::g::Fuse::Internal::SystemFont::Default());

    return Font::_fallback_;
}

// public static float get_PlatformDefaultSize() [static] :1486
float Font::PlatformDefaultSize()
{
    return 16.0f;
}

// public static float4 get_PlatformDefaultTextColor() [static] :1496
::g::Uno::Float4 Font::PlatformDefaultTextColor()
{
    return ::g::Uno::Float4__New2(0.321568638f, 0.321568638f, 0.321568638f, 1.0f);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class FramebufferPool :1518
// {
static void FramebufferPool_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::FramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::FramebufferPool::framebufferPool_, uFieldFlagsStatic);
}

uClassType* FramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FramebufferPool", options);
    type->fp_build_ = FramebufferPool_build;
    return type;
}

// private static void EnsurePool() :1522
void FramebufferPool__EnsurePool_fn()
{
    FramebufferPool::EnsurePool();
}

// internal static int get_Frame() :1554
void FramebufferPool__get_Frame_fn(int* __retval)
{
    *__retval = FramebufferPool::Frame();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1540
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock(*width, *height, *format, *depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) :1536
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock1(*size, *format, *depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) :1524
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::Register(cfb);
}

// public static void Release(framebuffer fb) :1546
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) :1530
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::UnRegister(cfb);
}

uSStrong< ::g::Fuse::FramebufferPoolImpl*> FramebufferPool::framebufferPool_;

// private static void EnsurePool() [static] :1522
void FramebufferPool::EnsurePool()
{
    if (FramebufferPool::framebufferPool_ == NULL)
        FramebufferPool::framebufferPool_ = ::g::Fuse::FramebufferPoolImpl::New1();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [static] :1540
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock(int width, int height, int format, bool depth)
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->Lock(width, height, format, depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) [static] :1536
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock1(::g::Uno::Int2 size, int format, bool depth)
{
    return FramebufferPool::Lock(size.X, size.Y, format, depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) [static] :1524
void FramebufferPool::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Register(cfb);
}

// public static void Release(framebuffer fb) [static] :1546
void FramebufferPool::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) [static] :1530
void FramebufferPool::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->UnRegister(cfb);
}

// internal static int get_Frame() [static] :1554
int FramebufferPool::Frame()
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->frame;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class FramebufferPoolImpl :1569
// {
static void FramebufferPoolImpl_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Attempted to allocate ");
    ::STRINGS[36] = uString::Const("x");
    ::STRINGS[37] = uString::Const(" framebuffer, max is ");
    ::STRINGS[38] = uString::Const("framebuffer pinned while app going into the background");
    ::STRINGS[39] = uString::Const("Pool is leaking");
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[34] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(FramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::TYPES[33/*Uno.Collections.List<Fuse.CacheFramebuffer>*/], offsetof(::g::Fuse::FramebufferPoolImpl, cacheFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, frame), 0,
        ::TYPES[30/*Uno.Collections.List<framebuffer>*/], offsetof(::g::Fuse::FramebufferPoolImpl, framebufferPool), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), 0,
        ::TYPES[31/*Uno.Collections.Dictionary<framebuffer, int>*/], offsetof(::g::Fuse::FramebufferPoolImpl, lastFrameUsed), 0,
        ::TYPES[32/*Uno.Collections.HashSet<framebuffer>*/], offsetof(::g::Fuse::FramebufferPoolImpl, lockedFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, pixelsProvidedSinceLastCollect), 0);
}

FramebufferPoolImpl_type* FramebufferPoolImpl_typeof()
{
    static uSStrong<FramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FramebufferPoolImpl);
    options.TypeSize = sizeof(FramebufferPoolImpl_type);
    type = (FramebufferPoolImpl_type*)uClassType::New("Fuse.FramebufferPoolImpl", options);
    type->fp_build_ = FramebufferPoolImpl_build;
    type->fp_ctor_ = (void*)FramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    return type;
}

// public FramebufferPoolImpl() :1571
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private void CollectCacheFramebuffers() :1659
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this)
{
    __this->CollectCacheFramebuffers();
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :1594
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->FindBuffer(*width, *height, *format, *flags);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :1690
void FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(FramebufferPoolImpl* __this)
{
    ::g::Fuse::CacheFramebuffer* ret7;
    ::g::Uno::Graphics::Framebuffer* ret8;
    bool ret9;

    for (int i = 0; i < uPtr(__this->cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->cacheFramebuffers), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->IsPinned())
            U_THROW(::g::Uno::Exception::New2(::STRINGS[38/*"framebuffer...*/]));

        uPtr(c)->Collect();
        uPtr(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i1 = 0; i1 < uPtr(__this->framebufferPool)->Count(); i1++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->framebufferPool), uCRef<int>(i1), &ret8), ret8);
        uPtr(fb)->Dispose();
        uPtr(__this->framebufferPool)->RemoveAt(i1--);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->lastFrameUsed), fb, &ret9);
    }
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1712
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Lock(*width, *height, *format, *depth);
}

// public FramebufferPoolImpl New() :1571
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval)
{
    *__retval = FramebufferPoolImpl::New1();
}

// internal void Register(Fuse.CacheFramebuffer cfb) :1635
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->Register(cfb);
}

// internal void Release(framebuffer fb) :1720
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->Release(fb);
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) :1652
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->UnRegister(cfb);
}

// public void Update() :1730
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this)
{
    __this->Update();
}

// public FramebufferPoolImpl() [instance] :1571
void FramebufferPoolImpl::ctor_()
{
    framebufferPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<framebuffer>*/]));
    lastFrameUsed = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[31/*Uno.Collections.Dictionary<framebuffer, int>*/]));
    lockedFramebuffers = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[32/*Uno.Collections.HashSet<framebuffer>*/]));
    cacheFramebuffers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[33/*Uno.Collections.List<Fuse.CacheFramebuffer>*/]));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)FramebufferPoolImpl__Update_fn, this), 0);
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void CollectCacheFramebuffers() [instance] :1659
void FramebufferPoolImpl::CollectCacheFramebuffers()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > ret3;
    ::g::Fuse::CacheFramebuffer* ret4;

    if (uPtr(cacheFramebuffers)->Count() < 3)
        return;

    int sum = 0;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(cacheFramebuffers), &ret3), ret3); enum1.MoveNext(::TYPES[34/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]); )
    {
        ::g::Fuse::CacheFramebuffer* cfb = enum1.Current(::TYPES[34/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
        sum = sum + uPtr(cfb)->FramesSinceLastUse();
    }

    int avg = sum / uPtr(cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < uPtr(cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(cacheFramebuffers), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(c)->IsPinned() && (uPtr(c)->FramesSinceLastUse() >= limit))
        {
            uPtr(c)->Collect();
            uPtr(cacheFramebuffers)->RemoveAt(i--);
        }
    }

    framebuffersProvidedSinceLastCollect = 0;
    pixelsProvidedSinceLastCollect = 0;
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :1594
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::FindBuffer(int width, int height, int format, int flags)
{
    ::g::Uno::Graphics::Framebuffer* ret5;
    bool ret6;
    width = ::g::Uno::Math::Max8(1, width);
    height = ::g::Uno::Math::Max8(1, height);

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret5), ret5);

        if (uPtr(fb)->Size().X != width)
            continue;

        if (uPtr(fb)->Size().Y != height)
            continue;

        if (uPtr(fb)->Format() != format)
            continue;

        if (uPtr(fb)->HasDepth() != ((flags & 1) == 1))
            continue;

        if (uPtr(fb)->SupportsMipmap() != ((flags & 2) == 2))
            continue;

        uPtr(framebufferPool)->RemoveAt(i);
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret6);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        return fb;
    }

    int maxSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if ((width > maxSize) || (height > maxSize))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[35/*"Attempted t...*/], uBox<int>(::TYPES[39/*int*/], width)), ::STRINGS[36/*"x"*/]), uBox<int>(::TYPES[39/*int*/], height)), ::STRINGS[37/*" framebuffe...*/]), uBox<int>(::TYPES[39/*int*/], maxSize)), ::STRINGS[36/*"x"*/]), uBox<int>(::TYPES[39/*int*/], maxSize))));

    double t = 0.0;
    ::g::Uno::Graphics::Framebuffer* buffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Uno::Int2__New2(width, height), format, flags);
    return buffer;
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [instance] :1712
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::Lock(int width, int height, int format, bool depth)
{
    bool ret10;
    ::g::Uno::Graphics::Framebuffer* fb = FindBuffer(width, height, format, depth ? 1 : 0);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret10);
    return fb;
}

// internal void Register(Fuse.CacheFramebuffer cfb) [instance] :1635
void FramebufferPoolImpl::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    framebuffersProvidedSinceLastCollect = (framebuffersProvidedSinceLastCollect + 1);
    pixelsProvidedSinceLastCollect = (pixelsProvidedSinceLastCollect + (uPtr(cfb)->Width() * uPtr(cfb)->Height()));
    ::g::Uno::Collections::List__Add_fn(uPtr(cacheFramebuffers), cfb);

    if (pixelsProvidedSinceLastCollect > 1000000)
        CollectCacheFramebuffers();
    else if (framebuffersProvidedSinceLastCollect > 50)
        CollectCacheFramebuffers();
}

// internal void Release(framebuffer fb) [instance] :1720
void FramebufferPoolImpl::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    bool ret11;
    bool ret12;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(lockedFramebuffers), fb, &ret11), ret11))
    {
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(lockedFramebuffers), fb, &ret12);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        ::g::Uno::Collections::List__Add_fn(uPtr(framebufferPool), fb);
    }
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) [instance] :1652
void FramebufferPoolImpl::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    bool ret13;
    framebuffersProvidedSinceLastCollect = 0;
    ::g::Uno::Collections::List__Remove_fn(uPtr(cacheFramebuffers), cfb, &ret13);
}

// public void Update() [instance] :1730
void FramebufferPoolImpl::Update()
{
    ::g::Uno::Graphics::Framebuffer* ret14;
    bool ret15;
    bool ret16;
    bool contextBound = false;
    frame++;

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret14), ret14);
        int framesSinceUse;
        ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(lastFrameUsed), fb, &framesSinceUse, &ret15);
        framesSinceUse = frame - framesSinceUse;

        if (framesSinceUse < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"Pool is lea...*/]));

        if (framesSinceUse > 1)
        {
            uPtr(fb)->Dispose();
            uPtr(framebufferPool)->RemoveAt(i--);
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(lastFrameUsed), fb, &ret16);
        }
    }
}

// public FramebufferPoolImpl New() [static] :1571
FramebufferPoolImpl* FramebufferPoolImpl::New1()
{
    FramebufferPoolImpl* obj2 = (FramebufferPoolImpl*)uNew(FramebufferPoolImpl_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class FrustumViewport :1316
// {
static void FrustumViewport_build(uType* type)
{
    ::TYPES[35] = ::g::Fuse::IFrustum_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransformInverse), 0);
}

uType* FrustumViewport_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FrustumViewport);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FrustumViewport", options);
    type->fp_build_ = FrustumViewport_build;
    type->fp_ctor_ = (void*)FrustumViewport__New1_fn;
    return type;
}

// public generated FrustumViewport() :1316
void FrustumViewport__ctor__fn(FrustumViewport* __this)
{
    __this->ctor_();
}

// public generated FrustumViewport New() :1316
void FrustumViewport__New1_fn(FrustumViewport** __retval)
{
    *__retval = FrustumViewport::New1();
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) :1325
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum)
{
    __this->Update(viewport, frustum);
}

// public generated FrustumViewport() [instance] :1316
void FrustumViewport::ctor_()
{
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) [instance] :1325
void FrustumViewport::Update(uObject* viewport, uObject* frustum)
{
    if (::g::Fuse::IFrustum::TryGetProjectionTransform(uInterface(uPtr(frustum), ::TYPES[35/*Fuse.IFrustum*/]), viewport, &ProjectionTransform) && ::g::Fuse::IFrustum::TryGetProjectionTransformInverse(uInterface(uPtr(frustum), ::TYPES[35/*Fuse.IFrustum*/]), viewport, &ProjectionTransformInverse))
    {
        ViewTransform = ::g::Fuse::IFrustum::GetViewTransform(uInterface(uPtr(frustum), ::TYPES[35/*Fuse.IFrustum*/]), viewport);
        ViewTransformInverse = ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(frustum, ::TYPES[35/*Fuse.IFrustum*/]), viewport);
        ViewProjectionTransform = ::g::Uno::Matrix::Mul8(ViewTransform, ProjectionTransform);
        ViewProjectionTransformInverse = ::g::Uno::Matrix::Mul8(ProjectionTransformInverse, ViewTransformInverse);
    }
    else
    {
        ProjectionTransform = ::g::Uno::Float4x4__Identity();
        ProjectionTransformInverse = ::g::Uno::Float4x4__Identity();
        ViewTransform = ::g::Uno::Float4x4__Identity();
        ViewTransformInverse = ::g::Uno::Float4x4__Identity();
        ViewProjectionTransform = ::g::Uno::Float4x4__Identity();
        ViewProjectionTransformInverse = ::g::Uno::Float4x4__Identity();
    }
}

// public generated FrustumViewport New() [static] :1316
FrustumViewport* FrustumViewport::New1()
{
    FrustumViewport* obj1 = (FrustumViewport*)uNew(FrustumViewport_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class TranslationModes.HeightMode :4669
// {
static void TranslationModes__HeightMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__HeightMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.HeightMode", options);
    type->fp_build_ = TranslationModes__HeightMode_build;
    type->fp_ctor_ = (void*)TranslationModes__HeightMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated HeightMode() :4669
void TranslationModes__HeightMode__ctor_1_fn(TranslationModes__HeightMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :4671
void TranslationModes__HeightMode__GetAbsVector_fn(TranslationModes__HeightMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).Y, uPtr(t)->Vector()), void();
}

// public generated HeightMode New() :4669
void TranslationModes__HeightMode__New2_fn(TranslationModes__HeightMode** __retval)
{
    *__retval = TranslationModes__HeightMode::New2();
}

// public generated HeightMode() [instance] :4669
void TranslationModes__HeightMode::ctor_1()
{
    ctor_();
}

// public generated HeightMode New() [static] :4669
TranslationModes__HeightMode* TranslationModes__HeightMode::New2()
{
    TranslationModes__HeightMode* obj1 = (TranslationModes__HeightMode*)uNew(TranslationModes__HeightMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public delegate void HitTestCallback(Fuse.HitTestResult result) :1081
uDelegateType* HitTestCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestCallback", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::HitTestResult_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class HitTestContext :1094
// {
static void HitTestContext_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::HitTestCallback_typeof(), offsetof(::g::Fuse::HitTestContext, _callback), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _localPoint), 0,
        ::g::Uno::Geometry::Ray_typeof(), offsetof(::g::Fuse::HitTestContext, _worldRay), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _WindowPoint), 0);
}

uType* HitTestContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HitTestContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestContext", options);
    type->fp_build_ = HitTestContext_build;
    return type;
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) :1156
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback)
{
    __this->ctor_(*windowPoint, callback);
}

// public Fuse.HitTestCallback get_Callback() :1131
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// public void Dispose() :1163
void HitTestContext__Dispose_fn(HitTestContext* __this)
{
    __this->Dispose();
}

// public void Hit(Fuse.Visual obj) :1134
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Visual* obj)
{
    __this->Hit(obj);
}

// public float2 get_LocalPoint() :1099
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalPoint();
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) :1156
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval)
{
    *__retval = HitTestContext::New1(*windowPoint, callback);
}

// public void PopLocalPoint(float2 lp) :1108
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp)
{
    __this->PopLocalPoint(*lp);
}

// public float2 PushLocalPoint(float2 lp) :1101
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PushLocalPoint(*lp);
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) :1116
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* n, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PushWorldRay(*n);
}

// public generated float2 get_WindowPoint() :1096
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// private generated void set_WindowPoint(float2 value) :1096
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value)
{
    __this->WindowPoint(*value);
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) [instance] :1156
void HitTestContext::ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    WindowPoint(windowPoint);
    _localPoint = windowPoint;
    _callback = callback;
}

// public Fuse.HitTestCallback get_Callback() [instance] :1131
uDelegate* HitTestContext::Callback()
{
    return _callback;
}

// public void Dispose() [instance] :1163
void HitTestContext::Dispose()
{
    _callback = NULL;
}

// public void Hit(Fuse.Visual obj) [instance] :1134
void HitTestContext::Hit(::g::Fuse::Visual* obj)
{
    ::g::Fuse::HitTestResult* collection1;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection1 = ::g::Fuse::HitTestResult::New1(), uPtr(collection1)->HitObject(obj), obj, collection1));
}

// public float2 get_LocalPoint() [instance] :1099
::g::Uno::Float2 HitTestContext::LocalPoint()
{
    return _localPoint;
}

// public void PopLocalPoint(float2 lp) [instance] :1108
void HitTestContext::PopLocalPoint(::g::Uno::Float2 lp)
{
    _localPoint = lp;
}

// public float2 PushLocalPoint(float2 lp) [instance] :1101
::g::Uno::Float2 HitTestContext::PushLocalPoint(::g::Uno::Float2 lp)
{
    ::g::Uno::Float2 r = _localPoint;
    _localPoint = lp;
    return r;
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) [instance] :1116
::g::Uno::Geometry::Ray HitTestContext::PushWorldRay(::g::Uno::Geometry::Ray n)
{
    ::g::Uno::Geometry::Ray r = _worldRay;
    _worldRay = n;
    return r;
}

// public generated float2 get_WindowPoint() [instance] :1096
::g::Uno::Float2 HitTestContext::WindowPoint()
{
    return _WindowPoint;
}

// private generated void set_WindowPoint(float2 value) [instance] :1096
void HitTestContext::WindowPoint(::g::Uno::Float2 value)
{
    _WindowPoint = value;
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) [static] :1156
HitTestContext* HitTestContext::New1(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    HitTestContext* obj3 = (HitTestContext*)uNew(HitTestContext_typeof());
    obj3->ctor_(windowPoint, callback);
    return obj3;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class Visual.HitTestRecord :5719
// {
static void Visual__HitTestRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Visual__HitTestRecord, Visual), 0);
}

uType* Visual__HitTestRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Visual__HitTestRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Visual.HitTestRecord", options);
    type->fp_build_ = Visual__HitTestRecord_build;
    type->fp_ctor_ = (void*)Visual__HitTestRecord__New1_fn;
    return type;
}

// public generated HitTestRecord() :5719
void Visual__HitTestRecord__ctor__fn(Visual__HitTestRecord* __this)
{
    __this->ctor_();
}

// public void HitTestCallback(Fuse.HitTestResult result) :5722
void Visual__HitTestRecord__HitTestCallback_fn(Visual__HitTestRecord* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public generated HitTestRecord New() :5719
void Visual__HitTestRecord__New1_fn(Visual__HitTestRecord** __retval)
{
    *__retval = Visual__HitTestRecord::New1();
}

// public generated HitTestRecord() [instance] :5719
void Visual__HitTestRecord::ctor_()
{
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :5722
void Visual__HitTestRecord::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    if (Visual == NULL)
        Visual = uPtr(result)->HitObject();
}

// public generated HitTestRecord New() [static] :5719
Visual__HitTestRecord* Visual__HitTestRecord::New1()
{
    Visual__HitTestRecord* obj1 = (Visual__HitTestRecord*)uNew(Visual__HitTestRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class HitTestResult :1085
// {
static void HitTestResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::HitTestResult, _HasHitDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::HitTestResult, _HitDistance), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::HitTestResult, _HitObject), 0);
}

uType* HitTestResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestResult", options);
    type->fp_build_ = HitTestResult_build;
    type->fp_ctor_ = (void*)HitTestResult__New1_fn;
    return type;
}

// public generated HitTestResult() :1085
void HitTestResult__ctor__fn(HitTestResult* __this)
{
    __this->ctor_();
}

// public generated bool get_HasHitDistance() :1087
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval)
{
    *__retval = __this->HasHitDistance();
}

// internal generated void set_HasHitDistance(bool value) :1087
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value)
{
    __this->HasHitDistance(*value);
}

// public generated float get_HitDistance() :1088
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval)
{
    *__retval = __this->HitDistance();
}

// internal generated void set_HitDistance(float value) :1088
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value)
{
    __this->HitDistance(*value);
}

// public generated Fuse.Visual get_HitObject() :1089
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->HitObject();
}

// internal generated void set_HitObject(Fuse.Visual value) :1089
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual* value)
{
    __this->HitObject(value);
}

// public generated HitTestResult New() :1085
void HitTestResult__New1_fn(HitTestResult** __retval)
{
    *__retval = HitTestResult::New1();
}

// public generated HitTestResult() [instance] :1085
void HitTestResult::ctor_()
{
}

// public generated bool get_HasHitDistance() [instance] :1087
bool HitTestResult::HasHitDistance()
{
    return _HasHitDistance;
}

// internal generated void set_HasHitDistance(bool value) [instance] :1087
void HitTestResult::HasHitDistance(bool value)
{
    _HasHitDistance = value;
}

// public generated float get_HitDistance() [instance] :1088
float HitTestResult::HitDistance()
{
    return _HitDistance;
}

// internal generated void set_HitDistance(float value) [instance] :1088
void HitTestResult::HitDistance(float value)
{
    _HitDistance = value;
}

// public generated Fuse.Visual get_HitObject() [instance] :1089
::g::Fuse::Visual* HitTestResult::HitObject()
{
    return _HitObject;
}

// internal generated void set_HitObject(Fuse.Visual value) [instance] :1089
void HitTestResult::HitObject(::g::Fuse::Visual* value)
{
    _HitObject = value;
}

// public generated HitTestResult New() [static] :1085
HitTestResult* HitTestResult::New1()
{
    HitTestResult* obj1 = (HitTestResult*)uNew(HitTestResult_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal enum Visual.HitTestTransformMode :5649
uEnumType* Visual__HitTestTransformMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.HitTestTransformMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LocalPoint", 0LL,
        "WorldRay", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IActualPlacement :4587
// {
uInterfaceType* IActualPlacement_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IActualPlacement", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public abstract interface IArray :1912
// {
uInterfaceType* IArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IArray", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IBeginRemoveVisualListener :4855
// {
uInterfaceType* IBeginRemoveVisualListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IBeginRemoveVisualListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface ICommonViewport :1198
// {
uInterfaceType* ICommonViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ICommonViewport", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface Marshal.IConverter :575
// {
uInterfaceType* Marshal__IConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Marshal.IConverter", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface Node.IDataEnumerator :2357
// {
uInterfaceType* Node__IDataEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.IDataEnumerator", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface Node.IDataListener :2484
// {
uInterfaceType* Node__IDataListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.IDataListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class ScalingModes.IdentityMode :3920
// {
static void ScalingModes__IdentityMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface1));
}

ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof()
{
    static uSStrong<ScalingModes__IdentityMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScalingModes__IdentityMode);
    options.TypeSize = sizeof(ScalingModes__IdentityMode_type);
    type = (ScalingModes__IdentityMode_type*)uClassType::New("Fuse.ScalingModes.IdentityMode", options);
    type->fp_build_ = ScalingModes__IdentityMode_build;
    type->fp_ctor_ = (void*)ScalingModes__IdentityMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))ScalingModes__IdentityMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))ScalingModes__IdentityMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))ScalingModes__IdentityMode__Unsubscribe_fn;
    return type;
}

// public generated IdentityMode() :3920
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling t) :3922
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated IdentityMode New() :3920
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval)
{
    *__retval = ScalingModes__IdentityMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :3924
void ScalingModes__IdentityMode__Subscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :3925
void ScalingModes__IdentityMode__Unsubscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated IdentityMode() [instance] :3920
void ScalingModes__IdentityMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :3922
::g::Uno::Float3 ScalingModes__IdentityMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :3924
uObject* ScalingModes__IdentityMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :3925
void ScalingModes__IdentityMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated IdentityMode New() [static] :3920
ScalingModes__IdentityMode* ScalingModes__IdentityMode::New1()
{
    ScalingModes__IdentityMode* obj1 = (ScalingModes__IdentityMode*)uNew(ScalingModes__IdentityMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IFrustum :1178
// {
uInterfaceType* IFrustum_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrustum", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------------

// internal abstract interface ILoading :253
// {
uInterfaceType* ILoading_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ILoading", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------------

// internal static class ILoadingStatic :258
// {
// static ILoadingStatic() :258
static void ILoadingStatic__cctor__fn(uType* __type)
{
    ILoadingStatic::IsLoadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"IsLoading"*/]);
}

static void ILoadingStatic_build(uType* type)
{
    ::STRINGS[40] = uString::Const("IsLoading");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::ILoadingStatic::IsLoadingName_, uFieldFlagsStatic);
}

uClassType* ILoadingStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ILoadingStatic", options);
    type->fp_build_ = ILoadingStatic_build;
    type->fp_cctor_ = ILoadingStatic__cctor__fn;
    return type;
}

::g::Uno::UX::Selector ILoadingStatic::IsLoadingName_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface INameListener :2068
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INameListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal abstract interface INotifyUnrooted :2630
// {
uInterfaceType* INotifyUnrooted_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INotifyUnrooted", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private struct Visual.InteractionItem :5796
// {
static void Visual__InteractionItem_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Visual__InteractionItem, Id), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Visual__InteractionItem, Cancelled), 0);
}

uStructType* Visual__InteractionItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Visual__InteractionItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Visual.InteractionItem", options);
    type->fp_build_ = Visual__InteractionItem_build;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum InvalidateLayoutReason :6178
uEnumType* InvalidateLayoutReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.InvalidateLayoutReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public abstract interface IObject :1920
// {
uInterfaceType* IObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IObject", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IParentObserver :4950
// {
uInterfaceType* IParentObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IParentObserver", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public abstract interface IProperties :2521
// {
uInterfaceType* IProperties_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IProperties", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public abstract interface IRaw :1907
// {
uInterfaceType* IRaw_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IRaw", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IRenderViewport :1226
// {
uInterfaceType* IRenderViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IRenderViewport", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IScalingMode :3913
// {
uInterfaceType* IScalingMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IScalingMode", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface Node.ISiblingDataProvider :2346
// {
uInterfaceType* Node__ISiblingDataProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.ISiblingDataProvider", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface Node.ISubtreeDataProvider :2352
// {
uInterfaceType* Node__ISubtreeDataProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.ISubtreeDataProvider", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface ITemplateObserver :6938
// {
uInterfaceType* ITemplateObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITemplateObserver", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface ITransformMode :4399
// {
uInterfaceType* ITransformMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformMode", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface ITransformRelative :4389
// {
uInterfaceType* ITransformRelative_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformRelative", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface ITranslationMode :4594
// {
uInterfaceType* ITranslationMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITranslationMode", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public abstract interface IUpdateListener :2984
// {
uInterfaceType* IUpdateListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IUpdateListener", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract interface IViewport :1256
// {
uInterfaceType* IViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IViewport", 0, 0);
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class JSFileSource :170
// {
static void JSFileSource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::JSFileSource, _path), 0);
}

::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.JSFileSource", options);
    type->fp_build_ = JSFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    return type;
}

// public JSFileSource(string path) :174
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :174
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :179
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :174
void JSFileSource::ctor_1(uString* path)
{
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :174
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class Json :1942
// {
static void Json_build(uType* type)
{
    ::STRINGS[41] = uString::Const("Json.Stringify(): object can not contain cycles");
    ::STRINGS[42] = uString::Const("{");
    ::STRINGS[43] = uString::Const(",");
    ::STRINGS[15] = uString::Const(":");
    ::STRINGS[44] = uString::Const("}");
    ::STRINGS[45] = uString::Const("[");
    ::STRINGS[46] = uString::Const("]");
    ::STRINGS[47] = uString::Const("null");
    ::STRINGS[48] = uString::Const("true");
    ::STRINGS[49] = uString::Const("false");
    ::TYPES[36] = ::g::Uno::Collections::HashSet_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::String_typeof();
    ::TYPES[37] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[40] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Fuse::IObject_typeof();
    ::TYPES[41] = ::TYPES[26/*string*/]->Array();
    ::TYPES[42] = ::g::Uno::Array_typeof()->MakeMethod(0/*Copy<string>*/, ::TYPES[26/*string*/], NULL);
    ::TYPES[43] = ::g::Uno::Array_typeof()->MakeMethod(2/*Sort<string>*/, ::TYPES[26/*string*/], NULL);
    ::TYPES[44] = ::g::Uno::Comparison_typeof()->MakeType(::TYPES[26/*string*/], NULL);
    ::TYPES[45] = ::g::Fuse::IArray_typeof();
}

uClassType* Json_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Json", options);
    type->fp_build_ = Json_build;
    return type;
}

// public static string Stringify(object value, [bool normalized]) :1947
void Json__Stringify_fn(uObject* value, bool* normalized, uString** __retval)
{
    *__retval = Json::Stringify(value, *normalized);
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) :1954
void Json__Stringify1_fn(uObject* value, bool* normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    Json::Stringify1(value, *normalized, sb, visitedSet);
}

// public static string ToLiteral(bool b) :2060
void Json__ToLiteral_fn(bool* b, uString** __retval)
{
    *__retval = Json::ToLiteral(*b);
}

// public static string ToLiteral(double s) :2053
void Json__ToLiteral1_fn(double* s, uString** __retval)
{
    *__retval = Json::ToLiteral1(*s);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) :2047
void Json__ToLiteral3_fn(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    Json::ToLiteral3(s, sb);
}

// public static string Stringify(object value, [bool normalized]) [static] :1947
uString* Json::Stringify(uObject* value, bool normalized)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    Json::Stringify1(value, normalized, sb, (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[36/*Uno.Collections.HashSet<object>*/]));
    return sb->ToString();
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) [static] :1954
void Json::Stringify1(uObject* value, bool normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    bool ret1;
    bool ret2;
    bool ret3;
    bool ret4;

    if (uIs(value, ::TYPES[26/*string*/]))
        Json::ToLiteral3(uCast<uString*>(value, ::TYPES[26/*string*/]), sb);
    else if (uIs(value, ::TYPES[37/*double*/]))
        uPtr(sb)->Append2(Json::ToLiteral1(uUnbox<double>(::TYPES[37/*double*/], value)));
    else if (uIs(value, ::TYPES[38/*float*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<float>(::TYPES[38/*float*/], value)));
    else if (uIs(value, ::TYPES[39/*int*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<int>(::TYPES[39/*int*/], value)));
    else if (uIs(value, ::TYPES[40/*bool*/]))
        uPtr(sb)->Append2(Json::ToLiteral(uUnbox<bool>(::TYPES[40/*bool*/], value)));
    else if (uIs(value, ::TYPES[9/*Fuse.IObject*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret1), ret1))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[41/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret2);
        uObject* obj = uAs<uObject*>(value, ::TYPES[9/*Fuse.IObject*/]);
        uPtr(sb)->Append2(::STRINGS[42/*"{"*/]);
        uArray* keys = uArray::New(::TYPES[41/*string[]*/], uPtr(::g::Fuse::IObject::Keys(uInterface(uPtr(obj), ::TYPES[9/*Fuse.IObject*/])))->Length());
        ::g::Uno::Array::Copy1(::TYPES[42/*Uno.Array.Copy<string>*/], ::g::Fuse::IObject::Keys(uInterface(obj, ::TYPES[9/*Fuse.IObject*/])), keys, uPtr(::g::Fuse::IObject::Keys(uInterface(obj, ::TYPES[9/*Fuse.IObject*/])))->Length());

        if (normalized)
            ::g::Uno::Array::Sort1(::TYPES[43/*Uno.Array.Sort<string>*/], keys, uDelegate::New(::TYPES[44/*Uno.Comparison<string>*/], (void*)::g::Uno::String__Compare_fn));

        for (int i = 0; i < keys->Length(); i++)
        {
            if (i > 0)
                uPtr(sb)->Append2(::STRINGS[43/*","*/]);

            Json::ToLiteral3(uPtr(keys)->Strong<uString*>(i), sb);
            uPtr(sb)->Append2(::STRINGS[15/*":"*/]);
            Json::Stringify1(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[9/*Fuse.IObject*/]), keys->Strong<uString*>(i)), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[44/*"}"*/]);
    }
    else if (uIs(value, ::TYPES[45/*Fuse.IArray*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret3), ret3))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[41/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret4);
        uObject* arr = uAs<uObject*>(value, ::TYPES[45/*Fuse.IArray*/]);
        uPtr(sb)->Append2(::STRINGS[45/*"["*/]);

        for (int i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[45/*Fuse.IArray*/])); i1++)
        {
            if (i1 > 0)
                uPtr(sb)->Append2(::STRINGS[43/*","*/]);

            Json::Stringify1(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[45/*Fuse.IArray*/]), i1), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[46/*"]"*/]);
    }
    else
        uPtr(sb)->Append2(::STRINGS[47/*"null"*/]);
}

// public static string ToLiteral(bool b) [static] :2060
uString* Json::ToLiteral(bool b)
{
    if (b)
        return ::STRINGS[48/*"true"*/];
    else
        return ::STRINGS[49/*"false"*/];
}

// public static string ToLiteral(double s) [static] :2053
uString* Json::ToLiteral1(double s)
{
    if ((double)(int)s == s)
        return ::g::Uno::Int::ToString((int)s, ::TYPES[39/*int*/]);

    return ::g::Uno::Double::ToString(s, ::TYPES[37/*double*/]);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) [static] :2047
void Json::ToLiteral3(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    uPtr(sb)->Append2(::g::Uno::Data::Json::JsonWriter::QuoteString(s));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class KeyboardBootstrapper :1469
// {
static void KeyboardBootstrapper_build(uType* type)
{
    ::TYPES[46] = ::g::Uno::Exception_typeof();
}

uType* KeyboardBootstrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(KeyboardBootstrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.KeyboardBootstrapper", options);
    type->fp_build_ = KeyboardBootstrapper_build;
    return type;
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :1471
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyPressed(sender, args);
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :1488
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyReleased(sender, args);
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :1471
void KeyboardBootstrapper::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        if (!uPtr(args)->Handled() && (uPtr(args)->Key() == 9))
            ::g::Fuse::Input::Focus::Move(uPtr(args)->IsShiftKeyPressed() ? 0 : 1);

        ::g::Fuse::Input::Keyboard::RaiseKeyPressed(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :1488
void KeyboardBootstrapper::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        ::g::Fuse::Input::Keyboard::RaiseKeyReleased(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum Layer :6144
uEnumType* Layer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layer", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Underlay", 0LL,
        "Background", 1LL,
        "Layout", 2LL,
        "Overlay", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum LayoutDependent :6186
uEnumType* LayoutDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutDependent", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "No", 0LL,
        "NoArrange", 1LL,
        "Maybe", 2LL,
        "MaybeArrange", 3LL,
        "Yes", 4LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public struct LayoutParams :1528
// {
static void LayoutParams_build(uType* type)
{
    type->SetFields(0,
        LayoutParams__Flags_typeof(), offsetof(::g::Fuse::LayoutParams, _flags), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _maxSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _minSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _relativeSize), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LayoutParams::_warnTrueClone_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LayoutParams::_warnDeriveClone_, uFieldFlagsStatic);
}

uStructType* LayoutParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ValueSize = sizeof(LayoutParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.LayoutParams", options);
    type->fp_build_ = LayoutParams_build;
    return type;
}

// public void BoxConstrain(Fuse.LayoutParams o) :1834
void LayoutParams__BoxConstrain_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->BoxConstrain(*o);
}

// public Fuse.LayoutParams Clone() :1596
void LayoutParams__Clone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->Clone();
}

// public Fuse.LayoutParams CloneAndDerive() :1625
void LayoutParams__CloneAndDerive_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->CloneAndDerive();
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) :1791
void LayoutParams__ConstrainMax_fn(LayoutParams* __this, ::g::Uno::Float2* max, bool* hasMaxX, bool* hasMaxY)
{
    __this->ConstrainMax(*max, *hasMaxX, *hasMaxY);
}

// public void ConstrainMaxX(float max) :1773
void LayoutParams__ConstrainMaxX_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxX(*max);
}

// public void ConstrainMaxY(float max) :1782
void LayoutParams__ConstrainMaxY_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxY(*max);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) :1820
void LayoutParams__ConstrainMin_fn(LayoutParams* __this, ::g::Uno::Float2* min, bool* hasMinX, bool* hasMinY)
{
    __this->ConstrainMin(*min, *hasMinX, *hasMinY);
}

// public void ConstrainMinX(float min) :1802
void LayoutParams__ConstrainMinX_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinX(*min);
}

// public void ConstrainMinY(float min) :1811
void LayoutParams__ConstrainMinY_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinY(*min);
}

// public static Fuse.LayoutParams Create(float2 size) :1664
void LayoutParams__Create_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__Create(*size);
}

// public static Fuse.LayoutParams CreateEmpty() :1693
void LayoutParams__CreateEmpty_fn(LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateEmpty();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) :1673
void LayoutParams__CreateTemporary_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateTemporary(*size);
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) :1683
void LayoutParams__CreateXY_fn(::g::Uno::Float2* size, bool* hasX, bool* hasY, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateXY(*size, *hasX, *hasY);
}

// public float2 GetAvailableSize() :1888
void LayoutParams__GetAvailableSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize();
}

// public float2 GetAvailableSize(bool& hasX, bool& hasY) :1895
void LayoutParams__GetAvailableSize1_fn(LayoutParams* __this, bool* hasX, bool* hasY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize1(hasX, hasY);
}

// public bool get_HasMaxSize() :1568
void LayoutParams__get_HasMaxSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxSize();
}

// public bool get_HasMaxX() :1566
void LayoutParams__get_HasMaxX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxX();
}

// public bool get_HasMaxY() :1567
void LayoutParams__get_HasMaxY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxY();
}

// public bool get_HasMinX() :1570
void LayoutParams__get_HasMinX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinX();
}

// public bool get_HasMinY() :1571
void LayoutParams__get_HasMinY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinY();
}

// public bool get_HasRelativeX() :1576
void LayoutParams__get_HasRelativeX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeX();
}

// public bool get_HasRelativeY() :1585
void LayoutParams__get_HasRelativeY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeY();
}

// public bool get_HasSize() :1562
void LayoutParams__get_HasSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasSize();
}

// public bool get_HasX() :1560
void LayoutParams__get_HasX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasX();
}

// public bool get_HasY() :1561
void LayoutParams__get_HasY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasY();
}

// public bool IsCompatible(Fuse.LayoutParams nlp) :1973
void LayoutParams__IsCompatible_fn(LayoutParams* __this, LayoutParams* nlp, bool* __retval)
{
    *__retval = __this->IsCompatible(*nlp);
}

// public float2 get_MaxSize() :1906
void LayoutParams__get_MaxSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxSize();
}

// public float get_MaxX() :1907
void LayoutParams__get_MaxX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxX();
}

// public float get_MaxY() :1908
void LayoutParams__get_MaxY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxY();
}

// public float2 get_MinSize() :1910
void LayoutParams__get_MinSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinSize();
}

// public float get_MinX() :1911
void LayoutParams__get_MinX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinX();
}

// public float get_MinY() :1912
void LayoutParams__get_MinY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinY();
}

// public float2 PointConstrain(float2 p) :1844
void LayoutParams__PointConstrain_fn(LayoutParams* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain(*p);
}

// private float2 PointConstrain(float2 p, bool& knowX, bool& knowY) :1851
void LayoutParams__PointConstrain1_fn(LayoutParams* __this, ::g::Uno::Float2* p, bool* knowX, bool* knowY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain1(*p, knowX, knowY);
}

// public float get_RelativeX() :1917
void LayoutParams__get_RelativeX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeX();
}

// public float get_RelativeY() :1926
void LayoutParams__get_RelativeY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeY();
}

// public void RemoveSize(float2 size) :1701
void LayoutParams__RemoveSize_fn(LayoutParams* __this, ::g::Uno::Float2* size)
{
    __this->RemoveSize(*size);
}

// public void RemoveSize(float4 size) :1708
void LayoutParams__RemoveSize1_fn(LayoutParams* __this, ::g::Uno::Float4* size)
{
    __this->RemoveSize1(*size);
}

// public void Reset() :1649
void LayoutParams__Reset_fn(LayoutParams* __this)
{
    __this->Reset();
}

// public void RetainMaxXY(bool x, bool y) :1727
void LayoutParams__RetainMaxXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainMaxXY(*x, *y);
}

// public void RetainXY(bool x, bool y) :1713
void LayoutParams__RetainXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainXY(*x, *y);
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) :1552
void LayoutParams__SetFlag_fn(LayoutParams* __this, int* g, bool* val)
{
    __this->SetFlag(*g, *val);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) :1764
void LayoutParams__SetRelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* sz, bool* hasX, bool* hasY)
{
    __this->SetRelativeSize(*sz, *hasX, *hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) :1741
void LayoutParams__SetSize_fn(LayoutParams* __this, ::g::Uno::Float2* xy, bool* hasX, bool* hasY)
{
    __this->SetSize(*xy, *hasX, *hasY);
}

// public void SetX(float x) :1752
void LayoutParams__SetX_fn(LayoutParams* __this, float* x)
{
    __this->SetX(*x);
}

// public void SetY(float y) :1758
void LayoutParams__SetY_fn(LayoutParams* __this, float* y)
{
    __this->SetY(*y);
}

// public float2 get_Size() :1902
void LayoutParams__get_Size_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public bool get_Temporary() :1564
void LayoutParams__get_Temporary_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->Temporary();
}

// public float get_X() :1903
void LayoutParams__get_X_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->X();
}

// public float get_Y() :1904
void LayoutParams__get_Y_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->Y();
}

bool LayoutParams::_warnTrueClone_;
bool LayoutParams::_warnDeriveClone_;

// public void BoxConstrain(Fuse.LayoutParams o) [instance] :1834
void LayoutParams::BoxConstrain(LayoutParams o)
{
    SetSize(o.Size(), o.HasX(), o.HasY());
    ConstrainMax(o.MaxSize(), o.HasMaxX(), o.HasMaxY());
    ConstrainMin(o.MinSize(), o.HasMinX(), o.HasMinY());
}

// public Fuse.LayoutParams Clone() [instance] :1596
LayoutParams LayoutParams::Clone()
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp._flags = _flags;
    lp._size = _size;
    lp._maxSize = _maxSize;
    lp._minSize = _minSize;
    lp._relativeSize = _relativeSize;
    return lp;
}

// public Fuse.LayoutParams CloneAndDerive() [instance] :1625
LayoutParams LayoutParams::CloneAndDerive()
{
    LayoutParams lp = Clone();
    lp.SetFlag(128, false);
    lp.SetFlag(256, false);
    lp.SetFlag(512, false);
    lp.SetFlag(1024, false);
    lp._relativeSize = ::g::Uno::Float2__New1(0.0f);
    return lp;
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) [instance] :1791
void LayoutParams::ConstrainMax(::g::Uno::Float2 max, bool hasMaxX, bool hasMaxY)
{
    max = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), max);

    if (hasMaxX)
        ConstrainMaxX(max.X);

    if (hasMaxY)
        ConstrainMaxY(max.Y);
}

// public void ConstrainMaxX(float max) [instance] :1773
void LayoutParams::ConstrainMaxX(float max)
{
    if (HasMaxX())
        _maxSize.X = ::g::Uno::Math::Min1(_maxSize.X, max);
    else
        _maxSize.X = max;

    SetFlag(8, true);
}

// public void ConstrainMaxY(float max) [instance] :1782
void LayoutParams::ConstrainMaxY(float max)
{
    if (HasMaxY())
        _maxSize.Y = ::g::Uno::Math::Min1(_maxSize.Y, max);
    else
        _maxSize.Y = max;

    SetFlag(16, true);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) [instance] :1820
void LayoutParams::ConstrainMin(::g::Uno::Float2 min, bool hasMinX, bool hasMinY)
{
    min = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), min);

    if (hasMinX)
        ConstrainMinX(min.X);

    if (hasMinY)
        ConstrainMinY(min.Y);
}

// public void ConstrainMinX(float min) [instance] :1802
void LayoutParams::ConstrainMinX(float min)
{
    if (HasMinX())
        _minSize.X = ::g::Uno::Math::Min1(_minSize.X, min);
    else
        _minSize.X = min;

    SetFlag(32, true);
}

// public void ConstrainMinY(float min) [instance] :1811
void LayoutParams::ConstrainMinY(float min)
{
    if (HasMinY())
        _minSize.Y = ::g::Uno::Math::Min1(_minSize.Y, min);
    else
        _minSize.Y = min;

    SetFlag(64, true);
}

// public float2 GetAvailableSize() [instance] :1888
::g::Uno::Float2 LayoutParams::GetAvailableSize()
{
    bool x = false;
    bool y = false;
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), &x, &y);
}

// public float2 GetAvailableSize(bool& hasX, bool& hasY) [instance] :1895
::g::Uno::Float2 LayoutParams::GetAvailableSize1(bool* hasX, bool* hasY)
{
    *hasX = false;
    *hasY = false;
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), hasX, hasY);
}

// public bool get_HasMaxSize() [instance] :1568
bool LayoutParams::HasMaxSize()
{
    return HasMaxX() && HasMaxY();
}

// public bool get_HasMaxX() [instance] :1566
bool LayoutParams::HasMaxX()
{
    return (_flags & 8) == 8;
}

// public bool get_HasMaxY() [instance] :1567
bool LayoutParams::HasMaxY()
{
    return (_flags & 16) == 16;
}

// public bool get_HasMinX() [instance] :1570
bool LayoutParams::HasMinX()
{
    return (_flags & 32) == 32;
}

// public bool get_HasMinY() [instance] :1571
bool LayoutParams::HasMinY()
{
    return (_flags & 64) == 64;
}

// public bool get_HasRelativeX() [instance] :1576
bool LayoutParams::HasRelativeX()
{
    if ((_flags & 512) == 512)
        return false;

    return ((_flags & 128) == 128) || HasX();
}

// public bool get_HasRelativeY() [instance] :1585
bool LayoutParams::HasRelativeY()
{
    if ((_flags & 1024) == 1024)
        return false;

    return ((_flags & 256) == 256) || HasY();
}

// public bool get_HasSize() [instance] :1562
bool LayoutParams::HasSize()
{
    return HasX() && HasY();
}

// public bool get_HasX() [instance] :1560
bool LayoutParams::HasX()
{
    return (_flags & 1) == 1;
}

// public bool get_HasY() [instance] :1561
bool LayoutParams::HasY()
{
    return (_flags & 2) == 2;
}

// public bool IsCompatible(Fuse.LayoutParams nlp) [instance] :1973
bool LayoutParams::IsCompatible(LayoutParams nlp)
{
    if ((((((HasX() != nlp.HasX()) || (HasY() != nlp.HasY())) || (HasMaxX() != nlp.HasMaxX())) || (HasMaxY() != nlp.HasMaxY())) || (HasMinX() != nlp.HasMinX())) || (HasMinY() != nlp.HasMinY()))
        return false;

    if (HasX() && (::g::Uno::Math::Abs1(X() - nlp.X()) > 1e-05f))
        return false;

    if (HasY() && (::g::Uno::Math::Abs1(Y() - nlp.Y()) > 1e-05f))
        return false;

    if (HasMaxX() && (::g::Uno::Math::Abs1(MaxX() - nlp.MaxX()) > 1e-05f))
        return false;

    if (HasMinX() && (::g::Uno::Math::Abs1(MinX() - nlp.MinX()) > 1e-05f))
        return false;

    if (HasMaxY() && (::g::Uno::Math::Abs1(MaxY() - nlp.MaxY()) > 1e-05f))
        return false;

    if (HasMinY() && (::g::Uno::Math::Abs1(MinY() - nlp.MinY()) > 1e-05f))
        return false;

    if (HasRelativeX() && (::g::Uno::Math::Abs1(RelativeX() - nlp.RelativeX()) > 1e-05f))
        return false;

    if (HasRelativeY() && (::g::Uno::Math::Abs1(RelativeY() - nlp.RelativeY()) > 1e-05f))
        return false;

    return true;
}

// public float2 get_MaxSize() [instance] :1906
::g::Uno::Float2 LayoutParams::MaxSize()
{
    return _maxSize;
}

// public float get_MaxX() [instance] :1907
float LayoutParams::MaxX()
{
    return _maxSize.X;
}

// public float get_MaxY() [instance] :1908
float LayoutParams::MaxY()
{
    return _maxSize.Y;
}

// public float2 get_MinSize() [instance] :1910
::g::Uno::Float2 LayoutParams::MinSize()
{
    return _minSize;
}

// public float get_MinX() [instance] :1911
float LayoutParams::MinX()
{
    return _minSize.X;
}

// public float get_MinY() [instance] :1912
float LayoutParams::MinY()
{
    return _minSize.Y;
}

// public float2 PointConstrain(float2 p) [instance] :1844
::g::Uno::Float2 LayoutParams::PointConstrain(::g::Uno::Float2 p)
{
    bool x = true;
    bool y = true;
    return PointConstrain1(p, &x, &y);
}

// private float2 PointConstrain(float2 p, bool& knowX, bool& knowY) [instance] :1851
::g::Uno::Float2 LayoutParams::PointConstrain1(::g::Uno::Float2 p, bool* knowX, bool* knowY)
{
    if (HasX())
    {
        p.X = X();
        *knowX = true;
    }

    if (HasMaxX())
    {
        p.X = (*knowX ? ::g::Uno::Math::Min1(p.X, MaxX()) : MaxX());
        *knowX = true;
    }

    if (HasMinX())
    {
        p.X = (*knowX ? ::g::Uno::Math::Max1(p.X, MinX()) : MinX());
        *knowX = true;
    }

    if (HasY())
    {
        p.Y = Y();
        *knowY = true;
    }

    if (HasMaxY())
    {
        p.Y = (*knowY ? ::g::Uno::Math::Min1(p.Y, MaxY()) : MaxY());
        *knowY = true;
    }

    if (HasMinY())
    {
        p.Y = (*knowY ? ::g::Uno::Math::Max1(p.Y, MinY()) : MinY());
        *knowY = true;
    }

    return p;
}

// public float get_RelativeX() [instance] :1917
float LayoutParams::RelativeX()
{
    if ((_flags & 512) == 512)
        return 0.0f;

    return ((_flags & 128) == 128) ? _relativeSize.X : _size.X;
}

// public float get_RelativeY() [instance] :1926
float LayoutParams::RelativeY()
{
    if ((_flags & 1024) == 1024)
        return 0.0f;

    return ((_flags & 256) == 256) ? _relativeSize.Y : _size.Y;
}

// public void RemoveSize(float2 size) [instance] :1701
void LayoutParams::RemoveSize(::g::Uno::Float2 size)
{
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_size, size));
    _maxSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_maxSize, size));
    _minSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_minSize, size));
}

// public void RemoveSize(float4 size) [instance] :1708
void LayoutParams::RemoveSize1(::g::Uno::Float4 size)
{
    RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(size.X, size.Y), ::g::Uno::Float2__New2(size.Z, size.W)));
}

// public void Reset() [instance] :1649
void LayoutParams::Reset()
{
    _flags = 0;
    _size = (_maxSize = (_minSize = (_relativeSize = ::g::Uno::Float2__New1(0.0f))));
}

// public void RetainMaxXY(bool x, bool y) [instance] :1727
void LayoutParams::RetainMaxXY(bool x, bool y)
{
    if (!x)
    {
        _maxSize.X = 0.0f;
        SetFlag(8, false);
    }

    if (!y)
    {
        _maxSize.Y = 0.0f;
        SetFlag(16, false);
    }
}

// public void RetainXY(bool x, bool y) [instance] :1713
void LayoutParams::RetainXY(bool x, bool y)
{
    if (!x)
    {
        _size.X = 0.0f;
        SetFlag(1, false);
    }

    if (!y)
    {
        _size.Y = 0.0f;
        SetFlag(2, false);
    }
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) [instance] :1552
void LayoutParams::SetFlag(int g, bool val)
{
    if (val)
        _flags = (_flags | g);
    else
        _flags = (_flags & ~g);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) [instance] :1764
void LayoutParams::SetRelativeSize(::g::Uno::Float2 sz, bool hasX, bool hasY)
{
    _relativeSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), sz);
    SetFlag(128, hasX);
    SetFlag(512, !hasX);
    SetFlag(256, hasY);
    SetFlag(1024, !hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) [instance] :1741
void LayoutParams::SetSize(::g::Uno::Float2 xy, bool hasX, bool hasY)
{
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), xy);
    SetFlag(1, hasX);

    if (!hasX)
        _size.X = 0.0f;

    SetFlag(2, hasY);

    if (!hasY)
        _size.Y = 0.0f;
}

// public void SetX(float x) [instance] :1752
void LayoutParams::SetX(float x)
{
    SetFlag(1, true);
    _size.X = ::g::Uno::Math::Max1(x, 0.0f);
}

// public void SetY(float y) [instance] :1758
void LayoutParams::SetY(float y)
{
    SetFlag(2, true);
    _size.Y = ::g::Uno::Math::Max1(y, 0.0f);
}

// public float2 get_Size() [instance] :1902
::g::Uno::Float2 LayoutParams::Size()
{
    return _size;
}

// public bool get_Temporary() [instance] :1564
bool LayoutParams::Temporary()
{
    return (_flags & 4) == 4;
}

// public float get_X() [instance] :1903
float LayoutParams::X()
{
    return _size.X;
}

// public float get_Y() [instance] :1904
float LayoutParams::Y()
{
    return _size.Y;
}

// public static Fuse.LayoutParams Create(float2 size) [static] :1664
LayoutParams LayoutParams__Create(::g::Uno::Float2 size)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    return lp;
}

// public static Fuse.LayoutParams CreateEmpty() [static] :1693
LayoutParams LayoutParams__CreateEmpty()
{
    return uDefault<LayoutParams>();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) [static] :1673
LayoutParams LayoutParams__CreateTemporary(::g::Uno::Float2 size)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    lp.SetFlag(4, true);
    return lp;
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) [static] :1683
LayoutParams LayoutParams__CreateXY(::g::Uno::Float2 size, bool hasX, bool hasY)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, hasX);
    lp.SetFlag(2, hasY);
    lp._size.X = (hasX ? ::g::Uno::Math::Max1(size.X, 0.0f) : 0.0f);
    lp._size.Y = (hasY ? ::g::Uno::Math::Max1(size.Y, 0.0f) : 0.0f);
    return lp;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class LayoutPriority :2974
// {
// static LayoutPriority() :2974
static void LayoutPriority__cctor__fn(uType* __type)
{
    LayoutPriority::Placement_ = 100;
    LayoutPriority::Later_ = 500;
    LayoutPriority::Post_ = 1000;
}

static void LayoutPriority_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LayoutPriority::Later_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LayoutPriority::Placement_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LayoutPriority::Post_, uFieldFlagsStatic);
}

uClassType* LayoutPriority_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LayoutPriority", options);
    type->fp_build_ = LayoutPriority_build;
    type->fp_cctor_ = LayoutPriority__cctor__fn;
    return type;
}

int LayoutPriority::Later_;
int LayoutPriority::Placement_;
int LayoutPriority::Post_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum LayoutRole :6166
uEnumType* LayoutRole_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutRole", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "Placeholder", 1LL,
        "Inert", 2LL,
        "Independent", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class TranslationModes.LocalMode :4601
// {
static void TranslationModes__LocalMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface1));
}

TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof()
{
    static uSStrong<TranslationModes__LocalMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__LocalMode);
    options.TypeSize = sizeof(TranslationModes__LocalMode_type);
    type = (TranslationModes__LocalMode_type*)uClassType::New("Fuse.TranslationModes.LocalMode", options);
    type->fp_build_ = TranslationModes__LocalMode_build;
    type->fp_ctor_ = (void*)TranslationModes__LocalMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__LocalMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__LocalMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__LocalMode__Unsubscribe_fn;
    return type;
}

// public generated LocalMode() :4601
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :4603
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated LocalMode New() :4601
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval)
{
    *__retval = TranslationModes__LocalMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :4604
void TranslationModes__LocalMode__Subscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :4605
void TranslationModes__LocalMode__Unsubscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated LocalMode() [instance] :4601
void TranslationModes__LocalMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :4603
::g::Uno::Float3 TranslationModes__LocalMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :4604
uObject* TranslationModes__LocalMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :4605
void TranslationModes__LocalMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated LocalMode New() [static] :4601
TranslationModes__LocalMode* TranslationModes__LocalMode::New1()
{
    TranslationModes__LocalMode* obj1 = (TranslationModes__LocalMode*)uNew(TranslationModes__LocalMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// public partial static class Marshal :200
// {
// static Marshal() :388
static void Marshal__cctor__fn(uType* __type)
{
    Marshal::_computers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[47/*Uno.Collections.Dictionary<Uno.Type, Fuse.Computer>*/]));
    Marshal::_converters_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[48/*Uno.Collections.List<Fuse.Marshal.IConverter>*/]));
    ::g::Fuse::NumberComputer* number = ::g::Fuse::NumberComputer::New1();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[37/*double*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[38/*float*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[39/*int*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[56/*short*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[59/*sbyte*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[55/*uint*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[57/*ushort*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[58/*byte*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[53/*Uno.UX.Size*/], ::g::Fuse::SizeComputer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[54/*Uno.UX.Size2*/], ::g::Fuse::Size2Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[26/*string*/], ::g::Fuse::StringComputer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[50/*float2*/], ::g::Fuse::Float2Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[51/*float3*/], ::g::Fuse::Float3Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[52/*float4*/], ::g::Fuse::Float4Computer::New1());
    Marshal::AddConverter((uObject*)::g::Fuse::FileSourceConverter::New1());
}

static void Marshal_build(uType* type)
{
    ::STRINGS[48] = uString::Const("true");
    ::STRINGS[50] = uString::Const("True");
    ::STRINGS[49] = uString::Const("false");
    ::STRINGS[51] = uString::Const("False");
    ::STRINGS[52] = uString::Const("#");
    ::STRINGS[53] = uString::Const("Cannot convert '");
    ::STRINGS[54] = uString::Const("' to target type '");
    ::STRINGS[55] = uString::Const("'");
    ::STRINGS[56] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno");
    ::STRINGS[57] = uString::Const("TryConvertTo");
    ::TYPES[47] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Fuse::Computer_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::List_typeof()->MakeType(Marshal__IConverter_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Type_typeof();
    ::TYPES[49] = Marshal__IConverter_typeof();
    ::TYPES[40] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::String_typeof();
    ::TYPES[37] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[50] = ::g::Uno::Float2_typeof();
    ::TYPES[51] = ::g::Uno::Float3_typeof();
    ::TYPES[52] = ::g::Uno::Float4_typeof();
    ::TYPES[53] = ::g::Uno::UX::Size_typeof();
    ::TYPES[54] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[55] = ::g::Uno::UInt_typeof();
    ::TYPES[56] = ::g::Uno::Short_typeof();
    ::TYPES[57] = ::g::Uno::UShort_typeof();
    ::TYPES[58] = ::g::Uno::Byte_typeof();
    ::TYPES[59] = ::g::Uno::SByte_typeof();
    ::TYPES[45] = ::g::Fuse::IArray_typeof();
    type->SetFields(0,
        ::TYPES[47/*Uno.Collections.Dictionary<Uno.Type, Fuse.Computer>*/], (uintptr_t)&::g::Fuse::Marshal::_computers_, uFieldFlagsStatic,
        ::TYPES[48/*Uno.Collections.List<Fuse.Marshal.IConverter>*/], (uintptr_t)&::g::Fuse::Marshal::_converters_, uFieldFlagsStatic);
}

uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Marshal", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Marshal_build;
    type->fp_cctor_ = Marshal__cctor__fn;
    return type;
}

// public static void AddConverter(Fuse.Marshal.IConverter conv) :582
void Marshal__AddConverter_fn(uObject* conv)
{
    Marshal::AddConverter(conv);
}

// public static bool CanConvertClass(Uno.Type t) :634
void Marshal__CanConvertClass_fn(uType* t, bool* __retval)
{
    *__retval = Marshal::CanConvertClass(t);
}

// public static bool Is(object obj, Uno.Type t) :653
void Marshal__Is_fn(uObject* obj, uType* t, bool* __retval)
{
    *__retval = Marshal::Is(obj, t);
}

// public static bool ToBool(object v) :202
void Marshal__ToBool_fn(uObject* v, bool* __retval)
{
    *__retval = Marshal::ToBool(v);
}

// public static double ToDouble(object v) :216
void Marshal__ToDouble_fn(uObject* v, double* __retval)
{
    *__retval = Marshal::ToDouble(v);
}

// public static bool ToDouble(object v, double& res) :223
void Marshal__ToDouble1_fn(uObject* v, double* res, bool* __retval)
{
    *__retval = Marshal::ToDouble1(v, res);
}

// public static bool ToDouble(string s, double& res) :250
void Marshal__ToDouble2_fn(uString* s, double* res, bool* __retval)
{
    *__retval = Marshal::ToDouble2(s, res);
}

// public static float ToFloat(object o) :318
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static float2 ToFloat2(object o) :312
void Marshal__ToFloat2_fn(uObject* o, ::g::Uno::Float2* __retval)
{
    *__retval = Marshal::ToFloat2(o);
}

// public static float3 ToFloat3(object o) :306
void Marshal__ToFloat3_fn(uObject* o, ::g::Uno::Float3* __retval)
{
    *__retval = Marshal::ToFloat3(o);
}

// public static float4 ToFloat4(object o) :255
void Marshal__ToFloat4_fn(uObject* o, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat4(o);
}

// public static int ToInt(object o) :324
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static Uno.UX.Size ToSize(object o) :360
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval)
{
    *__retval = Marshal::ToSize(o);
}

// public static Uno.UX.Size2 ToSize2(object o) :367
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval)
{
    *__retval = Marshal::ToSize2(o);
}

// public static T ToType<T>(object o) :627
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval)
{
    __type->Base->Init();
    uObject* res;
    Marshal::TryConvertTo(__type->U(0), o, &res, NULL);
    return __retval.Store(__type->U(0), uUnboxAny(__type->U(0), res)), void();
}

// public static bool TryConvertTo(Uno.Type t, object o, object& res, [object diagnosticSource]) :587
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** res, uObject* diagnosticSource, bool* __retval)
{
    *__retval = Marshal::TryConvertTo(t, o, res, diagnosticSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Marshal::_computers_;
uSStrong< ::g::Uno::Collections::List*> Marshal::_converters_;

// public static void AddConverter(Fuse.Marshal.IConverter conv) [static] :582
void Marshal::AddConverter(uObject* conv)
{
    Marshal_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Marshal::_converters()), conv);
}

// public static bool CanConvertClass(Uno.Type t) [static] :634
bool Marshal::CanConvertClass(uType* t)
{
    Marshal_typeof()->Init();
    uObject* ret4;

    for (int i = 0; i < uPtr(Marshal::_converters())->Count(); i++)
        if (Marshal__IConverter::CanConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters()), uCRef<int>(i), &ret4), ret4)), ::TYPES[49/*Fuse.Marshal.IConverter*/]), t))
            return true;

    return false;
}

// public static bool Is(object obj, Uno.Type t) [static] :653
bool Marshal::Is(uObject* obj, uType* t)
{
    Marshal_typeof()->Init();

    if (obj == NULL)
        return false;

    if (::g::Uno::Type::IsInterface(uPtr(t)))
    {
        uArray* intf = ::g::Uno::Type::GetInterfaces(uPtr(::g::Uno::Object::GetType(uPtr(obj))));

        for (int i = 0; i < uPtr(intf)->Length(); i++)
            if (::g::Uno::Type::op_Equality(uPtr(intf)->Strong<uType*>(i), t))
                return true;
    }
    else
    {
        uType* objType = ::g::Uno::Object::GetType(uPtr(obj));

        if (::g::Uno::Type::op_Equality(t, objType) || ::g::Uno::Type::IsSubclassOf(uPtr(::g::Uno::Object::GetType(obj)), t))
            return true;
    }

    return false;
}

// public static bool ToBool(object v) [static] :202
bool Marshal::ToBool(uObject* v)
{
    Marshal_typeof()->Init();

    if (uIs(v, ::TYPES[40/*bool*/]))
        return uUnbox<bool>(::TYPES[40/*bool*/], v);
    else if (uIs(v, ::TYPES[26/*string*/]))
    {
        uString* s = uCast<uString*>(v, ::TYPES[26/*string*/]);

        if (::g::Uno::String::op_Equality(s, ::STRINGS[48/*"true"*/]))
            return true;

        if (::g::Uno::String::op_Equality(s, ::STRINGS[50/*"True"*/]))
            return true;

        if (::g::Uno::String::op_Equality(s, ::STRINGS[49/*"false"*/]))
            return false;

        if (::g::Uno::String::op_Equality(s, ::STRINGS[51/*"False"*/]))
            return false;
    }

    U_THROW(::g::Fuse::MarshalException::New4(v, ::TYPES[40/*bool*/]));
}

// public static double ToDouble(object v) [static] :216
double Marshal::ToDouble(uObject* v)
{
    Marshal_typeof()->Init();
    double res;

    if (Marshal::ToDouble1(v, &res))
        return res;

    U_THROW(::g::Fuse::MarshalException::New4(v, ::TYPES[37/*double*/]));
}

// public static bool ToDouble(object v, double& res) [static] :223
bool Marshal::ToDouble1(uObject* v, double* res)
{
    Marshal_typeof()->Init();

    if (uIs(v, ::TYPES[37/*double*/]))
    {
        *res = uUnbox<double>(::TYPES[37/*double*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[38/*float*/]))
    {
        *res = (double)uUnbox<float>(::TYPES[38/*float*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[26/*string*/]))
        return Marshal::ToDouble2(uCast<uString*>(v, ::TYPES[26/*string*/]), res);
    else if (uIs(v, ::TYPES[39/*int*/]))
    {
        *res = (double)uUnbox<int>(::TYPES[39/*int*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[50/*float2*/]))
    {
        *res = (double)uUnbox< ::g::Uno::Float2>(::TYPES[50/*float2*/], v).X;
        return true;
    }
    else if (uIs(v, ::TYPES[51/*float3*/]))
    {
        *res = (double)uUnbox< ::g::Uno::Float3>(::TYPES[51/*float3*/], v).X;
        return true;
    }
    else if (uIs(v, ::TYPES[52/*float4*/]))
    {
        *res = (double)uUnbox< ::g::Uno::Float4>(::TYPES[52/*float4*/], v).X;
        return true;
    }
    else if (uIs(v, ::TYPES[53/*Uno.UX.Size*/]))
    {
        *res = (double)uUnbox< ::g::Uno::UX::Size>(::TYPES[53/*Uno.UX.Size*/], v).Value;
        return true;
    }
    else if (uIs(v, ::TYPES[54/*Uno.UX.Size2*/]))
    {
        ::g::Uno::UX::Size2 s = uUnbox< ::g::Uno::UX::Size2>(::TYPES[54/*Uno.UX.Size2*/], v);
        ::g::Uno::UX::Size x = s.X;
        *res = (double)x.Value;
        return true;
    }
    else if (uIs(v, ::TYPES[55/*uint*/]))
    {
        *res = (double)uUnbox<uint32_t>(::TYPES[55/*uint*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[56/*short*/]))
    {
        *res = (double)uUnbox<int16_t>(::TYPES[56/*short*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[57/*ushort*/]))
    {
        *res = (double)uUnbox<uint16_t>(::TYPES[57/*ushort*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[58/*byte*/]))
    {
        *res = (double)uUnbox<uint8_t>(::TYPES[58/*byte*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[59/*sbyte*/]))
    {
        *res = (double)uUnbox<int8_t>(::TYPES[59/*sbyte*/], v);
        return true;
    }

    *res = 0;
    return false;
}

// public static bool ToDouble(string s, double& res) [static] :250
bool Marshal::ToDouble2(uString* s, double* res)
{
    Marshal_typeof()->Init();
    return ::g::Uno::Double::TryParse(s, res);
}

// public static float ToFloat(object o) [static] :318
float Marshal::ToFloat(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[38/*float*/]))
        return uUnbox<float>(::TYPES[38/*float*/], o);
    else
        return (float)Marshal::ToDouble(o);
}

// public static float2 ToFloat2(object o) [static] :312
::g::Uno::Float2 Marshal::ToFloat2(uObject* o)
{
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind2;

    if (uIs(o, ::TYPES[50/*float2*/]))
        return uUnbox< ::g::Uno::Float2>(::TYPES[50/*float2*/], o);
    else
        return (ind2 = Marshal::ToFloat4(o), ::g::Uno::Float2__New2(ind2.X, ind2.Y));
}

// public static float3 ToFloat3(object o) [static] :306
::g::Uno::Float3 Marshal::ToFloat3(uObject* o)
{
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind1;

    if (uIs(o, ::TYPES[51/*float3*/]))
        return uUnbox< ::g::Uno::Float3>(::TYPES[51/*float3*/], o);
    else
        return (ind1 = Marshal::ToFloat4(o), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z));
}

// public static float4 ToFloat4(object o) [static] :255
::g::Uno::Float4 Marshal::ToFloat4(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[52/*float4*/]))
        return uUnbox< ::g::Uno::Float4>(::TYPES[52/*float4*/], o);
    else if (uIs(o, ::TYPES[51/*float3*/]))
    {
        ::g::Uno::Float3 f = uUnbox< ::g::Uno::Float3>(::TYPES[51/*float3*/], o);
        return ::g::Uno::Float4__New2(f.X, f.Y, f.Z, 1.0f);
    }
    else if (uIs(o, ::TYPES[50/*float2*/]))
    {
        ::g::Uno::Float2 f1 = uUnbox< ::g::Uno::Float2>(::TYPES[50/*float2*/], o);
        return ::g::Uno::Float4__New2(f1.X, f1.Y, f1.X, f1.Y);
    }
    else if (uIs(o, ::TYPES[26/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[26/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), ::STRINGS[52/*"#"*/]))
            return ::g::Uno::Color::FromHex(s);
    }
    else if (uIs(o, ::TYPES[53/*Uno.UX.Size*/]))
    {
        ::g::Uno::UX::Size s1 = uUnbox< ::g::Uno::UX::Size>(::TYPES[53/*Uno.UX.Size*/], o);
        return ::g::Uno::Float4__New1(s1.Value);
    }
    else if (uIs(o, ::TYPES[54/*Uno.UX.Size2*/]))
    {
        ::g::Uno::UX::Size2 s2 = uUnbox< ::g::Uno::UX::Size2>(::TYPES[54/*Uno.UX.Size2*/], o);
        ::g::Uno::UX::Size x = s2.X;
        ::g::Uno::UX::Size y = s2.Y;
        return ::g::Uno::Float4__New2(x.Value, y.Value, x.Value, y.Value);
    }
    else if (uIs(o, ::TYPES[45/*Fuse.IArray*/]))
    {
        uObject* a = (uObject*)o;
        float x1 = (::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[45/*Fuse.IArray*/])) > 0) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[45/*Fuse.IArray*/]), 0)) : 0.0f;
        float y1 = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[45/*Fuse.IArray*/])) > 1) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[45/*Fuse.IArray*/]), 1)) : 0.0f;
        float z = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[45/*Fuse.IArray*/])) > 2) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[45/*Fuse.IArray*/]), 2)) : 0.0f;
        float w = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[45/*Fuse.IArray*/])) > 3) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[45/*Fuse.IArray*/]), 3)) : 1.0f;
        return ::g::Uno::Float4__New2(x1, y1, z, w);
    }

    double d;

    if (Marshal::ToDouble1(o, &d))
    {
        float f2 = (float)d;
        return ::g::Uno::Float4__New1(f2);
    }

    U_THROW(::g::Fuse::MarshalException::New4(o, ::TYPES[52/*float4*/]));
}

// public static int ToInt(object o) [static] :324
int Marshal::ToInt(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[39/*int*/]))
        return uUnbox<int>(::TYPES[39/*int*/], o);
    else
        return (int)Marshal::ToDouble(o);
}

// public static Uno.UX.Size ToSize(object o) [static] :360
::g::Uno::UX::Size Marshal::ToSize(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[53/*Uno.UX.Size*/]))
        return uUnbox< ::g::Uno::UX::Size>(::TYPES[53/*Uno.UX.Size*/], o);
    else if (uIs(o, ::TYPES[54/*Uno.UX.Size2*/]))
        return uUnbox< ::g::Uno::UX::Size2>(::TYPES[54/*Uno.UX.Size2*/], o).X;
    else
        return ::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat(o));
}

// public static Uno.UX.Size2 ToSize2(object o) [static] :367
::g::Uno::UX::Size2 Marshal::ToSize2(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[54/*Uno.UX.Size2*/]))
        return uUnbox< ::g::Uno::UX::Size2>(::TYPES[54/*Uno.UX.Size2*/], o);
    else if (uIs(o, ::TYPES[53/*Uno.UX.Size*/]))
        return ::g::Uno::UX::Size2__New1(uUnbox< ::g::Uno::UX::Size>(::TYPES[53/*Uno.UX.Size*/], o), uUnbox< ::g::Uno::UX::Size>(::TYPES[53/*Uno.UX.Size*/], o));
    else
        return ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat2(o).X), ::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat2(o).Y));
}

// public static bool TryConvertTo(Uno.Type t, object o, object& res, [object diagnosticSource]) [static] :587
bool Marshal::TryConvertTo(uType* t, uObject* o, uObject** res, uObject* diagnosticSource)
{
    Marshal_typeof()->Init();
    uObject* ret15;

    if (o == NULL)
    {
        *res = NULL;
        return true;
    }

    if (::g::Uno::Type::op_Equality(t, ::TYPES[37/*double*/]))
    {
        *res = uBox(::TYPES[37/*double*/], Marshal::ToDouble(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[26/*string*/]))
    {
        *res = ::g::Uno::Object::ToString(uPtr(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[87/*Uno.UX.Selector*/]))
    {
        *res = uBox(::TYPES[87/*Uno.UX.Selector*/], ::g::Uno::UX::Selector__op_Implicit(::g::Uno::Object::ToString(uPtr(o))));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[38/*float*/]))
    {
        *res = uBox(::TYPES[38/*float*/], Marshal::ToFloat(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[39/*int*/]))
    {
        *res = uBox<int>(::TYPES[39/*int*/], Marshal::ToInt(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[40/*bool*/]))
    {
        *res = uBox(::TYPES[40/*bool*/], Marshal::ToBool(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[53/*Uno.UX.Size*/]))
    {
        *res = uBox(::TYPES[53/*Uno.UX.Size*/], Marshal::ToSize(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[54/*Uno.UX.Size2*/]))
    {
        *res = uBox(::TYPES[54/*Uno.UX.Size2*/], Marshal::ToSize2(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[50/*float2*/]))
    {
        *res = uBox(::TYPES[50/*float2*/], Marshal::ToFloat2(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[51/*float3*/]))
    {
        *res = uBox(::TYPES[51/*float3*/], Marshal::ToFloat3(o));
        return true;
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[52/*float4*/]))
    {
        *res = uBox(::TYPES[52/*float4*/], Marshal::ToFloat4(o));
        return true;
    }
    else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[26/*string*/]))
    {
        *res = ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[26/*string*/]));
        return true;
    }
    else

        for (int i = 0; i < uPtr(Marshal::_converters())->Count(); i++)
        {
            uObject* c = Marshal__IConverter::TryConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters()), uCRef<int>(i), &ret15), ret15)), ::TYPES[49/*Fuse.Marshal.IConverter*/]), t, o);

            if (c != NULL)
            {
                *res = c;
                return true;
            }
        }

    if (diagnosticSource != NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[53/*"Cannot conv...*/], o), ::STRINGS[54/*"' to target...*/]), t), ::STRINGS[55/*"'"*/]), diagnosticSource, ::STRINGS[56/*"/Users/paul...*/], 621, ::STRINGS[57/*"TryConvertTo"*/], NULL);

    *res = NULL;
    return false;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class MarshalException :195
// {
static void MarshalException_build(uType* type)
{
    ::STRINGS[53] = uString::Const("Cannot convert '");
    ::STRINGS[58] = uString::Const("' to required target type '");
    ::STRINGS[55] = uString::Const("'");
    type->SetFields(3);
}

::g::Uno::Exception_type* MarshalException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MarshalException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.MarshalException", options);
    type->fp_build_ = MarshalException_build;
    return type;
}

// public MarshalException(object v, Uno.Type t) :197
void MarshalException__ctor_3_fn(MarshalException* __this, uObject* v, uType* t)
{
    __this->ctor_3(v, t);
}

// public MarshalException New(object v, Uno.Type t) :197
void MarshalException__New4_fn(uObject* v, uType* t, MarshalException** __retval)
{
    *__retval = MarshalException::New4(v, t);
}

// public MarshalException(object v, Uno.Type t) [instance] :197
void MarshalException::ctor_3(uObject* v, uType* t)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[53/*"Cannot conv...*/], v), ::STRINGS[58/*"' to requir...*/]), t), ::STRINGS[55/*"'"*/]));
}

// public MarshalException New(object v, Uno.Type t) [static] :197
MarshalException* MarshalException::New4(uObject* v, uType* t)
{
    MarshalException* obj1 = (MarshalException*)uNew(MarshalException_typeof());
    obj1->ctor_3(v, t);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed extern class MobileBootstrapping :2009
// {
static void MobileBootstrapping_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::MobileBootstrapping::_isInited_, uFieldFlagsStatic);
}

uType* MobileBootstrapping_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MobileBootstrapping);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.MobileBootstrapping", options);
    type->fp_build_ = MobileBootstrapping_build;
    return type;
}

// public static void Init() :2012
void MobileBootstrapping__Init_fn()
{
    MobileBootstrapping::Init();
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) :2041
void MobileBootstrapping__OnEnterForeground_fn(int* state)
{
    MobileBootstrapping::OnEnterForeground(*state);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) :2046
void MobileBootstrapping__OnEnterInteractive_fn(int* state)
{
    MobileBootstrapping::OnEnterInteractive(*state);
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) :2051
void MobileBootstrapping__OnExitInteractive_fn(int* state)
{
    MobileBootstrapping::OnExitInteractive(*state);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) :2036
void MobileBootstrapping__OnStarted_fn(int* state)
{
    MobileBootstrapping::OnStarted(*state);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) :2027
void MobileBootstrapping__OnTerminating_fn(int* state)
{
    MobileBootstrapping::OnTerminating(*state);
}

bool MobileBootstrapping::_isInited_;

// public static void Init() [static] :2012
void MobileBootstrapping::Init()
{
    if (MobileBootstrapping::_isInited_)
        return;

    MobileBootstrapping::_isInited_ = true;
    ::g::Fuse::Platform::Lifecycle::add_Started(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyDown(uDelegate::New(::TYPES[60/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyUp(uDelegate::New(::TYPES[60/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) [static] :2041
void MobileBootstrapping::OnEnterForeground(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(20U);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) [static] :2046
void MobileBootstrapping::OnEnterInteractive(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(60U);
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) [static] :2051
void MobileBootstrapping::OnExitInteractive(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(20U);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) [static] :2036
void MobileBootstrapping::OnStarted(int state)
{
    uPtr(::g::Uno::Platform::CoreApp::Current())->Load();
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) [static] :2027
void MobileBootstrapping::OnTerminating(int state)
{
    ::g::Fuse::Platform::Lifecycle::remove_Started(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_ExitedInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public static class NameRegistry :2074
// {
// static NameRegistry() :2074
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_nameToObj_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[61/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.Node>>*/]));
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[62/*Uno.Collections.Dictionary<Fuse.Node, Uno.UX.Selector>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[63/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>*/]));
}

static void NameRegistry_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), NULL);
    ::TYPES[62] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof(), NULL);
    ::TYPES[63] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof(), NULL), NULL);
    ::TYPES[64] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof(), NULL);
    ::TYPES[65] = ::g::Fuse::INameListener_typeof();
    ::TYPES[66] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::TYPES[64/*Uno.Collections.List<Fuse.INameListener>*/], NULL);
    ::TYPES[67] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[63/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>*/], (uintptr_t)&::g::Fuse::NameRegistry::_listeners_, uFieldFlagsStatic,
        ::TYPES[62/*Uno.Collections.Dictionary<Fuse.Node, Uno.UX.Selector>*/], (uintptr_t)&::g::Fuse::NameRegistry::_names_, uFieldFlagsStatic,
        ::TYPES[61/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.Node>>*/], (uintptr_t)&::g::Fuse::NameRegistry::_nameToObj_, uFieldFlagsStatic);
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NameRegistry", options);
    type->fp_build_ = NameRegistry_build;
    type->fp_cctor_ = NameRegistry__cctor__fn;
    return type;
}

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) :2135
void NameRegistry__AddListener_fn(::g::Uno::UX::Selector* name, uObject* listener)
{
    NameRegistry::AddListener(*name, listener);
}

// public static void ClearName(Fuse.Node obj) :2128
void NameRegistry__ClearName_fn(::g::Fuse::Node* obj)
{
    NameRegistry::ClearName(obj);
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) :2115
void NameRegistry__GetObjectsWithName_fn(::g::Uno::UX::Selector* name, ::g::Uno::Collections::List** __retval)
{
    *__retval = NameRegistry::GetObjectsWithName(*name);
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) :2157
void NameRegistry__NotifyNameChanged_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::NotifyNameChanged(obj, *name);
}

// public static void RemoveListener(Fuse.INameListener listener) :2145
void NameRegistry__RemoveListener_fn(uObject* listener)
{
    NameRegistry::RemoveListener(listener);
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) :2080
void NameRegistry__SetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::SetName(obj, *name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_nameToObj_;

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) [static] :2135
void NameRegistry::AddListener(::g::Uno::UX::Selector name, uObject* listener)
{
    NameRegistry_typeof()->Init();
    bool ret5;
    bool ret6;
    ::g::Uno::Collections::List* ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NameRegistry::_listeners()), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[64/*Uno.Collections.List<Fuse.INameListener>*/]));

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret7), ret7)), listener, &ret6), ret6))
        ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret8), ret8)), listener);
}

// public static void ClearName(Fuse.Node obj) [static] :2128
void NameRegistry::ClearName(::g::Fuse::Node* obj)
{
    NameRegistry_typeof()->Init();
    NameRegistry::SetName(obj, uDefault< ::g::Uno::UX::Selector>());
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) [static] :2115
::g::Uno::Collections::List* NameRegistry::GetObjectsWithName(::g::Uno::UX::Selector name)
{
    NameRegistry_typeof()->Init();
    bool ret11;
    ::g::Uno::Collections::List* res = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), (void**)(&res), &ret11);
    return res;
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) [static] :2157
void NameRegistry::NotifyNameChanged(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    NameRegistry_typeof()->Init();
    uArray* array2;
    int index3;
    int length4;
    bool ret12;
    ::g::Uno::Collections::List* ret13;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret12), ret12))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret13), ret13))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::INameListener::OnNameChanged(uInterface(uPtr(listener), ::TYPES[65/*Fuse.INameListener*/]), obj, name);
        }
}

// public static void RemoveListener(Fuse.INameListener listener) [static] :2145
void NameRegistry::RemoveListener(uObject* listener)
{
    NameRegistry_typeof()->Init();
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret14;
    bool ret15;
    bool ret16;

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(NameRegistry::_listeners())->Values()), &ret14), ret14); enum1.MoveNext(::TYPES[66/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[66/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), listener, &ret15), ret15))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), listener, &ret16);
            break;
        }
    }
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) [static] :2080
void NameRegistry::SetName(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    NameRegistry_typeof()->Init();
    bool ret17;
    ::g::Uno::UX::Selector ret18;
    bool ret19;
    ::g::Uno::Collections::List* ret20;
    ::g::Uno::Collections::List* ret21;
    bool ret22;
    bool ret23;
    bool ret24;
    ::g::Uno::Collections::List* ret25;
    ::g::Uno::UX::Selector oldName = uDefault< ::g::Uno::UX::Selector>();

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret17), ret17))
    {
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret18), ret18);

        if (::g::Uno::UX::Selector__op_Equality(name, oldName))
            return;

        ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret20), ret20)), obj, &ret19);

        if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret21), ret21))->Count() == 0)
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret22);
    }

    if (::g::Uno::UX::Selector__op_Inequality(name, oldName))
    {
        if (name.IsNull())
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names()), obj, &ret23);
        else
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names()), obj, uCRef(name));

            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), &ret24), ret24))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[67/*Uno.Collections.List<Fuse.Node>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), &ret25), ret25)), obj);
        }

        if (!oldName.IsNull())
            NameRegistry::NotifyNameChanged(obj, oldName);

        if (!name.IsNull())
            NameRegistry::NotifyNameChanged(obj, name);
    }
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public interfacemodifiers class Node :2180
// {
// static Node() :2845
static void Node__cctor__fn(uType* __type)
{
    Node::_emptyBindings_ = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[68/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Binding>*/], uArray::New(::TYPES[69/*Fuse.Binding[]*/], 0)));
    Node::_dataListeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[70/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Node.IDataListener>>*/]));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[71/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[72/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[59/*"_createWatc...*/], uDelegate::New(::TYPES[73/*Uno.Func<Fuse.Scripting.Context, Fuse.Node, object[], object>*/], (void*)Node___createWatcher_fn), 1), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[72/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[60/*"_destroyWat...*/], uDelegate::New(::TYPES[74/*Uno.Action<Fuse.Scripting.Context, Fuse.Node, object[]>*/], (void*)Node___destroyWatcher_fn), 1), (::g::Fuse::Scripting::ScriptMethodInline*)::g::Fuse::Scripting::ScriptMethodInline::New1(::STRINGS[61/*"findData"*/], 1, ::STRINGS[62/*"function(ke...*/])));
}

static void Node_build(uType* type)
{
    ::STRINGS[59] = uString::Const("_createWatcher");
    ::STRINGS[60] = uString::Const("_destroyWatcher");
    ::STRINGS[61] = uString::Const("findData");
    ::STRINGS[62] = uString::Const("function(key) { return Observable._getDataObserver(this, key); }");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[63] = uString::Const("Incomplete or duplicate rooting: ");
    ::STRINGS[64] = uString::Const("/");
    ::STRINGS[65] = uString::Const("Node is already rooted with a different parent");
    ::STRINGS[66] = uString::Const("Invalid RootStage post rooting: ");
    ::STRINGS[67] = uString::Const(", Name: ");
    ::STRINGS[68] = uString::Const("Incomplete or duplicate unrooting: ");
    ::TYPES[68] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[69] = ::g::Fuse::Binding_typeof()->Array();
    ::TYPES[70] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Node__IDataListener_typeof(), NULL), NULL);
    ::TYPES[25] = ::g::Uno::Type_typeof();
    ::TYPES[71] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[72] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[73] = ::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[74] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[26] = ::g::Uno::String_typeof();
    ::TYPES[75] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[76] = Node__DataWatcher_typeof();
    ::TYPES[77] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[78] = ::g::Fuse::Binding_typeof();
    ::TYPES[79] = ::g::Uno::Collections::List_typeof()->MakeType(Node__IDataListener_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::IObject_typeof();
    ::TYPES[80] = Node__ISubtreeDataProvider_typeof();
    ::TYPES[81] = Node__IDataEnumerator_typeof();
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[82] = ::g::Uno::Collections::ICollection_typeof()->MakeType(type, NULL);
    ::TYPES[83] = Node__ISiblingDataProvider_typeof();
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(type, NULL);
    ::TYPES[85] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[78/*Fuse.Binding*/], NULL);
    ::TYPES[86] = Node__IDataListener_typeof();
    ::TYPES[87] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[88] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[78/*Fuse.Binding*/], NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[78/*Fuse.Binding*/], NULL), offsetof(Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[78/*Fuse.Binding*/], NULL), offsetof(Node_type, interface4),
        ::TYPES[88/*Uno.Collections.IEnumerable<Fuse.Binding>*/], offsetof(Node_type, interface5));
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Node, _bindings), 0,
        ::TYPES[87/*Uno.UX.Selector*/], offsetof(::g::Fuse::Node, _name), 0,
        ::TYPES[6/*Fuse.Visual*/], offsetof(::g::Fuse::Node, _parent), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _preservedRootFrame), 0,
        ::g::Fuse::Properties_typeof(), offsetof(::g::Fuse::Node, _properties), 0,
        ::g::Fuse::RootStage_typeof(), offsetof(::g::Fuse::Node, _rootStage), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Node, _scriptContext), 0,
        uObject_typeof(), offsetof(::g::Fuse::Node, _scriptObject), 0,
        type, offsetof(::g::Fuse::Node, OverrideContextParent), uFieldFlagsWeak,
        ::TYPES[2/*Uno.Action*/], offsetof(::g::Fuse::Node, RootingCompleted1), 0,
        ::TYPES[2/*Uno.Action*/], offsetof(::g::Fuse::Node, Unrooted1), 0,
        ::TYPES[70/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Node.IDataListener>>*/], (uintptr_t)&::g::Fuse::Node::_dataListeners_, uFieldFlagsStatic,
        ::TYPES[88/*Uno.Collections.IEnumerable<Fuse.Binding>*/], (uintptr_t)&::g::Fuse::Node::_emptyBindings_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Node::_hasRootCapture_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Node::_rootCaptureIndex_, uFieldFlagsStatic);
}

Node_type* Node_typeof()
{
    static uSStrong<Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Node);
    options.TypeSize = sizeof(Node_type);
    type = (Node_type*)uClassType::New("Fuse.Node", options);
    type->fp_build_ = Node_build;
    type->fp_cctor_ = Node__cctor__fn;
    type->fp_GetLastNodeInGroup = Node__GetLastNodeInGroup_fn;
    type->fp_OnRooted = Node__OnRooted_fn;
    type->fp_OnUnrooted = Node__OnUnrooted_fn;
    type->fp_SoftDispose = Node__SoftDispose_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Node__ToString_fn;
    type->fp_TryGetResource = Node__TryGetResource_fn;
    type->fp_VisitSubtree = Node__VisitSubtree_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))Node__Remove_fn;
    return type;
}

// protected generated Node() :2180
void Node__ctor_1_fn(Node* __this)
{
    __this->ctor_1();
}

// private static object _createWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) :2853
void Node___createWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args, uObject** __retval)
{
    *__retval = Node::_createWatcher(c, n, args);
}

// private static void _destroyWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) :2860
void Node___destroyWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node::_destroyWatcher(c, n, args);
}

// public void Add(Fuse.Binding item) :2240
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item)
{
    __this->Add(item);
}

// public void AddDataListener(string key, Fuse.Node.IDataListener listener) :2502
void Node__AddDataListener_fn(Node* __this, uString* key, uObject* listener)
{
    __this->AddDataListener(key, listener);
}

// private Fuse.Binding get_Binding() :2188
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval)
{
    *__retval = __this->Binding();
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() :2189
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->BindingList();
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() :2184
void Node__get_Bindings_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Bindings();
}

// protected void BroadcastDataChange(object oldData, object newData) :2442
void Node__BroadcastDataChange_fn(Node* __this, uObject* oldData, uObject* newData)
{
    __this->BroadcastDataChange(oldData, newData);
}

// internal static bool CaptureRooting() :2667
void Node__CaptureRooting_fn(bool* __retval)
{
    *__retval = Node::CaptureRooting();
}

// private static bool Contains(string[] strs, string s) :2476
void Node__Contains_fn(uArray* strs, uString* s, bool* __retval)
{
    *__retval = Node::Contains(strs, s);
}

// public Fuse.Node get_ContextParent() :2984
void Node__get_ContextParent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->ContextParent();
}

// private int DistanceTo(Fuse.Node obj, int reference) :2583
void Node__DistanceTo_fn(Node* __this, Node* obj, int* reference, int* __retval)
{
    *__retval = __this->DistanceTo(obj, *reference);
}

// public void EnumerateData(Fuse.Node.IDataEnumerator e) :2407
void Node__EnumerateData_fn(Node* __this, uObject* e)
{
    __this->EnumerateData(e);
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) :2558
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval)
{
    *__retval = __this->FindNodeByName(*name, acceptor);
}

// private void Fuse.INotifyUnrooted.add_Unrooted(Uno.Action value) :2751
void Node__FuseINotifyUnrootedadd_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// private void Fuse.INotifyUnrooted.remove_Unrooted(Uno.Action value) :2752
void Node__FuseINotifyUnrootedremove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// private Fuse.Scripting.Context Fuse.Scripting.IScriptObject.get_ScriptContext() :2953
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval)
{
    return *__retval = __this->_scriptContext, void();
}

// private object Fuse.Scripting.IScriptObject.get_ScriptObject() :2948
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval)
{
    return *__retval = __this->_scriptObject, void();
}

// private void Fuse.Scripting.IScriptObject.SetScriptObject(object obj, Fuse.Scripting.Context context) :2956
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->_scriptObject = obj;
    __this->_scriptContext = context;
}

// public object GetFirstData() :2400
void Node__GetFirstData_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->GetFirstData();
}

// internal virtual Fuse.Node GetLastNodeInGroup() :3033
void Node__GetLastNodeInGroup_fn(Node* __this, Node** __retval)
{
    return *__retval = __this, void();
}

// private bool HasInSubtree(Fuse.Node c) :2599
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval)
{
    *__retval = __this->HasInSubtree(c);
}

// public void Insert(int index, Fuse.Binding item) :2277
void Node__Insert_fn(Node* __this, int* index, ::g::Fuse::Binding* item)
{
    __this->Insert(*index, item);
}

// internal bool get_IsPreservedRootFrame() :2805
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsPreservedRootFrame();
}

// internal static bool IsRootCapture(int index) :2662
void Node__IsRootCapture_fn(int* index, bool* __retval)
{
    *__retval = Node::IsRootCapture(*index);
}

// public bool get_IsRootingCompleted() :2649
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingCompleted();
}

// public bool get_IsRootingStarted() :2644
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingStarted();
}

// internal bool get_IsUnrooted() :2653
void Node__get_IsUnrooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooted();
}

// internal bool get_IsUnrooting() :2651
void Node__get_IsUnrooting_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooting();
}

// private void MakeBindingList(Fuse.Binding newItem) :2191
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem)
{
    __this->MakeBindingList(newItem);
}

// public Uno.UX.Selector get_Name() :2536
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(Uno.UX.Selector value) :2537
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public void OnDataChanged(string key, object newValue) :2492
void Node__OnDataChanged_fn(Node* __this, uString* key, uObject* newValue)
{
    __this->OnDataChanged(key, newValue);
}

// protected virtual void OnRooted() :2742
void Node__OnRooted_fn(Node* __this)
{
    __this->RootBindings();
}

// protected virtual void OnUnrooted() :2777
void Node__OnUnrooted_fn(Node* __this)
{
    __this->UnrootBindings();
}

// public Fuse.Visual get_Parent() :2976
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// public Fuse.Properties get_Properties() :2966
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) :2782
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Relate(parent, child);
}

// internal static void ReleaseRooting(bool captured) :2680
void Node__ReleaseRooting_fn(bool* captured)
{
    Node::ReleaseRooting(*captured);
}

// public bool Remove(Fuse.Binding item) :2249
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    *__retval = __this->Remove(item);
}

// public void RemoveDataListener(string key, Fuse.Node.IDataListener listener) :2513
void Node__RemoveDataListener_fn(Node* __this, uString* key, uObject* listener)
{
    __this->RemoveDataListener(key, listener);
}

// private void Root(Fuse.Binding b) :2200
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Root(b);
}

// private void RootBindings() :2210
void Node__RootBindings_fn(Node* __this)
{
    __this->RootBindings();
}

// internal static int get_RootCaptureIndex() :2661
void Node__get_RootCaptureIndex_fn(int* __retval)
{
    *__retval = Node::RootCaptureIndex();
}

// internal generated void add_RootingCompleted(Uno.Action value) :2737
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->add_RootingCompleted(value);
}

// internal generated void remove_RootingCompleted(Uno.Action value) :2737
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->remove_RootingCompleted(value);
}

// internal void RootInternal(Fuse.Visual parent) :2690
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternal(parent);
}

// private void RootInternalImpl(Fuse.Visual parent) :2703
void Node__RootInternalImpl_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternalImpl(parent);
}

// protected virtual void SoftDispose() :2799
void Node__SoftDispose_fn(Node* __this)
{
}

// public override sealed string ToString() :3008
void Node__ToString_fn(Node* __this, uString** __retval)
{
    uString* ret12;
    uString* ret13;

    if (!__this->Name().IsNull())
        return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Object__ToString_fn(__this, &ret12), ret12), ::STRINGS[67/*", Name: "*/]), __this->Name().ToString(::TYPES[87/*Uno.UX.Selector*/])), void();
    else
        return *__retval = (::g::Uno::Object__ToString_fn(__this, &ret13), ret13), void();
}

// public virtual bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :2994
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    *resource = NULL;
    return *__retval = false, void();
}

// private void Uno.Collections.ICollection<Fuse.Binding>.Clear() :2234
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this)
{
    if (__this->IsRootingStarted())
        __this->UnrootBindings();

    __this->_bindings = NULL;
}

// private bool Uno.Collections.ICollection<Fuse.Binding>.Contains(Fuse.Binding item) :2259
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    bool ret14;

    if (__this->_bindings == item)
        return *__retval = true, void();

    ::g::Uno::Collections::List* bl = __this->BindingList();

    if (bl != NULL)
        return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(bl), item, &ret14), ret14), void();

    return *__retval = false, void();
}

// private int Uno.Collections.ICollection<Fuse.Binding>.get_Count() :2269
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int* __retval)
{
    if (__this->_bindings == NULL)
        return *__retval = 0, void();

    if (uIs((uObject*)__this->_bindings, ::TYPES[78/*Fuse.Binding*/]))
        return *__retval = 1, void();

    return *__retval = uPtr(__this->BindingList())->Count(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Binding> Uno.Collections.IEnumerable<Fuse.Binding>.GetEnumerator() :2327
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Binding*> > ret15;

    if (__this->_bindings == NULL)
        return *__retval = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Node::_emptyBindings()), ::TYPES[88/*Uno.Collections.IEnumerable<Fuse.Binding>*/])), void();

    if (uIs((uObject*)__this->_bindings, ::TYPES[78/*Fuse.Binding*/]))
        __this->MakeBindingList(NULL);

    return *__retval = uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[78/*Fuse.Binding*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->BindingList()), &ret15), ret15)), void();
}

// private Fuse.Binding Uno.Collections.IList<Fuse.Binding>.get_Item(int index) :2308
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int* index, ::g::Fuse::Binding** __retval)
{
    int index_ = *index;
    ::g::Fuse::Binding* ret17;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        return *__retval = b, void();
    }
    else
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->BindingList()), uCRef<int>(index_), &ret17), ret17), void();
}

// private void Uno.Collections.IList<Fuse.Binding>.RemoveAt(int index) :2289
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int* index)
{
    int index_ = *index;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        __this->Unroot(b);
        __this->_bindings = NULL;
    }
    else
        uPtr(__this->BindingList())->RemoveAt(index_);
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) :2790
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Unrelate(parent, child);
}

// private void Unroot(Fuse.Binding b) :2205
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Unroot(b);
}

// private void UnrootBindings() :2222
void Node__UnrootBindings_fn(Node* __this)
{
    __this->UnrootBindings();
}

// internal generated void add_Unrooted(Uno.Action value) :2747
void Node__add_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// internal generated void remove_Unrooted(Uno.Action value) :2747
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// internal void UnrootInternal() :2755
void Node__UnrootInternal_fn(Node* __this)
{
    __this->UnrootInternal();
}

// public virtual void VisitSubtree(Uno.Action<Fuse.Node> action) :3003
void Node__VisitSubtree_fn(Node* __this, uDelegate* action)
{
    uPtr(action)->InvokeVoid(__this);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Node::_dataListeners_;
uSStrong<uObject*> Node::_emptyBindings_;
bool Node::_hasRootCapture_;
int Node::_rootCaptureIndex_;

// protected generated Node() [instance] :2180
void Node::ctor_1()
{
    _preservedRootFrame = -1;
    ctor_();
}

// public void Add(Fuse.Binding item) [instance] :2240
void Node::Add(::g::Fuse::Binding* item)
{
    if (_bindings == NULL)
        _bindings = item;
    else if (uIs((uObject*)_bindings, ::TYPES[78/*Fuse.Binding*/]))
        MakeBindingList(item);
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(BindingList()), item);

    Root(item);
}

// public void AddDataListener(string key, Fuse.Node.IDataListener listener) [instance] :2502
void Node::AddDataListener(uString* key, uObject* listener)
{
    bool ret2;
    ::g::Uno::Collections::List* listeners;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Node::_dataListeners()), key, (void**)(&listeners), &ret2), ret2))
    {
        listeners = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[79/*Uno.Collections.List<Fuse.Node.IDataListener>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Node::_dataListeners()), key, listeners);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(listeners), listener);
}

// private Fuse.Binding get_Binding() [instance] :2188
::g::Fuse::Binding* Node::Binding()
{
    return uAs< ::g::Fuse::Binding*>(_bindings, ::TYPES[78/*Fuse.Binding*/]);
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() [instance] :2189
::g::Uno::Collections::List* Node::BindingList()
{
    return uAs< ::g::Uno::Collections::List*>(_bindings, ::TYPES[85/*Uno.Collections.List<Fuse.Binding>*/]);
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() [instance] :2184
uObject* Node::Bindings()
{
    return (uObject*)this;
}

// protected void BroadcastDataChange(object oldData, object newData) [instance] :2442
void Node::BroadcastDataChange(uObject* oldData, uObject* newData)
{
    uArray* newKeys = NULL;
    uObject* newObj = uAs<uObject*>(newData, ::TYPES[9/*Fuse.IObject*/]);

    if (newObj != NULL)
    {
        newKeys = ::g::Fuse::IObject::Keys(uInterface(uPtr(newObj), ::TYPES[9/*Fuse.IObject*/]));

        for (int i = 0; i < uPtr(newKeys)->Length(); i++)
            OnDataChanged(uPtr(newKeys)->Strong<uString*>(i), ::g::Fuse::IObject::Item(uInterface(uPtr(newObj), ::TYPES[9/*Fuse.IObject*/]), uPtr(newKeys)->Strong<uString*>(i)));
    }
    else if (newData != NULL)
        OnDataChanged(::STRINGS[8/*""*/], newData);

    uObject* oldObj = uAs<uObject*>(oldData, ::TYPES[9/*Fuse.IObject*/]);

    if (oldObj != NULL)
    {
        uArray* keys = ::g::Fuse::IObject::Keys(uInterface(uPtr(oldObj), ::TYPES[9/*Fuse.IObject*/]));

        for (int i1 = 0; i1 < uPtr(keys)->Length(); i1++)
        {
            if ((newKeys != NULL) && Node::Contains(newKeys, uPtr(keys)->Strong<uString*>(i1)))
                continue;

            OnDataChanged(uPtr(keys)->Strong<uString*>(i1), NULL);
        }
    }
    else if (oldData != NULL)
    {
        if (newKeys != NULL)
            OnDataChanged(::STRINGS[8/*""*/], NULL);
    }
}

// public Fuse.Node get_ContextParent() [instance] :2984
Node* Node::ContextParent()
{
    Node* ind1 = OverrideContextParent;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// private int DistanceTo(Fuse.Node obj, int reference) [instance] :2583
int Node::DistanceTo(Node* obj, int reference)
{
    Node* p = this;
    int c = 0;

    while (p != NULL)
    {
        if (uPtr(p)->HasInSubtree(obj))
            return c;

        c++;

        if (c > reference)
            return c;

        p = uPtr(p)->Parent();
    }

    return 2147483647;
}

// public void EnumerateData(Fuse.Node.IDataEnumerator e) [instance] :2407
void Node::EnumerateData(uObject* e)
{
    Node* ret3;
    Node* n = this;

    while (n != NULL)
    {
        Node* np = uPtr(n)->ContextParent();

        if (np != NULL)
        {
            uObject* subdp = uAs<uObject*>(np, ::TYPES[80/*Fuse.Node.ISubtreeDataProvider*/]);

            if (subdp != NULL)
            {
                uObject* data = Node__ISubtreeDataProvider::GetData(uInterface(uPtr(subdp), ::TYPES[80/*Fuse.Node.ISubtreeDataProvider*/]), n);

                if ((data != NULL) && !Node__IDataEnumerator::NextData(uInterface(uPtr(e), ::TYPES[81/*Fuse.Node.IDataEnumerator*/]), data))
                    return;
            }
        }

        ::g::Fuse::Visual* p = uAs< ::g::Fuse::Visual*>(np, ::TYPES[6/*Fuse.Visual*/]);

        if (p != NULL)

            for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(p)->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; i--)
            {
                uObject* sibdp = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(p)->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[83/*Fuse.Node.ISiblingDataProvider*/]);

                if (sibdp != NULL)
                {
                    uObject* data1 = Node__ISiblingDataProvider::Data(uInterface(uPtr(sibdp), ::TYPES[83/*Fuse.Node.ISiblingDataProvider*/]));

                    if ((data1 != NULL) && !Node__IDataEnumerator::NextData(uInterface(uPtr(e), ::TYPES[81/*Fuse.Node.IDataEnumerator*/]), Node__ISiblingDataProvider::Data(uInterface(sibdp, ::TYPES[83/*Fuse.Node.ISiblingDataProvider*/]))))
                        return;
                }
            }

        n = uPtr(n)->ContextParent();
    }
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) [instance] :2558
Node* Node::FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    Node* ret4;
    bool ret5;
    ::g::Uno::Collections::List* objs = ::g::Fuse::NameRegistry::GetObjectsWithName(name);

    if (objs == NULL)
        return NULL;

    int bestDistance = 2147483647;
    Node* best = NULL;

    for (int i = 0; i < uPtr(objs)->Count(); i++)
    {
        Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(objs), uCRef<int>(i), &ret4), ret4);

        if (::g::Uno::Delegate::op_Inequality(acceptor, NULL) && !(uPtr(acceptor)->Invoke(&ret5, 1, n), ret5))
            continue;

        int dist = DistanceTo(n, bestDistance);

        if (dist < bestDistance)
        {
            bestDistance = dist;
            best = n;
        }

        if (bestDistance == 0)
            return best;
    }

    return best;
}

// public object GetFirstData() [instance] :2400
uObject* Node::GetFirstData()
{
    Node__FirstDataEnumerator* den = Node__FirstDataEnumerator::New1();
    EnumerateData((uObject*)den);
    return den->Data();
}

// private bool HasInSubtree(Fuse.Node c) [instance] :2599
bool Node::HasInSubtree(Node* c)
{
    if (c == this)
        return true;

    if (c != NULL)
    {
        ::g::Fuse::Visual* p = uPtr(c)->Parent();

        if (p != NULL)
            return HasInSubtree(p);
    }

    return false;
}

// public void Insert(int index, Fuse.Binding item) [instance] :2277
void Node::Insert(int index, ::g::Fuse::Binding* item)
{
    if (_bindings == NULL)
        _bindings = item;
    else
    {
        if (uIs((uObject*)_bindings, ::TYPES[78/*Fuse.Binding*/]))
            MakeBindingList(NULL);

        ::g::Uno::Collections::List__Insert_fn(uPtr(BindingList()), uCRef<int>(index), item);
    }

    Root(item);
}

// internal bool get_IsPreservedRootFrame() [instance] :2805
bool Node::IsPreservedRootFrame()
{
    return _preservedRootFrame == ::g::Fuse::UpdateManager::FrameIndex();
}

// public bool get_IsRootingCompleted() [instance] :2649
bool Node::IsRootingCompleted()
{
    return _rootStage == 2;
}

// public bool get_IsRootingStarted() [instance] :2644
bool Node::IsRootingStarted()
{
    return (_rootStage == 1) || (_rootStage == 2);
}

// internal bool get_IsUnrooted() [instance] :2653
bool Node::IsUnrooted()
{
    return _rootStage == 0;
}

// internal bool get_IsUnrooting() [instance] :2651
bool Node::IsUnrooting()
{
    return _rootStage == 3;
}

// private void MakeBindingList(Fuse.Binding newItem) [instance] :2191
void Node::MakeBindingList(::g::Fuse::Binding* newItem)
{
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[85/*Uno.Collections.List<Fuse.Binding>*/]);
    ::g::Fuse::Binding* oldItem = uAs< ::g::Fuse::Binding*>(_bindings, ::TYPES[78/*Fuse.Binding*/]);

    if (oldItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), oldItem);

    if (newItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), newItem);

    _bindings = list;
}

// public Uno.UX.Selector get_Name() [instance] :2536
::g::Uno::UX::Selector Node::Name()
{
    return _name;
}

// public void set_Name(Uno.UX.Selector value) [instance] :2537
void Node::Name(::g::Uno::UX::Selector value)
{
    if (::g::Uno::UX::Selector__op_Inequality(_name, value))
    {
        _name = value;

        if (IsRootingStarted())
            ::g::Fuse::NameRegistry::SetName(this, _name);
    }
}

// public void OnDataChanged(string key, object newValue) [instance] :2492
void Node::OnDataChanged(uString* key, uObject* newValue)
{
    bool ret6;
    uObject* ret7;
    ::g::Uno::Collections::List* listeners;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Node::_dataListeners()), key, (void**)(&listeners), &ret6), ret6))

        for (int i = 0; i < uPtr(listeners)->Count(); i++)
            Node__IDataListener::OnDataChanged(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(listeners), uCRef<int>(i), &ret7), ret7)), ::TYPES[86/*Fuse.Node.IDataListener*/]));
}

// public Fuse.Visual get_Parent() [instance] :2976
::g::Fuse::Visual* Node::Parent()
{
    return _parent;
}

// public Fuse.Properties get_Properties() [instance] :2966
::g::Fuse::Properties* Node::Properties()
{
    if (_properties == NULL)
        _properties = ::g::Fuse::Properties::New1();

    return _properties;
}

// public bool Remove(Fuse.Binding item) [instance] :2249
bool Node::Remove(::g::Fuse::Binding* item)
{
    bool ret8;
    Unroot(item);

    if (_bindings == item)
    {
        _bindings = NULL;
        return true;
    }

    if ((_bindings == NULL) || uIs((uObject*)_bindings, ::TYPES[78/*Fuse.Binding*/]))
        return false;

    return (::g::Uno::Collections::List__Remove_fn(uPtr(BindingList()), item, &ret8), ret8);
}

// public void RemoveDataListener(string key, Fuse.Node.IDataListener listener) [instance] :2513
void Node::RemoveDataListener(uString* key, uObject* listener)
{
    bool ret9;
    ::g::Uno::Collections::List* ret10;
    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Node::_dataListeners()), key, &ret10), ret10)), listener, &ret9);
}

// private void Root(Fuse.Binding b) [instance] :2200
void Node::Root(::g::Fuse::Binding* b)
{
    if (IsRootingStarted())
        uPtr(b)->Root(this);
}

// private void RootBindings() [instance] :2210
void Node::RootBindings()
{
    ::g::Fuse::Binding* ret11;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Root(this);
    else
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret11), ret11))->Root(this);
    }
}

// internal generated void add_RootingCompleted(Uno.Action value) [instance] :2737
void Node::add_RootingCompleted(uDelegate* value)
{
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RootingCompleted1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal generated void remove_RootingCompleted(Uno.Action value) [instance] :2737
void Node::remove_RootingCompleted(uDelegate* value)
{
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RootingCompleted1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal void RootInternal(Fuse.Visual parent) [instance] :2690
void Node::RootInternal(::g::Fuse::Visual* parent)
{
    bool captured = Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            Node::ReleaseRooting(captured);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        RootInternalImpl(parent);
    }
}

// private void RootInternalImpl(Fuse.Visual parent) [instance] :2703
void Node::RootInternalImpl(::g::Fuse::Visual* parent)
{
    if (_rootStage != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[63/*"Incomplete ...*/], this), ::STRINGS[64/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    if (_parent != NULL)
    {
        if (_parent != parent)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[65/*"Node is alr...*/]));
        else
            return;
    }

    _rootStage = 1;
    _parent = parent;

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::SetName(this, Name());

    OnRooted();
    _rootStage = 2;

    if (::g::Uno::Delegate::op_Inequality(RootingCompleted1, NULL))
        uPtr(RootingCompleted1)->InvokeVoid();

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[66/*"Invalid Roo...*/], this), ::STRINGS[64/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));
}

// private void Unroot(Fuse.Binding b) [instance] :2205
void Node::Unroot(::g::Fuse::Binding* b)
{
    if (IsRootingStarted())
        uPtr(b)->Unroot();
}

// private void UnrootBindings() [instance] :2222
void Node::UnrootBindings()
{
    ::g::Fuse::Binding* ret16;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Unroot();
    else
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret16), ret16))->Unroot();
    }
}

// internal generated void add_Unrooted(Uno.Action value) [instance] :2747
void Node::add_Unrooted(uDelegate* value)
{
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Unrooted1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal generated void remove_Unrooted(Uno.Action value) [instance] :2747
void Node::remove_Unrooted(uDelegate* value)
{
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Unrooted1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal void UnrootInternal() [instance] :2755
void Node::UnrootInternal()
{
    if (_rootStage == 0)
        return;

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[68/*"Incomplete ...*/], this), ::STRINGS[64/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    _rootStage = 3;
    OnUnrooted();

    if (::g::Uno::Delegate::op_Inequality(Unrooted1, NULL))
        uPtr(Unrooted1)->InvokeVoid();

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::ClearName(this);

    OverrideContextParent = NULL;
    SoftDispose();
    _parent = NULL;
    _rootStage = 0;
}

// private static object _createWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) [static] :2853
uObject* Node::_createWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node_typeof()->Init();
    uString* key = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[26/*string*/]);
    ::g::Fuse::Scripting::Function* callback = uCast< ::g::Fuse::Scripting::Function*>(args->Strong<uObject*>(1), ::TYPES[75/*Fuse.Scripting.Function*/]);
    return ::g::Fuse::Scripting::External::New1(Node__DataWatcher::New1(n, c, callback, key));
}

// private static void _destroyWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) [static] :2860
void Node::_destroyWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node_typeof()->Init();
    Node__DataWatcher* watcher = uCast<Node__DataWatcher*>(uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[77/*Fuse.Scripting.External*/]))->Object, ::TYPES[76/*Fuse.Node.DataWatcher*/]);
    uPtr(watcher)->Dispose();
}

// internal static bool CaptureRooting() [static] :2667
bool Node::CaptureRooting()
{
    Node_typeof()->Init();

    if (Node::_hasRootCapture())
        return false;

    Node::_rootCaptureIndex()++;

    if (Node::_rootCaptureIndex() < 1)
        Node::_rootCaptureIndex() = 1;

    Node::_hasRootCapture() = true;
    return true;
}

// private static bool Contains(string[] strs, string s) [static] :2476
bool Node::Contains(uArray* strs, uString* s)
{
    Node_typeof()->Init();

    for (int i = 0; i < uPtr(strs)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(strs)->Strong<uString*>(i), s))
            return true;

    return false;
}

// internal static bool IsRootCapture(int index) [static] :2662
bool Node::IsRootCapture(int index)
{
    Node_typeof()->Init();
    return Node::_hasRootCapture() && (index == Node::_rootCaptureIndex());
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) [static] :2782
void Node::Relate(::g::Fuse::Visual* parent, Node* child)
{
    Node_typeof()->Init();

    if (child != NULL)
    {
        if (uPtr(parent)->IsRootingStarted())
            uPtr(child)->RootInternal(parent);
    }
}

// internal static void ReleaseRooting(bool captured) [static] :2680
void Node::ReleaseRooting(bool captured)
{
    Node_typeof()->Init();

    if (!captured)
        return;

    Node::_hasRootCapture() = false;
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) [static] :2790
void Node::Unrelate(::g::Fuse::Visual* parent, Node* child)
{
    Node_typeof()->Init();

    if ((child != NULL) && !uPtr(child)->IsUnrooting())
        uPtr(child)->UnrootInternal();
}

// internal static int get_RootCaptureIndex() [static] :2661
int Node::RootCaptureIndex()
{
    Node_typeof()->Init();
    return Node::_rootCaptureIndex();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class NodeGroupBase :3055
// {
static void NodeGroupBase_build(uType* type)
{
    ::STRINGS[69] = uString::Const("AddContent called prior to having a Parent");
    ::STRINGS[3] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno");
    ::STRINGS[70] = uString::Const("AddContent");
    ::STRINGS[71] = uString::Const("Could not locate node in parent, content not added");
    ::TYPES[89] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[90] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[82] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[91] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2/*IndexOf<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[92] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[93] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeGroupBase, _contentAdded), 0,
        ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/], offsetof(::g::Fuse::NodeGroupBase, _nodes), 0,
        ::TYPES[90/*Uno.Collections.IList<Uno.UX.Resource>*/], offsetof(::g::Fuse::NodeGroupBase, _resources), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeGroupBase, _useContent), 0);
}

::g::Fuse::Node_type* NodeGroupBase_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(NodeGroupBase);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.NodeGroupBase", options);
    type->fp_build_ = NodeGroupBase_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NodeGroupBase__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NodeGroupBase__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NodeGroupBase() :3073
void NodeGroupBase__ctor_3_fn(NodeGroupBase* __this)
{
    __this->ctor_3();
}

// private void AddContent() :3153
void NodeGroupBase__AddContent_fn(NodeGroupBase* __this)
{
    __this->AddContent();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :3065
void NodeGroupBase__get_Nodes_fn(NodeGroupBase* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected void OnNodeAdded(Fuse.Node n) :3092
void NodeGroupBase__OnNodeAdded_fn(NodeGroupBase* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeAdded(n);
}

// protected void OnNodeRemoved(Fuse.Node n) :3102
void NodeGroupBase__OnNodeRemoved_fn(NodeGroupBase* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// protected override void OnRooted() :3135
void NodeGroupBase__OnRooted_fn(NodeGroupBase* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (__this->UseContent())
        __this->AddContent();
}

// protected override void OnUnrooted() :3142
void NodeGroupBase__OnUnrooted_fn(NodeGroupBase* __this)
{
    if (__this->UseContent())
        __this->RemoveContent();

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveContent() :3193
void NodeGroupBase__RemoveContent_fn(NodeGroupBase* __this)
{
    __this->RemoveContent();
}

// internal bool get_UseContent() :3078
void NodeGroupBase__get_UseContent_fn(NodeGroupBase* __this, bool* __retval)
{
    *__retval = __this->UseContent();
}

// internal void set_UseContent(bool value) :3079
void NodeGroupBase__set_UseContent_fn(NodeGroupBase* __this, bool* value)
{
    __this->UseContent(*value);
}

// internal NodeGroupBase() [instance] :3073
void NodeGroupBase::ctor_3()
{
    ctor_2();
}

// private void AddContent() [instance] :3153
void NodeGroupBase::AddContent()
{
    ::g::Fuse::Node* ind1;
    ::g::Uno::UX::Resource* ret2;
    int ret3;
    ::g::Fuse::Node* ret4;

    if (_contentAdded)
        return;

    _contentAdded = true;

    if (Parent() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[69/*"AddContent ...*/], this, ::STRINGS[3/*"/Users/paul...*/], 3161, ::STRINGS[70/*"AddContent"*/]);
        return;
    }

    if (_resources != NULL)

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_resources), ::TYPES[89/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::TYPES[89/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_resources), ::TYPES[90/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret2), ret2));

    if ((_nodes == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])) == 0))
        return;

    int where = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[91/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret3), ret3);

    if (where == -1)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[71/*"Could not l...*/], this, ::STRINGS[3/*"/Users/paul...*/], 3180, ::STRINGS[70/*"AddContent"*/]);
        return;
    }

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret4), ret4);
        uPtr(n)->OverrideContextParent = (ind1 = uPtr(n)->OverrideContextParent, ((ind1 != NULL) ? ind1 : this));
    }

    uPtr(Parent())->InsertNodes(where, (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_nodes), ::TYPES[92/*Uno.Collections.IEnumerable<Fuse.Node>*/])));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :3065
uObject* NodeGroupBase::Nodes()
{
    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[93/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeAdded_fn, this), uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnNodeAdded(Fuse.Node n) [instance] :3092
void NodeGroupBase::OnNodeAdded(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && UseContent())
    {
        RemoveContent();
        AddContent();
    }
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :3102
void NodeGroupBase::OnNodeRemoved(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && UseContent())
        uPtr(Parent())->BeginRemoveChild(n, NULL);
}

// private void RemoveContent() [instance] :3193
void NodeGroupBase::RemoveContent()
{
    bool ret6;
    ::g::Uno::UX::Resource* ret7;
    ::g::Fuse::Node* ret8;

    if (!_contentAdded)
        return;

    _contentAdded = false;

    if (Parent() == NULL)
        return;

    if (_resources != NULL)

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_resources), ::TYPES[89/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::TYPES[89/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_resources), ::TYPES[90/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret7), ret7), &ret6);

    if (_nodes != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret8), ret8);

            if (uPtr(n)->OverrideContextParent == this)
                uPtr(n)->OverrideContextParent = NULL;

            uPtr(Parent())->BeginRemoveChild(n, NULL);
        }
}

// internal bool get_UseContent() [instance] :3078
bool NodeGroupBase::UseContent()
{
    return _useContent;
}

// internal void set_UseContent(bool value) [instance] :3079
void NodeGroupBase::UseContent(bool value)
{
    if (value == _useContent)
        return;

    _useContent = value;

    if (IsRootingStarted() && _useContent)
        AddContent();
    else if (!_useContent)
        RemoveContent();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class NumberComputer :65
// {
static void NumberComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
}

uType* NumberComputer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(NumberComputer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.NumberComputer", options);
    type->fp_build_ = NumberComputer_build;
    type->fp_ctor_ = (void*)NumberComputer__New1_fn;
    return type;
}

// public generated NumberComputer() :65
void NumberComputer__ctor_2_fn(NumberComputer* __this)
{
    __this->ctor_2();
}

// public generated NumberComputer New() :65
void NumberComputer__New1_fn(NumberComputer** __retval)
{
    *__retval = NumberComputer::New1();
}

// public generated NumberComputer() [instance] :65
void NumberComputer::ctor_2()
{
    ctor_1();
}

// public generated NumberComputer New() [static] :65
NumberComputer* NumberComputer::New1()
{
    NumberComputer* obj1 = (NumberComputer*)uNew(NumberComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class OrthographicFrustum :3267
// {
static void OrthographicFrustum_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(OrthographicFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasLocalFromWorld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasOrigin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _localFromWorld), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _size), 0);
}

OrthographicFrustum_type* OrthographicFrustum_typeof()
{
    static uSStrong<OrthographicFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OrthographicFrustum);
    options.TypeSize = sizeof(OrthographicFrustum_type);
    type = (OrthographicFrustum_type*)uClassType::New("Fuse.OrthographicFrustum", options);
    type->fp_build_ = OrthographicFrustum_build;
    type->fp_ctor_ = (void*)OrthographicFrustum__New1_fn;
    type->interface0.fp_TryGetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*))OrthographicFrustum__TryGetProjectionTransform_fn;
    type->interface0.fp_TryGetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*))OrthographicFrustum__TryGetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransformInverse_fn;
    return type;
}

// public generated OrthographicFrustum() :3267
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this)
{
    __this->ctor_();
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) :3314
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) :3335
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float4x4 get_LocalFromWorld() :3300
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalFromWorld();
}

// public void set_LocalFromWorld(float4x4 value) :3301
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value)
{
    __this->LocalFromWorld(*value);
}

// public generated OrthographicFrustum New() :3267
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval)
{
    *__retval = OrthographicFrustum::New1();
}

// public float2 get_Origin() :3273
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Origin();
}

// public void set_Origin(float2 value) :3274
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Origin(*value);
}

// public float2 get_Size() :3285
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :3289
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public bool TryGetProjectionTransform(Fuse.ICommonViewport viewport, float4x4& result) :3308
void OrthographicFrustum__TryGetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = __this->TryGetProjectionTransform(viewport, result);
}

// public bool TryGetProjectionTransformInverse(Fuse.ICommonViewport viewport, float4x4& result) :3328
void OrthographicFrustum__TryGetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = __this->TryGetProjectionTransformInverse(viewport, result);
}

// public generated OrthographicFrustum() [instance] :3267
void OrthographicFrustum::ctor_()
{
    _localFromWorld = ::g::Uno::Float4x4__Identity();
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) [instance] :3314
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransform(uObject* viewport)
{
    ::g::Uno::Float2 origin = _hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/]));
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 ts = ::g::Uno::Matrix::Mul8(t, s);

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(LocalFromWorld(), ts);

    return ts;
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) [instance] :3335
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(uObject* viewport)
{
    ::g::Uno::Float2 origin = _hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/]));
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    ::g::Uno::Float4x4 ts = ::g::Uno::Matrix::Mul8(s, t);

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(ts, ::g::Uno::Matrix::Invert2(LocalFromWorld()));

    return ts;
}

// public float4x4 get_LocalFromWorld() [instance] :3300
::g::Uno::Float4x4 OrthographicFrustum::LocalFromWorld()
{
    return _localFromWorld;
}

// public void set_LocalFromWorld(float4x4 value) [instance] :3301
void OrthographicFrustum::LocalFromWorld(::g::Uno::Float4x4 value)
{
    _localFromWorld = value;
    _hasLocalFromWorld = true;
}

// public float2 get_Origin() [instance] :3273
::g::Uno::Float2 OrthographicFrustum::Origin()
{
    return _origin;
}

// public void set_Origin(float2 value) [instance] :3274
void OrthographicFrustum::Origin(::g::Uno::Float2 value)
{
    _origin = value;
    _hasOrigin = true;
}

// public float2 get_Size() [instance] :3285
::g::Uno::Float2 OrthographicFrustum::Size()
{
    return _size;
}

// public void set_Size(float2 value) [instance] :3289
void OrthographicFrustum::Size(::g::Uno::Float2 value)
{
    _size = value;
    _hasSize = true;
}

// public bool TryGetProjectionTransform(Fuse.ICommonViewport viewport, float4x4& result) [instance] :3308
bool OrthographicFrustum::TryGetProjectionTransform(uObject* viewport, ::g::Uno::Float4x4* result)
{
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/]));
    return ::g::Fuse::Internal::FrustumMatrix::TryOrthoRH(viewSize.X, viewSize.Y, 1.0f, 1000.0f, result);
}

// public bool TryGetProjectionTransformInverse(Fuse.ICommonViewport viewport, float4x4& result) [instance] :3328
bool OrthographicFrustum::TryGetProjectionTransformInverse(uObject* viewport, ::g::Uno::Float4x4* result)
{
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/]));
    *result = ::g::Fuse::Internal::FrustumMatrix::OrthoRHInverse(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
    return true;
}

// public generated OrthographicFrustum New() [static] :3267
OrthographicFrustum* OrthographicFrustum::New1()
{
    OrthographicFrustum* obj1 = (OrthographicFrustum*)uNew(OrthographicFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public sealed extern class OSVersion :270
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[19] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Patch), 0);
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :275
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :275
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :281
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::TYPES[39/*int*/], __this->Major), ::STRINGS[19/*"."*/]), uBox<int>(::TYPES[39/*int*/], __this->Minor)), ::STRINGS[19/*"."*/]), uBox<int>(::TYPES[39/*int*/], __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :275
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :275
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class Visual.ParameterProperty :6872
// {
// static ParameterProperty() :6872
static void Visual__ParameterProperty__cctor__fn(uType* __type)
{
    Visual__ParameterProperty::_name1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[72/*"Parameter"*/]);
}

static void Visual__ParameterProperty_build(uType* type)
{
    ::STRINGS[72] = uString::Const("Parameter");
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Visual__ParameterProperty, _visual), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual__ParameterProperty::_name1_, uFieldFlagsStatic);
}

::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Visual__ParameterProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Fuse.Visual.ParameterProperty", options);
    type->fp_build_ = Visual__ParameterProperty_build;
    type->fp_cctor_ = Visual__ParameterProperty__cctor__fn;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Visual__ParameterProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Visual__ParameterProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Visual__ParameterProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Visual__ParameterProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public ParameterProperty(Fuse.Visual visual) :6880
void Visual__ParameterProperty__ctor_3_fn(Visual__ParameterProperty* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(visual);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :6877
void Visual__ParameterProperty__Get1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(__this->_visual)->Parameter(), void();
}

// public ParameterProperty New(Fuse.Visual visual) :6880
void Visual__ParameterProperty__New1_fn(::g::Fuse::Visual* visual, Visual__ParameterProperty** __retval)
{
    *__retval = Visual__ParameterProperty::New1(visual);
}

// public override sealed Uno.UX.PropertyObject get_Object() :6875
void Visual__ParameterProperty__get_Object_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_visual, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string value, Uno.UX.IPropertyListener origin) :6878
void Visual__ParameterProperty__Set1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin)
{
    uPtr(__this->_visual)->Parameter(value);
}

// public override sealed bool get_SupportsOriginSetter() :6876
void Visual__ParameterProperty__get_SupportsOriginSetter_fn(Visual__ParameterProperty* __this, bool* __retval)
{
    return *__retval = false, void();
}

::g::Uno::UX::Selector Visual__ParameterProperty::_name1_;

// public ParameterProperty(Fuse.Visual visual) [instance] :6880
void Visual__ParameterProperty::ctor_3(::g::Fuse::Visual* visual)
{
    ctor_2(Visual__ParameterProperty::_name1());
    _visual = visual;
}

// public ParameterProperty New(Fuse.Visual visual) [static] :6880
Visual__ParameterProperty* Visual__ParameterProperty::New1(::g::Fuse::Visual* visual)
{
    Visual__ParameterProperty* obj1 = (Visual__ParameterProperty*)uNew(Visual__ParameterProperty_typeof());
    obj1->ctor_3(visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class TranslationModes.ParentSizeMode :4624
// {
static void TranslationModes__ParentSizeMode_build(uType* type)
{
    ::TYPES[94] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[95] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[96] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface1));
}

TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof()
{
    static uSStrong<TranslationModes__ParentSizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__ParentSizeMode);
    options.TypeSize = sizeof(TranslationModes__ParentSizeMode_type);
    type = (TranslationModes__ParentSizeMode_type*)uClassType::New("Fuse.TranslationModes.ParentSizeMode", options);
    type->fp_build_ = TranslationModes__ParentSizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__ParentSizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__ParentSizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__ParentSizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__ParentSizeMode__Unsubscribe_fn;
    return type;
}

// public generated ParentSizeMode() :4624
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :4626
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated ParentSizeMode New() :4624
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval)
{
    *__retval = TranslationModes__ParentSizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :4627
void TranslationModes__ParentSizeMode__Subscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :4634
void TranslationModes__ParentSizeMode__Unsubscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ParentSizeMode() [instance] :4624
void TranslationModes__ParentSizeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :4626
::g::Uno::Float3 TranslationModes__ParentSizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(uPtr(t)->RelativeNode())->Parent()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :4627
uObject* TranslationModes__ParentSizeMode::Subscribe(uObject* transform)
{
    uObject* n = uAs<uObject*>(uPtr(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/])))->Parent(), ::TYPES[94/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[94/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[96/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return n;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :4634
void TranslationModes__ParentSizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    if (sub != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[94/*Fuse.IActualPlacement*/])), ::TYPES[94/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[96/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated ParentSizeMode New() [static] :4624
TranslationModes__ParentSizeMode* TranslationModes__ParentSizeMode::New1()
{
    TranslationModes__ParentSizeMode* obj1 = (TranslationModes__ParentSizeMode*)uNew(TranslationModes__ParentSizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class PendingRemoveVisual :4809
// {
static void PendingRemoveVisual_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _done), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _then), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, subscribers), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _Child), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _Parent), 0);
}

uType* PendingRemoveVisual_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(PendingRemoveVisual);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PendingRemoveVisual", options);
    type->fp_build_ = PendingRemoveVisual_build;
    return type;
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) :4816
void PendingRemoveVisual__ctor__fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    __this->ctor_(child, parent, then);
}

// public void AddSubscriber() :4824
void PendingRemoveVisual__AddSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->AddSubscriber();
}

// public generated Fuse.Visual get_Child() :4812
void PendingRemoveVisual__get_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Child();
}

// private generated void set_Child(Fuse.Visual value) :4812
void PendingRemoveVisual__set_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Child(value);
}

// public bool get_HasSubscribers() :4840
void PendingRemoveVisual__get_HasSubscribers_fn(PendingRemoveVisual* __this, bool* __retval)
{
    *__retval = __this->HasSubscribers();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) :4816
void PendingRemoveVisual__New1_fn(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then, PendingRemoveVisual** __retval)
{
    *__retval = PendingRemoveVisual::New1(child, parent, then);
}

// public generated Fuse.Visual get_Parent() :4811
void PendingRemoveVisual__get_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Visual value) :4811
void PendingRemoveVisual__set_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Parent(value);
}

// public void Remove() :4844
void PendingRemoveVisual__Remove_fn(PendingRemoveVisual* __this)
{
    __this->Remove();
}

// public void RemoveSubscriber() :4829
void PendingRemoveVisual__RemoveSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->RemoveSubscriber();
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) [instance] :4816
void PendingRemoveVisual::ctor_(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    Parent(parent);
    Child(child);
    _then = then;
}

// public void AddSubscriber() [instance] :4824
void PendingRemoveVisual::AddSubscriber()
{
    subscribers++;
}

// public generated Fuse.Visual get_Child() [instance] :4812
::g::Fuse::Visual* PendingRemoveVisual::Child()
{
    return _Child;
}

// private generated void set_Child(Fuse.Visual value) [instance] :4812
void PendingRemoveVisual::Child(::g::Fuse::Visual* value)
{
    _Child = value;
}

// public bool get_HasSubscribers() [instance] :4840
bool PendingRemoveVisual::HasSubscribers()
{
    return subscribers > 0;
}

// public generated Fuse.Visual get_Parent() [instance] :4811
::g::Fuse::Visual* PendingRemoveVisual::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Visual value) [instance] :4811
void PendingRemoveVisual::Parent(::g::Fuse::Visual* value)
{
    _Parent = value;
}

// public void Remove() [instance] :4844
void PendingRemoveVisual::Remove()
{
    if (_done)
        return;

    if (::g::Uno::Delegate::op_Inequality(_then, NULL))
        uPtr(_then)->InvokeVoid();

    _done = true;
    uPtr(Child())->ConcludePendingRemove();
}

// public void RemoveSubscriber() [instance] :4829
void PendingRemoveVisual::RemoveSubscriber()
{
    subscribers--;

    if (subscribers == 0)
        Remove();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) [static] :4816
PendingRemoveVisual* PendingRemoveVisual::New1(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    PendingRemoveVisual* obj1 = (PendingRemoveVisual*)uNew(PendingRemoveVisual_typeof());
    obj1->ctor_(child, parent, then);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class PlacedArgs :4554
// {
static void PlacedArgs_build(uType* type)
{
    ::STRINGS[36] = uString::Const("x");
    ::STRINGS[73] = uString::Const("y");
    ::STRINGS[74] = uString::Const("width");
    ::STRINGS[75] = uString::Const("height");
    ::TYPES[97] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(PlacedArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PlacedArgs, _HasPrev), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevSize), 0);
}

PlacedArgs_type* PlacedArgs_typeof()
{
    static uSStrong<PlacedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlacedArgs);
    options.TypeSize = sizeof(PlacedArgs_type);
    type = (PlacedArgs_type*)uClassType::New("Fuse.PlacedArgs", options);
    type->fp_build_ = PlacedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))PlacedArgs__Serialize_fn;
    return type;
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :4562
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize)
{
    __this->ctor_1(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated bool get_HasPrev() :4556
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :4556
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :4562
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval)
{
    *__retval = PlacedArgs::New2(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated float2 get_NewPosition() :4560
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewPosition();
}

// private generated void set_NewPosition(float2 value) :4560
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewPosition(*value);
}

// public generated float2 get_NewSize() :4559
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewSize();
}

// private generated void set_NewSize(float2 value) :4559
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewSize(*value);
}

// public generated float2 get_PrevPosition() :4557
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevPosition();
}

// private generated void set_PrevPosition(float2 value) :4557
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevPosition(*value);
}

// public generated float2 get_PrevSize() :4558
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevSize();
}

// private generated void set_PrevSize(float2 value) :4558
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevSize(*value);
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) :4572
void PlacedArgs__Serialize_fn(PlacedArgs* __this, uObject* serializer)
{
    __this->Serialize(serializer);
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [instance] :4562
void PlacedArgs::ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    ctor_();
    HasPrev(hasPrev);
    PrevPosition(prevPosition);
    PrevSize(prevSize);
    NewSize(newSize);
    NewPosition(newPosition);
}

// public generated bool get_HasPrev() [instance] :4556
bool PlacedArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :4556
void PlacedArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// public generated float2 get_NewPosition() [instance] :4560
::g::Uno::Float2 PlacedArgs::NewPosition()
{
    return _NewPosition;
}

// private generated void set_NewPosition(float2 value) [instance] :4560
void PlacedArgs::NewPosition(::g::Uno::Float2 value)
{
    _NewPosition = value;
}

// public generated float2 get_NewSize() [instance] :4559
::g::Uno::Float2 PlacedArgs::NewSize()
{
    return _NewSize;
}

// private generated void set_NewSize(float2 value) [instance] :4559
void PlacedArgs::NewSize(::g::Uno::Float2 value)
{
    _NewSize = value;
}

// public generated float2 get_PrevPosition() [instance] :4557
::g::Uno::Float2 PlacedArgs::PrevPosition()
{
    return _PrevPosition;
}

// private generated void set_PrevPosition(float2 value) [instance] :4557
void PlacedArgs::PrevPosition(::g::Uno::Float2 value)
{
    _PrevPosition = value;
}

// public generated float2 get_PrevSize() [instance] :4558
::g::Uno::Float2 PlacedArgs::PrevSize()
{
    return _PrevSize;
}

// private generated void set_PrevSize(float2 value) [instance] :4558
void PlacedArgs::PrevSize(::g::Uno::Float2 value)
{
    _PrevSize = value;
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) [instance] :4572
void PlacedArgs::Serialize(uObject* serializer)
{
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(serializer), ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[36/*"x"*/], (double)NewPosition().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[73/*"y"*/], (double)NewPosition().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[74/*"width"*/], (double)NewSize().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[75/*"height"*/], (double)NewSize().Y);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [static] :4562
PlacedArgs* PlacedArgs::New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    PlacedArgs* obj1 = (PlacedArgs*)uNew(PlacedArgs_typeof());
    obj1->ctor_1(hasPrev, prevPosition, newPosition, prevSize, newSize);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public delegate void PlacedHandler(object sender, Fuse.PlacedArgs args) :4585
uDelegateType* PlacedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.PlacedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::PlacedArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class Properties :2526
// {
// static Properties() :2526
static void Properties__cctor__fn(uType* __type)
{
    Properties::NoValue_ = ::g::Uno::Object::New();
}

static void Properties_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Properties, _handle), 0,
        type, offsetof(::g::Fuse::Properties, _next), 0,
        uObject_typeof(), offsetof(::g::Fuse::Properties, _value), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Properties::NoValue_, uFieldFlagsStatic);
}

uType* Properties_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Properties);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Properties", options);
    type->fp_build_ = Properties_build;
    type->fp_ctor_ = (void*)Properties__New1_fn;
    type->fp_cctor_ = Properties__cctor__fn;
    return type;
}

// public generated Properties() :2526
void Properties__ctor__fn(Properties* __this)
{
    __this->ctor_();
}

// public void AddToList(Fuse.PropertyHandle handle, object val) :2577
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) :2660
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle)
{
    __this->Clear(handle);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) :2667
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all)
{
    __this->Clear1(handle, val, *all);
}

// public static Fuse.PropertyHandle CreateHandle() :2532
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval)
{
    *__retval = Properties::CreateHandle();
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) :2643
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    __this->ForeachInList(handle, action, state);
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) :2626
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    __this->ForeachInList1(handle, action, state);
}

// public object Get(Fuse.PropertyHandle handle) :2537
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval)
{
    *__retval = __this->Get(handle);
}

// public bool Has(Fuse.PropertyHandle handle) :2552
void Properties__Has_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, bool* __retval)
{
    *__retval = __this->Has(handle);
}

// public generated Properties New() :2526
void Properties__New1_fn(Properties** __retval)
{
    *__retval = Properties::New1();
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) :2595
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveFromList(handle, val);
}

// public void Set(Fuse.PropertyHandle handle, object val) :2559
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->Set(handle, val);
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) :2544
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval)
{
    *__retval = __this->TryGet(handle, val);
}

uSStrong<uObject*> Properties::NoValue_;

// public generated Properties() [instance] :2526
void Properties::ctor_()
{
}

// public void AddToList(Fuse.PropertyHandle handle, object val) [instance] :2577
void Properties::AddToList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_next == NULL)
    {
        _next = Properties::New1();
        uPtr(_next)->AddToList(handle, val);
    }
    else
        uPtr(_next)->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) [instance] :2660
void Properties::Clear(::g::Fuse::PropertyHandle* handle)
{
    Clear1(handle, Properties::NoValue(), true);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) [instance] :2667
void Properties::Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all)
{
    if (_handle == NULL)
        return;

    Properties* p = this;
    Properties* previous = NULL;

    while (p != NULL)
        if ((uPtr(p)->_handle == handle) && ((val == Properties::NoValue()) || ::g::Uno::Object::Equals(uPtr(val), uPtr(p)->_value)))
        {
            if (previous == NULL)
            {
                if (uPtr(p)->_next == NULL)
                {
                    uPtr(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    uPtr(p)->_handle = uPtr(uPtr(p)->_next)->_handle;
                    p->_value = uPtr(p->_next)->_value;
                    p->_next = uPtr(p->_next)->_next;

                    if (all)
                        continue;
                    else
                        break;
                }
            }
            else
            {
                uPtr(previous)->_next = uPtr(p)->_next;
                p = uPtr(p)->_next;

                if (all)
                    continue;
                else
                    break;
            }
        }
        else
        {
            previous = p;
            p = uPtr(p)->_next;
        }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) [instance] :2643
void Properties::ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) [instance] :2626
void Properties::ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public object Get(Fuse.PropertyHandle handle) [instance] :2537
uObject* Properties::Get(::g::Fuse::PropertyHandle* handle)
{
    if (_handle == handle)
        return _value;

    if (_next != NULL)
        return uPtr(_next)->Get(handle);

    return NULL;
}

// public bool Has(Fuse.PropertyHandle handle) [instance] :2552
bool Properties::Has(::g::Fuse::PropertyHandle* handle)
{
    if (_handle == handle)
        return true;

    if (_next != NULL)
        return uPtr(_next)->Has(handle);

    return false;
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) [instance] :2595
void Properties::RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    Clear1(handle, val, false);
}

// public void Set(Fuse.PropertyHandle handle, object val) [instance] :2559
void Properties::Set(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_handle == handle)
        _value = val;
    else
    {
        if (_next == NULL)
            _next = Properties::New1();

        uPtr(_next)->Set(handle, val);
    }
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) [instance] :2544
bool Properties::TryGet(::g::Fuse::PropertyHandle* handle, uObject** val)
{
    if (_handle == handle)
    {
        *val = _value;
        return true;
    }

    if (_next != NULL)
        return uPtr(_next)->TryGet(handle, val);

    *val = NULL;
    return false;
}

// public static Fuse.PropertyHandle CreateHandle() [static] :2532
::g::Fuse::PropertyHandle* Properties::CreateHandle()
{
    Properties_typeof()->Init();
    return ::g::Fuse::PropertyHandle::New1();
}

// public generated Properties New() [static] :2526
Properties* Properties::New1()
{
    Properties* obj1 = (Properties*)uNew(Properties_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class PropertyHandle :2516
// {
static void PropertyHandle_build(uType* type)
{
}

uType* PropertyHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PropertyHandle", options);
    type->fp_build_ = PropertyHandle_build;
    type->fp_ctor_ = (void*)PropertyHandle__New1_fn;
    return type;
}

// internal PropertyHandle() :2518
void PropertyHandle__ctor__fn(PropertyHandle* __this)
{
    __this->ctor_();
}

// internal PropertyHandle New() :2518
void PropertyHandle__New1_fn(PropertyHandle** __retval)
{
    *__retval = PropertyHandle::New1();
}

// internal PropertyHandle() [instance] :2518
void PropertyHandle::ctor_()
{
}

// internal PropertyHandle New() [static] :2518
PropertyHandle* PropertyHandle::New1()
{
    PropertyHandle* obj1 = (PropertyHandle*)uNew(PropertyHandle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class RelativeTransform<TransformMode> :4429
// {
static void RelativeTransform_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[98] = ::g::Fuse::ITransformMode_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(RelativeTransform_type, interface6));
    type->SetFields(13,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RelativeTransform, _relativeNode), 0,
        type->T(0), offsetof(::g::Fuse::RelativeTransform, _relativeTo), 0,
        uObject_typeof(), offsetof(::g::Fuse::RelativeTransform, _subscription), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RelativeTransform, _waitRootingCompleted), 0);
}

RelativeTransform_type* RelativeTransform_typeof()
{
    static uSStrong<RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 17;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(RelativeTransform);
    options.TypeSize = sizeof(RelativeTransform_type);
    type = (RelativeTransform_type*)uClassType::New("Fuse.RelativeTransform`1", options);
    type->fp_build_ = RelativeTransform_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnUnrooted_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal RelativeTransform(TransformMode defaultTransform) :4461
void RelativeTransform__ctor_3_fn(RelativeTransform* __this, uObject* defaultTransform)
{
    __this->ctor_3(defaultTransform);
}

// private void CheckSubscription(bool fromRooted) :4508
void RelativeTransform__CheckSubscription_fn(RelativeTransform* __this, bool* fromRooted)
{
    __this->CheckSubscription(*fromRooted);
}

// private void ClearRootingCompleted() :4494
void RelativeTransform__ClearRootingCompleted_fn(RelativeTransform* __this)
{
    __this->ClearRootingCompleted();
}

// private void ClearSubscription() :4483
void RelativeTransform__ClearSubscription_fn(RelativeTransform* __this)
{
    __this->ClearSubscription();
}

// private void Fuse.ITransformRelative.OnTransformChanged(object s, object a) :4468
void RelativeTransform__FuseITransformRelativeOnTransformChanged_fn(RelativeTransform* __this, uObject* s, uObject* a)
{
    __this->OnMatrixChanged(NULL, NULL);
}

// private Fuse.Visual Fuse.ITransformRelative.get_RelativeNode() :4467
void RelativeTransform__FuseITransformRelativeget_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->RelativeNode(), void();
}

// private Fuse.Visual Fuse.ITransformRelative.get_Target() :4466
void RelativeTransform__FuseITransformRelativeget_Target_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->Parent(), void();
}

// protected override sealed void OnRooted() :4470
void RelativeTransform__OnRooted_fn(RelativeTransform* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->CheckSubscription(true);
}

// private void OnRootingCompleted() :4502
void RelativeTransform__OnRootingCompleted_fn(RelativeTransform* __this)
{
    __this->OnRootingCompleted();
}

// protected override sealed void OnUnrooted() :4476
void RelativeTransform__OnUnrooted_fn(RelativeTransform* __this)
{
    __this->ClearRootingCompleted();
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_RelativeNode() :4435
void RelativeTransform__get_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public void set_RelativeNode(Fuse.Visual value) :4436
void RelativeTransform__set_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public TransformMode get_RelativeTo() :4449
void RelativeTransform__get_RelativeTo_fn(RelativeTransform* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(TransformMode value) :4450
void RelativeTransform__set_RelativeTo_fn(RelativeTransform* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal RelativeTransform(TransformMode defaultTransform) [instance] :4461
void RelativeTransform::ctor_3(uObject* defaultTransform)
{
    ctor_2();
    _relativeTo = defaultTransform;
}

// private void CheckSubscription(bool fromRooted) [instance] :4508
void RelativeTransform::CheckSubscription(bool fromRooted)
{
    if (!fromRooted && !IsRootingCompleted())
        return;

    if ((RelativeNode() != NULL) && !uPtr(RelativeNode())->IsRootingStarted())
    {
        ClearRootingCompleted();
        _waitRootingCompleted = RelativeNode();
        uPtr(_waitRootingCompleted)->add_RootingCompleted(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        return;
    }

    ClearSubscription();
    _subscription = ::g::Fuse::ITransformMode::Subscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[98/*Fuse.ITransformMode*/])), ::TYPES[98/*Fuse.ITransformMode*/]), (uObject*)this);
    OnMatrixChanged(NULL, NULL);
}

// private void ClearRootingCompleted() [instance] :4494
void RelativeTransform::ClearRootingCompleted()
{
    if (_waitRootingCompleted != NULL)
    {
        uPtr(_waitRootingCompleted)->remove_RootingCompleted(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        _waitRootingCompleted = NULL;
    }
}

// private void ClearSubscription() [instance] :4483
void RelativeTransform::ClearSubscription()
{
    if (_subscription != NULL)
    {
        ::g::Fuse::ITransformMode::Unsubscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[98/*Fuse.ITransformMode*/])), ::TYPES[98/*Fuse.ITransformMode*/]), (uObject*)this, _subscription);
        _subscription = NULL;
    }
}

// private void OnRootingCompleted() [instance] :4502
void RelativeTransform::OnRootingCompleted()
{
    CheckSubscription(false);
}

// public Fuse.Visual get_RelativeNode() [instance] :4435
::g::Fuse::Visual* RelativeTransform::RelativeNode()
{
    ::g::Fuse::Visual* ind1 = _relativeNode;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// public void set_RelativeNode(Fuse.Visual value) [instance] :4436
void RelativeTransform::RelativeNode(::g::Fuse::Visual* value)
{
    if (_relativeNode == value)
        return;

    _relativeNode = value;
    CheckSubscription(false);
}

// public TransformMode get_RelativeTo() [instance] :4449
uObject* RelativeTransform::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(TransformMode value) [instance] :4450
void RelativeTransform::RelativeTo(uObject* value)
{
    if (_relativeTo == value)
        return;

    ClearSubscription();
    _relativeTo = value;
    CheckSubscription(false);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class RenderTargetEntry :485
// {
static void RenderTargetEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLScissor), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLViewportPixelSize), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::RenderTargetEntry, RenderTarget), 0);
}

uType* RenderTargetEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RenderTargetEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RenderTargetEntry", options);
    type->fp_build_ = RenderTargetEntry_build;
    return type;
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :492
void RenderTargetEntry__ctor__fn(RenderTargetEntry* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle)
{
    __this->ctor_(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :492
void RenderTargetEntry__New1_fn(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle, RenderTargetEntry** __retval)
{
    *__retval = RenderTargetEntry::New1(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [instance] :492
void RenderTargetEntry::ctor_(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTarget = rt;
    GLViewportPixelSize = viewportPixelSize;
    GLScissor = glScissor;
    GLFramebuffer = handle;
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [static] :492
RenderTargetEntry* RenderTargetEntry::New1(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTargetEntry* obj1 = (RenderTargetEntry*)uNew(RenderTargetEntry_typeof());
    obj1->ctor_(rt, viewportPixelSize, glScissor, handle);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class RequestBringIntoViewArgs :6210
// {
static void RequestBringIntoViewArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RequestBringIntoViewArgs, _Visual), 0);
}

uType* RequestBringIntoViewArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequestBringIntoViewArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RequestBringIntoViewArgs", options);
    type->fp_build_ = RequestBringIntoViewArgs_build;
    return type;
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) :6213
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* elm)
{
    __this->ctor_1(elm);
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) :6213
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Visual* elm, RequestBringIntoViewArgs** __retval)
{
    *__retval = RequestBringIntoViewArgs::New2(elm);
}

// public generated Fuse.Visual get_Visual() :6212
void RequestBringIntoViewArgs__get_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :6212
void RequestBringIntoViewArgs__set_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) [instance] :6213
void RequestBringIntoViewArgs::ctor_1(::g::Fuse::Visual* elm)
{
    ctor_();
    Visual(elm);
}

// public generated Fuse.Visual get_Visual() [instance] :6212
::g::Fuse::Visual* RequestBringIntoViewArgs::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :6212
void RequestBringIntoViewArgs::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) [static] :6213
RequestBringIntoViewArgs* RequestBringIntoViewArgs::New2(::g::Fuse::Visual* elm)
{
    RequestBringIntoViewArgs* obj1 = (RequestBringIntoViewArgs*)uNew(RequestBringIntoViewArgs_typeof());
    obj1->ctor_1(elm);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public delegate void RequestBringIntoViewHandler(object sender, Fuse.RequestBringIntoViewArgs args) :6219
uDelegateType* RequestBringIntoViewHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.RequestBringIntoViewHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::RequestBringIntoViewArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal enum RootStage :2622
uEnumType* RootStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.RootStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Unrooted", 0LL,
        "Started", 1LL,
        "Completed", 2LL,
        "Unrooting", 3LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// private sealed class App.RootViewHost :110
// {
static void App__RootViewHost_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::INativeViewRoot_typeof(), offsetof(App__RootViewHost_type, interface0));
}

App__RootViewHost_type* App__RootViewHost_typeof()
{
    static uSStrong<App__RootViewHost_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(App__RootViewHost);
    options.TypeSize = sizeof(App__RootViewHost_type);
    type = (App__RootViewHost_type*)uClassType::New("Fuse.App.RootViewHost", options);
    type->fp_build_ = App__RootViewHost_build;
    type->fp_ctor_ = (void*)App__RootViewHost__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))App__RootViewHost__FuseControlsINativeViewRootAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))App__RootViewHost__FuseControlsINativeViewRootRemove_fn;
    return type;
}

// public generated RootViewHost() :110
void App__RootViewHost__ctor__fn(App__RootViewHost* __this)
{
    __this->ctor_();
}

// private void Fuse.Controls.INativeViewRoot.Add(Fuse.Controls.Native.ViewHandle handle) :112
void App__RootViewHost__FuseControlsINativeViewRootAdd_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle)
{
    ::g::Fuse::AppRoot::SetRootView(handle);
}

// private void Fuse.Controls.INativeViewRoot.Remove(Fuse.Controls.Native.ViewHandle handle) :113
void App__RootViewHost__FuseControlsINativeViewRootRemove_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle)
{
    ::g::Fuse::AppRoot::ClearRoot(handle);
}

// public generated RootViewHost New() :110
void App__RootViewHost__New1_fn(App__RootViewHost** __retval)
{
    *__retval = App__RootViewHost::New1();
}

// public generated RootViewHost() [instance] :110
void App__RootViewHost::ctor_()
{
}

// public generated RootViewHost New() [static] :110
App__RootViewHost* App__RootViewHost::New1()
{
    App__RootViewHost* obj1 = (App__RootViewHost*)uNew(App__RootViewHost_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class RootViewport :3663
// {
static void RootViewport_build(uType* type)
{
    ::TYPES[23] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[82] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[99] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RootViewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface5),
        ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/], offsetof(RootViewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RootViewport_type, interface7),
        ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(RootViewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(RootViewport_type, interface9),
        ::g::Fuse::IViewport_typeof(), offsetof(RootViewport_type, interface10),
        ::g::Uno::IDisposable_typeof(), offsetof(RootViewport_type, interface11),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(RootViewport_type, interface12));
    type->SetFields(54,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::RootViewport, _frustumViewport), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _overridePixelsPerPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::RootViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerOSPoint), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerPoint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::RootViewport, _sizeOverridden), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::RootViewport, Frustum), 0,
        ::TYPES[99/*Uno.Action<float2>*/], offsetof(::g::Fuse::RootViewport, Resized1), 0);
}

RootViewport_type* RootViewport_typeof()
{
    static uSStrong<RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 62;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(RootViewport);
    options.TypeSize = sizeof(RootViewport_type);
    type = (RootViewport_type*)uClassType::New("Fuse.RootViewport", options);
    type->fp_build_ = RootViewport_build;
    type->fp_ctor_ = (void*)RootViewport__New2_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))RootViewport__Draw_fn;
    type->fp_get_VisualContext = (void(*)(::g::Fuse::Visual*, int*))RootViewport__get_VisualContext_fn;
    type->interface11.fp_Dispose = (void(*)(uObject*))RootViewport__UnoIDisposableDispose_fn;
    type->interface10.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))RootViewport__PointToWorldRay_fn;
    type->interface10.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))RootViewport__WorldToLocalRay_fn;
    type->interface12.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))RootViewport__get_PixelsPerPoint_fn;
    type->interface12.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_Size_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RootViewport() :3669
void RootViewport__ctor_3_fn(RootViewport* __this)
{
    __this->ctor_3();
}

// public override sealed void Draw(Fuse.DrawContext dc) :3724
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Node* ret3;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[6/*Fuse.Visual*/]);
        uPtr(v)->Draw(dc);
    }
}

// private void EstablishSize() :3776
void RootViewport__EstablishSize_fn(RootViewport* __this)
{
    __this->EstablishSize();
}

// private extern void EstablishSizeInternals() :3837
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this)
{
    __this->EstablishSizeInternals();
}

// public RootViewport New() :3669
void RootViewport__New2_fn(RootViewport** __retval)
{
    *__retval = RootViewport::New2();
}

// internal void OnResized(object s, object a) :3757
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a)
{
    __this->OnResized(s, a);
}

// public float2 get_PixelSize() :3876
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :3863
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :3893
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public generated void add_Resized(Uno.Action<float2> value) :3667
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.Action<float2> value) :3667
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public float2 get_Size() :3870
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void Uno.IDisposable.Dispose() :3713
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, __this), 1);
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(__this->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]));
}

// public override sealed Fuse.VisualContext get_VisualContext() :3721
void RootViewport__get_VisualContext_fn(RootViewport* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :3897
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public RootViewport() [instance] :3669
void RootViewport::ctor_3()
{
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_2();
    _overridePixelsPerPoint = 0.0f;
    EstablishSize();
    ::g::Fuse::Platform::SystemUI::add_FrameChanged(uDelegate::New(::TYPES[23/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
    RootInternal(NULL);
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, this), 1);
}

// private void EstablishSize() [instance] :3776
void RootViewport::EstablishSize()
{
    if (!_sizeOverridden)
        EstablishSizeInternals();

    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->InvokeVoid(uCRef(_pixelSize));
}

// private extern void EstablishSizeInternals() [instance] :3837
void RootViewport::EstablishSizeInternals()
{
    if (::g::Fuse::AppBase::Current2() == NULL)
    {
        _pixelsPerPoint = 1.0f;
        _pixelsPerOSPoint = 1.0f;
        return;
    }

    _pixelSize = ::g::Fuse::Platform::SystemUI::Frame().Size();
    _pixelsPerOSPoint = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    _pixelsPerPoint = _pixelsPerOSPoint;
}

// internal void OnResized(object s, object a) [instance] :3757
void RootViewport::OnResized(uObject* s, uObject* a)
{
    EstablishSize();
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
}

// public float2 get_PixelSize() [instance] :3876
::g::Uno::Float2 RootViewport::PixelSize()
{
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :3863
float RootViewport::PixelsPerPoint()
{
    return (_overridePixelsPerPoint > 0.0f) ? _overridePixelsPerPoint : _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :3893
::g::Uno::Geometry::Ray RootViewport::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    return ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pixelPos);
}

// public generated void add_Resized(Uno.Action<float2> value) [instance] :3667
void RootViewport::add_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[99/*Uno.Action<float2>*/]);
}

// public generated void remove_Resized(Uno.Action<float2> value) [instance] :3667
void RootViewport::remove_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[99/*Uno.Action<float2>*/]);
}

// public float2 get_Size() [instance] :3870
::g::Uno::Float2 RootViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [instance] :3897
::g::Uno::Geometry::Ray RootViewport::WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public RootViewport New() [static] :3669
RootViewport* RootViewport::New2()
{
    RootViewport* obj1 = (RootViewport*)uNew(RootViewport_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class Rotation :4190
// {
static void Rotation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(13,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Rotation, _euler), 0);
}

::g::Fuse::Transform_type* Rotation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Rotation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Rotation", options);
    type->fp_build_ = Rotation_build;
    type->fp_ctor_ = (void*)Rotation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Rotation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Rotation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Rotation__PrependTo_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Rotation() :4190
void Rotation__ctor_3_fn(Rotation* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :4289
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;

    if (__this->HasRotation())
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(::g::Uno::Float3__op_Multiply1(__this->_euler, weight_)));
}

// public float get_Degrees() :4228
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :4229
void Rotation__set_Degrees_fn(Rotation* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesZ() :4237
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :4238
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public float3 get_EulerAngle() :4196
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngle();
}

// public void set_EulerAngle(float3 value) :4197
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngle(*value);
}

// private bool get_HasRotation() :4282
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval)
{
    *__retval = __this->HasRotation();
}

// public override sealed bool get_IsFlat() :4303
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval)
{
    return *__retval = (::g::Uno::Math::Abs1(__this->_euler.X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->_euler.Y) < 1e-05f), void();
}

// public generated Rotation New() :4190
void Rotation__New2_fn(Rotation** __retval)
{
    *__retval = Rotation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :4295
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m)
{
    if (__this->HasRotation())
        uPtr(m)->PrependRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(__this->_euler));
}

// public generated Rotation() [instance] :4190
void Rotation::ctor_3()
{
    ctor_2();
}

// public float get_Degrees() [instance] :4228
float Rotation::Degrees()
{
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :4229
void Rotation::Degrees(float value)
{
    DegreesZ(value);
}

// public float get_DegreesZ() [instance] :4237
float Rotation::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Z);
}

// public void set_DegreesZ(float value) [instance] :4238
void Rotation::DegreesZ(float value)
{
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Z != r)
    {
        _euler.Z = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float3 get_EulerAngle() [instance] :4196
::g::Uno::Float3 Rotation::EulerAngle()
{
    return _euler;
}

// public void set_EulerAngle(float3 value) [instance] :4197
void Rotation::EulerAngle(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(_euler, value))
    {
        _euler = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// private bool get_HasRotation() [instance] :4282
bool Rotation::HasRotation()
{
    return ((::g::Uno::Math::Abs1(_euler.X) + ::g::Uno::Math::Abs1(_euler.Y)) + ::g::Uno::Math::Abs1(_euler.Z)) > 1e-05f;
}

// public generated Rotation New() [static] :4190
Rotation* Rotation::New2()
{
    Rotation* obj1 = (Rotation*)uNew(Rotation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class Scaling :3950
// {
static void Scaling_build(uType* type)
{
    ::TYPES[100] = ::g::Fuse::IScalingMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::IScalingMode_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface6));
    type->SetFields(17,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Scaling, _vector), 0);
}

::g::Fuse::RelativeTransform_type* Scaling_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Scaling);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Scaling", options);
    type->fp_build_ = Scaling_build;
    type->fp_ctor_ = (void*)Scaling__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Scaling__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Scaling__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Scaling__PrependTo_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Scaling() :3952
void Scaling__ctor_4_fn(Scaling* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :4029
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), v, weight_));
}

// private float3 get_EffectiveVector() :4016
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EffectiveVector();
}

// public override sealed bool get_IsFlat() :4045
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private bool IsIdentity(float3 v) :4022
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval)
{
    *__retval = __this->IsIdentity(*v);
}

// public Scaling New() :3952
void Scaling__New2_fn(Scaling** __retval)
{
    *__retval = Scaling::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :4036
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->PrependScale1(v);
}

// public float3 get_Vector() :3982
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :3983
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public Scaling() [instance] :3952
void Scaling::ctor_4()
{
    _vector = ::g::Uno::Float3__New1(1.0f);
    ctor_3(::g::Fuse::ScalingModes::Identity());
}

// private float3 get_EffectiveVector() [instance] :4016
::g::Uno::Float3 Scaling::EffectiveVector()
{
    return ::g::Fuse::IScalingMode::GetScaleVector(uInterface(uPtr((uObject*)RelativeTo()), ::TYPES[100/*Fuse.IScalingMode*/]), this);
}

// private bool IsIdentity(float3 v) [instance] :4022
bool Scaling::IsIdentity(::g::Uno::Float3 v)
{
    return ((::g::Uno::Math::Abs1(v.X - 1.0f) < 1e-05f) && (::g::Uno::Math::Abs1(v.Y - 1.0f) < 1e-05f)) && (::g::Uno::Math::Abs1(v.Z - 1.0f) < 1e-05f);
}

// public float3 get_Vector() [instance] :3982
::g::Uno::Float3 Scaling::Vector()
{
    return _vector;
}

// public void set_Vector(float3 value) [instance] :3983
void Scaling::Vector(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public Scaling New() [static] :3952
Scaling* Scaling::New2()
{
    Scaling* obj1 = (Scaling*)uNew(Scaling_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public static class ScalingModes :3918
// {
// static ScalingModes() :3918
static void ScalingModes__cctor__fn(uType* __type)
{
    ScalingModes::Identity_ = (uObject*)ScalingModes__IdentityMode::New1();
}

static void ScalingModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::ScalingModes::Identity_, uFieldFlagsStatic);
}

uClassType* ScalingModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ScalingModes", options);
    type->fp_build_ = ScalingModes_build;
    type->fp_cctor_ = ScalingModes__cctor__fn;
    return type;
}

uSStrong<uObject*> ScalingModes::Identity_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class Shear :4313
// {
static void Shear_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(13,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shear, _vector), 0);
}

::g::Fuse::Transform_type* Shear_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Shear);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Shear", options);
    type->fp_build_ = Shear_build;
    type->fp_ctor_ = (void*)Shear__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Shear__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Shear__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Shear__PrependTo_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Shear() :4313
void Shear__ctor_3_fn(Shear* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :4371
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float2 v = ::g::Uno::Float2__op_Multiply1(__this->Vector(), weight_);
    uPtr(m)->AppendShear(v.X, v.Y);
}

// public override sealed bool get_IsFlat() :4385
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Shear New() :4313
void Shear__New2_fn(Shear** __retval)
{
    *__retval = Shear::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :4377
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float2 v = __this->Vector();
    uPtr(m)->PrependShear(v.X, v.Y);
}

// public float2 get_Vector() :4319
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :4320
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Shear() [instance] :4313
void Shear::ctor_3()
{
    ctor_2();
}

// public float2 get_Vector() [instance] :4319
::g::Uno::Float2 Shear::Vector()
{
    return _vector;
}

// public void set_Vector(float2 value) [instance] :4320
void Shear::Vector(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public generated Shear New() [static] :4313
Shear* Shear::New2()
{
    Shear* obj1 = (Shear*)uNew(Shear_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class Size2Computer :97
// {
static void Size2Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
}

uType* Size2Computer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Size2Computer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Size2Computer", options);
    type->fp_build_ = Size2Computer_build;
    type->fp_ctor_ = (void*)Size2Computer__New1_fn;
    return type;
}

// public generated Size2Computer() :97
void Size2Computer__ctor_2_fn(Size2Computer* __this)
{
    __this->ctor_2();
}

// public generated Size2Computer New() :97
void Size2Computer__New1_fn(Size2Computer** __retval)
{
    *__retval = Size2Computer::New1();
}

// public generated Size2Computer() [instance] :97
void Size2Computer::ctor_2()
{
    ctor_1();
}

// public generated Size2Computer New() [static] :97
Size2Computer* Size2Computer::New1()
{
    Size2Computer* obj1 = (Size2Computer*)uNew(Size2Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class SizeComputer :81
// {
static void SizeComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
}

uType* SizeComputer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(SizeComputer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.SizeComputer", options);
    type->fp_build_ = SizeComputer_build;
    type->fp_ctor_ = (void*)SizeComputer__New1_fn;
    return type;
}

// public generated SizeComputer() :81
void SizeComputer__ctor_2_fn(SizeComputer* __this)
{
    __this->ctor_2();
}

// public generated SizeComputer New() :81
void SizeComputer__New1_fn(SizeComputer** __retval)
{
    *__retval = SizeComputer::New1();
}

// public generated SizeComputer() [instance] :81
void SizeComputer::ctor_2()
{
    ctor_1();
}

// public generated SizeComputer New() [static] :81
SizeComputer* SizeComputer::New1()
{
    SizeComputer* obj1 = (SizeComputer*)uNew(SizeComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private class TranslationModes.SizeMode :4608
// {
static void TranslationModes__SizeMode_build(uType* type)
{
    ::TYPES[94] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[95] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[96] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface1));
}

TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof()
{
    static uSStrong<TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeMode);
    options.TypeSize = sizeof(TranslationModes__SizeMode_type);
    type = (TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.SizeMode", options);
    type->fp_build_ = TranslationModes__SizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__SizeMode__New1_fn;
    type->fp_GetAbsVector = TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated SizeMode() :4608
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this)
{
    __this->ctor_();
}

// public virtual float3 GetAbsVector(Fuse.Translation t) :4610
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()), uPtr(t)->Vector()), void();
}

// public generated SizeMode New() :4608
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval)
{
    *__retval = TranslationModes__SizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :4611
void TranslationModes__SizeMode__Subscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :4618
void TranslationModes__SizeMode__Unsubscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated SizeMode() [instance] :4608
void TranslationModes__SizeMode::ctor_()
{
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :4611
uObject* TranslationModes__SizeMode::Subscribe(uObject* transform)
{
    uObject* n = uAs<uObject*>(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/])), ::TYPES[94/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[94/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[96/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return ::g::Fuse::ITransformRelative::RelativeNode(uInterface(transform, ::TYPES[95/*Fuse.ITransformRelative*/]));
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :4618
void TranslationModes__SizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[94/*Fuse.IActualPlacement*/])), ::TYPES[94/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[96/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[95/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated SizeMode New() [static] :4608
TranslationModes__SizeMode* TranslationModes__SizeMode::New1()
{
    TranslationModes__SizeMode* obj1 = (TranslationModes__SizeMode*)uNew(TranslationModes__SizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class Stage :3017
// {
static void Stage_build(uType* type)
{
    ::TYPES[101] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof(), NULL);
    ::TYPES[102] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateAction_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Stage, HasListenersRemoved), 0,
        ::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(::g::Fuse::Stage, Listeners), 0,
        ::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(::g::Fuse::Stage, Onces), 0,
        ::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(::g::Fuse::Stage, OncesPending), 0,
        ::TYPES[102/*Uno.Collections.List<Fuse.UpdateAction>*/], offsetof(::g::Fuse::Stage, PhaseDeferredActions), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Stage, PhaseDeferredActionsAt), 0,
        ::g::Fuse::UpdateStage_typeof(), offsetof(::g::Fuse::Stage, UpdateStage), 0);
}

uType* Stage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Stage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Stage", options);
    type->fp_build_ = Stage_build;
    return type;
}

// public Stage(Fuse.UpdateStage _updateStage) :3030
void Stage__ctor__fn(Stage* __this, int* _updateStage)
{
    __this->ctor_(*_updateStage);
}

// public void AddDeferredAction(Uno.Action pu, [int priority]) :3054
void Stage__AddDeferredAction_fn(Stage* __this, uDelegate* pu, int* priority)
{
    __this->AddDeferredAction(pu, *priority);
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) :3036
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    __this->Insert(list, us);
}

// public Stage New(Fuse.UpdateStage _updateStage) :3030
void Stage__New1_fn(int* _updateStage, Stage** __retval)
{
    *__retval = Stage::New1(*_updateStage);
}

// public void ResetDeferredActions() :3065
void Stage__ResetDeferredActions_fn(Stage* __this)
{
    __this->ResetDeferredActions();
}

// public Stage(Fuse.UpdateStage _updateStage) [instance] :3030
void Stage::ctor_(int _updateStage)
{
    Listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    Onces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    OncesPending = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[101/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    PhaseDeferredActions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[102/*Uno.Collections.List<Fuse.UpdateAction>*/]));
    PhaseDeferredActionsAt = -1;
    UpdateStage = _updateStage;
}

// public void AddDeferredAction(Uno.Action pu, [int priority]) [instance] :3054
void Stage::AddDeferredAction(uDelegate* pu, int priority)
{
    ::g::Fuse::UpdateAction collection1;
    ::g::Fuse::UpdateAction ret3;
    int at = uPtr(PhaseDeferredActions)->Count();

    while (((at - 1) > PhaseDeferredActionsAt) && ((::g::Uno::Collections::List__get_Item_fn(uPtr(PhaseDeferredActions), uCRef<int>(at - 1), &ret3), ret3).priority > priority))
        at--;

    ::g::Uno::Collections::List__Insert_fn(uPtr(PhaseDeferredActions), uCRef<int>(at), uCRef((collection1 = uDefault< ::g::Fuse::UpdateAction>(), collection1.action = pu, collection1.priority = priority, collection1)));
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) [instance] :3036
void Stage::Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    ::g::Fuse::UpdateListener* ret4;

    for (int i = uPtr(list)->Count(); i > 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i - 1), &ret4), ret4))->sequence <= uPtr(us)->sequence)
        {
            ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(i), us);
            return;
        }

    ::g::Uno::Collections::List__Insert_fn(list, uCRef<int>(0), us);
}

// public void ResetDeferredActions() [instance] :3065
void Stage::ResetDeferredActions()
{
    uPtr(PhaseDeferredActions)->Clear();
    PhaseDeferredActionsAt = -1;
}

// public Stage New(Fuse.UpdateStage _updateStage) [static] :3030
Stage* Stage::New1(int _updateStage)
{
    Stage* obj2 = (Stage*)uNew(Stage_typeof());
    obj2->ctor_(_updateStage);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class StringComputer :58
// {
static void StringComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
}

uType* StringComputer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(StringComputer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.StringComputer", options);
    type->fp_build_ = StringComputer_build;
    type->fp_ctor_ = (void*)StringComputer__New1_fn;
    return type;
}

// public generated StringComputer() :58
void StringComputer__ctor_2_fn(StringComputer* __this)
{
    __this->ctor_2();
}

// public generated StringComputer New() :58
void StringComputer__New1_fn(StringComputer** __retval)
{
    *__retval = StringComputer::New1();
}

// public generated StringComputer() [instance] :58
void StringComputer::ctor_2()
{
    ctor_1();
}

// public generated StringComputer New() [static] :58
StringComputer* StringComputer::New1()
{
    StringComputer* obj1 = (StringComputer*)uNew(StringComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public enum SystemFont.Style :2804
uEnumType* SystemFont__Style_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Style", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 0LL,
        "Italic", 1LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed class SystemFont :2789
// {
static void SystemFont_build(uType* type)
{
    type->SetFields(1);
}

uType* SystemFont_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Font_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SystemFont);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Diagnostics.Temporal :261
// {
static void Diagnostics__Temporal_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Diagnostics__Temporal_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Diagnostic_typeof(), offsetof(::g::Fuse::Diagnostics__Temporal, _diag), 0);
}

Diagnostics__Temporal_type* Diagnostics__Temporal_typeof()
{
    static uSStrong<Diagnostics__Temporal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Diagnostics__Temporal);
    options.TypeSize = sizeof(Diagnostics__Temporal_type);
    type = (Diagnostics__Temporal_type*)uClassType::New("Fuse.Diagnostics.Temporal", options);
    type->fp_build_ = Diagnostics__Temporal_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Diagnostics__Temporal__Dispose_fn;
    return type;
}

// public Temporal(Fuse.Diagnostic diag) :264
void Diagnostics__Temporal__ctor__fn(Diagnostics__Temporal* __this, ::g::Fuse::Diagnostic* diag)
{
    __this->ctor_(diag);
}

// public void Dispose() :270
void Diagnostics__Temporal__Dispose_fn(Diagnostics__Temporal* __this)
{
    __this->Dispose();
}

// public Temporal New(Fuse.Diagnostic diag) :264
void Diagnostics__Temporal__New1_fn(::g::Fuse::Diagnostic* diag, Diagnostics__Temporal** __retval)
{
    *__retval = Diagnostics__Temporal::New1(diag);
}

// public Temporal(Fuse.Diagnostic diag) [instance] :264
void Diagnostics__Temporal::ctor_(::g::Fuse::Diagnostic* diag)
{
    _diag = diag;
    ::g::Uno::Threading::Monitor::Enter(::g::Fuse::Diagnostics::_currentDiagnostics());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(::g::Fuse::Diagnostics::_currentDiagnostics());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Diagnostics::_currentDiagnostics()), diag);
    }
}

// public void Dispose() [instance] :270
void Diagnostics__Temporal::Dispose()
{
    bool ret2;
    ::g::Uno::Threading::Monitor::Enter(::g::Fuse::Diagnostics::_currentDiagnostics());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(::g::Fuse::Diagnostics::_currentDiagnostics());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Diagnostics::_currentDiagnostics()), _diag, &ret2);
    }
}

// public Temporal New(Fuse.Diagnostic diag) [static] :264
Diagnostics__Temporal* Diagnostics__Temporal::New1(::g::Fuse::Diagnostic* diag)
{
    Diagnostics__Temporal* obj1 = (Diagnostics__Temporal*)uNew(Diagnostics__Temporal_typeof());
    obj1->ctor_(diag);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class Time :2826
// {
static void Time_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_base_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_current_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_delta_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Time::_init_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_prev_, uFieldFlagsStatic);
}

uClassType* Time_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Time", options);
    type->fp_build_ = Time_build;
    return type;
}

// public static double get_FrameInterval() :2868
void Time__get_FrameInterval_fn(double* __retval)
{
    *__retval = Time::FrameInterval();
}

// public static double get_FrameTime() :2861
void Time__get_FrameTime_fn(double* __retval)
{
    *__retval = Time::FrameTime();
}

// public static double get_FrameTimeBase() :2874
void Time__get_FrameTimeBase_fn(double* __retval)
{
    *__retval = Time::FrameTimeBase();
}

// internal static void Init(double start) :2834
void Time__Init_fn(double* start)
{
    Time::Init(*start);
}

// internal static void Set(double current) :2843
void Time__Set_fn(double* current)
{
    Time::Set(*current);
}

double Time::_base_;
double Time::_current_;
double Time::_delta_;
bool Time::_init_;
double Time::_prev_;

// internal static void Init(double start) [static] :2834
void Time::Init(double start)
{
    Time::_base_ = start;
    Time::_current_ = start;
    Time::_delta_ = 0.0;
    Time::_prev_ = start;
    Time::_init_ = true;
}

// internal static void Set(double current) [static] :2843
void Time::Set(double current)
{
    if (!Time::_init_)
        Time::Init(current);
    else
    {
        Time::_delta_ = (current - Time::_prev_);
        Time::_current_ = current;
        Time::_prev_ = current;
    }
}

// public static double get_FrameInterval() [static] :2868
double Time::FrameInterval()
{
    return Time::_delta_;
}

// public static double get_FrameTime() [static] :2861
double Time::FrameTime()
{
    return Time::_current_ - Time::_base_;
}

// public static double get_FrameTimeBase() [static] :2874
double Time::FrameTimeBase()
{
    return Time::_base_;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class Transform :4156
// {
static void Transform_build(uType* type)
{
    ::TYPES[103] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface5));
    type->SetFields(12,
        ::TYPES[103/*Uno.Action<Fuse.Transform>*/], offsetof(::g::Fuse::Transform, MatrixChanged1), 0);
}

Transform_type* Transform_typeof()
{
    static uSStrong<Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(Transform_type);
    type = (Transform_type*)uClassType::New("Fuse.Transform", options);
    type->fp_build_ = Transform_build;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Transform() :4156
void Transform__ctor_2_fn(Transform* __this)
{
    __this->ctor_2();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) :4161
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->add_MatrixChanged(value);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) :4161
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->remove_MatrixChanged(value);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) :4163
void Transform__OnMatrixChanged_fn(Transform* __this, uObject* igoreSender, uObject* ignoreArgs)
{
    __this->OnMatrixChanged(igoreSender, ignoreArgs);
}

// protected generated Transform() [instance] :4156
void Transform::ctor_2()
{
    ctor_1();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :4161
void Transform::add_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(MatrixChanged1, value), ::TYPES[103/*Uno.Action<Fuse.Transform>*/]);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :4161
void Transform::remove_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(MatrixChanged1, value), ::TYPES[103/*Uno.Action<Fuse.Transform>*/]);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) [instance] :4163
void Transform::OnMatrixChanged(uObject* igoreSender, uObject* ignoreArgs)
{
    if (::g::Uno::Delegate::op_Inequality(MatrixChanged1, NULL))
        uPtr(MatrixChanged1)->InvokeVoid(this);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class Translation :4682
// {
static void Translation_build(uType* type)
{
    ::TYPES[104] = ::g::Fuse::ITranslationMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::ITranslationMode_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface6));
    type->SetFields(17,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _z), 0);
}

::g::Fuse::RelativeTransform_type* Translation_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Translation);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Translation", options);
    type->fp_build_ = Translation_build;
    type->fp_ctor_ = (void*)Translation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Translation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Translation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Translation__PrependTo_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Translation() :4684
void Translation__ctor_4_fn(Translation* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :4783
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Multiply1(::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[104/*Fuse.ITranslationMode*/]), __this), weight_);
    uPtr(m)->AppendTranslation(v.X, v.Y, v.Z);
}

// public override sealed bool get_IsFlat() :4797
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval)
{
    return *__retval = ::g::Uno::Math::Abs1(__this->Z()) < 1e-05f, void();
}

// public Translation New() :4684
void Translation__New2_fn(Translation** __retval)
{
    *__retval = Translation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :4789
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = ::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[104/*Fuse.ITranslationMode*/]), __this);
    uPtr(m)->PrependTranslation(v.X, v.Y, v.Z);
}

// public float3 get_Vector() :4769
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :4770
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :4696
void Translation__get_X_fn(Translation* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :4697
void Translation__set_X_fn(Translation* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :4734
void Translation__get_Y_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :4735
void Translation__set_Y_fn(Translation* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :4753
void Translation__get_Z_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :4754
void Translation__set_Z_fn(Translation* __this, float* value)
{
    __this->Z(*value);
}

// public Translation() [instance] :4684
void Translation::ctor_4()
{
    ctor_3(::g::Fuse::TranslationModes::Local());
}

// public float3 get_Vector() [instance] :4769
::g::Uno::Float3 Translation::Vector()
{
    return ::g::Uno::Float3__New2(X(), Y(), Z());
}

// public void set_Vector(float3 value) [instance] :4770
void Translation::Vector(::g::Uno::Float3 value)
{
    if (((_x != value.X) || (_y != value.Y)) || (_z != value.Z))
    {
        _x = value.X;
        _y = value.Y;
        _z = value.Z;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_X() [instance] :4696
float Translation::X()
{
    return _x;
}

// public void set_X(float value) [instance] :4697
void Translation::X(float value)
{
    if (_x != value)
    {
        _x = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Y() [instance] :4734
float Translation::Y()
{
    return _y;
}

// public void set_Y(float value) [instance] :4735
void Translation::Y(float value)
{
    if (_y != value)
    {
        _y = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Z() [instance] :4753
float Translation::Z()
{
    return _z;
}

// public void set_Z(float value) [instance] :4754
void Translation::Z(float value)
{
    if (_z != value)
    {
        _z = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public Translation New() [static] :4684
Translation* Translation::New2()
{
    Translation* obj1 = (Translation*)uNew(Translation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public static class TranslationModes :4599
// {
// static TranslationModes() :4599
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::Local_ = (uObject*)TranslationModes__LocalMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__SizeMode::New1();
    TranslationModes::ParentSize_ = (uObject*)TranslationModes__ParentSizeMode::New1();
    TranslationModes::Width_ = (uObject*)TranslationModes__WidthMode::New2();
    TranslationModes::Height_ = (uObject*)TranslationModes__HeightMode::New2();
}

static void TranslationModes_build(uType* type)
{
    ::TYPES[94] = ::g::Fuse::IActualPlacement_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Height_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Local_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::ParentSize_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Size_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Width_, uFieldFlagsStatic);
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TranslationModes", options);
    type->fp_build_ = TranslationModes_build;
    type->fp_cctor_ = TranslationModes__cctor__fn;
    return type;
}

// private static float3 SizeOf(Fuse.Node node) :4641
void TranslationModes__SizeOf_fn(::g::Fuse::Node* node, ::g::Uno::Float3* __retval)
{
    *__retval = TranslationModes::SizeOf(node);
}

uSStrong<uObject*> TranslationModes::Height_;
uSStrong<uObject*> TranslationModes::Local_;
uSStrong<uObject*> TranslationModes::ParentSize_;
uSStrong<uObject*> TranslationModes::Size_;
uSStrong<uObject*> TranslationModes::Width_;

// private static float3 SizeOf(Fuse.Node node) [static] :4641
::g::Uno::Float3 TranslationModes::SizeOf(::g::Fuse::Node* node)
{
    TranslationModes_typeof()->Init();
    uObject* isz = uAs<uObject*>(node, ::TYPES[94/*Fuse.IActualPlacement*/]);

    if (isz == NULL)
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Fuse::IActualPlacement::ActualSize(uInterface(uPtr(isz), ::TYPES[94/*Fuse.IActualPlacement*/]));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class UnhandledExceptionArgs :143
// {
static void UnhandledExceptionArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _IsHandled), 0);
}

uType* UnhandledExceptionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UnhandledExceptionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UnhandledExceptionArgs", options);
    type->fp_build_ = UnhandledExceptionArgs_build;
    return type;
}

// public UnhandledExceptionArgs(Uno.Exception e) :148
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e)
{
    __this->ctor_1(e);
}

// public generated Uno.Exception get_Exception() :145
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Uno.Exception value) :145
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsHandled() :146
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :146
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public UnhandledExceptionArgs New(Uno.Exception e) :148
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval)
{
    *__retval = UnhandledExceptionArgs::New2(e);
}

// public UnhandledExceptionArgs(Uno.Exception e) [instance] :148
void UnhandledExceptionArgs::ctor_1(::g::Uno::Exception* e)
{
    ctor_();
    Exception(e);
}

// public generated Uno.Exception get_Exception() [instance] :145
::g::Uno::Exception* UnhandledExceptionArgs::Exception()
{
    return _Exception;
}

// private generated void set_Exception(Uno.Exception value) [instance] :145
void UnhandledExceptionArgs::Exception(::g::Uno::Exception* value)
{
    _Exception = value;
}

// public generated bool get_IsHandled() [instance] :146
bool UnhandledExceptionArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :146
void UnhandledExceptionArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public UnhandledExceptionArgs New(Uno.Exception e) [static] :148
UnhandledExceptionArgs* UnhandledExceptionArgs::New2(::g::Uno::Exception* e)
{
    UnhandledExceptionArgs* obj1 = (UnhandledExceptionArgs*)uNew(UnhandledExceptionArgs_typeof());
    obj1->ctor_1(e);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public delegate void UnhandledExceptionHandler(object sender, Fuse.UnhandledExceptionArgs args) :155
uDelegateType* UnhandledExceptionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UnhandledExceptionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UnhandledExceptionArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal struct UpdateAction :3011
// {
static void UpdateAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateAction, action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateAction, priority), 0);
}

uStructType* UpdateAction_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(UpdateAction);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.UpdateAction", options);
    type->fp_build_ = UpdateAction_build;
    return type;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class UpdateDispatcher :3072
// {
static void UpdateDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(UpdateDispatcher_type, interface0));
}

UpdateDispatcher_type* UpdateDispatcher_typeof()
{
    static uSStrong<UpdateDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateDispatcher);
    options.TypeSize = sizeof(UpdateDispatcher_type);
    type = (UpdateDispatcher_type*)uClassType::New("Fuse.UpdateDispatcher", options);
    type->fp_build_ = UpdateDispatcher_build;
    type->fp_ctor_ = (void*)UpdateDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))UpdateDispatcher__Invoke_fn;
    return type;
}

// public generated UpdateDispatcher() :3072
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :3074
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated UpdateDispatcher New() :3072
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval)
{
    *__retval = UpdateDispatcher::New1();
}

// public generated UpdateDispatcher() [instance] :3072
void UpdateDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :3074
void UpdateDispatcher::Invoke(uDelegate* action)
{
    ::g::Fuse::UpdateManager::PostAction(action);
}

// public generated UpdateDispatcher New() [static] :3072
UpdateDispatcher* UpdateDispatcher::New1()
{
    UpdateDispatcher* obj1 = (UpdateDispatcher*)uNew(UpdateDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class UpdateListener :2989
// {
static void UpdateListener_build(uType* type)
{
    ::TYPES[105] = ::g::Fuse::IUpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateListener, action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, deferFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, removed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, sequence), 0,
        ::TYPES[105/*Fuse.IUpdateListener*/], offsetof(::g::Fuse::UpdateListener, update), 0);
}

uType* UpdateListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UpdateListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateListener", options);
    type->fp_build_ = UpdateListener_build;
    type->fp_ctor_ = (void*)UpdateListener__New1_fn;
    return type;
}

// public generated UpdateListener() :2989
void UpdateListener__ctor__fn(UpdateListener* __this)
{
    __this->ctor_();
}

// public void Invoke() :2998
void UpdateListener__Invoke_fn(UpdateListener* __this)
{
    __this->Invoke();
}

// public generated UpdateListener New() :2989
void UpdateListener__New1_fn(UpdateListener** __retval)
{
    *__retval = UpdateListener::New1();
}

// public generated UpdateListener() [instance] :2989
void UpdateListener::ctor_()
{
}

// public void Invoke() [instance] :2998
void UpdateListener::Invoke()
{
    if (removed)
        return;

    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();

    if (update != NULL)
        ::g::Fuse::IUpdateListener::Update(uInterface(uPtr(update), ::TYPES[105/*Fuse.IUpdateListener*/]));
}

// public generated UpdateListener New() [static] :2989
UpdateListener* UpdateListener::New1()
{
    UpdateListener* obj1 = (UpdateListener*)uNew(UpdateListener_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public static class UpdateManager :3080
// {
// static UpdateManager() :3087
static void UpdateManager__cctor__fn(uType* __type)
{
    UpdateManager::_stages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[106/*Uno.Collections.List<Fuse.Stage>*/]));
    UpdateManager::_postActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[107/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_postActionsSwap_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[107/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::Dispatcher_ = (uObject*)::g::Fuse::UpdateDispatcher::New1();
    UpdateManager::_postActionLock_ = ::g::Uno::Object::New();
    UpdateManager::_frameIndex_ = 1;

    for (int i = 0; i <= 2; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_stages_), ::g::Fuse::Stage::New1(i));
}

static void UpdateManager_build(uType* type)
{
    ::STRINGS[76] = uString::Const("no Action found to remove");
    ::TYPES[106] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof(), NULL);
    ::TYPES[107] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Exception_typeof();
    ::TYPES[108] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[46/*Uno.Exception*/], NULL);
    type->SetFields(0,
        ::g::Fuse::Stage_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_currentStage_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_frameIndex_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_postActionLock_, uFieldFlagsStatic,
        ::TYPES[107/*Uno.Collections.List<Uno.Action>*/], (uintptr_t)&::g::Fuse::UpdateManager::_postActions_, uFieldFlagsStatic,
        ::TYPES[107/*Uno.Collections.List<Uno.Action>*/], (uintptr_t)&::g::Fuse::UpdateManager::_postActionsSwap_, uFieldFlagsStatic,
        ::TYPES[106/*Uno.Collections.List<Fuse.Stage>*/], (uintptr_t)&::g::Fuse::UpdateManager::_stages_, uFieldFlagsStatic,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::Dispatcher_, uFieldFlagsStatic);
}

uClassType* UpdateManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.UpdateManager", options);
    type->fp_build_ = UpdateManager_build;
    type->fp_cctor_ = UpdateManager__cctor__fn;
    return type;
}

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :3107
void UpdateManager__AddAction_fn(uObject* pu, int* stage)
{
    UpdateManager::AddAction(pu, *stage);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) :3096
void UpdateManager__AddAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddAction1(pu, *stage);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [int priority]) :3203
void UpdateManager__AddDeferredAction_fn(uDelegate* pu, int* stage, int* priority)
{
    UpdateManager::AddDeferredAction(pu, *stage, *priority);
}

// public static void AddDeferredAction(Uno.Action pu, int priority) :3209
void UpdateManager__AddDeferredAction1_fn(uDelegate* pu, int* priority)
{
    UpdateManager::AddDeferredAction1(pu, *priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :3151
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddOnceAction(pu, *stage);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) :3417
void UpdateManager__CheckExceptions_fn(::g::Uno::Collections::List* exs)
{
    UpdateManager::CheckExceptions(exs);
}

// private static Fuse.Stage get_CurrentDeferredActionStage() :3197
void UpdateManager__get_CurrentDeferredActionStage_fn(::g::Fuse::Stage** __retval)
{
    *__retval = UpdateManager::CurrentDeferredActionStage();
}

// public static int get_FrameIndex() :3431
void UpdateManager__get_FrameIndex_fn(int* __retval)
{
    *__retval = UpdateManager::FrameIndex();
}

// public static void IncreaseFrameIndex() :3214
void UpdateManager__IncreaseFrameIndex_fn()
{
    UpdateManager::IncreaseFrameIndex();
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) :3168
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage)
{
    UpdateManager::PerformNextFrame(pu, *stage);
}

// public static void PostAction(Uno.Action pu) :3182
void UpdateManager__PostAction_fn(uDelegate* pu)
{
    UpdateManager::PostAction(pu);
}

// private static void ProcessDeferredActions(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :3331
void UpdateManager__ProcessDeferredActions_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessDeferredActions(stage, _exceptions);
}

// private static void ProcessListeners(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :3303
void UpdateManager__ProcessListeners_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessListeners(stage, _exceptions);
}

// private static void ProcessOnces(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :3269
void UpdateManager__ProcessOnces_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessOnces(stage, _exceptions);
}

// private static void ProcessPostActions() :3362
void UpdateManager__ProcessPostActions_fn()
{
    UpdateManager::ProcessPostActions();
}

// private static void ProcessPostActionsImpl() :3377
void UpdateManager__ProcessPostActionsImpl_fn()
{
    UpdateManager::ProcessPostActionsImpl();
}

// private static void ProcessStages() :3226
void UpdateManager__ProcessStages_fn()
{
    UpdateManager::ProcessStages();
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :3143
void UpdateManager__RemoveAction_fn(uObject* pu, int* stage)
{
    UpdateManager::RemoveAction(pu, *stage);
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) :3135
void UpdateManager__RemoveAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveAction1(pu, *stage);
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) :3117
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, uObject* update, bool* __retval)
{
    *__retval = UpdateManager::RemoveFrom(list, action, update);
}

// public static void Update() :3220
void UpdateManager__Update_fn()
{
    UpdateManager::Update();
}

// private static void Update(Fuse.Stage stage) :3256
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage)
{
    UpdateManager::Update1(stage);
}

uSStrong< ::g::Fuse::Stage*> UpdateManager::_currentStage_;
int UpdateManager::_frameIndex_;
uSStrong<uObject*> UpdateManager::_postActionLock_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActions_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActionsSwap_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_stages_;
uSStrong<uObject*> UpdateManager::Dispatcher_;

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :3107
void UpdateManager::AddAction(uObject* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret1;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->update = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret1), ret1);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :3096
void UpdateManager::AddAction1(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret2;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret2), ret2);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [int priority]) [static] :3203
void UpdateManager::AddDeferredAction(uDelegate* pu, int stage, int priority)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret3;
    ::g::Fuse::Stage* use = (stage != -1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret3), ret3) : (::g::Fuse::Stage*)UpdateManager::CurrentDeferredActionStage();
    uPtr(use)->AddDeferredAction(pu, priority);
}

// public static void AddDeferredAction(Uno.Action pu, int priority) [static] :3209
void UpdateManager::AddDeferredAction1(uDelegate* pu, int priority)
{
    UpdateManager_typeof()->Init();
    UpdateManager::AddDeferredAction(pu, -1, priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :3151
void UpdateManager::AddOnceAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret4;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret4), ret4))->OncesPending), us);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) [static] :3417
void UpdateManager::CheckExceptions(::g::Uno::Collections::List* exs)
{
    UpdateManager_typeof()->Init();
    ::g::Uno::Exception* ret5;

    if (exs != NULL)
    {
        if (uPtr(exs)->Count() == 1)
            U_THROW(::g::Fuse::WrapException::New4((::g::Uno::Collections::List__get_Item_fn(uPtr(exs), uCRef<int>(0), &ret5), ret5)));
        else
            U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(exs)->ToArray()));
    }
}

// public static void IncreaseFrameIndex() [static] :3214
void UpdateManager::IncreaseFrameIndex()
{
    UpdateManager_typeof()->Init();
    UpdateManager::_frameIndex()++;
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :3168
void UpdateManager::PerformNextFrame(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret7;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    us->deferFrame = (UpdateManager::FrameIndex() + 1);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret7), ret7))->OncesPending), us);
}

// public static void PostAction(Uno.Action pu) [static] :3182
void UpdateManager::PostAction(uDelegate* pu)
{
    UpdateManager_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(UpdateManager::_postActionLock());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(UpdateManager::_postActionLock());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_postActions()), pu);
    }
}

// private static void ProcessDeferredActions(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :3331
void UpdateManager::ProcessDeferredActions(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateAction ret8;
    uPtr(stage)->PhaseDeferredActionsAt = 0;

    for (; stage->PhaseDeferredActionsAt < uPtr(stage->PhaseDeferredActions)->Count(); ++stage->PhaseDeferredActionsAt)

        try
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->PhaseDeferredActions), uCRef<int>(uPtr(stage)->PhaseDeferredActionsAt), &ret8), ret8).action)->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;

            if (*_exceptions == NULL)
                *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[108/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
        }

    stage->ResetDeferredActions();
}

// private static void ProcessListeners(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :3303
void UpdateManager::ProcessListeners(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret9;
    ::g::Fuse::UpdateListener* ret10;

    for (int i = 0; i < uPtr(uPtr(stage)->Listeners)->Count(); ++i)
    {
        ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i), &ret9), ret9);

        try
        {
            uPtr(ul)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;

            if (*_exceptions == NULL)
                *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[108/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
        }
    }

    if (uPtr(stage)->HasListenersRemoved)

        for (int i1 = uPtr(uPtr(stage)->Listeners)->Count() - 1; i1 >= 0; --i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i1), &ret10), ret10))->removed)
                uPtr(uPtr(stage)->Listeners)->RemoveAt(i1);
}

// private static void ProcessOnces(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :3269
void UpdateManager::ProcessOnces(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret11;

    if (uPtr(uPtr(stage)->OncesPending)->Count() > 0)
    {
        ::g::Uno::Collections::List* t = uPtr(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        uPtr(stage->OncesPending)->Clear();
        int c = uPtr(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Onces), uCRef<int>(i), &ret11), ret11);

            if (uPtr(ul)->deferFrame > UpdateManager::FrameIndex())
                ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(stage)->OncesPending), ul);
            else
            {
                try
                {
                    uPtr(ul)->Invoke();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;

                    if (*_exceptions == NULL)
                        *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[108/*Uno.Collections.List<Uno.Exception>*/]);

                    ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
                }
            }
        }
    }
}

// private static void ProcessPostActions() [static] :3362
void UpdateManager::ProcessPostActions()
{
    UpdateManager_typeof()->Init();
    double t;
    UpdateManager::ProcessPostActionsImpl();
}

// private static void ProcessPostActionsImpl() [static] :3377
void UpdateManager::ProcessPostActionsImpl()
{
    UpdateManager_typeof()->Init();
    uDelegate* ret12;
    ::g::Uno::Collections::List* _exceptions = NULL;

    while (true)
    {
        ::g::Uno::Collections::List* a = NULL;
        ::g::Uno::Threading::Monitor::Enter(UpdateManager::_postActionLock());

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Threading::Monitor::Exit(UpdateManager::_postActionLock());
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            a = UpdateManager::_postActions();
            UpdateManager::_postActions() = UpdateManager::_postActionsSwap();
            UpdateManager::_postActionsSwap() = a;
        }

        if (uPtr(a)->Count() == 0)
            break;

        for (int i = 0; i < uPtr(a)->Count(); ++i)

            try
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(a), uCRef<int>(i), &ret12), ret12))->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;

                if (_exceptions == NULL)
                    _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[108/*Uno.Collections.List<Uno.Exception>*/]);

                ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e);
            }

        uPtr(a)->Clear();
    }

    UpdateManager::_currentStage() = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// private static void ProcessStages() [static] :3226
void UpdateManager::ProcessStages()
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret13;
    double t;
    int c = uPtr(UpdateManager::_stages())->Count();

    for (int i = 0; i < c; ++i)
        UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(i), &ret13), ret13));
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :3143
void UpdateManager::RemoveAction(uObject* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret14;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret14), ret14);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, NULL, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[76/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :3135
void UpdateManager::RemoveAction1(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret15;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret15), ret15);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, pu, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[76/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) [static] :3117
bool UpdateManager::RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action, uObject* update)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret16;
    ::g::Fuse::UpdateListener* ret17;
    ::g::Fuse::UpdateListener* ret18;
    ::g::Fuse::UpdateListener* ret19;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret16), ret16))->removed)
            continue;

        if ((::g::Uno::Delegate::op_Inequality(action, NULL) && ::g::Uno::Object::Equals1(action, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret17), ret17))->action)) || ((update != NULL) && ::g::Uno::Object::Equals1(update, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret18), ret18))->update)))
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret19), ret19))->removed = true;
            return true;
        }
    }

    return false;
}

// public static void Update() [static] :3220
void UpdateManager::Update()
{
    UpdateManager_typeof()->Init();
    UpdateManager::ProcessPostActions();
    UpdateManager::ProcessStages();
}

// private static void Update(Fuse.Stage stage) [static] :3256
void UpdateManager::Update1(::g::Fuse::Stage* stage)
{
    UpdateManager_typeof()->Init();
    UpdateManager::_currentStage() = stage;
    ::g::Uno::Collections::List* _exceptions = NULL;
    UpdateManager::ProcessOnces(stage, &_exceptions);
    UpdateManager::ProcessListeners(stage, &_exceptions);
    UpdateManager::ProcessDeferredActions(stage, &_exceptions);
    UpdateManager::_currentStage() = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// private static Fuse.Stage get_CurrentDeferredActionStage() [static] :3197
::g::Fuse::Stage* UpdateManager::CurrentDeferredActionStage()
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret21;
    return (UpdateManager::_currentStage() != NULL) ? (::g::Fuse::Stage*)UpdateManager::_currentStage() : (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(0), &ret21), ret21);
}

// public static int get_FrameIndex() [static] :3431
int UpdateManager::FrameIndex()
{
    UpdateManager_typeof()->Init();
    return UpdateManager::_frameIndex();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public enum UpdateStage :2959
uEnumType* UpdateStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.UpdateStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", -1LL,
        "Primary", 0LL,
        "Layout", 1LL,
        "Draw", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.47.7/$.uno
// ------------------------------------------------------------------------------------------------

// public partial sealed class UserEvent :354
// {
// static UserEvent() :356
static void UserEvent__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[71/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[109/*Fuse.Scripting.ScriptMethod<Fuse.UserEvent>*/], ::STRINGS[77/*"raise"*/], uDelegate::New(::TYPES[110/*Uno.Action<Fuse.Scripting.Context, Fuse.UserEvent, object[]>*/], (void*)UserEvent__raise_fn), 2)));
}

static void UserEvent_build(uType* type)
{
    ::STRINGS[77] = uString::Const("raise");
    ::STRINGS[78] = uString::Const("UserEvent requires a Name");
    ::STRINGS[79] = uString::Const("/Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.47.7/$.uno");
    ::STRINGS[80] = uString::Const("OnRooted");
    ::STRINGS[81] = uString::Const("Raise must be called with zero arguments, or one argument defining the arguments to the event");
    ::STRINGS[82] = uString::Const("Raise must be called with a JavaScript object to define name/value pairs");
    ::STRINGS[83] = uString::Const("Trying to Raise on unrooted UserEvent");
    ::STRINGS[84] = uString::Const("Raise");
    ::TYPES[25] = ::g::Uno::Type_typeof();
    ::TYPES[71] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[109] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[110] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[111] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[112] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[82] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(12,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEvent, Dispatch), 0);
}

::g::Fuse::Node_type* UserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(UserEvent);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.UserEvent", options);
    type->fp_build_ = UserEvent_build;
    type->fp_cctor_ = UserEvent__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))UserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))UserEvent__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected override sealed void OnRooted() :649
void UserEvent__OnRooted_fn(UserEvent* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit1(__this->Name()), NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[78/*"UserEvent r...*/], __this, ::STRINGS[79/*"/Users/paul...*/], 654, ::STRINGS[80/*"OnRooted"*/], NULL);
        return;
    }

    __this->Dispatch = ::g::Fuse::UserEventDispatch::GetByName(__this->Name());
}

// protected override sealed void OnUnrooted() :661
void UserEvent__OnUnrooted_fn(UserEvent* __this)
{
    __this->Dispatch = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) :411
void UserEvent__raise_fn(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    UserEvent::raise(c, n, args);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) :697
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) :673
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, ::g::Uno::UX::Selector* name, ::g::Fuse::Visual** visual, UserEvent** __retval)
{
    *__retval = UserEvent::ScanTree(at, *name, visual);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) [instance] :697
void UserEvent::Raise(::g::Uno::Collections::Dictionary* args)
{
    if (Dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[83/*"Trying to R...*/], this, ::STRINGS[79/*"/Users/paul...*/], 701, ::STRINGS[84/*"Raise"*/]);
        return;
    }

    uPtr(Dispatch)->Raise(Parent(), args);
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) [static] :411
void UserEvent::raise(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    UserEvent_typeof()->Init();

    if (uPtr(args)->Length() == 0)
    {
        uPtr(n)->Raise(NULL);
        return;
    }

    if (uPtr(args)->Length() > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[81/*"Raise must ...*/], n, ::STRINGS[79/*"/Users/paul...*/], 421, ::STRINGS[77/*"raise"*/], NULL);
        return;
    }

    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[111/*Fuse.Scripting.Object*/]);

    if (so == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[82/*"Raise must ...*/], uPtr(args)->Strong<uObject*>(0), ::STRINGS[79/*"/Users/paul...*/], 428, ::STRINGS[77/*"raise"*/], NULL);
        return;
    }

    uArray* keys = uPtr(so)->Keys();
    ::g::Uno::Collections::Dictionary* evArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[112/*Uno.Collections.Dictionary<string, object>*/]);

    for (int i = 0; i < uPtr(keys)->Length(); i++)
    {
        uString* name = uPtr(keys)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(evArgs), name, uPtr(so)->Item(name));
    }

    uPtr(n)->Raise(evArgs);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) [static] :673
UserEvent* UserEvent::ScanTree(::g::Fuse::Node* at, ::g::Uno::UX::Selector name, ::g::Fuse::Visual** visual)
{
    UserEvent_typeof()->Init();
    ::g::Fuse::Node* ret2;

    while (at != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(at, ::TYPES[6/*Fuse.Visual*/]);

        if (v != NULL)

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                UserEvent* ue = uAs<UserEvent*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), UserEvent_typeof());

                if ((ue != NULL) && ::g::Uno::UX::Selector__op_Equality(uPtr(ue)->Name(), name))
                {
                    *visual = v;
                    return ue;
                }
            }

        at = uPtr(at)->ContextParent();
    }

    *visual = NULL;
    return NULL;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.47.7/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class UserEventArgs :457
// {
static void UserEventArgs_build(uType* type)
{
    ::STRINGS[85] = uString::Const("name");
    ::TYPES[97] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[113] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[114] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(UserEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(::g::Fuse::UserEventArgs, _Args), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEventArgs, _Dispatch), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::UserEventArgs, _Source), 0);
}

UserEventArgs_type* UserEventArgs_typeof()
{
    static uSStrong<UserEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UserEventArgs);
    options.TypeSize = sizeof(UserEventArgs_type);
    type = (UserEventArgs_type*)uClassType::New("Fuse.UserEventArgs", options);
    type->fp_build_ = UserEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))UserEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :471
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->ctor_1(dispatch, source, args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() :469
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) :469
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Args(value);
}

// internal generated Fuse.UserEventDispatch get_Dispatch() :459
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval)
{
    *__retval = __this->Dispatch();
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) :459
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value)
{
    __this->Dispatch(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :483
void UserEventArgs__FuseScriptingIScriptEventSerialize_fn(UserEventArgs* __this, uObject* s)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[85/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->Dispatch())->Name()));

    if (__this->Args() != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Args()), &ret3), ret3); enum1.MoveNext(::TYPES[113/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > m = enum1.Current(::TYPES[113/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[97/*Fuse.Scripting.IEventSerializer*/]), m.Key(::TYPES[114/*Uno.Collections.KeyValuePair<string, object>*/]), m.Value(::TYPES[114/*Uno.Collections.KeyValuePair<string, object>*/]));
        }
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :471
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval)
{
    *__retval = UserEventArgs::New2(dispatch, source, args);
}

// internal void Raise() :478
void UserEventArgs__Raise_fn(UserEventArgs* __this)
{
    __this->Raise();
}

// public generated Fuse.Node get_Source() :466
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Node value) :466
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :471
void UserEventArgs::ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ctor_();
    Dispatch(dispatch);
    Source(source);
    Args(args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() [instance] :469
::g::Uno::Collections::Dictionary* UserEventArgs::Args()
{
    return _Args;
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) [instance] :469
void UserEventArgs::Args(::g::Uno::Collections::Dictionary* value)
{
    _Args = value;
}

// internal generated Fuse.UserEventDispatch get_Dispatch() [instance] :459
::g::Fuse::UserEventDispatch* UserEventArgs::Dispatch()
{
    return _Dispatch;
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) [instance] :459
void UserEventArgs::Dispatch(::g::Fuse::UserEventDispatch* value)
{
    _Dispatch = value;
}

// internal void Raise() [instance] :478
void UserEventArgs::Raise()
{
    uPtr(Dispatch())->OnRaised(this);
}

// public generated Fuse.Node get_Source() [instance] :466
::g::Fuse::Node* UserEventArgs::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Node value) [instance] :466
void UserEventArgs::Source(::g::Fuse::Node* value)
{
    _Source = value;
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [static] :471
UserEventArgs* UserEventArgs::New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    UserEventArgs* obj2 = (UserEventArgs*)uNew(UserEventArgs_typeof());
    obj2->ctor_1(dispatch, source, args);
    return obj2;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.47.7/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class UserEventDispatch :496
// {
// static UserEventDispatch() :496
static void UserEventDispatch__cctor__fn(uType* __type)
{
    UserEventDispatch::_userEvents_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[115/*Uno.Collections.Dictionary<Uno.UX.Selector, Fuse.UserEventDispatch>*/]));
}

static void UserEventDispatch_build(uType* type)
{
    ::TYPES[115] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), type, NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[116] = ::g::Fuse::UserEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::UserEventDispatch, _Name), 0,
        ::TYPES[116/*Fuse.UserEventHandler*/], offsetof(::g::Fuse::UserEventDispatch, Raised1), 0,
        ::TYPES[115/*Uno.Collections.Dictionary<Uno.UX.Selector, Fuse.UserEventDispatch>*/], (uintptr_t)&::g::Fuse::UserEventDispatch::_userEvents_, uFieldFlagsStatic);
}

uType* UserEventDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventDispatch", options);
    type->fp_build_ = UserEventDispatch_build;
    type->fp_ctor_ = (void*)UserEventDispatch__New1_fn;
    type->fp_cctor_ = UserEventDispatch__cctor__fn;
    return type;
}

// public generated UserEventDispatch() :496
void UserEventDispatch__ctor__fn(UserEventDispatch* __this)
{
    __this->ctor_();
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) :523
void UserEventDispatch__DirectRaise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->DirectRaise(source, args);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) :505
void UserEventDispatch__GetByName_fn(::g::Uno::UX::Selector* name, UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::GetByName(*name);
}

// public generated Uno.UX.Selector get_Name() :503
void UserEventDispatch__get_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(Uno.UX.Selector value) :503
void UserEventDispatch__set_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public generated UserEventDispatch New() :496
void UserEventDispatch__New1_fn(UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::New1();
}

// internal void OnRaised(Fuse.UserEventArgs args) :529
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :517
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(source, args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :501
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :501
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UserEventDispatch::_userEvents_;

// public generated UserEventDispatch() [instance] :496
void UserEventDispatch::ctor_()
{
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) [instance] :523
void UserEventDispatch::DirectRaise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    OnRaised(m);
}

// public generated Uno.UX.Selector get_Name() [instance] :503
::g::Uno::UX::Selector UserEventDispatch::Name()
{
    return _Name;
}

// private generated void set_Name(Uno.UX.Selector value) [instance] :503
void UserEventDispatch::Name(::g::Uno::UX::Selector value)
{
    _Name = value;
}

// internal void OnRaised(Fuse.UserEventArgs args) [instance] :529
void UserEventDispatch::OnRaised(::g::Fuse::UserEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Raised1, NULL))
        uPtr(Raised1)->Invoke(2, this, args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :517
void UserEventDispatch::Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::UserEventArgs__Raise_fn, m), -1, 0);
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :501
void UserEventDispatch::add_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[116/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :501
void UserEventDispatch::remove_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[116/*Fuse.UserEventHandler*/]);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) [static] :505
UserEventDispatch* UserEventDispatch::GetByName(::g::Uno::UX::Selector name)
{
    UserEventDispatch_typeof()->Init();
    bool ret2;
    UserEventDispatch* current;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(UserEventDispatch::_userEvents()), uCRef(name), (void**)(&current), &ret2), ret2))
        return current;

    UserEventDispatch* ue = UserEventDispatch::New1();
    ue->Name(name);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(UserEventDispatch::_userEvents()), uCRef(name), ue);
    return ue;
}

// public generated UserEventDispatch New() [static] :496
UserEventDispatch* UserEventDispatch::New1()
{
    UserEventDispatch* obj1 = (UserEventDispatch*)uNew(UserEventDispatch_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.47.7/$.uno
// ------------------------------------------------------------------------------------------------

// public delegate void UserEventHandler(object sender, Fuse.UserEventArgs args) :494
uDelegateType* UserEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UserEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UserEventArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public static class ViewportHelpers :1273
// {
static void ViewportHelpers_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::ICommonViewport_typeof();
}

uClassType* ViewportHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ViewportHelpers", options);
    type->fp_build_ = ViewportHelpers_build;
    return type;
}

// public static float2 LocalPlaneIntersection(Uno.Geometry.Ray local) :1304
void ViewportHelpers__LocalPlaneIntersection_fn(::g::Uno::Geometry::Ray* local, ::g::Uno::Float2* __retval)
{
    *__retval = ViewportHelpers::LocalPlaneIntersection(*local);
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) :1275
void ViewportHelpers__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = ViewportHelpers::PointToWorldRay(viewport, *viewProjectionInverse, *pointPos);
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :1290
void ViewportHelpers__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = ViewportHelpers::WorldToLocalRay(viewport, world, *worldRay, where);
}

// public static float2 LocalPlaneIntersection(Uno.Geometry.Ray local) [static] :1304
::g::Uno::Float2 ViewportHelpers::LocalPlaneIntersection(::g::Uno::Geometry::Ray local)
{
    float t = -local.Position.Z / local.Direction.Z;
    ::g::Uno::Float3 plane = ::g::Uno::Float3__op_Addition2(local.Position, ::g::Uno::Float3__op_Multiply1(local.Direction, t));
    return ::g::Uno::Float2__New2(plane.X, plane.Y);
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) [static] :1275
::g::Uno::Geometry::Ray ViewportHelpers::PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos)
{
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(((pointPos.X / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/])).X) * 2.0f) - 1.0f, ((pointPos.Y / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[22/*Fuse.ICommonViewport*/])).Y) * -2.0f) + 1.0f);
    ::g::Uno::Float4x4 vpi = viewProjectionInverse;
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, -1.0f), vpi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, 1.0f), vpi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [static] :1290
::g::Uno::Geometry::Ray ViewportHelpers::WorldToLocalRay(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    if (where == world)
        return worldRay;

    ::g::Uno::Float4x4 wi = uPtr(where)->WorldTransformInverse();
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(worldRay.Position, wi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(worldRay.Position, worldRay.Direction), wi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public interfacemodifiers class Visual :4860
// {
// static Visual() :6864
static void Visual__cctor_1_fn(uType* __type)
{
    Visual::_isContextEnabledChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_isEnabledName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[86/*"IsEnabled"*/]);
    Visual::_isVisibleChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layerProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layoutRoleProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_parameterChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::ParameterName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[72/*"Parameter"*/]);
    Visual::_resourcesHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_worldTransformInvalidatedHandle_ = ::g::Fuse::Properties::CreateHandle();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[71/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptProperty1*)::g::Fuse::Scripting::ScriptProperty1::New1(::TYPES[117/*Fuse.Scripting.ScriptProperty<Fuse.Visual, string>*/], ::STRINGS[72/*"Parameter"*/], uDelegate::New(::TYPES[118/*Uno.Func<Fuse.Visual, Uno.UX.Property<string>>*/], (void*)Visual__getParameterProperty_fn), ::STRINGS[87/*".notNull()....*/]), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[119/*Fuse.Scripting.ScriptMethod<Fuse.Visual>*/], ::STRINGS[88/*"onParameter...*/], uDelegate::New(::TYPES[120/*Uno.Action<Fuse.Scripting.Context, Fuse.Visual, object[]>*/], (void*)Visual__onParameterChanged_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[119/*Fuse.Scripting.ScriptMethod<Fuse.Visual>*/], ::STRINGS[89/*"bringIntoView"*/], uDelegate::New(::TYPES[120/*Uno.Action<Fuse.Scripting.Context, Fuse.Visual, object[]>*/], (void*)Visual__bringIntoView_fn), 2)));
}

static void Visual_build(uType* type)
{
    ::STRINGS[86] = uString::Const("IsEnabled");
    ::STRINGS[72] = uString::Const("Parameter");
    ::STRINGS[87] = uString::Const(".notNull().parseJson()");
    ::STRINGS[88] = uString::Const("onParameterChanged");
    ::STRINGS[89] = uString::Const("bringIntoView");
    ::STRINGS[90] = uString::Const("index");
    ::STRINGS[91] = uString::Const("Layout was invalidated while performing layout");
    ::STRINGS[92] = uString::Const("Invalid call to RearrangeMarginBox");
    ::TYPES[25] = ::g::Uno::Type_typeof();
    ::TYPES[71] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[117] = ::g::Fuse::Scripting::ScriptProperty1_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL);
    ::TYPES[118] = ::g::Uno::Func1_typeof()->MakeType(type, ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[119] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[120] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[82] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[121] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), NULL);
    ::TYPES[122] = ::g::Fuse::Scripting::IScriptObject_typeof();
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[123] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[124] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(type, NULL);
    ::TYPES[125] = ::g::Fuse::Transform_typeof();
    ::TYPES[126] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[127] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL);
    ::TYPES[128] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL);
    ::TYPES[129] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[130] = ::g::Uno::Comparison_typeof()->MakeType(type, NULL);
    ::TYPES[131] = ::g::Fuse::FastProperty1Link1_typeof();
    ::TYPES[132] = ::g::Fuse::FastProperty2Link1_typeof();
    ::TYPES[133] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[134] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::IViewport_typeof();
    ::TYPES[135] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[136] = ::g::Uno::Collections::HashSet_typeof()->MakeType(type, NULL);
    ::TYPES[137] = ::g::Fuse::Internal::MiniList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[138] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::EventHandler_typeof();
    ::TYPES[139] = ::g::Uno::EventArgs_typeof();
    ::TYPES[140] = ::g::Fuse::IBeginRemoveVisualListener_typeof();
    ::TYPES[141] = ::g::Fuse::IParentObserver_typeof();
    ::TYPES[75] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[142] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[143] = ::g::Fuse::ITemplateObserver_typeof();
    ::TYPES[103] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[125/*Fuse.Transform*/], NULL);
    ::TYPES[22] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[144] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[89] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[90] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[145] = type->MakeMethod(3/*FirstChild<Fuse.Visual>*/, type, NULL);
    ::TYPES[146] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[147] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[148] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[149] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    ::TYPES[150] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[131/*Fuse.FastProperty1Link`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[132/*Fuse.FastProperty2Link`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(6/*GetNearestAncestorOfType<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        type->MakeMethod(0/*Find<T>*/, type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        type->MakeMethod(1/*Find<T>*/, type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::TYPES[131/*Fuse.FastProperty1Link`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL));
    type->MethodTypes[8]->SetPrecalc(
        ::TYPES[132/*Fuse.FastProperty2Link`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL));
    type->MethodTypes[10]->SetPrecalc(
        type->MakeMethod(0/*Find<T>*/, type->MethodTypes[10]->U(0), NULL),
        type->MakeMethod(7/*Insert<T>*/, type->MethodTypes[10]->U(0), NULL));
    type->MethodTypes[11]->SetPrecalc(
        type->MakeMethod(1/*Find<T>*/, type->MethodTypes[11]->U(0), NULL),
        type->MakeMethod(8/*Insert<T>*/, type->MethodTypes[11]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface0),
        ::TYPES[122/*Fuse.Scripting.IScriptObject*/], offsetof(Visual_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Visual_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Visual_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface5),
        ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/], offsetof(Visual_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Visual_type, interface7),
        ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(Visual_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Visual_type, interface9));
    type->SetFields(12,
        ::g::Fuse::LayoutParams_typeof(), offsetof(::g::Fuse::Visual, _ambLayoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _ambMargin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _ambPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _cachedRenderTargetSize), 0,
        ::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], offsetof(::g::Fuse::Visual, _children), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Visual, _drawCost), 0,
        ::g::Fuse::FastProperty1Link_typeof(), offsetof(::g::Fuse::Visual, _fastProperties1), 0,
        ::g::Fuse::FastProperty2Link_typeof(), offsetof(::g::Fuse::Visual, _fastProperties2), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _fastPropertyBits1), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _fastPropertyBits2), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _firstNonUnderlay), 0,
        type, offsetof(::g::Fuse::Visual, _focusDelegate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _hasMarginBox), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(::g::Fuse::Visual, _hitTestBoundsCache), 0,
        ::TYPES[124/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>*/], offsetof(::g::Fuse::Visual, _interactions), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isFocusable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isHitTestBoundsCacheValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isVisibleCached), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _lastInvalidate), 0,
        ::g::Fuse::InvalidateLayoutReason_typeof(), offsetof(::g::Fuse::Visual, _layoutDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _localTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _localTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _nodebits), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _nodeZOrders), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _observerCount), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Visual, _parameter), 0,
        ::TYPES[121/*Uno.Collections.List<Fuse.Scripting.Function>*/], offsetof(::g::Fuse::Visual, _parameterListeners), 0,
        Visual__ParameterProperty_typeof(), offsetof(::g::Fuse::Visual, _parameterProperty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _sortedZOrder), 0,
        ::TYPES[134/*Uno.Collections.IList<Uno.UX.Template>*/], offsetof(::g::Fuse::Visual, _templates), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _transformCount), 0,
        ::TYPES[7/*Fuse.IViewport*/], offsetof(::g::Fuse::Visual, _viewport), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _worldTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _worldTransformInverse), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Visual, _zOffset), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Visual>*/], offsetof(::g::Fuse::Visual, _zOrder), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, ZLayer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, ZOffsetFixed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, ZOffsetNatural), 0,
        ::TYPES[23/*Uno.EventHandler*/], offsetof(::g::Fuse::Visual, IsInteractingChanged1), 0,
        ::TYPES[150/*Fuse.RequestBringIntoViewHandler*/], offsetof(::g::Fuse::Visual, RequestBringIntoView1), 0,
        ::TYPES[23/*Uno.EventHandler*/], offsetof(::g::Fuse::Visual, ZOrderChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_isContextEnabledChangedHandle_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual::_isEnabledName_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_isVisibleChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_layerProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_layoutRoleProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_parameterChangedHandle_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Visual::_performingLayout_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_resourcesHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_worldTransformInvalidatedHandle_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual::ParameterName_, uFieldFlagsStatic);
}

Visual_type* Visual_typeof()
{
    static uSStrong<Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 64;
    options.InterfaceCount = 10;
    options.MethodTypeCount = 12;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(Visual_type);
    type = (Visual_type*)uClassType::New("Fuse.Visual", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->MethodTypes[2] = type->NewMethodType(1, 1);
    type->MethodTypes[3] = type->NewMethodType(1, 0);
    type->MethodTypes[4] = type->NewMethodType(1, 1);
    type->MethodTypes[5] = type->NewMethodType(1, 1);
    type->MethodTypes[6] = type->NewMethodType(1, 0);
    type->MethodTypes[7] = type->NewMethodType(1, 1);
    type->MethodTypes[8] = type->NewMethodType(1, 1);
    type->MethodTypes[9] = type->NewMethodType(1, 0);
    type->MethodTypes[10] = type->NewMethodType(1, 2);
    type->MethodTypes[11] = type->NewMethodType(1, 2);
    type->fp_build_ = Visual_build;
    type->fp_cctor_ = Visual__cctor_1_fn;
    type->fp_get_AbsoluteViewportOrigin = Visual__get_AbsoluteViewportOrigin_fn;
    type->fp_get_CanAdjustMarginBox = Visual__get_CanAdjustMarginBox_fn;
    type->fp_DrawSelection = Visual__DrawSelection_fn;
    type->fp_GetMarginSize = Visual__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = Visual__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = Visual__get_HitTestLocalBounds_fn;
    type->fp_InvalidateLocalTransform = Visual__InvalidateLocalTransform_fn;
    type->fp_get_IsLayoutRoot = Visual__get_IsLayoutRoot_fn;
    type->fp_get_IsLocalVisible = Visual__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = Visual__IsMarginBoxDependent_fn;
    type->fp_get_LocalRenderBounds = Visual__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = Visual__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = Visual__OnArrangeMarginBox_fn;
    type->fp_OnChildAdded = Visual__OnChildAdded_fn;
    type->fp_OnChildRemoved = Visual__OnChildRemoved_fn;
    type->fp_OnHitTest = Visual__OnHitTest_fn;
    type->fp_OnInvalidateLayout = Visual__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = Visual__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = Visual__OnInvalidateVisual_fn;
    type->fp_OnInvalidateVisualComposition = Visual__OnInvalidateVisualComposition_fn;
    type->fp_OnIsContextEnabledChanged = Visual__OnIsContextEnabledChanged_fn;
    type->fp_OnIsVisibleChanged = Visual__OnIsVisibleChanged_fn;
    type->fp_OnPropertyChanged2 = Visual__OnPropertyChanged2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Visual__OnRooted_fn;
    type->fp_OnRootedPreChildren = Visual__OnRootedPreChildren_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Visual__OnUnrooted_fn;
    type->fp_OnZOrderInvalidated = Visual__OnZOrderInvalidated_fn;
    type->fp_PrependImplicitTransform = Visual__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = Visual__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = Visual__PrependTransformOrigin_fn;
    type->fp_TryGetResource = (void(*)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*))Visual__TryGetResource_fn;
    type->fp_VisitSubtree = (void(*)(::g::Fuse::Node*, uDelegate*))Visual__VisitSubtree_fn;
    type->fp_get_VisualContext = Visual__get_VisualContext_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Visual__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Visual() :4860
void Visual__ctor_2_fn(Visual* __this)
{
    __this->ctor_2();
}

// private bool get__areChildrenFlat() :6029
void Visual__get__areChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlat();
}

// private void set__areChildrenFlat(bool value) :6030
void Visual__set__areChildrenFlat_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlat(*value);
}

// private bool get__areChildrenFlatCached() :6023
void Visual__get__areChildrenFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlatCached();
}

// private void set__areChildrenFlatCached(bool value) :6024
void Visual__set__areChildrenFlatCached_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlatCached(*value);
}

// private bool get__isLocalFlat() :5993
void Visual__get__isLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlat();
}

// private void set__isLocalFlat(bool value) :5994
void Visual__set__isLocalFlat_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlat(*value);
}

// private bool get__isLocalFlatCached() :5988
void Visual__get__isLocalFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlatCached();
}

// private void set__isLocalFlatCached(bool value) :5989
void Visual__set__isLocalFlatCached_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlatCached(*value);
}

// protected virtual float2 get_AbsoluteViewportOrigin() :6617
void Visual__get_AbsoluteViewportOrigin_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->AbsoluteViewportOrigin(), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_AbsoluteZoom() :6428
void Visual__get_AbsoluteZoom_fn(Visual* __this, float* __retval)
{
    *__retval = __this->AbsoluteZoom();
}

// public void Add(Fuse.Node item) :5086
void Visual__Add1_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->Add1(item);
}

// public void AddDrawCost(double cost) :7387
void Visual__AddDrawCost_fn(Visual* __this, double* cost)
{
    __this->AddDrawCost(*cost);
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :5297
void Visual__AddEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->AddEventHandler(ph, *ne, handler);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) :6730
void Visual__AddParameterChangedListener_fn(Visual* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->AddParameterChangedListener(func);
}

// internal void AdjustMarginBoxPosition(float2 position) :6602
void Visual__AdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
    __this->AdjustMarginBoxPosition(*position);
}

// internal bool get_AreChildrenFlat() :6036
void Visual__get_AreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->AreChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :6569
void Visual__ArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ArrangeMarginBox(*position, *lp);
}

// private static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) :7725
void Visual__AssignZOrder_fn(uObject* nodes)
{
    Visual::AssignZOrder(nodes);
}

// public void BeginInteraction(object id, Uno.Action cancelled) :5815
void Visual__BeginInteraction_fn(Visual* __this, uObject* id, uDelegate* cancelled)
{
    __this->BeginInteraction(id, cancelled);
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action then]) :4896
void Visual__BeginRemoveChild_fn(Visual* __this, ::g::Fuse::Node* n, uDelegate* then)
{
    __this->BeginRemoveChild(n, then);
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action then]) :4863
void Visual__BeginRemoveVisual_fn(Visual* __this, Visual* child, uDelegate* then)
{
    __this->BeginRemoveVisual(child, then);
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) :6896
void Visual__bringIntoView_fn(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    Visual::bringIntoView(c, n, args);
}

// public void BringIntoView() :6638
void Visual__BringIntoView_fn(Visual* __this)
{
    __this->BringIntoView();
}

// public void BringToFront(Fuse.Visual item) :7675
void Visual__BringToFront_fn(Visual* __this, Visual* item)
{
    __this->BringToFront(item);
}

// internal bool CalcAreChildrenFlat() :6047
void Visual__CalcAreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->CalcAreChildrenFlat();
}

// internal bool CalcIsLocalFlat() :6011
void Visual__CalcIsLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->CalcIsLocalFlat();
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() :7310
void Visual__CalcRenderBoundsInParentSpace_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBoundsInParentSpace();
}

// private Fuse.FastMatrix CalcWorldTransform() :7186
void Visual__CalcWorldTransform_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->CalcWorldTransform();
}

// internal virtual bool get_CanAdjustMarginBox() :6607
void Visual__get_CanAdjustMarginBox_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) :5847
void Visual__CancelInteractions_fn(Visual* __this, int* how)
{
    __this->CancelInteractions(*how);
}

// internal void CancelPendingRemove() :4918
void Visual__CancelPendingRemove_fn(Visual* __this)
{
    __this->CancelPendingRemove();
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :4999
void Visual__get_Children_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// private void Clear(Fuse.FastProperty1 p) :5407
void Visual__Clear_fn(Visual* __this, int* p)
{
    __this->Clear(*p);
}

// private void Clear(Fuse.FastProperty2 p) :5559
void Visual__Clear1_fn(Visual* __this, int* p)
{
    __this->Clear1(*p);
}

// internal void ClearBit(Fuse.FastProperty1 p) :5423
void Visual__ClearBit_fn(Visual* __this, int* p)
{
    __this->ClearBit(*p);
}

// internal void ClearBit(Fuse.FastProperty2 p) :5575
void Visual__ClearBit1_fn(Visual* __this, int* p)
{
    __this->ClearBit1(*p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) :5284
void Visual__ClearBit2_fn(Visual* __this, int* nb)
{
    __this->ClearBit2(*nb);
}

// internal void ConcludePendingRemove() :4926
void Visual__ConcludePendingRemove_fn(Visual* __this)
{
    __this->ConcludePendingRemove();
}

// public double get_DrawCost() :7385
void Visual__get_DrawCost_fn(Visual* __this, double* __retval)
{
    *__retval = __this->DrawCost();
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) :5229
void Visual__DrawLocalRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->DrawLocalRect(dc, *rect, *lineWidth, *color, *localToClipTransform);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) :5234
void Visual__DrawLocalSelectionRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect)
{
    __this->DrawLocalSelectionRect(dc, *rect);
}

// public virtual void DrawSelection(Fuse.DrawContext dc) :5244
void Visual__DrawSelection_fn(Visual* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, uPtr(__this->LocalRenderBounds())->FlatRect());
}

// private void EmitZOrderChanged() :7803
void Visual__EmitZOrderChanged_fn(Visual* __this)
{
    __this->EmitZOrderChanged();
}

// public void EndInteraction(object id) :5824
void Visual__EndInteraction_fn(Visual* __this, uObject* id)
{
    __this->EndInteraction(id);
}

// internal void EnsureSortedZOrder() :7752
void Visual__EnsureSortedZOrder_fn(Visual* __this)
{
    __this->EnsureSortedZOrder();
}

// private void EnsureZOrder() :7768
void Visual__EnsureZOrder_fn(Visual* __this)
{
    __this->EnsureZOrder();
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) :5470
void Visual__Find_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty1Link1** __retval)
{
    *__retval = __this->Find(__type, *p);
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) :5622
void Visual__Find1_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty2Link1** __retval)
{
    *__retval = __this->Find1(__type, *p);
}

// public T FindByType<T>() :7472
void Visual__FindByType_fn(Visual* __this, uType* __type, Visual** __retval)
{
    *__retval = __this->FindByType(__type);
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) :5457
void Visual__FindPrevious_fn(Visual* __this, int* p, ::g::Fuse::FastProperty1Link** __retval)
{
    *__retval = __this->FindPrevious(*p);
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) :5609
void Visual__FindPrevious1_fn(Visual* __this, int* p, ::g::Fuse::FastProperty2Link** __retval)
{
    *__retval = __this->FindPrevious1(*p);
}

// public Uno.UX.Template FindTemplate(string key) :6990
void Visual__FindTemplate_fn(Visual* __this, uString* key, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->FindTemplate(key);
}

// public Fuse.IViewport FindViewport() :7511
void Visual__FindViewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->FindViewport();
}

// public T FirstChild<T>() :4969
void Visual__FirstChild_fn(Visual* __this, uType* __type, ::g::Fuse::Node** __retval)
{
    *__retval = __this->FirstChild(__type);
}

// public Fuse.Visual get_FirstVisualChild() :7605
void Visual__get_FirstVisualChild_fn(Visual* __this, Visual** __retval)
{
    *__retval = __this->FirstVisualChild();
}

// internal T Get<T>(Fuse.FastProperty1 p, T defaultValue) :5388
void Visual__Get_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value()), void();
    else
        return __retval.Store(__type->U(0), defaultValue), void();
}

// internal T Get<T>(Fuse.FastProperty2 p, T defaultValue) :5540
void Visual__Get1_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit1(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value()), void();
    else
        return __retval.Store(__type->U(0), defaultValue), void();
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) :5708
void Visual__GetHitWindowPoint_fn(Visual* __this, ::g::Uno::Float2* windowPoint, Visual** __retval)
{
    *__retval = __this->GetHitWindowPoint(*windowPoint);
}

// public virtual float2 GetMarginSize(Fuse.LayoutParams lp) :6271
void Visual__GetMarginSize_fn(Visual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public T GetNearestAncestorOfType<T>() :7478
void Visual__GetNearestAncestorOfType_fn(Visual* __this, uType* __type, Visual** __retval)
{
    *__retval = __this->GetNearestAncestorOfType(__type);
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) :6884
void Visual__getParameterProperty_fn(Visual* v, ::g::Uno::UX::Property1** __retval)
{
    *__retval = Visual::getParameterProperty(v);
}

// public float4x4 GetTransformTo(Fuse.Visual other) :7198
void Visual__GetTransformTo_fn(Visual* __this, Visual* other, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformTo(other);
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) :7227
void Visual__GetTransformToAncestor_fn(Visual* __this, Visual* ancestor, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformToAncestor(ancestor);
}

// public Fuse.Visual GetZOrderChild(int index) :7654
void Visual__GetZOrderChild_fn(Visual* __this, int* index, Visual** __retval)
{
    *__retval = __this->GetZOrderChild(*index);
}

// internal bool HasBit(Fuse.FastProperty1 p) :5418
void Visual__HasBit_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit(*p);
}

// internal bool HasBit(Fuse.FastProperty2 p) :5570
void Visual__HasBit1_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit1(*p);
}

// private bool HasBit(Fuse.Visual.VisualBits nb) :5282
void Visual__HasBit2_fn(Visual* __this, int* nb, bool* __retval)
{
    *__retval = __this->HasBit2(*nb);
}

// public bool get_HasChildren() :4960
void Visual__get_HasChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// private bool get_HasExplicitTransforms() :7038
void Visual__get_HasExplicitTransforms_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasExplicitTransforms();
}

// internal bool get_HasMarginBox() :6547
void Visual__get_HasMarginBox_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasMarginBox();
}

// public bool get_HasPendingRemove() :4935
void Visual__get_HasPendingRemove_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasPendingRemove();
}

// private bool get_HasResources() :6840
void Visual__get_HasResources_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public bool get_HasVisualChildren() :7601
void Visual__get_HasVisualChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasVisualChildren();
}

// public void HitTest(Fuse.HitTestContext htc) :5665
void Visual__HitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->HitTest(htc);
}

// public Fuse.VisualBounds get_HitTestBounds() :5744
void Visual__get_HitTestBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->HitTestBounds();
}

// protected virtual Fuse.VisualBounds get_HitTestChildrenBounds() :5773
void Visual__get_HitTestChildrenBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    ::g::Fuse::VisualBounds* nb = ::g::Fuse::VisualBounds::Empty();

    for (int i = 0; i < __this->ZOrderChildCount(); ++i)
    {
        Visual* n = __this->GetZOrderChild(i);
        nb = uPtr(nb)->MergeChild(n, uPtr(n)->HitTestBounds());
    }

    return *__retval = nb, void();
}

// protected virtual Fuse.VisualBounds get_HitTestLocalBounds() :5765
void Visual__get_HitTestLocalBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// internal Fuse.Visual.HitTestTransformMode get_HitTestTransform() :5657
void Visual__get_HitTestTransform_fn(Visual* __this, int* __retval)
{
    *__retval = __this->HitTestTransform();
}

// protected float2 IfSnap(float2 p) :6395
void Visual__IfSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnap(*p);
}

// protected float2 IfSnapDown(float2 p) :6420
void Visual__IfSnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapDown(*p);
}

// protected float2 IfSnapUp(float2 p) :6400
void Visual__IfSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapUp(*p);
}

// public void Insert(int index, Fuse.Node item) :5109
void Visual__Insert1_fn(Visual* __this, int* index, ::g::Fuse::Node* item)
{
    __this->Insert1(*index, item);
}

// private void Insert<T>(Fuse.FastProperty1 p, T value) :5439
void Visual__Insert2_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty1Link<T>*/),
    };
    ::g::Fuse::FastProperty1Link1* ret29;
    int p_ = *p;
    ::g::Fuse::FastProperty1Link1* nl = (::g::Fuse::FastProperty1Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret29), ret29);

    if (__this->_fastProperties1 == NULL)
        __this->_fastProperties1 = nl;
    else
    {
        ::g::Fuse::FastProperty1Link* last = __this->_fastProperties1;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit(p_);
}

// private void Insert<T>(Fuse.FastProperty2 p, T value) :5591
void Visual__Insert3_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty2Link<T>*/),
    };
    ::g::Fuse::FastProperty2Link1* ret30;
    int p_ = *p;
    ::g::Fuse::FastProperty2Link1* nl = (::g::Fuse::FastProperty2Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret30), ret30);

    if (__this->_fastProperties2 == NULL)
        __this->_fastProperties2 = nl;
    else
    {
        ::g::Fuse::FastProperty2Link* last = __this->_fastProperties2;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit2(p_);
}

// private void InsertCleanup(Fuse.Node item) :5116
void Visual__InsertCleanup_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->InsertCleanup(item);
}

// internal void InsertNodes(int index, Uno.Collections.IEnumerator<Fuse.Node> items) :5128
void Visual__InsertNodes_fn(Visual* __this, int* index, uObject* items)
{
    __this->InsertNodes(*index, items);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() :7152
void Visual__get_InternLocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->InternLocalTransformInternal();
}

// internal float2 InternSnap(float2 p) :6388
void Visual__InternSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnap(*p);
}

// internal float2 InternSnapUp(float2 p) :6407
void Visual__InternSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnapUp(*p);
}

// internal void InvalidateFlat() :5975
void Visual__InvalidateFlat_fn(Visual* __this)
{
    __this->InvalidateFlat();
}

// protected void InvalidateHitTestBounds() :5729
void Visual__InvalidateHitTestBounds_fn(Visual* __this)
{
    __this->InvalidateHitTestBounds();
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) :6301
void Visual__InvalidateLayout_fn(Visual* __this, int* reason)
{
    __this->InvalidateLayout(*reason);
}

// protected virtual void InvalidateLocalTransform() :7060
void Visual__InvalidateLocalTransform_fn(Visual* __this)
{
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
    __this->InvalidateWorldTransform();
}

// protected void InvalidateRenderBounds() :7289
void Visual__InvalidateRenderBounds_fn(Visual* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateVisual() :7546
void Visual__InvalidateVisual_fn(Visual* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :7566
void Visual__InvalidateVisualComposition_fn(Visual* __this)
{
    __this->InvalidateVisualComposition();
}

// private void InvalidateWorldTransform() :7069
void Visual__InvalidateWorldTransform_fn(Visual* __this)
{
    __this->InvalidateWorldTransform();
}

// private void InvalidateZOrder() :7809
void Visual__InvalidateZOrder_fn(Visual* __this)
{
    __this->InvalidateZOrder();
}

// private void InvokeEventHandler(object obj, object args) :5291
void Visual__InvokeEventHandler_fn(Visual* __this, uObject* obj, uObject* args)
{
    __this->InvokeEventHandler(obj, args);
}

// public bool get_IsContextEnabled() :5937
void Visual__get_IsContextEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsContextEnabled();
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) :5894
void Visual__add_IsContextEnabledChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsContextEnabledChanged(value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) :5895
void Visual__remove_IsContextEnabledChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsContextEnabledChanged(value);
}

// public bool get_IsEnabled() :5910
void Visual__get_IsEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :5911
void Visual__set_IsEnabled_fn(Visual* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) :5805
void Visual__add_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsInteractingChanged(value);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) :5805
void Visual__remove_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsInteractingChanged(value);
}

// internal virtual bool get_IsLayoutRoot() :6292
void Visual__get_IsLayoutRoot_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// internal bool get_IsLocalFlat() :6000
void Visual__get_IsLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsLocalFlat();
}

// public virtual bool get_IsLocalVisible() :6098
void Visual__get_IsLocalVisible_fn(Visual* __this, bool* __retval)
{
    return *__retval = true, void();
}

// protected virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :6382
void Visual__IsMarginBoxDependent_fn(Visual* __this, Visual* child, int* __retval)
{
    return *__retval = 2, void();
}

// public bool get_IsVisible() :6092
void Visual__get_IsVisible_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void add_IsVisibleChanged(Uno.EventHandler value) :6081
void Visual__add_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsVisibleChanged(value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) :6082
void Visual__remove_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsVisibleChanged(value);
}

// public Fuse.Layer get_Layer() :6230
void Visual__get_Layer_fn(Visual* __this, int* __retval)
{
    *__retval = __this->Layer();
}

// public void set_Layer(Fuse.Layer value) :6237
void Visual__set_Layer_fn(Visual* __this, int* value)
{
    __this->Layer(*value);
}

// public Fuse.LayoutRole get_LayoutRole() :6252
void Visual__get_LayoutRole_fn(Visual* __this, int* __retval)
{
    *__retval = __this->LayoutRole();
}

// public void set_LayoutRole(Fuse.LayoutRole value) :6264
void Visual__set_LayoutRole_fn(Visual* __this, int* value)
{
    __this->LayoutRole(*value);
}

// public virtual Fuse.VisualBounds get_LocalRenderBounds() :7278
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Infinite(), void();
}

// public float4x4 get_LocalTransform() :7146
void Visual__get_LocalTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransform();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() :7156
void Visual__get_LocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInternal();
}

// protected float4x4 get_LocalTransformInverse() :7170
void Visual__get_LocalTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransformInverse();
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() :7175
void Visual__get_LocalTransformInverseInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInverseInternal();
}

// internal float2 get_MarginBoxPosition() :6600
void Visual__get_MarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MarginBoxPosition();
}

// private void OnAdded(Fuse.Node b) :5038
void Visual__OnAdded_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnAdded(b);
}

// internal virtual void OnAdjustMarginBoxPosition(float2 position) :6608
void Visual__OnAdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
}

// protected virtual float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :6558
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    for (int i = 0; i < __this->ZOrderChildCount(); ++i)
    {
        ::g::Uno::Float2 msz = uPtr(__this->GetZOrderChild(i))->ArrangeMarginBox(position_, lp_);
        sz = ::g::Uno::Math::Max3(sz, msz);
    }

    return *__retval = sz, void();
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) :4907
void Visual__OnBeginRemoveVisual_fn(Visual* __this, ::g::Fuse::PendingRemoveVisual* args)
{
    __this->OnBeginRemoveVisual(args);
}

// protected internal void OnBringIntoView(Fuse.Visual elm) :6629
void Visual__OnBringIntoView_fn(Visual* __this, Visual* elm)
{
    __this->OnBringIntoView(elm);
}

// protected virtual void OnChildAdded(Fuse.Node elm) :5004
void Visual__OnChildAdded_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    ::g::Fuse::Node* ret35;

    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret35), ret35);
            uObject* obs = uAs<uObject*>(n, ::TYPES[141/*Fuse.IParentObserver*/]);

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildAddedWhileRooted(uInterface(uPtr(obs), ::TYPES[141/*Fuse.IParentObserver*/]), elm);
        }

    if (uIs(elm, ::TYPES[141/*Fuse.IParentObserver*/]))
        __this->_observerCount++;
}

// protected virtual void OnChildRemoved(Fuse.Node elm) :5020
void Visual__OnChildRemoved_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    ::g::Fuse::Node* ret36;

    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret36), ret36);
            uObject* obs = uAs<uObject*>(n, ::TYPES[141/*Fuse.IParentObserver*/]);

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildRemovedWhileRooted(uInterface(uPtr(obs), ::TYPES[141/*Fuse.IParentObserver*/]), elm);
        }

    if (uIs(elm, ::TYPES[141/*Fuse.IParentObserver*/]))
        __this->_observerCount--;
}

// protected virtual void OnHitTest(Fuse.HitTestContext htc) :5698
void Visual__OnHitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    Visual* ret37;

    if (__this->HasVisualChildren())
    {
        __this->EnsureSortedZOrder();

        for (int i = uPtr(__this->ZOrder())->Count() - 1; i >= 0; --i)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->ZOrder()), uCRef<int>(i), &ret37), ret37))->HitTest(htc);
    }
}

// private void OnInteractionsChanged() :5836
void Visual__OnInteractionsChanged_fn(Visual* __this)
{
    __this->OnInteractionsChanged();
}

// private void OnInvalidateChildZOffset(Fuse.Visual child) :7777
void Visual__OnInvalidateChildZOffset_fn(Visual* __this, Visual* child)
{
    __this->OnInvalidateChildZOffset(child);
}

// protected virtual void OnInvalidateLayout() :6276
void Visual__OnInvalidateLayout_fn(Visual* __this)
{
}

// protected virtual bool OnInvalidateRenderBounds() :7303
void Visual__OnInvalidateRenderBounds_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected virtual void OnInvalidateVisual() :7558
void Visual__OnInvalidateVisual_fn(Visual* __this)
{
}

// protected virtual void OnInvalidateVisualComposition() :7577
void Visual__OnInvalidateVisualComposition_fn(Visual* __this)
{
}

// protected void OnInvalidateWorldTransform() :7090
void Visual__OnInvalidateWorldTransform_fn(Visual* __this)
{
    __this->OnInvalidateWorldTransform();
}

// protected virtual void OnIsContextEnabledChanged() :5954
void Visual__OnIsContextEnabledChanged_fn(Visual* __this)
{
    __this->RaiseEvent(Visual::_isContextEnabledChangedHandle(), 4);
    __this->InvalidateHitTestBounds();
    __this->InvalidateVisual();
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) :5922
void Visual__OnIsEnabledChanged_fn(Visual* __this, uObject* origin)
{
    __this->OnIsEnabledChanged(origin);
}

// protected virtual void OnIsVisibleChanged() :6122
void Visual__OnIsVisibleChanged_fn(Visual* __this)
{
    if (__this->IsVisible())
        __this->InvalidateVisual();

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->InvalidateVisual();

    __this->RaiseEvent(Visual::_isVisibleChangedHandle(), 5);
    __this->InvalidateHitTestBounds();
}

// protected void OnLocalVisibleChanged() :6101
void Visual__OnLocalVisibleChanged_fn(Visual* __this)
{
    __this->OnLocalVisibleChanged();
}

// private void OnMatrixChanged(Fuse.Transform t) :7055
void Visual__OnMatrixChanged_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnMatrixChanged(t);
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) :6922
void Visual__onParameterChanged_fn(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    Visual::onParameterChanged(c, v, args);
}

// private void OnParameterChanged() :6747
void Visual__OnParameterChanged_fn(Visual* __this)
{
    __this->OnParameterChanged();
}

// public virtual void OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :7372
void Visual__OnPropertyChanged2_fn(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
}

// private void OnRemoved(Fuse.Node b) :5050
void Visual__OnRemoved_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) :6843
void Visual__OnResourceChanged_fn(Visual* __this, ::g::Uno::UX::Resource* res)
{
    __this->OnResourceChanged(res);
}

// protected override void OnRooted() :7408
void Visual__OnRooted_fn(Visual* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->UpdateIsContextEnabledCache();
    __this->UpdateIsVisibleCache();
    __this->UpdateContextSnapToPixelsCache();
    __this->OnRootedPreChildren();

    if (__this->HasChildren())
    {
        uArray* children = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[142/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], __this->Children());

        for (int i = 0; i < uPtr(children)->Length(); i++)
            uPtr(uPtr(children)->Strong< ::g::Fuse::Node*>(i))->RootInternal(__this);
    }

    __this->_layoutDirty = 0;
    __this->_hasMarginBox = false;
    __this->InvalidateLayout(2);
    __this->_ambLayoutParams.Reset();
    __this->_viewport = __this->FindViewport();
}

// protected internal virtual void OnRootedPreChildren() :7437
void Visual__OnRootedPreChildren_fn(Visual* __this)
{
}

// private void OnTemplatesChanged(Uno.UX.Template t) :6978
void Visual__OnTemplatesChanged_fn(Visual* __this, ::g::Uno::UX::Template* t)
{
    __this->OnTemplatesChanged(t);
}

// private void OnTransformAdded(Fuse.Transform t) :7041
void Visual__OnTransformAdded_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformAdded(t);
}

// private void OnTransformRemoved(Fuse.Transform t) :7048
void Visual__OnTransformRemoved_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformRemoved(t);
}

// protected override void OnUnrooted() :7439
void Visual__OnUnrooted_fn(Visual* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_viewport = NULL;
    __this->ResetParameterListeners();

    if (::g::Fuse::Input::Focus::FocusedVisual() == __this)
        ::g::Fuse::Input::Focus::Release();

    __this->ConcludePendingRemove();

    if (__this->HasChildren())
    {
        uArray* children = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[142/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], __this->Children());

        for (int i = 0; i < uPtr(children)->Length(); i++)
            uPtr(uPtr(children)->Strong< ::g::Fuse::Node*>(i))->UnrootInternal();
    }

    __this->ConcludePendingRemove();
}

// private void OnVisualAdded(Fuse.Visual v) :5062
void Visual__OnVisualAdded_fn(Visual* __this, Visual* v)
{
    __this->OnVisualAdded(v);
}

// private void OnVisualRemoved(Fuse.Visual v) :5070
void Visual__OnVisualRemoved_fn(Visual* __this, Visual* v)
{
    __this->OnVisualRemoved(v);
}

// protected virtual void OnZOrderInvalidated() :7801
void Visual__OnZOrderInvalidated_fn(Visual* __this)
{
}

// public string get_Parameter() :6706
void Visual__get_Parameter_fn(Visual* __this, uString** __retval)
{
    *__retval = __this->Parameter();
}

// public void set_Parameter(string value) :6707
void Visual__set_Parameter_fn(Visual* __this, uString* value)
{
    __this->Parameter(value);
}

// public void add_ParameterChanged(Uno.EventHandler value) :6723
void Visual__add_ParameterChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_ParameterChanged(value);
}

// public void remove_ParameterChanged(Uno.EventHandler value) :6724
void Visual__remove_ParameterChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_ParameterChanged(value);
}

// internal Fuse.FastMatrix get_ParentWorldTransformInternal() :7140
void Visual__get_ParentWorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->ParentWorldTransformInternal();
}

// protected void PerformLayout() :6476
void Visual__PerformLayout_fn(Visual* __this)
{
    __this->PerformLayout();
}

// protected void PerformLayout(float2 clientSize) :6484
void Visual__PerformLayout1_fn(Visual* __this, ::g::Uno::Float2* clientSize)
{
    __this->PerformLayout1(*clientSize);
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) :7246
void Visual__PrependExplicitTransforms_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependExplicitTransforms(m);
}

// protected virtual void PrependImplicitTransform(Fuse.FastMatrix m) :7031
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// protected virtual void PrependInverseTransformOrigin(Fuse.FastMatrix m) :7033
void Visual__PrependInverseTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void PrependLocalTransform(Fuse.FastMatrix m) :7240
void Visual__PrependLocalTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependLocalTransform(m);
}

// protected virtual void PrependTransformOrigin(Fuse.FastMatrix m) :7032
void Visual__PrependTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) :5286
void Visual__RaiseEvent_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne)
{
    __this->RaiseEvent(ph, *ne);
}

// private void RearrangeMarginBox() :6549
void Visual__RearrangeMarginBox_fn(Visual* __this)
{
    __this->RearrangeMarginBox();
}

// public bool Remove(Fuse.Node item) :5091
void Visual__Remove1_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    *__retval = __this->Remove1(item);
}

// public void RemoveAllChildren<T>() :4980
void Visual__RemoveAllChildren_fn(Visual* __this, uType* __type)
{
    __this->RemoveAllChildren(__type);
}

// public void RemoveDrawCost(double cost) :7397
void Visual__RemoveDrawCost_fn(Visual* __this, double* cost)
{
    __this->RemoveDrawCost(*cost);
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :5303
void Visual__RemoveEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->RemoveEventHandler(ph, *ne, handler);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :6627
void Visual__add_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->add_RequestBringIntoView(value);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :6627
void Visual__remove_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->remove_RequestBringIntoView(value);
}

// private void ResetParameterListeners() :6763
void Visual__ResetParameterListeners_fn(Visual* __this)
{
    __this->ResetParameterListeners();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :6788
void Visual__get_Resources_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// public void SendToBack(Fuse.Visual item) :7696
void Visual__SendToBack_fn(Visual* __this, Visual* item)
{
    __this->SendToBack(item);
}

// internal void Set<T>(Fuse.FastProperty1 p, T value, T defaultValue) :5394
void Visual__Set_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
        __type->Precalced(1/*Fuse.Visual.Insert<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear(p_);
        else
            uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value() = value;
    }
    else
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert2_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void Set<T>(Fuse.FastProperty2 p, T value, T defaultValue) :5546
void Visual__Set1_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
        __type->Precalced(1/*Fuse.Visual.Insert<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit1(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear1(p_);
        else
            uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value() = value;
    }
    else
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert3_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void SetBit(Fuse.FastProperty1 p) :5428
void Visual__SetBit_fn(Visual* __this, int* p)
{
    __this->SetBit(*p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) :5433
void Visual__SetBit1_fn(Visual* __this, int* p, bool* value)
{
    __this->SetBit1(*p, *value);
}

// internal void SetBit(Fuse.FastProperty2 p) :5580
void Visual__SetBit2_fn(Visual* __this, int* p)
{
    __this->SetBit2(*p);
}

// private void SetBit(Fuse.Visual.VisualBits nb) :5283
void Visual__SetBit4_fn(Visual* __this, int* nb)
{
    __this->SetBit4(*nb);
}

// protected float2 Snap(float2 p) :6389
void Visual__Snap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 SnapDown(float2 p) :6414
void Visual__SnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapDown(*p);
}

// public bool get_SnapToPixels() :6442
void Visual__get_SnapToPixels_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// public void set_SnapToPixels(bool value) :6446
void Visual__set_SnapToPixels_fn(Visual* __this, bool* value)
{
    __this->SnapToPixels(*value);
}

// protected float2 SnapUp(float2 p) :6408
void Visual__SnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// private void SoftInvalidateZOrder([bool force]) :7787
void Visual__SoftInvalidateZOrder_fn(Visual* __this, bool* force)
{
    __this->SoftInvalidateZOrder(*force);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :6972
void Visual__get_Templates_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public override sealed bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :6816
void Visual__TryGetResource_fn(Visual* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    ::g::Uno::UX::Resource* ret46;
    bool ret47;

    if (__this->HasResources())
    {
        uObject* resources = __this->Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[89/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[90/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret46), ret46);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret47, 1, (uObject*)uPtr(r)->Value()), ret47)))
            {
                *resource = uPtr(r)->Value();
                return *__retval = true, void();
            }
        }
    }

    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    return *__retval = ::g::Uno::UX::Resource::TryFindGlobal(key, acceptor, resource), void();
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) :7495
void Visual__TryParentToLocal_fn(Visual* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* result, bool* __retval)
{
    *__retval = __this->TryParentToLocal(*parentPoint, result);
}

// private void Uno.Collections.ICollection<Fuse.Node>.Clear() :5079
void Visual__UnoCollectionsICollectionFuseNodeClear_fn(Visual* __this)
{
    ::g::Fuse::Node* ret48;

    for (uObject* enum1 = (uObject*)__this->_children.GetEnumerator(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/]); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[28/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[138/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret48), ret48);
        __this->OnRemoved(child);
    }

    __this->_children.Clear(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/]);
}

// private bool Uno.Collections.ICollection<Fuse.Node>.Contains(Fuse.Node item) :5102
void Visual__UnoCollectionsICollectionFuseNodeContains_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    return *__retval = __this->_children.Contains(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], item), void();
}

// private int Uno.Collections.ICollection<Fuse.Node>.get_Count() :5107
void Visual__UnoCollectionsICollectionFuseNodeget_Count_fn(Visual* __this, int* __retval)
{
    return *__retval = __this->_children.Count(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/]), void();
}

// private Uno.Collections.IEnumerator<Fuse.Node> Uno.Collections.IEnumerable<Fuse.Node>.GetEnumerator() :5166
void Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn(Visual* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this->_children.GetEnumerator(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/]), void();
}

// private Fuse.Node Uno.Collections.IList<Fuse.Node>.get_Item(int index) :5164
void Visual__UnoCollectionsIListFuseNodeget_Item_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    return *__retval = (::g::Fuse::Node*)__this->_children.Item(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], index_), void();
}

// private void Uno.Collections.IList<Fuse.Node>.RemoveAt(int index) :5157
void Visual__UnoCollectionsIListFuseNodeRemoveAt_fn(Visual* __this, int* index)
{
    int index_ = *index;
    ::g::Fuse::Node* b = (::g::Fuse::Node*)__this->_children.Item(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], index_);
    __this->_children.RemoveAt(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], index_);
    __this->OnRemoved(b);
}

// private void UpdateContextSnapToPixelsCache() :6458
void Visual__UpdateContextSnapToPixelsCache_fn(Visual* __this)
{
    __this->UpdateContextSnapToPixelsCache();
}

// private void UpdateIsContextEnabledCache() :5940
void Visual__UpdateIsContextEnabledCache_fn(Visual* __this)
{
    __this->UpdateIsContextEnabledCache();
}

// private void UpdateIsVisibleCache() :6106
void Visual__UpdateIsVisibleCache_fn(Visual* __this)
{
    __this->UpdateIsVisibleCache();
}

// private void UpdateLayout() :6518
void Visual__UpdateLayout_fn(Visual* __this)
{
    __this->UpdateLayout();
}

// public int get_ValidFrameCount() :7583
void Visual__get_ValidFrameCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ValidFrameCount();
}

// public Fuse.IViewport get_Viewport() :7527
void Visual__get_Viewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public override sealed void VisitSubtree(Uno.Action<Fuse.Node> action) :7465
void Visual__VisitSubtree_fn(Visual* __this, uDelegate* action)
{
    ::g::Fuse::Node* ret51;
    uPtr(action)->InvokeVoid(__this);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret51), ret51))->VisitSubtree(action);
}

// public virtual Fuse.VisualContext get_VisualContext() :7359
void Visual__get_VisualContext_fn(Visual* __this, int* __retval)
{
    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->VisualContext(), void();
    else
        return *__retval = 0, void();
}

// public float2 WindowToLocal(float2 windowCoord) :7260
void Visual__WindowToLocal_fn(Visual* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToLocal(*windowCoord);
}

// public float4x4 get_WorldTransform() :7111
void Visual__get_WorldTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransform();
}

// private Fuse.FastMatrix get_WorldTransformInternal() :7130
void Visual__get_WorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->WorldTransformInternal();
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) :7086
void Visual__add_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->add_WorldTransformInvalidated(value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) :7087
void Visual__remove_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->remove_WorldTransformInvalidated(value);
}

// public float4x4 get_WorldTransformInverse() :7098
void Visual__get_WorldTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransformInverse();
}

// public float get_ZOffset() :6657
void Visual__get_ZOffset_fn(Visual* __this, float* __retval)
{
    *__retval = __this->ZOffset();
}

// public void set_ZOffset(float value) :6658
void Visual__set_ZOffset_fn(Visual* __this, float* value)
{
    __this->ZOffset(*value);
}

// internal Uno.Collections.List<Fuse.Visual> get_ZOrder() :7662
void Visual__get_ZOrder_fn(Visual* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->ZOrder();
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) :7782
void Visual__add_ZOrderChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_ZOrderChanged(value);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) :7782
void Visual__remove_ZOrderChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_ZOrderChanged(value);
}

// public int get_ZOrderChildCount() :7647
void Visual__get_ZOrderChildCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ZOrderChildCount();
}

// private int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) :7714
void Visual__ZOrderComparator_fn(Visual* __this, Visual* a, Visual* b, int* __retval)
{
    *__retval = __this->ZOrderComparator(a, b);
}

uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isContextEnabledChangedHandle_;
::g::Uno::UX::Selector Visual::_isEnabledName_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isVisibleChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layerProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layoutRoleProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_parameterChangedHandle_;
bool Visual::_performingLayout_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_resourcesHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_worldTransformInvalidatedHandle_;
::g::Uno::UX::Selector Visual::ParameterName_;

// protected generated Visual() [instance] :4860
void Visual::ctor_2()
{
    _fastPropertyBits1 = 100663299;
    _isVisibleCached = true;
    _ambLayoutParams = ::g::Fuse::LayoutParams__CreateEmpty();
    _zOffset = 0.0f;
    _lastInvalidate = -1;
    ctor_1();
}

// private bool get__areChildrenFlat() [instance] :6029
bool Visual::_areChildrenFlat()
{
    return HasBit(32);
}

// private void set__areChildrenFlat(bool value) [instance] :6030
void Visual::_areChildrenFlat(bool value)
{
    SetBit1(32, value);
}

// private bool get__areChildrenFlatCached() [instance] :6023
bool Visual::_areChildrenFlatCached()
{
    return HasBit(16);
}

// private void set__areChildrenFlatCached(bool value) [instance] :6024
void Visual::_areChildrenFlatCached(bool value)
{
    SetBit1(16, value);
}

// private bool get__isLocalFlat() [instance] :5993
bool Visual::_isLocalFlat()
{
    return HasBit(4);
}

// private void set__isLocalFlat(bool value) [instance] :5994
void Visual::_isLocalFlat(bool value)
{
    SetBit1(4, value);
}

// private bool get__isLocalFlatCached() [instance] :5988
bool Visual::_isLocalFlatCached()
{
    return HasBit(8);
}

// private void set__isLocalFlatCached(bool value) [instance] :5989
void Visual::_isLocalFlatCached(bool value)
{
    SetBit1(8, value);
}

// public float get_AbsoluteZoom() [instance] :6428
float Visual::AbsoluteZoom()
{
    uObject* v = Viewport();

    if (v == NULL)
        return 1.0f;

    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(v), ::TYPES[22/*Fuse.ICommonViewport*/]));
}

// public void Add(Fuse.Node item) [instance] :5086
void Visual::Add1(::g::Fuse::Node* item)
{
    Insert1(::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])), item);
}

// public void AddDrawCost(double cost) [instance] :7387
void Visual::AddDrawCost(double cost)
{
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost + cost);
        p = uPtr(p)->Parent();
    }
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :5297
void Visual::AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->AddToList(ph, handler);
    SetBit4(ne);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) [instance] :6730
void Visual::AddParameterChangedListener(::g::Fuse::Scripting::Function* func)
{
    if (_parameterListeners == NULL)
        _parameterListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[121/*Uno.Collections.List<Fuse.Scripting.Function>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_parameterListeners), func);

    if (::g::Uno::String::op_Inequality(_parameter, NULL))
    {
        uObject* so = uAs<uObject*>(this, ::TYPES[122/*Fuse.Scripting.IScriptObject*/]);

        if (so != NULL)
            uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, (uObject*)uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::TYPES[122/*Fuse.Scripting.IScriptObject*/])))->ParseJson(_parameter)));
    }
}

// internal void AdjustMarginBoxPosition(float2 position) [instance] :6602
void Visual::AdjustMarginBoxPosition(::g::Uno::Float2 position)
{
    ArrangeMarginBox(position, _ambLayoutParams);
}

// internal bool get_AreChildrenFlat() [instance] :6036
bool Visual::AreChildrenFlat()
{
    if (_areChildrenFlatCached())
        return _areChildrenFlat();

    _areChildrenFlat(CalcAreChildrenFlat());
    _areChildrenFlatCached(true);
    return _areChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) [instance] :6569
::g::Uno::Float2 Visual::ArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp)
{
    bool same = (HasMarginBox() && (_layoutDirty == 0)) && _ambLayoutParams.IsCompatible(lp);
    ::g::Uno::Float2 marginBox;

    if (same && (::g::Uno::Vector::Distance(position, _ambPosition) < 1e-05f))
        return _ambMargin;
    else if (same && CanAdjustMarginBox())
    {
        marginBox = _ambMargin;
        OnAdjustMarginBoxPosition(position);
    }
    else
        marginBox = OnArrangeMarginBox(position, lp);

    _layoutDirty = 0;
    _ambMargin = marginBox;
    _ambPosition = position;
    _ambLayoutParams = lp.Clone();
    _hasMarginBox = true;
    return marginBox;
}

// public void BeginInteraction(object id, Uno.Action cancelled) [instance] :5815
void Visual::BeginInteraction(uObject* id, uDelegate* cancelled)
{
    Visual__InteractionItem collection2;

    if (_interactions == NULL)
        _interactions = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[124/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>*/]));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_interactions), id, uCRef((collection2 = uDefault<Visual__InteractionItem>(), collection2.Id = id, collection2.Cancelled = cancelled, collection2)));
    OnInteractionsChanged();
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action then]) [instance] :4896
void Visual::BeginRemoveChild(::g::Fuse::Node* n, uDelegate* then)
{
    bool ret11;
    Visual* v = uAs<Visual*>(n, Visual_typeof());

    if (v != NULL)
        BeginRemoveVisual(v, then);
    else
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret11);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid();
    }
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action then]) [instance] :4863
void Visual::BeginRemoveVisual(Visual* child, uDelegate* then)
{
    bool ret12;
    bool ret13;

    if (!IsRootingCompleted())
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret12);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid();

        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret13), ret13))
        return;

    if (uPtr(child)->HasBit(268435456))
        return;

    ::g::Fuse::PendingRemoveVisual* args = ::g::Fuse::PendingRemoveVisual::New1(child, this, then);
    uPtr(child)->OnBeginRemoveVisual(args);

    if (args->HasSubscribers())
    {
        InvalidateLayout(2);
        return;
    }
    else
        uPtr(args)->Remove();
}

// public void BringIntoView() [instance] :6638
void Visual::BringIntoView()
{
    OnBringIntoView(this);
}

// public void BringToFront(Fuse.Visual item) [instance] :7675
void Visual::BringToFront(Visual* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > ret14;

    if (!HasChildren())
        return;

    EnsureZOrder();
    int mx = uPtr(item)->ZOffsetNatural;

    for (::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret14), ret14); enum5.MoveNext(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        Visual* c = enum5.Current(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mx = ::g::Uno::Math::Max8(mx, uPtr(c)->ZOffsetNatural);
    }

    item->ZOffsetNatural = (mx + 1);
    item->ZOffsetFixed = true;
    SoftInvalidateZOrder(false);
}

// internal bool CalcAreChildrenFlat() [instance] :6047
bool Visual::CalcAreChildrenFlat()
{
    for (int i = 0; i < ZOrderChildCount(); ++i)
    {
        Visual* v = GetZOrderChild(i);

        if (!uPtr(v)->AreChildrenFlat() || !uPtr(v)->IsLocalFlat())
            return false;
    }

    return true;
}

// internal bool CalcIsLocalFlat() [instance] :6011
bool Visual::CalcIsLocalFlat()
{
    ::g::Fuse::Node* ret15;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret15), ret15), ::TYPES[125/*Fuse.Transform*/]);

        if ((t != NULL) && !uPtr(t)->IsFlat())
            return false;
    }

    return true;
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() [instance] :7310
::g::Fuse::VisualBounds* Visual::CalcRenderBoundsInParentSpace()
{
    return uPtr(::g::Fuse::VisualBounds::Empty())->MergeChild(this, LocalRenderBounds());
}

// private Fuse.FastMatrix CalcWorldTransform() [instance] :7186
::g::Fuse::FastMatrix* Visual::CalcWorldTransform()
{
    ::g::Fuse::FastMatrix* m = LocalTransformInternal();

    if (Parent() != NULL)
        m = uPtr(m)->Mul(uPtr(Parent())->ParentWorldTransformInternal());

    return m;
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) [instance] :5847
void Visual::CancelInteractions(int how)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> ret16;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret17;
    bool ret18;
    Visual__InteractionItem ret19;

    if (_interactions != NULL)
    {
        ::g::Uno::Collections::List* ids = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[126/*Uno.Collections.List<object>*/]);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_interactions), &ret16), ret16); enum3.MoveNext(::TYPES[127/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, Visual__InteractionItem> i = enum3.Current(::TYPES[127/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>.Enumerator*/]);
            ::g::Uno::Collections::List__Add_fn(uPtr(ids), i.Key(::TYPES[128/*Uno.Collections.KeyValuePair<object, Fuse.Visual.InteractionItem>*/]));
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(ids, &ret17), ret17); enum4.MoveNext(::TYPES[129/*Uno.Collections.List<object>.Enumerator*/]); )
        {
            uObject* id = enum4.Current(::TYPES[129/*Uno.Collections.List<object>.Enumerator*/]);

            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_interactions), id, &ret18), ret18))
            {
                Visual__InteractionItem i1 = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_interactions), id, &ret19), ret19);
                uPtr(i1.Cancelled)->InvokeVoid();
            }
        }
    }

    if (how == 1)

        for (int i2 = 0; i2 < ZOrderChildCount(); ++i2)
            uPtr(GetZOrderChild(i2))->CancelInteractions(how);
}

// internal void CancelPendingRemove() [instance] :4918
void Visual::CancelPendingRemove()
{
    if (HasBit(268435456))
        SetBit1(268435456, false);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :4999
uObject* Visual::Children()
{
    return (uObject*)this;
}

// private void Clear(Fuse.FastProperty1 p) [instance] :5407
void Visual::Clear(int p)
{
    if (HasBit(p))
    {
        ::g::Fuse::FastProperty1Link* k = FindPrevious(p);

        if (k == NULL)
            _fastProperties1 = uPtr(_fastProperties1)->Next;
        else
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit(p);
    }
}

// private void Clear(Fuse.FastProperty2 p) [instance] :5559
void Visual::Clear1(int p)
{
    if (HasBit1(p))
    {
        ::g::Fuse::FastProperty2Link* k = FindPrevious1(p);

        if (k == NULL)
            _fastProperties2 = uPtr(_fastProperties2)->Next;
        else
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit1(p);
    }
}

// internal void ClearBit(Fuse.FastProperty1 p) [instance] :5423
void Visual::ClearBit(int p)
{
    _fastPropertyBits1 = (_fastPropertyBits1 & ~p);
}

// internal void ClearBit(Fuse.FastProperty2 p) [instance] :5575
void Visual::ClearBit1(int p)
{
    _fastPropertyBits2 = (_fastPropertyBits2 ^ p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) [instance] :5284
void Visual::ClearBit2(int nb)
{
    _nodebits = (_nodebits & ~(1 << nb));
}

// internal void ConcludePendingRemove() [instance] :4926
void Visual::ConcludePendingRemove()
{
    bool ret20;

    if (HasBit(268435456))
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]), this, &ret20);
        SetBit1(268435456, false);
    }
}

// public double get_DrawCost() [instance] :7385
double Visual::DrawCost()
{
    return _drawCost;
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) [instance] :5229
void Visual::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform)
{
    uPtr(::g::Fuse::DrawHelpers::Singelton())->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) [instance] :5234
void Visual::DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect)
{
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(this);
    double phase = ::g::Fuse::Time::FrameTime() * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::g::Uno::Math::Sin(phase * 3.1415926535897931)));
    ::g::Uno::Float4 color = ::g::Uno::Float4__New2(0.25f, 0.5f, 0.75f, pulse);
    DrawLocalRect(dc, rect, 4.0f, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), localToClipTransform);
    DrawLocalRect(dc, rect, 2.0f, color, localToClipTransform);
}

// private void EmitZOrderChanged() [instance] :7803
void Visual::EmitZOrderChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        uPtr(ZOrderChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void EndInteraction(object id) [instance] :5824
void Visual::EndInteraction(uObject* id)
{
    bool ret21;

    if (_interactions == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_interactions), id, &ret21);

    if (uPtr(_interactions)->Count() == 0)
        _interactions = NULL;

    OnInteractionsChanged();
}

// internal void EnsureSortedZOrder() [instance] :7752
void Visual::EnsureSortedZOrder()
{
    Visual* ret22;

    if (_sortedZOrder && _nodeZOrders)
        return;

    EnsureZOrder();
    uPtr(ZOrder())->Sort(uDelegate::New(::TYPES[130/*Uno.Comparison<Fuse.Visual>*/], (void*)Visual__ZOrderComparator_fn, this));
    _sortedZOrder = true;
    int firstNonUnderlay;

    for (firstNonUnderlay = 0; firstNonUnderlay < uPtr(ZOrder())->Count(); ++firstNonUnderlay)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(firstNonUnderlay), &ret22), ret22))->Layer() != 0)
            break;

    _firstNonUnderlay = firstNonUnderlay;
}

// private void EnsureZOrder() [instance] :7768
void Visual::EnsureZOrder()
{
    if (!_nodeZOrders)
    {
        Visual::AssignZOrder(Children());
        _nodeZOrders = true;
    }
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) [instance] :5470
::g::Fuse::FastProperty1Link1* Visual::Find(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty1Link<T>*/),
    };
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty1Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) [instance] :5622
::g::Fuse::FastProperty2Link1* Visual::Find1(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty2Link<T>*/),
    };
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty2Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// public T FindByType<T>() [instance] :7472
Visual* Visual::FindByType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Fuse.Visual.GetNearestAncestorOfType<T>*/),
    };

    if (uIs(this, __types[0]))
        return uAs<Visual*>(this, __types[0]);

    return (Visual*)GetNearestAncestorOfType(__types[1]);
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) [instance] :5457
::g::Fuse::FastProperty1Link* Visual::FindPrevious(int p)
{
    ::g::Fuse::FastProperty1Link* pr = NULL;
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) [instance] :5609
::g::Fuse::FastProperty2Link* Visual::FindPrevious1(int p)
{
    ::g::Fuse::FastProperty2Link* pr = NULL;
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// public Uno.UX.Template FindTemplate(string key) [instance] :6990
::g::Uno::UX::Template* Visual::FindTemplate(uString* key)
{
    ::g::Uno::UX::Template* ret23;

    if (_templates == NULL)
        return NULL;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_templates), ::TYPES[133/*Uno.Collections.ICollection<Uno.UX.Template>*/])); (i--) > 0; )
    {
        ::g::Uno::UX::Template* t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_templates), ::TYPES[134/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret23), ret23);

        if (::g::Uno::String::op_Equality(uPtr(t)->Key(), key))
            return t;
    }

    return NULL;
}

// public Fuse.IViewport FindViewport() [instance] :7511
uObject* Visual::FindViewport()
{
    Visual* p = this;

    while (p != NULL)
    {
        uObject* vp = uAs<uObject*>(p, ::TYPES[7/*Fuse.IViewport*/]);

        if (vp != NULL)
            return vp;

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// public T FirstChild<T>() [instance] :4969
::g::Fuse::Node* Visual::FirstChild(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    ::g::Fuse::Node* ret24;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Node* c = uAs< ::g::Fuse::Node*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret24), ret24), __types[0]);

        if (c != NULL)
            return c;
    }

    return NULL;
}

// public Fuse.Visual get_FirstVisualChild() [instance] :7605
Visual* Visual::FirstVisualChild()
{
    if (!HasVisualChildren())
        return NULL;

    return (Visual*)FirstChild(::TYPES[145/*Fuse.Visual.FirstChild<Fuse.Visual>*/]);
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) [instance] :5708
Visual* Visual::GetHitWindowPoint(::g::Uno::Float2 windowPoint)
{
    Visual__HitTestRecord* htr = Visual__HitTestRecord::New1();
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[135/*Fuse.HitTestCallback*/], (void*)Visual__HitTestRecord__HitTestCallback_fn, htr));

    if (Parent() != NULL)
        uPtr(htc)->PushLocalPoint(uPtr(Parent())->WindowToLocal(windowPoint));

    htc->PushWorldRay(::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[7/*Fuse.IViewport*/]), windowPoint));
    HitTest(htc);
    return htr->Visual;
}

// public T GetNearestAncestorOfType<T>() [instance] :7478
Visual* Visual::GetNearestAncestorOfType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    Visual* current = Parent();

    while (current != NULL)
    {
        if (uIs(current, __types[0]))
            return uAs<Visual*>(current, __types[0]);

        current = uPtr(current)->Parent();
    }

    return NULL;
}

// public float4x4 GetTransformTo(Fuse.Visual other) [instance] :7198
::g::Uno::Float4x4 Visual::GetTransformTo(Visual* other)
{
    bool ret25;
    bool ret26;
    ::g::Uno::Collections::HashSet* parents = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[136/*Uno.Collections.HashSet<Fuse.Visual>*/]);
    Visual* q = this;

    while (q != NULL)
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(parents), q, &ret25);
        q = uPtr(q)->Parent();
    }

    Visual* c = other;

    while (c != NULL)
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(parents), c, &ret26), ret26))
            break;

        c = uPtr(c)->Parent();
    }

    if (c == NULL)
        return ::g::Uno::Float4x4__Identity();

    ::g::Uno::Float4x4 thisTo = GetTransformToAncestor(c);
    ::g::Uno::Float4x4 otherTo = uPtr(other)->GetTransformToAncestor(c);
    return ::g::Uno::Matrix::Mul8(thisTo, ::g::Uno::Matrix::Invert2(otherTo));
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) [instance] :7227
::g::Uno::Float4x4 Visual::GetTransformToAncestor(Visual* ancestor)
{
    ::g::Fuse::FastMatrix* m = ::g::Fuse::FastMatrix::Identity();
    Visual* n = this;

    while ((n != NULL) && (n != ancestor))
    {
        m = uPtr(m)->Mul(uPtr(n)->LocalTransformInternal());
        n = uPtr(n)->Parent();
    }

    return uPtr(m)->Matrix();
}

// public Fuse.Visual GetZOrderChild(int index) [instance] :7654
Visual* Visual::GetZOrderChild(int index)
{
    Visual* ret28;
    EnsureSortedZOrder();
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(index), &ret28), ret28);
}

// internal bool HasBit(Fuse.FastProperty1 p) [instance] :5418
bool Visual::HasBit(int p)
{
    return (_fastPropertyBits1 & p) != 0;
}

// internal bool HasBit(Fuse.FastProperty2 p) [instance] :5570
bool Visual::HasBit1(int p)
{
    return (_fastPropertyBits2 & p) != 0;
}

// private bool HasBit(Fuse.Visual.VisualBits nb) [instance] :5282
bool Visual::HasBit2(int nb)
{
    return (_nodebits & (1 << nb)) != 0;
}

// public bool get_HasChildren() [instance] :4960
bool Visual::HasChildren()
{
    return _children.Count(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/]) > 0;
}

// private bool get_HasExplicitTransforms() [instance] :7038
bool Visual::HasExplicitTransforms()
{
    return _transformCount > 0;
}

// internal bool get_HasMarginBox() [instance] :6547
bool Visual::HasMarginBox()
{
    return _hasMarginBox;
}

// public bool get_HasPendingRemove() [instance] :4935
bool Visual::HasPendingRemove()
{
    return HasBit(268435456);
}

// private bool get_HasResources() [instance] :6840
bool Visual::HasResources()
{
    return HasBit2(1);
}

// public bool get_HasVisualChildren() [instance] :7601
bool Visual::HasVisualChildren()
{
    return (_zOrder != NULL) && (uPtr(_zOrder)->Count() > 0);
}

// public void HitTest(Fuse.HitTestContext htc) [instance] :5665
void Visual::HitTest(::g::Fuse::HitTestContext* htc)
{
    if (!IsVisible())
        return;

    ::g::Fuse::VisualBounds* bounds = HitTestBounds();
    ::g::Uno::Float2 localPoint;
    bool hit;

    if (uPtr(bounds)->IsFlat() && (HitTestTransform() == 0))
    {
        if (!TryParentToLocal(uPtr(htc)->LocalPoint(), &localPoint))
            return;

        hit = uPtr(bounds)->ContainsPoint(localPoint);
    }
    else
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[7/*Fuse.IViewport*/]), uPtr(htc)->WindowPoint());
        ::g::Uno::Geometry::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[7/*Fuse.IViewport*/]), Viewport(), world, this);
        localPoint = ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
        hit = uPtr(bounds)->IsFlat() ? uPtr(bounds)->ContainsPoint(localPoint) : uPtr(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
        return;

    ::g::Uno::Float2 old = uPtr(htc)->PushLocalPoint(localPoint);
    OnHitTest(htc);
    htc->PopLocalPoint(old);
}

// public Fuse.VisualBounds get_HitTestBounds() [instance] :5744
::g::Fuse::VisualBounds* Visual::HitTestBounds()
{
    if (_isHitTestBoundsCacheValid)
        return _hitTestBoundsCache;

    ::g::Fuse::VisualBounds* nb = ::g::Fuse::VisualBounds::Empty();

    if (IsContextEnabled() && IsVisible())
    {
        nb = uPtr(nb)->Merge(HitTestLocalBounds(), NULL);
        nb = uPtr(nb)->Merge(HitTestChildrenBounds(), NULL);
    }

    _hitTestBoundsCache = nb;
    _isHitTestBoundsCacheValid = true;
    return nb;
}

// internal Fuse.Visual.HitTestTransformMode get_HitTestTransform() [instance] :5657
int Visual::HitTestTransform()
{
    if (IsLocalFlat())
        return 0;

    return 1;
}

// protected float2 IfSnap(float2 p) [instance] :6395
::g::Uno::Float2 Visual::IfSnap(::g::Uno::Float2 p)
{
    return SnapToPixels() ? Snap(p) : p;
}

// protected float2 IfSnapDown(float2 p) [instance] :6420
::g::Uno::Float2 Visual::IfSnapDown(::g::Uno::Float2 p)
{
    return SnapToPixels() ? SnapDown(p) : p;
}

// protected float2 IfSnapUp(float2 p) [instance] :6400
::g::Uno::Float2 Visual::IfSnapUp(::g::Uno::Float2 p)
{
    return SnapToPixels() ? SnapUp(p) : p;
}

// public void Insert(int index, Fuse.Node item) [instance] :5109
void Visual::Insert1(int index, ::g::Fuse::Node* item)
{
    InsertCleanup(item);
    _children.Insert(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], index, item);
    OnAdded(item);
}

// private void InsertCleanup(Fuse.Node item) [instance] :5116
void Visual::InsertCleanup(::g::Fuse::Node* item)
{
    Visual* v = uAs<Visual*>(item, Visual_typeof());

    if (v != NULL)
        uPtr(v)->ConcludePendingRemove();
}

// internal void InsertNodes(int index, Uno.Collections.IEnumerator<Fuse.Node> items) [instance] :5128
void Visual::InsertNodes(int index, uObject* items)
{
    ::g::Fuse::Node* ret31;
    ::g::Fuse::Node* ret32;
    ::g::Fuse::Node* ret33;

    if ((index < 0) || (index > ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]))))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[90/*"index"*/]));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(items), ::TYPES[28/*Uno.Collections.IEnumerator*/])))
        InsertCleanup((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[138/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret31), ret31));

    bool capture = ::g::Fuse::Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Fuse::Node::ReleaseRooting(capture);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(items), ::TYPES[28/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[28/*Uno.Collections.IEnumerator*/])))
            _children.Insert(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], index++, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[138/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret32), ret32));

        ::g::Uno::Collections::IEnumerator::Reset(uInterface(items, ::TYPES[28/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[28/*Uno.Collections.IEnumerator*/])))
            OnAdded((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[138/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret33), ret33));
    }
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() [instance] :7152
::g::Fuse::FastMatrix* Visual::InternLocalTransformInternal()
{
    return LocalTransformInternal();
}

// internal float2 InternSnap(float2 p) [instance] :6388
::g::Uno::Float2 Visual::InternSnap(::g::Uno::Float2 p)
{
    return Snap(p);
}

// internal float2 InternSnapUp(float2 p) [instance] :6407
::g::Uno::Float2 Visual::InternSnapUp(::g::Uno::Float2 p)
{
    return SnapUp(p);
}

// internal void InvalidateFlat() [instance] :5975
void Visual::InvalidateFlat()
{
    if (_isLocalFlatCached() || _areChildrenFlatCached())
    {
        _isLocalFlatCached(false);
        _areChildrenFlatCached(false);

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateFlat();
    }
}

// protected void InvalidateHitTestBounds() [instance] :5729
void Visual::InvalidateHitTestBounds()
{
    Visual* p = this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        uPtr(p)->_isHitTestBoundsCacheValid = false;
        p = uPtr(p)->Parent();
    }
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) [instance] :6301
void Visual::InvalidateLayout(int reason)
{
    if (Visual::_performingLayout())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[91/*"Layout was ...*/]));

    if (reason <= _layoutDirty)
        return;

    _layoutDirty = reason;
    OnInvalidateLayout();
    Visual* child = this;
    Visual* parent = Parent();
    Visual* maybeChild = NULL;

    while ((parent != NULL) && !uPtr(parent)->IsLayoutRoot())
    {
        if (reason <= uPtr(parent)->_layoutDirty)
            break;

        int useReason = reason;

        if (uPtr(child)->HasMarginBox() && (reason > 1))
        {
            int mb = uPtr(parent)->IsMarginBoxDependent(child);

            if ((mb == 4) || (mb == 3))
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    uPtr(maybeChild)->_layoutDirty = 2;
                    maybeChild = uPtr(maybeChild)->Parent();
                }

                maybeChild = NULL;
            }

            switch (mb)
            {
                case 0:
                {
                    useReason = reason = 1;
                    break;
                }
                case 1:
                {
                    useReason = 2;
                    reason = 1;
                    break;
                }
                case 2:
                {
                    useReason = 1;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 3:
                {
                    useReason = 2;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 4:
                {
                    reason = useReason = 2;
                    break;
                }
            }
        }

        uPtr(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
            uPtr(parent)->_layoutDirty = useReason;

        child = parent;
        parent = uPtr(parent)->Parent();
    }
}

// protected void InvalidateRenderBounds() [instance] :7289
void Visual::InvalidateRenderBounds()
{
    InvalidateVisual();
    Visual* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->OnInvalidateRenderBounds())
            break;

        p = uPtr(p)->Parent();
    }
}

// public void InvalidateVisual() [instance] :7546
void Visual::InvalidateVisual()
{
    if (_lastInvalidate == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    _lastInvalidate = ::g::Fuse::UpdateManager::FrameIndex();
    OnInvalidateVisual();

    if ((Parent() != NULL) && IsVisible())
        uPtr(Parent())->InvalidateVisual();
}

// public void InvalidateVisualComposition() [instance] :7566
void Visual::InvalidateVisualComposition()
{
    OnInvalidateVisualComposition();
    Visual* p = Parent();

    if (p != NULL)
        uPtr(p)->InvalidateVisual();
    else
        InvalidateVisual();
}

// private void InvalidateWorldTransform() [instance] :7069
void Visual::InvalidateWorldTransform()
{
    if ((_worldTransform == NULL) && (_worldTransformInverse == NULL))
        return;

    _worldTransform = NULL;
    _worldTransformInverse = NULL;

    for (int i = 0; i < ZOrderChildCount(); i++)
        uPtr(GetZOrderChild(i))->InvalidateWorldTransform();

    OnInvalidateWorldTransform();
}

// private void InvalidateZOrder() [instance] :7809
void Visual::InvalidateZOrder()
{
    if (!_nodeZOrders)
        return;

    _nodeZOrders = false;
    SoftInvalidateZOrder(true);
}

// private void InvokeEventHandler(object obj, object args) [instance] :5291
void Visual::InvokeEventHandler(uObject* obj, uObject* args)
{
    uPtr(uCast<uDelegate*>(obj, ::TYPES[23/*Uno.EventHandler*/]))->Invoke(2, this, uCast< ::g::Uno::EventArgs*>(args, ::TYPES[139/*Uno.EventArgs*/]));
}

// public bool get_IsContextEnabled() [instance] :5937
bool Visual::IsContextEnabled()
{
    return HasBit(2);
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) [instance] :5894
void Visual::add_IsContextEnabledChanged(uDelegate* value)
{
    AddEventHandler(Visual::_isContextEnabledChangedHandle(), 4, value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) [instance] :5895
void Visual::remove_IsContextEnabledChanged(uDelegate* value)
{
    RemoveEventHandler(Visual::_isContextEnabledChangedHandle(), 4, value);
}

// public bool get_IsEnabled() [instance] :5910
bool Visual::IsEnabled()
{
    return HasBit(1);
}

// public void set_IsEnabled(bool value) [instance] :5911
void Visual::IsEnabled(bool value)
{
    if (value != IsEnabled())
    {
        SetBit1(1, value);
        UpdateIsContextEnabledCache();
        OnIsEnabledChanged((uObject*)this);
    }
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) [instance] :5805
void Visual::add_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsInteractingChanged1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) [instance] :5805
void Visual::remove_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsInteractingChanged1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// internal bool get_IsLocalFlat() [instance] :6000
bool Visual::IsLocalFlat()
{
    if (_isLocalFlatCached())
        return _isLocalFlat();

    _isLocalFlat(CalcIsLocalFlat());
    _isLocalFlatCached(true);
    return _isLocalFlat();
}

// public bool get_IsVisible() [instance] :6092
bool Visual::IsVisible()
{
    return _isVisibleCached;
}

// public void add_IsVisibleChanged(Uno.EventHandler value) [instance] :6081
void Visual::add_IsVisibleChanged(uDelegate* value)
{
    AddEventHandler(Visual::_isVisibleChangedHandle(), 5, value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) [instance] :6082
void Visual::remove_IsVisibleChanged(uDelegate* value)
{
    RemoveEventHandler(Visual::_isVisibleChangedHandle(), 5, value);
}

// public Fuse.Layer get_Layer() [instance] :6230
int Visual::Layer()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layerProperty(), &v))
        return uUnbox<int>(::g::Fuse::Layer_typeof(), v);

    return 2;
}

// public void set_Layer(Fuse.Layer value) [instance] :6237
void Visual::Layer(int value)
{
    uPtr(Properties())->Set(Visual::_layerProperty(), uBox<int>(::g::Fuse::Layer_typeof(), value));
    InvalidateLayout(2);
}

// public Fuse.LayoutRole get_LayoutRole() [instance] :6252
int Visual::LayoutRole()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layoutRoleProperty(), &v))
        return uUnbox<int>(::g::Fuse::LayoutRole_typeof(), v);

    if (Layer() != 2)
        return 2;

    return 0;
}

// public void set_LayoutRole(Fuse.LayoutRole value) [instance] :6264
void Visual::LayoutRole(int value)
{
    uPtr(Properties())->Set(Visual::_layoutRoleProperty(), uBox<int>(::g::Fuse::LayoutRole_typeof(), value));
    InvalidateLayout(2);
}

// public float4x4 get_LocalTransform() [instance] :7146
::g::Uno::Float4x4 Visual::LocalTransform()
{
    return uPtr(LocalTransformInternal())->Matrix();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() [instance] :7156
::g::Fuse::FastMatrix* Visual::LocalTransformInternal()
{
    if (_localTransform == NULL)
    {
        _localTransform = ::g::Fuse::FastMatrix::Identity();
        PrependLocalTransform(_localTransform);
    }

    return _localTransform;
}

// protected float4x4 get_LocalTransformInverse() [instance] :7170
::g::Uno::Float4x4 Visual::LocalTransformInverse()
{
    return uPtr(LocalTransformInverseInternal())->Matrix();
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() [instance] :7175
::g::Fuse::FastMatrix* Visual::LocalTransformInverseInternal()
{
    if (_localTransformInverse == NULL)
    {
        _localTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(LocalTransform());
        uPtr(_localTransformInverse)->Invert();
    }

    return _localTransformInverse;
}

// internal float2 get_MarginBoxPosition() [instance] :6600
::g::Uno::Float2 Visual::MarginBoxPosition()
{
    return _ambPosition;
}

// private void OnAdded(Fuse.Node b) [instance] :5038
void Visual::OnAdded(::g::Fuse::Node* b)
{
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualAdded(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::TYPES[125/*Fuse.Transform*/]);

    if (t != NULL)
        OnTransformAdded(t);

    ::g::Fuse::Node::Relate(this, b);
    OnChildAdded(b);
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) [instance] :4907
void Visual::OnBeginRemoveVisual(::g::Fuse::PendingRemoveVisual* args)
{
    ::g::Fuse::Node* ret34;
    SetBit1(268435456, true);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* rvl = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret34), ret34), ::TYPES[140/*Fuse.IBeginRemoveVisualListener*/]);

        if (rvl != NULL)
            ::g::Fuse::IBeginRemoveVisualListener::OnBeginRemoveVisual(uInterface(uPtr(rvl), ::TYPES[140/*Fuse.IBeginRemoveVisualListener*/]), args);
    }
}

// protected internal void OnBringIntoView(Fuse.Visual elm) [instance] :6629
void Visual::OnBringIntoView(Visual* elm)
{
    if (::g::Uno::Delegate::op_Inequality(RequestBringIntoView1, NULL))
        uPtr(RequestBringIntoView1)->Invoke(2, this, (::g::Fuse::RequestBringIntoViewArgs*)::g::Fuse::RequestBringIntoViewArgs::New2(elm));

    if (Parent() != NULL)
        uPtr(Parent())->OnBringIntoView(elm);
}

// private void OnInteractionsChanged() [instance] :5836
void Visual::OnInteractionsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(IsInteractingChanged1, NULL))
        uPtr(IsInteractingChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnInvalidateChildZOffset(Fuse.Visual child) [instance] :7777
void Visual::OnInvalidateChildZOffset(Visual* child)
{
    SoftInvalidateZOrder(false);
}

// protected void OnInvalidateWorldTransform() [instance] :7090
void Visual::OnInvalidateWorldTransform()
{
    RaiseEvent(Visual::_worldTransformInvalidatedHandle(), 10);
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) [instance] :5922
void Visual::OnIsEnabledChanged(uObject* origin)
{
    OnPropertyChanged1(Visual::_isEnabledName(), origin);
}

// protected void OnLocalVisibleChanged() [instance] :6101
void Visual::OnLocalVisibleChanged()
{
    UpdateIsVisibleCache();
}

// private void OnMatrixChanged(Fuse.Transform t) [instance] :7055
void Visual::OnMatrixChanged(::g::Fuse::Transform* t)
{
    InvalidateLocalTransform();
}

// private void OnParameterChanged() [instance] :6747
void Visual::OnParameterChanged()
{
    ::g::Fuse::Scripting::Function* ret38;

    if (_parameterListeners != NULL)
    {
        uObject* so = uAs<uObject*>(this, ::TYPES[122/*Fuse.Scripting.IScriptObject*/]);

        if (so != NULL)
        {
            uObject* param = uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::TYPES[122/*Fuse.Scripting.IScriptObject*/])))->ParseJson(_parameter);

            for (int i = 0; i < uPtr(_parameterListeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_parameterListeners), uCRef<int>(i), &ret38), ret38))->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, param));
        }
    }

    OnPropertyChanged(Visual::ParameterName());
    RaiseEvent(Visual::_parameterChangedHandle(), 11);
}

// private void OnRemoved(Fuse.Node b) [instance] :5050
void Visual::OnRemoved(::g::Fuse::Node* b)
{
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualRemoved(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::TYPES[125/*Fuse.Transform*/]);

    if (t != NULL)
        OnTransformRemoved(t);

    ::g::Fuse::Node::Unrelate(this, b);
    OnChildRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) [instance] :6843
void Visual::OnResourceChanged(::g::Uno::UX::Resource* res)
{
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(res)->Key());
}

// private void OnTemplatesChanged(Uno.UX.Template t) [instance] :6978
void Visual::OnTemplatesChanged(::g::Uno::UX::Template* t)
{
    ::g::Fuse::Node* ret39;

    if (IsRootingCompleted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            uObject* to = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret39), ret39), ::TYPES[143/*Fuse.ITemplateObserver*/]);

            if (to != NULL)
                ::g::Fuse::ITemplateObserver::OnTemplatesChangedWileRooted(uInterface(uPtr(to), ::TYPES[143/*Fuse.ITemplateObserver*/]));
        }
}

// private void OnTransformAdded(Fuse.Transform t) [instance] :7041
void Visual::OnTransformAdded(::g::Fuse::Transform* t)
{
    _transformCount++;
    uPtr(t)->add_MatrixChanged(uDelegate::New(::TYPES[103/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnTransformRemoved(Fuse.Transform t) [instance] :7048
void Visual::OnTransformRemoved(::g::Fuse::Transform* t)
{
    _transformCount--;
    uPtr(t)->remove_MatrixChanged(uDelegate::New(::TYPES[103/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnVisualAdded(Fuse.Visual v) [instance] :5062
void Visual::OnVisualAdded(Visual* v)
{
    ::g::Uno::Collections::List__Insert_fn(uPtr(ZOrder()), uCRef<int>(0), v);
    InvalidateZOrder();
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// private void OnVisualRemoved(Fuse.Visual v) [instance] :5070
void Visual::OnVisualRemoved(Visual* v)
{
    bool ret40;
    uPtr(v)->CancelPendingRemove();
    ::g::Uno::Collections::List__Remove_fn(uPtr(ZOrder()), v, &ret40);
    InvalidateZOrder();
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// public string get_Parameter() [instance] :6706
uString* Visual::Parameter()
{
    return _parameter;
}

// public void set_Parameter(string value) [instance] :6707
void Visual::Parameter(uString* value)
{
    if (::g::Uno::String::op_Inequality(_parameter, value))
    {
        _parameter = value;
        OnParameterChanged();
    }
}

// public void add_ParameterChanged(Uno.EventHandler value) [instance] :6723
void Visual::add_ParameterChanged(uDelegate* value)
{
    AddEventHandler(Visual::_parameterChangedHandle(), 11, value);
}

// public void remove_ParameterChanged(Uno.EventHandler value) [instance] :6724
void Visual::remove_ParameterChanged(uDelegate* value)
{
    RemoveEventHandler(Visual::_parameterChangedHandle(), 11, value);
}

// internal Fuse.FastMatrix get_ParentWorldTransformInternal() [instance] :7140
::g::Fuse::FastMatrix* Visual::ParentWorldTransformInternal()
{
    return WorldTransformInternal();
}

// protected void PerformLayout() [instance] :6476
void Visual::PerformLayout()
{
    PerformLayout1(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[22/*Fuse.ICommonViewport*/])));
}

// protected void PerformLayout(float2 clientSize) [instance] :6484
void Visual::PerformLayout1(::g::Uno::Float2 clientSize)
{
    if ((_cachedRenderTargetSize.X != clientSize.X) || (_cachedRenderTargetSize.Y != clientSize.Y))
    {
        _cachedRenderTargetSize = clientSize;
        InvalidateLayout(2);
    }

    if (_layoutDirty != 0)
    {
        Visual::_performingLayout() = true;

        {
            const auto __finally_fun = [&]()
            {
                Visual::_performingLayout() = false;
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_layoutDirty == 2)
            {
                ::g::Uno::Float2 availableSize = clientSize;
                ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);
                ArrangeMarginBox(offset, ::g::Fuse::LayoutParams__Create(availableSize));
            }
            else
                UpdateLayout();
        }
    }
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) [instance] :7246
void Visual::PrependExplicitTransforms(::g::Fuse::FastMatrix* m)
{
    ::g::Fuse::Node* ret41;

    if (HasExplicitTransforms())
    {
        PrependTransformOrigin(m);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret41), ret41), ::TYPES[125/*Fuse.Transform*/]);

            if (t != NULL)
                uPtr(t)->PrependTo(m);
        }

        PrependInverseTransformOrigin(m);
    }
}

// private void PrependLocalTransform(Fuse.FastMatrix m) [instance] :7240
void Visual::PrependLocalTransform(::g::Fuse::FastMatrix* m)
{
    PrependImplicitTransform(m);
    PrependExplicitTransforms(m);
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) [instance] :5286
void Visual::RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne)
{
    if (HasBit2(ne))
        uPtr(Properties())->ForeachInList1(ph, uDelegate::New(::TYPES[144/*Uno.Action<object, object>*/], (void*)Visual__InvokeEventHandler_fn, this), ::g::Uno::EventArgs::Empty());
}

// private void RearrangeMarginBox() [instance] :6549
void Visual::RearrangeMarginBox()
{
    if (!HasMarginBox())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[92/*"Invalid cal...*/]));

    ArrangeMarginBox(_ambPosition, _ambLayoutParams);
}

// public bool Remove(Fuse.Node item) [instance] :5091
bool Visual::Remove1(::g::Fuse::Node* item)
{
    if (_children.Remove(::TYPES[137/*Fuse.Internal.MiniList<Fuse.Node>*/], item))
    {
        OnRemoved(item);
        return true;
    }

    return false;
}

// public void RemoveAllChildren<T>() [instance] :4980
void Visual::RemoveAllChildren(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    ::g::Fuse::Node* ret42;
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1;

    while (i >= 0)
    {
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret42), ret42), __types[0]))
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), i);

        i = ::g::Uno::Math::Min8(i, ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/]))) - 1;
    }
}

// public void RemoveDrawCost(double cost) [instance] :7397
void Visual::RemoveDrawCost(double cost)
{
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost - cost);
        p = uPtr(p)->Parent();
    }
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :5303
void Visual::RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->RemoveFromList(ph, handler);
    uObject* foo;

    if (!uPtr(Properties())->TryGet(ph, &foo))
        ClearBit2(ne);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :6627
void Visual::add_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RequestBringIntoView1, value), ::TYPES[150/*Fuse.RequestBringIntoViewHandler*/]);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :6627
void Visual::remove_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RequestBringIntoView1, value), ::TYPES[150/*Fuse.RequestBringIntoViewHandler*/]);
}

// private void ResetParameterListeners() [instance] :6763
void Visual::ResetParameterListeners()
{
    _parameterListeners = NULL;
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :6788
uObject* Visual::Resources()
{
    if (!HasResources())
    {
        SetBit4(1);
        uPtr(Properties())->Set(Visual::_resourcesHandle(), (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[146/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Visual__OnResourceChanged_fn, this), uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Visual__OnResourceChanged_fn, this)));
    }

    return (uObject*)uPtr(Properties())->Get(Visual::_resourcesHandle());
}

// public void SendToBack(Fuse.Visual item) [instance] :7696
void Visual::SendToBack(Visual* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > ret43;

    if (!HasChildren())
        return;

    EnsureZOrder();
    int mn = uPtr(item)->ZOffsetNatural;

    for (::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret43), ret43); enum6.MoveNext(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        Visual* c = enum6.Current(::TYPES[5/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mn = ::g::Uno::Math::Min8(mn, uPtr(c)->ZOffsetNatural);
    }

    item->ZOffsetNatural = (mn - 1);
    item->ZOffsetFixed = true;
    SoftInvalidateZOrder(false);
}

// internal void SetBit(Fuse.FastProperty1 p) [instance] :5428
void Visual::SetBit(int p)
{
    _fastPropertyBits1 = (_fastPropertyBits1 | p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) [instance] :5433
void Visual::SetBit1(int p, bool value)
{
    if (value)
        SetBit(p);
    else
        ClearBit(p);
}

// internal void SetBit(Fuse.FastProperty2 p) [instance] :5580
void Visual::SetBit2(int p)
{
    _fastPropertyBits2 = (_fastPropertyBits2 | p);
}

// private void SetBit(Fuse.Visual.VisualBits nb) [instance] :5283
void Visual::SetBit4(int nb)
{
    _nodebits = (_nodebits | (1 << nb));
}

// protected float2 Snap(float2 p) [instance] :6389
::g::Uno::Float2 Visual::Snap(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom())), AbsoluteZoom());
    return s;
}

// protected float2 SnapDown(float2 p) [instance] :6414
::g::Uno::Float2 Visual::SnapDown(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// public bool get_SnapToPixels() [instance] :6442
bool Visual::SnapToPixels()
{
    return HasBit(67108864);
}

// public void set_SnapToPixels(bool value) [instance] :6446
void Visual::SnapToPixels(bool value)
{
    if ((SnapToPixels() != value) || !HasBit(134217728))
    {
        SetBit(134217728);
        SetBit1(33554432, value);
        UpdateContextSnapToPixelsCache();
        InvalidateLayout(2);
    }
}

// protected float2 SnapUp(float2 p) [instance] :6408
::g::Uno::Float2 Visual::SnapUp(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// private void SoftInvalidateZOrder([bool force]) [instance] :7787
void Visual::SoftInvalidateZOrder(bool force)
{
    OnZOrderInvalidated();

    if (!_sortedZOrder && !force)
        return;

    _sortedZOrder = false;
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Visual__EmitZOrderChanged_fn, this), -1, 0);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :6972
uObject* Visual::Templates()
{
    uObject* ind7 = _templates;
    return (ind7 != NULL) ? ind7 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[148/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[149/*Uno.Action<Uno.UX.Template>*/], (void*)Visual__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[149/*Uno.Action<Uno.UX.Template>*/], (void*)Visual__OnTemplatesChanged_fn, this))));
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) [instance] :7495
bool Visual::TryParentToLocal(::g::Uno::Float2 parentPoint, ::g::Uno::Float2* result)
{
    ::g::Uno::Float2 parentPoint_ = parentPoint;
    ::g::Fuse::FastMatrix* t = LocalTransformInverseInternal();
    *result = ::g::Uno::Vector::TransformCoordinate(parentPoint_, uPtr(t)->Matrix());
    return t->IsValid();
}

// private void UpdateContextSnapToPixelsCache() [instance] :6458
void Visual::UpdateContextSnapToPixelsCache()
{
    ::g::Fuse::Node* ret49;
    bool newValue = HasBit(134217728) ? HasBit(33554432) : (Parent() != NULL) ? uPtr(Parent())->SnapToPixels() : true;

    if (newValue != SnapToPixels())
    {
        SetBit1(67108864, newValue);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            Visual* v = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret49), ret49), Visual_typeof());

            if (v != NULL)
                uPtr(v)->UpdateContextSnapToPixelsCache();
        }
    }
}

// private void UpdateIsContextEnabledCache() [instance] :5940
void Visual::UpdateIsContextEnabledCache()
{
    bool newValue = IsEnabled() && ((Parent() == NULL) || uPtr(Parent())->IsContextEnabled());

    if (IsContextEnabled() != newValue)
    {
        SetBit1(2, newValue);
        OnIsContextEnabledChanged();

        for (int i = 0; i < ZOrderChildCount(); i++)
            uPtr(GetZOrderChild(i))->UpdateIsContextEnabledCache();
    }
}

// private void UpdateIsVisibleCache() [instance] :6106
void Visual::UpdateIsVisibleCache()
{
    bool newValue = IsLocalVisible() && ((Parent() == NULL) || uPtr(Parent())->IsVisible());

    if (_isVisibleCached != newValue)
    {
        _isVisibleCached = newValue;
        OnIsVisibleChanged();

        for (int i = 0; i < ZOrderChildCount(); i++)
            uPtr(GetZOrderChild(i))->UpdateIsVisibleCache();
    }
}

// private void UpdateLayout() [instance] :6518
void Visual::UpdateLayout()
{
    ::g::Fuse::Node* ret50;

    switch (_layoutDirty)
    {
        case 0:
            break;
        case 1:
        {
            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                Visual* v = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret50), ret50), Visual_typeof());

                if (v != NULL)
                    uPtr(v)->UpdateLayout();
            }

            break;
        }
        case 2:
        {
            RearrangeMarginBox();
            break;
        }
    }

    _layoutDirty = 0;
}

// public int get_ValidFrameCount() [instance] :7583
int Visual::ValidFrameCount()
{
    return ::g::Fuse::UpdateManager::FrameIndex() - _lastInvalidate;
}

// public Fuse.IViewport get_Viewport() [instance] :7527
uObject* Visual::Viewport()
{
    uObject* ind9 = _viewport;
    return (ind9 != NULL) ? ind9 : (uObject*)FindViewport();
}

// public float2 WindowToLocal(float2 windowCoord) [instance] :7260
::g::Uno::Float2 Visual::WindowToLocal(::g::Uno::Float2 windowCoord)
{
    if (HitTestTransform() == 0)
    {
        ::g::Uno::Float2 parentCoord = (Parent() == NULL) ? windowCoord : uPtr(Parent())->WindowToLocal(windowCoord);
        return ::g::Uno::Vector::TransformCoordinate(parentCoord, LocalTransformInverse());
    }
    else
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[7/*Fuse.IViewport*/]), windowCoord);
        ::g::Uno::Geometry::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[7/*Fuse.IViewport*/]), Viewport(), world, this);
        return ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
    }
}

// public float4x4 get_WorldTransform() [instance] :7111
::g::Uno::Float4x4 Visual::WorldTransform()
{
    return uPtr(WorldTransformInternal())->Matrix();
}

// private Fuse.FastMatrix get_WorldTransformInternal() [instance] :7130
::g::Fuse::FastMatrix* Visual::WorldTransformInternal()
{
    if (_worldTransform == NULL)
        _worldTransform = CalcWorldTransform();

    return _worldTransform;
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) [instance] :7086
void Visual::add_WorldTransformInvalidated(uDelegate* value)
{
    AddEventHandler(Visual::_worldTransformInvalidatedHandle(), 10, value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) [instance] :7087
void Visual::remove_WorldTransformInvalidated(uDelegate* value)
{
    RemoveEventHandler(Visual::_worldTransformInvalidatedHandle(), 10, value);
}

// public float4x4 get_WorldTransformInverse() [instance] :7098
::g::Uno::Float4x4 Visual::WorldTransformInverse()
{
    if (_worldTransformInverse == NULL)
    {
        _worldTransformInverse = uPtr(WorldTransformInternal())->Copy();
        uPtr(_worldTransformInverse)->Invert();
    }

    return uPtr(_worldTransformInverse)->Matrix();
}

// public float get_ZOffset() [instance] :6657
float Visual::ZOffset()
{
    return _zOffset;
}

// public void set_ZOffset(float value) [instance] :6658
void Visual::ZOffset(float value)
{
    if (_zOffset == value)
        return;

    _zOffset = value;

    if (Parent() != NULL)
        uPtr(Parent())->OnInvalidateChildZOffset(this);
}

// internal Uno.Collections.List<Fuse.Visual> get_ZOrder() [instance] :7662
::g::Uno::Collections::List* Visual::ZOrder()
{
    if (_zOrder == NULL)
        _zOrder = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Visual>*/]));

    return _zOrder;
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) [instance] :7782
void Visual::add_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ZOrderChanged1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) [instance] :7782
void Visual::remove_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ZOrderChanged1, value), ::TYPES[23/*Uno.EventHandler*/]);
}

// public int get_ZOrderChildCount() [instance] :7647
int Visual::ZOrderChildCount()
{
    if (!HasVisualChildren())
        return 0;

    return uPtr(ZOrder())->Count();
}

// private int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) [instance] :7714
int Visual::ZOrderComparator(Visual* a, Visual* b)
{
    if (uPtr(a)->ZLayer != uPtr(b)->ZLayer)
        return uPtr(a)->ZLayer - uPtr(b)->ZLayer;

    if (uPtr(a)->ZOffset() != uPtr(b)->ZOffset())
        return (uPtr(a)->ZOffset() > uPtr(b)->ZOffset()) ? 1 : -1;

    return uPtr(a)->ZOffsetNatural - uPtr(b)->ZOffsetNatural;
}

// private static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) [static] :7725
void Visual::AssignZOrder(uObject* nodes)
{
    Visual_typeof()->Init();
    ::g::Fuse::Node* ret10;
    uArray* current = uArray::Init<int>(::TYPES[123/*int[]*/], 4, 0, 0, 0, 0);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[82/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        Visual* visual = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[84/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret10), ret10), Visual_typeof());

        if (visual == NULL)
            continue;

        int c = uPtr(visual)->Layer();
        visual->ZLayer = c;

        if (!visual->ZOffsetFixed)
            uPtr(visual)->ZOffsetNatural = (uPtr(current)->Item<int>(c)--);
    }
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) [static] :6896
void Visual::bringIntoView(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    Visual_typeof()->Init();
    uPtr(n)->BringIntoView();
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) [static] :6884
::g::Uno::UX::Property1* Visual::getParameterProperty(Visual* v)
{
    Visual_typeof()->Init();

    if (uPtr(v)->_parameterProperty == NULL)
        uPtr(v)->_parameterProperty = Visual__ParameterProperty::New1(v);

    return uPtr(v)->_parameterProperty;
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) [static] :6922
void Visual::onParameterChanged(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    Visual_typeof()->Init();
    uPtr(v)->AddParameterChangedListener(uCast< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[75/*Fuse.Scripting.Function*/]));
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private enum Visual.VisualBits :5266
uEnumType* Visual__VisualBits_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.VisualBits", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "Styled", 0LL,
        "Resources", 1LL,
        "ResourceChanged", 2LL,
        "Style", 3LL,
        "IsContextEnabledChanged", 4LL,
        "IsVisibleChanged", 5LL,
        "Added", 6LL,
        "Removed", 7LL,
        "Rooted", 8LL,
        "Unrooted", 9LL,
        "WorldTransformInvalidated", 10LL,
        "ParameterChanged", 11LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public sealed class VisualBounds :7835
// {
// static VisualBounds() :7835
static void VisualBounds__cctor__fn(uType* __type)
{
    VisualBounds::_empty_ = VisualBounds::New1();
    VisualBounds::_infinite_ = VisualBounds::New1();
}

static void VisualBounds_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::VisualBounds, _box), 0,
        type, (uintptr_t)&::g::Fuse::VisualBounds::_empty_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::VisualBounds::_infinite_, uFieldFlagsStatic);
}

uType* VisualBounds_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VisualBounds);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.VisualBounds", options);
    type->fp_build_ = VisualBounds_build;
    type->fp_ctor_ = (void*)VisualBounds__New1_fn;
    type->fp_cctor_ = VisualBounds__cctor__fn;
    return type;
}

// private VisualBounds() :7837
void VisualBounds__ctor__fn(VisualBounds* __this)
{
    __this->ctor_();
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) :7918
void VisualBounds__AddRect_fn(VisualBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, VisualBounds** __retval)
{
    *__retval = __this->AddRect(*mn, *mx);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) :7923
void VisualBounds__AddRect1_fn(VisualBounds* __this, ::g::Uno::Rect* r, VisualBounds** __retval)
{
    *__retval = __this->AddRect1(*r);
}

// public float3 get_AxisMax() :7895
void VisualBounds__get_AxisMax_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMax();
}

// public float3 get_AxisMin() :7894
void VisualBounds__get_AxisMin_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMin();
}

// public static Fuse.VisualBounds Box(Uno.Geometry.Box a) :7885
void VisualBounds__Box_fn(::g::Uno::Geometry::Box* a, VisualBounds** __retval)
{
    *__retval = VisualBounds::Box(*a);
}

// public static Uno.Geometry.Box BoxTransform(Uno.Geometry.Box box, float4x4 transform) :8073
void VisualBounds__BoxTransform_fn(::g::Uno::Geometry::Box* box, ::g::Uno::Float4x4* transform, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = VisualBounds::BoxTransform(*box, *transform);
}

// public bool ContainsPoint(float2 pt) :8039
void VisualBounds__ContainsPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, bool* __retval)
{
    *__retval = __this->ContainsPoint(*pt);
}

// public static Fuse.VisualBounds get_Empty() :7842
void VisualBounds__get_Empty_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Empty();
}

// public Uno.Rect get_FlatRect() :7900
void VisualBounds__get_FlatRect_fn(VisualBounds* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->FlatRect();
}

// public static Fuse.VisualBounds get_Infinite() :7853
void VisualBounds__get_Infinite_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Infinite();
}

// public Fuse.VisualBounds InflateXY(float padding) :7931
void VisualBounds__InflateXY_fn(VisualBounds* __this, float* padding, VisualBounds** __retval)
{
    *__retval = __this->InflateXY(*padding);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) :8051
void VisualBounds__IntersectsRay_fn(VisualBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval)
{
    *__retval = __this->IntersectsRay(*ray);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) :8015
void VisualBounds__IntersectXY_fn(VisualBounds* __this, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->IntersectXY(nb);
}

// public bool get_IsEmpty() :7847
void VisualBounds__get_IsEmpty_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public bool get_IsFlat() :7905
void VisualBounds__get_IsFlat_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInfinite() :7858
void VisualBounds__get_IsInfinite_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) :7991
void VisualBounds__Merge_fn(VisualBounds* __this, VisualBounds* nb, ::g::Fuse::FastMatrix* trans, VisualBounds** __retval)
{
    *__retval = __this->Merge(nb, trans);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) :8034
void VisualBounds__MergeChild_fn(VisualBounds* __this, ::g::Fuse::Visual* child, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->MergeChild(child, nb);
}

// private VisualBounds New() :7837
void VisualBounds__New1_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::New1();
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) :7880
void VisualBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect(*a, *b);
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) :7872
void VisualBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect1(*a, *b);
}

// public Fuse.VisualBounds Scale(float3 factor) :7946
void VisualBounds__Scale_fn(VisualBounds* __this, ::g::Uno::Float3* factor, VisualBounds** __retval)
{
    *__retval = __this->Scale(*factor);
}

// public float3 get_Size() :7896
void VisualBounds__get_Size_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.VisualBounds Translate(float3 offset) :7958
void VisualBounds__Translate_fn(VisualBounds* __this, ::g::Uno::Float3* offset, VisualBounds** __retval)
{
    *__retval = __this->Translate(*offset);
}

uSStrong<VisualBounds*> VisualBounds::_empty_;
uSStrong<VisualBounds*> VisualBounds::_infinite_;

// private VisualBounds() [instance] :7837
void VisualBounds::ctor_()
{
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) [instance] :7918
VisualBounds* VisualBounds::AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx)
{
    return Merge(VisualBounds::Rect1(::g::Uno::Float3__New4(mn, 0.0f), ::g::Uno::Float3__New4(mx, 0.0f)), NULL);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) [instance] :7923
VisualBounds* VisualBounds::AddRect1(::g::Uno::Rect r)
{
    return AddRect(r.Minimum(), r.Maximum());
}

// public float3 get_AxisMax() [instance] :7895
::g::Uno::Float3 VisualBounds::AxisMax()
{
    return _box.Maximum;
}

// public float3 get_AxisMin() [instance] :7894
::g::Uno::Float3 VisualBounds::AxisMin()
{
    return _box.Minimum;
}

// public bool ContainsPoint(float2 pt) [instance] :8039
bool VisualBounds::ContainsPoint(::g::Uno::Float2 pt)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    return (((((_box.Minimum.X <= pt.X) && (_box.Minimum.Y <= pt.Y)) && (_box.Maximum.X >= pt.X)) && (_box.Maximum.Y >= pt.Y)) && (_box.Minimum.Z <= 0.0f)) && (_box.Maximum.Z >= 0.0f);
}

// public Uno.Rect get_FlatRect() [instance] :7900
::g::Uno::Rect VisualBounds::FlatRect()
{
    ::g::Uno::Float3 ind1;
    ::g::Uno::Float3 ind2;
    return ::g::Uno::Rect__New2((ind1 = AxisMin(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = Size(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
}

// public Fuse.VisualBounds InflateXY(float padding) [instance] :7931
VisualBounds* VisualBounds::InflateXY(float padding)
{
    if (IsInfinite())
        return VisualBounds::_infinite();

    if (IsEmpty())
        return VisualBounds::Rect(::g::Uno::Float2__New1(-padding), ::g::Uno::Float2__New1(padding));

    ::g::Uno::Geometry::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Subtraction2(add.Minimum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    return VisualBounds::Box(add);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) [instance] :8051
bool VisualBounds::IntersectsRay(::g::Uno::Geometry::Ray ray)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    float distance;
    return ::g::Uno::Geometry::Collision::RayIntersectsBox(ray, _box, &distance);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) [instance] :8015
VisualBounds* VisualBounds::IntersectXY(VisualBounds* nb)
{
    if (uPtr(nb)->IsEmpty() || IsEmpty())
        return VisualBounds::_empty();

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite();

    ::g::Uno::Float3 mn = ::g::Uno::Math::Max5(AxisMin(), uPtr(nb)->AxisMin());
    ::g::Uno::Float3 mx = ::g::Uno::Math::Min5(AxisMax(), nb->AxisMax());

    if ((mn.X >= mx.X) || (mn.Y >= mx.Y))
        return VisualBounds::_empty();

    if (mn.Z > mx.Z)
        mx.Z = mn.Z;

    return VisualBounds::Rect1(mn, mx);
}

// public bool get_IsEmpty() [instance] :7847
bool VisualBounds::IsEmpty()
{
    return this == VisualBounds::_empty();
}

// public bool get_IsFlat() [instance] :7905
bool VisualBounds::IsFlat()
{
    return IsEmpty() || ((_box.Minimum.Z == 0.0f) && (_box.Maximum.Z == 0.0f));
}

// public bool get_IsInfinite() [instance] :7858
bool VisualBounds::IsInfinite()
{
    return this == VisualBounds::_infinite();
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) [instance] :7991
VisualBounds* VisualBounds::Merge(VisualBounds* nb, ::g::Fuse::FastMatrix* trans)
{
    if (uPtr(nb)->IsEmpty())
        return this;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite();

    ::g::Uno::Geometry::Box add = (trans != NULL) ? VisualBounds::BoxTransform(uPtr(nb)->_box, uPtr(trans)->Matrix()) : uPtr(nb)->_box;

    if (!IsEmpty())
    {
        add.Minimum = ::g::Uno::Math::Min5(_box.Minimum, add.Minimum);
        add.Maximum = ::g::Uno::Math::Max5(_box.Maximum, add.Maximum);
    }

    return VisualBounds::Box(add);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) [instance] :8034
VisualBounds* VisualBounds::MergeChild(::g::Fuse::Visual* child, VisualBounds* nb)
{
    return Merge(nb, uPtr(child)->InternLocalTransformInternal());
}

// public Fuse.VisualBounds Scale(float3 factor) [instance] :7946
VisualBounds* VisualBounds::Scale(::g::Uno::Float3 factor)
{
    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Uno::Geometry::Box sc = _box;
    sc.Minimum = ::g::Uno::Float3__op_Multiply2(sc.Minimum, factor);
    sc.Maximum = ::g::Uno::Float3__op_Multiply2(sc.Maximum, factor);
    return VisualBounds::Box(sc);
}

// public float3 get_Size() [instance] :7896
::g::Uno::Float3 VisualBounds::Size()
{
    return ::g::Uno::Float3__op_Subtraction2(_box.Maximum, _box.Minimum);
}

// public Fuse.VisualBounds Translate(float3 offset) [instance] :7958
VisualBounds* VisualBounds::Translate(::g::Uno::Float3 offset)
{
    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Uno::Geometry::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Addition2(add.Minimum, offset);
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, offset);
    return VisualBounds::Box(add);
}

// public static Fuse.VisualBounds Box(Uno.Geometry.Box a) [static] :7885
VisualBounds* VisualBounds::Box(::g::Uno::Geometry::Box a)
{
    VisualBounds_typeof()->Init();
    VisualBounds* nb = VisualBounds::New1();
    nb->_box = a;
    return nb;
}

// public static Uno.Geometry.Box BoxTransform(Uno.Geometry.Box box, float4x4 transform) [static] :8073
::g::Uno::Geometry::Box VisualBounds::BoxTransform(::g::Uno::Geometry::Box box, ::g::Uno::Float4x4 transform)
{
    VisualBounds_typeof()->Init();
    ::g::Uno::Float3 A = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 B = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 C = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 D = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 E = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 F = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 G = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 H = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Maximum.Z), transform);
    return ::g::Uno::Geometry::Box__New1(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(A, B), C), D), E), F), G), H), ::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(A, B), C), D), E), F), G), H));
}

// private VisualBounds New() [static] :7837
VisualBounds* VisualBounds::New1()
{
    VisualBounds* obj3 = (VisualBounds*)uNew(VisualBounds_typeof());
    obj3->ctor_();
    return obj3;
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) [static] :7880
VisualBounds* VisualBounds::Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    VisualBounds_typeof()->Init();
    return VisualBounds::Rect1(::g::Uno::Float3__New4(a, 0.0f), ::g::Uno::Float3__New4(b, 0.0f));
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) [static] :7872
VisualBounds* VisualBounds::Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    VisualBounds_typeof()->Init();
    VisualBounds* nb = VisualBounds::New1();
    nb->_box.Minimum = ::g::Uno::Math::Min5(a, b);
    nb->_box.Maximum = ::g::Uno::Math::Max5(a, b);
    return nb;
}

// public static Fuse.VisualBounds get_Empty() [static] :7842
VisualBounds* VisualBounds::Empty()
{
    VisualBounds_typeof()->Init();
    return VisualBounds::_empty();
}

// public static Fuse.VisualBounds get_Infinite() [static] :7853
VisualBounds* VisualBounds::Infinite()
{
    VisualBounds_typeof()->Init();
    return VisualBounds::_infinite();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum VisualContext :7328
uEnumType* VisualContext_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualContext", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Unknown", 0LL,
        "Graphics", 1LL,
        "Native", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public abstract class VisualEvent<THandler, TArgs> :925
// {
static void VisualEvent_build(uType* type)
{
    ::TYPES[151] = ::g::Uno::Collections::List_typeof();
    ::TYPES[46] = ::g::Uno::Exception_typeof();
    ::TYPES[6] = ::g::Fuse::Visual_typeof();
    ::TYPES[152] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array(), NULL);
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        type->T(0),
        type->T(1));
    type->SetFields(0,
        ::TYPES[151/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::VisualEvent, _globalHandlers), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::VisualEvent, _handle), 0);
}

VisualEvent_type* VisualEvent_typeof()
{
    static uSStrong<VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(VisualEvent);
    options.TypeSize = sizeof(VisualEvent_type);
    type = (VisualEvent_type*)uClassType::New("Fuse.VisualEvent`2", options);
    type->fp_build_ = VisualEvent_build;
    return type;
}

// protected generated VisualEvent() :925
void VisualEvent__ctor__fn(VisualEvent* __this)
{
    __this->ctor_();
}

// public void AddGlobalHandler(THandler handler) :940
void VisualEvent__AddGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_globalHandlers), handler);
}

// public void AddHandler(Fuse.Visual visual, THandler handler) :929
void VisualEvent__AddHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uPtr(uPtr(visual)->Properties())->AddToList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) :950
void VisualEvent__InvokeGlobalHandlers_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    __this->InvokeGlobalHandlers(visual, args);
}

// private void InvokeInternal(THandler handler, object sender, TArgs args) :1027
void VisualEvent__InvokeInternal_fn(VisualEvent* __this, void* handler, uObject* sender, ::g::Fuse::VisualEventArgs* args)
{
    try
    {
        __this->Invoke_ex(handler, sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnRaise(object target, object[] args) :1010
void VisualEvent__OnRaise_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaise(target, args);
}

// private void OnRaiseEnabled(object target, object[] args) :1018
void VisualEvent__OnRaiseEnabled_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaiseEnabled(target, args);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) :975
void VisualEvent__Raise_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction)
{
    __this->Raise(args, *type, *bubble, PostBubbleAction);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) :959
void VisualEvent__RaiseWithBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithBubble(args, *type);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) :964
void VisualEvent__RaiseWithBubble1_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, uDelegate* PostBubbleAction)
{
    __this->RaiseWithBubble1(args, *type, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) :970
void VisualEvent__RaiseWithoutBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithoutBubble(args, *type);
}

// public void RemoveGlobalHandler(THandler handler) :945
void VisualEvent__RemoveGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_globalHandlers), handler, &ret4);
}

// public void RemoveHandler(Fuse.Visual visual, THandler handler) :934
void VisualEvent__RemoveHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uPtr(uPtr(visual)->Properties())->RemoveFromList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// protected generated VisualEvent() [instance] :925
void VisualEvent::ctor_()
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
    };
    _handle = ::g::Fuse::Properties::CreateHandle();
    _globalHandlers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) [instance] :950
void VisualEvent::InvokeGlobalHandlers(::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(1/*THandler*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (uPtr(_globalHandlers)->Count() > 0)

        for (int i = 0; i < uPtr(_globalHandlers)->Count(); i++)
            VisualEvent__InvokeInternal_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_globalHandlers), uCRef<int>(i), &ret1), ret1), visual, args);
}

// private void OnRaise(object target, object[] args) [instance] :1010
void VisualEvent::OnRaise(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(1/*THandler*/),
        __type->GetBase(VisualEvent_typeof())->Precalced(2/*TArgs*/),
    };
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __types[1]);
    VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void OnRaiseEnabled(object target, object[] args) [instance] :1018
void VisualEvent::OnRaiseEnabled(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(1/*THandler*/),
        __type->GetBase(VisualEvent_typeof())->Precalced(2/*TArgs*/),
    };
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __types[1]);

    if (uPtr(visual)->IsContextEnabled())
        VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) [instance] :975
void VisualEvent::Raise(::g::Fuse::VisualEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction)
{
    ::g::Fuse::Visual* ret2;
    ::g::Fuse::Visual* ret3;
    ::g::Fuse::Visual* visual = uPtr(args)->Visual();
    uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = uDelegate::New(::TYPES[152/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 2:
        {
            handler = uDelegate::New(::TYPES[152/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 1:
        {
            handler = uDelegate::New(::TYPES[152/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaiseEnabled_fn, this);
            break;
        }
        default:
            return;
    }

    ::g::Uno::Collections::List* list = ::g::Fuse::VisualListCache::Acquire();

    while (visual != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(list), visual);

        if (!bubble)
            break;

        visual = uPtr(visual)->Parent();
    }

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2))->Properties())->ForeachInList(_handle, handler, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret3), ret3), args));

    if (::g::Uno::Delegate::op_Inequality(PostBubbleAction, NULL))
        uPtr(PostBubbleAction)->Invoke(2, args, (uObject*)list);

    InvokeGlobalHandlers(visual, args);
    ::g::Fuse::VisualListCache::Release(list);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :959
void VisualEvent::RaiseWithBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    Raise(args, type, true, NULL);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) [instance] :964
void VisualEvent::RaiseWithBubble1(::g::Fuse::VisualEventArgs* args, int type, uDelegate* PostBubbleAction)
{
    Raise(args, type, true, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :970
void VisualEvent::RaiseWithoutBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    Raise(args, type, false, NULL);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public class VisualEventArgs :1043
// {
static void VisualEventArgs_build(uType* type)
{
    ::STRINGS[93] = uString::Const("visual");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(VisualEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::VisualEventArgs, _IsHandled), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::VisualEventArgs, _Visual), 0);
}

VisualEventArgs_type* VisualEventArgs_typeof()
{
    static uSStrong<VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VisualEventArgs);
    options.TypeSize = sizeof(VisualEventArgs_type);
    type = (VisualEventArgs_type*)uClassType::New("Fuse.VisualEventArgs", options);
    type->fp_build_ = VisualEventArgs_build;
    type->fp_Serialize = VisualEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public VisualEventArgs(Fuse.Visual visual) :1049
void VisualEventArgs__ctor_1_fn(VisualEventArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_1(visual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :1057
void VisualEventArgs__FuseScriptingIScriptEventSerialize_fn(VisualEventArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// public generated bool get_IsHandled() :1045
void VisualEventArgs__get_IsHandled_fn(VisualEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :1045
void VisualEventArgs__set_IsHandled_fn(VisualEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public VisualEventArgs New(Fuse.Visual visual) :1049
void VisualEventArgs__New2_fn(::g::Fuse::Visual* visual, VisualEventArgs** __retval)
{
    *__retval = VisualEventArgs::New2(visual);
}

// private virtual void Serialize(Fuse.Scripting.IEventSerializer s) :1062
void VisualEventArgs__Serialize_fn(VisualEventArgs* __this, uObject* s)
{
}

// public generated Fuse.Visual get_Visual() :1047
void VisualEventArgs__get_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :1047
void VisualEventArgs__set_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public VisualEventArgs(Fuse.Visual visual) [instance] :1049
void VisualEventArgs::ctor_1(::g::Fuse::Visual* visual)
{
    ctor_();

    if (visual == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[93/*"visual"*/]));

    Visual(visual);
}

// public generated bool get_IsHandled() [instance] :1045
bool VisualEventArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :1045
void VisualEventArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public generated Fuse.Visual get_Visual() [instance] :1047
::g::Fuse::Visual* VisualEventArgs::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :1047
void VisualEventArgs::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public VisualEventArgs New(Fuse.Visual visual) [static] :1049
VisualEventArgs* VisualEventArgs::New2(::g::Fuse::Visual* visual)
{
    VisualEventArgs* obj1 = (VisualEventArgs*)uNew(VisualEventArgs_typeof());
    obj1->ctor_1(visual);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public delegate void VisualEventHandler(object sender, Fuse.VisualEventArgs args) :1067
uDelegateType* VisualEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.VisualEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::VisualEventArgs_typeof());
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// public enum VisualEventMode :890
uEnumType* VisualEventMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualEventMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// internal static class VisualListCache :903
// {
// static VisualListCache() :903
static void VisualListCache__cctor__fn(uType* __type)
{
    VisualListCache::_visualListCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[153/*Uno.Collections.List<Uno.Collections.List<Fuse.Visual>>*/]));
}

static void VisualListCache_build(uType* type)
{
    ::TYPES[153] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), NULL);
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[153/*Uno.Collections.List<Uno.Collections.List<Fuse.Visual>>*/], (uintptr_t)&::g::Fuse::VisualListCache::_visualListCache_, uFieldFlagsStatic);
}

uClassType* VisualListCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.VisualListCache", options);
    type->fp_build_ = VisualListCache_build;
    type->fp_cctor_ = VisualListCache__cctor__fn;
    return type;
}

// public static Uno.Collections.List<Fuse.Visual> Acquire() :907
void VisualListCache__Acquire_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = VisualListCache::Acquire();
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) :918
void VisualListCache__Release_fn(::g::Uno::Collections::List* list)
{
    VisualListCache::Release(list);
}

uSStrong< ::g::Uno::Collections::List*> VisualListCache::_visualListCache_;

// public static Uno.Collections.List<Fuse.Visual> Acquire() [static] :907
::g::Uno::Collections::List* VisualListCache::Acquire()
{
    VisualListCache_typeof()->Init();
    ::g::Uno::Collections::List* ret1;

    if (uPtr(VisualListCache::_visualListCache())->Count() > 0)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(VisualListCache::_visualListCache()), uCRef<int>(uPtr(VisualListCache::_visualListCache())->Count() - 1), &ret1), ret1);
        uPtr(VisualListCache::_visualListCache())->RemoveAt(uPtr(VisualListCache::_visualListCache())->Count() - 1);
        return l;
    }

    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Visual>*/]);
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) [static] :918
void VisualListCache::Release(::g::Uno::Collections::List* list)
{
    VisualListCache_typeof()->Init();
    uPtr(list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(VisualListCache::_visualListCache()), list);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public enum SystemFont.Weight :2791
uEnumType* SystemFont__Weight_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Weight", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "UltraLight", 0LL,
        "Thin", 1LL,
        "Light", 2LL,
        "Normal", 3LL,
        "Medium", 4LL,
        "SemiBold", 5LL,
        "Bold", 6LL,
        "Heavy", 7LL,
        "Black", 8LL);
    return type;
}

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------------

// private sealed class TranslationModes.WidthMode :4661
// {
static void TranslationModes__WidthMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__WidthMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.WidthMode", options);
    type->fp_build_ = TranslationModes__WidthMode_build;
    type->fp_ctor_ = (void*)TranslationModes__WidthMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated WidthMode() :4661
void TranslationModes__WidthMode__ctor_1_fn(TranslationModes__WidthMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :4663
void TranslationModes__WidthMode__GetAbsVector_fn(TranslationModes__WidthMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).X, uPtr(t)->Vector()), void();
}

// public generated WidthMode New() :4661
void TranslationModes__WidthMode__New2_fn(TranslationModes__WidthMode** __retval)
{
    *__retval = TranslationModes__WidthMode::New2();
}

// public generated WidthMode() [instance] :4661
void TranslationModes__WidthMode::ctor_1()
{
    ctor_();
}

// public generated WidthMode New() [static] :4661
TranslationModes__WidthMode* TranslationModes__WidthMode::New2()
{
    TranslationModes__WidthMode* obj1 = (TranslationModes__WidthMode*)uNew(TranslationModes__WidthMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class WrapException :3455
// {
static void WrapException_build(uType* type)
{
    ::STRINGS[94] = uString::Const("Wrapped Exception");
    type->SetFields(3);
}

::g::Uno::Exception_type* WrapException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(WrapException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.WrapException", options);
    type->fp_build_ = WrapException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))WrapException__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))WrapException__ToString_fn;
    return type;
}

// public WrapException(Uno.Exception inner) :3457
void WrapException__ctor_3_fn(WrapException* __this, ::g::Uno::Exception* inner)
{
    __this->ctor_3(inner);
}

// public override sealed string get_Message() :3481
void WrapException__get_Message_fn(WrapException* __this, uString** __retval)
{
    return *__retval = uPtr(__this->InnerException())->Message(), void();
}

// public WrapException New(Uno.Exception inner) :3457
void WrapException__New4_fn(::g::Uno::Exception* inner, WrapException** __retval)
{
    *__retval = WrapException::New4(inner);
}

// public override sealed string ToString() :3474
void WrapException__ToString_fn(WrapException* __this, uString** __retval)
{
    return *__retval = uPtr(__this->InnerException())->ToString(), void();
}

// public static Uno.Exception Unwrap(Uno.Exception e) :3464
void WrapException__Unwrap_fn(::g::Uno::Exception* e, ::g::Uno::Exception** __retval)
{
    *__retval = WrapException::Unwrap(e);
}

// public WrapException(Uno.Exception inner) [instance] :3457
void WrapException::ctor_3(::g::Uno::Exception* inner)
{
    ctor_2(::STRINGS[94/*"Wrapped Exc...*/], inner);
}

// public WrapException New(Uno.Exception inner) [static] :3457
WrapException* WrapException::New4(::g::Uno::Exception* inner)
{
    WrapException* obj1 = (WrapException*)uNew(WrapException_typeof());
    obj1->ctor_3(inner);
    return obj1;
}

// public static Uno.Exception Unwrap(Uno.Exception e) [static] :3464
::g::Uno::Exception* WrapException::Unwrap(::g::Uno::Exception* e)
{
    while (uIs(e, WrapException_typeof()) && (uPtr(e)->InnerException() != NULL))
        e = uPtr(e)->InnerException();

    return e;
}
// }

}} // ::g::Fuse
