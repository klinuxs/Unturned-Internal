#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* SteamChannel::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "SteamChannel");
return _class;
}
uintptr_t SteamChannel::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::SteamChannel* SteamChannel::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::SteamChannel>();
}
Runtime::MonoVTable* SteamChannel::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool SteamChannel::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(SteamChannel);
// --------------- START CLASS MEMBERS --------------- //
Int32 SteamChannel::CHANNEL_ID_HEADER_SIZE()
{
static uintptr_t _offset = MonoClass()->GetField("CHANNEL_ID_HEADER_SIZE")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void SteamChannel::CHANNEL_ID_HEADER_SIZE_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("CHANNEL_ID_HEADER_SIZE")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 SteamChannel::RPC_HEADER_SIZE()
{
static uintptr_t _offset = MonoClass()->GetField("RPC_HEADER_SIZE")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void SteamChannel::RPC_HEADER_SIZE_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("RPC_HEADER_SIZE")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 SteamChannel::VOICE_HEADER_SIZE()
{
static uintptr_t _offset = MonoClass()->GetField("VOICE_HEADER_SIZE")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void SteamChannel::VOICE_HEADER_SIZE_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("VOICE_HEADER_SIZE")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 SteamChannel::VOICE_DATA_OFFSET()
{
static uintptr_t _offset = MonoClass()->GetField("VOICE_DATA_OFFSET")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void SteamChannel::VOICE_DATA_OFFSET_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("VOICE_DATA_OFFSET")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Array<unknown_type>* SteamChannel::calls()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<calls>k__BackingField")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void SteamChannel::calls_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<calls>k__BackingField")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Int32 SteamChannel::id()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("id")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void SteamChannel::id_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("id")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
SDG::Unturned::SteamPlayer* SteamChannel::owner()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("owner")->GetOffset();
return Memory::read<SDG::Unturned::SteamPlayer*>(THIS_PTR + _offset);
}
void SteamChannel::owner_Set(SDG::Unturned::SteamPlayer* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("owner")->GetOffset();
Memory::write<SDG::Unturned::SteamPlayer*>(value, THIS_PTR + _offset);
}
unknown_type SteamChannel::onTriggerReceive()
{
static uintptr_t _offset = MonoClass()->GetField("onTriggerReceive")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SteamChannel::onTriggerReceive_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onTriggerReceive")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean SteamChannel::warnedAboutTriggerReceive()
{
static uintptr_t _offset = MonoClass()->GetField("warnedAboutTriggerReceive")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void SteamChannel::warnedAboutTriggerReceive_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("warnedAboutTriggerReceive")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
unknown_type SteamChannel::onTriggerSend()
{
static uintptr_t _offset = MonoClass()->GetField("onTriggerSend")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SteamChannel::onTriggerSend_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onTriggerSend")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean SteamChannel::warnedAboutTriggerSend()
{
static uintptr_t _offset = MonoClass()->GetField("warnedAboutTriggerSend")->GetOffset();
return Memory::read<Boolean>(StaticInstance() + _offset);
}
void SteamChannel::warnedAboutTriggerSend_Set(Boolean value)
{
static uintptr_t _offset = MonoClass()->GetField("warnedAboutTriggerSend")->GetOffset();
Memory::write<Boolean>(value, StaticInstance() + _offset);
}
Boolean SteamChannel::callArrayDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("callArrayDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamChannel::callArrayDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("callArrayDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
List<unknown_type>* SteamChannel::workingCalls()
{
static uintptr_t _offset = MonoClass()->GetField("workingCalls")->GetOffset();
return Memory::read<List<unknown_type>*>(StaticInstance() + _offset);
}
void SteamChannel::workingCalls_Set(List<unknown_type>* value)
{
static uintptr_t _offset = MonoClass()->GetField("workingCalls")->GetOffset();
Memory::write<List<unknown_type>*>(value, StaticInstance() + _offset);
}
List<UnityEngine::Component*>* SteamChannel::workingComponents()
{
static uintptr_t _offset = MonoClass()->GetField("workingComponents")->GetOffset();
return Memory::read<List<UnityEngine::Component*>*>(StaticInstance() + _offset);
}
void SteamChannel::workingComponents_Set(List<UnityEngine::Component*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("workingComponents")->GetOffset();
Memory::write<List<UnityEngine::Component*>*>(value, StaticInstance() + _offset);
}
Boolean SteamChannel::isOwner()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOwner")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void SteamChannel::isOwner_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isOwner")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Array<unknown_type>* SteamChannel::get_calls()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379A)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::set_calls(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379B)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Array<unknown_type>*)>();
return _method(this, value);
}
Boolean SteamChannel::get_IsLocalPlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379C)->GetCallable<Boolean(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::set_IsLocalPlayer(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379D)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Boolean)>();
return _method(this, value);
}
unknown_type SteamChannel::GetOwnerTransportConnection()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379E)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
Boolean SteamChannel::checkServer(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600379F)->GetCallable<Boolean(*)(SDG::Unturned::SteamChannel*, unknown_type)>();
return _method(this, steamID);
}
Boolean SteamChannel::checkOwner(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A0)->GetCallable<Boolean(*)(SDG::Unturned::SteamChannel*, unknown_type)>();
return _method(this, steamID);
}
unknown_type SteamChannel::GatherRemoteClientConnectionsExcludingOwner()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A1)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
unknown_type SteamChannel::EnumerateClients_RemoteNotOwner()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A2)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
unknown_type SteamChannel::GatherRemoteClientConnectionsWithinSphereExcludingOwner(UnityEngine::Vector3 position, Single radius)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A3)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*, UnityEngine::Vector3, Single)>();
return _method(this, position, radius);
}
unknown_type SteamChannel::EnumerateClients_RemoteNotOwnerWithinSphere(UnityEngine::Vector3 position, Single radius)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A4)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*, UnityEngine::Vector3, Single)>();
return _method(this, position, radius);
}
unknown_type SteamChannel::GatherOwnerAndClientConnectionsWithinSphere(UnityEngine::Vector3 position, Single radius)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A5)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*, UnityEngine::Vector3, Single)>();
return _method(this, position, radius);
}
unknown_type SteamChannel::EnumerateClients_WithinSphereOrOwner(UnityEngine::Vector3 position, Single radius)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A6)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*, UnityEngine::Vector3, Single)>();
return _method(this, position, radius);
}
Boolean SteamChannel::receive(unknown_type steamID, Array<Byte>* packet, Int32 offset, Int32 size)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A7)->GetCallable<Boolean(*)(SDG::Unturned::SteamChannel*, unknown_type, Array<Byte>*, Int32, Int32)>();
return _method(this, steamID, packet, offset, size);
}
unknown_type SteamChannel::read(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A8)->GetCallable<unknown_type(*)(SDG::Unturned::SteamChannel*, unknown_type)>();
return _method(this, type);
}
Array<unknown_type>* SteamChannel::read1(unknown_type type_0, unknown_type type_1, unknown_type type_2)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037A9)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type)>();
return _method(this, type_0, type_1, type_2);
}
Array<unknown_type>* SteamChannel::read2(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AA)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, type_0, type_1, type_2, type_3);
}
Array<unknown_type>* SteamChannel::read3(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AB)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, type_0, type_1, type_2, type_3, type_4, type_5);
}
Array<unknown_type>* SteamChannel::read4(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5, unknown_type type_6)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AC)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, type_0, type_1, type_2, type_3, type_4, type_5, type_6);
}
Array<unknown_type>* SteamChannel::read5(Array<unknown_type>* types)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AD)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::SteamChannel*, Array<unknown_type>*)>();
return _method(this, types);
}
void SteamChannel::write(unknown_type objects)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AE)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type)>();
return _method(this, objects);
}
void SteamChannel::write1(unknown_type object_0, unknown_type object_1, unknown_type object_2)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037AF)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type)>();
return _method(this, object_0, object_1, object_2);
}
void SteamChannel::write2(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B0)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, object_0, object_1, object_2, object_3);
}
void SteamChannel::write3(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B1)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, object_0, object_1, object_2, object_3, object_4, object_5);
}
void SteamChannel::write4(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5, unknown_type object_6)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B2)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, object_0, object_1, object_2, object_3, object_4, object_5, object_6);
}
void SteamChannel::write5(Array<unknown_type>* objects)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B3)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Array<unknown_type>*)>();
return _method(this, objects);
}
Boolean SteamChannel::get_longBinaryData()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B4)->GetCallable<Boolean(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::set_longBinaryData(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B5)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Boolean)>();
return _method(this, value);
}
void SteamChannel::openWrite()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B6)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::closeWrite(String* name, unknown_type steamID, unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B7)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, unknown_type)>();
return _method(this, name, steamID, type);
}
void SteamChannel::closeWrite1(String* name, unknown_type mode, Byte bound, unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B8)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, Byte, unknown_type)>();
return _method(this, name, mode, bound, type);
}
void SteamChannel::closeWrite2(String* name, unknown_type mode, Byte x, Byte y, Byte area, unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037B9)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, Byte, Byte, Byte, unknown_type)>();
return _method(this, name, mode, x, y, area, type);
}
void SteamChannel::closeWrite3(String* name, unknown_type mode, unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BA)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, unknown_type)>();
return _method(this, name, mode, type);
}
void SteamChannel::send(String* name, unknown_type steamID, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BB)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, unknown_type, Array<unknown_type>*)>();
return _method(this, name, steamID, type, arguments);
}
void SteamChannel::sendAside(String* name, unknown_type steamID, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BC)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, unknown_type, Array<unknown_type>*)>();
return _method(this, name, steamID, type, arguments);
}
void SteamChannel::send1(unknown_type mode, Byte bound, unknown_type type, Int32 size, Array<Byte>* packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BD)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, Byte, unknown_type, Int32, Array<Byte>*)>();
return _method(this, mode, bound, type, size, packet);
}
void SteamChannel::send2(String* name, unknown_type mode, Byte bound, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BE)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, Byte, unknown_type, Array<unknown_type>*)>();
return _method(this, name, mode, bound, type, arguments);
}
void SteamChannel::send3(unknown_type mode, Byte x, Byte y, Byte area, unknown_type type, Int32 size, Array<Byte>* packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037BF)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, Byte, Byte, Byte, unknown_type, Int32, Array<Byte>*)>();
return _method(this, mode, x, y, area, type, size, packet);
}
void SteamChannel::send4(String* name, unknown_type mode, Byte x, Byte y, Byte area, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C0)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, Byte, Byte, Byte, unknown_type, Array<unknown_type>*)>();
return _method(this, name, mode, x, y, area, type, arguments);
}
void SteamChannel::send5(unknown_type mode, unknown_type type, Int32 size, Array<Byte>* packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C1)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, unknown_type, Int32, Array<Byte>*)>();
return _method(this, mode, type, size, packet);
}
void SteamChannel::send6(String* name, unknown_type mode, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C2)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, unknown_type, Array<unknown_type>*)>();
return _method(this, name, mode, type, arguments);
}
void SteamChannel::send7(unknown_type mode, UnityEngine::Vector3 point, Single radius, unknown_type type, Int32 size, Array<Byte>* packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C3)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, UnityEngine::Vector3, Single, unknown_type, Int32, Array<Byte>*)>();
return _method(this, mode, point, radius, type, size, packet);
}
void SteamChannel::send8(String* name, unknown_type mode, UnityEngine::Vector3 point, Single radius, unknown_type type, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C4)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, String*, unknown_type, UnityEngine::Vector3, Single, unknown_type, Array<unknown_type>*)>();
return _method(this, name, mode, point, radius, type, arguments);
}
void SteamChannel::markDirty()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C5)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::buildCallArray()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C6)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::buildCallArrayIfDirty()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C7)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::setup()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C8)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
void SteamChannel::encodeChannelId(Array<Byte>* packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037C9)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Array<Byte>*)>();
return _method(this, packet);
}
void SteamChannel::getPacket(unknown_type type, Int32 index, unknown_type size, unknown_type packet)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CA)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, Int32, unknown_type, unknown_type)>();
return _method(this, type, index, size, packet);
}
void SteamChannel::encodeVoicePacket(Byte callIndex, unknown_type size, unknown_type packet, Array<Byte>* bytes, UInt16 length, Boolean usingWalkieTalkie)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CB)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Byte, unknown_type, unknown_type, Array<Byte>*, UInt16, Boolean)>();
return _method(this, callIndex, size, packet, bytes, length, usingWalkieTalkie);
}
void SteamChannel::decodeVoicePacket(Array<Byte>* packet, unknown_type compressedSize, unknown_type usingWalkieTalkie)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CC)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, Array<Byte>*, unknown_type, unknown_type)>();
return _method(this, packet, compressedSize, usingWalkieTalkie);
}
void SteamChannel::sendVoicePacket(SDG::Unturned::SteamPlayer* player, Array<Byte>* packet, Int32 packetSize)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CD)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, SDG::Unturned::SteamPlayer*, Array<Byte>*, Int32)>();
return _method(this, player, packet, packetSize);
}
void SteamChannel::getPacket1(unknown_type type, Int32 index, unknown_type size, unknown_type packet, Array<unknown_type>* arguments)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CE)->GetCallable<void(*)(SDG::Unturned::SteamChannel*, unknown_type, Int32, unknown_type, unknown_type, Array<unknown_type>*)>();
return _method(this, type, index, size, packet, arguments);
}
Int32 SteamChannel::getCall(String* name)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037CF)->GetCallable<Int32(*)(SDG::Unturned::SteamChannel*, String*)>();
return _method(this, name);
}
void SteamChannel::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060037D0)->GetCallable<void(*)(SDG::Unturned::SteamChannel*)>();
return _method(this);
}
};
}
}
