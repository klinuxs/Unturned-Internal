#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerInventory::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerInventory");
return _class;
}
uintptr_t PlayerInventory::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerInventory* PlayerInventory::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerInventory>();
}
Runtime::MonoVTable* PlayerInventory::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerInventory::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerInventory);
// --------------- START CLASS MEMBERS --------------- //
Array<UInt16>* PlayerInventory::LOADOUT()
{
static uintptr_t _offset = MonoClass()->GetField("LOADOUT")->GetOffset();
return Memory::read<Array<UInt16>*>(StaticInstance() + _offset);
}
void PlayerInventory::LOADOUT_Set(Array<UInt16>* value)
{
static uintptr_t _offset = MonoClass()->GetField("LOADOUT")->GetOffset();
Memory::write<Array<UInt16>*>(value, StaticInstance() + _offset);
}
Array<UInt16>* PlayerInventory::HORDE()
{
static uintptr_t _offset = MonoClass()->GetField("HORDE")->GetOffset();
return Memory::read<Array<UInt16>*>(StaticInstance() + _offset);
}
void PlayerInventory::HORDE_Set(Array<UInt16>* value)
{
static uintptr_t _offset = MonoClass()->GetField("HORDE")->GetOffset();
Memory::write<Array<UInt16>*>(value, StaticInstance() + _offset);
}
Array<Array<UInt16>*>* PlayerInventory::SKILLSETS_SERVER()
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_SERVER")->GetOffset();
return Memory::read<Array<Array<UInt16>*>*>(StaticInstance() + _offset);
}
void PlayerInventory::SKILLSETS_SERVER_Set(Array<Array<UInt16>*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_SERVER")->GetOffset();
Memory::write<Array<Array<UInt16>*>*>(value, StaticInstance() + _offset);
}
Array<Array<UInt16>*>* PlayerInventory::SKILLSETS_CLIENT()
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_CLIENT")->GetOffset();
return Memory::read<Array<Array<UInt16>*>*>(StaticInstance() + _offset);
}
void PlayerInventory::SKILLSETS_CLIENT_Set(Array<Array<UInt16>*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_CLIENT")->GetOffset();
Memory::write<Array<Array<UInt16>*>*>(value, StaticInstance() + _offset);
}
Array<Array<UInt16>*>* PlayerInventory::SKILLSETS_HERO()
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_HERO")->GetOffset();
return Memory::read<Array<Array<UInt16>*>*>(StaticInstance() + _offset);
}
void PlayerInventory::SKILLSETS_HERO_Set(Array<Array<UInt16>*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("SKILLSETS_HERO")->GetOffset();
Memory::write<Array<Array<UInt16>*>*>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::SLOTS()
{
static uintptr_t _offset = MonoClass()->GetField("SLOTS")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::SLOTS_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SLOTS")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::PAGES()
{
static uintptr_t _offset = MonoClass()->GetField("PAGES")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::PAGES_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("PAGES")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::BACKPACK()
{
static uintptr_t _offset = MonoClass()->GetField("BACKPACK")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::BACKPACK_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("BACKPACK")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::VEST()
{
static uintptr_t _offset = MonoClass()->GetField("VEST")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::VEST_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("VEST")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::SHIRT()
{
static uintptr_t _offset = MonoClass()->GetField("SHIRT")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::SHIRT_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SHIRT")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::PANTS()
{
static uintptr_t _offset = MonoClass()->GetField("PANTS")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::PANTS_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("PANTS")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::STORAGE()
{
static uintptr_t _offset = MonoClass()->GetField("STORAGE")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::STORAGE_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("STORAGE")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Byte PlayerInventory::AREA()
{
static uintptr_t _offset = MonoClass()->GetField("AREA")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerInventory::AREA_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("AREA")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Array<UInt16>* PlayerInventory::loadout()
{
static uintptr_t _offset = MonoClass()->GetField("loadout")->GetOffset();
return Memory::read<Array<UInt16>*>(StaticInstance() + _offset);
}
void PlayerInventory::loadout_Set(Array<UInt16>* value)
{
static uintptr_t _offset = MonoClass()->GetField("loadout")->GetOffset();
Memory::write<Array<UInt16>*>(value, StaticInstance() + _offset);
}
Array<Array<UInt16>*>* PlayerInventory::skillsets()
{
static uintptr_t _offset = MonoClass()->GetField("skillsets")->GetOffset();
return Memory::read<Array<Array<UInt16>*>*>(StaticInstance() + _offset);
}
void PlayerInventory::skillsets_Set(Array<Array<UInt16>*>* value)
{
static uintptr_t _offset = MonoClass()->GetField("skillsets")->GetOffset();
Memory::write<Array<Array<UInt16>*>*>(value, StaticInstance() + _offset);
}
Array<unknown_type>* PlayerInventory::items()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<items>k__BackingField")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerInventory::items_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<items>k__BackingField")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Int32 PlayerInventory::receivedUpdateIndex()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("receivedUpdateIndex")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void PlayerInventory::receivedUpdateIndex_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("receivedUpdateIndex")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Boolean PlayerInventory::isStoring()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isStoring")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerInventory::isStoring_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isStoring")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerInventory::isStorageTrunk()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isStorageTrunk")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerInventory::isStorageTrunk_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isStorageTrunk")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::storage()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("storage")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::storage_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("storage")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerInventory::ownerHasInventory()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ownerHasInventory")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerInventory::ownerHasInventory_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ownerHasInventory")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryResized()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryResized")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryResized_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryResized")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryAdded()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryAdded")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryAdded_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryAdded")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryRemoved()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryRemoved")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryRemoved_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryRemoved")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryStored()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryStored")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryStored_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryStored")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onInventoryStateUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryStateUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onInventoryStateUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onInventoryStateUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::onDropItemRequested()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDropItemRequested")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerInventory::onDropItemRequested_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDropItemRequested")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerInventory::SendDragItem()
{
static uintptr_t _offset = MonoClass()->GetField("SendDragItem")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendDragItem_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDragItem")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendSwapItem()
{
static uintptr_t _offset = MonoClass()->GetField("SendSwapItem")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendSwapItem_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSwapItem")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendDropItem()
{
static uintptr_t _offset = MonoClass()->GetField("SendDropItem")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendDropItem_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendDropItem")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendUpdateAmount()
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateAmount")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendUpdateAmount_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateAmount")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendUpdateQuality()
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateQuality")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendUpdateQuality_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateQuality")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendUpdateInvState()
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateInvState")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendUpdateInvState_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateInvState")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendItemAdd()
{
static uintptr_t _offset = MonoClass()->GetField("SendItemAdd")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendItemAdd_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendItemAdd")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendItemRemove()
{
static uintptr_t _offset = MonoClass()->GetField("SendItemRemove")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendItemRemove_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendItemRemove")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendSize()
{
static uintptr_t _offset = MonoClass()->GetField("SendSize")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendSize_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSize")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendStoraging()
{
static uintptr_t _offset = MonoClass()->GetField("SendStoraging")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendStoraging_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendStoraging")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerInventory::SendInventory()
{
static uintptr_t _offset = MonoClass()->GetField("SendInventory")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerInventory::SendInventory_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendInventory")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean PlayerInventory::wasLoadCalled()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerInventory::wasLoadCalled_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasLoadCalled")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerInventory::get_items()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003250)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::set_items(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003251)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Array<unknown_type>*)>();
return _method(this, value);
}
void PlayerInventory::incrementUpdateIndex()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003252)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
Boolean PlayerInventory::doesSearchNeedRefresh(unknown_type index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003253)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, index);
}
Boolean PlayerInventory::get_shouldInventoryStopGestureCloseStorage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003254)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
Boolean PlayerInventory::get_shouldInteractCloseStorage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003255)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
Boolean PlayerInventory::get_shouldStorageOpenDashboard()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003256)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
Byte PlayerInventory::getWidth(Byte page)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003257)->GetCallable<Byte(*)(SDG::Unturned::PlayerInventory*, Byte)>();
return _method(this, page);
}
Byte PlayerInventory::getHeight(Byte page)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003258)->GetCallable<Byte(*)(SDG::Unturned::PlayerInventory*, Byte)>();
return _method(this, page);
}
Byte PlayerInventory::getItemCount(Byte page)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003259)->GetCallable<Byte(*)(SDG::Unturned::PlayerInventory*, Byte)>();
return _method(this, page);
}
unknown_type PlayerInventory::getItem(Byte page, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325A)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerInventory*, Byte, Byte)>();
return _method(this, page, index);
}
Byte PlayerInventory::getIndex(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325B)->GetCallable<Byte(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
Byte PlayerInventory::findIndex(Byte page, Byte x, Byte y, unknown_type find_x, unknown_type find_y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325C)->GetCallable<Byte(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, unknown_type, unknown_type)>();
return _method(this, page, x, y, find_x, find_y);
}
void PlayerInventory::updateAmount(Byte page, Byte index, Byte newAmount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325D)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, index, newAmount);
}
void PlayerInventory::updateQuality(Byte page, Byte index, Byte newQuality)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325E)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, index, newQuality);
}
void PlayerInventory::updateState(Byte page, Byte index, Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600325F)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Array<Byte>*)>();
return _method(this, page, index, newState);
}
List<unknown_type>* PlayerInventory::search(unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003260)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, type);
}
void PlayerInventory::search1(List<unknown_type>* search, unknown_type type)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003261)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, List<unknown_type>*, unknown_type)>();
return _method(this, search, type);
}
List<unknown_type>* PlayerInventory::search2(unknown_type type, Array<UInt16>* calibers)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003262)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerInventory*, unknown_type, Array<UInt16>*)>();
return _method(this, type, calibers);
}
List<unknown_type>* PlayerInventory::search3(unknown_type type, Array<UInt16>* calibers, Boolean allowZeroCaliber)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003263)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerInventory*, unknown_type, Array<UInt16>*, Boolean)>();
return _method(this, type, calibers, allowZeroCaliber);
}
void PlayerInventory::search4(List<unknown_type>* search, unknown_type type, UInt16 caliber)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003264)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, List<unknown_type>*, unknown_type, UInt16)>();
return _method(this, search, type, caliber);
}
void PlayerInventory::search5(List<unknown_type>* search, unknown_type type, UInt16 caliber, Boolean allowZeroCaliber)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003265)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, List<unknown_type>*, unknown_type, UInt16, Boolean)>();
return _method(this, search, type, caliber, allowZeroCaliber);
}
List<unknown_type>* PlayerInventory::search6(UInt16 id, Boolean findEmpty, Boolean findHealthy)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003266)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerInventory*, UInt16, Boolean, Boolean)>();
return _method(this, id, findEmpty, findHealthy);
}
void PlayerInventory::search7(List<unknown_type>* search, UInt16 id, Boolean findEmpty, Boolean findHealthy)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003267)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, List<unknown_type>*, UInt16, Boolean, Boolean)>();
return _method(this, search, id, findEmpty, findHealthy);
}
List<unknown_type>* PlayerInventory::search8(List<unknown_type>* search)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003268)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::PlayerInventory*, List<unknown_type>*)>();
return _method(this, search);
}
unknown_type PlayerInventory::has(UInt16 id)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003269)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerInventory*, UInt16)>();
return _method(this, id);
}
Boolean PlayerInventory::tryAddItem(unknown_type item, Byte x, Byte y, Byte page, Byte rot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326A)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte, Byte)>();
return _method(this, item, x, y, page, rot);
}
Boolean PlayerInventory::tryAddItem1(unknown_type item, Boolean auto_)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326B)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean)>();
return _method(this, item, auto_);
}
Boolean PlayerInventory::tryAddItem2(unknown_type item, Boolean auto_, Boolean playEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326C)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean, Boolean)>();
return _method(this, item, auto_, playEffect);
}
Boolean PlayerInventory::tryAddItemEquip(unknown_type item, Byte page)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326D)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte)>();
return _method(this, item, page);
}
Boolean PlayerInventory::tryAddItemAuto(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing, Boolean playEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326E)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean, Boolean, Boolean, Boolean)>();
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing, playEffect);
}
void PlayerInventory::forceAddItem(unknown_type item, Boolean auto_)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600326F)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean)>();
return _method(this, item, auto_);
}
void PlayerInventory::forceAddItemAuto(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003270)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean, Boolean, Boolean)>();
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing);
}
void PlayerInventory::forceAddItem1(unknown_type item, Boolean auto_, Boolean playEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003271)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean, Boolean)>();
return _method(this, item, auto_, playEffect);
}
void PlayerInventory::forceAddItemAuto1(unknown_type item, Boolean autoEquipWeapon, Boolean autoEquipUseable, Boolean autoEquipClothing, Boolean playEffect)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003272)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Boolean, Boolean, Boolean, Boolean)>();
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing, playEffect);
}
void PlayerInventory::replaceItems(Byte page, unknown_type replacement)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003273)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, unknown_type)>();
return _method(this, page, replacement);
}
void PlayerInventory::removeItem(Byte page, Byte index)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003274)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte)>();
return _method(this, page, index);
}
Boolean PlayerInventory::checkSpaceEmpty(Byte page, Byte x, Byte y, Byte size_x, Byte size_y, Byte rot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003275)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page, x, y, size_x, size_y, rot);
}
Boolean PlayerInventory::checkSpaceDrag(Byte page, Byte old_x, Byte old_y, Byte oldRot, Byte new_x, Byte new_y, Byte newRot, Byte size_x, Byte size_y, Boolean checkSame)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003276)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Boolean)>();
return _method(this, page, old_x, old_y, oldRot, new_x, new_y, newRot, size_x, size_y, checkSame);
}
Boolean PlayerInventory::checkSpaceSwap(Byte page, Byte x, Byte y, Byte oldSize_X, Byte oldSize_Y, Byte oldRot, Byte newSize_X, Byte newSize_Y, Byte newRot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003277)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page, x, y, oldSize_X, oldSize_Y, oldRot, newSize_X, newSize_Y, newRot);
}
Boolean PlayerInventory::tryFindSpace(Byte page, Byte size_x, Byte size_y, unknown_type x, unknown_type y, unknown_type rot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003278)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, unknown_type, unknown_type, unknown_type)>();
return _method(this, page, size_x, size_y, x, y, rot);
}
Boolean PlayerInventory::tryFindSpace1(Byte size_x, Byte size_y, unknown_type page, unknown_type x, unknown_type y, unknown_type rot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003279)->GetCallable<Boolean(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, unknown_type, unknown_type, unknown_type, unknown_type)>();
return _method(this, size_x, size_y, page, x, y, rot);
}
void PlayerInventory::askDragItem(unknown_type steamID, Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327A)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, steamID, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::ReceiveDragItem(Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327B)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::askSwapItem(unknown_type steamID, Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327C)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, steamID, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::ReceiveSwapItem(Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327D)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::sendDragItem(Byte page_0, Byte x_0, Byte y_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327E)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::sendSwapItem(Byte page_0, Byte x_0, Byte y_0, Byte rot_0, Byte page_1, Byte x_1, Byte y_1, Byte rot_1)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600327F)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, Byte, Byte, Byte, Byte)>();
return _method(this, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void PlayerInventory::askDropItem(unknown_type steamID, Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003280)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte)>();
return _method(this, steamID, page, x, y);
}
void PlayerInventory::ReceiveDropItem(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003281)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerInventory::sendDropItem(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003282)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerInventory::tellUpdateAmount(unknown_type steamID, Byte page, Byte index, Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003283)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte)>();
return _method(this, steamID, page, index, amount);
}
void PlayerInventory::ReceiveUpdateAmount(Byte page, Byte index, Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003284)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, index, amount);
}
void PlayerInventory::tellUpdateQuality(unknown_type steamID, Byte page, Byte index, Byte quality)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003285)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte)>();
return _method(this, steamID, page, index, quality);
}
void PlayerInventory::ReceiveUpdateQuality(Byte page, Byte index, Byte quality)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003286)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, index, quality);
}
void PlayerInventory::tellUpdateInvState(unknown_type steamID, Byte page, Byte index, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003287)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Array<Byte>*)>();
return _method(this, steamID, page, index, state);
}
void PlayerInventory::ReceiveUpdateInvState(Byte page, Byte index, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003288)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Array<Byte>*)>();
return _method(this, page, index, state);
}
void PlayerInventory::tellItemAdd(unknown_type steamID, Byte page, Byte x, Byte y, Byte rot, UInt16 id, Byte amount, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003289)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte, Byte, UInt16, Byte, Byte, Array<Byte>*)>();
return _method(this, steamID, page, x, y, rot, id, amount, quality, state);
}
void PlayerInventory::ReceiveItemAdd(Byte page, Byte x, Byte y, Byte rot, UInt16 id, Byte amount, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328A)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte, UInt16, Byte, Byte, Array<Byte>*)>();
return _method(this, page, x, y, rot, id, amount, quality, state);
}
void PlayerInventory::tellItemRemove(unknown_type steamID, Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328B)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte)>();
return _method(this, steamID, page, x, y);
}
void PlayerInventory::ReceiveItemRemove(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328C)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerInventory::tellSize(unknown_type steamID, Byte page, Byte newWidth, Byte newHeight)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328D)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type, Byte, Byte, Byte)>();
return _method(this, steamID, page, newWidth, newHeight);
}
void PlayerInventory::ReceiveSize(Byte page, Byte newWidth, Byte newHeight)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328E)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, newWidth, newHeight);
}
void PlayerInventory::tellStoraging(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600328F)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, steamID);
}
void PlayerInventory::ReceiveStoraging(unknown_type context)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003290)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, context);
}
void PlayerInventory::tellInventory(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003291)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, steamID);
}
void PlayerInventory::ReceiveInventory(unknown_type context)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003292)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, context);
}
void PlayerInventory::askInventory(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003293)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, steamID);
}
void PlayerInventory::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003294)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void PlayerInventory::sendStorage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003295)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::updateItems(Byte page, unknown_type newItems)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003296)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, unknown_type)>();
return _method(this, page, newItems);
}
void PlayerInventory::sendUpdateAmount(Byte page, Byte x, Byte y, Byte amount)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003297)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte)>();
return _method(this, page, x, y, amount);
}
void PlayerInventory::sendUpdateQuality(Byte page, Byte x, Byte y, Byte quality)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003298)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Byte)>();
return _method(this, page, x, y, quality);
}
void PlayerInventory::sendUpdateInvState(Byte page, Byte x, Byte y, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003299)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte, Array<Byte>*)>();
return _method(this, page, x, y, state);
}
void PlayerInventory::sendItemAdd(Byte page, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329A)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, unknown_type)>();
return _method(this, page, jar);
}
void PlayerInventory::sendItemRemove(Byte page, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329B)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, unknown_type)>();
return _method(this, page, jar);
}
void PlayerInventory::bestowLoadout()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329C)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
String* PlayerInventory::OnGetSpawnLoadoutErrorContext()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329D)->GetCallable<String*(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::onShirtUpdated(UInt16 id, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329E)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, UInt16, Byte, Array<Byte>*)>();
return _method(this, id, quality, state);
}
void PlayerInventory::onPantsUpdated(UInt16 id, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600329F)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, UInt16, Byte, Array<Byte>*)>();
return _method(this, id, quality, state);
}
void PlayerInventory::onBackpackUpdated(UInt16 id, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A0)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, UInt16, Byte, Array<Byte>*)>();
return _method(this, id, quality, state);
}
void PlayerInventory::onVestUpdated(UInt16 id, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A1)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, UInt16, Byte, Array<Byte>*)>();
return _method(this, id, quality, state);
}
void PlayerInventory::closeDistantStorage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A2)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::openStorage(unknown_type newStorage)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A3)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, newStorage);
}
void PlayerInventory::openTrunk(unknown_type trunkItems)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A4)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, trunkItems);
}
void PlayerInventory::closeTrunk()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A5)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::closeStorage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A6)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::closeStorageAndNotifyClient()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A7)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::onLifeUpdated(Boolean isDead)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A8)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Boolean)>();
return _method(this, isDead);
}
void PlayerInventory::onItemsResized(Byte page, Byte newWidth, Byte newHeight)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032A9)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, Byte)>();
return _method(this, page, newWidth, newHeight);
}
void PlayerInventory::onItemUpdated(Byte page, Byte index, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AA)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, unknown_type)>();
return _method(this, page, index, jar);
}
void PlayerInventory::onItemAdded(Byte page, Byte index, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AB)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, unknown_type)>();
return _method(this, page, index, jar);
}
void PlayerInventory::onItemRemoved(Byte page, Byte index, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AC)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, unknown_type)>();
return _method(this, page, index, jar);
}
void PlayerInventory::onItemDiscarded(Byte page, Byte index, unknown_type jar)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AD)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, Byte, Byte, unknown_type)>();
return _method(this, page, index, jar);
}
void PlayerInventory::onItemStateUpdated()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AE)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032AF)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B0)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::load()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B1)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B2)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*)>();
return _method(this);
}
void PlayerInventory::LogRPCFailure(String* format, Array<unknown_type>* args)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B3)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, String*, Array<unknown_type>*)>();
return _method(this, format, args);
}
void PlayerInventory::SendInitialPlayerStateb__112_0(unknown_type writer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B6)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, writer);
}
void PlayerInventory::sendStorageb__113_0(unknown_type writer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B7)->GetCallable<void(*)(SDG::Unturned::PlayerInventory*, unknown_type)>();
return _method(this, writer);
}
};
}
}
