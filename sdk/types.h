#pragma once

#include "memory/mono.h"
#include <codecvt>

#define __min(a,b) (((a) < (b)) ? (a) : (b))

typedef bool Boolean;
typedef unsigned char Byte;
typedef char SByte;
typedef short Int16;
typedef unsigned short UInt16;
typedef int Int32;
typedef unsigned int UInt32;
typedef unsigned __int64 UIntPtr;
typedef __int64 IntPtr;
typedef __int64 Int64;
typedef unsigned __int64 UInt64;
typedef float Single;
typedef double Double;
typedef char16_t Char;
typedef void Void;

template <typename T>
class Array
{
public:
	Int64 Count()
	{
		return Memory::read<Int64>(THIS_PTR + 0x18);
	}

	T Get(Int64 index)
	{
		return Memory::read<T>(THIS_PTR + 0x20 + (index * sizeof(T)));
	}
};

template <typename T>
class List
{
public:
	Array<T>* Items()
	{
		return Memory::read<Array<T>*>(THIS_PTR + 0x10);
	}

	Int32 Count()
	{
		return Memory::read<Int32>(THIS_PTR + 0x18);
	}

	T Get(Int32 index)
	{
		return Items()->Get(index);
	}
};

const class String
{
public:
	Int32 Length()
	{
		return Memory::read<Int32>(THIS_PTR + 0x10);
	}

	std::string Get()
	{
		char16_t wcharTemp[64] = { '\0' };
		Memory::read_buffer(THIS_PTR + 0x14, wcharTemp, Length() * 2);
		std::string u8_conv = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(wcharTemp);
		return u8_conv;
	}

	static String* New(const char* str)
	{
		return reinterpret_cast<String*>(Runtime::string_new(Runtime::MonoDomain::GetRootDomain(), str));
	}

	static String* New(const wchar_t* str)
	{
		return reinterpret_cast<String*>(Runtime::string_new_utf16(Runtime::MonoDomain::GetRootDomain(), str, wcslen(str)));
	}
};
