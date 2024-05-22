#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Resolution::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Resolution");
return _class;
}
uintptr_t Resolution::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Resolution* Resolution::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Resolution>();
}
Runtime::MonoVTable* Resolution::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Resolution::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Resolution);
// --------------- START CLASS MEMBERS --------------- //
Int32 Resolution::get_width()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E0)->GetCallable<Int32(*)(UnityEngine::Resolution*)>();
return _method(this);
}
void Resolution::set_width(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E1)->GetCallable<void(*)(UnityEngine::Resolution*, Int32)>();
return _method(this, value);
}
Int32 Resolution::get_height()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E2)->GetCallable<Int32(*)(UnityEngine::Resolution*)>();
return _method(this);
}
void Resolution::set_height(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E3)->GetCallable<void(*)(UnityEngine::Resolution*, Int32)>();
return _method(this, value);
}
Int32 Resolution::get_refreshRate()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E4)->GetCallable<Int32(*)(UnityEngine::Resolution*)>();
return _method(this);
}
void Resolution::set_refreshRate(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E5)->GetCallable<void(*)(UnityEngine::Resolution*, Int32)>();
return _method(this, value);
}
String* Resolution::ToString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060009E6)->GetCallable<String*(*)(UnityEngine::Resolution*)>();
return _method(this);
}
};
}
