#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Vector2::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Vector2");
return _class;
}
uintptr_t Vector2::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Vector2* Vector2::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Vector2>();
}
Runtime::MonoVTable* Vector2::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Vector2::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Vector2);
// --------------- START CLASS MEMBERS --------------- //
UnityEngine::Vector2 Vector2::zeroVector()
{
static uintptr_t _offset = MonoClass()->GetField("zeroVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::zeroVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("zeroVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::oneVector()
{
static uintptr_t _offset = MonoClass()->GetField("oneVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::oneVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("oneVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::upVector()
{
static uintptr_t _offset = MonoClass()->GetField("upVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::upVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("upVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::downVector()
{
static uintptr_t _offset = MonoClass()->GetField("downVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::downVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("downVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::leftVector()
{
static uintptr_t _offset = MonoClass()->GetField("leftVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::leftVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("leftVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::rightVector()
{
static uintptr_t _offset = MonoClass()->GetField("rightVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::rightVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("rightVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::positiveInfinityVector()
{
static uintptr_t _offset = MonoClass()->GetField("positiveInfinityVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::positiveInfinityVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("positiveInfinityVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
UnityEngine::Vector2 Vector2::negativeInfinityVector()
{
static uintptr_t _offset = MonoClass()->GetField("negativeInfinityVector")->GetOffset();
return Memory::read<UnityEngine::Vector2>(StaticInstance() + _offset);
}
void Vector2::negativeInfinityVector_Set(UnityEngine::Vector2 value)
{
static uintptr_t _offset = MonoClass()->GetField("negativeInfinityVector")->GetOffset();
Memory::write<UnityEngine::Vector2>(value, StaticInstance() + _offset);
}
Single Vector2::kEpsilon()
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Vector2::kEpsilon_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilon")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Vector2::kEpsilonNormalSqrt()
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilonNormalSqrt")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Vector2::kEpsilonNormalSqrt_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("kEpsilonNormalSqrt")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Vector2::get_Item(Int32 index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DA)->GetCallable<Single(*)(UnityEngine::Vector2*, Int32)>();
return _method(this, index);
}
void Vector2::set_Item(Int32 index, Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DB)->GetCallable<void(*)(UnityEngine::Vector2*, Int32, Single)>();
return _method(this, index, value);
}
void Vector2::Set(Single newX, Single newY)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DD)->GetCallable<void(*)(UnityEngine::Vector2*, Single, Single)>();
return _method(this, newX, newY);
}
UnityEngine::Vector2 Vector2::Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x060014DE)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, Single)>();
return _method(a, b, t);
}
UnityEngine::Vector2 Vector2::LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, Single t)
{
static auto _method = MonoClass()->GetMethod(0x060014DF)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, Single)>();
return _method(a, b, t);
}
UnityEngine::Vector2 Vector2::MoveTowards(UnityEngine::Vector2 current, UnityEngine::Vector2 target, Single maxDistanceDelta)
{
static auto _method = MonoClass()->GetMethod(0x060014E0)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, Single)>();
return _method(current, target, maxDistanceDelta);
}
UnityEngine::Vector2 Vector2::Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014E1)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
void Vector2::Scale1(UnityEngine::Vector2 scale)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E2)->GetCallable<void(*)(UnityEngine::Vector2*, UnityEngine::Vector2)>();
return _method(this, scale);
}
void Vector2::Normalize()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E3)->GetCallable<void(*)(UnityEngine::Vector2*)>();
return _method(this);
}
UnityEngine::Vector2 Vector2::get_normalized()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E4)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2*)>();
return _method(this);
}
String* Vector2::ToString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E5)->GetCallable<String*(*)(UnityEngine::Vector2*)>();
return _method(this);
}
String* Vector2::ToString1(String* format)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E6)->GetCallable<String*(*)(UnityEngine::Vector2*, String*)>();
return _method(this, format);
}
String* Vector2::ToString2(String* format, unknown_type formatProvider)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E7)->GetCallable<String*(*)(UnityEngine::Vector2*, String*, unknown_type)>();
return _method(this, format, formatProvider);
}
Int32 Vector2::GetHashCode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E8)->GetCallable<Int32(*)(UnityEngine::Vector2*)>();
return _method(this);
}
Boolean Vector2::Equals(unknown_type other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E9)->GetCallable<Boolean(*)(UnityEngine::Vector2*, unknown_type)>();
return _method(this, other);
}
Boolean Vector2::Equals1(UnityEngine::Vector2 other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EA)->GetCallable<Boolean(*)(UnityEngine::Vector2*, UnityEngine::Vector2)>();
return _method(this, other);
}
UnityEngine::Vector2 Vector2::Reflect(UnityEngine::Vector2 inDirection, UnityEngine::Vector2 inNormal)
{
static auto _method = MonoClass()->GetMethod(0x060014EB)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(inDirection, inNormal);
}
UnityEngine::Vector2 Vector2::Perpendicular(UnityEngine::Vector2 inDirection)
{
static auto _method = MonoClass()->GetMethod(0x060014EC)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2)>();
return _method(inDirection);
}
Single Vector2::Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
{
static auto _method = MonoClass()->GetMethod(0x060014ED)->GetCallable<Single(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(lhs, rhs);
}
Single Vector2::get_magnitude()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EE)->GetCallable<Single(*)(UnityEngine::Vector2*)>();
return _method(this);
}
Single Vector2::get_sqrMagnitude()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EF)->GetCallable<Single(*)(UnityEngine::Vector2*)>();
return _method(this);
}
Single Vector2::Angle(UnityEngine::Vector2 from, UnityEngine::Vector2 to)
{
static auto _method = MonoClass()->GetMethod(0x060014F0)->GetCallable<Single(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(from, to);
}
Single Vector2::SignedAngle(UnityEngine::Vector2 from, UnityEngine::Vector2 to)
{
static auto _method = MonoClass()->GetMethod(0x060014F1)->GetCallable<Single(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(from, to);
}
Single Vector2::Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014F2)->GetCallable<Single(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
UnityEngine::Vector2 Vector2::ClampMagnitude(UnityEngine::Vector2 vector, Single maxLength)
{
static auto _method = MonoClass()->GetMethod(0x060014F3)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, Single)>();
return _method(vector, maxLength);
}
Single Vector2::SqrMagnitude(UnityEngine::Vector2 a)
{
static auto _method = MonoClass()->GetMethod(0x060014F4)->GetCallable<Single(*)(UnityEngine::Vector2)>();
return _method(a);
}
Single Vector2::SqrMagnitude1()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F5)->GetCallable<Single(*)(UnityEngine::Vector2*)>();
return _method(this);
}
UnityEngine::Vector2 Vector2::Min(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
{
static auto _method = MonoClass()->GetMethod(0x060014F6)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(lhs, rhs);
}
UnityEngine::Vector2 Vector2::Max(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
{
static auto _method = MonoClass()->GetMethod(0x060014F7)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(lhs, rhs);
}
UnityEngine::Vector2 Vector2::SmoothDamp(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime, Single maxSpeed)
{
static auto _method = MonoClass()->GetMethod(0x060014F8)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2&, Single, Single)>();
return _method(current, target, currentVelocity, smoothTime, maxSpeed);
}
UnityEngine::Vector2 Vector2::SmoothDamp1(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime)
{
static auto _method = MonoClass()->GetMethod(0x060014F9)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2&, Single)>();
return _method(current, target, currentVelocity, smoothTime);
}
UnityEngine::Vector2 Vector2::SmoothDamp2(UnityEngine::Vector2 current, UnityEngine::Vector2 target, UnityEngine::Vector2& currentVelocity, Single smoothTime, Single maxSpeed, Single deltaTime)
{
static auto _method = MonoClass()->GetMethod(0x060014FA)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2&, Single, Single, Single)>();
return _method(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
}
UnityEngine::Vector2 Vector2::op_Addition(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014FB)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
UnityEngine::Vector2 Vector2::op_Subtraction(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014FC)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
UnityEngine::Vector2 Vector2::op_Multiply(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014FD)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
UnityEngine::Vector2 Vector2::op_Division(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
{
static auto _method = MonoClass()->GetMethod(0x060014FE)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(a, b);
}
UnityEngine::Vector2 Vector2::op_UnaryNegation(UnityEngine::Vector2 a)
{
static auto _method = MonoClass()->GetMethod(0x060014FF)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2)>();
return _method(a);
}
UnityEngine::Vector2 Vector2::op_Multiply1(UnityEngine::Vector2 a, Single d)
{
static auto _method = MonoClass()->GetMethod(0x06001500)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, Single)>();
return _method(a, d);
}
UnityEngine::Vector2 Vector2::op_Multiply2(Single d, UnityEngine::Vector2 a)
{
static auto _method = MonoClass()->GetMethod(0x06001501)->GetCallable<UnityEngine::Vector2(*)(Single, UnityEngine::Vector2)>();
return _method(d, a);
}
UnityEngine::Vector2 Vector2::op_Division1(UnityEngine::Vector2 a, Single d)
{
static auto _method = MonoClass()->GetMethod(0x06001502)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector2, Single)>();
return _method(a, d);
}
Boolean Vector2::op_Equality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001503)->GetCallable<Boolean(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(lhs, rhs);
}
Boolean Vector2::op_Inequality(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
{
static auto _method = MonoClass()->GetMethod(0x06001504)->GetCallable<Boolean(*)(UnityEngine::Vector2, UnityEngine::Vector2)>();
return _method(lhs, rhs);
}
UnityEngine::Vector2 Vector2::op_Implicit(UnityEngine::Vector3 v)
{
static auto _method = MonoClass()->GetMethod(0x06001505)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Vector3)>();
return _method(v);
}
UnityEngine::Vector3 Vector2::op_Implicit1(UnityEngine::Vector2 v)
{
static auto _method = MonoClass()->GetMethod(0x06001506)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Vector2)>();
return _method(v);
}
UnityEngine::Vector2 Vector2::get_zero()
{
static auto _method = MonoClass()->GetMethod(0x06001507)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_one()
{
static auto _method = MonoClass()->GetMethod(0x06001508)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_up()
{
static auto _method = MonoClass()->GetMethod(0x06001509)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_down()
{
static auto _method = MonoClass()->GetMethod(0x0600150A)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_left()
{
static auto _method = MonoClass()->GetMethod(0x0600150B)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_right()
{
static auto _method = MonoClass()->GetMethod(0x0600150C)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_positiveInfinity()
{
static auto _method = MonoClass()->GetMethod(0x0600150D)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
UnityEngine::Vector2 Vector2::get_negativeInfinity()
{
static auto _method = MonoClass()->GetMethod(0x0600150E)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
};
}
