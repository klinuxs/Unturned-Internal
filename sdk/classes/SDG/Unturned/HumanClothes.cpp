#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* HumanClothes::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "HumanClothes");
return _class;
}
uintptr_t HumanClothes::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::HumanClothes* HumanClothes::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::HumanClothes>();
}
Runtime::MonoVTable* HumanClothes::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool HumanClothes::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(HumanClothes);
// --------------- START CLASS MEMBERS --------------- //
unknown_type HumanClothes::shader()
{
static uintptr_t _offset = MonoClass()->GetField("shader")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void HumanClothes::shader_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("shader")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type HumanClothes::clothingShader()
{
static uintptr_t _offset = MonoClass()->GetField("clothingShader")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void HumanClothes::clothingShader_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("clothingShader")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Array<unknown_type>* HumanClothes::humanMeshes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("humanMeshes")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void HumanClothes::humanMeshes_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("humanMeshes")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::materialClothing()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialClothing")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::materialClothing_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialClothing")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::materialHair()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialHair")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::materialHair_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("materialHair")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::spine()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spine")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::spine_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("spine")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::skull()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skull")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::skull_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skull")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* HumanClothes::upperBones()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("upperBones")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void HumanClothes::upperBones_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("upperBones")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* HumanClothes::upperSystems()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("upperSystems")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void HumanClothes::upperSystems_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("upperSystems")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* HumanClothes::lowerBones()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lowerBones")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void HumanClothes::lowerBones_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lowerBones")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
Array<UnityEngine::Transform*>* HumanClothes::lowerSystems()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lowerSystems")->GetOffset();
return Memory::read<Array<UnityEngine::Transform*>*>(THIS_PTR + _offset);
}
void HumanClothes::lowerSystems_Set(Array<UnityEngine::Transform*>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("lowerSystems")->GetOffset();
Memory::write<Array<UnityEngine::Transform*>*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::hatModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<hatModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::hatModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<hatModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::backpackModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<backpackModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::backpackModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<backpackModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::vestModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<vestModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::vestModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<vestModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::maskModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<maskModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::maskModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<maskModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::glassesModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<glassesModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::glassesModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<glassesModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::hairModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<hairModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::hairModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<hairModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
UnityEngine::Transform* HumanClothes::beardModel()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<beardModel>k__BackingField")->GetOffset();
return Memory::read<UnityEngine::Transform*>(THIS_PTR + _offset);
}
void HumanClothes::beardModel_Set(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("<beardModel>k__BackingField")->GetOffset();
Memory::write<UnityEngine::Transform*>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::isMine()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isMine")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::isMine_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isMine")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::isView()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isView")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::isView_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isView")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::canWearPro()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canWearPro")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::canWearPro_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("canWearPro")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::isRagdoll()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isRagdoll")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::isRagdoll_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isRagdoll")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Array<unknown_type>* HumanClothes::characterMeshRenderers()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMeshRenderers")->GetOffset();
return Memory::read<Array<unknown_type>*>(THIS_PTR + _offset);
}
void HumanClothes::characterMeshRenderers_Set(Array<unknown_type>* value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("characterMeshRenderers")->GetOffset();
Memory::write<Array<unknown_type>*>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::_isVisual()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isVisual")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::_isVisual_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isVisual")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::_isMythic()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMythic")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::_isMythic_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isMythic")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::_isLeftHanded()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isLeftHanded")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::_isLeftHanded_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_isLeftHanded")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::_hasBackpack()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hasBackpack")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::_hasBackpack_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hasBackpack")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::isUpper()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isUpper")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::isUpper_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isUpper")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::isLower()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isLower")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::isLower_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("isLower")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualShirtAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualShirtAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualShirtAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualShirtAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualPantsAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualPantsAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualPantsAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualPantsAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualHatAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualHatAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualHatAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualHatAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualBackpackAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualBackpackAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualBackpackAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualBackpackAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualVestAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualVestAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualVestAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualVestAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualMaskAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualMaskAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualMaskAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualMaskAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::visualGlassesAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualGlassesAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::visualGlassesAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("visualGlassesAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualShirt()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualShirt")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualShirt_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualShirt")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualPants()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualPants")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualPants_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualPants")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualHat()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualHat")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualHat_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualHat")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualBackpack()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualBackpack")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualBackpack_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualBackpack")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualVest()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualVest")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualVest_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualVest")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualMask()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualMask")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualMask_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualMask")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::_visualGlasses()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualGlasses")->GetOffset();
return Memory::read<Int32>(THIS_PTR + _offset);
}
void HumanClothes::_visualGlasses_Set(Int32 value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_visualGlasses")->GetOffset();
Memory::write<Int32>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_shirtAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shirtAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_shirtAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_shirtAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_pantsAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_pantsAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_pantsAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_pantsAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_hatAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hatAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_hatAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hatAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_backpackAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_backpackAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_backpackAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_backpackAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_vestAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vestAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_vestAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_vestAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_maskAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_maskAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_maskAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_maskAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_glassesAsset()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_glassesAsset")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_glassesAsset_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_glassesAsset")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Byte HumanClothes::_face()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_face")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void HumanClothes::_face_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_face")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte HumanClothes::_hair()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hair")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void HumanClothes::_hair_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hair")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
Byte HumanClothes::_beard()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_beard")->GetOffset();
return Memory::read<Byte>(THIS_PTR + _offset);
}
void HumanClothes::_beard_Set(Byte value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_beard")->GetOffset();
Memory::write<Byte>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_skinColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skinColor")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_skinColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_skinColor")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type HumanClothes::_hairColor()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hairColor")->GetOffset();
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void HumanClothes::_hairColor_Set(unknown_type value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("_hairColor")->GetOffset();
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::hasHair()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasHair")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::hasHair_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasHair")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::hasBeard()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBeard")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::hasBeard_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hasBeard")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::usingHumanMeshes()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("usingHumanMeshes")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::usingHumanMeshes_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("usingHumanMeshes")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::usingHumanMaterials()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("usingHumanMaterials")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::usingHumanMaterials_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("usingHumanMaterials")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::hairDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hairDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::hairDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hairDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::beardDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("beardDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::beardDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("beardDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::skinColorDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinColorDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::skinColorDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("skinColorDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::faceDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("faceDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::faceDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("faceDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::shirtDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shirtDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::shirtDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("shirtDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::pantsDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pantsDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::pantsDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("pantsDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::hatDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hatDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::hatDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("hatDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::backpackDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("backpackDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::backpackDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("backpackDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::vestDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vestDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::vestDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("vestDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::maskDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maskDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::maskDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("maskDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Boolean HumanClothes::glassesDirty()
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("glassesDirty")->GetOffset();
return Memory::read<Boolean>(THIS_PTR + _offset);
}
void HumanClothes::glassesDirty_Set(Boolean value)
{
MONO_CHECK_NULLREF();
static uintptr_t _offset = MonoClass()->GetField("glassesDirty")->GetOffset();
Memory::write<Boolean>(value, THIS_PTR + _offset);
}
Int32 HumanClothes::skinColorPropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("skinColorPropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::skinColorPropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("skinColorPropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::flipShirtPropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("flipShirtPropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::flipShirtPropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("flipShirtPropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::faceAlbedoTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("faceAlbedoTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::faceAlbedoTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("faceAlbedoTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::faceEmissionTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("faceEmissionTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::faceEmissionTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("faceEmissionTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::shirtAlbedoTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("shirtAlbedoTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::shirtAlbedoTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("shirtAlbedoTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::shirtEmissionTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("shirtEmissionTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::shirtEmissionTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("shirtEmissionTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::shirtMetallicTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("shirtMetallicTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::shirtMetallicTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("shirtMetallicTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::pantsAlbedoTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("pantsAlbedoTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::pantsAlbedoTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("pantsAlbedoTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::pantsEmissionTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("pantsEmissionTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::pantsEmissionTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("pantsEmissionTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
Int32 HumanClothes::pantsMetallicTexturePropertyID()
{
static uintptr_t _offset = MonoClass()->GetField("pantsMetallicTexturePropertyID")->GetOffset();
return Memory::read<Int32>(StaticInstance() + _offset);
}
void HumanClothes::pantsMetallicTexturePropertyID_Set(Int32 value)
{
static uintptr_t _offset = MonoClass()->GetField("pantsMetallicTexturePropertyID")->GetOffset();
Memory::write<Int32>(value, StaticInstance() + _offset);
}
UnityEngine::Transform* HumanClothes::get_hatModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BAD)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hatModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BAE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_backpackModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BAF)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_backpackModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB0)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_vestModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB1)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_vestModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB2)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_maskModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB3)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_maskModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB4)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_glassesModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB5)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_glassesModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB6)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_hairModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB7)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hairModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB8)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
UnityEngine::Transform* HumanClothes::get_beardModel()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BB9)->GetCallable<UnityEngine::Transform*(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_beardModel(UnityEngine::Transform* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBA)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*)>();
return _method(this, value);
}
Boolean HumanClothes::get_isVisual()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBB)->GetCallable<Boolean(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_isVisual(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBC)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Boolean)>();
return _method(this, value);
}
Boolean HumanClothes::get_isMythic()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBD)->GetCallable<Boolean(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_isMythic(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Boolean)>();
return _method(this, value);
}
Boolean HumanClothes::get_hand()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BBF)->GetCallable<Boolean(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hand(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC0)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Boolean)>();
return _method(this, value);
}
Boolean HumanClothes::get_hasBackpack()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC1)->GetCallable<Boolean(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hasBackpack(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC2)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Boolean)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualShirt()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC3)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualShirt(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC4)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualPants()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC5)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualPants(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC6)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualHat()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC7)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualHat(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC8)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualBackpack()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BC9)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualBackpack(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCA)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualVest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCB)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualVest(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCC)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCD)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualMask(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
Int32 HumanClothes::get_visualGlasses()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BCF)->GetCallable<Int32(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_visualGlasses(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD0)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Int32)>();
return _method(this, value);
}
unknown_type HumanClothes::get_shirtAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD1)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_shirtAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD2)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_pantsAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD3)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_pantsAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD4)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_hatAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD5)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hatAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD6)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_backpackAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD7)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_backpackAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD8)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_vestAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BD9)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_vestAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDA)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_maskAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDB)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_maskAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDC)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_glassesAsset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDD)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_glassesAsset(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_shirtGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BDF)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_shirtGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE0)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_shirt()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE1)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_shirt(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE2)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_pantsGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE3)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_pantsGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE4)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_pants()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE5)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_pants(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE6)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_hatGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE7)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hatGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE8)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_hat()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BE9)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hat(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BEA)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_backpackGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BEB)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_backpackGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BEC)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_backpack()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BED)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_backpack(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BEE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_vestGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BEF)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_vestGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF0)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_vest()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF1)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_vest(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF2)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_maskGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF3)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_maskGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF4)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_mask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF5)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_mask(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF6)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
unknown_type HumanClothes::get_glassesGuid()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF7)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_glassesGuid(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF8)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
UInt16 HumanClothes::get_glasses()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BF9)->GetCallable<UInt16(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_glasses(UInt16 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFA)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UInt16)>();
return _method(this, value);
}
Byte HumanClothes::get_face()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFB)->GetCallable<Byte(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_face(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFC)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Byte)>();
return _method(this, value);
}
Byte HumanClothes::get_hair()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFD)->GetCallable<Byte(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_hair(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFE)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Byte)>();
return _method(this, value);
}
Byte HumanClothes::get_beard()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001BFF)->GetCallable<Byte(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_beard(Byte value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C00)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Byte)>();
return _method(this, value);
}
unknown_type HumanClothes::get_skin()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C01)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_skin(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C02)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
unknown_type HumanClothes::get_color()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C03)->GetCallable<unknown_type(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::set_color(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C04)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, value);
}
void HumanClothes::markAllDirty(Boolean isDirty)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C05)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Boolean)>();
return _method(this, isDirty);
}
void HumanClothes::ApplyHairOverride(unknown_type itemAsset, UnityEngine::Transform* rootModel)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C06)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type, UnityEngine::Transform*)>();
return _method(this, itemAsset, rootModel);
}
void HumanClothes::ApplySkinOverride(unknown_type itemAsset, UnityEngine::Transform* rootModel)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C07)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type, UnityEngine::Transform*)>();
return _method(this, itemAsset, rootModel);
}
void HumanClothes::apply()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C08)->GetCallable<void(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::centerHeadEffect(UnityEngine::Transform* skull, UnityEngine::Transform* model)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C09)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, UnityEngine::Transform*, UnityEngine::Transform*)>();
return _method(this, skull, model);
}
void HumanClothes::setCharacterMeshes(Array<unknown_type>* meshes)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C0A)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, Array<unknown_type>*)>();
return _method(this, meshes);
}
void HumanClothes::setCharacterMaterial(unknown_type material)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C0B)->GetCallable<void(*)(SDG::Unturned::HumanClothes*, unknown_type)>();
return _method(this, material);
}
void HumanClothes::Awake()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C0C)->GetCallable<void(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
void HumanClothes::OnDestroy()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06001C0D)->GetCallable<void(*)(SDG::Unturned::HumanClothes*)>();
return _method(this);
}
};
}
}
