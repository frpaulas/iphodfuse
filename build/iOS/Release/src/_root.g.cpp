// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNav-a8c01cdb.h>
#include <_root.FuseControlsNav-bfeb1093.h>
#include <_root.FuseControlsPan-1146454c.h>
#include <_root.FuseControlsPri-3832896e.h>
#include <_root.FuseControlsPri-38e137c8.h>
#include <_root.FuseControlsPri-3bbae333.h>
#include <_root.FuseControlsPri-5e35c2db.h>
#include <_root.FuseControlsPri-6b573bdb.h>
#include <_root.FuseControlsPri-7b4ecfe6.h>
#include <_root.FuseControlsPri-8507d6ea.h>
#include <_root.FuseControlsPri-accbb5bd.h>
#include <_root.FuseControlsPri-ca138e33.h>
#include <_root.FuseControlsPri-ce42971.h>
#include <_root.FuseControlsPri-d52a5a11.h>
#include <_root.FuseControlsPri-d9ada289.h>
#include <_root.FuseControlsPri-e9d2ee5b.h>
#include <_root.FuseControlsScr-18c1b8f6.h>
#include <_root.FuseControlsScr-48813899.h>
#include <_root.FuseControlsScr-60808f6d.h>
#include <_root.FuseControlsScr-f1bcb258.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrim-c6713933.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseNodes_bundle.h>
#include <_root.FuseReactiveJav-1015c09d.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[148];
static uType* TYPES[16];

