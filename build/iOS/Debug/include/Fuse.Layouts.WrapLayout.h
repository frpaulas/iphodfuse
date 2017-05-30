// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class WrapLayout :2381
// {
::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();
void WrapLayout__ctor_2_fn(WrapLayout* __this);
void WrapLayout__Arrange_fn(WrapLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval);
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void WrapLayout__get_EffectiveRowAlignment_fn(WrapLayout* __this, int* __retval);
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int* __retval);
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int* value);
void WrapLayout__GetContentSize_fn(WrapLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void WrapLayout__get_IsVert_fn(WrapLayout* __this, bool* __retval);
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value);
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value);
void WrapLayout__New2_fn(WrapLayout** __retval);
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int* __retval);
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int* value);
void WrapLayout__get_RowAlignment_fn(WrapLayout* __this, int* __retval);
void WrapLayout__set_RowAlignment_fn(WrapLayout* __this, int* value);

struct WrapLayout : ::g::Fuse::Layouts::Layout
{
    int _flowDirection;
    bool _hasItemHeight;
    bool _hasItemWidth;
    float _itemHeight;
    float _itemWidth;
    int _orientation;
    int _rowAlignment;

    void ctor_2();
    ::g::Uno::Float2 Arrange(uObject* elements, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding);
    int EffectiveRowAlignment();
    int FlowDirection();
    void FlowDirection(int value);
    bool IsVert();
    float ItemHeight();
    void ItemHeight(float value);
    float ItemWidth();
    void ItemWidth(float value);
    int Orientation();
    void Orientation(int value);
    int RowAlignment();
    void RowAlignment(int value);
    static WrapLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
