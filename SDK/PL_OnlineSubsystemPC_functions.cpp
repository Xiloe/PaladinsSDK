// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume
// (Final, Iterator, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendPlayerSessionResume(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume");

	UOnlineSubsystemPC_SendPlayerSessionResume_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause
// (Iterator, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendPlayerSessionPause(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause");

	UOnlineSubsystemPC_SendPlayerSessionPause_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd
// (Final, Defined, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// int                            ExitStatusId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendPlayerSessionEnd(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd");

	UOnlineSubsystemPC_SendPlayerSessionEnd_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;
	params.ExitStatusId = ExitStatusId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart
// (Defined, Iterator, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendPlayerSessionStart(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart");

	UOnlineSubsystemPC_SendPlayerSessionStart_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting
// (PreOperator, NetReliable, Event, HasOptionalParms)
// Parameters:
// bool                           PlayerMuteSetting              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::UpdatePlayerMuteSetting(bool PlayerMuteSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting");

	UOnlineSubsystemPC_UpdatePlayerMuteSetting_Params params;
	params.PlayerMuteSetting = PlayerMuteSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, Operator)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsTalkerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted");

	UOnlineSubsystemPC_IsTalkerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate");

	UOnlineSubsystemPC_ClearGetUserAccountInfoDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddGetUserAccountInfoDelegate
// (Iterator, Singular, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddGetUserAccountInfoDelegate");

	UOnlineSubsystemPC_AddGetUserAccountInfoDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo
// (Defined, Iterator, Singular, NetReliable, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::GetUserAccountInfo(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo");

	UOnlineSubsystemPC_GetUserAccountInfo_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bSuccessful                    (Parm)
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved");

	UOnlineSubsystemPC_OnUserAccountInfoRetrieved_Params params;
	params.bSuccessful = bSuccessful;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Event, Static)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_RemoveAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate");

	UOnlineSubsystemPC_RemoveAccountPickerCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate
// (Final, Defined, Iterator, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate");

	UOnlineSubsystemPC_AddAccountPickerCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAccountPickerComplete
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bForceLogin                    (Parm)

void UOnlineSubsystemPC::STATIC_OnAccountPickerComplete(bool bForceLogin)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnAccountPickerComplete");

	UOnlineSubsystemPC_OnAccountPickerComplete_Params params;
	params.bForceLogin = bForceLogin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFilterTextDelegate
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Operator, Static)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_ClearFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFilterTextDelegate");

	UOnlineSubsystemPC_ClearFilterTextDelegate_Params params;
	params.FilterTextDelegate = FilterTextDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFilterTextDelegate
// (Final, Latent, PreOperator, Singular, Simulated, Exec, Native, Operator, Static)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFilterTextDelegate");

	UOnlineSubsystemPC_AddFilterTextDelegate_Params params;
	params.FilterTextDelegate = FilterTextDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFilterText
// (Final, Iterator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FString                 OriginalText                   (Parm, NeedCtorLink)
// struct FString                 FilteredText                   (Parm, NeedCtorLink)
// bool                           bCensorCompletely              (Parm)

void UOnlineSubsystemPC::STATIC_OnFilterText(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnFilterText");

	UOnlineSubsystemPC_OnFilterText_Params params;
	params.OriginalText = OriginalText;
	params.FilteredText = FilteredText;
	params.bCensorCompletely = bCensorCompletely;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckFilterText
// (Final, Defined, Iterator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CheckFilterText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CheckFilterText");

	UOnlineSubsystemPC_CheckFilterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// (Final, Defined, Iterator, Latent, Net, Simulated, Exec, Native, Operator, Static)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate");

	UOnlineSubsystemPC_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Operator, Static)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate");

	UOnlineSubsystemPC_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsersByUniqueNetIds");

	UOnlineSubsystemPC_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersDelegate
// (Final, Defined, Iterator, PreOperator, Simulated, Native)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersDelegate");

	UOnlineSubsystemPC_ClearPrivilegeCheckedForUsersDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersDelegate
