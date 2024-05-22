#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerQuests::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerQuests");
return _class;
}
uintptr_t PlayerQuests::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerQuests* PlayerQuests::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerQuests>();
}
Runtime::MonoVTable* PlayerQuests::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerQuests::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerQuests);
// --------------- START CLASS MEMBERS --------------- //
Byte PlayerQuests::SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_NPC_SPAWN_ID")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerQuests::SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_TRACKED_QUEST_GUID")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerQuests::SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_QUEST_LIST_GUIDS")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerQuests::SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_ADDED_NPC_CUTSCENE_MODE")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerQuests::SAVEDATA_VERSION_NEWEST()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_NEWEST")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_NEWEST_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION_NEWEST")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerQuests::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerQuests::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
UInt32 PlayerQuests::DEFAULT_RADIO_FREQUENCY()
{
static uintptr_t _offset = MonoClass()->GetField("DEFAULT_RADIO_FREQUENCY")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void PlayerQuests::DEFAULT_RADIO_FREQUENCY_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DEFAULT_RADIO_FREQUENCY")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::flagComparator()
{
static uintptr_t _offset = MonoClass()->GetField("flagComparator")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::flagComparator_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("flagComparator")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::questComparator()
{
static uintptr_t _offset = MonoClass()->GetField("questComparator")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::questComparator_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("questComparator")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::checkNPC()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("checkNPC")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::checkNPC_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("checkNPC")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::serverCurrentDialogueAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentDialogueAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::serverCurrentDialogueAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentDialogueAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::serverCurrentVendorAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentVendorAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::serverCurrentVendorAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentVendorAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::serverCurrentDialogueMessage()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentDialogueMessage")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::serverCurrentDialogueMessage_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverCurrentDialogueMessage")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::serverDefaultNextDialogueAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverDefaultNextDialogueAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::serverDefaultNextDialogueAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("serverDefaultNextDialogueAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::flagsMap()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("flagsMap")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::flagsMap_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("flagsMap")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::onExternalConditionsUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onExternalConditionsUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::onExternalConditionsUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onExternalConditionsUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::onFlagsUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFlagsUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::onFlagsUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFlagsUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::onFlagUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFlagUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::onFlagUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onFlagUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::OnLocalPlayerQuestsChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnLocalPlayerQuestsChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::OnLocalPlayerQuestsChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("OnLocalPlayerQuestsChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::onAnyFlagChanged()
{
static uintptr_t _offset = MonoClass()->GetField("onAnyFlagChanged")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::onAnyFlagChanged_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onAnyFlagChanged")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::onGroupChanged()
{
static uintptr_t _offset = MonoClass()->GetField("onGroupChanged")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::onGroupChanged_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onGroupChanged")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::groupUpdated()
{
static uintptr_t _offset = MonoClass()->GetField("groupUpdated")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::groupUpdated_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("groupUpdated")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::TrackedQuestUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("TrackedQuestUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::TrackedQuestUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("TrackedQuestUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::groupIDChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupIDChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::groupIDChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupIDChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::groupRankChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupRankChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::groupRankChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupRankChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::groupInvitesChanged()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupInvitesChanged")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::groupInvitesChanged_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("groupInvitesChanged")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::questCompleted()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("questCompleted")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::questCompleted_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("questCompleted")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerQuests::flagsList()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<flagsList>k__BackingField")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerQuests::flagsList_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<flagsList>k__BackingField")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::_trackedQuest()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_trackedQuest")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::_trackedQuest_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_trackedQuest")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerQuests::questsList()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<questsList>k__BackingField")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerQuests::questsList_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<questsList>k__BackingField")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
Boolean PlayerQuests::_isMarkerPlaced()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMarkerPlaced")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerQuests::_isMarkerPlaced_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMarkerPlaced")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::Vector3 PlayerQuests::_markerPosition()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerPosition")->GetOffset();
return Memory::read<UnityEngine::Vector3>(THIS_PTR + _offset);
}
void PlayerQuests::_markerPosition_Set(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerPosition")->GetOffset();
Memory::write<UnityEngine::Vector3>(value, THIS_PTR + _offset);
}
String* PlayerQuests::_markerTextOverride()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerTextOverride")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void PlayerQuests::_markerTextOverride_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerTextOverride")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
UInt32 PlayerQuests::_radioFrequency()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_radioFrequency")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerQuests::_radioFrequency_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_radioFrequency")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::_groupID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_groupID")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::_groupID_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_groupID")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::_groupRank()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_groupRank")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::_groupRank_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_groupRank")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::groupInvites()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<groupInvites>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::groupInvites_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<groupInvites>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerQuests::inMainGroup()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inMainGroup")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerQuests::inMainGroup_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inMainGroup")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
String* PlayerQuests::npcSpawnId()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("npcSpawnId")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void PlayerQuests::npcSpawnId_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("npcSpawnId")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
Boolean PlayerQuests::npcCutsceneMode()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("npcCutsceneMode")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerQuests::npcCutsceneMode_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("npcCutsceneMode")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::SendCutsceneMode()
{
static uintptr_t _offset = MonoClass()->GetField("SendCutsceneMode")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendCutsceneMode_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendCutsceneMode")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendMarkerState()
{
static uintptr_t _offset = MonoClass()->GetField("SendMarkerState")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendMarkerState_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendMarkerState")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendSetMarkerRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendSetMarkerRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendSetMarkerRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSetMarkerRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendRadioFrequencyState()
{
static uintptr_t _offset = MonoClass()->GetField("SendRadioFrequencyState")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendRadioFrequencyState_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRadioFrequencyState")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendSetRadioFrequencyRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendSetRadioFrequencyRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendSetRadioFrequencyRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSetRadioFrequencyRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendGroupState()
{
static uintptr_t _offset = MonoClass()->GetField("SendGroupState")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendGroupState_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendGroupState")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendAcceptGroupInvitationRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendAcceptGroupInvitationRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendAcceptGroupInvitationRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAcceptGroupInvitationRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendDeclineGroupInvitationRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendDeclineGroupInvitationRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendDeclineGroupInvitationRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDeclineGroupInvitationRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Single PlayerQuests::lastLeaveGroupRequestRealtime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastLeaveGroupRequestRealtime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerQuests::lastLeaveGroupRequestRealtime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastLeaveGroupRequestRealtime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::SendLeaveGroupRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendLeaveGroupRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendLeaveGroupRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendLeaveGroupRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendDeleteGroupRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendDeleteGroupRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendDeleteGroupRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDeleteGroupRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendCreateGroupRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendCreateGroupRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendCreateGroupRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendCreateGroupRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendAddGroupInviteClient()
{
static uintptr_t _offset = MonoClass()->GetField("SendAddGroupInviteClient")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendAddGroupInviteClient_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAddGroupInviteClient")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendRemoveGroupInviteClient()
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveGroupInviteClient")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendRemoveGroupInviteClient_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveGroupInviteClient")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendAddGroupInviteRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendAddGroupInviteRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendAddGroupInviteRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAddGroupInviteRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendPromoteRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendPromoteRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendPromoteRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendPromoteRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendDemoteRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendDemoteRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendDemoteRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDemoteRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendKickFromGroup()
{
static uintptr_t _offset = MonoClass()->GetField("SendKickFromGroup")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendKickFromGroup_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendKickFromGroup")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendRenameGroupRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendRenameGroupRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendRenameGroupRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRenameGroupRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendSellToVendor()
{
static uintptr_t _offset = MonoClass()->GetField("SendSellToVendor")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendSellToVendor_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSellToVendor")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendBuyFromVendor()
{
static uintptr_t _offset = MonoClass()->GetField("SendBuyFromVendor")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendBuyFromVendor_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendBuyFromVendor")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendSetFlag()
{
static uintptr_t _offset = MonoClass()->GetField("SendSetFlag")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendSetFlag_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSetFlag")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendRemoveFlag()
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveFlag")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendRemoveFlag_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveFlag")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendAddQuest()
{
static uintptr_t _offset = MonoClass()->GetField("SendAddQuest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendAddQuest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAddQuest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendRemoveQuest()
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveQuest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendRemoveQuest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendRemoveQuest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendTrackQuest()
{
static uintptr_t _offset = MonoClass()->GetField("SendTrackQuest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendTrackQuest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendTrackQuest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendAbandonQuestRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendAbandonQuestRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendAbandonQuestRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendAbandonQuestRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendChooseDialogueResponseRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendChooseDialogueResponseRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendChooseDialogueResponseRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendChooseDialogueResponseRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendChooseDefaultNextDialogueRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendChooseDefaultNextDialogueRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendChooseDefaultNextDialogueRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendChooseDefaultNextDialogueRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendQuests()
{
static uintptr_t _offset = MonoClass()->GetField("SendQuests")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendQuests_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendQuests")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendTalkWithNpcResponse()
{
static uintptr_t _offset = MonoClass()->GetField("SendTalkWithNpcResponse")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendTalkWithNpcResponse_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendTalkWithNpcResponse")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendOpenDialogue()
{
static uintptr_t _offset = MonoClass()->GetField("SendOpenDialogue")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendOpenDialogue_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendOpenDialogue")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerQuests::SendOpenVendor()
{
static uintptr_t _offset = MonoClass()->GetField("SendOpenVendor")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerQuests::SendOpenVendor_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendOpenVendor")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
UnityEngine::GameObject* PlayerQuests::delayedRewardsGameObject()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("delayedRewardsGameObject")->GetOffset();
return Memory::read<UnityEngine::GameObject*>(THIS_PTR + _offset);
}
void PlayerQuests::delayedRewardsGameObject_Set(UnityEngine::GameObject* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("delayedRewardsGameObject")->GetOffset();
Memory::write<UnityEngine::GameObject*>(value, THIS_PTR + _offset);
}
unknown_type PlayerQuests::delayedRewardsComponent()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("delayedRewardsComponent")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerQuests::delayedRewardsComponent_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("delayedRewardsComponent")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerQuests::hasCreatedDelayedRewards()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasCreatedDelayedRewards")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerQuests::hasCreatedDelayedRewards_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasCreatedDelayedRewards")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerQuests::wasLoadCalled()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerQuests::wasLoadCalled_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single PlayerQuests::lastVehiclePurchaseRealtime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastVehiclePurchaseRealtime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerQuests::lastVehiclePurchaseRealtime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastVehiclePurchaseRealtime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
void PlayerQuests::add_OnLocalPlayerQuestsChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003443)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_OnLocalPlayerQuestsChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003444)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::add_onAnyFlagChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003445)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerQuests::remove_onAnyFlagChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003446)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerQuests::add_onGroupChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003447)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerQuests::remove_onGroupChanged(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003448)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerQuests::broadcastGroupChanged(SDG::Unturned::PlayerQuests* sender, unknown_type oldGroupID, unknown_type oldGroupRank, unknown_type newGroupID, unknown_type newGroupRank)
{
static auto _method = MonoClass()->GetMethod(0x06003449)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(sender, oldGroupID, oldGroupRank, newGroupID, newGroupRank);
}
void PlayerQuests::triggerGroupUpdated(SDG::Unturned::PlayerQuests* sender)
{
static auto _method = MonoClass()->GetMethod(0x0600344A)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(sender);
}
void PlayerQuests::add_TrackedQuestUpdated(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600344B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_TrackedQuestUpdated(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600344C)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::TriggerTrackedQuestUpdated()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600344D)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::add_groupIDChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600344E)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_groupIDChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600344F)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::triggerGroupIDChanged(unknown_type oldGroupID, unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003450)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, oldGroupID, newGroupID);
}
void PlayerQuests::add_groupRankChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003451)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_groupRankChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003452)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::triggerGroupRankChanged(unknown_type oldGroupRank, unknown_type newGroupRank)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003453)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, oldGroupRank, newGroupRank);
}
void PlayerQuests::add_groupInvitesChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003454)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_groupInvitesChanged(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003455)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::triggerGroupInvitesChanged()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003456)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::add_questCompleted(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003457)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::remove_questCompleted(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003458)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
void PlayerQuests::triggerQuestCompleted(unknown_type asset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003459)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, asset);
}
List<unknown_type>* PlayerQuests::get_flagsList()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345A)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_flagsList(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, List<unknown_type>*)>();
return _method(this, value);
}
unknown_type PlayerQuests::GetTrackedQuest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345C)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
UInt16 PlayerQuests::get_TrackedQuestID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345D)->GetCallable<UInt16(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
List<unknown_type>* PlayerQuests::get_questsList()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345E)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_questsList(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600345F)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, List<unknown_type>*)>();
return _method(this, value);
}
Boolean PlayerQuests::get_isMarkerPlaced()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003460)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_isMarkerPlaced(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003461)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean)>();
return _method(this, value);
}
UnityEngine::Vector3 PlayerQuests::get_markerPosition()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003462)->GetCallable<UnityEngine::Vector3(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_markerPosition(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003463)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UnityEngine::Vector3)>();
return _method(this, value);
}
String* PlayerQuests::get_markerTextOverride()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003464)->GetCallable<String*(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_markerTextOverride(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003465)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, String*)>();
return _method(this, value);
}
UInt32 PlayerQuests::get_radioFrequency()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003466)->GetCallable<UInt32(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_radioFrequency(UInt32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003467)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt32)>();
return _method(this, value);
}
unknown_type PlayerQuests::get_groupID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003468)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_groupID(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003469)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
unknown_type PlayerQuests::get_groupRank()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346A)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_groupRank(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
unknown_type PlayerQuests::get_groupInvites()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346C)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::set_groupInvites(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346D)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, value);
}
Boolean PlayerQuests::get_useMaxGroupMembersLimit()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346E)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasSpaceForMoreMembersInGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600346F)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_canChangeGroupMembership()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003470)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToChangeName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003471)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToChangeRank()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003472)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToInviteMembers()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003473)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToKickMembers()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003474)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToCreateGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003475)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToLeaveGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003476)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_hasPermissionToDeleteGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003477)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_canBeKickedFromGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003478)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::get_isMemberOfAGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003479)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::IsCutsceneModeActive()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347A)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::ServerSetCutsceneModeActive(Boolean active)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean)>();
return _method(this, active);
}
Boolean PlayerQuests::isMemberOfGroup(unknown_type groupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347C)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, groupID);
}
Boolean PlayerQuests::isMemberOfSameGroupAs(SDG::Unturned::Player* player)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347D)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, SDG::Unturned::Player*)>();
return _method(this, player);
}
void PlayerQuests::tellSetMarker(unknown_type steamID, Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347E)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean, UnityEngine::Vector3, String*)>();
return _method(this, steamID, newIsMarkerPlaced, newMarkerPosition, newMarkerTextOverride);
}
void PlayerQuests::ReceiveCutsceneMode(Boolean newCutsceneMode)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600347F)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean)>();
return _method(this, newCutsceneMode);
}
void PlayerQuests::ReceiveMarkerState(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003480)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean, UnityEngine::Vector3, String*)>();
return _method(this, newIsMarkerPlaced, newMarkerPosition, newMarkerTextOverride);
}
void PlayerQuests::askSetMarker(unknown_type steamID, Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003481)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean, UnityEngine::Vector3)>();
return _method(this, steamID, newIsMarkerPlaced, newMarkerPosition);
}
void PlayerQuests::ReceiveSetMarkerRequest(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003482)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean, UnityEngine::Vector3)>();
return _method(this, newIsMarkerPlaced, newMarkerPosition);
}
void PlayerQuests::replicateSetMarker(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition, String* newMarkerTextOverride)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003483)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean, UnityEngine::Vector3, String*)>();
return _method(this, newIsMarkerPlaced, newMarkerPosition, newMarkerTextOverride);
}
void PlayerQuests::sendSetMarker(Boolean newIsMarkerPlaced, UnityEngine::Vector3 newMarkerPosition)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003484)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean, UnityEngine::Vector3)>();
return _method(this, newIsMarkerPlaced, newMarkerPosition);
}
void PlayerQuests::tellSetRadioFrequency(unknown_type steamID, UInt32 newRadioFrequency)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003485)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt32)>();
return _method(this, steamID, newRadioFrequency);
}
void PlayerQuests::ReceiveRadioFrequencyState(UInt32 newRadioFrequency)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003486)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt32)>();
return _method(this, newRadioFrequency);
}
void PlayerQuests::askSetRadioFrequency(unknown_type steamID, UInt32 newRadioFrequency)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003487)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt32)>();
return _method(this, steamID, newRadioFrequency);
}
void PlayerQuests::ReceiveSetRadioFrequencyRequest(UInt32 newRadioFrequency)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003488)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt32)>();
return _method(this, newRadioFrequency);
}
void PlayerQuests::sendSetRadioFrequency(UInt32 newRadioFrequency)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003489)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt32)>();
return _method(this, newRadioFrequency);
}
void PlayerQuests::tellSetGroup(unknown_type steamID, unknown_type newGroupID, Byte newGroupRank)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348A)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte)>();
return _method(this, steamID, newGroupID, newGroupRank);
}
void PlayerQuests::ReceiveGroupState(unknown_type newGroupID, unknown_type newGroupRank)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, newGroupID, newGroupRank);
}
Boolean PlayerQuests::removeGroupInvite(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348C)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::changeRank(unknown_type newRank)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348D)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newRank);
}
void PlayerQuests::askJoinGroupInvite(unknown_type steamID, unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348E)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, newGroupID);
}
void PlayerQuests::ServerAssignToMainGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600348F)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Boolean PlayerQuests::ServerAssignToGroup(unknown_type newGroupID, unknown_type newRank, Boolean bypassMemberLimit)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003490)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Boolean)>();
return _method(this, newGroupID, newRank, bypassMemberLimit);
}
void PlayerQuests::ReceiveAcceptGroupInvitationRequest(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003491)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::SendAcceptGroupInvitation(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003492)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::askIgnoreGroupInvite(unknown_type steamID, unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003493)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, newGroupID);
}
void PlayerQuests::ReceiveDeclineGroupInvitationRequest(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003494)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::SendDeclineGroupInvitation(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003495)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::leaveGroup(Boolean force)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003496)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean)>();
return _method(this, force);
}
void PlayerQuests::askLeaveGroup(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003497)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, steamID);
}
void PlayerQuests::ReceiveLeaveGroupRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003498)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::sendLeaveGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003499)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::deleteGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349A)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::askDeleteGroup(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349B)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, steamID);
}
void PlayerQuests::ReceiveDeleteGroupRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349C)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::sendDeleteGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349D)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::askCreateGroup(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349E)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, steamID);
}
void PlayerQuests::ReceiveCreateGroupRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600349F)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::sendCreateGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::addGroupInvite(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::tellAddGroupInvite(unknown_type steamID, unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, newGroupID);
}
void PlayerQuests::ReceiveAddGroupInviteClient(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::ReceiveRemoveGroupInviteClient(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
Boolean PlayerQuests::ServerRemoveGroupInvitation(unknown_type groupId)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A5)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, groupId);
}
void PlayerQuests::sendAddGroupInvite(unknown_type newGroupID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, newGroupID);
}
void PlayerQuests::askAddGroupInvite(unknown_type steamID, unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A7)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, targetID);
}
void PlayerQuests::ReceiveAddGroupInviteRequest(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::sendAskAddGroupInvite(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034A9)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::askPromote(unknown_type steamID, unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, targetID);
}
void PlayerQuests::ReceivePromoteRequest(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::sendPromote(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AC)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::askDemote(unknown_type steamID, unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AD)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, targetID);
}
void PlayerQuests::ReceiveDemoteRequest(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AE)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::sendDemote(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034AF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::askKickFromGroup(unknown_type steamID, unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, steamID, targetID);
}
void PlayerQuests::ReceiveKickFromGroup(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::sendKickFromGroup(unknown_type targetID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, targetID);
}
void PlayerQuests::askRenameGroup(unknown_type steamID, String* newName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, String*)>();
return _method(this, steamID, newName);
}
void PlayerQuests::ReceiveRenameGroupRequest(String* newName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, String*)>();
return _method(this, newName);
}
void PlayerQuests::sendRenameGroup(String* newName)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B5)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, String*)>();
return _method(this, newName);
}
void PlayerQuests::setFlag(UInt16 id, Int16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Int16)>();
return _method(this, id, value);
}
Boolean PlayerQuests::getFlag(UInt16 id, unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B7)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, UInt16, unknown_type)>();
return _method(this, id, value);
}
void PlayerQuests::removeFlag(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
Int32 PlayerQuests::countValidQuests()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034B9)->GetCallable<Int32(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::AddQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::addQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
Boolean PlayerQuests::getQuest(UInt16 id, unknown_type quest)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BC)->GetCallable<Boolean(*)(SDG::Unturned::PlayerQuests*, UInt16, unknown_type)>();
return _method(this, id, quest);
}
unknown_type PlayerQuests::GetQuestStatus(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BD)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
unknown_type PlayerQuests::getQuestStatus(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BE)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::RemoveQuest(unknown_type questAsset, Boolean wasCompleted)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034BF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean)>();
return _method(this, questAsset, wasCompleted);
}
void PlayerQuests::removeQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::trackHordeKill()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::trackZombieKill(unknown_type zombie)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, zombie);
}
void PlayerQuests::trackObjectKill(unknown_type objectGuid, Byte nav)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Byte)>();
return _method(this, objectGuid, nav);
}
void PlayerQuests::trackTreeKill(unknown_type treeGuid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, treeGuid);
}
void PlayerQuests::trackAnimalKill(unknown_type animal)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C5)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, animal);
}
void PlayerQuests::trackPlayerKill(SDG::Unturned::Player* enemyPlayer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, SDG::Unturned::Player*)>();
return _method(this, enemyPlayer);
}
void PlayerQuests::CompleteQuest(unknown_type questAsset, Boolean ignoreNPC)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C7)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean)>();
return _method(this, questAsset, ignoreNPC);
}
void PlayerQuests::completeQuest(UInt16 id, Boolean ignoreNPC)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Boolean)>();
return _method(this, id, ignoreNPC);
}
void PlayerQuests::askSellToVendor(unknown_type steamID, UInt16 id, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034C9)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16, Byte)>();
return _method(this, steamID, id, index);
}
void PlayerQuests::ReceiveSellToVendor(unknown_type context, unknown_type assetGuid, Byte index, Boolean asManyAsPossible)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte, Boolean)>();
return _method(this, context, assetGuid, index, asManyAsPossible);
}
void PlayerQuests::sendSellToVendor(unknown_type assetGuid, Byte index, Boolean asManyAsPossible)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Byte, Boolean)>();
return _method(this, assetGuid, index, asManyAsPossible);
}
void PlayerQuests::sendSellToVendor1(UInt16 id, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CC)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Byte)>();
return _method(this, id, index);
}
void PlayerQuests::askBuyFromVendor(unknown_type steamID, UInt16 id, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CD)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16, Byte)>();
return _method(this, steamID, id, index);
}
void PlayerQuests::ReceiveBuyFromVendor(unknown_type context, unknown_type assetGuid, Byte index, Boolean asManyAsPossible)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CE)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte, Boolean)>();
return _method(this, context, assetGuid, index, asManyAsPossible);
}
void PlayerQuests::sendBuyFromVendor(unknown_type assetGuid, Byte index, Boolean asManyAsPossible)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034CF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Byte, Boolean)>();
return _method(this, assetGuid, index, asManyAsPossible);
}
void PlayerQuests::sendBuyFromVendor1(UInt16 id, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Byte)>();
return _method(this, id, index);
}
void PlayerQuests::tellSetFlag(unknown_type steamID, UInt16 id, Int16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16, Int16)>();
return _method(this, steamID, id, value);
}
void PlayerQuests::ReceiveSetFlag(UInt16 id, Int16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Int16)>();
return _method(this, id, value);
}
void PlayerQuests::sendSetFlag(UInt16 id, Int16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16, Int16)>();
return _method(this, id, value);
}
void PlayerQuests::tellRemoveFlag(unknown_type steamID, UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16)>();
return _method(this, steamID, id);
}
void PlayerQuests::ReceiveRemoveFlag(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D5)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::sendRemoveFlag(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::tellAddQuest(unknown_type steamID, UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D7)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16)>();
return _method(this, steamID, id);
}
void PlayerQuests::ReceiveAddQuest(unknown_type assetGuid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, assetGuid);
}
void PlayerQuests::ServerAddQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034D9)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::sendAddQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::tellRemoveQuest(unknown_type steamID, UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16)>();
return _method(this, steamID, id);
}
void PlayerQuests::ReceiveRemoveQuest(unknown_type assetGuid, Boolean wasCompleted)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DC)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean)>();
return _method(this, assetGuid, wasCompleted);
}
void PlayerQuests::ServerRemoveQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DD)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::ServerRemoveQuest1(unknown_type questAsset, Boolean wasCompleted)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DE)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Boolean)>();
return _method(this, questAsset, wasCompleted);
}
void PlayerQuests::sendRemoveQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034DF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::TrackQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::trackQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::askTrackQuest(unknown_type steamID, UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16)>();
return _method(this, steamID, id);
}
void PlayerQuests::ReceiveTrackQuest(unknown_type assetGuid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, assetGuid);
}
void PlayerQuests::ClientTrackQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::sendTrackQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E5)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::AbandonQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::abandonQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E7)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::askAbandonQuest(unknown_type steamID, UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, UInt16)>();
return _method(this, steamID, id);
}
void PlayerQuests::ReceiveAbandonQuestRequest(unknown_type assetGuid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034E9)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, assetGuid);
}
void PlayerQuests::ClientAbandonQuest(unknown_type questAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034EA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, questAsset);
}
void PlayerQuests::sendAbandonQuest(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034EB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt16)>();
return _method(this, id);
}
void PlayerQuests::ReceiveChooseDialogueResponseRequest(unknown_type context, unknown_type assetGuid, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034EC)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte)>();
return _method(this, context, assetGuid, index);
}
void PlayerQuests::ReceiveChooseDefaultNextDialogueRequest(unknown_type context, unknown_type assetGuid, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034ED)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte)>();
return _method(this, context, assetGuid, index);
}
void PlayerQuests::ClientChooseDialogueResponse(unknown_type assetGuid, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034EE)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Byte)>();
return _method(this, assetGuid, index);
}
void PlayerQuests::ClientChooseNextDialogue(unknown_type assetGuid, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034EF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, Byte)>();
return _method(this, assetGuid, index);
}
void PlayerQuests::tellQuests(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F0)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, steamID);
}
void PlayerQuests::ReceiveQuests(unknown_type context)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F1)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, context);
}
void PlayerQuests::askQuests(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F2)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, steamID);
}
void PlayerQuests::WriteAllState(unknown_type writer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F3)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, writer);
}
void PlayerQuests::WriteOwnerState(unknown_type writer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F4)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, writer);
}
void PlayerQuests::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F5)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void PlayerQuests::SendInitialPlayerState1(List<unknown_type>* transportConnections)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F6)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, List<unknown_type>*)>();
return _method(this, transportConnections);
}
void PlayerQuests::OnPlayerNavChanged(SDG::Unturned::PlayerMovement* sender, Byte oldNav, Byte newNav)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F7)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, SDG::Unturned::PlayerMovement*, Byte, Byte)>();
return _method(this, sender, oldNav, newNav);
}
void PlayerQuests::onExperienceUpdated(UInt32 experience)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F8)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, UInt32)>();
return _method(this, experience);
}
void PlayerQuests::onReputationUpdated(Int32 reputation)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034F9)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Int32)>();
return _method(this, reputation);
}
void PlayerQuests::onInventoryStateUpdated()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FA)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::onTimeOfDayChanged()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FB)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::ReceiveTalkWithNpcResponse(unknown_type context, unknown_type targetNpcNetId, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FC)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, unknown_type, Byte, Boolean)>();
return _method(this, context, targetNpcNetId, dialogueAssetGuid, messageIndex, hasNextDialogue);
}
void PlayerQuests::ApproveTalkWithNpcRequest(unknown_type targetNpc, unknown_type rootDialogueAsset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FD)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type)>();
return _method(this, targetNpc, rootDialogueAsset);
}
void PlayerQuests::ClearActiveNpc()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FE)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::ReceiveOpenDialogue(unknown_type context, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060034FF)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, Byte, Boolean)>();
return _method(this, context, dialogueAssetGuid, messageIndex, hasNextDialogue);
}
void PlayerQuests::ReceiveOpenVendor(unknown_type context, unknown_type vendorAssetGuid, unknown_type dialogueAssetGuid, Byte messageIndex, Boolean hasNextDialogue)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003500)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type, unknown_type, unknown_type, Byte, Boolean)>();
return _method(this, context, vendorAssetGuid, dialogueAssetGuid, messageIndex, hasNextDialogue);
}
unknown_type PlayerQuests::GetOrCreateDelayedQuestRewards()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003501)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::StopDelayedQuestRewards()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003502)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::OnLifeUpdated(Boolean isDead)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003503)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, Boolean)>();
return _method(this, isDead);
}
void PlayerQuests::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003504)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::Start()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003505)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003506)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::load()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003507)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::loadMainGroup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003508)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
Int32 PlayerQuests::FindIndexOfQuest(unknown_type asset)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003509)->GetCallable<Int32(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, asset);
}
void PlayerQuests::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600350A)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*)>();
return _method(this);
}
void PlayerQuests::SendInitialPlayerStateb__273_0(unknown_type writer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600350D)->GetCallable<void(*)(SDG::Unturned::PlayerQuests*, unknown_type)>();
return _method(this, writer);
}
};
}
}
