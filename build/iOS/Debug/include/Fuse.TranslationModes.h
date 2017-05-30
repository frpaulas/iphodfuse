// This file was generated based on '../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct TranslationModes;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public static class TranslationModes :4688
// {
uClassType* TranslationModes_typeof();
void TranslationModes__SizeOf_fn(::g::Fuse::Node* node, ::g::Uno::Float3* __retval);

struct TranslationModes : uObject
{
    static uSStrong<uObject*> Height_;
    static uSStrong<uObject*>& Height() { return TranslationModes_typeof()->Init(), Height_; }
    static uSStrong<uObject*> Local_;
    static uSStrong<uObject*>& Local() { return TranslationModes_typeof()->Init(), Local_; }
    static uSStrong<uObject*> ParentSize_;
    static uSStrong<uObject*>& ParentSize() { return TranslationModes_typeof()->Init(), ParentSize_; }
    static uSStrong<uObject*> Size_;
    static uSStrong<uObject*>& Size() { return TranslationModes_typeof()->Init(), Size_; }
    static uSStrong<uObject*> Width_;
    static uSStrong<uObject*>& Width() { return TranslationModes_typeof()->Init(), Width_; }

    static ::g::Uno::Float3 SizeOf(::g::Fuse::Node* node);
};
// }

}} // ::g::Fuse