// (Final, Defined, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersDelegate");

	UOnlineSubsystemPC_AddPrivilegeCheckedForUsersDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsers
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResult> Results                        (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnPrivilegeCheckedForUsers(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsers");

	UOnlineSubsystemPC_OnPrivilegeCheckedForUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsersByUniqueNetIds
// (Defined, Iterator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsersByUniqueNetIds");

	UOnlineSubsystemPC_CanCommunicateTextWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsers
// (Final, Latent, Net, Simulated, Exec, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSessionMemberInfo> Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_CanCommunicateTextWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsers");

	UOnlineSubsystemPC_CanCommunicateTextWithUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsersByUniqueNetIds
// (Defined, Latent, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsersByUniqueNetIds");

	UOnlineSubsystemPC_CanCommunicateVoiceWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsers
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSessionMemberInfo> Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanCommunicateVoiceWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsers");

	UOnlineSubsystemPC_CanCommunicateVoiceWithUsers_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch
// (Final, Defined, Iterator, Net, Native)

void UOnlineSubsystemPC::CheckForGameInviteOnLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch");

	UOnlineSubsystemPC_CheckForGameInviteOnLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId
// (PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            ControllerId                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId");

	UOnlineSubsystemPC_GetControllerIdFromNetId_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CacheLoggedInGamepad
// (Iterator, Singular, Net, NetReliable, Native, HasOptionalParms)

void UOnlineSubsystemPC::CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CacheLoggedInGamepad");

	UOnlineSubsystemPC_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent
// (Iterator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)

void UOnlineSubsystemPC::STATIC_UnsubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent");

	UOnlineSubsystemPC_UnsubscribeToStatisticEvent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent
// (Defined, PreOperator, NetReliable, Simulated, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)
// struct FScriptDelegate         EventDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_SubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FScriptDelegate& EventDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent");

	UOnlineSubsystemPC_SubscribeToStatisticEvent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;
	params.EventDelegate = EventDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStatisticChanged
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)
// struct FString                 NewStatValue                   (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnStatisticChanged(const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FString& NewStatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnStatisticChanged");

	UOnlineSubsystemPC_OnStatisticChanged_Params params;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;
	params.NewStatValue = NewStatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAchievements
// (Iterator, Singular, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)

void UOnlineSubsystemPC::ClearAchievements(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAchievements");

	UOnlineSubsystemPC_ClearAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// (Latent, Singular, NetReliable, Exec, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements");

	UOnlineSubsystemPC_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
// (Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate");

	UOnlineSubsystemPC_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
// (Iterator, Latent, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate");

	UOnlineSubsystemPC_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            TitleId                        (Parm)

void UOnlineSubsystemPC::STATIC_OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete");

	UOnlineSubsystemPC_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
// (Iterator, Latent, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements");

	UOnlineSubsystemPC_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// (Defined, Iterator, PreOperator, Net, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate");

	UOnlineSubsystemPC_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate");

	UOnlineSubsystemPC_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete");

	UOnlineSubsystemPC_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
// (Final, Defined, Iterator, NetReliable, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// float                          PercentComplete                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement");

	UOnlineSubsystemPC_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// (Final, Latent, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage");

	UOnlineSubsystemPC_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
// (Defined, Iterator, Singular, Net, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate");

	UOnlineSubsystemPC_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
// (Iterator, Latent, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate");

	UOnlineSubsystemPC_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
// (Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived");

	UOnlineSubsystemPC_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
// (Final, Singular, Net, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemPC::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages");

	UOnlineSubsystemPC_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
// (Final, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate");

	UOnlineSubsystemPC_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
// (Latent, PreOperator, Singular, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate");

	UOnlineSubsystemPC_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete");

	UOnlineSubsystemPC_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
// (Final, Defined, Singular, NetReliable, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame");

	UOnlineSubsystemPC_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// (Defined, Latent, PreOperator, Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate");

	UOnlineSubsystemPC_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
// (Defined, Iterator, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate");

	UOnlineSubsystemPC_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite");

	UOnlineSubsystemPC_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendGameInviteToFriends(unsigned char LocalUserNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends");

	UOnlineSubsystemPC_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendGameInviteToFriend(unsigned char LocalUserNum, const struct FName& SessionName, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend");

	UOnlineSubsystemPC_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend");

	UOnlineSubsystemPC_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
// (Final, Iterator, Singular, Net, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate");

	UOnlineSubsystemPC_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
// (Final, Defined, Latent, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate");

	UOnlineSubsystemPC_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived");

	UOnlineSubsystemPC_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
// (Defined, NetReliable, Simulated, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend");

	UOnlineSubsystemPC_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite");

	UOnlineSubsystemPC_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
// (Defined, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite");

	UOnlineSubsystemPC_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// (Defined, Iterator, Singular, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate");

	UOnlineSubsystemPC_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// (Latent, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate");

	UOnlineSubsystemPC_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete");

	UOnlineSubsystemPC_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
// (Defined, Latent, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName");

	UOnlineSubsystemPC_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
// (Final, Latent, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend");

	UOnlineSubsystemPC_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemPC_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage");

	UOnlineSubsystemPC_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemPC::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage");

	UOnlineSubsystemPC_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
// (Final, PreOperator, Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemPC_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemPC_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
// (Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete");

	UOnlineSubsystemPC_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
// (PreOperator, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage");

	UOnlineSubsystemPC_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Defined, PreOperator, Singular, Simulated, Native)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemPC_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
// (Defined, PreOperator, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NetId                          (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId");

	UOnlineSubsystemPC_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemPC_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
// (Final, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete");

	UOnlineSubsystemPC_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemPC_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete");

	UOnlineSubsystemPC_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
// (Defined, Latent, NetReliable, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults");

	UOnlineSubsystemPC_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
// (Iterator, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate");

	UOnlineSubsystemPC_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate");

	UOnlineSubsystemPC_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
// (Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete");

	UOnlineSubsystemPC_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.HideKeyboardUI
// (Iterator, Latent, NetReliable, Simulated, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::HideKeyboardUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.HideKeyboardUI");

	UOnlineSubsystemPC_HideKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
// (Final, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI");

	UOnlineSubsystemPC_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
// (PreOperator, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 StatusString                   (Parm, NeedCtorLink)
// bool                           PlayerActive                   (OptionalParm, Parm)

void UOnlineSubsystemPC::STATIC_SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus");

	UOnlineSubsystemPC_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusString = StatusString;
	params.PlayerActive = PlayerActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
// (Final, Defined, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemPC_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemPC_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemPC::STATIC_OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange");

	UOnlineSubsystemPC_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Operator)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemPC::GetLocale()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale");

	UOnlineSubsystemPC_GetLocale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemPC::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType");

	UOnlineSubsystemPC_GetNATType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// (Final, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemPC_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemPC_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UOnlineSubsystemPC::STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange");

	UOnlineSubsystemPC_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus
// (Defined, Latent, PreOperator, Simulated, Exec, Operator)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineServerConnectionStatus> UOnlineSubsystemPC::GetCurrentConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus");

	UOnlineSubsystemPC_GetCurrentConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// (Final, Defined, Iterator, PreOperator, Event, Operator)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected");

	UOnlineSubsystemPC_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// (Defined, Iterator, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate");

	UOnlineSubsystemPC_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate");

	UOnlineSubsystemPC_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)
// bool                           bPauseGame                     (Parm)

void UOnlineSubsystemPC::STATIC_OnControllerChange(int ControllerId, bool bIsConnected, bool bPauseGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange");

	UOnlineSubsystemPC_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;
	params.bPauseGame = bPauseGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
// (Defined, Latent, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UOnlineSubsystemPC::STATIC_SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition");

	UOnlineSubsystemPC_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Operator)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemPC::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition");

	UOnlineSubsystemPC_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate");

	UOnlineSubsystemPC_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
// (Final, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate");

	UOnlineSubsystemPC_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
// (Iterator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UOnlineSubsystemPC::STATIC_OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange");

	UOnlineSubsystemPC_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemPC_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
// (Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate");

	UOnlineSubsystemPC_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemPC::STATIC_OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange");

	UOnlineSubsystemPC_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection");

	UOnlineSubsystemPC_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// (Final, Iterator, Latent, PreOperator, NetReliable, Native, HasOptionalParms)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex");

	UOnlineSubsystemPC_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
// (Latent, Singular, Net, Simulated, Exec)
// Parameters:
// TArray<struct FDouble>         Mus                            (Parm, NeedCtorLink)
// TArray<struct FDouble>         Sigmas                         (Parm, NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (Parm, OutParm)
// struct FDouble                 OutAggregateSigma              (Parm, OutParm)

void UOnlineSubsystemPC::CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill");

	UOnlineSubsystemPC_CalcAggregateSkill_Params params;
	params.Mus = Mus;
	params.Sigmas = Sigmas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAggregateMu != nullptr)
		*OutAggregateMu = params.OutAggregateMu;
	if (OutAggregateSigma != nullptr)
		*OutAggregateSigma = params.OutAggregateSigma;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid");

	UOnlineSubsystemPC_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid");

	UOnlineSubsystemPC_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemPC_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
