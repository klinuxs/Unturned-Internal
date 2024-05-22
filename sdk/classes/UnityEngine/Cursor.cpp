#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Cursor::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Cursor");
return _class;
}
uintptr_t Cursor::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Cursor* Cursor::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Cursor>();
}
Runtime::MonoVTable* Cursor::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Cursor::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Cursor);
// --------------- START CLASS MEMBERS --------------- //
void Cursor::SetCursor(unknown_type texture, unknown_type cursorMode)
{
static auto _method = MonoClass()->GetMethod(0x0600133D)->GetCallable<void(*)(unknown_type, unknown_type)>();
return _method(texture, cursorMode);
}
void Cursor::SetCursor1(unknown_type texture, UnityEngine::Vector2 hotspot, unknown_type cursorMode)
{
static auto _method = MonoClass()->GetMethod(0x0600133E)->GetCallable<void(*)(unknown_type, UnityEngine::Vector2, unknown_type)>();
return _method(texture, hotspot, cursorMode);
}
Boolean Cursor::get_visible()
{
static auto _method = MonoClass()->GetMethod(0x0600133F)->GetCallable<Boolean(*)()>();
return _method();
}
void Cursor::set_visible(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06001340)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
UnityEngine::CursorLockMode Cursor::get_lockState()
{
static auto _method = MonoClass()->GetMethod(0x06001341)->GetCallable<UnityEngine::CursorLockMode(*)()>();
return _method();
}
void Cursor::set_lockState(UnityEngine::CursorLockMode value)
{
static auto _method = MonoClass()->GetMethod(0x06001342)->GetCallable<void(*)(UnityEngine::CursorLockMode)>();
return _method(value);
}
void Cursor::SetCursor_Injected(unknown_type texture, UnityEngine::Vector2& hotspot, unknown_type cursorMode)
{
static auto _method = MonoClass()->GetMethod(0x06001344)->GetCallable<void(*)(unknown_type, UnityEngine::Vector2&, unknown_type)>();
return _method(texture, hotspot, cursorMode);
}
};
}
