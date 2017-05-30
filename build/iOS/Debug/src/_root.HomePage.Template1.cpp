// This file was generated based on '.uno/ux11/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomePage.h>
#include <_root.HomePage.Template1.h>
#include <_root.iphod_FuseContr-3d8d18a9.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <iphod.Text.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[6];

namespace g{

// public partial sealed class HomePage.Template1 :25
// {
// static Template1() :40
static void HomePage__Template1__cctor__fn(uType* __type)
{
    HomePage__Template1::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb10"*/]);
    HomePage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void HomePage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb10");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("name");
    ::STRINGS[3] = uString::Const("goToPage");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::HomePage__Template1, __g_nametable1), 0,
        ::g::HomePage_typeof(), offsetof(::g::HomePage__Template1, __parent1), uFieldFlagsWeak,
        ::g::HomePage_typeof(), offsetof(::g::HomePage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template1, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::HomePage__Template1::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* HomePage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(HomePage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("HomePage.Template1", options);
    type->fp_build_ = HomePage__Template1_build;
    type->fp_cctor_ = HomePage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))HomePage__Template1__New1_fn;
    return type;
}

// public Template1(HomePage parent, HomePage parentInstance) :29
void HomePage__Template1__ctor_1_fn(HomePage__Template1* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :43
void HomePage__Template1__New1_fn(HomePage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::iphod::Text* temp = ::g::iphod::Text::New4();
    __this->temp_Value_inst = ::g::iphod_FuseControlsTextControl_Value_Property::New1(temp, HomePage__Template1::__selector0());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"name"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, HomePage__Template1::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"goToPage"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, __this->__g_nametable1, 3);
    ::g::Fuse::Gestures::WhilePressed* temp4 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp5 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb101 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2, __this->__g_nametable1);
    __self1->HitTestMode(6);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb101));
    temp->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    temp5->Factor(0.5f);
    temp5->Duration(0.08);
    temp5->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb101);
    return *__retval = __self1, void();
}

// public Template1 New(HomePage parent, HomePage parentInstance) :29
void HomePage__Template1__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template1** __retval)
{
    *__retval = HomePage__Template1::New2(parent, parentInstance);
}

uSStrong<uArray*> HomePage__Template1::__g_static_nametable1_;
::g::Uno::UX::Selector HomePage__Template1::__selector0_;

// public Template1(HomePage parent, HomePage parentInstance) [instance] :29
void HomePage__Template1::ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(HomePage parent, HomePage parentInstance) [static] :29
HomePage__Template1* HomePage__Template1::New2(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    HomePage__Template1* obj1 = (HomePage__Template1*)uNew(HomePage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