// (Final, Latent, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemPC_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
// (Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemPC_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
// (Defined, Iterator, Latent, Singular, Simulated, Event, Static)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid");

	UOnlineSubsystemPC_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid");

	UOnlineSubsystemPC_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores");

	UOnlineSubsystemPC_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
// (Iterator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemPC_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemPC_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
// (Defined, Iterator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete");

	UOnlineSubsystemPC_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
// (Defined, PreOperator, Singular, NetReliable, Operator)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats");

	UOnlineSubsystemPC_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats");

	UOnlineSubsystemPC_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
// (Defined, PreOperator, Singular, NetReliable, Simulated, Operator)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemPC::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats");

	UOnlineSubsystemPC_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// (PreOperator, Singular, Simulated, Native)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemPC_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemPC_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
// (Final, Defined, Latent, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemPC_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// (Defined, Latent, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank");

	UOnlineSubsystemPC_ReadOnlineStatsByRank_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends
// (Latent, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           FavoriteFriendsOnly            (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadOnlineStatForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, bool FavoriteFriendsOnly, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends");

	UOnlineSubsystemPC_ReadOnlineStatForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.FavoriteFriendsOnly = FavoriteFriendsOnly;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// (Final, Latent, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats");

	UOnlineSubsystemPC_ReadOnlineStats_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer
