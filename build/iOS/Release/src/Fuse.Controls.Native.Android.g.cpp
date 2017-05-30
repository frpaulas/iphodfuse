// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.-9df591cf.h>
#include <Fuse.Controls.Native.-ca2427b3.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno
// -------------------------------------------------------------------------------------------------------------

// public abstract extern class GraphicsView :143
// {
static void GraphicsView_build(uType* type)
{
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// protected generated GraphicsView() :143
void GraphicsView__ctor__fn(GraphicsView* __this)
{
    __this->ctor_();
}

// protected generated GraphicsView() [instance] :143
void GraphicsView::ctor_()
{
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :1185
// {
static void ScrollView_build(uType* type)
{
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1188
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1188
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1188
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1188
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed extern class SurfaceView :1573
// {
static void SurfaceView_build(uType* type)
{
}

uType* SurfaceView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsView_typeof();
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    return type;
}

// public generated SurfaceView() :1573
void SurfaceView__ctor_1_fn(SurfaceView* __this)
{
    __this->ctor_1();
}

// public generated SurfaceView New() :1573
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// public generated SurfaceView() [instance] :1573
void SurfaceView::ctor_1()
{
    ctor_();
}

// public generated SurfaceView New() [static] :1573
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed extern class TextView :2302
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :2302
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :2302
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :2302
void TextView::ctor_()
{
}

// public generated TextView New() [static] :2302
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
