#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Transform::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Transform");
return _class;
}
uintptr_t Transform::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Transform* Transform::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Transform>();
}
Runtime::MonoVTable* Transform::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Transform::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Transform);
// --------------- START CLASS MEMBERS --------------- //
UnityEngine::Vector3 Transform::get_position()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A37)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_position(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A38)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::get_localPosition()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A39)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_localPosition(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3A)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::GetLocalEulerAngles(unknown_type order)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3B)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, unknown_type)>();
return _method(this, order);
}
void Transform::SetLocalEulerAngles(UnityEngine::Vector3 euler, unknown_type order)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3C)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, unknown_type)>();
return _method(this, euler, order);
}
void Transform::SetLocalEulerHint(UnityEngine::Vector3 euler)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3D)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, euler);
}
UnityEngine::Vector3 Transform::get_eulerAngles()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3E)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_eulerAngles(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A3F)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::get_localEulerAngles()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A40)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_localEulerAngles(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A41)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::get_right()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A42)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_right(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A43)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::get_up()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A44)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_up(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A45)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Vector3 Transform::get_forward()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A46)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_forward(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A47)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Quaternion Transform::get_rotation()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A48)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_rotation(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A49)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion)>();
return _method(this, value);
}
UnityEngine::Quaternion Transform::get_localRotation()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4A)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_localRotation(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4B)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion)>();
return _method(this, value);
}
unknown_type Transform::get_rotationOrder()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4C)->GetCallable<unknown_type(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_rotationOrder(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4D)->GetCallable<void(*)(UnityEngine::Transform*, unknown_type)>();
return _method(this, value);
}
Int32 Transform::GetRotationOrderInternal()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4E)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetRotationOrderInternal(unknown_type rotationOrder)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A4F)->GetCallable<void(*)(UnityEngine::Transform*, unknown_type)>();
return _method(this, rotationOrder);
}
UnityEngine::Vector3 Transform::get_localScale()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A50)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_localScale(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A51)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Transform* Transform::get_parent()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A52)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_parent(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A53)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* Transform::get_parentInternal()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A54)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_parentInternal(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A55)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* Transform::GetParent()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A56)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetParent(UnityEngine::Transform* p)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A57)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, p);
}
void Transform::SetParent1(UnityEngine::Transform* parent, Boolean worldPositionStays)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A58)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*, Boolean)>();
return _method(this, parent, worldPositionStays);
}
unknown_type Transform::get_worldToLocalMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A59)->GetCallable<unknown_type(*)(UnityEngine::Transform*)>();
return _method(this);
}
unknown_type Transform::get_localToWorldMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5A)->GetCallable<unknown_type(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5B)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>();
return _method(this, position, rotation);
}
void Transform::SetLocalPositionAndRotation(UnityEngine::Vector3 localPosition, UnityEngine::Quaternion localRotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5C)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>();
return _method(this, localPosition, localRotation);
}
void Transform::GetPositionAndRotation(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5D)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(this, position, rotation);
}
void Transform::GetLocalPositionAndRotation(UnityEngine::Vector3& localPosition, UnityEngine::Quaternion& localRotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5E)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(this, localPosition, localRotation);
}
void Transform::Translate(UnityEngine::Vector3 translation, unknown_type relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A5F)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, unknown_type)>();
return _method(this, translation, relativeTo);
}
void Transform::Translate1(UnityEngine::Vector3 translation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A60)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, translation);
}
void Transform::Translate2(Single x, Single y, Single z, unknown_type relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A61)->GetCallable<void(*)(UnityEngine::Transform*, Single, Single, Single, unknown_type)>();
return _method(this, x, y, z, relativeTo);
}
void Transform::Translate3(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A62)->GetCallable<void(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
void Transform::Translate4(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A63)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Transform*)>();
return _method(this, translation, relativeTo);
}
void Transform::Translate5(Single x, Single y, Single z, UnityEngine::Transform* relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A64)->GetCallable<void(*)(UnityEngine::Transform*, Single, Single, Single, UnityEngine::Transform*)>();
return _method(this, x, y, z, relativeTo);
}
void Transform::Rotate(UnityEngine::Vector3 eulers, unknown_type relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A65)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, unknown_type)>();
return _method(this, eulers, relativeTo);
}
void Transform::Rotate1(UnityEngine::Vector3 eulers)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A66)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, eulers);
}
void Transform::Rotate2(Single xAngle, Single yAngle, Single zAngle, unknown_type relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A67)->GetCallable<void(*)(UnityEngine::Transform*, Single, Single, Single, unknown_type)>();
return _method(this, xAngle, yAngle, zAngle, relativeTo);
}
void Transform::Rotate3(Single xAngle, Single yAngle, Single zAngle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A68)->GetCallable<void(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, xAngle, yAngle, zAngle);
}
void Transform::RotateAroundInternal(UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A69)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, Single)>();
return _method(this, axis, angle);
}
void Transform::Rotate4(UnityEngine::Vector3 axis, Single angle, unknown_type relativeTo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6A)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, Single, unknown_type)>();
return _method(this, axis, angle, relativeTo);
}
void Transform::Rotate5(UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6B)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, Single)>();
return _method(this, axis, angle);
}
void Transform::RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6C)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(this, point, axis, angle);
}
void Transform::LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6D)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, target, worldUp);
}
void Transform::LookAt1(UnityEngine::Transform* target)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6E)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, target);
}
void Transform::LookAt2(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A6F)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(this, worldPosition, worldUp);
}
void Transform::LookAt3(UnityEngine::Vector3 worldPosition)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A70)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, worldPosition);
}
void Transform::Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A71)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(this, worldPosition, worldUp);
}
UnityEngine::Vector3 Transform::TransformDirection(UnityEngine::Vector3 direction)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A72)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, direction);
}
UnityEngine::Vector3 Transform::TransformDirection1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A73)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Vector3 Transform::InverseTransformDirection(UnityEngine::Vector3 direction)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A74)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, direction);
}
UnityEngine::Vector3 Transform::InverseTransformDirection1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A75)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Vector3 Transform::TransformVector(UnityEngine::Vector3 vector)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A76)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, vector);
}
UnityEngine::Vector3 Transform::TransformVector1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A77)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Vector3 Transform::InverseTransformVector(UnityEngine::Vector3 vector)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A78)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, vector);
}
UnityEngine::Vector3 Transform::InverseTransformVector1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A79)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Vector3 Transform::TransformPoint(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Transform::TransformPoint1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7B)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Vector3 Transform::InverseTransformPoint(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7C)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Transform::InverseTransformPoint1(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7D)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*, Single, Single, Single)>();
return _method(this, x, y, z);
}
UnityEngine::Transform* Transform::get_root()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7E)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*)>();
return _method(this);
}
UnityEngine::Transform* Transform::GetRoot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A7F)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*)>();
return _method(this);
}
Int32 Transform::get_childCount()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A80)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::DetachChildren()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A81)->GetCallable<void(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetAsFirstSibling()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A82)->GetCallable<void(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetAsLastSibling()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A83)->GetCallable<void(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::SetSiblingIndex(Int32 index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A84)->GetCallable<void(*)(UnityEngine::Transform*, Int32)>();
return _method(this, index);
}
void Transform::MoveAfterSibling(UnityEngine::Transform* transform, Boolean notifyEditorAndMarkDirty)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A85)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Transform*, Boolean)>();
return _method(this, transform, notifyEditorAndMarkDirty);
}
Int32 Transform::GetSiblingIndex()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A86)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
UnityEngine::Transform* Transform::FindRelativeTransformWithPath(UnityEngine::Transform* transform, String* path, Boolean isActiveOnly)
{
static auto _method = MonoClass()->GetMethod(0x06001A87)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*, String*, Boolean)>();
return _method(transform, path, isActiveOnly);
}
UnityEngine::Transform* Transform::Find(String* n)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A88)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*, String*)>();
return _method(this, n);
}
void Transform::SendTransformChangedScale()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A89)->GetCallable<void(*)(UnityEngine::Transform*)>();
return _method(this);
}
UnityEngine::Vector3 Transform::get_lossyScale()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Transform*)>();
return _method(this);
}
Boolean Transform::IsChildOf(UnityEngine::Transform* parent)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8B)->GetCallable<Boolean(*)(UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, parent);
}
Boolean Transform::get_hasChanged()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8C)->GetCallable<Boolean(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_hasChanged(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8D)->GetCallable<void(*)(UnityEngine::Transform*, Boolean)>();
return _method(this, value);
}
UnityEngine::Transform* Transform::FindChild(String* n)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8E)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*, String*)>();
return _method(this, n);
}
unknown_type Transform::GetEnumerator()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A8F)->GetCallable<unknown_type(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::RotateAround1(UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A90)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, Single)>();
return _method(this, axis, angle);
}
void Transform::RotateAroundLocal(UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A91)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3, Single)>();
return _method(this, axis, angle);
}
UnityEngine::Transform* Transform::GetChild(Int32 index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A92)->GetCallable<UnityEngine::Transform*(*)(UnityEngine::Transform*, Int32)>();
return _method(this, index);
}
Int32 Transform::GetChildCount()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A93)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
Int32 Transform::get_hierarchyCapacity()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A94)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_hierarchyCapacity(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A95)->GetCallable<void(*)(UnityEngine::Transform*, Int32)>();
return _method(this, value);
}
Int32 Transform::internal_getHierarchyCapacity()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A96)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::internal_setHierarchyCapacity(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A97)->GetCallable<void(*)(UnityEngine::Transform*, Int32)>();
return _method(this, value);
}
Int32 Transform::get_hierarchyCount()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A98)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
Int32 Transform::internal_getHierarchyCount()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A99)->GetCallable<Int32(*)(UnityEngine::Transform*)>();
return _method(this);
}
Boolean Transform::IsNonUniformScaleTransform()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9A)->GetCallable<Boolean(*)(UnityEngine::Transform*)>();
return _method(this);
}
Boolean Transform::get_constrainProportionsScale()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9B)->GetCallable<Boolean(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::set_constrainProportionsScale(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9C)->GetCallable<void(*)(UnityEngine::Transform*, Boolean)>();
return _method(this, value);
}
void Transform::SetConstrainProportionsScale(Boolean isLinked)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9D)->GetCallable<void(*)(UnityEngine::Transform*, Boolean)>();
return _method(this, isLinked);
}
Boolean Transform::IsConstrainProportionsScale()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9E)->GetCallable<Boolean(*)(UnityEngine::Transform*)>();
return _method(this);
}
void Transform::get_position_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001A9F)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Transform::set_position_Injected(UnityEngine::Vector3& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA0)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, value);
}
void Transform::get_localPosition_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA1)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Transform::set_localPosition_Injected(UnityEngine::Vector3& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA2)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, value);
}
void Transform::GetLocalEulerAngles_Injected(unknown_type order, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA3)->GetCallable<void(*)(UnityEngine::Transform*, unknown_type, UnityEngine::Vector3&)>();
return _method(this, order, ret);
}
void Transform::SetLocalEulerAngles_Injected(UnityEngine::Vector3& euler, unknown_type order)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA4)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, unknown_type)>();
return _method(this, euler, order);
}
void Transform::SetLocalEulerHint_Injected(UnityEngine::Vector3& euler)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA5)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, euler);
}
void Transform::get_rotation_Injected(UnityEngine::Quaternion& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA6)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion&)>();
return _method(this, ret);
}
void Transform::set_rotation_Injected(UnityEngine::Quaternion& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA7)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion&)>();
return _method(this, value);
}
void Transform::get_localRotation_Injected(UnityEngine::Quaternion& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA8)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion&)>();
return _method(this, ret);
}
void Transform::set_localRotation_Injected(UnityEngine::Quaternion& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AA9)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Quaternion&)>();
return _method(this, value);
}
void Transform::get_localScale_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAA)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Transform::set_localScale_Injected(UnityEngine::Vector3& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAB)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, value);
}
void Transform::get_worldToLocalMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAC)->GetCallable<void(*)(UnityEngine::Transform*, unknown_type)>();
return _method(this, ret);
}
void Transform::get_localToWorldMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAD)->GetCallable<void(*)(UnityEngine::Transform*, unknown_type)>();
return _method(this, ret);
}
void Transform::SetPositionAndRotation_Injected(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAE)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(this, position, rotation);
}
void Transform::SetLocalPositionAndRotation_Injected(UnityEngine::Vector3& localPosition, UnityEngine::Quaternion& localRotation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AAF)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(this, localPosition, localRotation);
}
void Transform::RotateAroundInternal_Injected(UnityEngine::Vector3& axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB0)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, Single)>();
return _method(this, axis, angle);
}
void Transform::Internal_LookAt_Injected(UnityEngine::Vector3& worldPosition, UnityEngine::Vector3& worldUp)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB1)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, worldPosition, worldUp);
}
void Transform::TransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB2)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, direction, ret);
}
void Transform::InverseTransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB3)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, direction, ret);
}
void Transform::TransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB4)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, vector, ret);
}
void Transform::InverseTransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB5)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, vector, ret);
}
void Transform::TransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB6)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, position, ret);
}
void Transform::InverseTransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB7)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, position, ret);
}
void Transform::get_lossyScale_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB8)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Transform::RotateAround_Injected(UnityEngine::Vector3& axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001AB9)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, Single)>();
return _method(this, axis, angle);
}
void Transform::RotateAroundLocal_Injected(UnityEngine::Vector3& axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001ABA)->GetCallable<void(*)(UnityEngine::Transform*, UnityEngine::Vector3&, Single)>();
return _method(this, axis, angle);
}
};
}