// (Final, Iterator, Latent, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadOnlineStatsForPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer");

	UOnlineSubsystemPC_ReadOnlineStatsForPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete");

	UOnlineSubsystemPC_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
// (Final, Defined, Singular, Net, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList");

	UOnlineSubsystemPC_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCustomOnlineDelegates
// (Defined, Latent, Net, Simulated, Exec, Native, Operator, Static)

void UOnlineSubsystemPC::STATIC_ClearCustomOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCustomOnlineDelegates");

	UOnlineSubsystemPC_ClearCustomOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// (Final, Defined, Latent, Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate");

	UOnlineSubsystemPC_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate");

	UOnlineSubsystemPC_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
// (Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList");

	UOnlineSubsystemPC_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete");

	UOnlineSubsystemPC_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemPC::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate");

	UOnlineSubsystemPC_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
// (Final, Defined, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemPC::STATIC_AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate");

	UOnlineSubsystemPC_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void UOnlineSubsystemPC::STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange");

	UOnlineSubsystemPC_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemPC_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
// (Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemPC_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete");

	UOnlineSubsystemPC_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings");

	UOnlineSubsystemPC_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
// (Final, Defined, Iterator, Latent, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemPC::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings");

	UOnlineSubsystemPC_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// (Final, Defined, PreOperator, Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemPC_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemPC_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
// (Defined, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete");

	UOnlineSubsystemPC_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
