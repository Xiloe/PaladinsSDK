#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_XAudio2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class XAudio2.XAudio2Device
// 0x00B4 (0x0460 - 0x03AC)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x03AC(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
