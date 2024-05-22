#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* SteamPlayerID::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "SteamPlayerID");
return _class;
}
uintptr_t SteamPlayerID::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::SteamPlayerID* SteamPlayerID::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::SteamPlayerID>();
}
Runtime::MonoVTable* SteamPlayerID::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool SteamPlayerID::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(SteamPlayerID);
// --------------- START CLASS MEMBERS --------------- //
unknown_type SteamPlayerID::_steamID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_steamID")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayerID::_steamID_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_steamID")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Byte SteamPlayerID::characterID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterID")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void SteamPlayerID::characterID_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterID")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
String* SteamPlayerID::_playerName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_playerName")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void SteamPlayerID::_playerName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_playerName")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
String* SteamPlayerID::_characterName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterName")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void SteamPlayerID::_characterName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterName")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
String* SteamPlayerID::_nickName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_nickName")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void SteamPlayerID::_nickName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_nickName")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayerID::group()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("group")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SteamPlayerID::group_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("group")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Array<Array<Byte>*>* SteamPlayerID::hwids()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hwids")->GetOffset();
return Memory::read<Array<Array<Byte>*>*>(THIS_PTR + _offset);
}
void SteamPlayerID::hwids_Set(Array<Array<Byte>*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hwids")->GetOffset();
Memory::write<Array<Array<Byte>*>*>(value, THIS_PTR + _offset);
}
unknown_type SteamPlayerID::get_steamID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003857)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
String* SteamPlayerID::get_streamerName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003858)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
String* SteamPlayerID::get_playerName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003859)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
String* SteamPlayerID::get_characterName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385A)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
void SteamPlayerID::set_characterName(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385B)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, String*)>();
return _method(this, value);
}
String* SteamPlayerID::get_nickName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385C)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
void SteamPlayerID::set_nickName(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385D)->GetCallable<void(*)(SDG::Unturned::SteamPlayerID*, String*)>();
return _method(this, value);
}
Array<Byte>* SteamPlayerID::get_hwid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385E)->GetCallable<Array<Byte>*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
unknown_type SteamPlayerID::GetHwids()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600385F)->GetCallable<unknown_type(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
Boolean SteamPlayerID::get_BypassIntegrityChecks()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003860)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
String* SteamPlayerID::ToString()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003864)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
Boolean SteamPlayerID::op_Equality(SDG::Unturned::SteamPlayerID* playerID_0, SDG::Unturned::SteamPlayerID* playerID_1)
{
static auto _method = MonoClass()->GetMethod(0x06003865)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayerID*, SDG::Unturned::SteamPlayerID*)>();
return _method(playerID_0, playerID_1);
}
Boolean SteamPlayerID::op_Inequality(SDG::Unturned::SteamPlayerID* playerID_0, SDG::Unturned::SteamPlayerID* playerID_1)
{
static auto _method = MonoClass()->GetMethod(0x06003866)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayerID*, SDG::Unturned::SteamPlayerID*)>();
return _method(playerID_0, playerID_1);
}
String* SteamPlayerID::op_Addition(SDG::Unturned::SteamPlayerID* playerID, String* text)
{
static auto _method = MonoClass()->GetMethod(0x06003867)->GetCallable<String*(*)(SDG::Unturned::SteamPlayerID*, String*)>();
return _method(playerID, text);
}
Boolean SteamPlayerID::Equals(SDG::Unturned::SteamPlayerID* otherPlayerID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003868)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayerID*, SDG::Unturned::SteamPlayerID*)>();
return _method(this, otherPlayerID);
}
Int32 SteamPlayerID::GetHashCode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003869)->GetCallable<Int32(*)(SDG::Unturned::SteamPlayerID*)>();
return _method(this);
}
Boolean SteamPlayerID::Equals1(unknown_type obj)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600386A)->GetCallable<Boolean(*)(SDG::Unturned::SteamPlayerID*, unknown_type)>();
return _method(this, obj);
}
};
}
}
