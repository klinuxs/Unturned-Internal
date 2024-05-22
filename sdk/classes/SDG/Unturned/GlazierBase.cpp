#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* GlazierBase::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "GlazierBase");
return _class;
}
uintptr_t GlazierBase::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::GlazierBase* GlazierBase::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::GlazierBase>();
}
Runtime::MonoVTable* GlazierBase::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool GlazierBase::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(GlazierBase);
// --------------- START CLASS MEMBERS --------------- //
unknown_type GlazierBase::debugStringColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<debugStringColor>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void GlazierBase::debugStringColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<debugStringColor>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type GlazierBase::debugBuilder()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("debugBuilder")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void GlazierBase::debugBuilder_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("debugBuilder")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Int32 GlazierBase::fps()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("fps")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void GlazierBase::fps_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("fps")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Single GlazierBase::lastFrame()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrame")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void GlazierBase::lastFrame_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrame")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Int32 GlazierBase::frames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("frames")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void GlazierBase::frames_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("frames")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
unknown_type GlazierBase::shouldShowTimeOverlay()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldShowTimeOverlay")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void GlazierBase::shouldShowTimeOverlay_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldShowTimeOverlay")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type GlazierBase::clScrollViewSensitivityMultiplier()
{
static uintptr_t _offset = MonoClass()->GetField("clScrollViewSensitivityMultiplier")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void GlazierBase::clScrollViewSensitivityMultiplier_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("clScrollViewSensitivityMultiplier")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean GlazierBase::get_ShouldGameProcessInput()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008B9)->GetCallable<Boolean(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
Boolean GlazierBase::get_ShouldGameProcessKeyDown()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BA)->GetCallable<Boolean(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
void GlazierBase::UpdateDebugStats()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BB)->GetCallable<void(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
void GlazierBase::UpdateDebugString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BC)->GetCallable<void(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
void GlazierBase::OnEnable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BD)->GetCallable<void(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
unknown_type GlazierBase::get_debugStringColor()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BE)->GetCallable<unknown_type(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
void GlazierBase::set_debugStringColor(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008BF)->GetCallable<void(*)(SDG::Unturned::GlazierBase*, unknown_type)>();
return _method(this, value);
}
String* GlazierBase::get_debugString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060008C0)->GetCallable<String*(*)(SDG::Unturned::GlazierBase*)>();
return _method(this);
}
Single GlazierBase::get_ScrollViewSensitivityMultiplier()
{
static auto _method = MonoClass()->GetMethod(0x060008C1)->GetCallable<Single(*)()>();
return _method();
}
};
}
}
