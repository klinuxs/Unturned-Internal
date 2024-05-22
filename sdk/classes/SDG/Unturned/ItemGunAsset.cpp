#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* ItemGunAsset::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "ItemGunAsset");
return _class;
}
uintptr_t ItemGunAsset::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::ItemGunAsset* ItemGunAsset::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::ItemGunAsset>();
}
Runtime::MonoVTable* ItemGunAsset::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool ItemGunAsset::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(ItemGunAsset);
// --------------- START CLASS MEMBERS --------------- //
unknown_type ItemGunAsset::_shoot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoot")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_shoot_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shoot")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::_reload()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_reload")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_reload_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_reload")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::_hammer()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hammer")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_hammer_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hammer")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::_aim()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_aim")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_aim_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_aim")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::_minigun()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_minigun")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_minigun_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_minigun")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::_chamberJammedSound()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_chamberJammedSound")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::_chamberJammedSound_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_chamberJammedSound")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::fireDelaySound()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<fireDelaySound>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::fireDelaySound_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<fireDelaySound>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::gunshotRolloffDistance()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<gunshotRolloffDistance>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::gunshotRolloffDistance_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<gunshotRolloffDistance>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UnityEngine::GameObject* ItemGunAsset::_projectile()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_projectile")->GetOffset();
return Memory::read<UnityEngine::GameObject*>(THIS_PTR + _offset);
}
void ItemGunAsset::_projectile_Set(UnityEngine::GameObject* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_projectile")->GetOffset();
Memory::write<UnityEngine::GameObject*>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::alertRadius()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("alertRadius")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::alertRadius_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("alertRadius")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::rangeRangefinder()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<rangeRangefinder>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::rangeRangefinder_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<rangeRangefinder>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::instakillHeadshots()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<instakillHeadshots>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::instakillHeadshots_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<instakillHeadshots>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::infiniteAmmo()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<infiniteAmmo>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::infiniteAmmo_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<infiniteAmmo>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte ItemGunAsset::ammoPerShot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<ammoPerShot>k__BackingField")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemGunAsset::ammoPerShot_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<ammoPerShot>k__BackingField")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Int32 ItemGunAsset::fireDelay()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<fireDelay>k__BackingField")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void ItemGunAsset::fireDelay_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<fireDelay>k__BackingField")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::allowMagazineChange()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<allowMagazineChange>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::allowMagazineChange_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<allowMagazineChange>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::canAimDuringSprint()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canAimDuringSprint>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::canAimDuringSprint_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canAimDuringSprint>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::aimInDuration()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<aimInDuration>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::aimInDuration_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<aimInDuration>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::shouldScaleAimAnimations()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldScaleAimAnimations>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::shouldScaleAimAnimations_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldScaleAimAnimations>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte ItemGunAsset::ammoMin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ammoMin")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemGunAsset::ammoMin_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ammoMin")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemGunAsset::ammoMax()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ammoMax")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemGunAsset::ammoMax_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ammoMax")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::_sightID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_sightID")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::_sightID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_sightID")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Array<Byte>* ItemGunAsset::sightState()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("sightState")->GetOffset();
return Memory::read<Array<Byte>*>(THIS_PTR + _offset);
}
void ItemGunAsset::sightState_Set(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("sightState")->GetOffset();
Memory::write<Array<Byte>*>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::_tacticalID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_tacticalID")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::_tacticalID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_tacticalID")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Array<Byte>* ItemGunAsset::tacticalState()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tacticalState")->GetOffset();
return Memory::read<Array<Byte>*>(THIS_PTR + _offset);
}
void ItemGunAsset::tacticalState_Set(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tacticalState")->GetOffset();
Memory::write<Array<Byte>*>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::_gripID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_gripID")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::_gripID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_gripID")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Array<Byte>* ItemGunAsset::gripState()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("gripState")->GetOffset();
return Memory::read<Array<Byte>*>(THIS_PTR + _offset);
}
void ItemGunAsset::gripState_Set(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("gripState")->GetOffset();
Memory::write<Array<Byte>*>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::_barrelID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_barrelID")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::_barrelID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_barrelID")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Array<Byte>* ItemGunAsset::barrelState()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("barrelState")->GetOffset();
return Memory::read<Array<Byte>*>(THIS_PTR + _offset);
}
void ItemGunAsset::barrelState_Set(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("barrelState")->GetOffset();
Memory::write<Array<Byte>*>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::magazineID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("magazineID")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::magazineID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("magazineID")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Array<unknown_type>* ItemGunAsset::magazineReplacements()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("magazineReplacements")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void ItemGunAsset::magazineReplacements_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("magazineReplacements")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::unplace()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("unplace")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::unplace_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("unplace")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::replace()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("replace")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::replace_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("replace")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasSight()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSight")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasSight_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSight")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasTactical()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasTactical")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasTactical_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasTactical")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasGrip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasGrip")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasGrip_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasGrip")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasBarrel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBarrel")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasBarrel_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBarrel")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Array<UInt16>* ItemGunAsset::attachmentCalibers()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<attachmentCalibers>k__BackingField")->GetOffset();
return Memory::read<Array<UInt16>*>(THIS_PTR + _offset);
}
void ItemGunAsset::attachmentCalibers_Set(Array<UInt16>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<attachmentCalibers>k__BackingField")->GetOffset();
Memory::write<Array<UInt16>*>(value, THIS_PTR + _offset);
}
Array<UInt16>* ItemGunAsset::magazineCalibers()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<magazineCalibers>k__BackingField")->GetOffset();
return Memory::read<Array<UInt16>*>(THIS_PTR + _offset);
}
void ItemGunAsset::magazineCalibers_Set(Array<UInt16>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<magazineCalibers>k__BackingField")->GetOffset();
Memory::write<Array<UInt16>*>(value, THIS_PTR + _offset);
}
Byte ItemGunAsset::firerate()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firerate")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemGunAsset::firerate_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firerate")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::action()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("action")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::action_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("action")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::shouldDeleteEmptyMagazines()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldDeleteEmptyMagazines")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::shouldDeleteEmptyMagazines_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldDeleteEmptyMagazines")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::requiresNonZeroAttachmentCaliber()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("requiresNonZeroAttachmentCaliber")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::requiresNonZeroAttachmentCaliber_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("requiresNonZeroAttachmentCaliber")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasSafety()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSafety")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasSafety_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSafety")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasSemi()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSemi")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasSemi_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasSemi")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasAuto()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasAuto")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasAuto_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasAuto")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::hasBurst()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBurst")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::hasBurst_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBurst")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::isTurret()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTurret")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::isTurret_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTurret")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Int32 ItemGunAsset::bursts()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bursts")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void ItemGunAsset::bursts_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("bursts")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::firemode()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firemode")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::firemode_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firemode")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadAim()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadAim")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadAim_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadAim")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadHip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadHip")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadHip_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadHip")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::baseSpreadAngleRadians()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<baseSpreadAngleRadians>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::baseSpreadAngleRadians_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<baseSpreadAngleRadians>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadSprint()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadSprint")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadSprint_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadSprint")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadCrouch()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadCrouch")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadCrouch_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadCrouch")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadProne()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadProne")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadProne_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadProne")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::spreadSwimming()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadSwimming")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::spreadSwimming_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spreadSwimming")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilMin_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMin_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilMin_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMin_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilMin_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMin_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilMin_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMin_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilMax_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMax_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilMax_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMax_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilMax_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMax_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilMax_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilMax_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::aimingRecoilMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("aimingRecoilMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::aimingRecoilMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("aimingRecoilMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilSprint()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilSprint")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilSprint_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilSprint")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilCrouch()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilCrouch")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilCrouch_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilCrouch")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilProne()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilProne")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilProne_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilProne")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recoilSwimming()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilSwimming")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recoilSwimming_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recoilSwimming")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recover_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recover_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recover_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recover_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::recover_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recover_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::recover_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recover_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMin_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMin_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMin_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMin_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMin_z()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_z")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMin_z_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMin_z")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMax_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_x")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMax_x_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_x")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMax_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_y")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMax_y_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_y")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::shakeMax_z()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_z")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::shakeMax_z_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shakeMax_z")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Byte ItemGunAsset::ballisticSteps()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticSteps")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemGunAsset::ballisticSteps_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticSteps")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::ballisticTravel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticTravel")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::ballisticTravel_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticTravel")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::muzzleVelocity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<muzzleVelocity>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::muzzleVelocity_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<muzzleVelocity>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::bulletGravityMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<bulletGravityMultiplier>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::bulletGravityMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<bulletGravityMultiplier>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::ballisticForce()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticForce")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::ballisticForce_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ballisticForce")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::damageFalloffRange()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffRange")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::damageFalloffRange_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffRange")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::damageFalloffMaxRange()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffMaxRange")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::damageFalloffMaxRange_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffMaxRange")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::damageFalloffMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::damageFalloffMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("damageFalloffMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::projectileLifespan()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileLifespan")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::projectileLifespan_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileLifespan")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::projectilePenetrateBuildables()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectilePenetrateBuildables")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::projectilePenetrateBuildables_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectilePenetrateBuildables")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::projectileExplosionLaunchSpeed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileExplosionLaunchSpeed")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::projectileExplosionLaunchSpeed_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileExplosionLaunchSpeed")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::reloadTime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("reloadTime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::reloadTime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("reloadTime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::hammerTime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hammerTime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::hammerTime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hammerTime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::muzzleGuid()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("muzzleGuid")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::muzzleGuid_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("muzzleGuid")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::muzzle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("muzzle")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::muzzle_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("muzzle")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::shellGuid()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shellGuid")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::shellGuid_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shellGuid")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::shell()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shell")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::shell_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shell")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::projectileExplosionEffectGuid()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileExplosionEffectGuid")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::projectileExplosionEffectGuid_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("projectileExplosionEffectGuid")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt16 ItemGunAsset::explosion()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("explosion")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemGunAsset::explosion_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("explosion")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Boolean ItemGunAsset::canEverJam()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canEverJam>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemGunAsset::canEverJam_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canEverJam>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::jamQualityThreshold()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<jamQualityThreshold>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::jamQualityThreshold_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<jamQualityThreshold>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::jamMaxChance()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<jamMaxChance>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::jamMaxChance_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<jamMaxChance>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
String* ItemGunAsset::unjamChamberAnimName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<unjamChamberAnimName>k__BackingField")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemGunAsset::unjamChamberAnimName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<unjamChamberAnimName>k__BackingField")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
Single ItemGunAsset::aimingMovementSpeedMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("aimingMovementSpeedMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemGunAsset::aimingMovementSpeedMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("aimingMovementSpeedMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::shootQuestRewards()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shootQuestRewards")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemGunAsset::shootQuestRewards_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shootQuestRewards")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemGunAsset::get_shoot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060015FF)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_reload()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001600)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_hammer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001601)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_aim()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001602)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_minigun()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001603)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_chamberJammedSound()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001604)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::get_fireDelaySound()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001605)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_fireDelaySound(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001606)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, unknown_type)>();
return _method(this, value);
}
Single ItemGunAsset::get_gunshotRolloffDistance()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001607)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_gunshotRolloffDistance(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001608)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
UnityEngine::GameObject* ItemGunAsset::get_projectile()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001609)->GetCallable<UnityEngine::GameObject*(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
Boolean ItemGunAsset::get_shouldFriendlySentryTargetUser()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160A)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
Single ItemGunAsset::get_rangeRangefinder()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160B)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_rangeRangefinder(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160C)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
Boolean ItemGunAsset::get_instakillHeadshots()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160D)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_instakillHeadshots(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160E)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemGunAsset::get_infiniteAmmo()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600160F)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_infiniteAmmo(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001610)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
Byte ItemGunAsset::get_ammoPerShot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001611)->GetCallable<Byte(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_ammoPerShot(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001612)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Byte)>();
return _method(this, value);
}
Int32 ItemGunAsset::get_fireDelay()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001613)->GetCallable<Int32(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_fireDelay(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001614)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Int32)>();
return _method(this, value);
}
Boolean ItemGunAsset::get_allowMagazineChange()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001615)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_allowMagazineChange(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001616)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemGunAsset::get_canAimDuringSprint()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001617)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_canAimDuringSprint(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001618)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
Single ItemGunAsset::get_aimInDuration()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001619)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_aimInDuration(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161A)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
Boolean ItemGunAsset::get_shouldScaleAimAnimations()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161B)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_shouldScaleAimAnimations(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161C)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
void ItemGunAsset::BuildDescription(unknown_type builder, unknown_type itemInstance)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161D)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, unknown_type, unknown_type)>();
return _method(this, builder, itemInstance);
}
Array<Byte>* ItemGunAsset::getState(unknown_type origin)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161E)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemGunAsset*, unknown_type)>();
return _method(this, origin);
}
Array<Byte>* ItemGunAsset::getState1(UInt16 sight, UInt16 tactical, UInt16 grip, UInt16 barrel, UInt16 magazine, Byte ammo)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600161F)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemGunAsset*, UInt16, UInt16, UInt16, UInt16, UInt16, Byte)>();
return _method(this, sight, tactical, grip, barrel, magazine, ammo);
}
UInt16 ItemGunAsset::get_sightID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001620)->GetCallable<UInt16(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_sightID(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001621)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, UInt16)>();
return _method(this, value);
}
UInt16 ItemGunAsset::get_tacticalID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001622)->GetCallable<UInt16(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_tacticalID(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001623)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, UInt16)>();
return _method(this, value);
}
UInt16 ItemGunAsset::get_gripID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001624)->GetCallable<UInt16(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_gripID(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001625)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, UInt16)>();
return _method(this, value);
}
UInt16 ItemGunAsset::get_barrelID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001626)->GetCallable<UInt16(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_barrelID(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001627)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, UInt16)>();
return _method(this, value);
}
UInt16 ItemGunAsset::getMagazineID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001628)->GetCallable<UInt16(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
Array<Byte>* ItemGunAsset::getMagazineState(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001629)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemGunAsset*, UInt16)>();
return _method(this, id);
}
Array<UInt16>* ItemGunAsset::get_attachmentCalibers()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162A)->GetCallable<Array<UInt16>*(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_attachmentCalibers(Array<UInt16>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162B)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Array<UInt16>*)>();
return _method(this, value);
}
Array<UInt16>* ItemGunAsset::get_magazineCalibers()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162C)->GetCallable<Array<UInt16>*(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_magazineCalibers(Array<UInt16>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162D)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Array<UInt16>*)>();
return _method(this, value);
}
Single ItemGunAsset::get_baseSpreadAngleRadians()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162E)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_baseSpreadAngleRadians(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600162F)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
Single ItemGunAsset::get_muzzleVelocity()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001630)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_muzzleVelocity(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001631)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
Single ItemGunAsset::get_bulletGravityMultiplier()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001632)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_bulletGravityMultiplier(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001633)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
unknown_type ItemGunAsset::FindMuzzleEffectAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001634)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
unknown_type ItemGunAsset::FindShellEffectAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001635)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
Boolean ItemGunAsset::get_showQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001636)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
Boolean ItemGunAsset::get_canEverJam()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001637)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_canEverJam(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001638)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Boolean)>();
return _method(this, value);
}
Single ItemGunAsset::get_jamQualityThreshold()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001639)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_jamQualityThreshold(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163A)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
Single ItemGunAsset::get_jamMaxChance()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163B)->GetCallable<Single(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_jamMaxChance(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163C)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, Single)>();
return _method(this, value);
}
String* ItemGunAsset::get_unjamChamberAnimName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163D)->GetCallable<String*(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::set_unjamChamberAnimName(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163E)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, String*)>();
return _method(this, value);
}
void ItemGunAsset::GrantShootQuestRewards(SDG::Unturned::Player* player)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600163F)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, SDG::Unturned::Player*)>();
return _method(this, player);
}
Boolean ItemGunAsset::get_doesItemTypeHaveSkins()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001640)->GetCallable<Boolean(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
void ItemGunAsset::PopulateAsset(unknown_type bundle, unknown_type data, unknown_type localization)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001642)->GetCallable<void(*)(SDG::Unturned::ItemGunAsset*, unknown_type, unknown_type, unknown_type)>();
return _method(this, bundle, data, localization);
}
unknown_type ItemGunAsset::GetDefaultInventoryAudio()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001643)->GetCallable<unknown_type(*)(SDG::Unturned::ItemGunAsset*)>();
return _method(this);
}
};
}
}
