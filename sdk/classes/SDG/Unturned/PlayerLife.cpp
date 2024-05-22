#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerLife::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerLife");
return _class;
}
uintptr_t PlayerLife::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerLife* PlayerLife::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerLife>();
}
Runtime::MonoVTable* PlayerLife::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerLife::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerLife);
// --------------- START CLASS MEMBERS --------------- //
Byte PlayerLife::SAVEDATA_VERSION_LATEST()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_LATEST")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerLife::SAVEDATA_VERSION_LATEST_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_LATEST")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerLife::SAVEDATA_VERSION_WITH_OXYGEN()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_WITH_OXYGEN")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerLife::SAVEDATA_VERSION_WITH_OXYGEN_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_WITH_OXYGEN")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerLife::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerLife::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Single PlayerLife::COMBAT_COOLDOWN()
{
static uintptr_t _offset = MonoClass()->GetField("COMBAT_COOLDOWN")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerLife::COMBAT_COOLDOWN_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("COMBAT_COOLDOWN")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
SDG::Unturned::PlayerLifeUpdated* PlayerLife::onPlayerLifeUpdated()
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerLifeUpdated")->GetOffset();
return Memory::read<SDG::Unturned::PlayerLifeUpdated*>(StaticInstance() + _offset);
}
void PlayerLife::onPlayerLifeUpdated_Set(SDG::Unturned::PlayerLifeUpdated* value)
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerLifeUpdated")->GetOffset();
Memory::write<SDG::Unturned::PlayerLifeUpdated*>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnPreDeath()
{
static uintptr_t _offset = MonoClass()->GetField("OnPreDeath")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnPreDeath_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnPreDeath")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::onPlayerDied()
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerDied")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::onPlayerDied_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerDied")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellHealth_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellHealth_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellHealth_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellHealth_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellFood_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellFood_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellFood_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellFood_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellWater_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellWater_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellWater_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellWater_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellVirus_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellVirus_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellVirus_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellVirus_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellBleeding_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellBleeding_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellBleeding_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellBleeding_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnTellBroken_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnTellBroken_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnTellBroken_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnTellBroken_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::RocketLegacyOnDeath()
{
static uintptr_t _offset = MonoClass()->GetField("RocketLegacyOnDeath")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::RocketLegacyOnDeath_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("RocketLegacyOnDeath")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnRevived_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnRevived_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnRevived_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnRevived_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnSelectingRespawnPoint()
{
static uintptr_t _offset = MonoClass()->GetField("OnSelectingRespawnPoint")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::OnSelectingRespawnPoint_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnSelectingRespawnPoint")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::onLifeUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLifeUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onLifeUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLifeUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onHealthUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHealthUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onHealthUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHealthUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onFoodUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFoodUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onFoodUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFoodUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onWaterUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onWaterUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onWaterUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onWaterUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onVirusUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVirusUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onVirusUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVirusUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onStaminaUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onStaminaUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onStaminaUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onStaminaUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onVisionUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVisionUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onVisionUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onVisionUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onOxygenUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onOxygenUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onOxygenUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onOxygenUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onBleedingUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBleedingUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onBleedingUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBleedingUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onBrokenUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBrokenUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onBrokenUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onBrokenUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onTemperatureUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onTemperatureUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onTemperatureUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onTemperatureUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onDamaged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDamaged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onDamaged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDamaged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::onHurt()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHurt")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::onHurt_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHurt")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::wasPvPDeath()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<wasPvPDeath>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::wasPvPDeath_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<wasPvPDeath>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::_deathCause()
{
static uintptr_t _offset = MonoClass()->GetField("_deathCause")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::_deathCause_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_deathCause")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
SDG::Unturned::ELimb PlayerLife::_deathLimb()
{
static uintptr_t _offset = MonoClass()->GetField("_deathLimb")->GetOffset();
return Memory::read<SDG::Unturned::ELimb>(StaticInstance() + _offset);
}
void PlayerLife::_deathLimb_Set(SDG::Unturned::ELimb value)
{
static uintptr_t _offset = MonoClass()->GetField("_deathLimb")->GetOffset();
Memory::write<SDG::Unturned::ELimb>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::_deathKiller()
{
static uintptr_t _offset = MonoClass()->GetField("_deathKiller")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::_deathKiller_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_deathKiller")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::recentKiller()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recentKiller")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::recentKiller_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("recentKiller")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single PlayerLife::lastTimeAggressive()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeAggressive")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::lastTimeAggressive_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeAggressive")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLife::lastTimeTookDamage()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeTookDamage")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::lastTimeTookDamage_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeTookDamage")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLife::lastTimeCausedDamage()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeCausedDamage")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::lastTimeCausedDamage_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTimeCausedDamage")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::_isDead()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isDead")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::_isDead_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isDead")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte PlayerLife::lastHealth()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastHealth")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::lastHealth_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastHealth")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_health()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_health")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_health_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_health")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_food()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_food")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_food_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_food")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_water()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_water")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_water_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_water")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_virus()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_virus")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_virus_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_virus")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_vision()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vision")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_vision_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vision")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::_warmth()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_warmth")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::_warmth_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_warmth")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_stamina()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_stamina")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_stamina_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_stamina")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerLife::_oxygen()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_oxygen")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerLife::_oxygen_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_oxygen")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::_isBleeding()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isBleeding")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::_isBleeding_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isBleeding")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::_isBroken()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isBroken")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::_isBroken_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isBroken")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::_temperature()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_temperature")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::_temperature_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_temperature")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastStarve()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStarve")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastStarve_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastStarve")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastDehydrate()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastDehydrate")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastDehydrate_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastDehydrate")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastUncleaned()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastUncleaned")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastUncleaned_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastUncleaned")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastView()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastView")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastView_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastView")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastTire()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTire")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastTire_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastTire")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastSuffocate()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastSuffocate")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastSuffocate_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastSuffocate")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastRest()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRest")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastRest_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRest")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastBreath()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBreath")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastBreath_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBreath")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastInfect()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastInfect")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastInfect_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastInfect")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastBleed()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBleed")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastBleed_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBleed")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastBleeding()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBleeding")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastBleeding_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBleeding")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastBroken()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBroken")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastBroken_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBroken")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastFreeze()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFreeze")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastFreeze_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastFreeze")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastWarm()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastWarm")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastWarm_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastWarm")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastBurn()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBurn")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastBurn_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastBurn")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastCovered()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastCovered")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastCovered_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastCovered")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastRegenerate()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRegenerate")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastRegenerate_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRegenerate")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerLife::lastRadiate()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRadiate")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerLife::lastRadiate_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastRadiate")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::wasWarm()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasWarm")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::wasWarm_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasWarm")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::wasCovered()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasCovered")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::wasCovered_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasCovered")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single PlayerLife::_lastRespawn()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lastRespawn")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::_lastRespawn_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lastRespawn")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLife::_lastDeath()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lastDeath")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::_lastDeath_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_lastDeath")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLife::lastSuicide()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastSuicide")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::lastSuicide_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastSuicide")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single PlayerLife::lastAlive()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastAlive")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerLife::lastAlive_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastAlive")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerLife::ragdoll()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ragdoll")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerLife::ragdoll_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ragdoll")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::ragdollEffect()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ragdollEffect")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::ragdollEffect_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ragdollEffect")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::spawnpoint()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spawnpoint")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::spawnpoint_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spawnpoint")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::SendDeath()
{
static uintptr_t _offset = MonoClass()->GetField("SendDeath")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendDeath_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDeath")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendDead()
{
static uintptr_t _offset = MonoClass()->GetField("SendDead")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendDead_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDead")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendRevive()
{
static uintptr_t _offset = MonoClass()->GetField("SendRevive")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendRevive_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRevive")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendLifeStats()
{
static uintptr_t _offset = MonoClass()->GetField("SendLifeStats")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendLifeStats_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendLifeStats")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendHealth()
{
static uintptr_t _offset = MonoClass()->GetField("SendHealth")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendHealth_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendHealth")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendDamagedEvent()
{
static uintptr_t _offset = MonoClass()->GetField("SendDamagedEvent")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendDamagedEvent_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDamagedEvent")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendFood()
{
static uintptr_t _offset = MonoClass()->GetField("SendFood")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendFood_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendFood")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendWater()
{
static uintptr_t _offset = MonoClass()->GetField("SendWater")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendWater_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendWater")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendVirus()
{
static uintptr_t _offset = MonoClass()->GetField("SendVirus")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendVirus_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendVirus")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendBleeding()
{
static uintptr_t _offset = MonoClass()->GetField("SendBleeding")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendBleeding_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendBleeding")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendBroken()
{
static uintptr_t _offset = MonoClass()->GetField("SendBroken")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendBroken_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendBroken")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendModifyStamina()
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyStamina")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendModifyStamina_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyStamina")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendModifyHallucination()
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyHallucination")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendModifyHallucination_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyHallucination")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendModifyWarmth()
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyWarmth")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendModifyWarmth_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendModifyWarmth")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendRespawnRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendRespawnRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendRespawnRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRespawnRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::SendSuicideRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendSuicideRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::SendSuicideRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSuicideRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean PlayerLife::isAsphyxiating()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isAsphyxiating")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::isAsphyxiating_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isAsphyxiating")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::OnIsAsphyxiatingChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnIsAsphyxiatingChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::OnIsAsphyxiatingChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnIsAsphyxiatingChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerLife::BonesRef()
{
static uintptr_t _offset = MonoClass()->GetField("BonesRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerLife::BonesRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("BonesRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerLife::OnFallDamageRequested()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnFallDamageRequested")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerLife::OnFallDamageRequested_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnFallDamageRequested")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerLife::wasLoadCalled()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerLife::wasLoadCalled_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
void PlayerLife::add_OnPreDeath(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F0)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::remove_OnPreDeath(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F1)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::add_onPlayerDied(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F2)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::remove_onPlayerDied(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F3)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::broadcastPlayerDied(SDG::Unturned::PlayerLife* sender, unknown_type cause, SDG::Unturned::ELimb limb, unknown_type instigator)
{
static auto _method = MonoClass()->GetMethod(0x060032F4)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, SDG::Unturned::ELimb, unknown_type)>();
return _method(sender, cause, limb, instigator);
}
void PlayerLife::add_OnSelectingRespawnPoint(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F5)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::remove_OnSelectingRespawnPoint(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060032F6)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerLife::add_onHurt(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032F7)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
void PlayerLife::remove_onHurt(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032F8)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
Boolean PlayerLife::get_wasPvPDeath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032F9)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::set_wasPvPDeath(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032FA)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, value);
}
unknown_type PlayerLife::get_deathCause()
{
static auto _method = MonoClass()->GetMethod(0x060032FB)->GetCallable<unknown_type(*)()>();
return _method();
}
SDG::Unturned::ELimb PlayerLife::get_deathLimb()
{
static auto _method = MonoClass()->GetMethod(0x060032FC)->GetCallable<SDG::Unturned::ELimb(*)()>();
return _method();
}
unknown_type PlayerLife::get_deathKiller()
{
static auto _method = MonoClass()->GetMethod(0x060032FD)->GetCallable<unknown_type(*)()>();
return _method();
}
Boolean PlayerLife::get_isAggressor()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032FE)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::markAggressive(Boolean force, Boolean spreadToGroup)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032FF)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean, Boolean)>();
return _method(this, force, spreadToGroup);
}
Boolean PlayerLife::get_isDead()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003300)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Boolean PlayerLife::get_IsAlive()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003301)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_health()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003302)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_food()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003303)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_water()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003304)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_virus()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003305)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_vision()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003306)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
UInt32 PlayerLife::get_warmth()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003307)->GetCallable<UInt32(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_stamina()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003308)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Byte PlayerLife::get_oxygen()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003309)->GetCallable<Byte(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Boolean PlayerLife::get_isBleeding()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330A)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Boolean PlayerLife::get_isBroken()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330B)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
unknown_type PlayerLife::get_temperature()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330C)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Single PlayerLife::get_lastRespawn()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330D)->GetCallable<Single(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
Single PlayerLife::get_lastDeath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330E)->GetCallable<Single(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::tellDeath(unknown_type steamID, Byte newCause, Byte newLimb, unknown_type newKiller)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600330F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte, Byte, unknown_type)>();
return _method(this, steamID, newCause, newLimb, newKiller);
}
void PlayerLife::ReceiveDeath(unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003310)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, SDG::Unturned::ELimb, unknown_type)>();
return _method(this, newCause, newLimb, newKiller);
}
void PlayerLife::tellDead(unknown_type steamID, UnityEngine::Vector3 newRagdoll, Byte newRagdollEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003311)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, UnityEngine::Vector3, Byte)>();
return _method(this, steamID, newRagdoll, newRagdollEffect);
}
void PlayerLife::ReceiveDead(UnityEngine::Vector3 newRagdoll, unknown_type newRagdollEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003312)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, UnityEngine::Vector3, unknown_type)>();
return _method(this, newRagdoll, newRagdollEffect);
}
void PlayerLife::tellRevive(unknown_type steamID, UnityEngine::Vector3 position, Byte angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003313)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, UnityEngine::Vector3, Byte)>();
return _method(this, steamID, position, angle);
}
void PlayerLife::ReceiveRevive(UnityEngine::Vector3 position, Byte angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003314)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, UnityEngine::Vector3, Byte)>();
return _method(this, position, angle);
}
void PlayerLife::tellLife(unknown_type steamID, Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Boolean newBleeding, Boolean newBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003315)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte, Byte, Byte, Byte, Boolean, Boolean)>();
return _method(this, steamID, newHealth, newFood, newWater, newVirus, newBleeding, newBroken);
}
void PlayerLife::tellLifeWithOxygen(unknown_type steamID, Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Byte newOxygen, Boolean newBleeding, Boolean newBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003316)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte, Byte, Byte, Byte, Byte, Boolean, Boolean)>();
return _method(this, steamID, newHealth, newFood, newWater, newVirus, newOxygen, newBleeding, newBroken);
}
void PlayerLife::ReceiveLifeStats(Byte newHealth, Byte newFood, Byte newWater, Byte newVirus, Byte newOxygen, Boolean newBleeding, Boolean newBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003317)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, Byte, Byte, Byte, Byte, Boolean, Boolean)>();
return _method(this, newHealth, newFood, newWater, newVirus, newOxygen, newBleeding, newBroken);
}
void PlayerLife::askLife(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003318)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, steamID);
}
void PlayerLife::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003319)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void PlayerLife::SendInitialPlayerState1(List<unknown_type>* transportConnections)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331A)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, List<unknown_type>*)>();
return _method(this, transportConnections);
}
void PlayerLife::tellHealth(unknown_type steamID, Byte newHealth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331B)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte)>();
return _method(this, steamID, newHealth);
}
void PlayerLife::ReceiveHealth(Byte newHealth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331C)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, newHealth);
}
void PlayerLife::ReceiveDamagedEvent(Byte damageAmount, UnityEngine::Vector3 damageDirection)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331D)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3)>();
return _method(this, damageAmount, damageDirection);
}
void PlayerLife::tellFood(unknown_type steamID, Byte newFood)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331E)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte)>();
return _method(this, steamID, newFood);
}
void PlayerLife::ReceiveFood(Byte newFood)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600331F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, newFood);
}
void PlayerLife::tellWater(unknown_type steamID, Byte newWater)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003320)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte)>();
return _method(this, steamID, newWater);
}
void PlayerLife::ReceiveWater(Byte newWater)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003321)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, newWater);
}
void PlayerLife::tellVirus(unknown_type steamID, Byte newVirus)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003322)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte)>();
return _method(this, steamID, newVirus);
}
void PlayerLife::ReceiveVirus(Byte newVirus)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003323)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, newVirus);
}
void PlayerLife::tellBleeding(unknown_type steamID, Boolean newBleeding)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003324)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Boolean)>();
return _method(this, steamID, newBleeding);
}
void PlayerLife::ReceiveBleeding(Boolean newBleeding)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003325)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, newBleeding);
}
void PlayerLife::tellBroken(unknown_type steamID, Boolean newBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003326)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Boolean)>();
return _method(this, steamID, newBroken);
}
void PlayerLife::ReceiveBroken(Boolean newBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003327)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, newBroken);
}
void PlayerLife::askDamage(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003328)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3, unknown_type, SDG::Unturned::ELimb, unknown_type, unknown_type)>();
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill);
}
void PlayerLife::askDamage1(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003329)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3, unknown_type, SDG::Unturned::ELimb, unknown_type, unknown_type, Boolean, unknown_type)>();
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect);
}
void PlayerLife::askDamage2(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332A)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3, unknown_type, SDG::Unturned::ELimb, unknown_type, unknown_type, Boolean, unknown_type, Boolean)>();
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding);
}
void PlayerLife::askDamage3(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding, Boolean bypassSafezone)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332B)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3, unknown_type, SDG::Unturned::ELimb, unknown_type, unknown_type, Boolean, unknown_type, Boolean, Boolean)>();
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding, bypassSafezone);
}
Boolean PlayerLife::InternalCanDamage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332C)->GetCallable<Boolean(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::doDamage(Byte amount, UnityEngine::Vector3 newRagdoll, unknown_type newCause, SDG::Unturned::ELimb newLimb, unknown_type newKiller, unknown_type kill, Boolean trackKill, unknown_type newRagdollEffect, Boolean canCauseBleeding)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332D)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, UnityEngine::Vector3, unknown_type, SDG::Unturned::ELimb, unknown_type, unknown_type, Boolean, unknown_type, Boolean)>();
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding);
}
void PlayerLife::askHeal(Byte amount, Boolean healBleeding, Boolean healBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332E)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte, Boolean, Boolean)>();
return _method(this, amount, healBleeding, healBroken);
}
void PlayerLife::serverSetBleeding(Boolean newBleeding)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600332F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, newBleeding);
}
void PlayerLife::serverSetLegsBroken(Boolean newLegsBroken)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003330)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, newLegsBroken);
}
void PlayerLife::askStarve(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003331)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askEat(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003332)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askDehydrate(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003333)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askDrink(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003334)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askInfect(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003335)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askRadiate(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003336)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askDisinfect(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003337)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::internalSetStamina(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003338)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, value);
}
void PlayerLife::askTire(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003339)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askRest(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333A)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::simulatedModifyStamina(Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333B)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Int16)>();
return _method(this, delta);
}
void PlayerLife::simulatedModifyStamina1(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333C)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::clientModifyStamina(unknown_type senderId, Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333D)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Int16)>();
return _method(this, senderId, delta);
}
void PlayerLife::ReceiveModifyStamina(Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333E)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Int16)>();
return _method(this, delta);
}
void PlayerLife::serverModifyStamina(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600333F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::askView(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003340)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::clientModifyHallucination(unknown_type senderId, Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003341)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Int16)>();
return _method(this, senderId, delta);
}
void PlayerLife::ReceiveModifyHallucination(Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003342)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Int16)>();
return _method(this, delta);
}
void PlayerLife::serverModifyHallucination(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003343)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::tellHallucinate(unknown_type senderId, Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003344)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Byte)>();
return _method(this, senderId, amount);
}
void PlayerLife::sendHallucination(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003345)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::simulatedModifyWarmth(Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003346)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Int16)>();
return _method(this, delta);
}
void PlayerLife::clientModifyWarmth(unknown_type senderId, Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003347)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Int16)>();
return _method(this, senderId, delta);
}
void PlayerLife::ReceiveModifyWarmth(Int16 delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003348)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Int16)>();
return _method(this, delta);
}
void PlayerLife::serverModifyWarmth(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003349)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::askBlind(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334A)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askSuffocate(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334B)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::askBreath(Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334C)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Byte)>();
return _method(this, amount);
}
void PlayerLife::simulatedModifyOxygen(SByte delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334D)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, SByte)>();
return _method(this, delta);
}
void PlayerLife::simulatedModifyOxygen1(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334E)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::serverModifyHealth(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600334F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::serverModifyFood(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003350)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::serverModifyWater(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003351)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::serverModifyVirus(Single delta)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003352)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, delta);
}
void PlayerLife::askRespawn(unknown_type steamID, Boolean atHome)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003353)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type, Boolean)>();
return _method(this, steamID, atHome);
}
void PlayerLife::ServerRespawn(Boolean atHome)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003354)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, atHome);
}
void PlayerLife::ReceiveRespawnRequest(Boolean atHome)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003355)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, atHome);
}
void PlayerLife::askSuicide(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003356)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, steamID);
}
void PlayerLife::ReceiveSuicideRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003357)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::sendRevive()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003358)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::sendRespawn(Boolean atHome)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003359)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, atHome);
}
void PlayerLife::sendSuicide()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335A)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::SimulateStaminaFrame(UInt32 simulation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335B)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, UInt32)>();
return _method(this, simulation);
}
void PlayerLife::SetIsAsphyxiating(Boolean newIsAsphyxiating)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335C)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Boolean)>();
return _method(this, newIsAsphyxiating);
}
void PlayerLife::add_OnIsAsphyxiatingChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335D)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
void PlayerLife::remove_OnIsAsphyxiatingChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335E)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
void PlayerLife::SimulateOxygenFrame(UInt32 simulation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600335F)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, UInt32)>();
return _method(this, simulation);
}
void PlayerLife::simulate(UInt32 simulation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003360)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, UInt32)>();
return _method(this, simulation);
}
void PlayerLife::breakLegs()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003361)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::add_OnFallDamageRequested(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003362)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
void PlayerLife::remove_OnFallDamageRequested(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003363)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, unknown_type)>();
return _method(this, value);
}
void PlayerLife::onLanded(Single velocity)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003364)->GetCallable<void(*)(SDG::Unturned::PlayerLife*, Single)>();
return _method(this, velocity);
}
void PlayerLife::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003365)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::load()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003366)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
void PlayerLife::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003367)->GetCallable<void(*)(SDG::Unturned::PlayerLife*)>();
return _method(this);
}
};
}
}
