#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_IpDrv_classes.hpp"
#include "PL_Engine_classes.hpp"
#include "PL_Core_classes.hpp"

namespace SDK
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
// 0x0005
struct FLocalTalkerPC
{
	unsigned long                                      bHasVoice : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bHasNetworkedVoice : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bIsRecognizingSpeech : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bWasTalking : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bIsTalking : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bIsRegistered : 1;                                        // 0x0000(0x0004)
	TEnumAsByte<EMuteType>                             MuteType;                                                 // 0x0004(0x0001)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
