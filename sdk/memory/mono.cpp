#include "mono.h"

namespace Runtime
{
	// Implement MonoField methods
	const char* MonoField::GetName()
	{
		return field_get_name(this);
	}

	uintptr_t MonoField::GetOffset()
	{
		return field_get_offset(this);
	}

	// Implement MonoAssembly methods
	const char* MonoAssembly::GetName()
	{
		//assembly_get_name returns a wrapped string for some reason
		return Memory::read<const char*>(assembly_get_name(this));
	}

	MonoClass* MonoAssembly::GetClass(const char* name_space, const char* name)
	{
		const auto img = assembly_get_image(this);
		if (!img)
			return nullptr;
		return (MonoClass*)class_from_name(img, name_space, name);
	}

	// Implement MonoDomain methods
	MonoDomain* MonoDomain::GetRootDomain()
	{
		static auto domain = get_root_domain();
		return domain;
	}

	// changed with unity update, think works now
	MonoAssembly* MonoDomain::GetAssemblyByName(const char* name)
	{
		auto iter = *(uintptr_t*)((*(uintptr_t*)(THIS_PTR + 0xA0)) + 0x8);

		while (true)
		{
			auto assembly = *(MonoAssembly**)(iter + 0x0);
			if (assembly == 0)
				continue;

			if (strcmp(name, assembly->GetName()) == 0)
				return assembly;

			iter = *(uintptr_t*)(iter + 0x8);

			if (iter == 0)
				break;
		}

		return nullptr;
	}


	// Implement MonoClass methods
	const char* MonoClass::GetName()
	{
		return class_get_name(this);
	}

	const char* MonoClass::GetNamespaceName()
	{
		return class_get_namespace(this);
	}

	bool MonoClass::IsChildOf(MonoClass* klass)
	{
		auto cls = this;

		while (cls != nullptr)
		{
			if (cls == klass)
				return true;
			cls = cls->GetParent();
		}

		return false;
	}

	MonoField* MonoClass::GetField(const char* name)
	{
		return class_get_field_from_name(this, name);
	}

	MonoClass* MonoClass::GetParent()
	{
		return Memory::read<MonoClass*>(THIS_PTR + 0x30);
	}

	// get assemblies by index in the future
	MonoMethod* MonoClass::GetMethod(unsigned long token)
	{
		uintptr_t iter{};
		while (const auto method = Runtime::class_get_methods(this, &iter))
		{
			ASSC(method);
			if (token == method->GetToken())
				return method;
		}
		return nullptr;
	}

	MonoVTable* MonoClass::GetVTable()
	{
		return class_vtable(MonoDomain::GetRootDomain(), this);
	}

	unsigned int MonoMethod::GetToken()
	{
		return Memory::read<unsigned int>(THIS_PTR + 0x4);
	}
	void* MonoMethod::Invoke(void* instance, void** params)
	{	// shit sucks, just use compiled methods
		void* exc = nullptr;
		auto res = Runtime::runtime_invoke(this, instance, params, &exc);
		if (exc)
		{
			printf("Exception raised: %p", exc);
			return nullptr;
		}
		return res;
	}
	MonoClass* MonoVTable::GetClass()
	{
		return Memory::read<MonoClass*>(THIS_PTR + 0x0);
	}

	uintptr_t MonoVTable::GetStaticFieldData()
	{
		return vtable_get_static_field_data(this);
	}
}