namespace g{

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.47.7/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[19/*"t"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[20/*"uniform mat...*/], ::STRINGS[21/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[13/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 q,d;uniform vec2 e,f,g,h,i,k,j;attribute vec2 a;varying vec2 r,s;void main(){vec2 u=((((e*(false?vec2(a.x,float(1)-a.y):a))-f)/g)*h)+i;r=k+(u*j);s=u;gl_Position=d*(q*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[1] = uString::Const("uniform vec2 m,l;uniform vec4 n;uniform float o,p;uniform sampler2D t;varying vec2 r,s;void main(){vec4 u=(c?vec4(float(0)):texture2D(t,b?(m+(fract(r)*l)):s))*n;gl_FragColor=(vec4(u.xyz*u.w,u.w)*o)*p;}");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("m");
    ::STRINGS[15] = uString::Const("n");
    ::STRINGS[16] = uString::Const("o");
    ::STRINGS[17] = uString::Const("p");
    ::STRINGS[18] = uString::Const("q");
    ::STRINGS[19] = uString::Const("t");
    ::STRINGS[20] = uString::Const("uniform mat4 h,b;uniform vec2 c,d,e,i;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,i,j);gl_Position=b*(h*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[21] = uString::Const("uniform float f,g;uniform sampler2D l;varying float k;void main(){gl_FragColor=(texture2D(l,vec2(k,.5))*f)*g;}");
    ::STRINGS[22] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[23] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[24] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[25] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportd3ce851b_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :297
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[1/*Fuse.Controls.Panel*/], offsetof(::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :302
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :301
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :303
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :300
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :288
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :293
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :292
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :294
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :295
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :291
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :291
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.47.7/.uno/package
// ------------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsPanels_bundle :0
// {
// static FuseControlsPanels_bundle() :0
static void FuseControlsPanels_bundle__cctor__fn(uType* __type)
{
    FuseControlsPanels_bundle::FreezeDrawable1e2faccf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[26] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[27] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);gl_FragColor=vec4(g.xyz,g.w*c);}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPanels_bundle::FreezeDrawable1e2faccf_, uFieldFlagsStatic);
}

uClassType* FuseControlsPanels_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPanels_bundle", options);
    type->fp_build_ = FuseControlsPanels_bundle_build;
    type->fp_cctor_ = FuseControlsPanels_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPanels_bundle::FreezeDrawable1e2faccf_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text :751
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Text");
    ::TYPES[3] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :757
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[3/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :754
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :756
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[4/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :758
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[3/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[4/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :759
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance] :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static] :751
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value :761
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[29] = uString::Const("Value");
    ::TYPES[6] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :767
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[6/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :764
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :766
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :768
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[6/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :769
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance] :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static] :761
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/package
// ----------------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform mat...*/], ::STRINGS[31/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[30] = uString::Const("uniform mat4 f,b;uniform vec2 c,d;attribute vec2 a;varying vec2 g;void main(){g=(a*c)+d;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[31] = uString::Const("uniform vec4 e;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=texture2D(h,g)*e;}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw7660063a_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :797
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :802
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :801
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :803
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(v);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :780
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :785
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :784
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :786
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :771
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :776
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :775
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :777
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :778
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :847
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :852
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[8/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :851
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :853
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[8/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :854
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :805
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :810
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :809
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :811
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Brush(v);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :829
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :834
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :833
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :835
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :836
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :813
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :818
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :817
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :819
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :821
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :826
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :825
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :827
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Size(v_);
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :788
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Elements.Element*/], offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :793
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :792
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :794
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :795
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :838
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Gestures.SwipeGesture*/], offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :843
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :842
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :844
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :845
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView :179
// {
// static FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :179
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[32] = uString::Const("KeepFocusInView");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :185
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name() :182
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name(), void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType() :184
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :186
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance] :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static] :179
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll :170
// {
// static FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() :170
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"UserScroll"*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_build(uType* type)
{
    ::STRINGS[33] = uString::Const("UserScroll");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :176
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->UserScroll()), void();
}

// public override sealed Uno.UX.Selector get_Name() :173
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name(), void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll New() :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1();
}

// public override sealed Uno.Type get_PropertyType() :175
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :177
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() [instance] :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll New() [static] :170
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property :188
// {
static void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Gestures::Scroller_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Gestures.Scroller*/], offsetof(::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__ctor_3_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :193
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::Scroller*>(obj, ::TYPES[14/*Fuse.Gestures.Scroller*/]))->UserScroll(), void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :192
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :194
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::Scroller*>(obj, ::TYPES[14/*Fuse.Gestures.Scroller*/]))->UserScroll(v_);
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [instance] :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::ctor_3(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [static] :191
FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.47.7/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :196
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[15/*Fuse.Triggers.WhileBool*/], offsetof(::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :201
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :200
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :202
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :199
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/0.47.7/.uno/package
// -----------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform flo...*/], ::STRINGS[35/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[18/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"uniform mat...*/], ::STRINGS[37/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"a"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[35] = uString::Const("uniform sampler2D q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("m");
    ::STRINGS[15] = uString::Const("n");
    ::STRINGS[16] = uString::Const("o");
    ::STRINGS[18] = uString::Const("q");
    ::STRINGS[36] = uString::Const("uniform mat4 f,c;uniform vec2 d,e;attribute vec2 a;varying vec2 g;vec2 i(vec2 j){vec2 k=j.xy;if(b==1)return vec2(k.y,1.-k.x);else if(b==2)return vec2(1.-k.x,1.-k.y);else if(b==3)return vec2(1.-k.y,k.x);else return k;}void main(){g=i((a*d)+e);gl_Position=c*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[37] = uString::Const("uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(texture2D(h,g).xyz,1.);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement5c829975_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.47.7/.uno/package
// ----------------------------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"attribute v...*/], ::STRINGS[39/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("attribute vec2 a;varying vec2 h;void main(){h=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[39] = uString::Const("uniform float e[b],f;uniform vec4 g[c];varying vec2 h;float i(float k,float l,float m){return clamp((m-k)/(l-k),.0,1.);}vec4 j(vec2 k){float l=e[0]+(f*k.x);vec4 m=vec4(g[0].xyz*g[0].w,g[0].w);for(int n=0;n<(b-1);n++){float o=e[n];float p=e[n+1];vec4 q=g[n+1];m=mix(m,vec4(q.xyz*q.w,q.w),d?smoothstep(o,p,l):i(o,p,l));}return m;}void main(){gl_FragColor=j(h);}");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/0.47.7/.uno/package
// ---------------------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform vec...*/], ::STRINGS[41/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[43/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[45/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[49/*"x"*/], ::STRINGS[50/*"y"*/], ::STRINGS[51/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform vec...*/], ::STRINGS[53/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[46/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[55/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[17/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform vec...*/], ::STRINGS[56/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[46/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform vec...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[43/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[42/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[64/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[49/*"x"*/], ::STRINGS[50/*"y"*/], ::STRINGS[51/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[66/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[68/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[71/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[73/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[74/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[49/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[77/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[74/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[78/*"uniform vec...*/], ::STRINGS[79/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[81/*"uniform vec...*/], ::STRINGS[82/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[81/*"uniform vec...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[84/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[90/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[19/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[91/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[19/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform flo...*/], ::STRINGS[93/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[96/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[97/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[98/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[97/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[104/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[106/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[49/*"x"*/], ::STRINGS[107/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[108/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[42/*"r"*/], ::STRINGS[46/*"s"*/], ::STRINGS[19/*"t"*/], ::STRINGS[43/*"u"*/], ::STRINGS[47/*"v"*/], ::STRINGS[48/*"w"*/], ::STRINGS[49/*"x"*/], ::STRINGS[107/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[47/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[114/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[18/*"q"*/], ::STRINGS[47/*"v"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[40] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float s;varying vec2 t;float v(vec2 w,vec2 x,float y){vec2 z=(w*e)-f;float A=dot(z,x)/y;return (A-g.x)/g.y;}void main(){vec2 w=a*b;vec2 x=w+c;s=v(x/e,n,o);t=w;gl_Position=d*vec4(x,0.,1.);}");
    ::STRINGS[41] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){gl_FragColor=(texture2D(u,vec2(s,.5))*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))))*m;}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("m");
    ::STRINGS[15] = uString::Const("n");
    ::STRINGS[16] = uString::Const("o");
    ::STRINGS[17] = uString::Const("p");
    ::STRINGS[18] = uString::Const("q");
    ::STRINGS[42] = uString::Const("r");
    ::STRINGS[43] = uString::Const("u");
    ::STRINGS[44] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 z,A,B;void main(){vec2 D=a*d;vec2 E=D+e;vec2 F=((((g*(E/g))-h)/i)*j)+k;z=m+(F*l);A=F;B=D;gl_Position=f*vec4(E,0.,1.);}");
    ::STRINGS[45] = uString::Const("uniform vec2 o,n,w,x,y;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D C;varying vec2 z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(z)*n)):A))*p;gl_FragColor=(vec4(D.xyz*D.w,D.w)*(clamp(.5-(((abs((length(B)-q)-r)-s)*t)*u),float(0),float(1))*clamp(.5-((min(dot(B,w),min(dot(B,x),dot(B,y)))*t)*u),float(0),float(1))))*v;}");
    ::STRINGS[46] = uString::Const("s");
    ::STRINGS[19] = uString::Const("t");
    ::STRINGS[47] = uString::Const("v");
    ::STRINGS[48] = uString::Const("w");
    ::STRINGS[49] = uString::Const("x");
    ::STRINGS[50] = uString::Const("y");
    ::STRINGS[51] = uString::Const("C");
    ::STRINGS[52] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float q;varying vec2 r;float t(vec2 u,vec2 v,float w){vec2 x=(u*e)-f;float y=dot(x,v)/w;return (y-g.x)/g.y;}void main(){vec2 u=a*b;vec2 v=u+c;q=t(v/e,l,m);r=u;gl_Position=d*vec4(v,0.,1.);}");
    ::STRINGS[53] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){gl_FragColor=(texture2D(s,vec2(q,.5))*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(r,n),max(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))))*k;}");
    ::STRINGS[54] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float n;varying vec2 o;float q(vec2 r,vec2 s,float t){vec2 u=(r*e)-f;float v=dot(u,s)/t;return (v-g.x)/g.y;}void main(){vec2 r=a*b;vec2 s=r+c;n=q(s/e,l,m);o=r;gl_Position=d*vec4(s,0.,1.);}");
    ::STRINGS[55] = uString::Const("uniform float h,i,j,k;uniform sampler2D p;varying float n;varying vec2 o;void main(){gl_FragColor=(texture2D(p,vec2(n,.5))*(clamp(.5-(((length(o)-h)*i)*j),float(0),float(1))*float(1)))*k;}");
    ::STRINGS[56] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){gl_FragColor=(texture2D(s,vec2(q,.5))*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(r,n),min(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))))*k;}");
    ::STRINGS[57] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){gl_FragColor=(texture2D(u,vec2(s,.5))*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))))*m;}");
    ::STRINGS[58] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float p;varying vec2 q;float s(vec2 t,vec2 u,float v){vec2 w=(t*e)-f;float x=dot(w,u)/v;return (x-g.x)/g.y;}void main(){vec2 t=a*b;vec2 u=t+c;p=s(u/e,n,o);q=t;gl_Position=d*vec4(u,0.,1.);}");
    ::STRINGS[59] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D r;varying float p;varying vec2 q;void main(){gl_FragColor=(texture2D(r,vec2(p,.5))*(clamp(.5-(((abs((length(q)-h)-i)-j)*k)*l),float(0),float(1))*float(1)))*m;}");
    ::STRINGS[60] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 k;void main(){vec2 l=a*b;k=l;gl_Position=d*vec4(l+c,0.,1.);}");
    ::STRINGS[61] = uString::Const("uniform float e,f,g,h,i;uniform vec4 j;varying vec2 k;void main(){gl_FragColor=j*(clamp(.5-(((abs((length(k)-e)-f)-g)*h)*i),float(0),float(1))*float(1));}");
    ::STRINGS[62] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 o;void main(){vec2 p=a*b;o=p;gl_Position=d*vec4(p+c,0.,1.);}");
    ::STRINGS[63] = uString::Const("uniform float e,f,g,h,i,k;uniform vec2 l,m,n;uniform vec4 j;varying vec2 o;void main(){gl_FragColor=(j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(o,l),min(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))))*k;}");
    ::STRINGS[64] = uString::Const("uniform vec2 o,n,w,x,y;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D C;varying vec2 z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(z)*n)):A))*p;gl_FragColor=(vec4(D.xyz*D.w,D.w)*(clamp(.5-(((abs((length(B)-q)-r)-s)*t)*u),float(0),float(1))*clamp(.5-((max(dot(B,w),max(dot(B,x),dot(B,y)))*t)*u),float(0),float(1))))*v;}");
    ::STRINGS[65] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 n;void main(){vec2 o=a*b;n=o;gl_Position=d*vec4(o+c,0.,1.);}");
    ::STRINGS[66] = uString::Const("uniform float e,f,g,h,i;uniform vec2 k,l,m;uniform vec4 j;varying vec2 n;void main(){gl_FragColor=j*(clamp(.5-(((abs((length(n)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(n,k),min(dot(n,l),dot(n,m)))*h)*i),float(0),float(1)));}");
    ::STRINGS[67] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 l;void main(){vec2 m=a*b;l=m;gl_Position=d*vec4(m+c,0.,1.);}");
    ::STRINGS[68] = uString::Const("uniform float e,f,g,h,i,k;uniform vec4 j;varying vec2 l;void main(){gl_FragColor=(j*(clamp(.5-(((abs((length(l)-e)-f)-g)*h)*i),float(0),float(1))*float(1)))*k;}");
    ::STRINGS[69] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 w,x,y;void main(){vec2 A=a*d;vec2 B=A+e;vec2 C=((((g*(B/g))-h)/i)*j)+k;w=m+(C*l);x=C;y=A;gl_Position=f*vec4(B,0.,1.);}");
    ::STRINGS[70] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D z;varying vec2 w,x,y;void main(){vec4 A=(c?vec4(float(0)):texture2D(z,b?(o+(fract(w)*n)):x))*p;gl_FragColor=(vec4(A.xyz*A.w,A.w)*(clamp(.5-(((abs((length(y)-q)-r)-s)*t)*u),float(0),float(1))*float(1)))*v;}");
    ::STRINGS[71] = uString::Const("z");
    ::STRINGS[72] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 x,y,z;void main(){vec2 B=a*d;vec2 C=B+e;vec2 D=((((g*(C/g))-h)/i)*j)+k;x=m+(D*l);y=D;z=B;gl_Position=f*vec4(C,0.,1.);}");
    ::STRINGS[73] = uString::Const("uniform vec2 o,n,u,v,w;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D A;varying vec2 x,y,z;void main(){vec4 B=(c?vec4(float(0)):texture2D(A,b?(o+(fract(x)*n)):y))*p;gl_FragColor=(vec4(B.xyz*B.w,B.w)*(clamp(.5-(((length(z)-q)*r)*s),float(0),float(1))*clamp(.5-((min(dot(z,u),min(dot(z,v),dot(z,w)))*r)*s),float(0),float(1))))*t;}");
    ::STRINGS[74] = uString::Const("A");
    ::STRINGS[75] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 u,v,w;void main(){vec2 y=a*d;vec2 z=y+e;vec2 A=((((g*(z/g))-h)/i)*j)+k;u=m+(A*l);v=A;w=y;gl_Position=f*vec4(z,0.,1.);}");
    ::STRINGS[76] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D x;varying vec2 u,v,w;void main(){vec4 y=(c?vec4(float(0)):texture2D(x,b?(o+(fract(u)*n)):v))*p;gl_FragColor=(vec4(y.xyz*y.w,y.w)*(clamp(.5-(((length(w)-q)*r)*s),float(0),float(1))*float(1)))*t;}");
    ::STRINGS[77] = uString::Const("uniform vec2 o,n,u,v,w;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D A;varying vec2 x,y,z;void main(){vec4 B=(c?vec4(float(0)):texture2D(A,b?(o+(fract(x)*n)):y))*p;gl_FragColor=(vec4(B.xyz*B.w,B.w)*(clamp(.5-(((length(z)-q)*r)*s),float(0),float(1))*clamp(.5-((max(dot(z,u),max(dot(z,v),dot(z,w)))*r)*s),float(0),float(1))))*t;}");
    ::STRINGS[78] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 j;void main(){vec2 k=a*b;j=k;gl_Position=d*vec4(k+c,0.,1.);}");
    ::STRINGS[79] = uString::Const("uniform float e,f,g,i;uniform vec4 h;varying vec2 j;void main(){gl_FragColor=(h*(clamp(.5-(((length(j)-e)*f)*g),float(0),float(1))*float(1)))*i;}");
    ::STRINGS[80] = uString::Const("uniform float e,f,g,h,i;uniform vec2 k,l,m;uniform vec4 j;varying vec2 n;void main(){gl_FragColor=j*(clamp(.5-(((abs((length(n)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(n,k),max(dot(n,l),dot(n,m)))*h)*i),float(0),float(1)));}");
    ::STRINGS[81] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 m;void main(){vec2 n=a*b;m=n;gl_Position=d*vec4(n+c,0.,1.);}");
    ::STRINGS[82] = uString::Const("uniform float e,f,g,i;uniform vec2 j,k,l;uniform vec4 h;varying vec2 m;void main(){gl_FragColor=(h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(m,j),max(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))))*i;}");
    ::STRINGS[83] = uString::Const("uniform float e,f,g,i;uniform vec2 j,k,l;uniform vec4 h;varying vec2 m;void main(){gl_FragColor=(h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(m,j),min(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))))*i;}");
    ::STRINGS[84] = uString::Const("uniform float e,f,g,h,i,k;uniform vec2 l,m,n;uniform vec4 j;varying vec2 o;void main(){gl_FragColor=(j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(o,l),max(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))))*k;}");
    ::STRINGS[85] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 i;void main(){vec2 j=a*b;i=j;gl_Position=d*vec4(j+c,0.,1.);}");
    ::STRINGS[86] = uString::Const("uniform float e,f,g;uniform vec4 h;varying vec2 i;void main(){gl_FragColor=h*(clamp(.5-(((length(i)-e)*f)*g),float(0),float(1))*float(1));}");
    ::STRINGS[87] = uString::Const("uniform float e,f,g;uniform vec2 i,j,k;uniform vec4 h;varying vec2 l;void main(){gl_FragColor=h*(clamp(.5-(((length(l)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(l,i),min(dot(l,j),dot(l,k)))*f)*g),float(0),float(1)));}");
    ::STRINGS[88] = uString::Const("uniform float e,f,g;uniform vec2 i,j,k;uniform vec4 h;varying vec2 l;void main(){gl_FragColor=h*(clamp(.5-(((length(l)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(l,i),max(dot(l,j),dot(l,k)))*f)*g),float(0),float(1)));}");
    ::STRINGS[89] = uString::Const("uniform float e[d],o;uniform vec2 f,h,i,j,n;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p,q;varying vec2 r,s;float u(vec2 v,vec2 w,float x){vec2 y=(v*h)-i;float z=dot(y,w)/x;return (z-j.x)/j.y;}void main(){vec2 v=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=u(v/h,n,o);r=v;s=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(v,0.,1.);}");
    ::STRINGS[90] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){gl_FragColor=(texture2D(t,vec2(q,.5))*clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1)))*m;}");
    ::STRINGS[91] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){float v=clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1));gl_FragColor=(texture2D(t,vec2(q,.5))*(((v*v)*v)*((v*((v*float(6))-float(15)))+float(10))))*m;}");
    ::STRINGS[92] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float k;varying vec2 l,m;void main(){vec2 n=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;k=e[int(c)];l=n;m=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(n,0.,1.);}");
    ::STRINGS[93] = uString::Const("uniform float h,i;uniform vec4 j;varying float k;varying vec2 l,m;void main(){gl_FragColor=j*clamp(.5-(((distance(l,m)-k)*h)*i),float(0),float(1));}");
    ::STRINGS[94] = uString::Const("uniform float h,i;uniform vec4 j;varying float k;varying vec2 l,m;void main(){float n=clamp(.5-(((distance(l,m)-k)*h)*i),float(0),float(1));gl_FragColor=j*(((n*n)*n)*((n*((n*float(6))-float(15)))+float(10)));}");
    ::STRINGS[95] = uString::Const("uniform float g[d];uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float w;varying vec2 x,y,z,A;void main(){vec2 C=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 D=((((j*(C/j))-k)/l)*m)+n;w=g[int(c)];x=p+(D*o);y=D;z=C;A=vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h;gl_Position=i*vec4(C,0.,1.);}");
    ::STRINGS[96] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v;uniform sampler2D B;varying float w;varying vec2 x,y,z,A;void main(){vec4 C=(f?vec4(float(0)):texture2D(B,e?(r+(fract(x)*q)):y))*s;gl_FragColor=(vec4(C.xyz*C.w,C.w)*clamp(.5-(((distance(z,A)-w)*t)*u),float(0),float(1)))*v;}");
    ::STRINGS[97] = uString::Const("B");
    ::STRINGS[98] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v;uniform sampler2D B;varying float w;varying vec2 x,y,z,A;void main(){vec4 C=(f?vec4(float(0)):texture2D(B,e?(r+(fract(x)*q)):y))*s;float D=clamp(.5-(((distance(z,A)-w)*t)*u),float(0),float(1));gl_FragColor=(vec4(C.xyz*C.w,C.w)*(((D*D)*D)*((D*((D*float(6))-float(15)))+float(10))))*v;}");
    ::STRINGS[99] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=p;o=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(p,0.,1.);}");
    ::STRINGS[100] = uString::Const("uniform float h,i,j,k;uniform vec4 l;varying float m;varying vec2 n,o;void main(){gl_FragColor=l*clamp(.5-(((abs((distance(n,o)-m)-h)-i)*j)*k),float(0),float(1));}");
    ::STRINGS[101] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float l;varying vec2 m,n;void main(){vec2 o=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;l=e[int(c)];m=o;n=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(o,0.,1.);}");
    ::STRINGS[102] = uString::Const("uniform float h,i,k;uniform vec4 j;varying float l;varying vec2 m,n;void main(){gl_FragColor=(j*clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1)))*k;}");
    ::STRINGS[103] = uString::Const("uniform float h,i,k;uniform vec4 j;varying float l;varying vec2 m,n;void main(){float o=clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1));gl_FragColor=(j*(((o*o)*o)*((o*((o*float(6))-float(15)))+float(10))))*k;}");
    ::STRINGS[104] = uString::Const("uniform float h,i,j,k;uniform vec4 l;varying float m;varying vec2 n,o;void main(){float p=clamp(.5-(((abs((distance(n,o)-m)-h)-i)*j)*k),float(0),float(1));gl_FragColor=l*(((p*p)*p)*((p*((p*float(6))-float(15)))+float(10)));}");
    ::STRINGS[105] = uString::Const("uniform float g[d];uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float y;varying vec2 z,A,B,C;void main(){vec2 E=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 F=((((j*(E/j))-k)/l)*m)+n;y=g[int(c)];z=p+(F*o);A=F;B=E;C=vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h;gl_Position=i*vec4(E,0.,1.);}");
    ::STRINGS[106] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;float F=clamp(.5-(((abs((distance(B,C)-y)-t)-u)*v)*w),float(0),float(1));gl_FragColor=(vec4(E.xyz*E.w,E.w)*(((F*F)*F)*((F*((F*float(6))-float(15)))+float(10))))*x;}");
    ::STRINGS[107] = uString::Const("D");
    ::STRINGS[108] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;gl_FragColor=(vec4(E.xyz*E.w,E.w)*clamp(.5-(((abs((distance(B,C)-y)-t)-u)*v)*w),float(0),float(1)))*x;}");
    ::STRINGS[109] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=q;p=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(q,0.,1.);}");
    ::STRINGS[110] = uString::Const("uniform float h,i,j,k,m;uniform vec4 l;varying float n;varying vec2 o,p;void main(){float q=clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1));gl_FragColor=(l*(((q*q)*q)*((q*((q*float(6))-float(15)))+float(10))))*m;}");
    ::STRINGS[111] = uString::Const("uniform float h,i,j,k,m;uniform vec4 l;varying float n;varying vec2 o,p;void main(){gl_FragColor=(l*clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1)))*m;}");
    ::STRINGS[112] = uString::Const("uniform float e[d],q;uniform vec2 f,h,i,j,p;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;float w(vec2 x,vec2 y,float z){vec2 A=(x*h)-i;float B=dot(A,y)/z;return (B-j.x)/j.y;}void main(){vec2 x=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=w(x/h,p,q);t=x;u=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(x,0.,1.);}");
    ::STRINGS[113] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){gl_FragColor=(texture2D(v,vec2(s,.5))*clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1)))*o;}");
    ::STRINGS[114] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){float x=clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1));gl_FragColor=(texture2D(v,vec2(s,.5))*(((x*x)*x)*((x*((x*float(6))-float(15)))+float(10))))*o;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647386_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647387_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647389_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305ca_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e74ba4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0edda_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647386_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647387_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647389_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305ca_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e74ba4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0edda_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0eddb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Effects/0.47.7/.uno/package
