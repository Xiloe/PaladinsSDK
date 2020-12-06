#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_BattleClient_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleClient.BattleHUD
// 0x185B665C370
class BattleHUD
{
public:
	unsigned char                                      UnknownData00[0x185B665C370];                             // 0x0000(0x185B665C370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleHUD");
		return ptr;
	}

};


// Class BattleClient.BattleLaunch
// 0x0000
class BattleLaunch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleLaunch");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
