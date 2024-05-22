#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerLook::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerLook");
return _class;
}
uintptr_t PlayerLook::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerLook* PlayerLook::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerLook>();
}
Runtime::MonoVTable* PlayerLook::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerLook::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerLook);
// --------------- START CLASS MEMBERS --------------- //
Single PlayerLook::HEIGHT_LOOK_SIT()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_SIT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_LOOK_SIT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_SIT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_LOOK_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_LOOK_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_LOOK_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_LOOK_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_LOOK_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_LOOK_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_LOOK_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_CAMERA_SIT()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_SIT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_CAMERA_SIT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_SIT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_CAMERA_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_CAMERA_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_CAMERA_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_CAMERA_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::HEIGHT_CAMERA_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::HEIGHT_CAMERA_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CAMERA_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_SIT()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_SIT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_SIT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_SIT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_SIT()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_SIT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_SIT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_SIT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_CLIMB()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_CLIMB")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_CLIMB_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_CLIMB")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_CLIMB()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_CLIMB")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_CLIMB_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_CLIMB")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MIN_ANGLE_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MIN_ANGLE_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MIN_ANGLE_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::MAX_ANGLE_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::MAX_ANGLE_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_ANGLE_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type PlayerLook::onPerspectiveUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPerspectiveUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::onPerspectiveUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPerspectiveUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Camera* PlayerLook::_characterCamera()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterCamera")->GetOffset();
return Memory::read<UnityEngine::Camera*>(THIS_PTR + _offset);
}
void PlayerLook::_characterCamera_Set(UnityEngine::Camera* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterCamera")->GetOffset();
Memory::write<UnityEngine::Camera*>(value, THIS_PTR + _offset);
}
UnityEngine::Camera* PlayerLook::_scopeCamera()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_scopeCamera")->GetOffset();
return Memory::read<UnityEngine::Camera*>(THIS_PTR + _offset);
}
void PlayerLook::_scopeCamera_Set(UnityEngine::Camera* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_scopeCamera")->GetOffset();
Memory::write<UnityEngine::Camera*>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::scopeMaterial()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<scopeMaterial>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::scopeMaterial_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<scopeMaterial>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::_isScopeActive()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isScopeActive")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::_isScopeActive_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isScopeActive")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isOverlayActive()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOverlayActive")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isOverlayActive_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOverlayActive")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::scopeVision()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeVision")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::scopeVision_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeVision")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::scopeNightvisionColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeNightvisionColor")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::scopeNightvisionColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeNightvisionColor")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single PlayerLook::scopeNightvisionFogIntensity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeNightvisionFogIntensity")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::scopeNightvisionFogIntensity_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeNightvisionFogIntensity")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::tempVision()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempVision")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::tempVision_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempVision")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::tempNightvisionColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempNightvisionColor")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::tempNightvisionColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempNightvisionColor")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single PlayerLook::tempNightvisionFogIntensity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempNightvisionFogIntensity")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::tempNightvisionFogIntensity_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempNightvisionFogIntensity")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerLook::_aim()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_aim")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerLook::_aim_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_aim")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Single PlayerLook::characterHeight()
{
static uintptr_t _offset = MonoClass()->GetField("characterHeight")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::characterHeight_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("characterHeight")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::_characterYaw()
{
static uintptr_t _offset = MonoClass()->GetField("_characterYaw")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::_characterYaw_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("_characterYaw")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::characterYaw()
{
static uintptr_t _offset = MonoClass()->GetField("characterYaw")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::characterYaw_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("characterYaw")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::killcam()
{
static uintptr_t _offset = MonoClass()->GetField("killcam")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::killcam_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("killcam")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::yawInputMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("yawInputMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::yawInputMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("yawInputMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::pitchInputMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pitchInputMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::pitchInputMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pitchInputMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_pitch()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_pitch")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_pitch_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_pitch")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_yaw()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_yaw")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_yaw_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_yaw")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_look_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_look_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_look_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_look_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_orbitPitch()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_orbitPitch")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_orbitPitch_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_orbitPitch")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::_orbitYaw()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_orbitYaw")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::_orbitYaw_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_orbitYaw")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::orbitSpeed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("orbitSpeed")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::orbitSpeed_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("orbitSpeed")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerLook::lockPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lockPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerLook::lockPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lockPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerLook::orbitPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("orbitPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerLook::orbitPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("orbitPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isOrbiting()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOrbiting")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isOrbiting_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOrbiting")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isTracking()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTracking")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isTracking_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTracking")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isLocking()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isLocking")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isLocking_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isLocking")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isFocusing()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isFocusing")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isFocusing_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isFocusing")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isSmoothing()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isSmoothing")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isSmoothing_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isSmoothing")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::areSpecStatsVisible()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<areSpecStatsVisible>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::areSpecStatsVisible_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<areSpecStatsVisible>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isIgnoringInput()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isIgnoringInput")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isIgnoringInput_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isIgnoringInput")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerLook::smoothPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerLook::smoothPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Quaternion PlayerLook::smoothRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothRotation")->GetOffset();
return Memory::read<UnityEngine::Quaternion>(THIS_PTR + _offset);
}
void PlayerLook::smoothRotation_Set(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothRotation")->GetOffset();
Memory::write<UnityEngine::Quaternion>(value, THIS_PTR + _offset);
}
Byte PlayerLook::angle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("angle")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLook::angle_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("angle")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLook::rot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rot")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLook::rot_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rot")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Single PlayerLook::recoil_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoil_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::recoil_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoil_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::recoil_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoil_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::recoil_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoil_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Byte PlayerLook::lastAngle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastAngle")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLook::lastAngle_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastAngle")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLook::lastRot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRot")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLook::lastRot_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRot")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
UnityEngine::Quaternion PlayerLook::flinchLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("flinchLocalRotation")->GetOffset();
return Memory::read<UnityEngine::Quaternion>(THIS_PTR + _offset);
}
void PlayerLook::flinchLocalRotation_Set(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("flinchLocalRotation")->GetOffset();
Memory::write<UnityEngine::Quaternion>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::targetExplosionLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("targetExplosionLocalRotation")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::targetExplosionLocalRotation_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("targetExplosionLocalRotation")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Quaternion PlayerLook::smoothedExplosionLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothedExplosionLocalRotation")->GetOffset();
return Memory::read<UnityEngine::Quaternion>(THIS_PTR + _offset);
}
void PlayerLook::smoothedExplosionLocalRotation_Set(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("smoothedExplosionLocalRotation")->GetOffset();
Memory::write<UnityEngine::Quaternion>(value, THIS_PTR + _offset);
}
Single PlayerLook::explosionSmoothingSpeed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("explosionSmoothingSpeed")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::explosionSmoothingSpeed_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("explosionSmoothingSpeed")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::mainCameraZoomFactor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("mainCameraZoomFactor")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::mainCameraZoomFactor_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("mainCameraZoomFactor")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::scopeCameraZoomFactor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeCameraZoomFactor")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::scopeCameraZoomFactor_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeCameraZoomFactor")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::eyes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("eyes")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::eyes_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("eyes")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLook::thirdPersonEyeHeight()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdPersonEyeHeight")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLook::thirdPersonEyeHeight_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdPersonEyeHeight")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::shouldUseZoomFactorForSensitivity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldUseZoomFactorForSensitivity")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::shouldUseZoomFactorForSensitivity_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldUseZoomFactorForSensitivity")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::_perspective()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_perspective")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::_perspective_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_perspective")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::scopeRenderTexture()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeRenderTexture")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLook::scopeRenderTexture_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeRenderTexture")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::isZoomed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isZoomed")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::isZoomed_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isZoomed")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::allowFreecamWithoutAdmin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowFreecamWithoutAdmin")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::allowFreecamWithoutAdmin_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowFreecamWithoutAdmin")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::allowWorkzoneWithoutAdmin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowWorkzoneWithoutAdmin")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::allowWorkzoneWithoutAdmin_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowWorkzoneWithoutAdmin")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLook::allowSpecStatsWithoutAdmin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowSpecStatsWithoutAdmin")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLook::allowSpecStatsWithoutAdmin_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("allowSpecStatsWithoutAdmin")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLook::SendFreecamAllowed()
{
static uintptr_t _offset = MonoClass()->GetField("SendFreecamAllowed")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLook::SendFreecamAllowed_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendFreecamAllowed")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLook::SendWorkzoneAllowed()
{
static uintptr_t _offset = MonoClass()->GetField("SendWorkzoneAllowed")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLook::SendWorkzoneAllowed_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendWorkzoneAllowed")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLook::SendSpecStatsAllowed()
{
static uintptr_t _offset = MonoClass()->GetField("SendSpecStatsAllowed")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLook::SendSpecStatsAllowed_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSpecStatsAllowed")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Array<unknown_type>* PlayerLook::sweepHits()
{
static uintptr_t _offset = MonoClass()->GetField("sweepHits")->GetOffset();
return Memory::read<Array<unknown_type>*>(StaticInstance() + _offset);
}
void PlayerLook::sweepHits_Set(Array<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("sweepHits")->GetOffset();
Memory::write<Array<unknown_type>*>(value, StaticInstance() + _offset);
}
Single PlayerLook::NEAR_CLIP_SWEEP_RADIUS()
{
static uintptr_t _offset = MonoClass()->GetField("NEAR_CLIP_SWEEP_RADIUS")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLook::NEAR_CLIP_SWEEP_RADIUS_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("NEAR_CLIP_SWEEP_RADIUS")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerLook::get_heightLook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600336E)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_heightCamera()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600336F)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
UnityEngine::Camera* PlayerLook::get_characterCamera()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003370)->GetCallable<UnityEngine::Camera*(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
UnityEngine::Camera* PlayerLook::get_scopeCamera()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003371)->GetCallable<UnityEngine::Camera*(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
unknown_type PlayerLook::get_scopeMaterial()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003372)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::set_scopeMaterial(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003373)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type)>();
return _method(this, value);
}
Boolean PlayerLook::get_isScopeActive()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003374)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
UnityEngine::Transform* PlayerLook::get_aim()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003375)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_pitch()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003376)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_yaw()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003377)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::TeleportYaw(Single newYaw)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003378)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single)>();
return _method(this, newYaw);
}
Single PlayerLook::get_look_x()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003379)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_look_y()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337A)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_orbitPitch()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337B)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Single PlayerLook::get_orbitYaw()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337C)->GetCallable<Single(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Boolean PlayerLook::get_areSpecStatsVisible()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337D)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::set_areSpecStatsVisible(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337E)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, value);
}
Boolean PlayerLook::get_isCam()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600337F)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
unknown_type PlayerLook::get_perspective()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003380)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
UnityEngine::Vector3 PlayerLook::getEyesPosition()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003381)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
UnityEngine::Vector3 PlayerLook::GetEyesPositionWithoutLeaning()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003382)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::updateScope(unknown_type quality)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003383)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type)>();
return _method(this, quality);
}
void PlayerLook::enableScope(Single zoom, unknown_type sightAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003384)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single, unknown_type)>();
return _method(this, zoom, sightAsset);
}
void PlayerLook::disableScope()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003385)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::enableOverlay()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003386)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::setPerspective(unknown_type newPerspective)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003387)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type)>();
return _method(this, newPerspective);
}
void PlayerLook::setActivePerspective(unknown_type newPerspective)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003388)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type)>();
return _method(this, newPerspective);
}
void PlayerLook::ApplyScopeVisionToLighting()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003389)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::disableOverlay()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338A)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::RestoreSavedLightingVision()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338B)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::enableZoom(Single zoom)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338C)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single)>();
return _method(this, zoom);
}
void PlayerLook::disableZoom()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338D)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::updateRot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338E)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::updateLook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600338F)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::recoil(Single x, Single y, Single h, Single v)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003390)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single, Single, Single, Single)>();
return _method(this, x, y, h, v);
}
void PlayerLook::simulate(Single look_x, Single look_y, Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003391)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single, Single, Single)>();
return _method(this, look_x, look_y, delta);
}
void PlayerLook::clampPitch()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003392)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::clampYaw()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003393)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::updateAim(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003394)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Single)>();
return _method(this, delta);
}
void PlayerLook::FlinchFromDamage(Byte damageAmount, UnityEngine::Vector3 worldDirection)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003395)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Byte, UnityEngine::Vector3)>();
return _method(this, damageAmount, worldDirection);
}
void PlayerLook::FlinchFromExplosion(UnityEngine::Vector3 position, Single radius, Single magnitudeDegrees)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003396)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, UnityEngine::Vector3, Single, Single)>();
return _method(this, position, radius, magnitudeDegrees);
}
void PlayerLook::onVisionUpdated(Boolean isViewing)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003397)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isViewing);
}
void PlayerLook::onLifeUpdated(Boolean isDead)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003398)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isDead);
}
void PlayerLook::onSeated(Boolean isDriver, Boolean inVehicle, Boolean wasVehicle, unknown_type oldVehicle, unknown_type newVehicle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003399)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean, Boolean, Boolean, unknown_type, unknown_type)>();
return _method(this, isDriver, inVehicle, wasVehicle, oldVehicle, newVehicle);
}
Boolean PlayerLook::get_canUseFreecam()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339A)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Boolean PlayerLook::get_canUseWorkzone()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339B)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
Boolean PlayerLook::get_canUseSpecStats()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339C)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::tellFreecamAllowed(unknown_type senderId, Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339D)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type, Boolean)>();
return _method(this, senderId, isAllowed);
}
void PlayerLook::ReceiveFreecamAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339E)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
void PlayerLook::sendFreecamAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600339F)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
void PlayerLook::tellWorkzoneAllowed(unknown_type senderId, Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A0)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type, Boolean)>();
return _method(this, senderId, isAllowed);
}
void PlayerLook::ReceiveWorkzoneAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A1)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
void PlayerLook::sendWorkzoneAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A2)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
void PlayerLook::tellSpecStatsAllowed(unknown_type senderId, Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A3)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, unknown_type, Boolean)>();
return _method(this, senderId, isAllowed);
}
void PlayerLook::ReceiveSpecStatsAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A4)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
void PlayerLook::sendSpecStatsAllowed(Boolean isAllowed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A5)->GetCallable<void(*)(SDG::Unturned::PlayerLook*, Boolean)>();
return _method(this, isAllowed);
}
UnityEngine::Vector3 PlayerLook::sphereCastCamera(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Single length, Int32 layerMask)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A6)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerLook*, UnityEngine::Vector3, UnityEngine::Vector3, Single, Int32)>();
return _method(this, origin, direction, length, layerMask);
}
void PlayerLook::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A7)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A8)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
void PlayerLook::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033A9)->GetCallable<void(*)(SDG::Unturned::PlayerLook*)>();
return _method(this);
}
};
}
}
