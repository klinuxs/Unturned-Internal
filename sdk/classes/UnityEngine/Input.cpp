#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Input::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.InputLegacyModule")->GetClass("UnityEngine", "Input");
return _class;
}
uintptr_t Input::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Input* Input::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Input>();
}
Runtime::MonoVTable* Input::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Input::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Input);
// --------------- START CLASS MEMBERS --------------- //
unknown_type Input::locationServiceInstance()
{
static uintptr_t _offset = MonoClass()->GetField("locationServiceInstance")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Input::locationServiceInstance_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("locationServiceInstance")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Input::compassInstance()
{
static uintptr_t _offset = MonoClass()->GetField("compassInstance")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Input::compassInstance_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("compassInstance")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Input::s_MainGyro()
{
static uintptr_t _offset = MonoClass()->GetField("s_MainGyro")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Input::s_MainGyro_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("s_MainGyro")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Input::GetKeyInt(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x0600005E)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKeyString(String* name)
{
static auto _method = MonoClass()->GetMethod(0x0600005F)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
Boolean Input::GetKeyUpInt(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x06000060)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKeyUpString(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06000061)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
Boolean Input::GetKeyDownInt(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x06000062)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKeyDownString(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06000063)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
Single Input::GetAxis(String* axisName)
{
static auto _method = MonoClass()->GetMethod(0x06000064)->GetCallable<Single(*)(String*)>();
return _method(axisName);
}
Single Input::GetAxisRaw(String* axisName)
{
static auto _method = MonoClass()->GetMethod(0x06000065)->GetCallable<Single(*)(String*)>();
return _method(axisName);
}
Boolean Input::GetButton(String* buttonName)
{
static auto _method = MonoClass()->GetMethod(0x06000066)->GetCallable<Boolean(*)(String*)>();
return _method(buttonName);
}
Boolean Input::GetButtonDown(String* buttonName)
{
static auto _method = MonoClass()->GetMethod(0x06000067)->GetCallable<Boolean(*)(String*)>();
return _method(buttonName);
}
Boolean Input::GetButtonUp(String* buttonName)
{
static auto _method = MonoClass()->GetMethod(0x06000068)->GetCallable<Boolean(*)(String*)>();
return _method(buttonName);
}
Boolean Input::GetMouseButton(Int32 button)
{
static auto _method = MonoClass()->GetMethod(0x06000069)->GetCallable<Boolean(*)(Int32)>();
return _method(button);
}
Boolean Input::GetMouseButtonDown(Int32 button)
{
static auto _method = MonoClass()->GetMethod(0x0600006A)->GetCallable<Boolean(*)(Int32)>();
return _method(button);
}
Boolean Input::GetMouseButtonUp(Int32 button)
{
static auto _method = MonoClass()->GetMethod(0x0600006B)->GetCallable<Boolean(*)(Int32)>();
return _method(button);
}
void Input::ResetInputAxes()
{
static auto _method = MonoClass()->GetMethod(0x0600006C)->GetCallable<void(*)()>();
return _method();
}
Array<String*>* Input::GetJoystickNames()
{
static auto _method = MonoClass()->GetMethod(0x0600006D)->GetCallable<Array<String*>*(*)()>();
return _method();
}
unknown_type Input::GetTouch(Int32 index)
{
static auto _method = MonoClass()->GetMethod(0x0600006E)->GetCallable<unknown_type(*)(Int32)>();
return _method(index);
}
unknown_type Input::GetAccelerationEvent(Int32 index)
{
static auto _method = MonoClass()->GetMethod(0x0600006F)->GetCallable<unknown_type(*)(Int32)>();
return _method(index);
}
Boolean Input::GetKey(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x06000070)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKey1(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06000071)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
Boolean Input::GetKeyUp(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x06000072)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKeyUp1(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06000073)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
Boolean Input::GetKeyDown(unknown_type key)
{
static auto _method = MonoClass()->GetMethod(0x06000074)->GetCallable<Boolean(*)(unknown_type)>();
return _method(key);
}
Boolean Input::GetKeyDown1(String* name)
{
static auto _method = MonoClass()->GetMethod(0x06000075)->GetCallable<Boolean(*)(String*)>();
return _method(name);
}
void Input::SimulateTouch(unknown_type touch)
{
static auto _method = MonoClass()->GetMethod(0x06000076)->GetCallable<void(*)(unknown_type)>();
return _method(touch);
}
void Input::SimulateTouchInternal(unknown_type touch, Int64 timestamp)
{
static auto _method = MonoClass()->GetMethod(0x06000077)->GetCallable<void(*)(unknown_type, Int64)>();
return _method(touch, timestamp);
}
Boolean Input::get_simulateMouseWithTouches()
{
static auto _method = MonoClass()->GetMethod(0x06000078)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::set_simulateMouseWithTouches(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000079)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Input::get_anyKey()
{
static auto _method = MonoClass()->GetMethod(0x0600007A)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Input::get_anyKeyDown()
{
static auto _method = MonoClass()->GetMethod(0x0600007B)->GetCallable<Boolean(*)()>();
return _method();
}
String* Input::get_inputString()
{
static auto _method = MonoClass()->GetMethod(0x0600007C)->GetCallable<String*(*)()>();
return _method();
}
UnityEngine::Vector3 Input::get_mousePosition()
{
static auto _method = MonoClass()->GetMethod(0x0600007D)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
UnityEngine::Vector2 Input::get_mouseScrollDelta()
{
static auto _method = MonoClass()->GetMethod(0x0600007E)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
unknown_type Input::get_imeCompositionMode()
{
static auto _method = MonoClass()->GetMethod(0x0600007F)->GetCallable<unknown_type(*)()>();
return _method();
}
void Input::set_imeCompositionMode(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06000080)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
String* Input::get_compositionString()
{
static auto _method = MonoClass()->GetMethod(0x06000081)->GetCallable<String*(*)()>();
return _method();
}
Boolean Input::get_imeIsSelected()
{
static auto _method = MonoClass()->GetMethod(0x06000082)->GetCallable<Boolean(*)()>();
return _method();
}
UnityEngine::Vector2 Input::get_compositionCursorPos()
{
static auto _method = MonoClass()->GetMethod(0x06000083)->GetCallable<UnityEngine::Vector2(*)()>();
return _method();
}
void Input::set_compositionCursorPos(UnityEngine::Vector2 value)
{
static auto _method = MonoClass()->GetMethod(0x06000084)->GetCallable<void(*)(UnityEngine::Vector2)>();
return _method(value);
}
Boolean Input::get_eatKeyPressOnTextFieldFocus()
{
static auto _method = MonoClass()->GetMethod(0x06000085)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::set_eatKeyPressOnTextFieldFocus(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000086)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Input::get_mousePresent()
{
static auto _method = MonoClass()->GetMethod(0x06000087)->GetCallable<Boolean(*)()>();
return _method();
}
Int32 Input::get_touchCount()
{
static auto _method = MonoClass()->GetMethod(0x06000088)->GetCallable<Int32(*)()>();
return _method();
}
Boolean Input::get_touchPressureSupported()
{
static auto _method = MonoClass()->GetMethod(0x06000089)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Input::get_stylusTouchSupported()
{
static auto _method = MonoClass()->GetMethod(0x0600008A)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Input::get_touchSupported()
{
static auto _method = MonoClass()->GetMethod(0x0600008B)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Input::get_multiTouchEnabled()
{
static auto _method = MonoClass()->GetMethod(0x0600008C)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::set_multiTouchEnabled(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x0600008D)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Input::get_isGyroAvailable()
{
static auto _method = MonoClass()->GetMethod(0x0600008E)->GetCallable<Boolean(*)()>();
return _method();
}
unknown_type Input::get_deviceOrientation()
{
static auto _method = MonoClass()->GetMethod(0x0600008F)->GetCallable<unknown_type(*)()>();
return _method();
}
UnityEngine::Vector3 Input::get_acceleration()
{
static auto _method = MonoClass()->GetMethod(0x06000090)->GetCallable<UnityEngine::Vector3(*)()>();
return _method();
}
Boolean Input::get_compensateSensors()
{
static auto _method = MonoClass()->GetMethod(0x06000091)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::set_compensateSensors(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000092)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Int32 Input::get_accelerationEventCount()
{
static auto _method = MonoClass()->GetMethod(0x06000093)->GetCallable<Int32(*)()>();
return _method();
}
Boolean Input::get_backButtonLeavesApp()
{
static auto _method = MonoClass()->GetMethod(0x06000094)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::set_backButtonLeavesApp(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000095)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
unknown_type Input::get_location()
{
static auto _method = MonoClass()->GetMethod(0x06000096)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Input::get_compass()
{
static auto _method = MonoClass()->GetMethod(0x06000097)->GetCallable<unknown_type(*)()>();
return _method();
}
Int32 Input::GetGyroInternal()
{
static auto _method = MonoClass()->GetMethod(0x06000098)->GetCallable<Int32(*)()>();
return _method();
}
unknown_type Input::get_gyro()
{
static auto _method = MonoClass()->GetMethod(0x06000099)->GetCallable<unknown_type(*)()>();
return _method();
}
Array<unknown_type>* Input::get_touches()
{
static auto _method = MonoClass()->GetMethod(0x0600009A)->GetCallable<Array<unknown_type>*(*)()>();
return _method();
}
Array<unknown_type>* Input::get_accelerationEvents()
{
static auto _method = MonoClass()->GetMethod(0x0600009B)->GetCallable<Array<unknown_type>*(*)()>();
return _method();
}
Boolean Input::CheckDisabled()
{
static auto _method = MonoClass()->GetMethod(0x0600009C)->GetCallable<Boolean(*)()>();
return _method();
}
void Input::GetTouch_Injected(Int32 index, unknown_type ret)
{
static auto _method = MonoClass()->GetMethod(0x0600009E)->GetCallable<void(*)(Int32, unknown_type)>();
return _method(index, ret);
}
void Input::GetAccelerationEvent_Injected(Int32 index, unknown_type ret)
{
static auto _method = MonoClass()->GetMethod(0x0600009F)->GetCallable<void(*)(Int32, unknown_type)>();
return _method(index, ret);
}
void Input::SimulateTouchInternal_Injected(unknown_type touch, Int64 timestamp)
{
static auto _method = MonoClass()->GetMethod(0x060000A0)->GetCallable<void(*)(unknown_type, Int64)>();
return _method(touch, timestamp);
}
void Input::get_mousePosition_Injected(UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x060000A1)->GetCallable<void(*)(UnityEngine::Vector3&)>();
return _method(ret);
}
void Input::get_mouseScrollDelta_Injected(UnityEngine::Vector2& ret)
{
static auto _method = MonoClass()->GetMethod(0x060000A2)->GetCallable<void(*)(UnityEngine::Vector2&)>();
return _method(ret);
}
void Input::get_compositionCursorPos_Injected(UnityEngine::Vector2& ret)
{
static auto _method = MonoClass()->GetMethod(0x060000A3)->GetCallable<void(*)(UnityEngine::Vector2&)>();
return _method(ret);
}
void Input::set_compositionCursorPos_Injected(UnityEngine::Vector2& value)
{
static auto _method = MonoClass()->GetMethod(0x060000A4)->GetCallable<void(*)(UnityEngine::Vector2&)>();
return _method(value);
}
void Input::get_acceleration_Injected(UnityEngine::Vector3& ret)
{
static auto _method = MonoClass()->GetMethod(0x060000A5)->GetCallable<void(*)(UnityEngine::Vector3&)>();
return _method(ret);
}
};
}
