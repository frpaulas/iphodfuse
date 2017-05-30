// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Context.h>
#include <Fuse.Controls.Native.-144a8301.h>
#include <Fuse.Controls.Native.-cfc7adc7.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Visual.h>
#include <GLKit/GLKit.h>
#include <ObjC.Object.h>
#include <OpenGLES/EAGL.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class GraphicsView :394
// {
static void GraphicsView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(7,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::GraphicsView, _glkViewHandle), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::GraphicsView, _hitSurface), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::GraphicsView, _visual), 0);
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))GraphicsView__Dispose_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))GraphicsView__Dispose_fn;
    return type;
}

// public GraphicsView(Fuse.Visual visual) :413
void GraphicsView__ctor_4_fn(GraphicsView* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(visual);
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y) :462
void GraphicsView__BeginDraw_fn(::g::ObjC::Object* handle, int* x, int* y, bool* __retval)
{
    *__retval = GraphicsView::BeginDraw(handle, *x, *y);
}

// private static ObjC.Object CreateContainer() :422
void GraphicsView__CreateContainer_fn(::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateContainer();
}

// private static ObjC.Object CreateGlkView(ObjC.Object container) :443
void GraphicsView__CreateGlkView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateGlkView(container);
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container) :429
void GraphicsView__CreateHitSurface_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateHitSurface(container);
}

// private static void DeleteDrawable(ObjC.Object handle) :502
void GraphicsView__DeleteDrawable_fn(::g::ObjC::Object* handle)
{
    GraphicsView::DeleteDrawable(handle);
}

// public override sealed void Dispose() :491
void GraphicsView__Dispose_fn(GraphicsView* __this)
{
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->_hitSurface);
    __this->_visual = NULL;
    GraphicsView::DeleteDrawable(__this->_glkViewHandle);
    __this->_hitSurface = NULL;
    __this->_glkViewHandle = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void EndDraw(ObjC.Object handle) :485
void GraphicsView__EndDraw_fn(::g::ObjC::Object* handle)
{
    GraphicsView::EndDraw(handle);
}

// private bool Fuse.Controls.Native.IGraphicsView.BeginDraw(int2 size) :457
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval)
{
    ::g::Uno::Int2 size_ = *size;
    return *__retval = GraphicsView::BeginDraw(__this->_glkViewHandle, size_.X, size_.Y), void();
}

// private void Fuse.Controls.Native.IGraphicsView.EndDraw() :459
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this)
{
    GraphicsView::EndDraw(__this->_glkViewHandle);
}

// public GraphicsView New(Fuse.Visual visual) :413
void GraphicsView__New3_fn(::g::Fuse::Visual* visual, GraphicsView** __retval)
{
    *__retval = GraphicsView::New3(visual);
}

// public GraphicsView(Fuse.Visual visual) [instance] :413
void GraphicsView::ctor_4(::g::Fuse::Visual* visual)
{
    ctor_2(GraphicsView::CreateContainer());
    _glkViewHandle = GraphicsView::CreateGlkView(NativeHandle);
    _hitSurface = GraphicsView::CreateHitSurface(NativeHandle);
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, _hitSurface);
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y) [static] :462
bool GraphicsView::BeginDraw(::g::ObjC::Object* handle, int x, int y)
{
    @autoreleasepool
    {
        return [] (::id handle, int x, int y) -> bool
        {
            if (x < 1 || y < 1)
            	return false;
            
            GLKView* glkView = (GLKView*)handle;
            EAGLContext* ctx = [[uContext sharedContext] glContext];
            
            [glkView setContext:ctx];
            [glkView bindDrawable];
            
            int w = (int)[glkView drawableWidth];
            int h = (int)[glkView drawableHeight];
            
            if (w < 1 || h < 1)
            {
            	// throw or something
            }
            
            return true;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static ObjC.Object CreateContainer() [static] :422
::g::ObjC::Object* GraphicsView::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIView* view = [[UIView alloc] init];
            return view;
        } ());
        
    }
    
}

// private static ObjC.Object CreateGlkView(ObjC.Object container) [static] :443
::g::ObjC::Object* GraphicsView::CreateGlkView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            GLKView* view = [[GLKView alloc] init];
            view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
            [view setBackgroundColor: [UIColor colorWithRed:0.0f green: 0.0f blue:0.0f alpha:0.0f]];
            [view setDrawableDepthFormat:GLKViewDrawableDepthFormat16];
            [view setEnableSetNeedsDisplay:true];
            [view setMultipleTouchEnabled:true];
            [c addSubview: view];
            return view;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container) [static] :429
::g::ObjC::Object* GraphicsView::CreateHitSurface(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            UIControl* control = [[UIControl alloc] init];
            control.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[control layer] setAnchorPoint: { 0.0f, 0.0f }];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            [c addSubview: control];
            [c bringSubviewToFront: control];
            return control;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static void DeleteDrawable(ObjC.Object handle) [static] :502
void GraphicsView::DeleteDrawable(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView deleteDrawable];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void EndDraw(ObjC.Object handle) [static] :485
void GraphicsView::EndDraw(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView display];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public GraphicsView New(Fuse.Visual visual) [static] :413
GraphicsView* GraphicsView::New3(::g::Fuse::Visual* visual)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_4(visual);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
