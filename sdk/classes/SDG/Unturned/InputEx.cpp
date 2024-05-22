#include "../../../../sdk.h"
namespace SDK
{
	namespace SDG {
		namespace Unturned {
			Runtime::MonoClass* InputEx::MonoClass()
			{
				static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("Assembly-CSharp")->GetClass("SDG.Unturned", "InputEx");
				return _class;
			}
			uintptr_t InputEx::StaticInstance()
			{
				static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
				return _instance;
			}
			SDG::Unturned::InputEx* InputEx::CreateObjectInstance()
			{
				return MonoClass()->CreateObject<SDG::Unturned::InputEx>();
			}
			Runtime::MonoVTable* InputEx::GetInstanceVTable()
			{
				return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
			}
			bool InputEx::IsOfType(Runtime::MonoClass* klass)
			{
				if (auto vtable = GetInstanceVTable(); vtable != nullptr)
					return vtable->GetClass() == klass;
				return false;
			}
			MONO_OBJECT_ISNULL_DEF(InputEx);
			// --------------- START CLASS MEMBERS --------------- //
			unknown_type InputEx::keyGuard()
			{
				static uintptr_t _offset = MonoClass()->GetField("keyGuard")->GetOffset();
				return Memory::read<unknown_type>(StaticInstance() + _offset);
			}
			void InputEx::keyGuard_Set(unknown_type value)
			{
				static uintptr_t _offset = MonoClass()->GetField("keyGuard")->GetOffset();
				Memory::write<unknown_type>(value, StaticInstance() + _offset);
			}
			Boolean InputEx::GetKey(unknown_type key)
			{
				static auto _method = MonoClass()->GetMethod(0x06004543)->GetCallable<Boolean(*)(unknown_type)>();
				return _method(key);
			}
			Boolean InputEx::GetKeyDown(unknown_type key)
			{
				static auto _method = MonoClass()->GetMethod(0x06004544)->GetCallable<Boolean(*)(unknown_type)>();
				return _method(key);
			}
			Boolean InputEx::GetKeyUp(unknown_type key)
			{
				static auto _method = MonoClass()->GetMethod(0x06004545)->GetCallable<Boolean(*)(unknown_type)>();
				return _method(key);
			}
			Boolean InputEx::ConsumeKeyDown(SDK::UnityEngine::KeyCode key)
			{
				static auto _method = MonoClass()->GetMethod(0x06004546)->GetCallable<Boolean(*)(SDK::UnityEngine::KeyCode)>();
				return _method(key);
			}
			UnityEngine::Vector2 InputEx::get_NormalizedMousePosition()
			{
				static auto _method = MonoClass()->GetMethod(0x06004547)->GetCallable<UnityEngine::Vector2(*)()>();
				return _method();
			}
		};
	}
}
