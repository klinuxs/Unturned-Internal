#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerAnimator::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerAnimator");
return _class;
}
uintptr_t PlayerAnimator::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerAnimator* PlayerAnimator::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerAnimator>();
}
Runtime::MonoVTable* PlayerAnimator::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerAnimator::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerAnimator);
// --------------- START CLASS MEMBERS --------------- //
Byte PlayerAnimator::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerAnimator::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::BOB_SPRINT()
{
static uintptr_t _offset = MonoClass()->GetField("BOB_SPRINT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::BOB_SPRINT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("BOB_SPRINT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::BOB_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("BOB_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::BOB_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("BOB_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::BOB_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("BOB_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::BOB_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("BOB_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::BOB_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("BOB_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::BOB_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("BOB_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::BOB_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("BOB_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::BOB_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("BOB_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::TILT_SPRINT()
{
static uintptr_t _offset = MonoClass()->GetField("TILT_SPRINT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::TILT_SPRINT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TILT_SPRINT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::TILT_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("TILT_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::TILT_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TILT_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::TILT_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("TILT_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::TILT_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TILT_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::TILT_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("TILT_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::TILT_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TILT_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::TILT_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("TILT_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::TILT_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TILT_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::SPEED_SPRINT()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SPRINT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::SPEED_SPRINT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SPRINT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::SPEED_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::SPEED_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::SPEED_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::SPEED_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::SPEED_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::SPEED_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerAnimator::SPEED_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerAnimator::SPEED_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type PlayerAnimator::onGestureUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onGestureUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::onGestureUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onGestureUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::OnGestureChanged_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnGestureChanged_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::OnGestureChanged_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnGestureChanged_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
UnityEngine::Transform* PlayerAnimator::viewmodelParentTransform()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelParentTransform")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelParentTransform_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelParentTransform")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::firstAnimator()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstAnimator")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::firstAnimator_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstAnimator")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::thirdAnimator()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdAnimator")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::thirdAnimator_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdAnimator")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::characterAnimator()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterAnimator")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::characterAnimator_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterAnimator")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::firstRenderer_0()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstRenderer_0")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::firstRenderer_0_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstRenderer_0")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::thirdRenderer_0()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdRenderer_0")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::thirdRenderer_0_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdRenderer_0")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::thirdRenderer_1()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdRenderer_1")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::thirdRenderer_1_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdRenderer_1")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerAnimator::_firstSkeleton()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstSkeleton")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerAnimator::_firstSkeleton_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstSkeleton")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerAnimator::_thirdSkeleton()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSkeleton")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerAnimator::_thirdSkeleton_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSkeleton")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerAnimator::viewmodelCameraTransform()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraTransform")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCameraTransform_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraTransform")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Camera* PlayerAnimator::viewmodelCamera()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCamera")->GetOffset();
return Memory::read<UnityEngine::Camera*>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCamera_Set(UnityEngine::Camera* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCamera")->GetOffset();
Memory::write<UnityEngine::Camera*>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::viewmodelCameraLocalPositionOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalPositionOffset")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalPositionOffset")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::turretViewmodelCameraLocalPositionOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("turretViewmodelCameraLocalPositionOffset")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::turretViewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("turretViewmodelCameraLocalPositionOffset")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::scopeSway()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeSway")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::scopeSway_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("scopeSway")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::blendedViewmodelSwayMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelSwayMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::blendedViewmodelSwayMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelSwayMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::viewmodelSwayMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelSwayMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelSwayMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelSwayMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::blendedViewmodelOffsetPreferenceMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelOffsetPreferenceMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::blendedViewmodelOffsetPreferenceMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelOffsetPreferenceMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::viewmodelOffsetPreferenceMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelOffsetPreferenceMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelOffsetPreferenceMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelOffsetPreferenceMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::blendedViewmodelCameraLocalPositionOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelCameraLocalPositionOffset")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::blendedViewmodelCameraLocalPositionOffset_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("blendedViewmodelCameraLocalPositionOffset")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::recoilViewmodelCameraOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraOffset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::recoilViewmodelCameraOffset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraOffset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::recoilViewmodelCameraRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraRotation")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::recoilViewmodelCameraRotation_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraRotation")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::recoilViewmodelCameraMask()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraMask")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::recoilViewmodelCameraMask_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilViewmodelCameraMask")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::bayonetViewmodelCameraOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bayonetViewmodelCameraOffset")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::bayonetViewmodelCameraOffset_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bayonetViewmodelCameraOffset")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::viewmodelMovementOffset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelMovementOffset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelMovementOffset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelMovementOffset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::viewmodelCameraLocalPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCameraLocalPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::viewmodelTargetExplosionLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelTargetExplosionLocalRotation")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelTargetExplosionLocalRotation_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelTargetExplosionLocalRotation")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Quaternion PlayerAnimator::viewmodelSmoothedExplosionLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelSmoothedExplosionLocalRotation")->GetOffset();
return Memory::read<UnityEngine::Quaternion>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelSmoothedExplosionLocalRotation_Set(UnityEngine::Quaternion value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelSmoothedExplosionLocalRotation")->GetOffset();
Memory::write<UnityEngine::Quaternion>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::viewmodelExplosionSmoothingSpeed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelExplosionSmoothingSpeed")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelExplosionSmoothingSpeed_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelExplosionSmoothingSpeed")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::isHiddenWaitingForClothing()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isHiddenWaitingForClothing")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::isHiddenWaitingForClothing_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isHiddenWaitingForClothing")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::desiredViewmodelCameraLocalPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("desiredViewmodelCameraLocalPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::desiredViewmodelCameraLocalPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("desiredViewmodelCameraLocalPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::viewmodelCameraMovementLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraMovementLocalRotation")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCameraMovementLocalRotation_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraMovementLocalRotation")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::viewmodelCameraLocalRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalRotation")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelCameraLocalRotation_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelCameraLocalRotation")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::lastFramePitchInput()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFramePitchInput")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::lastFramePitchInput_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFramePitchInput")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::lastFrameYawInput()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameYawInput")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::lastFrameYawInput_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameYawInput")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::rotationInputViewmodelRoll()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rotationInputViewmodelRoll")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::rotationInputViewmodelRoll_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rotationInputViewmodelRoll")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::lastFrameHadItemPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameHadItemPosition")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::lastFrameHadItemPosition_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameHadItemPosition")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::lastFrameItemPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameItemPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::lastFrameItemPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFrameItemPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::viewmodelItemInertiaRotation()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelItemInertiaRotation")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelItemInertiaRotation_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelItemInertiaRotation")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerAnimator::viewmodelItemInertiaMask()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelItemInertiaMask")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerAnimator::viewmodelItemInertiaMask_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("viewmodelItemInertiaMask")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::inputWantsToLeanLeft()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsToLeanLeft")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::inputWantsToLeanLeft_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsToLeanLeft")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::inputWantsToLeanRight()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsToLeanRight")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::inputWantsToLeanRight_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsToLeanRight")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::leanObstructed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("leanObstructed")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::leanObstructed_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("leanObstructed")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::lastCameraSideInputRealtime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastCameraSideInputRealtime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::lastCameraSideInputRealtime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastCameraSideInputRealtime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Int32 PlayerAnimator::lastLean()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastLean")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerAnimator::lastLean_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastLean")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 PlayerAnimator::_lean()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lean")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerAnimator::_lean_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lean")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::_shoulder()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoulder")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::_shoulder_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoulder")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerAnimator::_shoulder2()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoulder2")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerAnimator::_shoulder2_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoulder2")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::inputWantsThirdPersonCameraOnLeftSide()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsThirdPersonCameraOnLeftSide")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::inputWantsThirdPersonCameraOnLeftSide_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inputWantsThirdPersonCameraOnLeftSide")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::_gesture()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_gesture")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::_gesture_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_gesture")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::captorID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorID")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::captorID_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorID")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt16 PlayerAnimator::captorItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorItem")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void PlayerAnimator::captorItem_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorItem")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
UInt16 PlayerAnimator::captorStrength()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorStrength")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void PlayerAnimator::captorStrength_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("captorStrength")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::OnLeanChanged_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnLeanChanged_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::OnLeanChanged_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnLeanChanged_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerAnimator::SendLean()
{
static uintptr_t _offset = MonoClass()->GetField("SendLean")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::SendLean_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendLean")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerAnimator::SendGesture()
{
static uintptr_t _offset = MonoClass()->GetField("SendGesture")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::SendGesture_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendGesture")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerAnimator::onInventoryGesture()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryGesture")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerAnimator::onInventoryGesture_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryGesture")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerAnimator::SendGestureRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendGestureRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::SendGestureRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendGestureRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Array<unknown_type>* PlayerAnimator::leanHits()
{
static uintptr_t _offset = MonoClass()->GetField("leanHits")->GetOffset();
return Memory::read<Array<unknown_type>*>(StaticInstance() + _offset);
}
void PlayerAnimator::leanHits_Set(Array<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("leanHits")->GetOffset();
Memory::write<Array<unknown_type>*>(value, StaticInstance() + _offset);
}
unknown_type PlayerAnimator::Metal_1_Ref()
{
static uintptr_t _offset = MonoClass()->GetField("Metal_1_Ref")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerAnimator::Metal_1_Ref_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("Metal_1_Ref")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean PlayerAnimator::hasCalledUpdateLocalPlayerModelVisibility()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasCalledUpdateLocalPlayerModelVisibility")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::hasCalledUpdateLocalPlayerModelVisibility_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasCalledUpdateLocalPlayerModelVisibility")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::wasLocalPlayerFirstPersonModelVisible()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLocalPlayerFirstPersonModelVisible")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::wasLocalPlayerFirstPersonModelVisible_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLocalPlayerFirstPersonModelVisible")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::wasLocalPlayerThirdPersonModelVisible()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLocalPlayerThirdPersonModelVisible")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::wasLocalPlayerThirdPersonModelVisible_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLocalPlayerThirdPersonModelVisible")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerAnimator::wasLoadCalled()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerAnimator::wasLoadCalled_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
void PlayerAnimator::add_OnGestureChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003049)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerAnimator::remove_OnGestureChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x0600304A)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
UnityEngine::Transform* PlayerAnimator::get_firstSkeleton()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600304B)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
UnityEngine::Transform* PlayerAnimator::get_thirdSkeleton()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600304C)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Boolean PlayerAnimator::get_leanLeft()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600304D)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Boolean PlayerAnimator::get_leanRight()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600304E)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Int32 PlayerAnimator::get_lean()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600304F)->GetCallable<Int32(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Single PlayerAnimator::get_shoulder()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003050)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Single PlayerAnimator::get_shoulder2()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003051)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Boolean PlayerAnimator::get_side()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003052)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
unknown_type PlayerAnimator::get_gesture()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003053)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::addAnimation(unknown_type clip)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003054)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, clip);
}
void PlayerAnimator::removeAnimation(unknown_type clip)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003055)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, clip);
}
void PlayerAnimator::setAnimationSpeed(String* name, Single speed)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003056)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*, Single)>();
return _method(this, name, speed);
}
Single PlayerAnimator::getAnimationLength(String* name)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003057)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*, String*)>();
return _method(this, name);
}
Single PlayerAnimator::GetAnimationLength(String* name, Boolean scaled)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003058)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*, String*, Boolean)>();
return _method(this, name, scaled);
}
Boolean PlayerAnimator::checkExists(String* name)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003059)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*, String*)>();
return _method(this, name);
}
void PlayerAnimator::play(String* name, Boolean smooth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305A)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*, Boolean)>();
return _method(this, name, smooth);
}
void PlayerAnimator::stop(String* name)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305B)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*)>();
return _method(this, name);
}
void PlayerAnimator::mixAnimation(String* name)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305C)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*)>();
return _method(this, name);
}
void PlayerAnimator::mixAnimation1(String* name, Boolean mixLeftShoulder, Boolean mixRightShoulder)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305D)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*, Boolean, Boolean)>();
return _method(this, name, mixLeftShoulder, mixRightShoulder);
}
void PlayerAnimator::mixAnimation2(String* name, Boolean mixLeftShoulder, Boolean mixRightShoulder, Boolean mixSkull)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305E)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, String*, Boolean, Boolean, Boolean)>();
return _method(this, name, mixLeftShoulder, mixRightShoulder, mixSkull);
}
void PlayerAnimator::AddRecoilViewmodelCameraOffset(Single shake_x, Single shake_y, Single shake_z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600305F)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Single, Single, Single)>();
return _method(this, shake_x, shake_y, shake_z);
}
void PlayerAnimator::AddRecoilViewmodelCameraRotation(Single cameraYaw, Single cameraPitch)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003060)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Single, Single)>();
return _method(this, cameraYaw, cameraPitch);
}
void PlayerAnimator::AddBayonetViewmodelCameraOffset(Single fling_x, Single fling_y, Single fling_z)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003061)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Single, Single, Single)>();
return _method(this, fling_x, fling_y, fling_z);
}
void PlayerAnimator::FlinchFromExplosion(UnityEngine::Vector3 worldRotationAxis, Single adjustedMagnitudeDegrees)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003062)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, UnityEngine::Vector3, Single)>();
return _method(this, worldRotationAxis, adjustedMagnitudeDegrees);
}
Single PlayerAnimator::get_bob()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003063)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Single PlayerAnimator::get_tilt()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003064)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Single PlayerAnimator::get_roll()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003065)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
Single PlayerAnimator::get_speed()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003066)->GetCallable<Single(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::onLifeUpdated(Boolean isDead)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003067)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Boolean)>();
return _method(this, isDead);
}
void PlayerAnimator::NotifyClothingIsVisible()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003068)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::add_OnLeanChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003069)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerAnimator::remove_OnLeanChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x0600306A)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerAnimator::tellLean(unknown_type steamID, Byte newLean)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600306B)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type, Byte)>();
return _method(this, steamID, newLean);
}
void PlayerAnimator::ReceiveLean(Byte newLean)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600306C)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Byte)>();
return _method(this, newLean);
}
void PlayerAnimator::tellGesture(unknown_type steamID, Byte id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600306D)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type, Byte)>();
return _method(this, steamID, id);
}
void PlayerAnimator::ReceiveGesture(unknown_type newGesture)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600306E)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, newGesture);
}
void PlayerAnimator::askGesture(unknown_type steamID, Byte id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600306F)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type, Byte)>();
return _method(this, steamID, id);
}
void PlayerAnimator::ReceiveGestureRequest(unknown_type newGesture)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003070)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, newGesture);
}
void PlayerAnimator::sendGesture(unknown_type gesture, Boolean all)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003071)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type, Boolean)>();
return _method(this, gesture, all);
}
void PlayerAnimator::updateState(unknown_type charAnim)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003072)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, charAnim);
}
void PlayerAnimator::updateHuman(unknown_type humanAnim)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003073)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, humanAnim);
}
void PlayerAnimator::onLanded(Single velocity)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003074)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Single)>();
return _method(this, velocity);
}
Boolean PlayerAnimator::isLeanSpaceEmpty(UnityEngine::Vector3 direction)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003075)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*, UnityEngine::Vector3)>();
return _method(this, direction);
}
Boolean PlayerAnimator::ShouldSnapLeanRotationToZero()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003076)->GetCallable<Boolean(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::simulate(UInt32 simulation, Boolean inputLeanLeft, Boolean inputLeanRight)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003077)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, UInt32, Boolean, Boolean)>();
return _method(this, simulation, inputLeanLeft, inputLeanRight);
}
void PlayerAnimator::askEmote(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003078)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, steamID);
}
void PlayerAnimator::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003079)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void PlayerAnimator::SendInitialPlayerState1(List<unknown_type>* transportConnections)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307A)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, List<unknown_type>*)>();
return _method(this, transportConnections);
}
void PlayerAnimator::UpdateLocalPlayerModelVisibility(Boolean isDead, unknown_type perspective, Boolean isCutsceneModeActive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307B)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Boolean, unknown_type, Boolean)>();
return _method(this, isDead, perspective, isCutsceneModeActive);
}
void PlayerAnimator::NotifyLocalPlayerCutsceneModeActiveChanged(Boolean isCutsceneModeActive)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307C)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, Boolean)>();
return _method(this, isCutsceneModeActive);
}
void PlayerAnimator::onPerspectiveUpdated(unknown_type newPerspective)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307D)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, unknown_type)>();
return _method(this, newPerspective);
}
void PlayerAnimator::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307E)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::LateUpdate()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600307F)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003080)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::AddNearDeathViewmodelShake(UnityEngine::Vector3& position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003081)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, UnityEngine::Vector3&)>();
return _method(this, position);
}
void PlayerAnimator::GetAimingViewmodelAlignment(UnityEngine::Vector3& aimingAlignmentOffset, unknown_type aimingInertaMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003082)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*, UnityEngine::Vector3&, unknown_type)>();
return _method(this, aimingAlignmentOffset, aimingInertaMultiplier);
}
void PlayerAnimator::load()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003083)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
void PlayerAnimator::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003084)->GetCallable<void(*)(SDG::Unturned::PlayerAnimator*)>();
return _method(this);
}
};
}
}
