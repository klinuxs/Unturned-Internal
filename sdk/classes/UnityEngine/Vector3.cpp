#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Vector3::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Vector3");
return _class;
}
uintptr_t Vector3::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Vector3* Vector3::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Vector3>();
}
Runtime::MonoVTable* Vector3::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Vector3::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Vector3);
// --------------- START CLASS MEMBERS --------------- //
Single Vector3::kEpsilon()
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Vector3::kEpsilon_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Vector3::kEpsilonNormalSqrt()
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilonNormalSqrt")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Vector3::kEpsilonNormalSqrt_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilonNormalSqrt")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::zeroVector()
{
static uintptr_t _offset = MonoClass()->GetField("zeroVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::zeroVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("zeroVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::oneVector()
{
static uintptr_t _offset = MonoClass()->GetField("oneVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::oneVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("oneVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::upVector()
{
static uintptr_t _offset = MonoClass()->GetField("upVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::upVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("upVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::downVector()
{
static uintptr_t _offset = MonoClass()->GetField("downVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::downVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("downVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::leftVector()
{
static uintptr_t _offset = MonoClass()->GetField("leftVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::leftVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("leftVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::rightVector()
{
static uintptr_t _offset = MonoClass()->GetField("rightVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::rightVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("rightVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::forwardVector()
{
static uintptr_t _offset = MonoClass()->GetField("forwardVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::forwardVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("forwardVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::backVector()
{
static uintptr_t _offset = MonoClass()->GetField("backVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::backVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("backVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::positiveInfinityVector()
{
static uintptr_t _offset = MonoClass()->GetField("positiveInfinityVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::positiveInfinityVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("positiveInfinityVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::negativeInfinityVector()
{
static uintptr_t _offset = MonoClass()->GetField("negativeInfinityVector")->GetOffset();
return Memory::read<UnityEngine::Vector3>(StaticInstance() + _offset);
}
void Vector3::negativeInfinityVector_Set(UnityEngine::Vector3 value)
{
static uintptr_t _offset = MonoClass()->GetField("negativeInfinityVector")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, StaticInstance() + _offset);
}
UnityEngine::Vector3 Vector3::Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x0600140F)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(a, b, t);
}
UnityEngine::Vector3 Vector3::SlerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001410)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(a, b, t);
}
void Vector3::OrthoNormalize2(UnityEngine::Vector3& a, UnityEngine::Vector3& b)
{
static auto _method = MonoClass()->GetMethod(0x06001411)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(a, b);
}
void Vector3::OrthoNormalize(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent)
{
static auto _method = MonoClass()->GetMethod(0x06001412)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(normal, tangent);
}
void Vector3::OrthoNormalize3(UnityEngine::Vector3& a, UnityEngine::Vector3& b, UnityEngine::Vector3& c)
{
static auto _method = MonoClass()->GetMethod(0x06001413)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(a, b, c);
}
void Vector3::OrthoNormalize1(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent, UnityEngine::Vector3& binormal)
{
static auto _method = MonoClass()->GetMethod(0x06001414)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(normal, tangent, binormal);
}
UnityEngine::Vector3 Vector3::RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, Single maxRadiansDelta, Single maxMagnitudeDelta)
{
static auto _method = MonoClass()->GetMethod(0x06001415)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single, Single)>();
return _method(current, target, maxRadiansDelta, maxMagnitudeDelta);
}
UnityEngine::Vector3 Vector3::Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001416)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(a, b, t);
}
UnityEngine::Vector3 Vector3::LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x06001417)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(a, b, t);
}
UnityEngine::Vector3 Vector3::MoveTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, Single maxDistanceDelta)
{
static auto _method = MonoClass()->GetMethod(0x06001418)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, Single)>();
return _method(current, target, maxDistanceDelta);
}
UnityEngine::Vector3 Vector3::SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime, Single maxSpeed)
{
static auto _method = MonoClass()->GetMethod(0x06001419)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, Single, Single)>();
return _method(current, target, currentVelocity, smoothTime, maxSpeed);
}
UnityEngine::Vector3 Vector3::SmoothDamp1(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime)
{
static auto _method = MonoClass()->GetMethod(0x0600141A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, Single)>();
return _method(current, target, currentVelocity, smoothTime);
}
UnityEngine::Vector3 Vector3::SmoothDamp2(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, Single smoothTime, Single maxSpeed, Single deltaTime)
{
static auto _method = MonoClass()->GetMethod(0x0600141B)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, Single, Single, Single)>();
return _method(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
}
Single Vector3::get_Item(Int32 index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600141C)->GetCallable<Single(*)(UnityEngine::Vector3*, Int32)>();
return _method(this, index);
}
void Vector3::set_Item(Int32 index, Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600141D)->GetCallable<void(*)(UnityEngine::Vector3*, Int32, Single)>();
return _method(this, index, value);
}
void Vector3::Set(Single newX, Single newY, Single newZ)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001420)->GetCallable<void(*)(UnityEngine::Vector3*, Single, Single, Single)>();
return _method(this, newX, newY, newZ);
}
UnityEngine::Vector3 Vector3::Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
{
static auto _method = MonoClass()->GetMethod(0x06001421)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(a, b);
}
void Vector3::Scale1(UnityEngine::Vector3 scale)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001422)->GetCallable<void(*)(UnityEngine::Vector3*, UnityEngine::Vector3)>();
return _method(this, scale);
}
UnityEngine::Vector3 Vector3::Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001423)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
Int32 Vector3::GetHashCode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001424)->GetCallable<Int32(*)(UnityEngine::Vector3*)>();
return _method(this);
}
Boolean Vector3::Equals(unknown_type other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001425)->GetCallable<Boolean(*)(UnityEngine::Vector3*, unknown_type)>();
return _method(this, other);
}
Boolean Vector3::Equals1(UnityEngine::Vector3 other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001426)->GetCallable<Boolean(*)(UnityEngine::Vector3*, UnityEngine::Vector3)>();
return _method(this, other);
}
UnityEngine::Vector3 Vector3::Reflect(UnityEngine::Vector3 inDirection, UnityEngine::Vector3 inNormal)
{
static auto _method = MonoClass()->GetMethod(0x06001427)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(inDirection, inNormal);
}
UnityEngine::Vector3 Vector3::Normalize(UnityEngine::Vector3 value)
{
static auto _method = MonoClass()->GetMethod(0x06001428)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3)>();
return _method(value);
}
void Vector3::Normalize1()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001429)->GetCallable<void(*)(UnityEngine::Vector3*)>();
return _method(this);
}
UnityEngine::Vector3 Vector3::get_normalized()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600142A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3*)>();
return _method(this);
}
Single Vector3::Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x0600142B)->GetCallable<Single(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
UnityEngine::Vector3 Vector3::Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal)
{
static auto _method = MonoClass()->GetMethod(0x0600142C)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(vector, onNormal);
}
UnityEngine::Vector3 Vector3::ProjectOnPlane(UnityEngine::Vector3 vector, UnityEngine::Vector3 planeNormal)
{
static auto _method = MonoClass()->GetMethod(0x0600142D)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(vector, planeNormal);
}
Single Vector3::Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to)
{
static auto _method = MonoClass()->GetMethod(0x0600142E)->GetCallable<Single(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(from, to);
}
Single Vector3::SignedAngle(UnityEngine::Vector3 from, UnityEngine::Vector3 to, UnityEngine::Vector3 axis)
{
static auto _method = MonoClass()->GetMethod(0x0600142F)->GetCallable<Single(*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(from, to, axis);
}
Single Vector3::Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
{
static auto _method = MonoClass()->GetMethod(0x06001430)->GetCallable<Single(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(a, b);
}
UnityEngine::Vector3 Vector3::ClampMagnitude(UnityEngine::Vector3 vector, Single maxLength)
{
static auto _method = MonoClass()->GetMethod(0x06001431)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, Single)>();
return _method(vector, maxLength);
}
Single Vector3::Magnitude(UnityEngine::Vector3 vector)
{
static auto _method = MonoClass()->GetMethod(0x06001432)->GetCallable<Single(*)(UnityEngine::Vector3)>();
return _method(vector);
}
Single Vector3::get_magnitude()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001433)->GetCallable<Single(*)(UnityEngine::Vector3*)>();
return _method(this);
}
Single Vector3::SqrMagnitude(UnityEngine::Vector3 vector)
{
static auto _method = MonoClass()->GetMethod(0x06001434)->GetCallable<Single(*)(UnityEngine::Vector3)>();
return _method(vector);
}
Single Vector3::get_sqrMagnitude()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001435)->GetCallable<Single(*)(UnityEngine::Vector3*)>();
return _method(this);
}
UnityEngine::Vector3 Vector3::Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001436)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
UnityEngine::Vector3 Vector3::Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001437)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
UnityEngine::Vector3 Vector3::get_zero()
{
static auto _method = MonoClass()->GetMethod(0x06001438)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_one()
{
static auto _method = MonoClass()->GetMethod(0x06001439)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_forward()
{
static auto _method = MonoClass()->GetMethod(0x0600143A)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_back()
{
static auto _method = MonoClass()->GetMethod(0x0600143B)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_up()
{
static auto _method = MonoClass()->GetMethod(0x0600143C)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_down()
{
static auto _method = MonoClass()->GetMethod(0x0600143D)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_left()
{
static auto _method = MonoClass()->GetMethod(0x0600143E)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_right()
{
static auto _method = MonoClass()->GetMethod(0x0600143F)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_positiveInfinity()
{
static auto _method = MonoClass()->GetMethod(0x06001440)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::get_negativeInfinity()
{
static auto _method = MonoClass()->GetMethod(0x06001441)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector3 Vector3::op_Addition(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
{
static auto _method = MonoClass()->GetMethod(0x06001442)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(a, b);
}
UnityEngine::Vector3 Vector3::op_Subtraction(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
{
static auto _method = MonoClass()->GetMethod(0x06001443)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(a, b);
}
UnityEngine::Vector3 Vector3::op_UnaryNegation(UnityEngine::Vector3 a)
{
static auto _method = MonoClass()->GetMethod(0x06001444)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3)>();
return _method(a);
}
UnityEngine::Vector3 Vector3::op_Multiply(UnityEngine::Vector3 a, Single d)
{
static auto _method = MonoClass()->GetMethod(0x06001445)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, Single)>();
return _method(a, d);
}
UnityEngine::Vector3 Vector3::op_Multiply1(Single d, UnityEngine::Vector3 a)
{
static auto _method = MonoClass()->GetMethod(0x06001446)->GetCallable<UnityEngine::Vector3(*)(Single, UnityEngine::Vector3)>();
return _method(d, a);
}
UnityEngine::Vector3 Vector3::op_Division(UnityEngine::Vector3 a, Single d)
{
static auto _method = MonoClass()->GetMethod(0x06001447)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, Single)>();
return _method(a, d);
}
Boolean Vector3::op_Equality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001448)->GetCallable<Boolean(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
Boolean Vector3::op_Inequality(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001449)->GetCallable<Boolean(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(lhs, rhs);
}
String* Vector3::ToString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600144A)->GetCallable<String*(*)(UnityEngine::Vector3*)>();
return _method(this);
}
String* Vector3::ToString1(String* format)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600144B)->GetCallable<String*(*)(UnityEngine::Vector3*, String*)>();
return _method(this, format);
}
String* Vector3::ToString2(String* format, unknown_type formatProvider)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600144C)->GetCallable<String*(*)(UnityEngine::Vector3*, String*, unknown_type)>();
return _method(this, format, formatProvider);
}
UnityEngine::Vector3 Vector3::get_fwd()
{
static auto _method = MonoClass()->GetMethod(0x0600144D)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
Single Vector3::AngleBetween(UnityEngine::Vector3 from, UnityEngine::Vector3 to)
{
static auto _method = MonoClass()->GetMethod(0x0600144E)->GetCallable<Single(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(from, to);
}
UnityEngine::Vector3 Vector3::Exclude(UnityEngine::Vector3 excludeThis, UnityEngine::Vector3 fromThat)
{
static auto _method = MonoClass()->GetMethod(0x0600144F)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector3, UnityEngine::Vector3)>();
return _method(excludeThis, fromThat);
}
void Vector3::Slerp_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, Single t, UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001451)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, Single, UnityEngine::Vector3&)>();
return _method(a, b, t, ret);
}
void Vector3::SlerpUnclamped_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, Single t, UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001452)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, Single, UnityEngine::Vector3&)>();
return _method(a, b, t, ret);
}
void Vector3::RotateTowards_Injected(UnityEngine::Vector3& current, UnityEngine::Vector3& target, Single maxRadiansDelta, Single maxMagnitudeDelta, UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x06001453)->GetCallable<void(*)(UnityEngine::Vector3&, UnityEngine::Vector3&, Single, Single, UnityEngine::Vector3&)>();
return _method(current, target, maxRadiansDelta, maxMagnitudeDelta, ret);
}
};
}
