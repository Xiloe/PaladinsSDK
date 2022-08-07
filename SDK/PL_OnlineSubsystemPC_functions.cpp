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
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendPlayerSessionResume(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume");

	UOnlineSubsystemPC_SendPlayerSessionResume_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendPlayerSessionPause(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause");

	UOnlineSubsystemPC_SendPlayerSessionPause_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// int                            ExitStatusId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendPlayerSessionEnd(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd");

	UOnlineSubsystemPC_SendPlayerSessionEnd_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;
	params.ExitStatusId = ExitStatusId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 MultiplayerCorrelationId       (Parm, NeedCtorLink)
// int                            GameplayModeId                 (Parm)
// int                            DifficultyLevelId              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendPlayerSessionStart(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart");

	UOnlineSubsystemPC_SendPlayerSessionStart_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MultiplayerCorrelationId = MultiplayerCorrelationId;
	params.GameplayModeId = GameplayModeId;
	params.DifficultyLevelId = DifficultyLevelId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Event, HasOptionalParms)
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
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsTalkerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted");

	UOnlineSubsystemPC_IsTalkerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate
// (Final, Defined, Iterator, Singular, Native, Event, Operator)
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
// (Iterator, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate)
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
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_GetUserAccountInfo(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo");

	UOnlineSubsystemPC_GetUserAccountInfo_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved
// (Defined, Exec, Native, Event, Static)
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
// (PreOperator, Singular, NetReliable, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::RemoveAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate");

	UOnlineSubsystemPC_RemoveAccountPickerCompleteDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Native, Event)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate)
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
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, NetReliable, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
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
// (Defined, PreOperator, Singular, Net, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         FilterTextDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate)
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
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms)
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
// (Final, Defined, Latent, NetReliable, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
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
// (Defined, Iterator, PreOperator, Singular, Net, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate)
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
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (PreOperator, Net, Native, Event, Operator)
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
// (Final, Defined, Latent, PreOperator, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate)
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
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms)
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
// (Iterator, NetReliable, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSessionMemberInfo> Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanCommunicateTextWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users)
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
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (NetReliable, Simulated, Exec, Event, Operator)

void UOnlineSubsystemPC::CheckForGameInviteOnLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch");

	UOnlineSubsystemPC_CheckForGameInviteOnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native, HasOptionalParms)
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
// (Final, Defined, Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms)

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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)

void UOnlineSubsystemPC::UnsubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent");

	UOnlineSubsystemPC_UnsubscribeToStatisticEvent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerNetId = PlayerNetId;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent
// (Final, Defined, Latent, Net, NetReliable, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   StatName                       (Parm)
// struct FScriptDelegate         EventDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::SubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FScriptDelegate& EventDelegate)
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
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Operator)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// (Final, Singular, Net, NetReliable, Simulated, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::STATIC_GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
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
// (Final, Latent, PreOperator, Net, Native, Event, Operator)
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
// (Iterator, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
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
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// (Final, Defined, Iterator, Latent, NetReliable, Native, Event, Operator)
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
// (Defined, Iterator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
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
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// float                          PercentComplete                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement");

	UOnlineSubsystemPC_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// (Defined, Singular, Simulated, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
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
// (Final, Defined, Iterator, Latent, PreOperator, Native, Event, Operator)
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
// (Iterator, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
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
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, Latent, PreOperator, NetReliable, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemPC::STATIC_GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
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
// (Defined, Latent, Singular, Native, Event, Operator)
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
// (PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
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
// (Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame");

	UOnlineSubsystemPC_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// (Final, Defined, PreOperator, Singular, Net, Native, Event, Operator)
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
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
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
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendGameInviteToFriends(unsigned char LocalUserNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
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
// (Defined, Iterator, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FName& SessionName, const struct FUniqueNetId& Friend, const struct FString& Text)
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
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
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
// (Defined, Iterator, Latent, PreOperator, Native, Event, Operator)
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
// (Final, Defined, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
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
// (Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
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
// (Defined, PreOperator, Singular, Simulated, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
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
// (Defined, Singular, NetReliable, Simulated, Exec, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite");

	UOnlineSubsystemPC_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Operator)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// (Singular, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
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
// (Latent, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
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
// (Final, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
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
// (Final, Defined, Iterator, PreOperator, NetReliable, Native, Event, Operator)
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
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
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
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemPC::STATIC_GetPlayerStorage(unsigned char LocalUserNum)
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
// (Defined, Latent, Singular, Net, Native, Event, Operator)
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
// (Final, Iterator, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
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
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Final, Defined, Latent, Singular, Net, Native, Event, Operator)
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
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Iterator, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
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
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
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
// (Final, Defined, Exec, Native, Event, Static)
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
// (Final, Defined, Net, NetReliable, Exec, Event, Static)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::STATIC_GetKeyboardInputResults(unsigned char* bWasCanceled)
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
// (Final, Iterator, Latent, Singular, Native, Event, Operator)
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
// (Final, Defined, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
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
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Net, NetReliable, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_HideKeyboardUI(unsigned char LocalUserNum)
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
// (Final, Defined, Singular, Net, Simulated, Exec, Event, HasOptionalParms)
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
// (Final, Latent, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 StatusString                   (Parm, NeedCtorLink)
// bool                           PlayerActive                   (OptionalParm, Parm)