// (Iterator, PreOperator, Singular, NetReliable, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings");

	UOnlineSubsystemPC_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// (Final, Defined, Iterator, Singular, Net, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate");

	UOnlineSubsystemPC_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
// (Final, Iterator, Latent, PreOperator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate");

	UOnlineSubsystemPC_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
// (Iterator, Simulated, Native)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate");

	UOnlineSubsystemPC_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
// (Final, Iterator, Latent, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate");

	UOnlineSubsystemPC_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
// (Defined, PreOperator, Singular, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin");

	UOnlineSubsystemPC_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// (Final, Defined, Iterator, Net, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin");

	UOnlineSubsystemPC_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate
// (Defined, Iterator, Latent, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         CurrentUserDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate");

	UOnlineSubsystemPC_ClearCurrentUserChangedDelegate_Params params;
	params.CurrentUserDelegate = CurrentUserDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddCurrentUserChangedDelegate
// (Iterator, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         CurrentUserDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddCurrentUserChangedDelegate");

	UOnlineSubsystemPC_AddCurrentUserChangedDelegate_Params params;
	params.CurrentUserDelegate = CurrentUserDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate");

	UOnlineSubsystemPC_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
// (Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate");

	UOnlineSubsystemPC_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate");

	UOnlineSubsystemPC_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
// (Final, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate");

	UOnlineSubsystemPC_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
// (PreOperator, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI");

	UOnlineSubsystemPC_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
// (Defined, PreOperator, Net, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted");

	UOnlineSubsystemPC_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// (Latent, Net, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends");

	UOnlineSubsystemPC_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
// (Final, Iterator, Latent, Singular, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend");

	UOnlineSubsystemPC_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData");

	UOnlineSubsystemPC_CanUploadFitnessData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareKinectContent
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareKinectContent");

	UOnlineSubsystemPC_CanShareKinectContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareWithSocialNetwork
// (Final, Latent, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareWithSocialNetwork");

	UOnlineSubsystemPC_CanShareWithSocialNetwork_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanBrowseInternet
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanBrowseInternet");

	UOnlineSubsystemPC_CanBrowseInternet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumVideoContent
// (Final, Iterator, Singular, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumVideoContent");

	UOnlineSubsystemPC_CanAccessPremiumVideoContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumContent
// (Iterator, Singular, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumContent");

	UOnlineSubsystemPC_CanAccessPremiumContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUseCloudStorage
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanUseCloudStorage");

	UOnlineSubsystemPC_CanUseCloudStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanRecordDVRClips
// (Final, Defined, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanRecordDVRClips");

	UOnlineSubsystemPC_CanRecordDVRClips_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
// (Defined, Latent, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation");

	UOnlineSubsystemPC_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles");

	UOnlineSubsystemPC_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
// (Final, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent");

	UOnlineSubsystemPC_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareUserCreatedContent
// (Latent, Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareUserCreatedContent");

	UOnlineSubsystemPC_CanShareUserCreatedContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice
// (Final, Latent, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice");

	UOnlineSubsystemPC_CanCommunicateVoice_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVideo
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVideo");

	UOnlineSubsystemPC_CanCommunicateVideo_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateText
// (Final, Iterator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateText");

	UOnlineSubsystemPC_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
// (Net, NetReliable, Simulated, Exec)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline");

	UOnlineSubsystemPC_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeLevelCheckedDelegate
// (Latent, PreOperator, Simulated, Native)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeLevelCheckedDelegate");

	UOnlineSubsystemPC_ClearPrivilegeLevelCheckedDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeLevelCheckedDelegate
// (Iterator, Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeLevelCheckedDelegate");

	UOnlineSubsystemPC_AddPrivilegeLevelCheckedDelegate_Params params;
	params.PrivilegeDelegate = PrivilegeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeLevelChecked
// (Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UOnlineSubsystemPC::STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeLevelChecked");

	UOnlineSubsystemPC_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname");

	UOnlineSubsystemPC_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
// (Defined, Iterator, Latent, PreOperator, NetReliable, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId");

	UOnlineSubsystemPC_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemPC::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus");

	UOnlineSubsystemPC_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate");

	UOnlineSubsystemPC_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
