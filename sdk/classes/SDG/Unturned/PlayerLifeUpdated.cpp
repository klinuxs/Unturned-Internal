#include "../../../../sdk.h"
namespace SDK
{
namespace SDG {
namespace Unturned {
Runtime::MonoClass* PlayerLifeUpdated::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "PlayerLifeUpdated");
return _class;
}
uintptr_t PlayerLifeUpdated::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
SDG::Unturned::PlayerLifeUpdated* PlayerLifeUpdated::CreateObjectInstance()
{
return MonoClass()->CreateObject<SDG::Unturned::PlayerLifeUpdated>();
}
Runtime::MonoVTable* PlayerLifeUpdated::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool PlayerLifeUpdated::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(PlayerLifeUpdated);
// --------------- START CLASS MEMBERS --------------- //
void PlayerLifeUpdated::Invoke(SDG::Unturned::Player* player)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032B9)->GetCallable<void(*)(SDG::Unturned::PlayerLifeUpdated*, SDG::Unturned::Player*)>();
return _method(this, player);
}
unknown_type PlayerLifeUpdated::BeginInvoke(SDG::Unturned::Player* player, unknown_type callback, unknown_type object)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032BA)->GetCallable<unknown_type(*)(SDG::Unturned::PlayerLifeUpdated*, SDG::Unturned::Player*, unknown_type, unknown_type)>();
return _method(this, player, callback, object);
}
void PlayerLifeUpdated::EndInvoke(unknown_type result)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060032BB)->GetCallable<void(*)(SDG::Unturned::PlayerLifeUpdated*, unknown_type)>();
return _method(this, result);
}
};
}
}
