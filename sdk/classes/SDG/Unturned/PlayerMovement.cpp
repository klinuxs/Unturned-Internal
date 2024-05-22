#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerMovement::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerMovement");
return _class;
}
uintptr_t PlayerMovement::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerMovement* PlayerMovement::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerMovement>();
}
Runtime::MonoVTable* PlayerMovement::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerMovement::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerMovement);
// --------------- START CLASS MEMBERS --------------- //
Single PlayerMovement::HEIGHT_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::HEIGHT_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::HEIGHT_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::HEIGHT_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::HEIGHT_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::HEIGHT_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("HEIGHT_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::onLanded()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLanded")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onLanded_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLanded")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onSeated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onSeated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onSeated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onSeated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onVehicleUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVehicleUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onVehicleUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVehicleUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onSafetyUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onSafetyUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onSafetyUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onSafetyUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onRadiationUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onRadiationUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onRadiationUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onRadiationUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onPurchaseUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPurchaseUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onPurchaseUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPurchaseUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onRegionUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onRegionUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onRegionUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onRegionUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::onBoundUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBoundUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::onBoundUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBoundUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::PlayerNavChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("PlayerNavChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::PlayerNavChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("PlayerNavChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single PlayerMovement::SPEED_CLIMB()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CLIMB")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_CLIMB_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CLIMB")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SPEED_SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SPEED_SPRINT()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SPRINT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_SPRINT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_SPRINT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SPEED_STAND()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_STAND")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_STAND_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_STAND")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SPEED_CROUCH()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CROUCH")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_CROUCH_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_CROUCH")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SPEED_PRONE()
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_PRONE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SPEED_PRONE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SPEED_PRONE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::JUMP()
{
static uintptr_t _offset = MonoClass()->GetField("JUMP")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::JUMP_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("JUMP")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerMovement::SWIM()
{
static uintptr_t _offset = MonoClass()->GetField("SWIM")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerMovement::SWIM_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("SWIM")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::controller()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<controller>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::controller_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<controller>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single PlayerMovement::_multiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_multiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::_multiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_multiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::multiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("multiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::multiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("multiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::itemGravityMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemGravityMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::itemGravityMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemGravityMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::pluginGravityMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginGravityMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::pluginGravityMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginGravityMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::pluginSpeedMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginSpeedMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::pluginSpeedMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginSpeedMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::pluginJumpMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginJumpMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::pluginJumpMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pluginJumpMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerMovement::lastFootstep()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFootstep")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::lastFootstep_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFootstep")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::_isGrounded()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isGrounded")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::_isGrounded_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isGrounded")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::_isSafe()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isSafe")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::_isSafe_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isSafe")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::isSafeInfo()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isSafeInfo")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::isSafeInfo_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isSafeInfo")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::_isRadiated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isRadiated")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::_isRadiated_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isRadiated")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::ActiveDeadzone()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<ActiveDeadzone>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::ActiveDeadzone_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<ActiveDeadzone>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::_purchaseNode()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_purchaseNode")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::_purchaseNode_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_purchaseNode")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::effectNode()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<effectNode>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::effectNode_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<effectNode>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::inRain()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inRain")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::inRain_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inRain")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::inSnow()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inSnow")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::inSnow_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inSnow")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UInt32 PlayerMovement::WeatherMask()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<WeatherMask>k__BackingField")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerMovement::WeatherMask_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<WeatherMask>k__BackingField")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
String* PlayerMovement::materialName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialName")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void PlayerMovement::materialName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialName")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::materialIsWater()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialIsWater")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::materialIsWater_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialIsWater")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::ground()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ground")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::ground_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ground")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::height()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("height")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::height_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("height")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::wasSizeAppliedYet()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasSizeAppliedYet")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::wasSizeAppliedYet_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasSizeAppliedYet")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::_isMoving()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMoving")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::_isMoving_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMoving")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::_move()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_move")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::_move_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_move")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_region_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_region_x")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_region_x_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_region_x")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_region_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_region_y")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_region_y_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_region_y")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_bound()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_bound")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_bound_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_bound")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_nav()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_nav")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_nav_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_nav")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::updateRegionOld_X()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionOld_X")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::updateRegionOld_X_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionOld_X")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::updateRegionOld_Y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionOld_Y")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::updateRegionOld_Y_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionOld_Y")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::updateRegionNew_X()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionNew_X")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::updateRegionNew_X_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionNew_X")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::updateRegionNew_Y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionNew_Y")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::updateRegionNew_Y_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionNew_Y")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::updateRegionIndex()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionIndex")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::updateRegionIndex_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updateRegionIndex")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::_loadedRegions()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_loadedRegions")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::_loadedRegions_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_loadedRegions")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerMovement::_loadedBounds()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_loadedBounds")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerMovement::_loadedBounds_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_loadedBounds")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::velocity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("velocity")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::velocity_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("velocity")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::pendingLaunchVelocity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingLaunchVelocity")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::pendingLaunchVelocity_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingLaunchVelocity")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::lastUpdatePos()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastUpdatePos")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::lastUpdatePos_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastUpdatePos")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::snapshot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("snapshot")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::snapshot_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("snapshot")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::nsb()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("nsb")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::nsb_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("nsb")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_horizontal()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_horizontal")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_horizontal_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_horizontal")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::_vertical()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vertical")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::_vertical_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vertical")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Int32 PlayerMovement::warp_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("warp_x")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerMovement::warp_x_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("warp_x")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 PlayerMovement::warp_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("warp_y")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerMovement::warp_y_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("warp_y")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 PlayerMovement::input_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("input_x")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerMovement::input_x_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("input_x")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 PlayerMovement::input_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("input_y")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerMovement::input_y_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("input_y")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::_jump()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_jump")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::_jump_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_jump")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::isAllowed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isAllowed")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::isAllowed_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isAllowed")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::isUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isUpdated")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::isUpdated_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isUpdated")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerMovement::updates()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updates")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerMovement::updates_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("updates")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::canAddSimulationResultsToUpdates()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canAddSimulationResultsToUpdates")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::canAddSimulationResultsToUpdates_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canAddSimulationResultsToUpdates")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::bypassUndergroundWhitelist()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bypassUndergroundWhitelist")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::bypassUndergroundWhitelist_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bypassUndergroundWhitelist")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::hasPendingVehicleChange()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasPendingVehicleChange")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerMovement::hasPendingVehicleChange_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasPendingVehicleChange")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::pendingVehicle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingVehicle")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::pendingVehicle_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingVehicle")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::pendingSeatIndex()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatIndex")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::pendingSeatIndex_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatIndex")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerMovement::pendingSeatTransform()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatTransform")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerMovement::pendingSeatTransform_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatTransform")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::pendingSeatPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::pendingSeatPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::pendingSeatAngle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatAngle")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::pendingSeatAngle_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pendingSeatAngle")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerMovement::lastStatPos()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStatPos")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerMovement::lastStatPos_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStatPos")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
Single PlayerMovement::lastStatTime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStatTime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerMovement::lastStatTime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStatTime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::vehicle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vehicle")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::vehicle_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vehicle")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Byte PlayerMovement::seat()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("seat")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerMovement::seat_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("seat")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
unknown_type PlayerMovement::SendPluginGravityMultiplier()
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginGravityMultiplier")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::SendPluginGravityMultiplier_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginGravityMultiplier")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::SendPluginJumpMultiplier()
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginJumpMultiplier")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::SendPluginJumpMultiplier_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginJumpMultiplier")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::SendPluginSpeedMultiplier()
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginSpeedMultiplier")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::SendPluginSpeedMultiplier_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendPluginSpeedMultiplier")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::lightWadingAudioRef()
{
static uintptr_t _offset = MonoClass()->GetField("lightWadingAudioRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::lightWadingAudioRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("lightWadingAudioRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::mediumWadingAudioRef()
{
static uintptr_t _offset = MonoClass()->GetField("mediumWadingAudioRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::mediumWadingAudioRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("mediumWadingAudioRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::heavyWadingAudioRef()
{
static uintptr_t _offset = MonoClass()->GetField("heavyWadingAudioRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerMovement::heavyWadingAudioRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("heavyWadingAudioRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerMovement::mostRecentControllerColliderHit()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("mostRecentControllerColliderHit")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerMovement::mostRecentControllerColliderHit_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("mostRecentControllerColliderHit")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerMovement::get_forceTrustClient()
{
static auto _method = MonoClass()->GetMethod(0x060033C5)->GetCallable<Boolean(*)()>();
return _method();
}
void PlayerMovement::set_forceTrustClient(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x060033C6)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
void PlayerMovement::add_PlayerNavChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033C7)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
void PlayerMovement::remove_PlayerNavChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033C8)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
void PlayerMovement::TriggerPlayerNavChanged(Byte oldNav, Byte newNav)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033C9)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Byte, Byte)>();
return _method(this, oldNav, newNav);
}
unknown_type PlayerMovement::get_controller()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CA)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_controller(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CB)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
Single PlayerMovement::get_totalGravityMultiplier()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CC)->GetCallable<Single(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Single PlayerMovement::get_totalSpeedMultiplier()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CD)->GetCallable<Single(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
unknown_type PlayerMovement::get_landscapeHoleVolume()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CE)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Boolean PlayerMovement::get_CanEnterTeleporter()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033CF)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::DoTeleport(UnityEngine::Transform* inputTransform, UnityEngine::Transform* outputTransform)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D0)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, inputTransform, outputTransform);
}
void PlayerMovement::EnterCollisionTeleporter(unknown_type teleporter)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D1)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, teleporter);
}
void PlayerMovement::EnterTeleporterVolume(unknown_type entrance, unknown_type exit)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D2)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type, unknown_type)>();
return _method(this, entrance, exit);
}
void PlayerMovement::UpdateCharacterControllerEnabled()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D3)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Boolean PlayerMovement::get_isGrounded()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D4)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Boolean PlayerMovement::get_isSafe()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D5)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_isSafe(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D6)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Boolean)>();
return _method(this, value);
}
Boolean PlayerMovement::get_isRadiated()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D7)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_isRadiated(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D8)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Boolean)>();
return _method(this, value);
}
unknown_type PlayerMovement::get_ActiveDeadzone()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033D9)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_ActiveDeadzone(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DA)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
unknown_type PlayerMovement::get_purchaseNode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DB)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_purchaseNode(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DC)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
unknown_type PlayerMovement::get_effectNode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DD)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_effectNode(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DE)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, value);
}
UInt32 PlayerMovement::get_WeatherMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033DF)->GetCallable<UInt32(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::set_WeatherMask(UInt32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E0)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UInt32)>();
return _method(this, value);
}
void PlayerMovement::setSize(unknown_type newHeight)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E1)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, newHeight);
}
void PlayerMovement::applySize()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E2)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Boolean PlayerMovement::get_isMoving()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E3)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Single PlayerMovement::get_speed()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E4)->GetCallable<Single(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
UnityEngine::Vector3 PlayerMovement::get_move()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E5)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_region_x()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E6)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_region_y()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E7)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_bound()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E8)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_nav()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033E9)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
unknown_type PlayerMovement::get_loadedRegions()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033EA)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Array<unknown_type>* PlayerMovement::get_loadedBounds()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033EB)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Single PlayerMovement::get_fall()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033EC)->GetCallable<Single(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
UnityEngine::Vector3 PlayerMovement::get_real()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033ED)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_horizontal()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033EE)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::get_vertical()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033EF)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Boolean PlayerMovement::get_jump()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F0)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
unknown_type PlayerMovement::getVehicle()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F1)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
unknown_type PlayerMovement::getVehicleSeat()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F2)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
Byte PlayerMovement::getSeat()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F3)->GetCallable<Byte(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::updateVehicle()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F4)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::setVehicle(unknown_type newVehicle, Byte newSeat, UnityEngine::Transform* newSeatingTransform, UnityEngine::Vector3 newSeatingPosition, Byte newSeatingAngle, Boolean forceUpdate)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F5)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type, Byte, UnityEngine::Transform*, UnityEngine::Vector3, Byte, Boolean)>();
return _method(this, newVehicle, newSeat, newSeatingTransform, newSeatingPosition, newSeatingAngle, forceUpdate);
}
void PlayerMovement::tellPluginGravityMultiplier(unknown_type steamID, Single newPluginGravityMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F6)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type, Single)>();
return _method(this, steamID, newPluginGravityMultiplier);
}
void PlayerMovement::ReceivePluginGravityMultiplier(Single newPluginGravityMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F7)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginGravityMultiplier);
}
void PlayerMovement::sendPluginGravityMultiplier(Single newPluginGravityMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F8)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginGravityMultiplier);
}
void PlayerMovement::tellPluginJumpMultiplier(unknown_type steamID, Single newPluginJumpMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033F9)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type, Single)>();
return _method(this, steamID, newPluginJumpMultiplier);
}
void PlayerMovement::ReceivePluginJumpMultiplier(Single newPluginJumpMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FA)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginJumpMultiplier);
}
void PlayerMovement::sendPluginJumpMultiplier(Single newPluginJumpMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FB)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginJumpMultiplier);
}
void PlayerMovement::tellPluginSpeedMultiplier(unknown_type steamID, Single newPluginSpeedMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FC)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type, Single)>();
return _method(this, steamID, newPluginSpeedMultiplier);
}
void PlayerMovement::ReceivePluginSpeedMultiplier(Single newPluginSpeedMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FD)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginSpeedMultiplier);
}
void PlayerMovement::sendPluginSpeedMultiplier(Single newPluginSpeedMultiplier)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FE)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Single)>();
return _method(this, newPluginSpeedMultiplier);
}
void PlayerMovement::tellState(UnityEngine::Vector3 newPosition, Byte newPitch, Byte newYaw)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060033FF)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UnityEngine::Vector3, Byte, Byte)>();
return _method(this, newPosition, newPitch, newYaw);
}
void PlayerMovement::updateMovement()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003400)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::checkGround(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003401)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UnityEngine::Vector3)>();
return _method(this, position);
}
Boolean PlayerMovement::PlayLandAudioClip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003402)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::PlayFootstepAudioClip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003403)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::PlaySwimAudioClip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003404)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::onVisionUpdated(Boolean isViewing)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003405)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, Boolean)>();
return _method(this, isViewing);
}
Boolean PlayerMovement::forceRemoveFromVehicle()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003406)->GetCallable<Boolean(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::simulate()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003407)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::simulate1(UInt32 simulation, Int32 recov, Boolean inputBrake, Boolean inputStamina, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation, Single speed, Single physicsSpeed, Int32 turn, Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003408)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UInt32, Int32, Boolean, Boolean, UnityEngine::Vector3, UnityEngine::Quaternion, Single, Single, Int32, Single)>();
return _method(this, simulation, recov, inputBrake, inputStamina, point, rotation, speed, physicsSpeed, turn, delta);
}
void PlayerMovement::simulate2(UInt32 simulation, Int32 recov, Int32 input_x, Int32 input_y, Single look_x, Single look_y, Boolean inputJump, Boolean inputSprint, Single deltaTime)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003409)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, UInt32, Int32, Int32, Int32, Single, Single, Boolean, Boolean, Single)>();
return _method(this, simulation, recov, input_x, input_y, look_x, look_y, inputJump, inputSprint, deltaTime);
}
void PlayerMovement::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340A)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::updateRegionAndBound()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340B)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340C)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::OnControllerColliderHit(unknown_type hit)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340D)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*, unknown_type)>();
return _method(this, hit);
}
void PlayerMovement::OnDrawGizmos()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340E)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
void PlayerMovement::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600340F)->GetCallable<void(*)(SDG::Unturned::PlayerMovement*)>();
return _method(this);
}
};
}
}
