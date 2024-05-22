#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* Provider::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "Provider");
return _class;
}
uintptr_t Provider::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::Provider* Provider::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::Provider>();
}
Runtime::MonoVTable* Provider::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Provider::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Provider);
// --------------- START CLASS MEMBERS --------------- //
String* Provider::STEAM_IC()
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_IC")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::STEAM_IC_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_IC")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
String* Provider::STEAM_DC()
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_DC")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::STEAM_DC_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_DC")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
unknown_type Provider::APP_ID()
{
static uintptr_t _offset = MonoClass()->GetField("APP_ID")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::APP_ID_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("APP_ID")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::PRO_ID()
{
static uintptr_t _offset = MonoClass()->GetField("PRO_ID")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::PRO_ID_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("PRO_ID")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
String* Provider::APP_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("<APP_VERSION>k__BackingField")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::APP_VERSION_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("<APP_VERSION>k__BackingField")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
UInt32 Provider::APP_VERSION_PACKED()
{
static uintptr_t _offset = MonoClass()->GetField("<APP_VERSION_PACKED>k__BackingField")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::APP_VERSION_PACKED_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("<APP_VERSION_PACKED>k__BackingField")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
String* Provider::APP_NAME()
{
static uintptr_t _offset = MonoClass()->GetField("APP_NAME")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::APP_NAME_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("APP_NAME")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
String* Provider::APP_AUTHOR()
{
static uintptr_t _offset = MonoClass()->GetField("APP_AUTHOR")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::APP_AUTHOR_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("APP_AUTHOR")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
Int32 Provider::CLIENT_TIMEOUT()
{
static uintptr_t _offset = MonoClass()->GetField("CLIENT_TIMEOUT")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::CLIENT_TIMEOUT_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("CLIENT_TIMEOUT")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Single Provider::PING_REQUEST_INTERVAL()
{
static uintptr_t _offset = MonoClass()->GetField("PING_REQUEST_INTERVAL")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::PING_REQUEST_INTERVAL_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("PING_REQUEST_INTERVAL")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Boolean Provider::isCapturingScreenshot()
{
static uintptr_t _offset = MonoClass()->GetField("isCapturingScreenshot")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isCapturingScreenshot_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isCapturingScreenshot")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::screenshotBlitMaterial()
{
static uintptr_t _offset = MonoClass()->GetField("screenshotBlitMaterial")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::screenshotBlitMaterial_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("screenshotBlitMaterial")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::screenshotRequestedCallback()
{
static uintptr_t _offset = MonoClass()->GetField("screenshotRequestedCallback")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::screenshotRequestedCallback_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("screenshotRequestedCallback")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
String* Provider::privateLanguage()
{
static uintptr_t _offset = MonoClass()->GetField("privateLanguage")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::privateLanguage_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("privateLanguage")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
Boolean Provider::languageIsEnglish()
{
static uintptr_t _offset = MonoClass()->GetField("languageIsEnglish")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::languageIsEnglish_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("languageIsEnglish")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
String* Provider::_path()
{
static uintptr_t _offset = MonoClass()->GetField("_path")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::_path_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("_path")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
String* Provider::localizationRoot()
{
static uintptr_t _offset = MonoClass()->GetField("<localizationRoot>k__BackingField")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::localizationRoot_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("<localizationRoot>k__BackingField")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
unknown_type Provider::localization()
{
static uintptr_t _offset = MonoClass()->GetField("localization")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::localization_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("localization")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
List<String*>* Provider::streamerNames()
{
static uintptr_t _offset = MonoClass()->GetField("<streamerNames>k__BackingField")->GetOffset();
return Memory::read<List<String*>*>(StaticInstance() + _offset);
}
void Provider::streamerNames_Set(List<String*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("<streamerNames>k__BackingField")->GetOffset();
Memory::write<List<String*>*>(value, StaticInstance() + _offset);
}
IntPtr Provider::battlEyeClientHandle()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientHandle")->GetOffset();
return Memory::read<IntPtr>(StaticInstance() + _offset);
}
void Provider::battlEyeClientHandle_Set(IntPtr value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientHandle")->GetOffset();
Memory::write<IntPtr>(value, StaticInstance() + _offset);
}
unknown_type Provider::battlEyeClientInitData()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientInitData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::battlEyeClientInitData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientInitData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::battlEyeClientRunData()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientRunData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::battlEyeClientRunData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeClientRunData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::battlEyeHasRequiredRestart()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeHasRequiredRestart")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::battlEyeHasRequiredRestart_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeHasRequiredRestart")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::battlEyeBufferSize()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeBufferSize")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::battlEyeBufferSize_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeBufferSize")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
IntPtr Provider::battlEyeServerHandle()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerHandle")->GetOffset();
return Memory::read<IntPtr>(StaticInstance() + _offset);
}
void Provider::battlEyeServerHandle_Set(IntPtr value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerHandle")->GetOffset();
Memory::write<IntPtr>(value, StaticInstance() + _offset);
}
unknown_type Provider::battlEyeServerInitData()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerInitData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::battlEyeServerInitData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerInitData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::battlEyeServerRunData()
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerRunData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::battlEyeServerRunData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("battlEyeServerRunData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onBattlEyeKick()
{
static uintptr_t _offset = MonoClass()->GetField("onBattlEyeKick")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onBattlEyeKick_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onBattlEyeKick")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
UInt32 Provider::_bytesSent()
{
static uintptr_t _offset = MonoClass()->GetField("_bytesSent")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_bytesSent_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_bytesSent")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::_bytesReceived()
{
static uintptr_t _offset = MonoClass()->GetField("_bytesReceived")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_bytesReceived_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_bytesReceived")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::_packetsSent()
{
static uintptr_t _offset = MonoClass()->GetField("_packetsSent")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_packetsSent_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_packetsSent")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::_packetsReceived()
{
static uintptr_t _offset = MonoClass()->GetField("_packetsReceived")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_packetsReceived_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_packetsReceived")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
unknown_type Provider::_currentServerAdvertisement()
{
static uintptr_t _offset = MonoClass()->GetField("_currentServerAdvertisement")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_currentServerAdvertisement_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_currentServerAdvertisement")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_currentServerConnectParameters()
{
static uintptr_t _offset = MonoClass()->GetField("_currentServerConnectParameters")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_currentServerConnectParameters_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_currentServerConnectParameters")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_server()
{
static uintptr_t _offset = MonoClass()->GetField("_server")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_server_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_server")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_client()
{
static uintptr_t _offset = MonoClass()->GetField("_client")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_client_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_client")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_user()
{
static uintptr_t _offset = MonoClass()->GetField("_user")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_user_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_user")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Array<Byte>* Provider::_clientHash()
{
static uintptr_t _offset = MonoClass()->GetField("_clientHash")->GetOffset();
return Memory::read<Array<Byte>*>(StaticInstance() + _offset);
}
void Provider::_clientHash_Set(Array<Byte>* value)
{
static uintptr_t _offset = MonoClass()->GetField("_clientHash")->GetOffset();
Memory::write<Array<Byte>*>(value, StaticInstance() + _offset);
}
String* Provider::_clientName()
{
static uintptr_t _offset = MonoClass()->GetField("_clientName")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::_clientName_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("_clientName")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
List<SDG::Unturned::SteamPlayer*>* Provider::_clients()
{
static uintptr_t _offset = MonoClass()->GetField("_clients")->GetOffset();
return Memory::read<List<SDG::Unturned::SteamPlayer*>*>(StaticInstance() + _offset);
}
void Provider::_clients_Set(List<SDG::Unturned::SteamPlayer*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("_clients")->GetOffset();
Memory::write<List<SDG::Unturned::SteamPlayer*>*>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::pending()
{
static uintptr_t _offset = MonoClass()->GetField("pending")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::pending_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("pending")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
Boolean Provider::_isServer()
{
static uintptr_t _offset = MonoClass()->GetField("_isServer")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::_isServer_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("_isServer")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::_isClient()
{
static uintptr_t _offset = MonoClass()->GetField("_isClient")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::_isClient_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("_isClient")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::_isPro()
{
static uintptr_t _offset = MonoClass()->GetField("_isPro")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::_isPro_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("_isPro")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::_isConnected()
{
static uintptr_t _offset = MonoClass()->GetField("_isConnected")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::_isConnected_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("_isConnected")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isWaitingForWorkshopResponse()
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForWorkshopResponse")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isWaitingForWorkshopResponse_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForWorkshopResponse")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isWaitingForAuthenticationResponse()
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForAuthenticationResponse")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isWaitingForAuthenticationResponse_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForAuthenticationResponse")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Double Provider::sentAuthenticationRequestTime()
{
static uintptr_t _offset = MonoClass()->GetField("sentAuthenticationRequestTime")->GetOffset();
return Memory::read<Double>(StaticInstance() + _offset);
}
void Provider::sentAuthenticationRequestTime_Set(Double value)
{
static uintptr_t _offset = MonoClass()->GetField("sentAuthenticationRequestTime")->GetOffset();
Memory::write<Double>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::waitingForExpectedWorkshopItems()
{
static uintptr_t _offset = MonoClass()->GetField("waitingForExpectedWorkshopItems")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::waitingForExpectedWorkshopItems_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("waitingForExpectedWorkshopItems")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
unknown_type Provider::authorityHoliday()
{
static uintptr_t _offset = MonoClass()->GetField("authorityHoliday")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::authorityHoliday_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("authorityHoliday")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::currentServerWorkshopResponse()
{
static uintptr_t _offset = MonoClass()->GetField("currentServerWorkshopResponse")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::currentServerWorkshopResponse_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("currentServerWorkshopResponse")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
List<UInt64>* Provider::_serverWorkshopFileIDs()
{
static uintptr_t _offset = MonoClass()->GetField("_serverWorkshopFileIDs")->GetOffset();
return Memory::read<List<UInt64>*>(StaticInstance() + _offset);
}
void Provider::_serverWorkshopFileIDs_Set(List<UInt64>* value)
{
static uintptr_t _offset = MonoClass()->GetField("_serverWorkshopFileIDs")->GetOffset();
Memory::write<List<UInt64>*>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::serverRequiredWorkshopFiles()
{
static uintptr_t _offset = MonoClass()->GetField("serverRequiredWorkshopFiles")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::serverRequiredWorkshopFiles_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("serverRequiredWorkshopFiles")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
Boolean Provider::isLoadingUGC()
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingUGC")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isLoadingUGC_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingUGC")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isLoadingInventory()
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingInventory")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isLoadingInventory_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isLoadingInventory")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Int32 Provider::nextPlayerChannelId()
{
static uintptr_t _offset = MonoClass()->GetField("nextPlayerChannelId")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::nextPlayerChannelId_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("nextPlayerChannelId")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
unknown_type Provider::_connectionFailureInfo()
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureInfo")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_connectionFailureInfo_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureInfo")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
String* Provider::_connectionFailureReason()
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureReason")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::_connectionFailureReason_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureReason")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
UInt32 Provider::_connectionFailureDuration()
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureDuration")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_connectionFailureDuration_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_connectionFailureDuration")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
List<SDG::Unturned::SteamChannel*>* Provider::_receivers()
{
static uintptr_t _offset = MonoClass()->GetField("_receivers")->GetOffset();
return Memory::read<List<SDG::Unturned::SteamChannel*>*>(StaticInstance() + _offset);
}
void Provider::_receivers_Set(List<SDG::Unturned::SteamChannel*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("_receivers")->GetOffset();
Memory::write<List<SDG::Unturned::SteamChannel*>*>(value, StaticInstance() + _offset);
}
Array<Byte>* Provider::buffer()
{
static uintptr_t _offset = MonoClass()->GetField("buffer")->GetOffset();
return Memory::read<Array<Byte>*>(StaticInstance() + _offset);
}
void Provider::buffer_Set(Array<Byte>* value)
{
static uintptr_t _offset = MonoClass()->GetField("buffer")->GetOffset();
Memory::write<Array<Byte>*>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::critMods()
{
static uintptr_t _offset = MonoClass()->GetField("critMods")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::critMods_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("critMods")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
unknown_type Provider::modBuilder()
{
static uintptr_t _offset = MonoClass()->GetField("modBuilder")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::modBuilder_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("modBuilder")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Int32 Provider::nextBattlEyePlayerId()
{
static uintptr_t _offset = MonoClass()->GetField("nextBattlEyePlayerId")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::nextBattlEyePlayerId_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("nextBattlEyePlayerId")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
unknown_type Provider::onLoginSpawning()
{
static uintptr_t _offset = MonoClass()->GetField("onLoginSpawning")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onLoginSpawning_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onLoginSpawning")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::isWaitingForConnectResponse()
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForConnectResponse")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isWaitingForConnectResponse_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isWaitingForConnectResponse")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Single Provider::sentConnectRequestTime()
{
static uintptr_t _offset = MonoClass()->GetField("sentConnectRequestTime")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::sentConnectRequestTime_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("sentConnectRequestTime")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Boolean Provider::canCurrentlyHandleClientTransportFailure()
{
static uintptr_t _offset = MonoClass()->GetField("canCurrentlyHandleClientTransportFailure")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::canCurrentlyHandleClientTransportFailure_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("canCurrentlyHandleClientTransportFailure")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::hasPendingClientTransportFailure()
{
static uintptr_t _offset = MonoClass()->GetField("hasPendingClientTransportFailure")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::hasPendingClientTransportFailure_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("hasPendingClientTransportFailure")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
String* Provider::pendingClientTransportFailureMessage()
{
static uintptr_t _offset = MonoClass()->GetField("pendingClientTransportFailureMessage")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::pendingClientTransportFailureMessage_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("pendingClientTransportFailureMessage")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
unknown_type Provider::MAX_SKINS_LENGTH()
{
static uintptr_t _offset = MonoClass()->GetField("MAX_SKINS_LENGTH")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::MAX_SKINS_LENGTH_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("MAX_SKINS_LENGTH")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::clientTransport()
{
static uintptr_t _offset = MonoClass()->GetField("clientTransport")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::clientTransport_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("clientTransport")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::serverTransport()
{
static uintptr_t _offset = MonoClass()->GetField("serverTransport")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::serverTransport_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("serverTransport")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onCommenceShutdown()
{
static uintptr_t _offset = MonoClass()->GetField("onCommenceShutdown")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onCommenceShutdown_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onCommenceShutdown")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Int32 Provider::countShutdownTimer()
{
static uintptr_t _offset = MonoClass()->GetField("countShutdownTimer")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::countShutdownTimer_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("countShutdownTimer")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
String* Provider::shutdownMessage()
{
static uintptr_t _offset = MonoClass()->GetField("shutdownMessage")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::shutdownMessage_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("shutdownMessage")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
Single Provider::lastTimerMessage()
{
static uintptr_t _offset = MonoClass()->GetField("lastTimerMessage")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::lastTimerMessage_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("lastTimerMessage")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Boolean Provider::didServerShutdownTimerReachZero()
{
static uintptr_t _offset = MonoClass()->GetField("didServerShutdownTimerReachZero")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::didServerShutdownTimerReachZero_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("didServerShutdownTimerReachZero")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isVacActive()
{
static uintptr_t _offset = MonoClass()->GetField("isVacActive")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isVacActive_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isVacActive")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isBattlEyeActive()
{
static uintptr_t _offset = MonoClass()->GetField("isBattlEyeActive")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isBattlEyeActive_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isBattlEyeActive")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::hasSetIsBattlEyeActive()
{
static uintptr_t _offset = MonoClass()->GetField("hasSetIsBattlEyeActive")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::hasSetIsBattlEyeActive_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("hasSetIsBattlEyeActive")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isServerConnectedToSteam()
{
static uintptr_t _offset = MonoClass()->GetField("isServerConnectedToSteam")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isServerConnectedToSteam_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isServerConnectedToSteam")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::autoShutdownManager()
{
static uintptr_t _offset = MonoClass()->GetField("autoShutdownManager")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::autoShutdownManager_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("autoShutdownManager")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::dswUpdateMonitor()
{
static uintptr_t _offset = MonoClass()->GetField("dswUpdateMonitor")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::dswUpdateMonitor_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("dswUpdateMonitor")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::isDedicatedUGCInstalled()
{
static uintptr_t _offset = MonoClass()->GetField("isDedicatedUGCInstalled")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isDedicatedUGCInstalled_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isDedicatedUGCInstalled")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Int32 Provider::STEAM_KEYVALUE_MAX_VALUE_LENGTH()
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_KEYVALUE_MAX_VALUE_LENGTH")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::STEAM_KEYVALUE_MAX_VALUE_LENGTH_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_KEYVALUE_MAX_VALUE_LENGTH")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
unknown_type Provider::onServerWritingPacket()
{
static uintptr_t _offset = MonoClass()->GetField("onServerWritingPacket")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerWritingPacket_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerWritingPacket")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::workshopRequests()
{
static uintptr_t _offset = MonoClass()->GetField("workshopRequests")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::workshopRequests_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("workshopRequests")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::cachedWorkshopResponses()
{
static uintptr_t _offset = MonoClass()->GetField("cachedWorkshopResponses")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::cachedWorkshopResponses_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("cachedWorkshopResponses")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::netIgnoredSteamIDs()
{
static uintptr_t _offset = MonoClass()->GetField("netIgnoredSteamIDs")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::netIgnoredSteamIDs_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("netIgnoredSteamIDs")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
unknown_type Provider::_constNetEvents()
{
static uintptr_t _offset = MonoClass()->GetField("_constNetEvents")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_constNetEvents_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_constNetEvents")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onServerReadingPacket()
{
static uintptr_t _offset = MonoClass()->GetField("onServerReadingPacket")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerReadingPacket_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerReadingPacket")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
List<SDG::Unturned::SteamPlayer*>* Provider::clientsWithBadConnecion()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientsWithBadConnecion")->GetOffset();
return Memory::read<List<SDG::Unturned::SteamPlayer*>*>(THIS_PTR + _offset);
}
void Provider::clientsWithBadConnecion_Set(List<SDG::Unturned::SteamPlayer*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientsWithBadConnecion")->GetOffset();
Memory::write<List<SDG::Unturned::SteamPlayer*>*>(value, THIS_PTR + _offset);
}
unknown_type Provider::onServerConnected()
{
static uintptr_t _offset = MonoClass()->GetField("onServerConnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerConnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerConnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onServerDisconnected()
{
static uintptr_t _offset = MonoClass()->GetField("onServerDisconnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerDisconnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerDisconnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onServerHosted()
{
static uintptr_t _offset = MonoClass()->GetField("onServerHosted")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerHosted_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerHosted")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onServerShutdown()
{
static uintptr_t _offset = MonoClass()->GetField("onServerShutdown")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onServerShutdown_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onServerShutdown")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::p2pSessionConnectFail()
{
static uintptr_t _offset = MonoClass()->GetField("p2pSessionConnectFail")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::p2pSessionConnectFail_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("p2pSessionConnectFail")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onCheckValid()
{
static uintptr_t _offset = MonoClass()->GetField("onCheckValid")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onCheckValid_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onCheckValid")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onCheckValidWithExplanation()
{
static uintptr_t _offset = MonoClass()->GetField("onCheckValidWithExplanation")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onCheckValidWithExplanation_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onCheckValidWithExplanation")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onCheckBanStatus()
{
static uintptr_t _offset = MonoClass()->GetField("onCheckBanStatus")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onCheckBanStatus_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onCheckBanStatus")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onCheckBanStatusWithHWID()
{
static uintptr_t _offset = MonoClass()->GetField("onCheckBanStatusWithHWID")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onCheckBanStatusWithHWID_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onCheckBanStatusWithHWID")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onBanPlayerRequested()
{
static uintptr_t _offset = MonoClass()->GetField("onBanPlayerRequested")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onBanPlayerRequested_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onBanPlayerRequested")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onBanPlayerRequestedV2()
{
static uintptr_t _offset = MonoClass()->GetField("onBanPlayerRequestedV2")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onBanPlayerRequestedV2_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onBanPlayerRequestedV2")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onUnbanPlayerRequested()
{
static uintptr_t _offset = MonoClass()->GetField("onUnbanPlayerRequested")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onUnbanPlayerRequested_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onUnbanPlayerRequested")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::validateAuthTicketResponse()
{
static uintptr_t _offset = MonoClass()->GetField("validateAuthTicketResponse")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::validateAuthTicketResponse_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("validateAuthTicketResponse")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::clientGroupStatus()
{
static uintptr_t _offset = MonoClass()->GetField("clientGroupStatus")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::clientGroupStatus_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("clientGroupStatus")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::clMaxPlayersLimit()
{
static uintptr_t _offset = MonoClass()->GetField("clMaxPlayersLimit")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::clMaxPlayersLimit_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("clMaxPlayersLimit")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Byte Provider::_maxPlayers()
{
static uintptr_t _offset = MonoClass()->GetField("_maxPlayers")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void Provider::_maxPlayers_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("_maxPlayers")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte Provider::queueSize()
{
static uintptr_t _offset = MonoClass()->GetField("queueSize")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void Provider::queueSize_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("queueSize")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte Provider::_queuePosition()
{
static uintptr_t _offset = MonoClass()->GetField("_queuePosition")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void Provider::_queuePosition_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("_queuePosition")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
unknown_type Provider::onQueuePositionUpdated()
{
static uintptr_t _offset = MonoClass()->GetField("onQueuePositionUpdated")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onQueuePositionUpdated_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onQueuePositionUpdated")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
String* Provider::_serverName()
{
static uintptr_t _offset = MonoClass()->GetField("_serverName")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::_serverName_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("_serverName")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
UInt32 Provider::ip()
{
static uintptr_t _offset = MonoClass()->GetField("ip")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::ip_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("ip")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
String* Provider::bindAddress()
{
static uintptr_t _offset = MonoClass()->GetField("bindAddress")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::bindAddress_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("bindAddress")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
UInt16 Provider::port()
{
static uintptr_t _offset = MonoClass()->GetField("port")->GetOffset();
return Memory::read<UInt16>(StaticInstance() + _offset);
}
void Provider::port_Set(UInt16 value)
{
static uintptr_t _offset = MonoClass()->GetField("port")->GetOffset();
Memory::write<UInt16>(value, StaticInstance() + _offset);
}
Array<Byte>* Provider::_serverPasswordHash()
{
static uintptr_t _offset = MonoClass()->GetField("_serverPasswordHash")->GetOffset();
return Memory::read<Array<Byte>*>(StaticInstance() + _offset);
}
void Provider::_serverPasswordHash_Set(Array<Byte>* value)
{
static uintptr_t _offset = MonoClass()->GetField("_serverPasswordHash")->GetOffset();
Memory::write<Array<Byte>*>(value, StaticInstance() + _offset);
}
String* Provider::_serverPassword()
{
static uintptr_t _offset = MonoClass()->GetField("_serverPassword")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::_serverPassword_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("_serverPassword")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
String* Provider::map()
{
static uintptr_t _offset = MonoClass()->GetField("map")->GetOffset();
return Memory::read<String*>(StaticInstance() + _offset);
}
void Provider::map_Set(String* value)
{
static uintptr_t _offset = MonoClass()->GetField("map")->GetOffset();
Memory::write<String*>(value, StaticInstance() + _offset);
}
Boolean Provider::isPvP()
{
static uintptr_t _offset = MonoClass()->GetField("isPvP")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isPvP_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isPvP")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::isWhitelisted()
{
static uintptr_t _offset = MonoClass()->GetField("isWhitelisted")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isWhitelisted_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isWhitelisted")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::hideAdmins()
{
static uintptr_t _offset = MonoClass()->GetField("hideAdmins")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::hideAdmins_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("hideAdmins")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::hasCheats()
{
static uintptr_t _offset = MonoClass()->GetField("hasCheats")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::hasCheats_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("hasCheats")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::filterName()
{
static uintptr_t _offset = MonoClass()->GetField("filterName")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::filterName_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("filterName")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::mode()
{
static uintptr_t _offset = MonoClass()->GetField("mode")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::mode_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("mode")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::isGold()
{
static uintptr_t _offset = MonoClass()->GetField("isGold")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isGold_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("isGold")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::gameMode()
{
static uintptr_t _offset = MonoClass()->GetField("gameMode")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::gameMode_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("gameMode")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::cameraMode()
{
static uintptr_t _offset = MonoClass()->GetField("cameraMode")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::cameraMode_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("cameraMode")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_statusData()
{
static uintptr_t _offset = MonoClass()->GetField("_statusData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_statusData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_statusData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_preferenceData()
{
static uintptr_t _offset = MonoClass()->GetField("_preferenceData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_preferenceData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_preferenceData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_configData()
{
static uintptr_t _offset = MonoClass()->GetField("_configData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_configData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_configData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::_modeConfigData()
{
static uintptr_t _offset = MonoClass()->GetField("_modeConfigData")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::_modeConfigData_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("_modeConfigData")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onRejectingPlayer()
{
static uintptr_t _offset = MonoClass()->GetField("onRejectingPlayer")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onRejectingPlayer_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onRejectingPlayer")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Int32 Provider::clientsKickedForTransportConnectionFailureCount()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientsKickedForTransportConnectionFailureCount")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void Provider::clientsKickedForTransportConnectionFailureCount_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("clientsKickedForTransportConnectionFailureCount")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
UInt32 Provider::STEAM_FAVORITE_FLAG_FAVORITE()
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_FAVORITE_FLAG_FAVORITE")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::STEAM_FAVORITE_FLAG_FAVORITE_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_FAVORITE_FLAG_FAVORITE")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::STEAM_FAVORITE_FLAG_HISTORY()
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_FAVORITE_FLAG_HISTORY")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::STEAM_FAVORITE_FLAG_HISTORY_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("STEAM_FAVORITE_FLAG_HISTORY")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
List<unknown_type>* Provider::cachedFavorites()
{
static uintptr_t _offset = MonoClass()->GetField("cachedFavorites")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void Provider::cachedFavorites_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("cachedFavorites")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
unknown_type Provider::onClientConnected()
{
static uintptr_t _offset = MonoClass()->GetField("onClientConnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onClientConnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onClientConnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onClientDisconnected()
{
static uintptr_t _offset = MonoClass()->GetField("onClientDisconnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onClientDisconnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onClientDisconnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onEnemyConnected()
{
static uintptr_t _offset = MonoClass()->GetField("onEnemyConnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onEnemyConnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onEnemyConnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onEnemyDisconnected()
{
static uintptr_t _offset = MonoClass()->GetField("onEnemyDisconnected")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onEnemyDisconnected_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onEnemyDisconnected")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::personaStateChange()
{
static uintptr_t _offset = MonoClass()->GetField("personaStateChange")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::personaStateChange_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("personaStateChange")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::getTicketForWebApiResponseCallback()
{
static uintptr_t _offset = MonoClass()->GetField("getTicketForWebApiResponseCallback")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::getTicketForWebApiResponseCallback_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("getTicketForWebApiResponseCallback")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::gameServerChangeRequested()
{
static uintptr_t _offset = MonoClass()->GetField("gameServerChangeRequested")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::gameServerChangeRequested_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("gameServerChangeRequested")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::gameRichPresenceJoinRequested()
{
static uintptr_t _offset = MonoClass()->GetField("gameRichPresenceJoinRequested")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::gameRichPresenceJoinRequested_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("gameRichPresenceJoinRequested")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::ticketHandle()
{
static uintptr_t _offset = MonoClass()->GetField("ticketHandle")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::ticketHandle_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("ticketHandle")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::pluginTicketHandles()
{
static uintptr_t _offset = MonoClass()->GetField("pluginTicketHandles")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::pluginTicketHandles_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("pluginTicketHandles")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Single Provider::lastPingRequestTime()
{
static uintptr_t _offset = MonoClass()->GetField("lastPingRequestTime")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::lastPingRequestTime_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("lastPingRequestTime")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::lastQueueNotificationTime()
{
static uintptr_t _offset = MonoClass()->GetField("lastQueueNotificationTime")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::lastQueueNotificationTime_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("lastQueueNotificationTime")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::timeLastPacketWasReceivedFromServer()
{
static uintptr_t _offset = MonoClass()->GetField("<timeLastPacketWasReceivedFromServer>k__BackingField")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::timeLastPacketWasReceivedFromServer_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("<timeLastPacketWasReceivedFromServer>k__BackingField")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::timeLastPingRequestWasSentToServer()
{
static uintptr_t _offset = MonoClass()->GetField("timeLastPingRequestWasSentToServer")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::timeLastPingRequestWasSentToServer_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("timeLastPingRequestWasSentToServer")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::EPSILON()
{
static uintptr_t _offset = MonoClass()->GetField("EPSILON")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::EPSILON_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("EPSILON")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::UPDATE_TIME()
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_TIME")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::UPDATE_TIME_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_TIME")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::UPDATE_DELAY()
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_DELAY")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::UPDATE_DELAY_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_DELAY")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::UPDATE_DISTANCE()
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_DISTANCE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::UPDATE_DISTANCE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("UPDATE_DISTANCE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
UInt32 Provider::UPDATES()
{
static uintptr_t _offset = MonoClass()->GetField("UPDATES")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::UPDATES_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("UPDATES")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
Single Provider::LERP()
{
static uintptr_t _offset = MonoClass()->GetField("LERP")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::LERP_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("LERP")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single Provider::INTERP_SPEED()
{
static uintptr_t _offset = MonoClass()->GetField("INTERP_SPEED")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::INTERP_SPEED_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("INTERP_SPEED")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Array<Single>* Provider::pings()
{
static uintptr_t _offset = MonoClass()->GetField("pings")->GetOffset();
return Memory::read<Array<Single>*>(StaticInstance() + _offset);
}
void Provider::pings_Set(Array<Single>* value)
{
static uintptr_t _offset = MonoClass()->GetField("pings")->GetOffset();
Memory::write<Array<Single>*>(value, StaticInstance() + _offset);
}
Single Provider::_ping()
{
static uintptr_t _offset = MonoClass()->GetField("_ping")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::_ping_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("_ping")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
SDG::Unturned::Provider* Provider::steam()
{
static uintptr_t _offset = MonoClass()->GetField("steam")->GetOffset();
return Memory::read<SDG::Unturned::Provider*>(StaticInstance() + _offset);
}
void Provider::steam_Set(SDG::Unturned::Provider* value)
{
static uintptr_t _offset = MonoClass()->GetField("steam")->GetOffset();
Memory::write<SDG::Unturned::Provider*>(value, StaticInstance() + _offset);
}
unknown_type Provider::provider()
{
static uintptr_t _offset = MonoClass()->GetField("<provider>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::provider_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("<provider>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::_isInitialized()
{
static uintptr_t _offset = MonoClass()->GetField("_isInitialized")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::_isInitialized_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("_isInitialized")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
UInt32 Provider::timeOffset()
{
static uintptr_t _offset = MonoClass()->GetField("timeOffset")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::timeOffset_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("timeOffset")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::_time()
{
static uintptr_t _offset = MonoClass()->GetField("_time")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::_time_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("_time")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
UInt32 Provider::initialBackendRealtimeSeconds()
{
static uintptr_t _offset = MonoClass()->GetField("initialBackendRealtimeSeconds")->GetOffset();
return Memory::read<UInt32>(StaticInstance() + _offset);
}
void Provider::initialBackendRealtimeSeconds_Set(UInt32 value)
{
static uintptr_t _offset = MonoClass()->GetField("initialBackendRealtimeSeconds")->GetOffset();
Memory::write<UInt32>(value, StaticInstance() + _offset);
}
Single Provider::initialLocalRealtime()
{
static uintptr_t _offset = MonoClass()->GetField("initialLocalRealtime")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::initialLocalRealtime_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("initialLocalRealtime")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type Provider::unixEpochDateTime()
{
static uintptr_t _offset = MonoClass()->GetField("unixEpochDateTime")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::unixEpochDateTime_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("unixEpochDateTime")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::onBackendRealtimeAvailable()
{
static uintptr_t _offset = MonoClass()->GetField("onBackendRealtimeAvailable")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::onBackendRealtimeAvailable_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onBackendRealtimeAvailable")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::apiWarningMessageHook()
{
static uintptr_t _offset = MonoClass()->GetField("apiWarningMessageHook")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::apiWarningMessageHook_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("apiWarningMessageHook")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Int32 Provider::debugUpdates()
{
static uintptr_t _offset = MonoClass()->GetField("debugUpdates")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::debugUpdates_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("debugUpdates")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 Provider::debugUPS()
{
static uintptr_t _offset = MonoClass()->GetField("debugUPS")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::debugUPS_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("debugUPS")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Single Provider::debugLastUpdate()
{
static uintptr_t _offset = MonoClass()->GetField("debugLastUpdate")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::debugLastUpdate_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("debugLastUpdate")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Int32 Provider::debugTicks()
{
static uintptr_t _offset = MonoClass()->GetField("debugTicks")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::debugTicks_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("debugTicks")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 Provider::debugTPS()
{
static uintptr_t _offset = MonoClass()->GetField("debugTPS")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void Provider::debugTPS_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("debugTPS")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Single Provider::debugLastTick()
{
static uintptr_t _offset = MonoClass()->GetField("debugLastTick")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void Provider::debugLastTick_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("debugLastTick")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type Provider::downloadedIconCache()
{
static uintptr_t _offset = MonoClass()->GetField("downloadedIconCache")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::downloadedIconCache_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("downloadedIconCache")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::pendingCachableIconRequests()
{
static uintptr_t _offset = MonoClass()->GetField("pendingCachableIconRequests")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::pendingCachableIconRequests_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("pendingCachableIconRequests")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Provider::allowWebRequests()
{
static uintptr_t _offset = MonoClass()->GetField("allowWebRequests")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::allowWebRequests_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("allowWebRequests")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean Provider::isApplicationQuitting()
{
static uintptr_t _offset = MonoClass()->GetField("<isApplicationQuitting>k__BackingField")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::isApplicationQuitting_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("<isApplicationQuitting>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean Provider::wasQuitGameCalled()
{
static uintptr_t _offset = MonoClass()->GetField("wasQuitGameCalled")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void Provider::wasQuitGameCalled_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("wasQuitGameCalled")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type Provider::shouldCheckForGoldUpgrade()
{
static uintptr_t _offset = MonoClass()->GetField("shouldCheckForGoldUpgrade")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Provider::shouldCheckForGoldUpgrade_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("shouldCheckForGoldUpgrade")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
String* Provider::get_APP_VERSION()
{
static auto _method = MonoClass()->GetMethod(0x06003675)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_APP_VERSION(String* value)
{
static auto _method = MonoClass()->GetMethod(0x06003676)->GetCallable<void(*)(String*)>();
return _method(value);
}
UInt32 Provider::get_APP_VERSION_PACKED()
{
static auto _method = MonoClass()->GetMethod(0x06003677)->GetCallable<UInt32(*)()>();
return _method();
}
void Provider::set_APP_VERSION_PACKED(UInt32 value)
{
static auto _method = MonoClass()->GetMethod(0x06003678)->GetCallable<void(*)(UInt32)>();
return _method(value);
}
unknown_type Provider::CaptureScreenshot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003679)->GetCallable<unknown_type(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::RequestScreenshot()
{
static auto _method = MonoClass()->GetMethod(0x0600367A)->GetCallable<void(*)()>();
return _method();
}
void Provider::OnSteamScreenshotRequested(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x0600367B)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
String* Provider::get_language()
{
static auto _method = MonoClass()->GetMethod(0x0600367C)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_language(String* value)
{
static auto _method = MonoClass()->GetMethod(0x0600367D)->GetCallable<void(*)(String*)>();
return _method(value);
}
String* Provider::get_path()
{
static auto _method = MonoClass()->GetMethod(0x0600367E)->GetCallable<String*(*)()>();
return _method();
}
String* Provider::get_localizationRoot()
{
static auto _method = MonoClass()->GetMethod(0x0600367F)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_localizationRoot(String* value)
{
static auto _method = MonoClass()->GetMethod(0x06003680)->GetCallable<void(*)(String*)>();
return _method(value);
}
List<String*>* Provider::get_streamerNames()
{
static auto _method = MonoClass()->GetMethod(0x06003681)->GetCallable<List<String*>*(*)()>();
return _method();
}
void Provider::set_streamerNames(List<String*>* value)
{
static auto _method = MonoClass()->GetMethod(0x06003682)->GetCallable<void(*)(List<String*>*)>();
return _method(value);
}
void Provider::battlEyeClientPrintMessage(String* message)
{
static auto _method = MonoClass()->GetMethod(0x06003683)->GetCallable<void(*)(String*)>();
return _method(message);
}
void Provider::battlEyeClientRequestRestart(Int32 reason)
{
static auto _method = MonoClass()->GetMethod(0x06003684)->GetCallable<void(*)(Int32)>();
return _method(reason);
}
void Provider::battlEyeClientSendPacket(IntPtr packetHandle, Int32 length)
{
static auto _method = MonoClass()->GetMethod(0x06003685)->GetCallable<void(*)(IntPtr, Int32)>();
return _method(packetHandle, length);
}
void Provider::battlEyeServerPrintMessage(String* message)
{
static auto _method = MonoClass()->GetMethod(0x06003686)->GetCallable<void(*)(String*)>();
return _method(message);
}
void Provider::add_onBattlEyeKick(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003687)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::remove_onBattlEyeKick(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003688)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::broadcastBattlEyeKick(SDG::Unturned::SteamPlayer* client, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x06003689)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*, String*)>();
return _method(client, reason);
}
void Provider::battlEyeServerKickPlayer(Int32 playerID, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x0600368A)->GetCallable<void(*)(Int32, String*)>();
return _method(playerID, reason);
}
void Provider::battlEyeServerSendPacket(Int32 playerID, IntPtr packetHandle, Int32 length)
{
static auto _method = MonoClass()->GetMethod(0x0600368B)->GetCallable<void(*)(Int32, IntPtr, Int32)>();
return _method(playerID, packetHandle, length);
}
void Provider::updateRichPresence()
{
static auto _method = MonoClass()->GetMethod(0x0600368C)->GetCallable<void(*)()>();
return _method();
}
void Provider::updateSteamRichPresence()
{
static auto _method = MonoClass()->GetMethod(0x0600368D)->GetCallable<void(*)()>();
return _method();
}
UInt32 Provider::get_bytesSent()
{
static auto _method = MonoClass()->GetMethod(0x0600368E)->GetCallable<UInt32(*)()>();
return _method();
}
UInt32 Provider::get_bytesReceived()
{
static auto _method = MonoClass()->GetMethod(0x0600368F)->GetCallable<UInt32(*)()>();
return _method();
}
UInt32 Provider::get_packetsSent()
{
static auto _method = MonoClass()->GetMethod(0x06003690)->GetCallable<UInt32(*)()>();
return _method();
}
UInt32 Provider::get_packetsReceived()
{
static auto _method = MonoClass()->GetMethod(0x06003691)->GetCallable<UInt32(*)()>();
return _method();
}
unknown_type Provider::get_CurrentServerAdvertisement()
{
static auto _method = MonoClass()->GetMethod(0x06003692)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_CurrentServerConnectParameters()
{
static auto _method = MonoClass()->GetMethod(0x06003693)->GetCallable<unknown_type(*)()>();
return _method();
}
Boolean Provider::get_IsVacActiveOnCurrentServer()
{
static auto _method = MonoClass()->GetMethod(0x06003694)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_IsBattlEyeActiveOnCurrentServer()
{
static auto _method = MonoClass()->GetMethod(0x06003695)->GetCallable<Boolean(*)()>();
return _method();
}
unknown_type Provider::get_server()
{
static auto _method = MonoClass()->GetMethod(0x06003696)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_client()
{
static auto _method = MonoClass()->GetMethod(0x06003697)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_user()
{
static auto _method = MonoClass()->GetMethod(0x06003698)->GetCallable<unknown_type(*)()>();
return _method();
}
Array<Byte>* Provider::get_clientHash()
{
static auto _method = MonoClass()->GetMethod(0x06003699)->GetCallable<Array<Byte>*(*)()>();
return _method();
}
String* Provider::get_clientName()
{
static auto _method = MonoClass()->GetMethod(0x0600369A)->GetCallable<String*(*)()>();
return _method();
}
List<SDG::Unturned::SteamPlayer*>* Provider::get_clients()
{
static auto _method = MonoClass()->GetMethod(0x0600369B)->GetCallable<List<SDG::Unturned::SteamPlayer*>*(*)()>();
return _method();
}
unknown_type Provider::GatherClientConnections()
{
static auto _method = MonoClass()->GetMethod(0x0600369C)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::EnumerateClients()
{
static auto _method = MonoClass()->GetMethod(0x0600369D)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::GatherClientConnectionsMatchingPredicate(unknown_type predicate)
{
static auto _method = MonoClass()->GetMethod(0x0600369E)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(predicate);
}
unknown_type Provider::EnumerateClients_Predicate(unknown_type predicate)
{
static auto _method = MonoClass()->GetMethod(0x0600369F)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(predicate);
}
unknown_type Provider::GatherClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius)
{
static auto _method = MonoClass()->GetMethod(0x060036A0)->GetCallable<unknown_type(*)(UnityEngine::Vector3, Single)>();
return _method(position, radius);
}
unknown_type Provider::EnumerateClients_WithinSphere(UnityEngine::Vector3 position, Single radius)
{
static auto _method = MonoClass()->GetMethod(0x060036A1)->GetCallable<unknown_type(*)(UnityEngine::Vector3, Single)>();
return _method(position, radius);
}
unknown_type Provider::GatherRemoteClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius)
{
static auto _method = MonoClass()->GetMethod(0x060036A2)->GetCallable<unknown_type(*)(UnityEngine::Vector3, Single)>();
return _method(position, radius);
}
unknown_type Provider::EnumerateClients_RemoteWithinSphere(UnityEngine::Vector3 position, Single radius)
{
static auto _method = MonoClass()->GetMethod(0x060036A3)->GetCallable<unknown_type(*)(UnityEngine::Vector3, Single)>();
return _method(position, radius);
}
unknown_type Provider::GatherRemoteClientConnections()
{
static auto _method = MonoClass()->GetMethod(0x060036A4)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::EnumerateClients_Remote()
{
static auto _method = MonoClass()->GetMethod(0x060036A5)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::GatherRemoteClientConnectionsMatchingPredicate(unknown_type predicate)
{
static auto _method = MonoClass()->GetMethod(0x060036A6)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(predicate);
}
unknown_type Provider::EnumerateClients_RemotePredicate(unknown_type predicate)
{
static auto _method = MonoClass()->GetMethod(0x060036A7)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(predicate);
}
List<SDG::Unturned::SteamPlayer*>* Provider::get_players()
{
static auto _method = MonoClass()->GetMethod(0x060036A8)->GetCallable<List<SDG::Unturned::SteamPlayer*>*(*)()>();
return _method();
}
Boolean Provider::get_isServer()
{
static auto _method = MonoClass()->GetMethod(0x060036A9)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_isClient()
{
static auto _method = MonoClass()->GetMethod(0x060036AA)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_isPro()
{
static auto _method = MonoClass()->GetMethod(0x060036AB)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_isConnected()
{
static auto _method = MonoClass()->GetMethod(0x060036AC)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::doServerItemsMatchAdvertisement(List<unknown_type>* pendingWorkshopItems)
{
static auto _method = MonoClass()->GetMethod(0x060036AD)->GetCallable<Boolean(*)(List<unknown_type>*)>();
return _method(pendingWorkshopItems);
}
void Provider::receiveWorkshopResponse(unknown_type response)
{
static auto _method = MonoClass()->GetMethod(0x060036AE)->GetCallable<void(*)(unknown_type)>();
return _method(response);
}
List<UInt64>* Provider::getServerWorkshopFileIDs()
{
static auto _method = MonoClass()->GetMethod(0x060036AF)->GetCallable<List<UInt64>*(*)()>();
return _method();
}
void Provider::registerServerUsingWorkshopFileId(UInt64 id)
{
static auto _method = MonoClass()->GetMethod(0x060036B0)->GetCallable<void(*)(UInt64)>();
return _method(id);
}
void Provider::registerServerUsingWorkshopFileId1(UInt64 id, UInt32 timestamp)
{
static auto _method = MonoClass()->GetMethod(0x060036B1)->GetCallable<void(*)(UInt64, UInt32)>();
return _method(id, timestamp);
}
Boolean Provider::get_isLoading()
{
static auto _method = MonoClass()->GetMethod(0x060036B2)->GetCallable<Boolean(*)()>();
return _method();
}
Int32 Provider::get_channels()
{
static auto _method = MonoClass()->GetMethod(0x060036B3)->GetCallable<Int32(*)()>();
return _method();
}
Int32 Provider::allocPlayerChannelId()
{
static auto _method = MonoClass()->GetMethod(0x060036B4)->GetCallable<Int32(*)()>();
return _method();
}
unknown_type Provider::get_connectionFailureInfo()
{
static auto _method = MonoClass()->GetMethod(0x060036B5)->GetCallable<unknown_type(*)()>();
return _method();
}
void Provider::set_connectionFailureInfo(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060036B6)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
String* Provider::get_connectionFailureReason()
{
static auto _method = MonoClass()->GetMethod(0x060036B7)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_connectionFailureReason(String* value)
{
static auto _method = MonoClass()->GetMethod(0x060036B8)->GetCallable<void(*)(String*)>();
return _method(value);
}
UInt32 Provider::get_connectionFailureDuration()
{
static auto _method = MonoClass()->GetMethod(0x060036B9)->GetCallable<UInt32(*)()>();
return _method();
}
List<SDG::Unturned::SteamChannel*>* Provider::get_receivers()
{
static auto _method = MonoClass()->GetMethod(0x060036BA)->GetCallable<List<SDG::Unturned::SteamChannel*>*(*)()>();
return _method();
}
Int32 Provider::allocBattlEyePlayerId()
{
static auto _method = MonoClass()->GetMethod(0x060036BB)->GetCallable<Int32(*)()>();
return _method();
}
void Provider::resetConnectionFailure()
{
static auto _method = MonoClass()->GetMethod(0x060036BC)->GetCallable<void(*)()>();
return _method();
}
void Provider::LogNetChannel(String* format, Array<unknown_type>* args)
{
static auto _method = MonoClass()->GetMethod(0x060036BD)->GetCallable<void(*)(String*, Array<unknown_type>*)>();
return _method(format, args);
}
void Provider::openChannel(SDG::Unturned::SteamChannel* receiver)
{
static auto _method = MonoClass()->GetMethod(0x060036BE)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(receiver);
}
void Provider::closeChannel(SDG::Unturned::SteamChannel* receiver)
{
static auto _method = MonoClass()->GetMethod(0x060036BF)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(receiver);
}
SDG::Unturned::SteamChannel* Provider::findChannelComponent(Int32 id)
{
static auto _method = MonoClass()->GetMethod(0x060036C0)->GetCallable<SDG::Unturned::SteamChannel*(*)(Int32)>();
return _method(id);
}
Boolean Provider::get_hasRoomForNewConnection()
{
static auto _method = MonoClass()->GetMethod(0x060036C1)->GetCallable<Boolean(*)()>();
return _method();
}
unknown_type Provider::findPendingPlayer(unknown_type transportConnection)
{
static auto _method = MonoClass()->GetMethod(0x060036C2)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(transportConnection);
}
unknown_type Provider::findPendingPlayerBySteamId(unknown_type steamId)
{
static auto _method = MonoClass()->GetMethod(0x060036C3)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(steamId);
}
SDG::Unturned::SteamPlayer* Provider::findPlayer(unknown_type transportConnection)
{
static auto _method = MonoClass()->GetMethod(0x060036C4)->GetCallable<SDG::Unturned::SteamPlayer*(*)(unknown_type)>();
return _method(transportConnection);
}
unknown_type Provider::findTransportConnection(unknown_type steamId)
{
static auto _method = MonoClass()->GetMethod(0x060036C5)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(steamId);
}
unknown_type Provider::findTransportConnectionSteamId(unknown_type transportConnection)
{
static auto _method = MonoClass()->GetMethod(0x060036C6)->GetCallable<unknown_type(*)(unknown_type)>();
return _method(transportConnection);
}
unknown_type Provider::ClaimNetIdBlockForNewPlayer()
{
static auto _method = MonoClass()->GetMethod(0x060036C7)->GetCallable<unknown_type(*)()>();
return _method();
}
SDG::Unturned::SteamPlayer* Provider::addPlayer(unknown_type transportConnection, unknown_type netId, SDG::Unturned::SteamPlayerID* playerID, UnityEngine::Vector3 point, Byte angle, Boolean isPro, Boolean isAdmin, Int32 channel, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID, unknown_type clientPlatform)
{
static auto _method = MonoClass()->GetMethod(0x060036C8)->GetCallable<SDG::Unturned::SteamPlayer*(*)(unknown_type, unknown_type, SDG::Unturned::SteamPlayerID*, UnityEngine::Vector3, Byte, Boolean, Boolean, Int32, Byte, Byte, Byte, unknown_type, unknown_type, unknown_type, Boolean, Int32, Int32, Int32, Int32, Int32, Int32, Int32, Array<Int32>*, Array<String*>*, Array<String*>*, unknown_type, String*, unknown_type, unknown_type)>();
return _method(transportConnection, netId, playerID, point, angle, isPro, isAdmin, channel, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID, clientPlatform);
}
void Provider::removePlayer(Byte index)
{
static auto _method = MonoClass()->GetMethod(0x060036C9)->GetCallable<void(*)(Byte)>();
return _method(index);
}
void Provider::replicateRemovePlayer(unknown_type skipSteamID, Byte removalIndex)
{
static auto _method = MonoClass()->GetMethod(0x060036CA)->GetCallable<void(*)(unknown_type, Byte)>();
return _method(skipSteamID, removalIndex);
}
void Provider::verifyNextPlayerInQueue()
{
static auto _method = MonoClass()->GetMethod(0x060036CB)->GetCallable<void(*)()>();
return _method();
}
Boolean Provider::isUnreliable(unknown_type type)
{
static auto _method = MonoClass()->GetMethod(0x060036CC)->GetCallable<Boolean(*)(unknown_type)>();
return _method(type);
}
Boolean Provider::isChunk(unknown_type packet)
{
static auto _method = MonoClass()->GetMethod(0x060036CD)->GetCallable<Boolean(*)(unknown_type)>();
return _method(packet);
}
Boolean Provider::isUpdate(unknown_type packet)
{
static auto _method = MonoClass()->GetMethod(0x060036CE)->GetCallable<Boolean(*)(unknown_type)>();
return _method(packet);
}
void Provider::resetChannels()
{
static auto _method = MonoClass()->GetMethod(0x060036CF)->GetCallable<void(*)()>();
return _method();
}
void Provider::loadPlayerSpawn(SDG::Unturned::SteamPlayerID* playerID, UnityEngine::Vector3& point, unknown_type angle, unknown_type initialStance)
{
static auto _method = MonoClass()->GetMethod(0x060036D0)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, UnityEngine::Vector3&, unknown_type, unknown_type)>();
return _method(playerID, point, angle, initialStance);
}
void Provider::ResetClientTransportFailure()
{
static auto _method = MonoClass()->GetMethod(0x060036D1)->GetCallable<void(*)()>();
return _method();
}
void Provider::TriggerDisconnectFromClientTransportFailure()
{
static auto _method = MonoClass()->GetMethod(0x060036D2)->GetCallable<void(*)()>();
return _method();
}
void Provider::onLevelLoaded(Int32 level)
{
static auto _method = MonoClass()->GetMethod(0x060036D3)->GetCallable<void(*)(Int32)>();
return _method(level);
}
void Provider::connect(unknown_type parameters, unknown_type advertisement, List<unknown_type>* expectedWorkshopItems)
{
static auto _method = MonoClass()->GetMethod(0x060036D4)->GetCallable<void(*)(unknown_type, unknown_type, List<unknown_type>*)>();
return _method(parameters, advertisement, expectedWorkshopItems);
}
void Provider::onClientTransportReady()
{
static auto _method = MonoClass()->GetMethod(0x060036D5)->GetCallable<void(*)()>();
return _method();
}
void Provider::onClientTransportFailure(String* message)
{
static auto _method = MonoClass()->GetMethod(0x060036D6)->GetCallable<void(*)(String*)>();
return _method(message);
}
Boolean Provider::CompareClientAndServerWorkshopFileTimestamps()
{
static auto _method = MonoClass()->GetMethod(0x060036D7)->GetCallable<Boolean(*)()>();
return _method();
}
void Provider::launch()
{
static auto _method = MonoClass()->GetMethod(0x060036D8)->GetCallable<void(*)()>();
return _method();
}
void Provider::loadGameMode()
{
static auto _method = MonoClass()->GetMethod(0x060036D9)->GetCallable<void(*)()>();
return _method();
}
void Provider::unloadGameMode()
{
static auto _method = MonoClass()->GetMethod(0x060036DA)->GetCallable<void(*)()>();
return _method();
}
void Provider::singleplayer(unknown_type singleplayerMode, Boolean singleplayerCheats)
{
static auto _method = MonoClass()->GetMethod(0x060036DB)->GetCallable<void(*)(unknown_type, Boolean)>();
return _method(singleplayerMode, singleplayerCheats);
}
void Provider::host()
{
static auto _method = MonoClass()->GetMethod(0x060036DC)->GetCallable<void(*)()>();
return _method();
}
void Provider::add_onCommenceShutdown(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060036DD)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::remove_onCommenceShutdown(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x060036DE)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::broadcastCommenceShutdown()
{
static auto _method = MonoClass()->GetMethod(0x060036DF)->GetCallable<void(*)()>();
return _method();
}
void Provider::shutdown()
{
static auto _method = MonoClass()->GetMethod(0x060036E0)->GetCallable<void(*)()>();
return _method();
}
void Provider::shutdown1(Int32 timer)
{
static auto _method = MonoClass()->GetMethod(0x060036E1)->GetCallable<void(*)(Int32)>();
return _method(timer);
}
void Provider::shutdown2(Int32 timer, String* explanation)
{
static auto _method = MonoClass()->GetMethod(0x060036E2)->GetCallable<void(*)(Int32, String*)>();
return _method(timer, explanation);
}
Boolean Provider::get_IsBattlEyeEnabled()
{
static auto _method = MonoClass()->GetMethod(0x060036E3)->GetCallable<Boolean(*)()>();
return _method();
}
void Provider::RequestDisconnect(String* reason)
{
static auto _method = MonoClass()->GetMethod(0x060036E4)->GetCallable<void(*)(String*)>();
return _method(reason);
}
void Provider::disconnect()
{
static auto _method = MonoClass()->GetMethod(0x060036E5)->GetCallable<void(*)()>();
return _method();
}
void Provider::sendGUIDTable(unknown_type player)
{
static auto _method = MonoClass()->GetMethod(0x060036E6)->GetCallable<void(*)(unknown_type)>();
return _method(player);
}
Boolean Provider::initializeBattlEyeServer()
{
static auto _method = MonoClass()->GetMethod(0x060036E7)->GetCallable<Boolean(*)()>();
return _method();
}
void Provider::handleServerReady()
{
static auto _method = MonoClass()->GetMethod(0x060036E8)->GetCallable<void(*)()>();
return _method();
}
void Provider::initializeDedicatedUGC()
{
static auto _method = MonoClass()->GetMethod(0x060036E9)->GetCallable<void(*)()>();
return _method();
}
String* Provider::getModeTagAbbreviation(unknown_type gm)
{
static auto _method = MonoClass()->GetMethod(0x060036EA)->GetCallable<String*(*)(unknown_type)>();
return _method(gm);
}
String* Provider::getCameraModeTagAbbreviation(unknown_type cm)
{
static auto _method = MonoClass()->GetMethod(0x060036EB)->GetCallable<String*(*)(unknown_type)>();
return _method(cm);
}
String* Provider::GetMonetizationTagAbbreviation(unknown_type monetization)
{
static auto _method = MonoClass()->GetMethod(0x060036EC)->GetCallable<String*(*)(unknown_type)>();
return _method(monetization);
}
void Provider::maybeLogCuratedMapFallback(String* attemptedMap)
{
static auto _method = MonoClass()->GetMethod(0x060036ED)->GetCallable<void(*)(String*)>();
return _method(attemptedMap);
}
void Provider::onDedicatedUGCInstalled()
{
static auto _method = MonoClass()->GetMethod(0x060036EE)->GetCallable<void(*)()>();
return _method();
}
void Provider::AdvertiseFullDescription(String* message)
{
static auto _method = MonoClass()->GetMethod(0x060036EF)->GetCallable<void(*)(String*)>();
return _method(message);
}
void Provider::AdvertiseConfig()
{
static auto _method = MonoClass()->GetMethod(0x060036F0)->GetCallable<void(*)()>();
return _method();
}
void Provider::send(unknown_type steamID, unknown_type type, Array<Byte>* packet, Int32 size, Int32 channel)
{
static auto _method = MonoClass()->GetMethod(0x060036F1)->GetCallable<void(*)(unknown_type, unknown_type, Array<Byte>*, Int32, Int32)>();
return _method(steamID, type, packet, size, channel);
}
Boolean Provider::remapSteamPacketType(unknown_type type)
{
static auto _method = MonoClass()->GetMethod(0x060036F2)->GetCallable<Boolean(*)(unknown_type)>();
return _method(type);
}
void Provider::sendToClient(unknown_type transportConnection, unknown_type type, Array<Byte>* packet, Int32 size)
{
static auto _method = MonoClass()->GetMethod(0x060036F3)->GetCallable<void(*)(unknown_type, unknown_type, Array<Byte>*, Int32)>();
return _method(transportConnection, type, packet, size);
}
Boolean Provider::shouldNetIgnoreSteamId(unknown_type id)
{
static auto _method = MonoClass()->GetMethod(0x060036F4)->GetCallable<Boolean(*)(unknown_type)>();
return _method(id);
}
void Provider::refuseGarbageConnection(unknown_type remoteId, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x060036F5)->GetCallable<void(*)(unknown_type, String*)>();
return _method(remoteId, reason);
}
void Provider::refuseGarbageConnection1(unknown_type transportConnection, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x060036F6)->GetCallable<void(*)(unknown_type, String*)>();
return _method(transportConnection, reason);
}
Boolean Provider::get_useConstNetEvents()
{
static auto _method = MonoClass()->GetMethod(0x060036F7)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::hasNetBufferChanged(Array<Byte>* original, Array<Byte>* copy, Int32 offset, Int32 size)
{
static auto _method = MonoClass()->GetMethod(0x060036F8)->GetCallable<Boolean(*)(Array<Byte>*, Array<Byte>*, Int32, Int32)>();
return _method(original, copy, offset, size);
}
Boolean Provider::getChannelHeader(Array<Byte>* packet, Int32 size, Int32 offset, unknown_type channel)
{
static auto _method = MonoClass()->GetMethod(0x060036F9)->GetCallable<Boolean(*)(Array<Byte>*, Int32, Int32, unknown_type)>();
return _method(packet, size, offset, channel);
}
Boolean Provider::canClientVersionJoinServer(UInt32 version)
{
static auto _method = MonoClass()->GetMethod(0x060036FA)->GetCallable<Boolean(*)(UInt32)>();
return _method(version);
}
void Provider::legacyReceiveClient(Array<Byte>* packet, Int32 offset, Int32 size)
{
static auto _method = MonoClass()->GetMethod(0x060036FB)->GetCallable<void(*)(Array<Byte>*, Int32, Int32)>();
return _method(packet, offset, size);
}
void Provider::listenServer()
{
static auto _method = MonoClass()->GetMethod(0x060036FC)->GetCallable<void(*)()>();
return _method();
}
void Provider::listenClient()
{
static auto _method = MonoClass()->GetMethod(0x060036FD)->GetCallable<void(*)()>();
return _method();
}
void Provider::SendPingRequestToAllClients()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060036FE)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::NotifyClientsInQueueOfPosition()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060036FF)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::KickClientsWithBadConnection()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003700)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::KickClientsBlockingUpQueue()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003701)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::listen()
{
static auto _method = MonoClass()->GetMethod(0x06003702)->GetCallable<void(*)()>();
return _method();
}
void Provider::broadcastServerDisconnected(unknown_type steamID)
{
static auto _method = MonoClass()->GetMethod(0x06003703)->GetCallable<void(*)(unknown_type)>();
return _method(steamID);
}
void Provider::broadcastServerHosted()
{
static auto _method = MonoClass()->GetMethod(0x06003704)->GetCallable<void(*)()>();
return _method();
}
void Provider::broadcastServerShutdown()
{
static auto _method = MonoClass()->GetMethod(0x06003705)->GetCallable<void(*)()>();
return _method();
}
void Provider::onP2PSessionConnectFail(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x06003706)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::checkBanStatus(SDG::Unturned::SteamPlayerID* playerID, UInt32 remoteIP, unknown_type isBanned, unknown_type banReason, unknown_type banRemainingDuration)
{
static auto _method = MonoClass()->GetMethod(0x06003707)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, UInt32, unknown_type, unknown_type, unknown_type)>();
return _method(playerID, remoteIP, isBanned, banReason, banRemainingDuration);
}
Boolean Provider::requestBanPlayer(unknown_type instigator, unknown_type playerToBan, UInt32 ipToBan, String* reason, UInt32 duration)
{
static auto _method = MonoClass()->GetMethod(0x06003708)->GetCallable<Boolean(*)(unknown_type, unknown_type, UInt32, String*, UInt32)>();
return _method(instigator, playerToBan, ipToBan, reason, duration);
}
Boolean Provider::requestBanPlayer1(unknown_type instigator, unknown_type playerToBan, UInt32 ipToBan, unknown_type hwidsToBan, String* reason, UInt32 duration)
{
static auto _method = MonoClass()->GetMethod(0x06003709)->GetCallable<Boolean(*)(unknown_type, unknown_type, UInt32, unknown_type, String*, UInt32)>();
return _method(instigator, playerToBan, ipToBan, hwidsToBan, reason, duration);
}
Boolean Provider::requestUnbanPlayer(unknown_type instigator, unknown_type playerToUnban)
{
static auto _method = MonoClass()->GetMethod(0x0600370A)->GetCallable<Boolean(*)(unknown_type, unknown_type)>();
return _method(instigator, playerToUnban);
}
void Provider::handleValidateAuthTicketResponse(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x0600370B)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::onValidateAuthTicketResponse(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x0600370C)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::handleClientGroupStatus(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x0600370D)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::onClientGroupStatus(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x0600370E)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
Byte Provider::get_maxPlayers()
{
static auto _method = MonoClass()->GetMethod(0x0600370F)->GetCallable<Byte(*)()>();
return _method();
}
void Provider::set_maxPlayers(Byte value)
{
static auto _method = MonoClass()->GetMethod(0x06003710)->GetCallable<void(*)(Byte)>();
return _method(value);
}
Byte Provider::get_queuePosition()
{
static auto _method = MonoClass()->GetMethod(0x06003711)->GetCallable<Byte(*)()>();
return _method();
}
String* Provider::get_serverName()
{
static auto _method = MonoClass()->GetMethod(0x06003712)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_serverName(String* value)
{
static auto _method = MonoClass()->GetMethod(0x06003713)->GetCallable<void(*)(String*)>();
return _method(value);
}
String* Provider::get_serverID()
{
static auto _method = MonoClass()->GetMethod(0x06003714)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_serverID(String* value)
{
static auto _method = MonoClass()->GetMethod(0x06003715)->GetCallable<void(*)(String*)>();
return _method(value);
}
UInt16 Provider::GetServerConnectionPort()
{
static auto _method = MonoClass()->GetMethod(0x06003716)->GetCallable<UInt16(*)()>();
return _method();
}
Array<Byte>* Provider::get_serverPasswordHash()
{
static auto _method = MonoClass()->GetMethod(0x06003717)->GetCallable<Array<Byte>*(*)()>();
return _method();
}
String* Provider::get_serverPassword()
{
static auto _method = MonoClass()->GetMethod(0x06003718)->GetCallable<String*(*)()>();
return _method();
}
void Provider::set_serverPassword(String* value)
{
static auto _method = MonoClass()->GetMethod(0x06003719)->GetCallable<void(*)(String*)>();
return _method(value);
}
unknown_type Provider::get_statusData()
{
static auto _method = MonoClass()->GetMethod(0x0600371A)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_preferenceData()
{
static auto _method = MonoClass()->GetMethod(0x0600371B)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_configData()
{
static auto _method = MonoClass()->GetMethod(0x0600371C)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Provider::get_modeConfigData()
{
static auto _method = MonoClass()->GetMethod(0x0600371D)->GetCallable<unknown_type(*)()>();
return _method();
}
void Provider::resetConfig()
{
static auto _method = MonoClass()->GetMethod(0x0600371E)->GetCallable<void(*)()>();
return _method();
}
void Provider::applyLevelConfigOverride(unknown_type field, unknown_type targetObject, unknown_type defaultTargetObject, unknown_type levelOverride)
{
static auto _method = MonoClass()->GetMethod(0x0600371F)->GetCallable<void(*)(unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(field, targetObject, defaultTargetObject, levelOverride);
}
void Provider::applyLevelModeConfigOverrides()
{
static auto _method = MonoClass()->GetMethod(0x06003720)->GetCallable<void(*)()>();
return _method();
}
void Provider::accept(unknown_type player)
{
static auto _method = MonoClass()->GetMethod(0x06003721)->GetCallable<void(*)(unknown_type)>();
return _method(player);
}
void Provider::WriteConnectedMessage(unknown_type writer, SDG::Unturned::SteamPlayer* aboutPlayer, SDG::Unturned::SteamPlayer* forPlayer)
{
static auto _method = MonoClass()->GetMethod(0x06003722)->GetCallable<void(*)(unknown_type, SDG::Unturned::SteamPlayer*, SDG::Unturned::SteamPlayer*)>();
return _method(writer, aboutPlayer, forPlayer);
}
void Provider::SendInitialGlobalState(SDG::Unturned::SteamPlayer* client)
{
static auto _method = MonoClass()->GetMethod(0x06003723)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*)>();
return _method(client);
}
void Provider::accept1(SDG::Unturned::SteamPlayerID* playerID, Boolean isPro, Boolean isAdmin, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID)
{
static auto _method = MonoClass()->GetMethod(0x06003724)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, Boolean, Boolean, Byte, Byte, Byte, unknown_type, unknown_type, unknown_type, Boolean, Int32, Int32, Int32, Int32, Int32, Int32, Int32, Array<Int32>*, Array<String*>*, Array<String*>*, unknown_type, String*, unknown_type)>();
return _method(playerID, isPro, isAdmin, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID);
}
void Provider::accept2(SDG::Unturned::SteamPlayerID* playerID, Boolean isPro, Boolean isAdmin, Byte face, Byte hair, Byte beard, unknown_type skin, unknown_type color, unknown_type markerColor, Boolean hand, Int32 shirtItem, Int32 pantsItem, Int32 hatItem, Int32 backpackItem, Int32 vestItem, Int32 maskItem, Int32 glassesItem, Array<Int32>* skinItems, Array<String*>* skinTags, Array<String*>* skinDynamicProps, unknown_type skillset, String* language, unknown_type lobbyID, unknown_type clientPlatform)
{
static auto _method = MonoClass()->GetMethod(0x06003725)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, Boolean, Boolean, Byte, Byte, Byte, unknown_type, unknown_type, unknown_type, Boolean, Int32, Int32, Int32, Int32, Int32, Int32, Int32, Array<Int32>*, Array<String*>*, Array<String*>*, unknown_type, String*, unknown_type, unknown_type)>();
return _method(playerID, isPro, isAdmin, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID, clientPlatform);
}
void Provider::add_onRejectingPlayer(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003726)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::remove_onRejectingPlayer(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003727)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void Provider::broadcastRejectingPlayer(unknown_type steamID, unknown_type rejection, String* explanation)
{
static auto _method = MonoClass()->GetMethod(0x06003728)->GetCallable<void(*)(unknown_type, unknown_type, String*)>();
return _method(steamID, rejection, explanation);
}
void Provider::reject(unknown_type steamID, unknown_type rejection)
{
static auto _method = MonoClass()->GetMethod(0x06003729)->GetCallable<void(*)(unknown_type, unknown_type)>();
return _method(steamID, rejection);
}
void Provider::reject1(unknown_type steamID, unknown_type rejection, String* explanation)
{
static auto _method = MonoClass()->GetMethod(0x0600372A)->GetCallable<void(*)(unknown_type, unknown_type, String*)>();
return _method(steamID, rejection, explanation);
}
void Provider::reject2(unknown_type transportConnection, unknown_type rejection)
{
static auto _method = MonoClass()->GetMethod(0x0600372B)->GetCallable<void(*)(unknown_type, unknown_type)>();
return _method(transportConnection, rejection);
}
void Provider::reject3(unknown_type transportConnection, unknown_type rejection, String* explanation)
{
static auto _method = MonoClass()->GetMethod(0x0600372C)->GetCallable<void(*)(unknown_type, unknown_type, String*)>();
return _method(transportConnection, rejection, explanation);
}
void Provider::notifyClientPending(unknown_type transportConnection)
{
static auto _method = MonoClass()->GetMethod(0x0600372D)->GetCallable<void(*)(unknown_type)>();
return _method(transportConnection);
}
Boolean Provider::findClientForKickBanDismiss(unknown_type steamID, SDG::Unturned::SteamPlayer*& foundClient, unknown_type foundIndex)
{
static auto _method = MonoClass()->GetMethod(0x0600372E)->GetCallable<Boolean(*)(unknown_type, SDG::Unturned::SteamPlayer*&, unknown_type)>();
return _method(steamID, foundClient, foundIndex);
}
void Provider::validateDisconnectedMaintainedIndex(unknown_type steamID, Byte index)
{
static auto _method = MonoClass()->GetMethod(0x0600372F)->GetCallable<void(*)(unknown_type, Byte)>();
return _method(steamID, index);
}
void Provider::notifyKickedInternal(unknown_type transportConnection, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x06003730)->GetCallable<void(*)(unknown_type, String*)>();
return _method(transportConnection, reason);
}
void Provider::kick(unknown_type steamID, String* reason)
{
static auto _method = MonoClass()->GetMethod(0x06003731)->GetCallable<void(*)(unknown_type, String*)>();
return _method(steamID, reason);
}
void Provider::notifyBannedInternal(unknown_type transportConnection, String* reason, UInt32 duration)
{
static auto _method = MonoClass()->GetMethod(0x06003732)->GetCallable<void(*)(unknown_type, String*, UInt32)>();
return _method(transportConnection, reason, duration);
}
void Provider::ban(unknown_type steamID, String* reason, UInt32 duration)
{
static auto _method = MonoClass()->GetMethod(0x06003733)->GetCallable<void(*)(unknown_type, String*, UInt32)>();
return _method(steamID, reason, duration);
}
void Provider::dismiss(unknown_type steamID)
{
static auto _method = MonoClass()->GetMethod(0x06003734)->GetCallable<void(*)(unknown_type)>();
return _method(steamID);
}
void Provider::OnServerTransportConnectionFailure(unknown_type transportConnection, String* debugString, Boolean isError)
{
static auto _method = MonoClass()->GetMethod(0x06003735)->GetCallable<void(*)(unknown_type, String*, Boolean)>();
return _method(transportConnection, debugString, isError);
}
Boolean Provider::verifyTicket(unknown_type steamID, Array<Byte>* ticket)
{
static auto _method = MonoClass()->GetMethod(0x06003736)->GetCallable<Boolean(*)(unknown_type, Array<Byte>*)>();
return _method(steamID, ticket);
}
void Provider::openGameServer()
{
static auto _method = MonoClass()->GetMethod(0x06003737)->GetCallable<void(*)()>();
return _method();
}
void Provider::closeGameServer()
{
static auto _method = MonoClass()->GetMethod(0x06003738)->GetCallable<void(*)()>();
return _method();
}
Boolean Provider::GetServerIsFavorited(UInt32 ip, UInt16 queryPort)
{
static auto _method = MonoClass()->GetMethod(0x06003739)->GetCallable<Boolean(*)(UInt32, UInt16)>();
return _method(ip, queryPort);
}
void Provider::SetServerIsFavorited(UInt32 ip, UInt16 connectionPort, UInt16 queryPort, Boolean newFavorited)
{
static auto _method = MonoClass()->GetMethod(0x0600373A)->GetCallable<void(*)(UInt32, UInt16, UInt16, Boolean)>();
return _method(ip, connectionPort, queryPort, newFavorited);
}
void Provider::openURL(String* url)
{
static auto _method = MonoClass()->GetMethod(0x0600373B)->GetCallable<void(*)(String*)>();
return _method(url);
}
Boolean Provider::get_CanFavoriteCurrentServer()
{
static auto _method = MonoClass()->GetMethod(0x0600373C)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_CanBookmarkCurrentServer()
{
static auto _method = MonoClass()->GetMethod(0x0600373D)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_isCurrentServerFavorited()
{
static auto _method = MonoClass()->GetMethod(0x0600373E)->GetCallable<Boolean(*)()>();
return _method();
}
Boolean Provider::get_IsCurrentServerBookmarked()
{
static auto _method = MonoClass()->GetMethod(0x0600373F)->GetCallable<Boolean(*)()>();
return _method();
}
void Provider::toggleCurrentServerFavorited()
{
static auto _method = MonoClass()->GetMethod(0x06003740)->GetCallable<void(*)()>();
return _method();
}
void Provider::ToggleCurrentServerBookmarked()
{
static auto _method = MonoClass()->GetMethod(0x06003741)->GetCallable<void(*)()>();
return _method();
}
void Provider::broadcastEnemyConnected(SDG::Unturned::SteamPlayer* player)
{
static auto _method = MonoClass()->GetMethod(0x06003742)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*)>();
return _method(player);
}
void Provider::broadcastEnemyDisconnected(SDG::Unturned::SteamPlayer* player)
{
static auto _method = MonoClass()->GetMethod(0x06003743)->GetCallable<void(*)(SDG::Unturned::SteamPlayer*)>();
return _method(player);
}
void Provider::onPersonaStateChange(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x06003744)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::OnGetTicketForWebApiResponse(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x06003745)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::onGameServerChangeRequested(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x06003746)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
void Provider::onGameRichPresenceJoinRequested(unknown_type callback)
{
static auto _method = MonoClass()->GetMethod(0x06003747)->GetCallable<void(*)(unknown_type)>();
return _method(callback);
}
Single Provider::get_timeLastPacketWasReceivedFromServer()
{
static auto _method = MonoClass()->GetMethod(0x06003748)->GetCallable<Single(*)()>();
return _method();
}
void Provider::set_timeLastPacketWasReceivedFromServer(Single value)
{
static auto _method = MonoClass()->GetMethod(0x06003749)->GetCallable<void(*)(Single)>();
return _method(value);
}
Single Provider::get_ping()
{
static auto _method = MonoClass()->GetMethod(0x0600374A)->GetCallable<Single(*)()>();
return _method();
}
void Provider::lag(Single value)
{
static auto _method = MonoClass()->GetMethod(0x0600374B)->GetCallable<void(*)(Single)>();
return _method(value);
}
Array<Byte>* Provider::openTicket(unknown_type serverIdentity)
{
static auto _method = MonoClass()->GetMethod(0x0600374C)->GetCallable<Array<Byte>*(*)(unknown_type)>();
return _method(serverIdentity);
}
void Provider::RequestSteamAuthTicketForWebApi(String* identity)
{
static auto _method = MonoClass()->GetMethod(0x0600374D)->GetCallable<void(*)(String*)>();
return _method(identity);
}
void Provider::CancelAllSteamAuthTickets()
{
static auto _method = MonoClass()->GetMethod(0x0600374E)->GetCallable<void(*)()>();
return _method();
}
unknown_type Provider::get_provider()
{
static auto _method = MonoClass()->GetMethod(0x0600374F)->GetCallable<unknown_type(*)()>();
return _method();
}
void Provider::set_provider(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003750)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
Boolean Provider::get_isInitialized()
{
static auto _method = MonoClass()->GetMethod(0x06003751)->GetCallable<Boolean(*)()>();
return _method();
}
UInt32 Provider::get_time()
{
static auto _method = MonoClass()->GetMethod(0x06003752)->GetCallable<UInt32(*)()>();
return _method();
}
void Provider::set_time(UInt32 value)
{
static auto _method = MonoClass()->GetMethod(0x06003753)->GetCallable<void(*)(UInt32)>();
return _method(value);
}
UInt32 Provider::get_backendRealtimeSeconds()
{
static auto _method = MonoClass()->GetMethod(0x06003754)->GetCallable<UInt32(*)()>();
return _method();
}
void Provider::set_backendRealtimeSeconds(UInt32 value)
{
static auto _method = MonoClass()->GetMethod(0x06003755)->GetCallable<void(*)(UInt32)>();
return _method(value);
}
unknown_type Provider::get_backendRealtimeDate()
{
static auto _method = MonoClass()->GetMethod(0x06003756)->GetCallable<unknown_type(*)()>();
return _method();
}
Boolean Provider::get_isBackendRealtimeAvailable()
{
static auto _method = MonoClass()->GetMethod(0x06003757)->GetCallable<Boolean(*)()>();
return _method();
}
unknown_type Provider::QuitAfterDelay(Single seconds)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003758)->GetCallable<unknown_type(*)(SDG::Unturned::Provider*, Single)>();
return _method(this, seconds);
}
void Provider::onAPIWarningMessage(Int32 severity, unknown_type warning)
{
static auto _method = MonoClass()->GetMethod(0x06003759)->GetCallable<void(*)(Int32, unknown_type)>();
return _method(severity, warning);
}
void Provider::updateDebug()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600375A)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::tickDebug()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600375B)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
unknown_type Provider::downloadIcon(unknown_type iconQueryParams)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600375C)->GetCallable<unknown_type(*)(SDG::Unturned::Provider*, unknown_type)>();
return _method(this, iconQueryParams);
}
void Provider::destroyCachedIcon(String* url)
{
static auto _method = MonoClass()->GetMethod(0x0600375D)->GetCallable<void(*)(String*)>();
return _method(url);
}
void Provider::refreshIcon(unknown_type iconQueryParams)
{
static auto _method = MonoClass()->GetMethod(0x0600375E)->GetCallable<void(*)(unknown_type)>();
return _method(iconQueryParams);
}
void Provider::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600375F)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::FixedUpdate()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003760)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::initAutoSubscribeMaps()
{
static auto _method = MonoClass()->GetMethod(0x06003761)->GetCallable<void(*)()>();
return _method();
}
void Provider::WriteSteamAppIdFileAndEnvironmentVariables()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003762)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
unknown_type Provider::LoadStatusData()
{
static auto _method = MonoClass()->GetMethod(0x06003763)->GetCallable<unknown_type(*)()>();
return _method();
}
void Provider::LoadPreferences()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003764)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::awake()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003765)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::start()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003766)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::LogSystemInfo()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003767)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
Boolean Provider::get_isApplicationQuitting()
{
static auto _method = MonoClass()->GetMethod(0x06003768)->GetCallable<Boolean(*)()>();
return _method();
}
void Provider::set_isApplicationQuitting(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06003769)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
void Provider::onApplicationQuitting()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600376A)->GetCallable<void(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
void Provider::QuitGame(String* reason)
{
static auto _method = MonoClass()->GetMethod(0x0600376B)->GetCallable<void(*)(String*)>();
return _method(reason);
}
Boolean Provider::onApplicationWantsToQuit()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600376C)->GetCallable<Boolean(*)(SDG::Unturned::Provider*)>();
return _method(this);
}
};
}
}
