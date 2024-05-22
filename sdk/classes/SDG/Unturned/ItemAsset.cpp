#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* ItemAsset::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "ItemAsset");
return _class;
}
uintptr_t ItemAsset::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::ItemAsset* ItemAsset::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::ItemAsset>();
}
Runtime::MonoVTable* ItemAsset::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool ItemAsset::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(ItemAsset);
// --------------- START CLASS MEMBERS --------------- //
unknown_type ItemAsset::shouldAlwaysLoadItemPrefab()
{
static uintptr_t _offset = MonoClass()->GetField("shouldAlwaysLoadItemPrefab")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void ItemAsset::shouldAlwaysLoadItemPrefab_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("shouldAlwaysLoadItemPrefab")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Boolean ItemAsset::_shouldVerifyHash()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shouldVerifyHash")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::_shouldVerifyHash_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shouldVerifyHash")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
String* ItemAsset::_itemName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_itemName")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemAsset::_itemName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_itemName")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
String* ItemAsset::_itemDescription()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_itemDescription")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemAsset::_itemDescription_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_itemDescription")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::type()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("type")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::type_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("type")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::rarity()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rarity")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::rarity_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rarity")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
String* ItemAsset::_proPath()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_proPath")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemAsset::_proPath_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_proPath")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::econIconUseId()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("econIconUseId")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::econIconUseId_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("econIconUseId")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::isPro()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isPro")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::isPro_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isPro")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
String* ItemAsset::useable()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("useable")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemAsset::useable_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("useable")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::useableType()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<useableType>k__BackingField")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::useableType_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<useableType>k__BackingField")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::canPlayerEquip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canPlayerEquip>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::canPlayerEquip_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canPlayerEquip>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::slot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("slot")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::slot_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("slot")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::canUseUnderwater()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canUseUnderwater>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::canUseUnderwater_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<canUseUnderwater>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte ItemAsset::size_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("size_x")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::size_x_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("size_x")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemAsset::size_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("size_y")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::size_y_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("size_y")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Single ItemAsset::iconCameraOrthographicSize()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("iconCameraOrthographicSize")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemAsset::iconCameraOrthographicSize_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("iconCameraOrthographicSize")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Single ItemAsset::econIconCameraOrthographicSize()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("econIconCameraOrthographicSize")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemAsset::econIconCameraOrthographicSize_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("econIconCameraOrthographicSize")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::isEligibleForAutomaticIconMeasurements()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isEligibleForAutomaticIconMeasurements")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::isEligibleForAutomaticIconMeasurements_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isEligibleForAutomaticIconMeasurements")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte ItemAsset::amount()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("amount")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::amount_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("amount")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemAsset::countMin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("countMin")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::countMin_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("countMin")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemAsset::countMax()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("countMax")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::countMax_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("countMax")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemAsset::qualityMin()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("qualityMin")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::qualityMin_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("qualityMin")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte ItemAsset::qualityMax()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("qualityMax")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void ItemAsset::qualityMax_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("qualityMax")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::isBackward()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isBackward")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::isBackward_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isBackward")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::shouldProcedurallyAnimateInertia()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldProcedurallyAnimateInertia")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::shouldProcedurallyAnimateInertia_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldProcedurallyAnimateInertia")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::shouldLeftHandedCharactersMirrorEquippedItem()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldLeftHandedCharactersMirrorEquippedItem")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::shouldLeftHandedCharactersMirrorEquippedItem_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shouldLeftHandedCharactersMirrorEquippedItem")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::isEligibleForAutoStatDescriptions()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isEligibleForAutoStatDescriptions")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::isEligibleForAutoStatDescriptions_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isEligibleForAutoStatDescriptions")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
UnityEngine::GameObject* ItemAsset::_item()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_item")->GetOffset();
return Memory::read<UnityEngine::GameObject*>(THIS_PTR + _offset);
}
void ItemAsset::_item_Set(UnityEngine::GameObject* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_item")->GetOffset();
Memory::write<UnityEngine::GameObject*>(value, THIS_PTR + _offset);
}
UnityEngine::GameObject* ItemAsset::equipablePrefab()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipablePrefab")->GetOffset();
return Memory::read<UnityEngine::GameObject*>(THIS_PTR + _offset);
}
void ItemAsset::equipablePrefab_Set(UnityEngine::GameObject* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipablePrefab")->GetOffset();
Memory::write<UnityEngine::GameObject*>(value, THIS_PTR + _offset);
}
String* ItemAsset::instantiatedItemName()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<instantiatedItemName>k__BackingField")->GetOffset();
return Memory::read<String*>(THIS_PTR + _offset);
}
void ItemAsset::instantiatedItemName_Set(String* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<instantiatedItemName>k__BackingField")->GetOffset();
Memory::write<String*>(value, THIS_PTR + _offset);
}
Single ItemAsset::equipableMovementSpeedMultiplier()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipableMovementSpeedMultiplier")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void ItemAsset::equipableMovementSpeedMultiplier_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipableMovementSpeedMultiplier")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::_equip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equip")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::_equip_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equip")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Array<unknown_type>* ItemAsset::_animations()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_animations")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void ItemAsset::_animations_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_animations")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::inspectAudio()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inspectAudio")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::inspectAudio_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inspectAudio")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::inventoryAudio()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inventoryAudio")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::inventoryAudio_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inventoryAudio")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
List<unknown_type>* ItemAsset::_blueprints()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_blueprints")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void ItemAsset::_blueprints_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_blueprints")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
List<unknown_type>* ItemAsset::_actions()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_actions")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void ItemAsset::_actions_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_actions")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::overrideShowQuality()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<overrideShowQuality>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::overrideShowQuality_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<overrideShowQuality>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::shouldDropOnDeath()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDropOnDeath>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::shouldDropOnDeath_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDropOnDeath>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::allowManualDrop()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<allowManualDrop>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::allowManualDrop_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<allowManualDrop>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::_albedoBase()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_albedoBase")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::_albedoBase_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_albedoBase")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::_metallicBase()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_metallicBase")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::_metallicBase_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_metallicBase")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type ItemAsset::_emissionBase()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_emissionBase")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void ItemAsset::_emissionBase_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_emissionBase")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UInt16 ItemAsset::sharedSkinLookupID()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<sharedSkinLookupID>k__BackingField")->GetOffset();
return Memory::read<UInt16>(THIS_PTR + _offset);
}
void ItemAsset::sharedSkinLookupID_Set(UInt16 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<sharedSkinLookupID>k__BackingField")->GetOffset();
Memory::write<UInt16>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::shouldDeleteAtZeroQuality()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDeleteAtZeroQuality>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::shouldDeleteAtZeroQuality_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDeleteAtZeroQuality>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean ItemAsset::shouldDestroyItemColliders()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDestroyItemColliders>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void ItemAsset::shouldDestroyItemColliders_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<shouldDestroyItemColliders>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Int32 ItemAsset::DescSort_RarityAndType()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_RarityAndType")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_RarityAndType_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_RarityAndType")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_LoreText()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_LoreText")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_LoreText_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_LoreText")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_QualityAndAmount()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_QualityAndAmount")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_QualityAndAmount_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_QualityAndAmount")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Important()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Important")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Important_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Important")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ItemStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ItemStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ItemStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ItemStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ClothingStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ClothingStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ClothingStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ClothingStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ConsumeableStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ConsumeableStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ConsumeableStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ConsumeableStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_GunStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_GunStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_GunStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_GunStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_GunAttachmentStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_GunAttachmentStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_GunAttachmentStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_GunAttachmentStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_MeleeStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_MeleeStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_MeleeStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_MeleeStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_RefillStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_RefillStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_RefillStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_RefillStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_NonExplosive_Common()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_Common")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_NonExplosive_Common_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_Common")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_TrapKeyword()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_TrapKeyword")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_TrapKeyword_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_TrapKeyword")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_TrapStat()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_TrapStat")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_TrapStat_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_TrapStat")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_FarmableText()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_FarmableText")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_FarmableText_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_FarmableText")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_BuildableCommon()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_BuildableCommon")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_BuildableCommon_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_BuildableCommon")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ExplosiveBulletDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveBulletDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ExplosiveBulletDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveBulletDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ExplosiveChargeDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveChargeDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ExplosiveChargeDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveChargeDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_ExplosiveTrapDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveTrapDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_ExplosiveTrapDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_ExplosiveTrapDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_Explosive_RangeAndDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_Explosive_RangeAndDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_Explosive_RangeAndDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_Explosive_RangeAndDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_NonExplosive_PlayerDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_PlayerDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_NonExplosive_PlayerDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_PlayerDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_NonExplosive_ZombieDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_ZombieDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_NonExplosive_ZombieDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_ZombieDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_NonExplosive_AnimalDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_AnimalDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_NonExplosive_AnimalDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_AnimalDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Weapon_NonExplosive_OtherDamage()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_OtherDamage")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Weapon_NonExplosive_OtherDamage_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Weapon_NonExplosive_OtherDamage")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Beneficial()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Beneficial")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Beneficial_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Beneficial")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 ItemAsset::DescSort_Detrimental()
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Detrimental")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void ItemAsset::DescSort_Detrimental_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("DescSort_Detrimental")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Boolean ItemAsset::get_shouldVerifyHash()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014CF)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_ShouldVerifyHash()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D0)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
String* ItemAsset::get_FriendlyName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D1)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
String* ItemAsset::get_itemName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D2)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
String* ItemAsset::get_itemDescription()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D3)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
String* ItemAsset::get_proPath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D4)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
unknown_type ItemAsset::get_useableType()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D5)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_useableType(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D6)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, unknown_type)>();
return _method(this, value);
}
Boolean ItemAsset::get_canPlayerEquip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D7)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_canPlayerEquip(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D8)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemAsset::get_isUseable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014D9)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_isUseable(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DA)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemAsset::get_canUseUnderwater()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DB)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_canUseUnderwater(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DC)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Array<Byte>* ItemAsset::getState()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DD)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Array<Byte>* ItemAsset::getState1(Boolean isFull)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DE)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, isFull);
}
Array<Byte>* ItemAsset::getState2(unknown_type origin)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014DF)->GetCallable<Array<Byte>*(*)(SDG::Unturned::ItemAsset*, unknown_type)>();
return _method(this, origin);
}
void ItemAsset::BuildDescription(unknown_type builder, unknown_type itemInstance)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E0)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, unknown_type, unknown_type)>();
return _method(this, builder, itemInstance);
}
String* ItemAsset::GetTypeFriendlyName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E1)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Byte ItemAsset::get_count()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E2)->GetCallable<Byte(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Byte ItemAsset::get_quality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E3)->GetCallable<Byte(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_ShouldAttachEquippedModelToLeftHand()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E4)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_ShouldAttachEquippedModelToLeftHand(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E5)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
UnityEngine::GameObject* ItemAsset::get_item()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E6)->GetCallable<UnityEngine::GameObject*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
String* ItemAsset::get_instantiatedItemName()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E7)->GetCallable<String*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_instantiatedItemName(String* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E8)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, String*)>();
return _method(this, value);
}
unknown_type ItemAsset::get_equip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014E9)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Array<unknown_type>* ItemAsset::get_animations()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EA)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
List<unknown_type>* ItemAsset::get_blueprints()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EB)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
List<unknown_type>* ItemAsset::get_actions()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EC)->GetCallable<List<unknown_type>*(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_overrideShowQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014ED)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_overrideShowQuality(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EE)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemAsset::get_showQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014EF)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_shouldDropOnDeath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F0)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_shouldDropOnDeath(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F1)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemAsset::get_allowManualDrop()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F2)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_allowManualDrop(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F3)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
unknown_type ItemAsset::get_albedoBase()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F4)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
unknown_type ItemAsset::get_metallicBase()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F5)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
unknown_type ItemAsset::get_emissionBase()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F6)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::applySkinBaseTextures(unknown_type material)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F7)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, unknown_type)>();
return _method(this, material);
}
UInt16 ItemAsset::get_sharedSkinLookupID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F8)->GetCallable<UInt16(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_sharedSkinLookupID(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014F9)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, UInt16)>();
return _method(this, value);
}
Boolean ItemAsset::get_shouldFriendlySentryTargetUser()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FA)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_isDangerous()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FB)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::canBeUsedInSafezone(unknown_type safezone)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FC)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*, unknown_type)>();
return _method(this, safezone);
}
Boolean ItemAsset::canBeUsedInSafezone1(unknown_type safezone, Boolean byAdmin)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FD)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*, unknown_type, Boolean)>();
return _method(this, safezone, byAdmin);
}
Boolean ItemAsset::get_shouldDeleteAtZeroQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FE)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_shouldDeleteAtZeroQuality(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060014FF)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
Boolean ItemAsset::get_shouldDestroyItemColliders()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001500)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::set_shouldDestroyItemColliders(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001501)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, Boolean)>();
return _method(this, value);
}
unknown_type ItemAsset::get_assetCategory()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001502)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Boolean ItemAsset::get_doesItemTypeHaveSkins()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001503)->GetCallable<Boolean(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::updateUseableType()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001504)->GetCallable<void(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
void ItemAsset::initAnimations(UnityEngine::GameObject* anim)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001506)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, UnityEngine::GameObject*)>();
return _method(this, anim);
}
void ItemAsset::PopulateAsset(unknown_type bundle, unknown_type data, unknown_type localization)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001507)->GetCallable<void(*)(SDG::Unturned::ItemAsset*, unknown_type, unknown_type, unknown_type)>();
return _method(this, bundle, data, localization);
}
unknown_type ItemAsset::GetDefaultInventoryAudio()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001508)->GetCallable<unknown_type(*)(SDG::Unturned::ItemAsset*)>();
return _method(this);
}
Int32 ItemAsset::DescSort_HigherIsBeneficial(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001509)->GetCallable<Int32(*)(SDG::Unturned::ItemAsset*, Single)>();
return _method(this, value);
}
Int32 ItemAsset::DescSort_LowerIsBeneficial(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600150A)->GetCallable<Int32(*)(SDG::Unturned::ItemAsset*, Single)>();
return _method(this, value);
}
};
}
}
