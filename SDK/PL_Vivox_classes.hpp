#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Vivox_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Vivox.VivoxOSSConnectors
// 0x185BB48BF70
class VivoxOSSConnectors
{
public:
	unsigned char                                      UnknownData00[0x185BB48BF70];                             // 0x0000(0x185BB48BF70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxOSSConnectors");
		return ptr;
	}

};


// Class Vivox.VivoxClosure
// 0x185BB48AA10
class VivoxClosure
{
public:
	unsigned char                                      UnknownData00[0x185BB48AA10];                             // 0x0000(0x185BB48AA10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxClosure");
		return ptr;
	}

};


// Class Vivox.VivoxClosureOnPrivilegeLevelChecked
// 0x185BB48E490
class VivoxClosureOnPrivilegeLevelChecked
{
public:
	unsigned char                                      UnknownData00[0x185BB48E490];                             // 0x0000(0x185BB48E490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxClosureOnPrivilegeLevelChecked");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
