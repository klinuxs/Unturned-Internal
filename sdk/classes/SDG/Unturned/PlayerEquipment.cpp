#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerEquipment::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerEquipment");
return _class;
}
uintptr_t PlayerEquipment::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerEquipment* PlayerEquipment::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerEquipment>();
}
Runtime::MonoVTable* PlayerEquipment::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerEquipment::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerEquipment);
// --------------- START CLASS MEMBERS --------------- //
Byte PlayerEquipment::SAVEDATA_VERSION()
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
return Memory::read<Byte>(StaticInstance() + _offset);
}
void PlayerEquipment::SAVEDATA_VERSION_Set(Byte value)
{
static uintptr_t _offset = MonoClass()->GetField("SAVEDATA_VERSION")->GetOffset();
Memory::write<Byte>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::DAMAGE_BARRICADE()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_BARRICADE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_BARRICADE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_BARRICADE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::DAMAGE_STRUCTURE()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_STRUCTURE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_STRUCTURE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_STRUCTURE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::DAMAGE_VEHICLE()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_VEHICLE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_VEHICLE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_VEHICLE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::DAMAGE_RESOURCE()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_RESOURCE")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_RESOURCE_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_RESOURCE")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::DAMAGE_OBJECT()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_OBJECT")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_OBJECT_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_OBJECT")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::DAMAGE_PLAYER_MULTIPLIER()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_PLAYER_MULTIPLIER")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_PLAYER_MULTIPLIER_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_PLAYER_MULTIPLIER")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::DAMAGE_ZOMBIE_MULTIPLIER()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_ZOMBIE_MULTIPLIER")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_ZOMBIE_MULTIPLIER_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_ZOMBIE_MULTIPLIER")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::DAMAGE_ANIMAL_MULTIPLIER()
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_ANIMAL_MULTIPLIER")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::DAMAGE_ANIMAL_MULTIPLIER_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("DAMAGE_ANIMAL_MULTIPLIER")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::onEquipRequested()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onEquipRequested")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::onEquipRequested_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onEquipRequested")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::onDequipRequested()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDequipRequested")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::onDequipRequested_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onDequipRequested")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::OnUseableChanged_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnUseableChanged_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::OnUseableChanged_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnUseableChanged_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::OnInspectingUseable_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnInspectingUseable_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::OnInspectingUseable_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnInspectingUseable_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::skinRagdollEffect()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinRagdollEffect")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::skinRagdollEffect_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinRagdollEffect")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Array<Byte>* PlayerEquipment::_state()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_state")->GetOffset();
return Memory::read<Array<Byte>*>(THIS_PTR + _offset);
}
void PlayerEquipment::_state_Set(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_state")->GetOffset();
Memory::write<Array<Byte>*>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::_quality()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_quality")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::_quality_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_quality")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* PlayerEquipment::thirdSlots()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSlots")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void PlayerEquipment::thirdSlots_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSlots")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
Array<Boolean>* PlayerEquipment::thirdSkinneds()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSkinneds")->GetOffset();
return Memory::read<Array<Boolean>*>(THIS_PTR + _offset);
}
void PlayerEquipment::thirdSkinneds_Set(Array<Boolean>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSkinneds")->GetOffset();
Memory::write<Array<Boolean>*>(value, THIS_PTR + _offset);
}
Array<List<unknown_type>*>* PlayerEquipment::tempThirdMeshes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMeshes")->GetOffset();
return Memory::read<Array<List<unknown_type>*>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempThirdMeshes_Set(Array<List<unknown_type>*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMeshes")->GetOffset();
Memory::write<Array<List<unknown_type>*>*>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerEquipment::tempThirdMaterials()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMaterials")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempThirdMaterials_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMaterials")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerEquipment::thirdMythics()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdMythics")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::thirdMythics_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdMythics")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* PlayerEquipment::characterSlots()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSlots")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void PlayerEquipment::characterSlots_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSlots")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
Array<Boolean>* PlayerEquipment::characterSkinneds()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSkinneds")->GetOffset();
return Memory::read<Array<Boolean>*>(THIS_PTR + _offset);
}
void PlayerEquipment::characterSkinneds_Set(Array<Boolean>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSkinneds")->GetOffset();
Memory::write<Array<Boolean>*>(value, THIS_PTR + _offset);
}
Array<List<unknown_type>*>* PlayerEquipment::tempCharacterMeshes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMeshes")->GetOffset();
return Memory::read<Array<List<unknown_type>*>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempCharacterMeshes_Set(Array<List<unknown_type>*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMeshes")->GetOffset();
Memory::write<Array<List<unknown_type>*>*>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerEquipment::tempCharacterMaterials()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMaterials")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempCharacterMaterials_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMaterials")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerEquipment::characterMythics()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMythics")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::characterMythics_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMythics")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_firstModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstModel")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_firstModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstModel")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::firstSkinned()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstSkinned")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::firstSkinned_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstSkinned")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerEquipment::tempFirstMesh()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempFirstMesh")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempFirstMesh_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempFirstMesh")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::tempFirstMaterial()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempFirstMaterial")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::tempFirstMaterial_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempFirstMaterial")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::firstMythic()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstMythic")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::firstMythic_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("firstMythic")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdModel")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdModel")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::thirdSkinned()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSkinned")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::thirdSkinned_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdSkinned")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerEquipment::tempThirdMesh()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMesh")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempThirdMesh_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMesh")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::tempThirdMaterial()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMaterial")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::tempThirdMaterial_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempThirdMaterial")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::thirdMythic()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdMythic")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::thirdMythic_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("thirdMythic")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterModel")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterModel")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::characterSkinned()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSkinned")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::characterSkinned_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterSkinned")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
List<unknown_type>* PlayerEquipment::tempCharacterMesh()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMesh")->GetOffset();
return Memory::read<List<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::tempCharacterMesh_Set(List<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMesh")->GetOffset();
Memory::write<List<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::tempCharacterMaterial()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMaterial")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::tempCharacterMaterial_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("tempCharacterMaterial")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::characterMythic()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMythic")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::characterMythic_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMythic")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG::Unturned::ItemAsset* PlayerEquipment::_asset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_asset")->GetOffset();
return Memory::read<SDG::Unturned::ItemAsset*>(THIS_PTR + _offset);
}
void PlayerEquipment::_asset_Set(SDG::Unturned::ItemAsset* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_asset")->GetOffset();
Memory::write<SDG::Unturned::ItemAsset*>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::_useable()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_useable")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::_useable_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_useable")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdPrimaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimaryMeleeSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdPrimaryMeleeSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimaryMeleeSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdPrimaryLargeGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimaryLargeGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdPrimaryLargeGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimaryLargeGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdPrimarySmallGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimarySmallGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdPrimarySmallGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdPrimarySmallGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdSecondaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSecondaryMeleeSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdSecondaryMeleeSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSecondaryMeleeSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdSecondaryGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSecondaryGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdSecondaryGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdSecondaryGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterPrimaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimaryMeleeSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterPrimaryMeleeSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimaryMeleeSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterPrimaryLargeGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimaryLargeGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterPrimaryLargeGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimaryLargeGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterPrimarySmallGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimarySmallGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterPrimarySmallGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterPrimarySmallGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterSecondaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterSecondaryMeleeSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterSecondaryMeleeSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterSecondaryMeleeSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterSecondaryGunSlot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterSecondaryGunSlot")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterSecondaryGunSlot_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterSecondaryGunSlot")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_firstLeftHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstLeftHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_firstLeftHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstLeftHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_firstRightHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstRightHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_firstRightHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_firstRightHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdLeftHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdLeftHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdLeftHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdLeftHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_thirdRightHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdRightHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_thirdRightHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_thirdRightHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterLeftHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterLeftHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterLeftHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterLeftHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* PlayerEquipment::_characterRightHook()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterRightHook")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void PlayerEquipment::_characterRightHook_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_characterRightHook")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Array<unknown_type>* PlayerEquipment::_hotkeys()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hotkeys")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void PlayerEquipment::_hotkeys_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hotkeys")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::onHotkeysUpdated()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHotkeysUpdated")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::onHotkeysUpdated_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("onHotkeysUpdated")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::wasTryingToSelect()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasTryingToSelect")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::wasTryingToSelect_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasTryingToSelect")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::isTurret()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<isTurret>k__BackingField")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::isTurret_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<isTurret>k__BackingField")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::isBusy()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isBusy")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::isBusy_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isBusy")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::canEquip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canEquip")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::canEquip_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canEquip")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::slot()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("slot")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::slot_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("slot")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::arePrimaryAndSecondaryInputsReversedByHallucination()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("arePrimaryAndSecondaryInputsReversedByHallucination")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::arePrimaryAndSecondaryInputsReversedByHallucination_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("arePrimaryAndSecondaryInputsReversedByHallucination")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::_equippedPage()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equippedPage")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::_equippedPage_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equippedPage")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::_equipped_x()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipped_x")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::_equipped_x_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipped_x")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::_equipped_y()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipped_y")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::_equipped_y_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_equipped_y")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::wasUsablePrimaryStarted()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasUsablePrimaryStarted")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::wasUsablePrimaryStarted_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasUsablePrimaryStarted")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::wasUsableSecondaryStarted()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasUsableSecondaryStarted")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::wasUsableSecondaryStarted_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("wasUsableSecondaryStarted")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWantsToAim()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWantsToAim")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWantsToAim_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWantsToAim")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::hasVision()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasVision")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::hasVision_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasVision")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Single PlayerEquipment::lastPunching()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<lastPunching>k__BackingField")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerEquipment::lastPunching_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<lastPunching>k__BackingField")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
Double PlayerEquipment::equipAnimCompletedTime()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimCompletedTime")->GetOffset();
return Memory::read<Double>(THIS_PTR + _offset);
}
void PlayerEquipment::equipAnimCompletedTime_Set(Double value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimCompletedTime")->GetOffset();
Memory::write<Double>(value, THIS_PTR + _offset);
}
UInt32 PlayerEquipment::equipAnimStartedFrame()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimStartedFrame")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerEquipment::equipAnimStartedFrame_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimStartedFrame")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
UInt32 PlayerEquipment::equipAnimLengthFrames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimLengthFrames")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerEquipment::equipAnimLengthFrames_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAnimLengthFrames")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
Single PlayerEquipment::lastEquip()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastEquip")->GetOffset();
return Memory::read<Single>(THIS_PTR + _offset);
}
void PlayerEquipment::lastEquip_Set(Single value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastEquip")->GetOffset();
Memory::write<Single>(value, THIS_PTR + _offset);
}
UInt32 PlayerEquipment::lastPunch()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastPunch")->GetOffset();
return Memory::read<UInt32>(THIS_PTR + _offset);
}
void PlayerEquipment::lastPunch_Set(UInt32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lastPunch")->GetOffset();
Memory::write<UInt32>(value, THIS_PTR + _offset);
}
Single PlayerEquipment::lastInspect()
{
static uintptr_t _offset = MonoClass()->GetField("lastInspect")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::lastInspect_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("lastInspect")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Single PlayerEquipment::inspectTime()
{
static uintptr_t _offset = MonoClass()->GetField("inspectTime")->GetOffset();
return Memory::read<Single>(StaticInstance() + _offset);
}
void PlayerEquipment::inspectTime_Set(Single value)
{
static uintptr_t _offset = MonoClass()->GetField("inspectTime")->GetOffset();
Memory::write<Single>(value, StaticInstance() + _offset);
}
Boolean PlayerEquipment::localWasPrimaryHeldLastFrame()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryHeldLastFrame")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasPrimaryHeldLastFrame_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryHeldLastFrame")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWasPrimaryPressedBetweenSimulationFrames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryPressedBetweenSimulationFrames")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasPrimaryPressedBetweenSimulationFrames_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryPressedBetweenSimulationFrames")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWasPrimaryReleasedBetweenSimulationFrames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryReleasedBetweenSimulationFrames")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasPrimaryReleasedBetweenSimulationFrames_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasPrimaryReleasedBetweenSimulationFrames")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWasSecondaryHeldLastFrame()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryHeldLastFrame")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasSecondaryHeldLastFrame_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryHeldLastFrame")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWasSecondaryPressedBetweenSimulationFrames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryPressedBetweenSimulationFrames")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasSecondaryPressedBetweenSimulationFrames_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryPressedBetweenSimulationFrames")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::localWasSecondaryReleasedBetweenSimulationFrames()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryReleasedBetweenSimulationFrames")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::localWasSecondaryReleasedBetweenSimulationFrames_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("localWasSecondaryReleasedBetweenSimulationFrames")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::SendItemHotkeySuggestion()
{
static uintptr_t _offset = MonoClass()->GetField("SendItemHotkeySuggestion")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendItemHotkeySuggestion_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendItemHotkeySuggestion")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::inspectAudioHandle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inspectAudioHandle")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::inspectAudioHandle_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("inspectAudioHandle")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::equipAudioHandle()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAudioHandle")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void PlayerEquipment::equipAudioHandle_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("equipAudioHandle")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::SendToggleVisionRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendToggleVisionRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendToggleVisionRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendToggleVisionRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::BeepRef()
{
static uintptr_t _offset = MonoClass()->GetField("BeepRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::BeepRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("BeepRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendToggleVision()
{
static uintptr_t _offset = MonoClass()->GetField("SendToggleVision")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendToggleVision_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendToggleVision")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendSlot()
{
static uintptr_t _offset = MonoClass()->GetField("SendSlot")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendSlot_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendSlot")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendUpdateStateTemp()
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateStateTemp")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendUpdateStateTemp_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateStateTemp")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendUpdateState()
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateState")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendUpdateState_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendUpdateState")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendEquip()
{
static uintptr_t _offset = MonoClass()->GetField("SendEquip")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendEquip_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendEquip")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::SendEquipRequest()
{
static uintptr_t _offset = MonoClass()->GetField("SendEquipRequest")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::SendEquipRequest_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("SendEquipRequest")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Byte PlayerEquipment::page_A()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("page_A")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::page_A_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("page_A")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::x_A()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("x_A")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::x_A_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("x_A")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::y_A()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("y_A")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::y_A_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("y_A")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte PlayerEquipment::rot_A()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rot_A")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void PlayerEquipment::rot_A_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("rot_A")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Boolean PlayerEquipment::ignoreDequip_A()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ignoreDequip_A")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void PlayerEquipment::ignoreDequip_A_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("ignoreDequip_A")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type PlayerEquipment::OnPunch_Global()
{
static uintptr_t _offset = MonoClass()->GetField("OnPunch_Global")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::OnPunch_Global_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("OnPunch_Global")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type PlayerEquipment::punchClipRef()
{
static uintptr_t _offset = MonoClass()->GetField("punchClipRef")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void PlayerEquipment::punchClipRef_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("punchClipRef")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
void PlayerEquipment::add_OnUseableChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003171)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerEquipment::remove_OnUseableChanged_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003172)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerEquipment::add_OnInspectingUseable_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003173)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
void PlayerEquipment::remove_OnInspectingUseable_Global(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06003174)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
UInt16 PlayerEquipment::get_itemID()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003175)->GetCallable<UInt16(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::set_state(Array<Byte>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003176)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Array<Byte>*)>();
return _method(this, value);
}
Array<Byte>* PlayerEquipment::get_state()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003177)->GetCallable<Array<Byte>*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Byte PlayerEquipment::get_quality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003178)->GetCallable<Byte(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::set_quality(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003179)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, value);
}
UnityEngine::Transform* PlayerEquipment::get_firstModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317A)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317B)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317C)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
SDG::Unturned::ItemAsset* PlayerEquipment::get_asset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317D)->GetCallable<SDG::Unturned::ItemAsset*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
unknown_type PlayerEquipment::get_useable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317E)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdPrimaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600317F)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdPrimaryLargeGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003180)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdPrimarySmallGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003181)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdSecondaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003182)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdSecondaryGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003183)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterPrimaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003184)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterPrimaryLargeGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003185)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterPrimarySmallGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003186)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterSecondaryMeleeSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003187)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterSecondaryGunSlot()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003188)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_firstLeftHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003189)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_firstRightHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318A)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdLeftHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318B)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_thirdRightHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318C)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterLeftHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318D)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
UnityEngine::Transform* PlayerEquipment::get_characterRightHook()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318E)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Array<unknown_type>* PlayerEquipment::get_hotkeys()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600318F)->GetCallable<Array<unknown_type>*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::isItemHotkeyed(Byte page, Byte index, unknown_type jar, unknown_type button)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003190)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, unknown_type, unknown_type)>();
return _method(this, page, index, jar, button);
}
Boolean PlayerEquipment::get_HasValidUseable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003191)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_IsEquipAnimationFinished()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003192)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_isTurret()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003193)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::set_isTurret(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003194)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Boolean)>();
return _method(this, value);
}
Boolean PlayerEquipment::get_isUseableShowingMenu()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003195)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Byte PlayerEquipment::get_equippedPage()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003196)->GetCallable<Byte(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Byte PlayerEquipment::get_equipped_x()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003197)->GetCallable<Byte(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Byte PlayerEquipment::get_equipped_y()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003198)->GetCallable<Byte(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_primary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06003199)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_secondary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319A)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Single PlayerEquipment::get_lastPunching()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319B)->GetCallable<Single(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::set_lastPunching(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319C)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Single)>();
return _method(this, value);
}
Boolean PlayerEquipment::get_isInspecting()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319D)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_canInspect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319E)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
unknown_type PlayerEquipment::getUseableRagdollEffect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600319F)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::ServerBindItemHotkey(Byte hotkeyIndex, SDG::Unturned::ItemAsset* expectedItem, Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, SDG::Unturned::ItemAsset*, Byte, Byte, Byte)>();
return _method(this, hotkeyIndex, expectedItem, page, x, y);
}
void PlayerEquipment::ServerClearItemHotkey(Byte hotkeyIndex)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A1)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, hotkeyIndex);
}
void PlayerEquipment::ReceiveItemHotkeySuggeston(unknown_type context, Byte hotkeyIndex, unknown_type expectedAssetGuid, Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A2)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Byte, unknown_type, Byte, Byte, Byte)>();
return _method(this, context, hotkeyIndex, expectedAssetGuid, page, x, y);
}
void PlayerEquipment::ClearDuplicateHotkeys(Int32 newHotkeyIndex)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A3)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Int32)>();
return _method(this, newHotkeyIndex);
}
Boolean PlayerEquipment::getUseableStatTrackerValue(unknown_type type, unknown_type kills)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A4)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, unknown_type, unknown_type)>();
return _method(this, type, kills);
}
Boolean PlayerEquipment::getSlot0StatTrackerValue(unknown_type type, unknown_type kills)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A5)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, unknown_type, unknown_type)>();
return _method(this, type, kills);
}
Boolean PlayerEquipment::getSlot1StatTrackerValue(unknown_type type, unknown_type kills)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A6)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, unknown_type, unknown_type)>();
return _method(this, type, kills);
}
void PlayerEquipment::fixStatTrackerHookScale(UnityEngine::Transform* itemModelTransform)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A7)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UnityEngine::Transform*)>();
return _method(this, itemModelTransform);
}
void PlayerEquipment::ApplyEquipableLocalScale(SDG::Unturned::ItemAsset* asset, UnityEngine::Transform* itemModelTransform)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A8)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, SDG::Unturned::ItemAsset*, UnityEngine::Transform*)>();
return _method(this, asset, itemModelTransform);
}
void PlayerEquipment::syncStatTrackTrackerVisibility(UnityEngine::Transform* itemModelTransform)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031A9)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UnityEngine::Transform*)>();
return _method(this, itemModelTransform);
}
void PlayerEquipment::syncAllStatTrackerVisibility()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AA)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::inspect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AB)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::InvokeOnInspectingUseable()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AC)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::uninspect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AD)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::checkSelection(Byte page)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AE)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, page);
}
Boolean PlayerEquipment::checkSelection1(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031AF)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::applySkinVisual()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::applyMythicVisual()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B1)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::updateSlot(Byte slot, UInt16 id, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B2)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, UInt16, Array<Byte>*)>();
return _method(this, slot, id, state);
}
void PlayerEquipment::askToggleVision(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B3)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, steamID);
}
void PlayerEquipment::ReceiveToggleVisionRequest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B4)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::tellToggleVision(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B5)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, steamID);
}
void PlayerEquipment::ReceiveToggleVision()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B6)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::tellSlot(unknown_type steamID, Byte slot, UInt16 id, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B7)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Byte, UInt16, Array<Byte>*)>();
return _method(this, steamID, slot, id, state);
}
void PlayerEquipment::ReceiveSlot(Byte slot, UInt16 id, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B8)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, UInt16, Array<Byte>*)>();
return _method(this, slot, id, state);
}
void PlayerEquipment::tellUpdateStateTemp(unknown_type steamID, Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031B9)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Array<Byte>*)>();
return _method(this, steamID, newState);
}
void PlayerEquipment::ReceiveUpdateStateTemp(Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BA)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Array<Byte>*)>();
return _method(this, newState);
}
void PlayerEquipment::tellUpdateState(unknown_type steamID, Byte page, Byte index, Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BB)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Byte, Byte, Array<Byte>*)>();
return _method(this, steamID, page, index, newState);
}
void PlayerEquipment::ReceiveUpdateState(Byte page, Byte index, Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BC)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Array<Byte>*)>();
return _method(this, page, index, newState);
}
void PlayerEquipment::tellEquip(unknown_type steamID, Byte page, Byte x, Byte y, UInt16 id, Byte newQuality, Array<Byte>* newState)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BD)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Byte, Byte, Byte, UInt16, Byte, Array<Byte>*)>();
return _method(this, steamID, page, x, y, id, newQuality, newState);
}
void PlayerEquipment::ReceiveEquip(Byte page, Byte x, Byte y, unknown_type newAssetGuid, Byte newQuality, Array<Byte>* newState, unknown_type useableNetId)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BE)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte, unknown_type, Byte, Array<Byte>*, unknown_type)>();
return _method(this, page, x, y, newAssetGuid, newQuality, newState, useableNetId);
}
void PlayerEquipment::tryEquip(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031BF)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::tryEquip1(Byte page, Byte x, Byte y, Array<Byte>* hash)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte, Array<Byte>*)>();
return _method(this, page, x, y, hash);
}
void PlayerEquipment::ServerEquip(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C1)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::turretEquipClient()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C2)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::turretEquipServer(UInt16 id, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C3)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt16, Array<Byte>*)>();
return _method(this, id, state);
}
void PlayerEquipment::turretDequipClient()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C4)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::turretDequipServer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C5)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::askEquip(unknown_type steamID, Byte page, Byte x, Byte y, Array<Byte>* hash)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C6)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, Byte, Byte, Byte, Array<Byte>*)>();
return _method(this, steamID, page, x, y, hash);
}
void PlayerEquipment::ReceiveEquipRequest(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C7)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::askEquipment(unknown_type steamID)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C8)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, steamID);
}
void PlayerEquipment::SendInitialPlayerState(SDG::Unturned::SteamPlayer* client)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031C9)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, SDG::Unturned::SteamPlayer*)>();
return _method(this, client);
}
void PlayerEquipment::SendInitialPlayerState1(List<unknown_type>* transportConnections)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CA)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, List<unknown_type>*)>();
return _method(this, transportConnections);
}
void PlayerEquipment::updateState()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CB)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::updateQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CC)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::sendUpdateState()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CD)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::sendUpdateQuality()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CE)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::sendSlot(Byte slot)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031CF)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, slot);
}
void PlayerEquipment::equip(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::ClientEquipAfterItemDrag(Byte page, Byte x, Byte y)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D1)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte, Byte, Byte)>();
return _method(this, page, x, y);
}
void PlayerEquipment::dequip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D2)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::use()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D3)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::useStepA()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D4)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::useStepB()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D5)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::PlayPunchAudioClip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D6)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::punch(unknown_type mode)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D7)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, mode);
}
Boolean PlayerEquipment::simulate_MustDequip()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D8)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::StartUsablePrimary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031D9)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::StopUsablePrimary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DA)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::StartUsableSecondary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DB)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::StopUsableSecondary()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DC)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::simulate_UseableInput(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary, Boolean inputSteady)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DD)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt32, unknown_type, unknown_type, Boolean)>();
return _method(this, simulation, inputPrimary, inputSecondary, inputSteady);
}
void PlayerEquipment::simulate_PunchInput(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DE)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt32, unknown_type, unknown_type)>();
return _method(this, simulation, inputPrimary, inputSecondary);
}
void PlayerEquipment::simulate(UInt32 simulation, unknown_type inputPrimary, unknown_type inputSecondary, Boolean inputSteady)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031DF)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt32, unknown_type, unknown_type, Boolean)>();
return _method(this, simulation, inputPrimary, inputSecondary, inputSteady);
}
void PlayerEquipment::tock(UInt32 clock)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt32)>();
return _method(this, clock);
}
void PlayerEquipment::updateVision()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E1)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::onVisionUpdated(Boolean isViewing)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E2)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Boolean)>();
return _method(this, isViewing);
}
void PlayerEquipment::onPerspectiveUpdated(unknown_type perspective)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E3)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, perspective);
}
void PlayerEquipment::onGlassesUpdated(UInt16 id, Byte quality, Array<Byte>* state)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E4)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, UInt16, Byte, Array<Byte>*)>();
return _method(this, id, quality, state);
}
void PlayerEquipment::OnVisualToggleChanged(unknown_type sender)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E5)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type)>();
return _method(this, sender);
}
void PlayerEquipment::onLifeUpdated(Boolean isDead)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E6)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Boolean)>();
return _method(this, isDead);
}
void PlayerEquipment::bindHotkey(Byte button)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E7)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, button);
}
void PlayerEquipment::hotkey(Byte button)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E8)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, Byte)>();
return _method(this, button);
}
void PlayerEquipment::Update()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031E9)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::InitializePlayer()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031EA)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::CaptureAttackInputs(unknown_type primaryAttack, unknown_type secondaryAttack)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031EB)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, unknown_type, unknown_type)>();
return _method(this, primaryAttack, secondaryAttack);
}
void PlayerEquipment::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031EC)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
String* PlayerEquipment::GetItemHotkeysFilePath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031ED)->GetCallable<String*(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::LogItemHotkeys(String* message)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031EE)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*, String*)>();
return _method(this, message);
}
void PlayerEquipment::load()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031EF)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
void PlayerEquipment::save()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031F0)->GetCallable<void(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_isSelected()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031F1)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
Boolean PlayerEquipment::get_isEquipped()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060031F2)->GetCallable<Boolean(*)(SDG::Unturned::PlayerEquipment*)>();
return _method(this);
}
};
}
}
