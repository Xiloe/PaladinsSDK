#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemPC_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemPC.OnlineSubsystemPC
// 0x185BB49F170
class OnlineSubsystemPC
{
public:
	unsigned char                                      UnknownData00[0x185BB49F170];                             // 0x0000(0x185BB49F170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemPC.OnlineSubsystemPC");
		return ptr;
	}

};


// Class OnlineSubsystemPC.OnlineVoiceInterfacePC
// 0x185BB49D790
class OnlineVoiceInterfacePC
{
public:
	unsigned char                                      UnknownData00[0x185BB49D790];                             // 0x0000(0x185BB49D790) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemPC.OnlineVoiceInterfacePC");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
