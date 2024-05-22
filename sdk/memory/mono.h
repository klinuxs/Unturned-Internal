#pragma once
#include <cstdint>
#include "memory.h"
#include <codecvt>

#define ASSRN(obj) if (!obj) return nullptr
#define ASSC(obj) if (!obj) continue
#define ASSR(obj) if (!obj) return
#define ASS(obj, ret) if (!obj) return ret
#define ASST() if (!this) return nullptr

#define MONO_EXPORT_DECLARE(name, type) using mono_##name##_t = type; inline mono_##name##_t name
#define MONO_EXPORT_DEFINE(name) name = reinterpret_cast<mono_##name##_t>(Memory::get_export(Memory::monoBase, "mono_"#name));

#define MONO_OBJECT_ISNULL_DEC() bool IsNullReference()
#define MONO_OBJECT_ISNULL_DEF(name) bool name::IsNullReference() { return !this; }

#define MONO_CHECK_NULLREF() if (IsNullReference()) throw "NullReferenceException" // make this macro empty to not run checks

namespace Runtime
{
	class MonoClass;
	class MonoField;
	class MonoMethod;
	class MonoAssembly;
	class MonoDomain;
	class MonoHashTable;
	class MonoVTable;

	// excuse the random changing between uintptrs and void ptrs LOL

	//compile_method
	MONO_EXPORT_DECLARE(compile_method, uintptr_t(*)(MonoMethod*));
	//lookup_internal_call
	MONO_EXPORT_DECLARE(lookup_internal_call, uintptr_t(*)(MonoMethod*));
	//thread_attach
	MONO_EXPORT_DECLARE(thread_attach, void(*)(MonoDomain*));
	//object_new
	MONO_EXPORT_DECLARE(object_new, void* (*)(MonoDomain*, MonoClass*));
	//class_from_name
	MONO_EXPORT_DECLARE(class_from_name, MonoClass* (*)(void*, const char*, const char*));
	//class_get_methods
	MONO_EXPORT_DECLARE(class_get_methods, MonoMethod* (*)(MonoClass*, uintptr_t*));
	//runtime_invoke
	MONO_EXPORT_DECLARE(runtime_invoke, void* (*)(MonoMethod*, void*, void**, void**));
	//get_root_domain
	MONO_EXPORT_DECLARE(get_root_domain, MonoDomain* (*)());
	//assembly_get_image
	MONO_EXPORT_DECLARE(assembly_get_image, void* (*)(MonoAssembly*));
	//field_get_name
	MONO_EXPORT_DECLARE(field_get_name, const char* (*)(MonoField*));
	//class_get_name
	MONO_EXPORT_DECLARE(class_get_name, const char* (*)(MonoClass*));
	//class_get_namespace
	MONO_EXPORT_DECLARE(class_get_namespace, const char* (*)(MonoClass*));
	//assembly_get_name
	MONO_EXPORT_DECLARE(assembly_get_name, uintptr_t(*)(MonoAssembly*));
	//class_vtable
	MONO_EXPORT_DECLARE(class_vtable, MonoVTable* (*)(MonoDomain*, MonoClass*));
	//field_get_offset
	MONO_EXPORT_DECLARE(field_get_offset, uintptr_t(*)(MonoField*));
	//vtable_get_static_field_data
	MONO_EXPORT_DECLARE(vtable_get_static_field_data, uintptr_t(*)(MonoVTable*));
	//class_get_field_from_name
	MONO_EXPORT_DECLARE(class_get_field_from_name, MonoField* (*)(MonoClass*, const char*));
	//class_get_parent
	MONO_EXPORT_DECLARE(class_get_parent, MonoClass* (*)(MonoClass*));
	//string_new
	MONO_EXPORT_DECLARE(string_new, void* (*)(MonoDomain*, const char*));
	//string_new_utf16
	MONO_EXPORT_DECLARE(string_new_utf16, void* (*)(MonoDomain*, const wchar_t*, int));


	template <typename T>
	class MonoBox
	{
	public:
		T Unbox() // i havent tested this lol, but shouldnt need to use
		{
			if (!this)
				throw "Tried to read data from null boxed obj";
			return Memory::read<T>(THIS_PTR + 0x10);
		}
	};

	class MonoField
	{
	public:
		const char* GetName();
		uintptr_t GetOffset();
	};

	class MonoMethod
	{
	public:
		const char* GetName();
		unsigned int GetToken();

		template<typename T>
		T GetCallable()
		{
			auto native = Runtime::lookup_internal_call(this);
			if (native)
				return reinterpret_cast<T>(native);
			return reinterpret_cast<T>(Runtime::compile_method(this));
		}
		void* Invoke(void* instance, void** params);
	};

	class MonoAssembly
	{
	public:
		const char* GetName();
		MonoClass* GetClass(const char* name_space, const char* name);
	};

	class MonoDomain
	{
	public:
		static MonoDomain* GetRootDomain();
		int GetDomainID();
		MonoAssembly* GetAssemblyByName(const char* name);
	};

	class MonoVTable
	{
	public:
		unsigned char GetFlags();
		MonoClass* GetClass();

		uintptr_t GetStaticFieldData();
	};

	class MonoClass
	{
	public:
		const char* GetName();
		const char* GetNamespaceName();
		MonoClass* GetParent();
		bool IsChildOf(MonoClass* klass);
		MonoField* GetField(const char* name);
		MonoMethod* GetMethod(unsigned long token);

		template <typename T>
		T* CreateObject()
		{
			return reinterpret_cast<T*>(object_new(MonoDomain::GetRootDomain(), this));
		}
		MonoVTable* GetVTable();
	};

	inline bool Initialize()
	{
		if (!Memory::Initialize())
			return false;

		MONO_EXPORT_DEFINE(thread_attach);
		MONO_EXPORT_DEFINE(compile_method);
		MONO_EXPORT_DEFINE(lookup_internal_call);
		MONO_EXPORT_DEFINE(class_from_name);
		MONO_EXPORT_DEFINE(class_get_methods);
		MONO_EXPORT_DEFINE(object_new);
		MONO_EXPORT_DEFINE(runtime_invoke);
		MONO_EXPORT_DEFINE(get_root_domain);
		MONO_EXPORT_DEFINE(assembly_get_image);
		MONO_EXPORT_DEFINE(field_get_name);
		MONO_EXPORT_DEFINE(class_get_name);
		MONO_EXPORT_DEFINE(class_get_namespace);
		MONO_EXPORT_DEFINE(assembly_get_name);
		MONO_EXPORT_DEFINE(class_vtable);
		MONO_EXPORT_DEFINE(field_get_offset);
		MONO_EXPORT_DEFINE(vtable_get_static_field_data);
		MONO_EXPORT_DEFINE(class_get_field_from_name);
		MONO_EXPORT_DEFINE(class_get_parent);
		MONO_EXPORT_DEFINE(string_new);
		MONO_EXPORT_DEFINE(string_new_utf16);

		thread_attach(MonoDomain::GetRootDomain());
		return true;
	}
}