// (Iterator, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate");

	UOnlineSubsystemPC_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemPC::STATIC_OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted");

	UOnlineSubsystemPC_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
// (Iterator, Simulated, Exec, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.Logout");

	UOnlineSubsystemPC_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.PairUserAndControllerAtIndex
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Static)
// Parameters:
// unsigned char                  PlayerIndex                    (Parm)
// unsigned char                  ControllerIndex                (Parm)
// int                            PairIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_PairUserAndControllerAtIndex(unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.PairUserAndControllerAtIndex");

	UOnlineSubsystemPC_PairUserAndControllerAtIndex_Params params;
	params.PlayerIndex = PlayerIndex;
	params.ControllerIndex = ControllerIndex;
	params.PairIndex = PairIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearSystemUserContrllerPairingChangedDelegate
// (Iterator, PreOperator, Net, Simulated, Native)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearSystemUserContrllerPairingChangedDelegate");

	UOnlineSubsystemPC_ClearSystemUserContrllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddSystemUserContrllerPairingChangedDelegate
// (Latent, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddSystemUserContrllerPairingChangedDelegate");

	UOnlineSubsystemPC_AddSystemUserContrllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnSystemUserControllerPairingChanged
// (PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            NewLocalUserNum                (Parm)
// int                            PreviousLocalUserNum           (Parm)

void UOnlineSubsystemPC::STATIC_OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnSystemUserControllerPairingChanged");

	UOnlineSubsystemPC_OnSystemUserControllerPairingChanged_Params params;
	params.NewLocalUserNum = NewLocalUserNum;
	params.PreviousLocalUserNum = PreviousLocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate");

	UOnlineSubsystemPC_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
// (Defined, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate");

	UOnlineSubsystemPC_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
// (PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UOnlineSubsystemPC::STATIC_OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed");

	UOnlineSubsystemPC_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin");

	UOnlineSubsystemPC_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
// (Final, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.Login");

	UOnlineSubsystemPC_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen
// (Final, Defined, Iterator, Singular, Net, NetReliable, Event, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::IsAccountPickerOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen");

	UOnlineSubsystemPC_IsAccountPickerOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
// (Defined, Latent, PreOperator, NetReliable, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bForceLogin                    (OptionalParm, Parm)
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ShowLoginUI(unsigned char LocalUserNum, bool bForceLogin, bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI");

	UOnlineSubsystemPC_ShowLoginUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bForceLogin = bForceLogin;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
// (Final, Latent, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemPC::STATIC_OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange");

	UOnlineSubsystemPC_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
// (PreOperator, NetReliable, Native, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState");

	UOnlineSubsystemPC_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// (Final, Iterator, Latent, NetReliable, Native, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents");

	UOnlineSubsystemPC_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Native)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate");

	UOnlineSubsystemPC_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
// (Final, Defined, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate");

	UOnlineSubsystemPC_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Event, Static)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile");

	UOnlineSubsystemPC_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete");

	UOnlineSubsystemPC_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemPC::STATIC_OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange");

	UOnlineSubsystemPC_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearURLTokenRetrievedDelegate
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         tsrDelegate                    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearURLTokenRetrievedDelegate");

	UOnlineSubsystemPC_ClearURLTokenRetrievedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.tsrDelegate = tsrDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddURLTokenRetrievedDelegate
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         tsrDelegate                    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_AddURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AddURLTokenRetrievedDelegate");

	UOnlineSubsystemPC_AddURLTokenRetrievedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.tsrDelegate = tsrDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL
