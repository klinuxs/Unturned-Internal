#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Component::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Component");
return _class;
}
uintptr_t Component::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Component* Component::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Component>();
}
Runtime::MonoVTable* Component::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Component::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Component);
// --------------- START CLASS MEMBERS --------------- //
UnityEngine::Transform* Component::get_transform()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001678)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Component*)>();
return _method(this);
}
UnityEngine::GameObject* Component::get_gameObject()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001679)->GetCallable<UnityEngine::GameObject*(*)(UnityEngine::Component*)>();
return _method(this);
}
UnityEngine::Component* Component::GetComponent(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600167A)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, type);
}
void Component::GetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600167B)->GetCallable<void(*)(UnityEngine::Component*, unknown_type, IntPtr)>();
return _method(this, type, oneFurtherThanResultValue);
}
Boolean Component::TryGetComponent(unknown_type type, UnityEngine::Component*& component)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600167D)->GetCallable<Boolean(*)(UnityEngine::Component*, unknown_type, UnityEngine::Component*&)>();
return _method(this, type, component);
}
UnityEngine::Component* Component::GetComponent1(String* type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600167F)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, String*)>();
return _method(this, type);
}
UnityEngine::Component* Component::GetComponentInChildren(unknown_type t, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001680)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, unknown_type, Boolean)>();
return _method(this, t, includeInactive);
}
UnityEngine::Component* Component::GetComponentInChildren1(unknown_type t)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001681)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, t);
}
Array<UnityEngine::Component*>* Component::GetComponentsInChildren(unknown_type t, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001684)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::Component*, unknown_type, Boolean)>();
return _method(this, t, includeInactive);
}
Array<UnityEngine::Component*>* Component::GetComponentsInChildren1(unknown_type t)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001685)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, t);
}
UnityEngine::Component* Component::GetComponentInParent(unknown_type t, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600168A)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, unknown_type, Boolean)>();
return _method(this, t, includeInactive);
}
UnityEngine::Component* Component::GetComponentInParent1(unknown_type t)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600168B)->GetCallable<UnityEngine::Component*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, t);
}
Array<UnityEngine::Component*>* Component::GetComponentsInParent(unknown_type t, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600168E)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::Component*, unknown_type, Boolean)>();
return _method(this, t, includeInactive);
}
Array<UnityEngine::Component*>* Component::GetComponentsInParent1(unknown_type t)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600168F)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, t);
}
Array<UnityEngine::Component*>* Component::GetComponents(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001693)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::Component*, unknown_type)>();
return _method(this, type);
}
void Component::GetComponentsForListInternal(unknown_type searchType, unknown_type resultList)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001694)->GetCallable<void(*)(UnityEngine::Component*, unknown_type, unknown_type)>();
return _method(this, searchType, resultList);
}
void Component::GetComponents1(unknown_type type, List<UnityEngine::Component*>* results)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001695)->GetCallable<void(*)(UnityEngine::Component*, unknown_type, List<UnityEngine::Component*>*)>();
return _method(this, type, results);
}
String* Component::get_tag()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001697)->GetCallable<String*(*)(UnityEngine::Component*)>();
return _method(this);
}
void Component::set_tag(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001698)->GetCallable<void(*)(UnityEngine::Component*, String*)>();
return _method(this, value);
}
Boolean Component::CompareTag(String* tag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169A)->GetCallable<Boolean(*)(UnityEngine::Component*, String*)>();
return _method(this, tag);
}
void Component::SendMessageUpwards(String* methodName, unknown_type value, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169B)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, value, options);
}
void Component::SendMessageUpwards1(String* methodName, unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169C)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, value);
}
void Component::SendMessageUpwards2(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169D)->GetCallable<void(*)(UnityEngine::Component*, String*)>();
return _method(this, methodName);
}
void Component::SendMessageUpwards3(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169E)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, options);
}
void Component::SendMessage(String* methodName, unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600169F)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, value);
}
void Component::SendMessage1(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A0)->GetCallable<void(*)(UnityEngine::Component*, String*)>();
return _method(this, methodName);
}
void Component::SendMessage2(String* methodName, unknown_type value, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A1)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, value, options);
}
void Component::SendMessage3(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A2)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, options);
}
void Component::BroadcastMessage(String* methodName, unknown_type parameter, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A3)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, parameter, options);
}
void Component::BroadcastMessage1(String* methodName, unknown_type parameter)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A4)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, parameter);
}
void Component::BroadcastMessage2(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A5)->GetCallable<void(*)(UnityEngine::Component*, String*)>();
return _method(this, methodName);
}
void Component::BroadcastMessage3(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016A6)->GetCallable<void(*)(UnityEngine::Component*, String*, unknown_type)>();
return _method(this, methodName, options);
}
};
}
