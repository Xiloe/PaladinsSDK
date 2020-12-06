#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_XAudio2_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class XAudio2.XAudio2Device
// 0x0000
class XAudio2Device
{
public:

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