// (Final, Defined, PreOperator, NetReliable, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::GetTokenAndSignatureForURL(unsigned char LocalUserNum, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL");

	UOnlineSubsystemPC_GetTokenAndSignatureForURL_Params params;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnTokenAndSignatureRetrieved(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved");

	UOnlineSubsystemPC_OnTokenAndSignatureRetrieved_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnCurrentUserChanged
// (Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 CurrentUser                    (Parm, NeedCtorLink)
// struct FString                 LoggedInUser                   (Parm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnCurrentUserChanged");

	UOnlineSubsystemPC_OnCurrentUserChanged_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CurrentUser = CurrentUser;
	params.LoggedInUser = LoggedInUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineSubsystemPC::STATIC_OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled");

	UOnlineSubsystemPC_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemPC::STATIC_OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange");

	UOnlineSubsystemPC_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.Init");

	UOnlineSubsystemPC_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll
// (Final, Defined, Iterator, Latent, NetReliable, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll");

	UOnlineVoiceInterfacePC_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll");

	UOnlineVoiceInterfacePC_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetSpeechRecognitionObject
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetSpeechRecognitionObject");

	UOnlineVoiceInterfacePC_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SelectVocabulary
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SelectVocabulary");

	UOnlineVoiceInterfacePC_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearRecognitionCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Native)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearRecognitionCompleteDelegate");

	UOnlineVoiceInterfacePC_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddRecognitionCompleteDelegate
// (Final, Defined, Iterator, NetReliable, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::STATIC_AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddRecognitionCompleteDelegate");

	UOnlineVoiceInterfacePC_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnRecognitionComplete
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)

void UOnlineVoiceInterfacePC::STATIC_OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnRecognitionComplete");

	UOnlineVoiceInterfacePC_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults
// (Final, Defined, Latent, Singular, Native, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults");

	UOnlineVoiceInterfacePC_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition
// (Defined, Latent, PreOperator, Singular, Simulated, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition");

	UOnlineVoiceInterfacePC_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition
// (Defined, Net, NetReliable, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition");

	UOnlineVoiceInterfacePC_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice
// (Defined, Iterator, PreOperator, Singular, Simulated, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineVoiceInterfacePC::STATIC_StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice");

	UOnlineVoiceInterfacePC_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice
// (Defined, Iterator, Latent, Singular, NetReliable, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineVoiceInterfacePC::STATIC_StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice");

	UOnlineVoiceInterfacePC_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate
// (Defined, PreOperator, Simulated, Native)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate");

	UOnlineVoiceInterfacePC_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddPlayerTalkingDelegate
// (Iterator, Latent, PreOperator, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::STATIC_AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddPlayerTalkingDelegate");

	UOnlineVoiceInterfacePC_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnPlayerTalkingStateChange
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// bool                           bIsTalking                     (Parm)

void UOnlineVoiceInterfacePC::STATIC_OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnPlayerTalkingStateChange");

	UOnlineVoiceInterfacePC_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, Operator)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::IsTalkerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted");

	UOnlineVoiceInterfacePC_IsTalkerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker
// (PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker");

	UOnlineVoiceInterfacePC_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker
// (Singular, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker");

	UOnlineVoiceInterfacePC_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UpdatePlayerMuteSetting
// (PreOperator, NetReliable, Event, HasOptionalParms)
// Parameters:
// bool                           PlayerMuteSetting              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::UpdatePlayerMuteSetting(bool PlayerMuteSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UpdatePlayerMuteSetting");

	UOnlineVoiceInterfacePC_UpdatePlayerMuteSetting_Params params;
	params.PlayerMuteSetting = PlayerMuteSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetRemoteTalkerPriority
// (Defined, Iterator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetRemoteTalkerPriority");

	UOnlineVoiceInterfacePC_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent
// (Final, Defined, PreOperator, Singular, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent");

	UOnlineVoiceInterfacePC_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking
// (Final, Defined, Iterator, Latent, Singular, Net, Event, Operator)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking");

	UOnlineVoiceInterfacePC_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking
// (Defined, Latent, Net, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking");

	UOnlineVoiceInterfacePC_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker");

	UOnlineVoiceInterfacePC_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker");

	UOnlineVoiceInterfacePC_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterLocalTalker
// (Final, PreOperator, Simulated, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterLocalTalker");

	UOnlineVoiceInterfacePC_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterLocalTalker
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterLocalTalker");

	UOnlineVoiceInterfacePC_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
