#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemPC.OnlineVoiceInterfacePC.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                      = 0,
	MUTE_AllButFriends             = 1,
	MUTE_All                       = 2,
	MUTE_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemPC.OnlineVoiceInterfacePC.LocalTalkerPC
// 0x185BB731890
struct FLocalTalkerPC
{
	unsigned char                                      UnknownData00[0x185BB731890];                             // 0x0000(0x185BB731890) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
