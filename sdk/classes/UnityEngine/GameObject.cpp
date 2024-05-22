#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* GameObject::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "GameObject");
return _class;
}
uintptr_t GameObject::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::GameObject* GameObject::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::GameObject>();
}
Runtime::MonoVTable* GameObject::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool GameObject::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(GameObject);
// --------------- START CLASS MEMBERS --------------- //
UnityEngine::GameObject* GameObject::CreatePrimitive(unknown_type type)
{
static auto _method = MonoClass()->GetMethod(0x060016CA)->GetCallable<UnityEngine::GameObject*(*)(unknown_type)>();
return _method(type);
}
UnityEngine::Component* GameObject::GetComponent(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016CC)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
void GameObject::GetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016CD)->GetCallable<void(*)(UnityEngine::GameObject*, unknown_type, IntPtr)>();
return _method(this, type, oneFurtherThanResultValue);
}
UnityEngine::Component* GameObject::GetComponentByName(String* type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016CE)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, String*)>();
return _method(this, type);
}
UnityEngine::Component* GameObject::GetComponent1(String* type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016CF)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, String*)>();
return _method(this, type);
}
UnityEngine::Component* GameObject::GetComponentInChildren(unknown_type type, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D0)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type, Boolean)>();
return _method(this, type, includeInactive);
}
UnityEngine::Component* GameObject::GetComponentInChildren1(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D1)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
UnityEngine::Component* GameObject::GetComponentInParent(unknown_type type, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D4)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type, Boolean)>();
return _method(this, type, includeInactive);
}
UnityEngine::Component* GameObject::GetComponentInParent1(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D5)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
unknown_type GameObject::GetComponentsInternal(unknown_type type, Boolean useSearchTypeAsArrayReturnType, Boolean recursive, Boolean includeInactive, Boolean reverse, unknown_type resultList)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D8)->GetCallable<unknown_type(*)(UnityEngine::GameObject*, unknown_type, Boolean, Boolean, Boolean, Boolean, unknown_type)>();
return _method(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
}
Array<UnityEngine::Component*>* GameObject::GetComponents(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016D9)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
void GameObject::GetComponents1(unknown_type type, List<UnityEngine::Component*>* results)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016DB)->GetCallable<void(*)(UnityEngine::GameObject*, unknown_type, List<UnityEngine::Component*>*)>();
return _method(this, type, results);
}
Array<UnityEngine::Component*>* GameObject::GetComponentsInChildren(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016DD)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
Array<UnityEngine::Component*>* GameObject::GetComponentsInChildren1(unknown_type type, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016DE)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::GameObject*, unknown_type, Boolean)>();
return _method(this, type, includeInactive);
}
Array<UnityEngine::Component*>* GameObject::GetComponentsInParent(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016E3)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
Array<UnityEngine::Component*>* GameObject::GetComponentsInParent1(unknown_type type, Boolean includeInactive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016E4)->GetCallable<Array<UnityEngine::Component*>*(*)(UnityEngine::GameObject*, unknown_type, Boolean)>();
return _method(this, type, includeInactive);
}
Boolean GameObject::TryGetComponent(unknown_type type, UnityEngine::Component*& component)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016E9)->GetCallable<Boolean(*)(UnityEngine::GameObject*, unknown_type, UnityEngine::Component*&)>();
return _method(this, type, component);
}
UnityEngine::Component* GameObject::TryGetComponentInternal(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016EA)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, type);
}
void GameObject::TryGetComponentFastPath(unknown_type type, IntPtr oneFurtherThanResultValue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016EB)->GetCallable<void(*)(UnityEngine::GameObject*, unknown_type, IntPtr)>();
return _method(this, type, oneFurtherThanResultValue);
}
UnityEngine::GameObject* GameObject::FindWithTag(String* tag)
{
static auto _method = MonoClass()->GetMethod(0x060016EC)->GetCallable<UnityEngine::GameObject*(*)(String*)>();
return _method(tag);
}
void GameObject::SendMessageUpwards(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016ED)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, options);
}
void GameObject::SendMessage(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016EE)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, options);
}
void GameObject::BroadcastMessage(String* methodName, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016EF)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, options);
}
UnityEngine::Component* GameObject::AddComponentInternal(String* className)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F0)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, String*)>();
return _method(this, className);
}
UnityEngine::Component* GameObject::Internal_AddComponentWithType(unknown_type componentType)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F1)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, componentType);
}
UnityEngine::Component* GameObject::AddComponent(unknown_type componentType)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F2)->GetCallable<UnityEngine::Component*(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, componentType);
}
UnityEngine::Transform* GameObject::get_transform()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F4)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::GameObject*)>();
return _method(this);
}
Int32 GameObject::get_layer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F5)->GetCallable<Int32(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::set_layer(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F6)->GetCallable<void(*)(UnityEngine::GameObject*, Int32)>();
return _method(this, value);
}
Boolean GameObject::get_active()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F7)->GetCallable<Boolean(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::set_active(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F8)->GetCallable<void(*)(UnityEngine::GameObject*, Boolean)>();
return _method(this, value);
}
void GameObject::SetActive(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016F9)->GetCallable<void(*)(UnityEngine::GameObject*, Boolean)>();
return _method(this, value);
}
Boolean GameObject::get_activeSelf()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FA)->GetCallable<Boolean(*)(UnityEngine::GameObject*)>();
return _method(this);
}
Boolean GameObject::get_activeInHierarchy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FB)->GetCallable<Boolean(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::SetActiveRecursively(Boolean state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FC)->GetCallable<void(*)(UnityEngine::GameObject*, Boolean)>();
return _method(this, state);
}
Boolean GameObject::get_isStatic()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FD)->GetCallable<Boolean(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::set_isStatic(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FE)->GetCallable<void(*)(UnityEngine::GameObject*, Boolean)>();
return _method(this, value);
}
Boolean GameObject::get_isStaticBatchable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060016FF)->GetCallable<Boolean(*)(UnityEngine::GameObject*)>();
return _method(this);
}
String* GameObject::get_tag()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001700)->GetCallable<String*(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::set_tag(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001701)->GetCallable<void(*)(UnityEngine::GameObject*, String*)>();
return _method(this, value);
}
Boolean GameObject::CompareTag(String* tag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001702)->GetCallable<Boolean(*)(UnityEngine::GameObject*, String*)>();
return _method(this, tag);
}
UnityEngine::GameObject* GameObject::FindGameObjectWithTag(String* tag)
{
static auto _method = MonoClass()->GetMethod(0x06001703)->GetCallable<UnityEngine::GameObject*(*)(String*)>();
return _method(tag);
}
Array<UnityEngine::GameObject*>* GameObject::FindGameObjectsWithTag(String* tag)
{
static auto _method = MonoClass()->GetMethod(0x06001704)->GetCallable<Array<UnityEngine::GameObject*>*(*)(String*)>();
return _method(tag);
}
void GameObject::SendMessageUpwards1(String* methodName, unknown_type value, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001705)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, value, options);
}
void GameObject::SendMessageUpwards2(String* methodName, unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001706)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, value);
}
void GameObject::SendMessageUpwards3(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001707)->GetCallable<void(*)(UnityEngine::GameObject*, String*)>();
return _method(this, methodName);
}
void GameObject::SendMessage1(String* methodName, unknown_type value, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001708)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, value, options);
}
void GameObject::SendMessage2(String* methodName, unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001709)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, value);
}
void GameObject::SendMessage3(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600170A)->GetCallable<void(*)(UnityEngine::GameObject*, String*)>();
return _method(this, methodName);
}
void GameObject::BroadcastMessage1(String* methodName, unknown_type parameter, unknown_type options)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600170B)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type, unknown_type)>();
return _method(this, methodName, parameter, options);
}
void GameObject::BroadcastMessage2(String* methodName, unknown_type parameter)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600170C)->GetCallable<void(*)(UnityEngine::GameObject*, String*, unknown_type)>();
return _method(this, methodName, parameter);
}
void GameObject::BroadcastMessage3(String* methodName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600170D)->GetCallable<void(*)(UnityEngine::GameObject*, String*)>();
return _method(this, methodName);
}
void GameObject::Internal_CreateGameObject(UnityEngine::GameObject* self, String* name)
{
static auto _method = MonoClass()->GetMethod(0x06001711)->GetCallable<void(*)(UnityEngine::GameObject*, String*)>();
return _method(self, name);
}
UnityEngine::GameObject* GameObject::Find(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06001712)->GetCallable<UnityEngine::GameObject*(*)(String*)>();
return _method(name);
}
unknown_type GameObject::get_scene()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001713)->GetCallable<unknown_type(*)(UnityEngine::GameObject*)>();
return _method(this);
}
UInt64 GameObject::get_sceneCullingMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001714)->GetCallable<UInt64(*)(UnityEngine::GameObject*)>();
return _method(this);
}
UnityEngine::GameObject* GameObject::get_gameObject()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001715)->GetCallable<UnityEngine::GameObject*(*)(UnityEngine::GameObject*)>();
return _method(this);
}
void GameObject::get_scene_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001716)->GetCallable<void(*)(UnityEngine::GameObject*, unknown_type)>();
return _method(this, ret);
}
};
}
