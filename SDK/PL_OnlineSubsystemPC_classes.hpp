#pragma once

// Paladins (5.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemPC.OnlineSubsystemPC
// 0x036C (0x05F4 - 0x0288)
class UOnlineSubsystemPC : public UOnlineSubsystemCommonImpl
{
public:
	int                                                LoggedInPlayerNum;                                        // 0x0288(0x0004) (Const)
	struct FString                                     LoggedInPlayerName;                                       // 0x028C(0x0010) (Const, NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x029C(0x0008) (Const)
	TArray<struct FPointer>                            AsyncTasks;                                               // 0x02A4(0x0010) (Const, Native)
	struct FString                                     ProfileDataDirectory;                                     // 0x02B4(0x0010) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x02C4(0x0010) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                             // 0x02D4(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x02E4(0x0010) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x02F4(0x0008)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x02FC(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x030C(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x031C(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TokenAndSignatureRetrievedDelegates;                      // 0x032C(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PrivilegeCheckedForUsersDelegates;                        // 0x033C(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PrivilegeCheckedForUsersByUniqueNetIdsDelegates;          // 0x034C(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FilterTextDelegates;                                      // 0x035C(0x0010) (NeedCtorLink)
	class UOnlineVoiceInterfacePC*                     PCVoiceInt;                                               // 0x036C(0x0008) (Const)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x0374(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x0384(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCurrentUserChanged__Delegate;                         // 0x0394(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0394(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTokenAndSignatureRetrieved__Delegate;                 // 0x03A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x03B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x03C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x03D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x03E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate;         // 0x03F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x0404(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0404(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeLevelChecked__Delegate;                      // 0x0414(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0414(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x0424(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0424(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0434(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0434(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x0444(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0444(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0454(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0454(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0464(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0464(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x0474(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0474(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x0484(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0484(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0494(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0494(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x04A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData19[0x4];                                       // 0x04A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x04B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData20[0x4];                                       // 0x04B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x04C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData21[0x4];                                       // 0x04C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x04D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData22[0x4];                                       // 0x04D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x04E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData23[0x4];                                       // 0x04E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x04F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData24[0x4];                                       // 0x04F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0504(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0504(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x0514(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0514(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x0524(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0524(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x0534(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0534(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x0544(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0544(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x0554(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0554(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0564(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0564(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x0574(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0574(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x0584(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0584(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStatisticChanged__Delegate;                           // 0x0594(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0594(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsers__Delegate;                   // 0x05A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData35[0x4];                                       // 0x05A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsersByUniqueNetIds__Delegate;     // 0x05B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData36[0x4];                                       // 0x05B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFilterText__Delegate;                                 // 0x05C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData37[0x4];                                       // 0x05C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAccountPickerComplete__Delegate;                      // 0x05D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData38[0x4];                                       // 0x05D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserAccountInfoRetrieved__Delegate;                   // 0x05E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData39[0x4];                                       // 0x05E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemPC.OnlineSubsystemPC");
		return ptr;
	}


	bool STATIC_SendPlayerSessionResume(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId);
	bool STATIC_SendPlayerSessionPause(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId);
	bool STATIC_SendPlayerSessionEnd(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId);
	bool STATIC_SendPlayerSessionStart(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId);
	bool UpdatePlayerMuteSetting(bool PlayerMuteSetting);
	bool IsTalkerMuted(const struct FUniqueNetId& ConsoleId);
	void ClearGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_AddGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate);
	bool GetUserAccountInfo(unsigned char LocalUserNum);
	void STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo);
	void STATIC_RemoveAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_AddAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_OnAccountPickerComplete(bool bForceLogin);
	void STATIC_ClearFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate);
	void STATIC_AddFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate);
	void STATIC_OnFilterText(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely);
	bool CheckFilterText(const struct FString& Text);
	void STATIC_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results);
	void ClearPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeCheckedForUsers(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results);
	bool CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users);
	bool STATIC_CanCommunicateTextWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users);
	bool STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users);
	bool CanCommunicateVoiceWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users);
	void CheckForGameInviteOnLaunch();
	bool GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId);
	void CacheLoggedInGamepad();
	void STATIC_UnsubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName);
	void STATIC_SubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FScriptDelegate& EventDelegate);
	void STATIC_OnStatisticChanged(const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FString& NewStatValue);
	void ClearAchievements(unsigned char LocalUserNum, int TitleId);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void STATIC_AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void STATIC_OnReadAchievementsComplete(int TitleId);
	bool STATIC_ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void STATIC_AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void STATIC_OnUnlockAchievementComplete(bool bWasSuccessful);
	bool STATIC_UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void STATIC_AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void STATIC_OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void STATIC_AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void STATIC_OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void STATIC_AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void STATIC_OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool STATIC_SendGameInviteToFriends(unsigned char LocalUserNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool STATIC_SendGameInviteToFriend(unsigned char LocalUserNum, const struct FName& SessionName, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool STATIC_SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void STATIC_AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void STATIC_OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool STATIC_RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool STATIC_AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void STATIC_AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void STATIC_OnAddFriendByNameComplete(bool bWasSuccessful);
	bool STATIC_AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool STATIC_AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	bool STATIC_WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void STATIC_AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void STATIC_OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	bool STATIC_ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void STATIC_AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void STATIC_OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	void STATIC_AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void STATIC_OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void STATIC_AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void STATIC_OnKeyboardInputComplete(bool bWasSuccessful);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void STATIC_SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void STATIC_AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void STATIC_OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void STATIC_AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	TEnumAsByte<EOnlineServerConnectionStatus> GetCurrentConnectionStatus();
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void STATIC_AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void STATIC_OnControllerChange(int ControllerId, bool bIsConnected, bool bPauseGame);
	void STATIC_SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void STATIC_AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void STATIC_OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void STATIC_AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void STATIC_OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool STATIC_RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void STATIC_AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void STATIC_OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool STATIC_RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	bool STATIC_WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void STATIC_AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void STATIC_OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool STATIC_WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void STATIC_AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	bool STATIC_ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool STATIC_ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool STATIC_ReadOnlineStatForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, bool FavoriteFriendsOnly, int NumToRead);
	bool STATIC_ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	bool STATIC_ReadOnlineStatsForPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	void STATIC_OnReadOnlineStatsComplete(bool bWasSuccessful);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void STATIC_ClearCustomOnlineDelegates();
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void STATIC_AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	bool STATIC_ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void STATIC_OnReadFriendsComplete(bool bWasSuccessful);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void STATIC_AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void STATIC_AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void STATIC_OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void STATIC_AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void STATIC_AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	bool IsGuestLogin(unsigned char LocalUserNum);
	bool IsLocalLogin(unsigned char LocalUserNum);
	void ClearCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate);
	void STATIC_AddCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void STATIC_AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void STATIC_AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool STATIC_ShowFriendsUI(unsigned char LocalUserNum);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool STATIC_AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanMultiplayerCrossPlay(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	void ClearPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void STATIC_AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void STATIC_OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	bool STATIC_PairUserAndControllerAtIndex(unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex);
	void ClearSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void STATIC_AddSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void STATIC_OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void STATIC_AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void STATIC_OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool STATIC_AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool IsAccountPickerOpen();
	bool STATIC_ShowLoginUI(unsigned char LocalUserNum, bool bForceLogin, bool bShowOnlineOnly);
	void STATIC_OnFriendsChange();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void STATIC_AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool STATIC_ReadTitleFile(const struct FString& FileToRead);
	void STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void STATIC_OnMutingChange();
	void ClearURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate);
	void STATIC_AddURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate);
	bool GetTokenAndSignatureForURL(unsigned char LocalUserNum, const struct FString& URL);
	void STATIC_OnTokenAndSignatureRetrieved(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature);
	void STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser);
	void STATIC_OnLoginCancelled();
	void STATIC_OnLoginChange(unsigned char LocalUserNum);
	bool Init();
};


