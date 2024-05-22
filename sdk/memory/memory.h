#pragma once

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <Windows.h>
#include <TlHelp32.h>
#include <wchar.h>
#include <stdio.h>

#define THIS_PTR reinterpret_cast<uintptr_t>(this)

namespace Memory
{
	inline uintptr_t monoBase;

	// read and write memory
	template <typename T>
	inline T read(uintptr_t address)
	{
		return *(T*)address;
	}
	// read buffer
	inline void read_buffer(uintptr_t address, void* buffer, size_t size)
	{
		memcpy(buffer, (void*)address, size);
	}
	// write buffer
	inline void write_buffer(uintptr_t address, void* buffer, size_t size)
	{
		memcpy((void*)address, buffer, size);
	}
	template <typename T>
	inline void write(T value, uintptr_t address)
	{
		*(T*)address = value;
	}

	// get module base (ideally get base through PEB)
	inline uintptr_t get_module_base(const wchar_t* module_name)
	{
		return reinterpret_cast<uintptr_t>(GetModuleHandle(module_name));
	}

	// get exported function (same here)
	inline uintptr_t get_export(uintptr_t module_handle, const char* function_name)
	{
		return reinterpret_cast<uintptr_t>(GetProcAddress(reinterpret_cast<HMODULE>(module_handle), function_name));
	}

	inline bool Initialize()
	{
		monoBase = get_module_base(L"mono-2.0-bdwgc.dll");
		return monoBase != 0;
	}
}