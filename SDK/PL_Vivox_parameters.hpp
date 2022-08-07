#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Vivox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged
struct UVivoxOSSConnectors_OnGameChatBlockedChanged_Params
{
	bool                                               bIsActive;                                                // (Parm)
};

// Function Vivox.VivoxOSSConnectors.IsGameChatBlocked
struct UVivoxOSSConnectors_IsGameChatBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatStopping
struct UVivoxOSSConnectors_SignalGameChatStopping_Params
{
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting
struct UVivoxOSSConnectors_SignalGameChatAttempting_Params
{
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds
struct UVivoxOSSConnectors_OnPrivilegeCheckedForUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     Results;                                                  // (Parm, NeedCtorLink)
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds
struct UVivoxOSSConnectors_CanCommunicateVoiceWithUsersByUniqueNetIds_Params
{
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked
struct UVivoxOSSConnectors_OnPrivilegeLevelChecked_Params
{
	int                                                ChannelJoinCount;                                         // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoice
struct UVivoxOSSConnectors_CanCommunicateVoice_Params
{
	int                                                ChannelJoinCount;                                         // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Vivox.VivoxOSSConnectors.RemoveClosure
struct UVivoxOSSConnectors_RemoveClosure_Params
{
	class UVivoxClosure*                               Closure;                                                  // (Parm)
};

// Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates
struct UVivoxOSSConnectors_RegisterOnlineDelegates_Params
{
};

// Function Vivox.VivoxClosure.ClearOnlineDelegates
struct UVivoxClosure_ClearOnlineDelegates_Params
{
};

// Function Vivox.VivoxClosure.RegisterOnlineDelegates
struct UVivoxClosure_RegisterOnlineDelegates_Params
{
	class UOnlineSubsystem*                            OnlineSub;                                                // (Parm)
};

// Function Vivox.VivoxClosure.Init
struct UVivoxClosure_Init_Params
{
	class UVivoxOSSConnectors*                         ParamConnector;                                           // (Parm)
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked
struct UVivoxClosureOnPrivilegeLevelChecked_OnPrivilegeLevelChecked_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates
struct UVivoxClosureOnPrivilegeLevelChecked_ClearOnlineDelegates_Params
{
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates
struct UVivoxClosureOnPrivilegeLevelChecked_RegisterOnlineDelegates_Params
{
	class UOnlineSubsystem*                            OnlineSub;                                                // (Parm)
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure
struct UVivoxClosureOnPrivilegeLevelChecked_InitClosure_Params
{
	int                                                ChannelJoinCount;                                         // (Parm)
	class UVivoxOSSConnectors*                         Connector;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
