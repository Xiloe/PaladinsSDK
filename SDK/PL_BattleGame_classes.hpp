#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_BattleGame_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleGame.BattleObject
// 0x0000
class BattleObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattleObject");
		return ptr;
	}

};


// Class BattleGame.BattlePlayerController
// 0x185B665C250
class BattlePlayerController
{
public:
	unsigned char                                      UnknownData00[0x185B665C250];                             // 0x0000(0x185B665C250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattlePlayerController");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