void UOnlineSubsystemPC::SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive)
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
// (Iterator, Latent, NetReliable, Native, Event, Operator)
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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
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
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)

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
// (Iterator, Latent, Net, NetReliable, Exec, Event, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemPC::STATIC_GetLocale()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale");

	UOnlineSubsystemPC_GetLocale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemPC::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType");

	UOnlineSubsystemPC_GetNATType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemPC_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// (Final, PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
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
// (Final, Latent, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, PreOperator, Net, Exec, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineServerConnectionStatus> UOnlineSubsystemPC::STATIC_GetCurrentConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus");

	UOnlineSubsystemPC_GetCurrentConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// (PreOperator, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected");

	UOnlineSubsystemPC_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate");

	UOnlineSubsystemPC_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
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
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UOnlineSubsystemPC::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
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
// (PreOperator, Singular, Net, NetReliable, Exec, Event, Static)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemPC::STATIC_GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition");

	UOnlineSubsystemPC_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// (Defined, Iterator, PreOperator, Native, Event, Operator)
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
// (Final, Latent, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
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
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, Latent, Singular, Native, Event, Operator)
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
// (Iterator, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
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
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection");

	UOnlineSubsystemPC_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// (Iterator, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
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
// (Final, Singular, NetReliable, Exec, Event, Operator)
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
// (Iterator, PreOperator, Singular, Net, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
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
// (Final, Defined, Latent, Singular, Exec, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::STATIC_GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid");

	UOnlineSubsystemPC_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Latent, PreOperator, Singular, Net, Native, Event, Operator)
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
// (Final, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
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
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, Singular, Net, HasOptionalParms)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::RegisterHostStatGuid(struct FString* HostStatGuid)
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
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::STATIC_GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid");

	UOnlineSubsystemPC_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// (Final, Iterator, Latent, Singular, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
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
// (Final, Iterator, Latent, PreOperator, Native, Event, Operator)
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
// (Final, Defined, Iterator, Latent, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
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
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats");

	UOnlineSubsystemPC_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// (Defined, Iterator, Latent, Singular, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
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
// (Final, Defined, Latent, Singular, Net, NetReliable, Event, Static)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemPC::STATIC_FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats");

	UOnlineSubsystemPC_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// (Final, Latent, Singular, Net, Native, Event, Operator)
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
// (Iterator, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
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
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Iterator, Latent, PreOperator, NetReliable, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::STATIC_GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
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
// (Defined, Iterator, NetReliable, Exec, Native, Event, HasOptionalParms)

void UOnlineSubsystemPC::ClearCustomOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCustomOnlineDelegates");

	UOnlineSubsystemPC_ClearCustomOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// (Iterator, Singular, Net, Native, Event, Operator)
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
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
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
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// (Final, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, PreOperator, Singular, Native, Event, Operator)
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
// (Final, Defined, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemPC::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
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
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Latent, PreOperator, NetReliable, Native, Event, Operator)
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
// (PreOperator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
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
// (Iterator, Exec, Native, Event, Static)
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
// (Final, PreOperator, Singular, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
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
// (Latent, Net, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemPC::STATIC_GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings");

	UOnlineSubsystemPC_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// (Iterator, Latent, Singular, Net, Native, Event, Operator)
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
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
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
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// (Singular, Native, Event, Operator)
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
// (Final, Iterator, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
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
// (Final, Iterator, Latent, PreOperator, Singular, Native, Event, Operator)
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
// (Final, Iterator, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
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
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin");

	UOnlineSubsystemPC_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// (NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin");

	UOnlineSubsystemPC_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate
// (Final, Defined, Iterator, Native, Event, Operator)
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
// (Iterator, Latent, PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         CurrentUserDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate)
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
// (Defined, PreOperator, Singular, Native, Event, Operator)
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
// (Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
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
// (Final, Defined, PreOperator, Singular, Native, Event, Operator)
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
// (Final, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
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
// (Final, Latent, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::ShowFriendsUI(unsigned char LocalUserNum)
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
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted");

	UOnlineSubsystemPC_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// (NetReliable, Exec, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
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
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend");

	UOnlineSubsystemPC_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData
// (PreOperator, Simulated, Exec, Event, Operator)
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
// (Simulated, Exec, Event, Operator)
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
// (Defined, Simulated, Exec, Event, Operator)
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
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Event, Operator)
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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Event, Operator)
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
// (Final, PreOperator, Simulated, Exec, Event, Operator)
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
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (Final, Defined, Simulated, Exec, Event, Operator)
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
// (Final, Iterator, PreOperator, Simulated, Exec, Event, Operator)
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
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (Final, Simulated, Exec, Event, Operator)
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


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanMultiplayerCrossPlay
// (Final, Iterator, NetReliable, Exec, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::CanMultiplayerCrossPlay(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.CanMultiplayerCrossPlay");

	UOnlineSubsystemPC_CanMultiplayerCrossPlay_Params params;
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


// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice
// (Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (Iterator, Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms)
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
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Operator)
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
// (Final, PreOperator, Net, Native, Event, Operator)
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
// (Iterator, Latent, PreOperator, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         PrivilegeDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate)
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
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Defined, PreOperator, Singular, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemPC::STATIC_GetPlayerNickname(unsigned char LocalUserNum)
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
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId");

	UOnlineSubsystemPC_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// (Defined, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemPC::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus");

	UOnlineSubsystemPC_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// (Defined, Iterator, PreOperator, Singular, Native, Event, Operator)
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
// (Iterator, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
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
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_Logout(unsigned char LocalUserNum)
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
// (Simulated, Exec, Event, Operator, Static)
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
// (Final, Iterator, Latent, NetReliable, Native, Event, Operator)
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
// (Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
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
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Iterator, PreOperator, Singular, Native, Event, Operator)
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
// (Defined, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
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
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::AutoLogin()
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
// (Latent, PreOperator, Singular, Simulated, Native, HasOptionalParms)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen
// (Final, Defined, Iterator, Net, Simulated, Exec, Event, HasOptionalParms)
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
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bForceLogin                    (OptionalParm, Parm)
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::ShowLoginUI(unsigned char LocalUserNum, bool bForceLogin, bool bShowOnlineOnly)
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
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)

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
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemPC::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState");

	UOnlineSubsystemPC_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents");

	UOnlineSubsystemPC_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// (PreOperator, Singular, Net, Native, Event, Operator)
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
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
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
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile");

	UOnlineSubsystemPC_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Singular, Net, NetReliable, Simulated, Native, Event, Static)

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
// (Defined, Iterator, PreOperator, NetReliable, Native, Event, Operator)
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
// (Final, Iterator, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         tsrDelegate                    (Parm, NeedCtorLink)

void UOnlineSubsystemPC::AddURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate)
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
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemPC::STATIC_GetTokenAndSignatureForURL(unsigned char LocalUserNum, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL");

	UOnlineSubsystemPC_GetTokenAndSignatureForURL_Params params;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)

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
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Latent, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll");

	UOnlineVoiceInterfacePC_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
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
// (Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
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
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
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
// (Defined, Iterator, PreOperator, Singular, Net, Native, Event, Operator)
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
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
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
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)

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
// (Iterator, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults");

	UOnlineVoiceInterfacePC_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition
// (Final, Defined, PreOperator, Singular, Net, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::StopSpeechRecognition(unsigned char LocalUserNum)
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
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition");

	UOnlineVoiceInterfacePC_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice
// (Final, Defined, Iterator, Latent, Singular, Net, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineVoiceInterfacePC::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice");

	UOnlineVoiceInterfacePC_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineVoiceInterfacePC::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice");

	UOnlineVoiceInterfacePC_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate
// (Final, Defined, Latent, Net, Native, Event, Operator)
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
// (Iterator, PreOperator, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineVoiceInterfacePC::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
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
// (Defined, Singular, Net, NetReliable, Simulated, Native, Event, Static)
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
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_IsTalkerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted");

	UOnlineVoiceInterfacePC_IsTalkerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker");

	UOnlineVoiceInterfacePC_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
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
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Event, HasOptionalParms)
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
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
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
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent");

	UOnlineVoiceInterfacePC_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking
// (Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking");

	UOnlineVoiceInterfacePC_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::STATIC_IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking");

	UOnlineVoiceInterfacePC_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker");

	UOnlineVoiceInterfacePC_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker
// (PreOperator, Singular, Net, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineVoiceInterfacePC::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
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
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Event, HasOptionalParms)
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
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Event, HasOptionalParms)
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
