#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* SteamPlayer::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "SteamPlayer");
return _class;
}
uintptr_t SteamPlayer::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::SteamPlayer* SteamPlayer::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::SteamPlayer>();
}
Runtime::MonoVTable* SteamPlayer::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool SteamPlayer::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(SteamPlayer);
// --------------- START CLASS MEMBERS --------------- //
unknown_type SteamPlayer::OnSteamAuthTicketForWebApiReceived()
{
static uintptr_t _offset = MonoClass()->GetField("OnSteamAuthTicketForWebApiReceived")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SteamPlayer::OnSteamAuthTicketForWebApiReceived_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnSteamAuthTicketForWebApiReceived")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SteamPlayer::_netId()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_netId")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::_netId_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_netId")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG::Unturned::SteamPlayerID* SteamPlayer::_playerID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_playerID")->GetOffset();
return Memory::read<SDG::Unturned::SteamPlayerID*>(THIS_PTR + _offset);
}
void SteamPlayer::_playerID_Set(SDG::Unturned::SteamPlayerID* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_playerID")->GetOffset();
Memory::write<SDG::Unturned::SteamPlayerID*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* SteamPlayer::_model()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_model")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void SteamPlayer::_model_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_model")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
SDG::Unturned::Player* SteamPlayer::_player()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_player")->GetOffset();
return Memory::read<SDG::Unturned::Player*>(THIS_PTR + _offset);
}
void SteamPlayer::_player_Set(SDG::Unturned::Player* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_player")->GetOffset();
Memory::write<SDG::Unturned::Player*>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::_isPro()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isPro")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::_isPro_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isPro")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::_channel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_channel")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::_channel_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_channel")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::battlEyeId()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("battlEyeId")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::battlEyeId_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("battlEyeId")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::_isAdmin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isAdmin")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::_isAdmin_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isAdmin")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Array<Single>* SteamPlayer::pings()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pings")->GetOffset();
return Memory::read<Array<Single>*>(THIS_PTR + _offset);
}
void SteamPlayer::pings_Set(Array<Single>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pings")->GetOffset();
Memory::write<Array<Single>*>(value, THIS_PTR + _offset);
}
Single SteamPlayer::_ping()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_ping")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::_ping_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_ping")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single SteamPlayer::_joined()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_joined")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::_joined_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_joined")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Byte SteamPlayer::face()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("face")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void SteamPlayer::face_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("face")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte SteamPlayer::_hair()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hair")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void SteamPlayer::_hair_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hair")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte SteamPlayer::_beard()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_beard")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void SteamPlayer::_beard_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_beard")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::_skin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skin")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::_skin_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skin")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::_color()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_color")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::_color_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_color")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::_markerColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerColor")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::_markerColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_markerColor")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::_hand()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hand")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::_hand_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hand")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::shirtItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shirtItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::shirtItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shirtItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::pantsItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pantsItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::pantsItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pantsItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::hatItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hatItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::hatItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hatItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::backpackItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("backpackItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::backpackItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("backpackItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::vestItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vestItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::vestItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vestItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::maskItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maskItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::maskItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maskItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 SteamPlayer::glassesItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("glassesItem")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamPlayer::glassesItem_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("glassesItem")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Array<Int32>* SteamPlayer::skinItems()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinItems")->GetOffset();
return Memory::read<Array<Int32>*>(THIS_PTR + _offset);
}
void SteamPlayer::skinItems_Set(Array<Int32>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinItems")->GetOffset();
Memory::write<Array<Int32>*>(value, THIS_PTR + _offset);
}
Array<String*>* SteamPlayer::skinTags()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinTags")->GetOffset();
return Memory::read<Array<String*>*>(THIS_PTR + _offset);
}
void SteamPlayer::skinTags_Set(Array<String*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinTags")->GetOffset();
Memory::write<Array<String*>*>(value, THIS_PTR + _offset);
}
Array<String*>* SteamPlayer::skinDynamicProps()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinDynamicProps")->GetOffset();
return Memory::read<Array<String*>*>(THIS_PTR + _offset);
}
void SteamPlayer::skinDynamicProps_Set(Array<String*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinDynamicProps")->GetOffset();
Memory::write<Array<String*>*>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::itemSkins()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemSkins")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::itemSkins_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("itemSkins")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::vehicleSkins()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vehicleSkins")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::vehicleSkins_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vehicleSkins")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::modifiedItems()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("modifiedItems")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::modifiedItems_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("modifiedItems")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::submittedModifiedItems()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("submittedModifiedItems")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::submittedModifiedItems_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("submittedModifiedItems")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::_skillset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skillset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::_skillset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skillset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
String* SteamPlayer::_language()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_language")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void SteamPlayer::_language_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_language")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::lobbyID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<lobbyID>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::lobbyID_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<lobbyID>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Single SteamPlayer::timeLastPacketWasReceivedFromClient()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("timeLastPacketWasReceivedFromClient")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::timeLastPacketWasReceivedFromClient_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("timeLastPacketWasReceivedFromClient")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single SteamPlayer::timeLastPingRequestWasSentToClient()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("timeLastPingRequestWasSentToClient")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::timeLastPingRequestWasSentToClient_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("timeLastPingRequestWasSentToClient")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single SteamPlayer::lastChat()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastChat")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::lastChat_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastChat")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single SteamPlayer::nextVote()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("nextVote")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::nextVote_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("nextVote")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::isVoiceChatLocallyMuted()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isVoiceChatLocallyMuted")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::isVoiceChatLocallyMuted_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isVoiceChatLocallyMuted")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::isTextChatLocallyMuted()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTextChatLocallyMuted")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::isTextChatLocallyMuted_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isTextChatLocallyMuted")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean SteamPlayer::IsLocalServerHost()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<IsLocalServerHost>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamPlayer::IsLocalServerHost_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<IsLocalServerHost>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single SteamPlayer::rpcCredits()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcCredits")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::rpcCredits_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcCredits")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single SteamPlayer::lastReceivedPingRequestRealtime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastReceivedPingRequestRealtime")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void SteamPlayer::lastReceivedPingRequestRealtime_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastReceivedPingRequestRealtime")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Array<Single>* SteamPlayer::rpcAllowedTimes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcAllowedTimes")->GetOffset();
return Memory::read<Array<Single>*>(THIS_PTR + _offset);
}
void SteamPlayer::rpcAllowedTimes_Set(Array<Single>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcAllowedTimes")->GetOffset();
Memory::write<Array<Single>*>(value, THIS_PTR + _offset);
}
Array<Int32>* SteamPlayer::rpcHitCount()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcHitCount")->GetOffset();
return Memory::read<Array<Int32>*>(THIS_PTR + _offset);
}
void SteamPlayer::rpcHitCount_Set(Array<Int32>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rpcHitCount")->GetOffset();
Memory::write<Array<Int32>*>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::clientPlatform()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientPlatform")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::clientPlatform_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientPlatform")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::SendGetSteamAuthTicketForWebApiRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendGetSteamAuthTicketForWebApiRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SteamPlayer::SendGetSteamAuthTicketForWebApiRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendGetSteamAuthTicketForWebApiRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SteamPlayer::SendGetSteamAuthTicketForWebApiResponse()
{
static uintptr_t _offset = MonoClass()->GetField("SendGetSteamAuthTicketForWebApiResponse")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SteamPlayer::SendGetSteamAuthTicketForWebApiResponse_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendGetSteamAuthTicketForWebApiResponse")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SteamPlayer::validatedGuids()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("validatedGuids")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::validatedGuids_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("validatedGuids")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::requestedSteamAuthTicketIdentities()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("requestedSteamAuthTicketIdentities")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::requestedSteamAuthTicketIdentities_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("requestedSteamAuthTicketIdentities")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::receivedSteamAuthTicketIdentities()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("receivedSteamAuthTicketIdentities")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayer::receivedSteamAuthTicketIdentities_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("receivedSteamAuthTicketIdentities")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayer::GetNetId()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003824)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
SDG::Unturned::SteamPlayerID* SteamPlayer::get_playerID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003825)->GetCallable<SDG::Unturned::SteamPlayerID*(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
UnityEngine::Transform* SteamPlayer::get_model()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003826)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
SDG::Unturned::Player* SteamPlayer::get_player()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003827)->GetCallable<SDG::Unturned::Player*(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Boolean SteamPlayer::get_isPro()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003828)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Int32 SteamPlayer::get_channel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003829)->GetCallable<Int32(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Boolean SteamPlayer::get_isAdmin()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382A)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
void SteamPlayer::set_isAdmin(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382B)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, Boolean)>();
return _method(this, value);
}
Single SteamPlayer::get_ping()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382C)->GetCallable<Single(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Single SteamPlayer::get_joined()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382D)->GetCallable<Single(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Byte SteamPlayer::get_hair()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382E)->GetCallable<Byte(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Byte SteamPlayer::get_beard()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600382F)->GetCallable<Byte(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::get_skin()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003830)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::get_color()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003831)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::get_markerColor()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003832)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Boolean SteamPlayer::get_IsLeftHanded()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003833)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
Boolean SteamPlayer::get_hand()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003834)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::get_skillset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003835)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
String* SteamPlayer::get_language()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003836)->GetCallable<String*(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::get_lobbyID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003837)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
void SteamPlayer::set_lobbyID(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003838)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, unknown_type)>();
return _method(this, value);
}
Boolean SteamPlayer::get_IsLocalServerHost()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003839)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
void SteamPlayer::set_IsLocalServerHost(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383A)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, Boolean)>();
return _method(this, value);
}
void SteamPlayer::SetVoiceChatLocallyMuted(Boolean newVoiceChatLocallyMuted)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383B)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, Boolean)>();
return _method(this, newVoiceChatLocallyMuted);
}
void SteamPlayer::SetTextChatLocallyMuted(Boolean newTextChatLocallyMuted)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383C)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, Boolean)>();
return _method(this, newTextChatLocallyMuted);
}
Boolean SteamPlayer::getItemSkinItemDefID(UInt16 itemID, unknown_type itemdefid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383D)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type)>();
return _method(this, itemID, itemdefid);
}
Boolean SteamPlayer::getVehicleSkinItemDefID(UInt16 vehicleID, unknown_type itemdefid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383E)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type)>();
return _method(this, vehicleID, itemdefid);
}
Boolean SteamPlayer::getTagsAndDynamicPropsForItem(Int32 item, unknown_type tags, unknown_type dynamic_props)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600383F)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, Int32, unknown_type, unknown_type)>();
return _method(this, item, tags, dynamic_props);
}
Boolean SteamPlayer::getDynamicEconDetails(UInt16 itemID, unknown_type details)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003840)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type)>();
return _method(this, itemID, details);
}
Boolean SteamPlayer::getDynamicEconDetailsForItemDef(Int32 itemdefid, unknown_type details)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003841)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, Int32, unknown_type)>();
return _method(this, itemdefid, details);
}
Boolean SteamPlayer::getStatTrackerValue(UInt16 itemID, unknown_type type, unknown_type kills)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003842)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type, unknown_type)>();
return _method(this, itemID, type, kills);
}
Boolean SteamPlayer::getRagdollEffect(UInt16 itemID, unknown_type effect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003843)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type)>();
return _method(this, itemID, effect);
}
UInt16 SteamPlayer::getParticleEffectForItemDef(Int32 itemdefid)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003844)->GetCallable<UInt16(*)(SDG::Unturned::SteamPlayer*, Int32)>();
return _method(this, itemdefid);
}
void SteamPlayer::incrementStatTrackerValue(UInt16 itemID, unknown_type stat)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003845)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, UInt16, unknown_type)>();
return _method(this, itemID, stat);
}
void SteamPlayer::commitModifiedDynamicProps()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003846)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
void SteamPlayer::lag(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003847)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, Single)>();
return _method(this, value);
}
Boolean SteamPlayer::isMemberOfSameGroupAs(SDG::Unturned::Player* other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003848)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, SDG::Unturned::Player*)>();
return _method(this, other);
}
Boolean SteamPlayer::isMemberOfSameGroupAs1(SDG::Unturned::SteamPlayer* other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003849)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, SDG::Unturned::SteamPlayer*)>();
return _method(this, other);
}
Boolean SteamPlayer::getIPv4Address(unknown_type address)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384A)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, unknown_type)>();
return _method(this, address);
}
UInt32 SteamPlayer::getIPv4AddressOrZero()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384B)->GetCallable<UInt32(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
unknown_type SteamPlayer::getAddress()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384C)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
String* SteamPlayer::getAddressString(Boolean withPort)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384D)->GetCallable<String*(*)(SDG::Unturned::SteamPlayer*, Boolean)>();
return _method(this, withPort);
}
Boolean SteamPlayer::Equals(SDG::Unturned::SteamPlayer* otherClient)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384E)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, SDG::Unturned::SteamPlayer*)>();
return _method(this, otherClient);
}
Boolean SteamPlayer::Equals1(unknown_type obj)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600384F)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayer*, unknown_type)>();
return _method(this, obj);
}
Int32 SteamPlayer::GetHashCode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003850)->GetCallable<Int32(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
String* SteamPlayer::GetLocalDisplayName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003851)->GetCallable<String*(*)(SDG::Unturned::SteamPlayer*)>();
return _method(this);
}
void SteamPlayer::RequestSteamAuthTicketForWebApi(String* identity)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003852)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, String*)>();
return _method(this, identity);
}
void SteamPlayer::ReceiveGetSteamAuthTicketForWebApiRequest(String* identity)
{
static auto _method = MonoClass()->GetMethod(0x06003853)->GetCallable<void(*)(String*)>();
return _method(identity);
}
void SteamPlayer::ReceiveGetSteamAuthTicketForWebApiResponse(unknown_type context)
{
static auto _method = MonoClass()->GetMethod(0x06003854)->GetCallable<void(*)(unknown_type)>();
return _method(context);
}
};
}
}