// ----------------------------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform mat...*/], ::STRINGS[116/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[117/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
    FuseEffects_bundle::Duotone26eb7e3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform mat...*/], ::STRINGS[118/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"attribute v...*/], ::STRINGS[120/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"attribute v...*/], ::STRINGS[122/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[4/*"a"*/], ::STRINGS[3/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[123/*"uniform vec...*/], ::STRINGS[124/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[19/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform vec...*/], ::STRINGS[126/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[14/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform mat...*/], ::STRINGS[128/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[18/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform mat...*/], ::STRINGS[130/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform mat...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform mat...*/], ::STRINGS[132/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[115] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[116] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[24] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[25] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::STRINGS[26] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[117] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/max(g.w,1e-05),g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[118] = uString::Const("uniform vec3 c,d;uniform float e;uniform sampler2D h;varying vec2 g;void main(){vec4 i=texture2D(h,g);vec4 j=vec4(i.xyz/max(i.w,1e-05),i.w);gl_FragColor=vec4(mix(j.xyz,mix(c,d,sqrt(dot(j.xyz*j.xyz,vec3(.299,.587,.114)))).xyz,e),j.w);}");
    ::STRINGS[119] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[120] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[121] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[122] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[123] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[124] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[19] = uString::Const("t");
    ::STRINGS[125] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[126] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[14] = uString::Const("m");
    ::STRINGS[127] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[128] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[18] = uString::Const("q");
    ::STRINGS[129] = uString::Const("uniform mat4 e,b;uniform vec2 c,d;attribute vec2 a;varying vec2 f,g;void main(){vec2 j=true?vec2(a.x,float(1)-a.y):a;f=j;g=(vec2(j.x,float(1)-j.y)*c)+d;gl_Position=b*(e*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[130] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).x;}");
    ::STRINGS[131] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){vec4 j=texture2D(i,g);gl_FragColor=texture2D(h,f)*vec4(j.xyz*j.w,j.w);}");
    ::STRINGS[132] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).w;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur115443aa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Duotone26eb7e3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur115443aa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Duotone26eb7e3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform vec...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform mat...*/], ::STRINGS[136/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[7/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform vec...*/], ::STRINGS[138/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[6/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform flo...*/], ::STRINGS[140/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"m"*/], ::STRINGS[15/*"n"*/], ::STRINGS[16/*"o"*/], ::STRINGS[17/*"p"*/], ::STRINGS[42/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[133] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[134] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[135] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[136] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[22] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[23] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[137] = uString::Const("uniform vec2 b,c;attribute vec2 a;varying vec2 d;void main(){d=(a*b)/c;gl_Position=vec4((a*float(2))-float(1),float(0),float(1));}");
    ::STRINGS[138] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,fract(d));}");
    ::STRINGS[139] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[140] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("m");
    ::STRINGS[15] = uString::Const("n");
    ::STRINGS[16] = uString::Const("o");
    ::STRINGS[17] = uString::Const("p");
    ::STRINGS[42] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementDraw1f583284_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementDraw1f583284_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker447c61dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/.uno/package
// --------------------------------------------------------------------------------------------------

// public static generated class FuseNodes_bundle :0
// {
// static FuseNodes_bundle() :0
static void FuseNodes_bundle__cctor__fn(uType* __type)
{
    FuseNodes_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform vec...*/], ::STRINGS[142/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[3/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[141] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[142] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseNodes_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic);
}

uClassType* FuseNodes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseNodes_bundle", options);
    type->fp_build_ = FuseNodes_bundle_build;
    type->fp_cctor_ = FuseNodes_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawHelpers4c5c39ae_;
// }

// /Users/paulsutcliffe/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/.uno/package
// ----------------------------------------------------------------------------------------------------------------

// public static generated class FuseReactiveJavaScript_bundle :0
// {
// static FuseReactiveJavaScript_bundle() :0
static void FuseReactiveJavaScript_bundle__cctor__fn(uType* __type)
{
    FuseReactiveJavaScript_bundle::Diagnostics3b00d332_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[144/*"diagnostics...*/]);
    FuseReactiveJavaScript_bundle::es6promiseminf70d903d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[145/*"es6-promise...*/]);
    FuseReactiveJavaScript_bundle::Observable0f7ec1b5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[146/*"observable-...*/]);
    FuseReactiveJavaScript_bundle::setTimeout69707bc5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[143/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[147/*"settimeout-...*/]);
}

static void FuseReactiveJavaScript_bundle_build(uType* type)
{
    ::STRINGS[143] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[144] = uString::Const("diagnostics-4c71cb84.js");
    ::STRINGS[145] = uString::Const("es6-promise.min-a3069df9.js");
    ::STRINGS[146] = uString::Const("observable-66183501.js");
    ::STRINGS[147] = uString::Const("settimeout-cb0e3491.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Diagnostics3b00d332_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::es6promiseminf70d903d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Observable0f7ec1b5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::setTimeout69707bc5_, uFieldFlagsStatic);
}

uClassType* FuseReactiveJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactiveJavaScript_bundle", options);
    type->fp_build_ = FuseReactiveJavaScript_bundle_build;
    type->fp_cctor_ = FuseReactiveJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Diagnostics3b00d332_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::es6promiseminf70d903d_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Observable0f7ec1b5_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::setTimeout69707bc5_;
// }

} // ::g