// Class OnlineSubsystemPC.OnlineVoiceInterfacePC
// 0x0078 (0x00D8 - 0x0060)
class UOnlineVoiceInterfacePC : public UObject
{
public:
	struct FPointer                                    OwningSubsystem;                                          // 0x0060(0x0008) (Const, Native, Transient)
	struct FPointer                                    VoiceEnginePtr;                                           // 0x0068(0x0008) (Const, Native, Transient)
	struct FLocalTalkerPC                              CurrentLocalTalker;                                       // 0x0070(0x0008)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x0088(0x0010) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0098(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x00A8(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                   // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemPC.OnlineVoiceInterfacePC");
		return ptr;
	}


	bool STATIC_UnmuteAll(unsigned char LocalUserNum);
	bool STATIC_MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	bool STATIC_SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool STATIC_SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void STATIC_AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void STATIC_OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool STATIC_StopSpeechRecognition(unsigned char LocalUserNum);
	bool STATIC_StartSpeechRecognition(unsigned char LocalUserNum);
	void STATIC_StopNetworkedVoice(unsigned char LocalUserNum);
	void STATIC_StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void STATIC_AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void STATIC_OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool IsTalkerMuted(const struct FUniqueNetId& ConsoleId);
	bool STATIC_UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool STATIC_MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool UpdatePlayerMuteSetting(bool PlayerMuteSetting);
	bool STATIC_SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool STATIC_UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool STATIC_RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	bool RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
