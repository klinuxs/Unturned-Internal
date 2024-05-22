#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Quaternion::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Quaternion");
return _class;
}
uintptr_t Quaternion::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Quaternion* Quaternion::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Quaternion>();
}
Runtime::MonoVTable* Quaternion::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Quaternion::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Quaternion);
// --------------- START CLASS MEMBERS --------------- //
UnityEngine::Quaternion Quaternion::identityQuaternion()
{
static uintptr_t _offset = MonoClass()->GetField("identityQuaternion")->GetOffset();
return Memory::read<UnityEngine::Quaternion>(StaticInstance() + _offset);
}
void Quaternion::identityQuaternion_Set(UnityEngine::Quaternion value)
{
static uintptr_t _offset = MonoClass()->GetField("identityQuaternion")->GetOffset();
Memory::write<UnityEngine::Quaternion>(value, StaticInstance() + _offset);
}
Single Quaternion::kEpsilon()
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Quaternion::kEpsilon_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
UnityEngine::Quaternion Quaternion::FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection)
{
static auto _method = MonoClass()->GetMethod(0x06001454)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(fromDirection, toDirection);
}
UnityEngine::Quaternion Quaternion::Inverse(UnityEngine::Quaternion rotation)
{
static auto _method = MonoClass()->GetMethod(0x06001455)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion)>();
return _method(rotation);
}
UnityEngine::Quaternion Quaternion::Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001456)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion, Single)>();
return _method(a, b, t);
}
UnityEngine::Quaternion Quaternion::SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001457)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion, Single)>();
return _method(a, b, t);
}
UnityEngine::Quaternion Quaternion::Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001458)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion, Single)>();
return _method(a, b, t);
}
UnityEngine::Quaternion Quaternion::LerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001459)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion, Single)>();
return _method(a, b, t);
}
UnityEngine::Quaternion Quaternion::Internal_FromEulerRad(UnityEngine::Vector3 euler)
{
static auto _method = MonoClass()->GetMethod(0x0600145A)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3)>();
return _method(euler);
}
UnityEngine::Vector3 Quaternion::Internal_ToEulerRad(UnityEngine::Quaternion rotation)
{
static auto _method = MonoClass()->GetMethod(0x0600145B)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion)>();
return _method(rotation);
}
void Quaternion::Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, unknown_type angle)
{
static auto _method = MonoClass()->GetMethod(0x0600145C)->GetCallable<void(*)(UnityEngine::Quaternion, UnityEngine::Vector3&, unknown_type)>();
return _method(q, axis, angle);
}
UnityEngine::Quaternion Quaternion::AngleAxis(Single angle, UnityEngine::Vector3 axis)
{
static auto _method = MonoClass()->GetMethod(0x0600145D)->GetCallable<UnityEngine::Quaternion(*)(Single, UnityEngine::Vector3)>();
return _method(angle, axis);
}
UnityEngine::Quaternion Quaternion::LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards)
{
static auto _method = MonoClass()->GetMethod(0x0600145E)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(forward, upwards);
}
UnityEngine::Quaternion Quaternion::LookRotation1(UnityEngine::Vector3 forward)
{
static auto _method = MonoClass()->GetMethod(0x0600145F)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3)>();
return _method(forward);
}
Single Quaternion::get_Item(Int32 index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001460)->GetCallable<Single(*)(UnityEngine::Quaternion*, Int32)>();
return _method(this, index);
}
void Quaternion::set_Item(Int32 index, Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001461)->GetCallable<void(*)(UnityEngine::Quaternion*, Int32, Single)>();
return _method(this, index, value);
}
void Quaternion::Set(Single newX, Single newY, Single newZ, Single newW)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001463)->GetCallable<void(*)(UnityEngine::Quaternion*, Single, Single, Single, Single)>();
return _method(this, newX, newY, newZ, newW);
}
UnityEngine::Quaternion Quaternion::get_identity()
{
static auto _method = MonoClass()->GetMethod(0x06001464)->GetCallable<UnityEngine::Quaternion(*)()>();
return _method();
}
UnityEngine::Quaternion Quaternion::op_Multiply(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001465)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>();
return _method(lhs, rhs);
}
UnityEngine::Vector3 Quaternion::op_Multiply1(UnityEngine::Quaternion rotation, UnityEngine::Vector3 point)
{
static auto _method = MonoClass()->GetMethod(0x06001466)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion, UnityEngine::Vector3)>();
return _method(rotation, point);
}
Boolean Quaternion::IsEqualUsingDot(Single dot)
{
static auto _method = MonoClass()->GetMethod(0x06001467)->GetCallable<Boolean(*)(Single)>();
return _method(dot);
}
Boolean Quaternion::op_Equality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001468)->GetCallable<Boolean(*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>();
return _method(lhs, rhs);
}
Boolean Quaternion::op_Inequality(UnityEngine::Quaternion lhs, UnityEngine::Quaternion rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001469)->GetCallable<Boolean(*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>();
return _method(lhs, rhs);
}
Single Quaternion::Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b)
{
static auto _method = MonoClass()->GetMethod(0x0600146A)->GetCallable<Single(*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>();
return _method(a, b);
}
void Quaternion::SetLookRotation(UnityEngine::Vector3 view)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600146B)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3)>();
return _method(this, view);
}
void Quaternion::SetLookRotation1(UnityEngine::Vector3 view, UnityEngine::Vector3 up)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600146C)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(this, view, up);
}
Single Quaternion::Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b)
{
static auto _method = MonoClass()->GetMethod(0x0600146D)->GetCallable<Single(*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>();
return _method(a, b);
}
UnityEngine::Vector3 Quaternion::Internal_MakePositive(UnityEngine::Vector3 euler)
{
static auto _method = MonoClass()->GetMethod(0x0600146E)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3)>();
return _method(euler);
}
UnityEngine::Vector3 Quaternion::get_eulerAngles()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600146F)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
void Quaternion::set_eulerAngles(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001470)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3)>();
return _method(this, value);
}
UnityEngine::Quaternion Quaternion::Euler(Single x, Single y, Single z)
{
static auto _method = MonoClass()->GetMethod(0x06001471)->GetCallable<UnityEngine::Quaternion(*)(Single, Single, Single)>();
return _method(x, y, z);
}
UnityEngine::Quaternion Quaternion::Euler1(UnityEngine::Vector3 euler)
{
static auto _method = MonoClass()->GetMethod(0x06001472)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3)>();
return _method(euler);
}
void Quaternion::ToAngleAxis(unknown_type angle, UnityEngine::Vector3& axis)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001473)->GetCallable<void(*)(UnityEngine::Quaternion*, unknown_type, UnityEngine::Vector3&)>();
return _method(this, angle, axis);
}
void Quaternion::SetFromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001474)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(this, fromDirection, toDirection);
}
UnityEngine::Quaternion Quaternion::RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, Single maxDegreesDelta)
{
static auto _method = MonoClass()->GetMethod(0x06001475)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion, UnityEngine::Quaternion, Single)>();
return _method(from, to, maxDegreesDelta);
}
UnityEngine::Quaternion Quaternion::Normalize(UnityEngine::Quaternion q)
{
static auto _method = MonoClass()->GetMethod(0x06001476)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion)>();
return _method(q);
}
void Quaternion::Normalize1()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001477)->GetCallable<void(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
UnityEngine::Quaternion Quaternion::get_normalized()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001478)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
Int32 Quaternion::GetHashCode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001479)->GetCallable<Int32(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
Boolean Quaternion::Equals(unknown_type other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600147A)->GetCallable<Boolean(*)(UnityEngine::Quaternion*, unknown_type)>();
return _method(this, other);
}
Boolean Quaternion::Equals1(UnityEngine::Quaternion other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600147B)->GetCallable<Boolean(*)(UnityEngine::Quaternion*, UnityEngine::Quaternion)>();
return _method(this, other);
}
String* Quaternion::ToString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600147C)->GetCallable<String*(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
String* Quaternion::ToString1(String* format)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600147D)->GetCallable<String*(*)(UnityEngine::Quaternion*, String*)>();
return _method(this, format);
}
String* Quaternion::ToString2(String* format, unknown_type formatProvider)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600147E)->GetCallable<String*(*)(UnityEngine::Quaternion*, String*, unknown_type)>();
return _method(this, format, formatProvider);
}
UnityEngine::Quaternion Quaternion::EulerRotation(Single x, Single y, Single z)
{
static auto _method = MonoClass()->GetMethod(0x0600147F)->GetCallable<UnityEngine::Quaternion(*)(Single, Single, Single)>();
return _method(x, y, z);
}
UnityEngine::Quaternion Quaternion::EulerRotation1(UnityEngine::Vector3 euler)
{
static auto _method = MonoClass()->GetMethod(0x06001480)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3)>();
return _method(euler);
}
void Quaternion::SetEulerRotation(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001481)->GetCallable<void(*)(UnityEngine::Quaternion*, Single, Single, Single)>();
return _method(this, x, y, z);
}
void Quaternion::SetEulerRotation1(UnityEngine::Vector3 euler)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001482)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3)>();
return _method(this, euler);
}
UnityEngine::Vector3 Quaternion::ToEuler()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001483)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
UnityEngine::Quaternion Quaternion::EulerAngles(Single x, Single y, Single z)
{
static auto _method = MonoClass()->GetMethod(0x06001484)->GetCallable<UnityEngine::Quaternion(*)(Single, Single, Single)>();
return _method(x, y, z);
}
UnityEngine::Quaternion Quaternion::EulerAngles1(UnityEngine::Vector3 euler)
{
static auto _method = MonoClass()->GetMethod(0x06001485)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3)>();
return _method(euler);
}
void Quaternion::ToAxisAngle(UnityEngine::Vector3& axis, unknown_type angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001486)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3&, unknown_type)>();
return _method(this, axis, angle);
}
void Quaternion::SetEulerAngles(Single x, Single y, Single z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001487)->GetCallable<void(*)(UnityEngine::Quaternion*, Single, Single, Single)>();
return _method(this, x, y, z);
}
void Quaternion::SetEulerAngles1(UnityEngine::Vector3 euler)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001488)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3)>();
return _method(this, euler);
}
UnityEngine::Vector3 Quaternion::ToEulerAngles(UnityEngine::Quaternion rotation)
{
static auto _method = MonoClass()->GetMethod(0x06001489)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion)>();
return _method(rotation);
}
UnityEngine::Vector3 Quaternion::ToEulerAngles1()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600148A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Quaternion*)>();
return _method(this);
}
void Quaternion::SetAxisAngle(UnityEngine::Vector3 axis, Single angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600148B)->GetCallable<void(*)(UnityEngine::Quaternion*, UnityEngine::Vector3, Single)>();
return _method(this, axis, angle);
}
UnityEngine::Quaternion Quaternion::AxisAngle(UnityEngine::Vector3 axis, Single angle)
{
static auto _method = MonoClass()->GetMethod(0x0600148C)->GetCallable<UnityEngine::Quaternion(*)(UnityEngine::Vector3, Single)>();
return _method(axis, angle);
}
void Quaternion::FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x0600148E)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(fromDirection, toDirection, ret);
}
void Quaternion::Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x0600148F)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&)>();
return _method(rotation, ret);
}
void Quaternion::Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001490)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, Single, UnityEngine::Quaternion&)>();
return _method(a, b, t, ret);
}
void Quaternion::SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001491)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, Single, UnityEngine::Quaternion&)>();
return _method(a, b, t, ret);
}
void Quaternion::Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001492)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, Single, UnityEngine::Quaternion&)>();
return _method(a, b, t, ret);
}
void Quaternion::LerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, Single t, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001493)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Quaternion&, Single, UnityEngine::Quaternion&)>();
return _method(a, b, t, ret);
}
void Quaternion::Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001494)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(euler, ret);
}
void Quaternion::Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001495)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Vector3&)>();
return _method(rotation, ret);
}
void Quaternion::Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, unknown_type angle)
{
static auto _method = MonoClass()->GetMethod(0x06001496)->GetCallable<void(*)(UnityEngine::Quaternion&, UnityEngine::Vector3&, unknown_type)>();
return _method(q, axis, angle);
}
void Quaternion::AngleAxis_Injected(Single angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001497)->GetCallable<void(*)(Single, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(angle, axis, ret);
}
void Quaternion::LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001498)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&)>();
return _method(forward, upwards, ret);
}
};
}
