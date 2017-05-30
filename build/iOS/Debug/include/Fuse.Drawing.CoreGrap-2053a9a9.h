// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Drawing{struct CoreGraphicsDrawHelper;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class CoreGraphicsDrawHelper :1400
// {
uType* CoreGraphicsDrawHelper_typeof();
void CoreGraphicsDrawHelper__ctor__fn(CoreGraphicsDrawHelper* __this);
void CoreGraphicsDrawHelper__DrawImageFill_fn(CoreGraphicsDrawHelper* __this, ::g::Uno::Graphics::Texture2D* texture);
void CoreGraphicsDrawHelper__init_DrawCalls_fn(CoreGraphicsDrawHelper* __this);
void CoreGraphicsDrawHelper__New1_fn(CoreGraphicsDrawHelper** __retval);

struct CoreGraphicsDrawHelper : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2b8a7405;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawImageFill_VertexData_2b8a7405_1_1_1;
    static uSStrong<CoreGraphicsDrawHelper*> Singleton_;
    static uSStrong<CoreGraphicsDrawHelper*>& Singleton() { return CoreGraphicsDrawHelper_typeof()->Init(), Singleton_; }

    void ctor_();
    void DrawImageFill(::g::Uno::Graphics::Texture2D* texture);
    void init_DrawCalls();
    static CoreGraphicsDrawHelper* New1();
};
// }

}}} // ::g::Fuse::Drawing
