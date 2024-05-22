#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* Player::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "Player");
return _class;
}
uintptr_t Player::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::Player* Player::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::Player>();
}
Runtime::MonoVTable* Player::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Player::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Player);
// --------------- START CLASS MEMBERS --------------- //
Byte Player::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void Player::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
unknown_type Player::onPlayerCreated()
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerCreated")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::onPlayerCreated_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerCreated")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::onPlayerTeleported()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPlayerTeleported")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::onPlayerTeleported_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPlayerTeleported")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::onPlayerSpyReady()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPlayerSpyReady")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::onPlayerSpyReady_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onPlayerSpyReady")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::onSpyReady()
{
static uintptr_t _offset = MonoClass()->GetField("onSpyReady")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::onSpyReady_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onSpyReady")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::OnAdminUsageChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnAdminUsageChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::OnAdminUsageChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnAdminUsageChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::OnAnyPlayerAdminUsageChanged()
{
static uintptr_t _offset = MonoClass()->GetField("OnAnyPlayerAdminUsageChanged")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::OnAnyPlayerAdminUsageChanged_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnAnyPlayerAdminUsageChanged")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::onPlayerStatIncremented()
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerStatIncremented")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::onPlayerStatIncremented_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPlayerStatIncremented")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::onLocalPluginWidgetFlagsChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLocalPluginWidgetFlagsChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::onLocalPluginWidgetFlagsChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onLocalPluginWidgetFlagsChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean Player::isLoadingInventory()
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingInventory")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Player::isLoadingInventory_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingInventory")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Player::isLoadingLife()
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingLife")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Player::isLoadingLife_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingLife")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Player::isLoadingClothing()
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingClothing")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Player::isLoadingClothing_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingClothing")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Int32 Player::agro()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("agro")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void Player::agro_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("agro")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
SDG::Unturned::Player* Player::_player()
{
static uintptr_t _offset = MonoClass()->GetField("_player")->GetOffset();
return Memory::read<SDG::Unturned::Player*>(StaticInstance() + _offset);
}
void Player::_player_Set(SDG::Unturned::Player* value)
{
static uintptr_t _offset = MonoClass()->GetField("_player")->GetOffset();
Memory::write<SDG::Unturned::Player*>(value, StaticInstance() + _offset);
}
SDG::Unturned::SteamChannel* Player::_channel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_channel")->GetOffset();
return Memory::read<SDG::Unturned::SteamChannel*>(THIS_PTR + _offset);
}
void Player::_channel_Set(SDG::Unturned::SteamChannel* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_channel")->GetOffset();
Memory::write<SDG::Unturned::SteamChannel*>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerAnimator* Player::_animator()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_animator")->GetOffset();
return Memory::read<SDG::Unturned::PlayerAnimator*>(THIS_PTR + _offset);
}
void Player::_animator_Set(SDG::Unturned::PlayerAnimator* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_animator")->GetOffset();
Memory::write<SDG::Unturned::PlayerAnimator*>(value, THIS_PTR + _offset);
}
unknown_type Player::_clothing()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_clothing")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_clothing_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_clothing")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerInventory* Player::_inventory()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_inventory")->GetOffset();
return Memory::read<SDG::Unturned::PlayerInventory*>(THIS_PTR + _offset);
}
void Player::_inventory_Set(SDG::Unturned::PlayerInventory* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_inventory")->GetOffset();
Memory::write<SDG::Unturned::PlayerInventory*>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerEquipment* Player::_equipment()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipment")->GetOffset();
return Memory::read<SDG::Unturned::PlayerEquipment*>(THIS_PTR + _offset);
}
void Player::_equipment_Set(SDG::Unturned::PlayerEquipment* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipment")->GetOffset();
Memory::write<SDG::Unturned::PlayerEquipment*>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerLife* Player::_life()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_life")->GetOffset();
return Memory::read<SDG::Unturned::PlayerLife*>(THIS_PTR + _offset);
}
void Player::_life_Set(SDG::Unturned::PlayerLife* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_life")->GetOffset();
Memory::write<SDG::Unturned::PlayerLife*>(value, THIS_PTR + _offset);
}
unknown_type Player::_crafting()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_crafting")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_crafting_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_crafting")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::_skills()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skills")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_skills_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skills")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerMovement* Player::_movement()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_movement")->GetOffset();
return Memory::read<SDG::Unturned::PlayerMovement*>(THIS_PTR + _offset);
}
void Player::_movement_Set(SDG::Unturned::PlayerMovement* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_movement")->GetOffset();
Memory::write<SDG::Unturned::PlayerMovement*>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerLook* Player::_look()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look")->GetOffset();
return Memory::read<SDG::Unturned::PlayerLook*>(THIS_PTR + _offset);
}
void Player::_look_Set(SDG::Unturned::PlayerLook* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_look")->GetOffset();
Memory::write<SDG::Unturned::PlayerLook*>(value, THIS_PTR + _offset);
}
unknown_type Player::_stance()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_stance")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_stance_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_stance")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::_input()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_input")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_input_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_input")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::_voice()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_voice")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_voice_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_voice")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::_interact()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_interact")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_interact_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_interact")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::_workzone()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_workzone")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_workzone_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_workzone")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG::Unturned::PlayerQuests* Player::_quests()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_quests")->GetOffset();
return Memory::read<SDG::Unturned::PlayerQuests*>(THIS_PTR + _offset);
}
void Player::_quests_Set(SDG::Unturned::PlayerQuests* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_quests")->GetOffset();
Memory::write<SDG::Unturned::PlayerQuests*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* Player::_first()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_first")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void Player::_first_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_first")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* Player::_third()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_third")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void Player::_third_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_third")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* Player::_character()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_character")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void Player::_character_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_character")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* Player::firstSpot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstSpot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void Player::firstSpot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstSpot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* Player::thirdSpot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSpot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void Player::thirdSpot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSpot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Boolean Player::itemOn()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemOn")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void Player::itemOn_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemOn")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type Player::itemLightConfig()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemLightConfig")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::itemLightConfig_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemLightConfig")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean Player::headlampOn()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("headlampOn")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void Player::headlampOn_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("headlampOn")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type Player::headlampLightConfig()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("headlampLightConfig")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::headlampLightConfig_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("headlampLightConfig")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Int32 Player::screenshotsExpected()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsExpected")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void Player::screenshotsExpected_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsExpected")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
unknown_type Player::screenshotsDestination()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsDestination")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::screenshotsDestination_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsDestination")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::screenshotsCallbacks()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsCallbacks")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::screenshotsCallbacks_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotsCallbacks")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::SendScreenshotDestination()
{
static uintptr_t _offset = MonoClass()->GetField("SendScreenshotDestination")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendScreenshotDestination_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendScreenshotDestination")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendScreenshotRelay()
{
static uintptr_t _offset = MonoClass()->GetField("SendScreenshotRelay")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendScreenshotRelay_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendScreenshotRelay")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::screenshotFinal()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotFinal")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::screenshotFinal_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("screenshotFinal")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::SendTakeScreenshot()
{
static uintptr_t _offset = MonoClass()->GetField("SendTakeScreenshot")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendTakeScreenshot_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendTakeScreenshot")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendBrowserRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendBrowserRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendBrowserRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendBrowserRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendHintMessage()
{
static uintptr_t _offset = MonoClass()->GetField("SendHintMessage")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendHintMessage_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendHintMessage")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendRelayToServer()
{
static uintptr_t _offset = MonoClass()->GetField("SendRelayToServer")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendRelayToServer_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRelayToServer")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::pluginWidgetFlags()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<pluginWidgetFlags>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::pluginWidgetFlags_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<pluginWidgetFlags>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::SendSetPluginWidgetFlags()
{
static uintptr_t _offset = MonoClass()->GetField("SendSetPluginWidgetFlags")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendSetPluginWidgetFlags_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSetPluginWidgetFlags")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::_adminUsageFlags()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_adminUsageFlags")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_adminUsageFlags_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_adminUsageFlags")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type Player::SendAdminUsageFlags()
{
static uintptr_t _offset = MonoClass()->GetField("SendAdminUsageFlags")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendAdminUsageFlags_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAdminUsageFlags")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Player::wantsBattlEyeLogs()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<wantsBattlEyeLogs>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void Player::wantsBattlEyeLogs_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<wantsBattlEyeLogs>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type Player::SendBattlEyeLogsRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendBattlEyeLogsRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendBattlEyeLogsRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendBattlEyeLogsRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendTerminalRelay()
{
static uintptr_t _offset = MonoClass()->GetField("SendTerminalRelay")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendTerminalRelay_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendTerminalRelay")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Single Player::TELEPORT_VERTICAL_OFFSET()
{
static uintptr_t _offset = MonoClass()->GetField("TELEPORT_VERTICAL_OFFSET")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Player::TELEPORT_VERTICAL_OFFSET_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("TELEPORT_VERTICAL_OFFSET")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type Player::SendTeleport()
{
static uintptr_t _offset = MonoClass()->GetField("SendTeleport")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendTeleport_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendTeleport")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendStat()
{
static uintptr_t _offset = MonoClass()->GetField("SendStat")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendStat_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendStat")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendAchievementUnlocked()
{
static uintptr_t _offset = MonoClass()->GetField("SendAchievementUnlocked")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendAchievementUnlocked_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAchievementUnlocked")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Player::SendUIMessage()
{
static uintptr_t _offset = MonoClass()->GetField("SendUIMessage")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Player::SendUIMessage_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUIMessage")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
UInt32 Player::maxRateLimitedActionsPerSecond()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maxRateLimitedActionsPerSecond")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void Player::maxRateLimitedActionsPerSecond_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maxRateLimitedActionsPerSecond")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
Single Player::rateLimitedActionsCredits()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<rateLimitedActionsCredits>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void Player::rateLimitedActionsCredits_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<rateLimitedActionsCredits>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type Player::_netId()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_netId")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void Player::_netId_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_netId")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
void Player::add_OnAdminUsageChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FC8)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, value);
}
void Player::remove_OnAdminUsageChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FC9)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, value);
}
void Player::add_OnAnyPlayerAdminUsageChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06002FCA)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Player::remove_OnAnyPlayerAdminUsageChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06002FCB)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Player::add_onPlayerStatIncremented(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06002FCC)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Player::remove_onPlayerStatIncremented(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06002FCD)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Player::add_onLocalPluginWidgetFlagsChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FCE)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, value);
}
void Player::remove_onLocalPluginWidgetFlagsChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FCF)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, value);
}
Boolean Player::get_isLoading()
{
static auto _method = MonoClass()->GetMethod(0x06002FD0)->GetCallable<Boolean(*)()>();
return _method();
}
SDG::Unturned::Player* Player::get_player()
{
static auto _method = MonoClass()->GetMethod(0x06002FD1)->GetCallable<SDG::Unturned::Player*(*)()>();
return _method();
}
SDG::Unturned::Player* Player::get_instance()
{
static auto _method = MonoClass()->GetMethod(0x06002FD2)->GetCallable<SDG::Unturned::Player*(*)()>();
return _method();
}
SDG::Unturned::SteamChannel* Player::get_channel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD3)->GetCallable<SDG::Unturned::SteamChannel*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerAnimator* Player::get_animator()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD4)->GetCallable<SDG::Unturned::PlayerAnimator*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_clothing()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD5)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerInventory* Player::get_inventory()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD6)->GetCallable<SDG::Unturned::PlayerInventory*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerEquipment* Player::get_equipment()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD7)->GetCallable<SDG::Unturned::PlayerEquipment*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerLife* Player::get_life()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD8)->GetCallable<SDG::Unturned::PlayerLife*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_crafting()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FD9)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_skills()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDA)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerMovement* Player::get_movement()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDB)->GetCallable<SDG::Unturned::PlayerMovement*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerLook* Player::get_look()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDC)->GetCallable<SDG::Unturned::PlayerLook*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_stance()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDD)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_input()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDE)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_voice()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FDF)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_interact()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE0)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_workzone()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE1)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
SDG::Unturned::PlayerQuests* Player::get_quests()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE2)->GetCallable<SDG::Unturned::PlayerQuests*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
UnityEngine::Transform* Player::get_first()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE3)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
UnityEngine::Transform* Player::get_third()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE4)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
UnityEngine::Transform* Player::get_character()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE5)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::Player*)>();
return _method(this);
}
Boolean Player::get_isSpotOn()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE6)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::get_lightConfig()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE7)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::PlayAudioReference(unknown_type audioReference)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE8)->GetCallable<unknown_type(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, audioReference);
}
unknown_type Player::playSound(unknown_type clip, Single volume, Single pitch, Single deviation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FE9)->GetCallable<unknown_type(*)(SDG::Unturned::Player*, unknown_type, Single, Single, Single)>();
return _method(this, clip, volume, pitch, deviation);
}
unknown_type Player::playSound1(unknown_type clip, Single pitch, Single deviation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FEA)->GetCallable<unknown_type(*)(SDG::Unturned::Player*, unknown_type, Single, Single)>();
return _method(this, clip, pitch, deviation);
}
unknown_type Player::playSound2(unknown_type clip, Single volume)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FEB)->GetCallable<unknown_type(*)(SDG::Unturned::Player*, unknown_type, Single)>();
return _method(this, clip, volume);
}
unknown_type Player::playSound3(unknown_type clip)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FEC)->GetCallable<unknown_type(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, clip);
}
void Player::tellScreenshotDestination(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FED)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, steamID);
}
void Player::ReceiveScreenshotDestination(unknown_type context)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FEE)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, context);
}
void Player::HandleScreenshotData(Array<Byte>* data)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FEF)->GetCallable<void(*)(SDG::Unturned::Player*, Array<Byte>*)>();
return _method(this, data);
}
void Player::tellScreenshotRelay(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF0)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, steamID);
}
void Player::ReceiveScreenshotRelay(unknown_type context)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF1)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, context);
}
unknown_type Player::takeScreenshot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF2)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::askScreenshot(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF3)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, steamID);
}
void Player::ReceiveTakeScreenshot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF4)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::sendScreenshot(unknown_type destination, unknown_type callback)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF5)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, unknown_type)>();
return _method(this, destination, callback);
}
void Player::askBrowserRequest(unknown_type steamID, String* msg, String* url)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF6)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, String*, String*)>();
return _method(this, steamID, msg, url);
}
void Player::ReceiveBrowserRequest(String* msg, String* url)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF7)->GetCallable<void(*)(SDG::Unturned::Player*, String*, String*)>();
return _method(this, msg, url);
}
void Player::sendBrowserRequest(String* msg, String* url)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF8)->GetCallable<void(*)(SDG::Unturned::Player*, String*, String*)>();
return _method(this, msg, url);
}
void Player::ReceiveHintMessage(String* message, Single durationSeconds)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FF9)->GetCallable<void(*)(SDG::Unturned::Player*, String*, Single)>();
return _method(this, message, durationSeconds);
}
void Player::ServerShowHint(String* message, Single durationSeconds)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFA)->GetCallable<void(*)(SDG::Unturned::Player*, String*, Single)>();
return _method(this, message, durationSeconds);
}
void Player::askRelayToServer(unknown_type steamID, UInt32 ip, UInt16 port, String* password, Boolean shouldShowMenu)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFB)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, UInt32, UInt16, String*, Boolean)>();
return _method(this, steamID, ip, port, password, shouldShowMenu);
}
void Player::ReceiveRelayToServer(UInt32 ip, UInt16 port, unknown_type serverCode, String* password, Boolean shouldShowMenu)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFC)->GetCallable<void(*)(SDG::Unturned::Player*, UInt32, UInt16, unknown_type, String*, Boolean)>();
return _method(this, ip, port, serverCode, password, shouldShowMenu);
}
void Player::sendRelayToServer(UInt32 ip, UInt16 port, String* password, Boolean shouldShowMenu)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFD)->GetCallable<void(*)(SDG::Unturned::Player*, UInt32, UInt16, String*, Boolean)>();
return _method(this, ip, port, password, shouldShowMenu);
}
void Player::sendRelayToServer1(unknown_type serverCode, String* password, Boolean shouldShowMenu)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFE)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, String*, Boolean)>();
return _method(this, serverCode, password, shouldShowMenu);
}
void Player::sendRelayToServer2(UInt32 ip, UInt16 port, String* password)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06002FFF)->GetCallable<void(*)(SDG::Unturned::Player*, UInt32, UInt16, String*)>();
return _method(this, ip, port, password);
}
Boolean Player::get_inPluginModal()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003000)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
Boolean Player::isPluginWidgetFlagActive(unknown_type flag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003001)->GetCallable<Boolean(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, flag);
}
unknown_type Player::get_pluginWidgetFlags()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003002)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::set_pluginWidgetFlags(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003003)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, value);
}
void Player::clientsideSetPluginWidgetFlags(unknown_type steamID, UInt32 newFlags)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003004)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, UInt32)>();
return _method(this, steamID, newFlags);
}
void Player::ReceiveSetPluginWidgetFlags(UInt32 newFlags)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003005)->GetCallable<void(*)(SDG::Unturned::Player*, UInt32)>();
return _method(this, newFlags);
}
void Player::setAllPluginWidgetFlags(unknown_type newFlags)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003006)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, newFlags);
}
void Player::enablePluginWidgetFlag(unknown_type flag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003007)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, flag);
}
void Player::disablePluginWidgetFlag(unknown_type flag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003008)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, flag);
}
void Player::setPluginWidgetFlag(unknown_type flag, Boolean active)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003009)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, Boolean)>();
return _method(this, flag, active);
}
void Player::serversideSetPluginModal(Boolean enableModal)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300A)->GetCallable<void(*)(SDG::Unturned::Player*, Boolean)>();
return _method(this, enableModal);
}
unknown_type Player::get_AdminUsageFlags()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300B)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::ReceiveAdminUsageFlags(unknown_type context, UInt32 newFlagsBitmask)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300C)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, UInt32)>();
return _method(this, context, newFlagsBitmask);
}
void Player::ClientSetAdminUsageFlags(unknown_type newFlags)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300D)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, newFlags);
}
void Player::ClientSetAdminUsageFlagActive(unknown_type flag, Boolean active)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300E)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, Boolean)>();
return _method(this, flag, active);
}
Boolean Player::get_wantsBattlEyeLogs()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600300F)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::set_wantsBattlEyeLogs(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003010)->GetCallable<void(*)(SDG::Unturned::Player*, Boolean)>();
return _method(this, value);
}
void Player::askRequestBattlEyeLogs(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003011)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, steamID);
}
void Player::ReceiveBattlEyeLogsRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003012)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::tellTerminalRelay(unknown_type steamID, String* internalMessage)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003013)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, String*)>();
return _method(this, steamID, internalMessage);
}
void Player::ReceiveTerminalRelay(String* internalMessage)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003014)->GetCallable<void(*)(SDG::Unturned::Player*, String*)>();
return _method(this, internalMessage);
}
void Player::sendTerminalRelay(String* internalMessage, String* internalCategory, String* displayCategory)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003015)->GetCallable<void(*)(SDG::Unturned::Player*, String*, String*, String*)>();
return _method(this, internalMessage, internalCategory, displayCategory);
}
void Player::sendTerminalRelay1(String* internalMessage)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003016)->GetCallable<void(*)(SDG::Unturned::Player*, String*)>();
return _method(this, internalMessage);
}
void Player::PostTeleport()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003017)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::askTeleport(unknown_type steamID, UnityEngine::Vector3 position, Byte angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003018)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, UnityEngine::Vector3, Byte)>();
return _method(this, steamID, position, angle);
}
void Player::ReceiveTeleport(UnityEngine::Vector3 position, Byte angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003019)->GetCallable<void(*)(SDG::Unturned::Player*, UnityEngine::Vector3, Byte)>();
return _method(this, position, angle);
}
void Player::sendTeleport(UnityEngine::Vector3 position, Byte angle)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301A)->GetCallable<void(*)(SDG::Unturned::Player*, UnityEngine::Vector3, Byte)>();
return _method(this, position, angle);
}
Boolean Player::teleportToPlayer(SDG::Unturned::Player* otherPlayer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301B)->GetCallable<Boolean(*)(SDG::Unturned::Player*, SDG::Unturned::Player*)>();
return _method(this, otherPlayer);
}
Boolean Player::teleportToLocation(UnityEngine::Vector3 position, Single yaw)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301C)->GetCallable<Boolean(*)(SDG::Unturned::Player*, UnityEngine::Vector3, Single)>();
return _method(this, position, yaw);
}
Boolean Player::teleportToRandomSpawnPoint()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301D)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
Boolean Player::teleportToBed()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301E)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
Boolean Player::adjustStanceOrTeleportIfStuck()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600301F)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::teleportToLocationUnsafe(UnityEngine::Vector3 position, Single yaw)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003020)->GetCallable<void(*)(SDG::Unturned::Player*, UnityEngine::Vector3, Single)>();
return _method(this, position, yaw);
}
void Player::tellStat(unknown_type steamID, Byte newStat)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003021)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, Byte)>();
return _method(this, steamID, newStat);
}
void Player::ReceiveStat(unknown_type stat)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003022)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, stat);
}
void Player::tellAchievementUnlocked(unknown_type steamID, String* id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003023)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, String*)>();
return _method(this, steamID, id);
}
void Player::ReceiveAchievementUnlocked(String* id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003024)->GetCallable<void(*)(SDG::Unturned::Player*, String*)>();
return _method(this, id);
}
void Player::trackStat(unknown_type stat)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003025)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, stat);
}
void Player::sendStat(unknown_type kill)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003026)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, kill);
}
void Player::sendStat1(unknown_type stat)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003027)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, stat);
}
void Player::sendAchievementUnlocked(String* id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003028)->GetCallable<void(*)(SDG::Unturned::Player*, String*)>();
return _method(this, id);
}
void Player::askMessage(unknown_type steamID, Byte message)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003029)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type, Byte)>();
return _method(this, steamID, message);
}
void Player::ReceiveUIMessage(unknown_type message)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302A)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, message);
}
void Player::sendMessage(unknown_type message)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302B)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, message);
}
void Player::enableItemSpotLight(unknown_type config)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302C)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, config);
}
void Player::disableItemSpotLight()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302D)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::updateGlassesLights(Boolean on)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302E)->GetCallable<void(*)(SDG::Unturned::Player*, Boolean)>();
return _method(this, on);
}
void Player::enableHeadlamp(unknown_type config)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600302F)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, config);
}
void Player::disableHeadlamp()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003030)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::updateLights()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003031)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::onPerspectiveUpdated(unknown_type newPerspective)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003032)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, newPerspective);
}
Single Player::get_rateLimitedActionsCredits()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003033)->GetCallable<Single(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::set_rateLimitedActionsCredits(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003034)->GetCallable<void(*)(SDG::Unturned::Player*, Single)>();
return _method(this, value);
}
Boolean Player::tryToPerformRateLimitedAction()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003035)->GetCallable<Boolean(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::updateRateLimiting()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003036)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003037)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::InitializePlayerStart()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003038)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::AssignNetIdBlock(unknown_type baseId)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003039)->GetCallable<void(*)(SDG::Unturned::Player*, unknown_type)>();
return _method(this, baseId);
}
void Player::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303A)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303B)->GetCallable<void(*)(SDG::Unturned::Player*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void Player::SendInitialPlayerState1(List<unknown_type>* transportConnections)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303C)->GetCallable<void(*)(SDG::Unturned::Player*, List<unknown_type>*)>();
return _method(this, transportConnections);
}
void Player::ReleaseNetIdBlock()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303D)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::Awake()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303E)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600303F)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003040)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
void Player::savePositionAndRotation()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003041)->GetCallable<void(*)(SDG::Unturned::Player*)>();
return _method(this);
}
unknown_type Player::GetNetId()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003042)->GetCallable<unknown_type(*)(SDG::Unturned::Player*)>();
return _method(this);
}
};
}
}
