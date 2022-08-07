#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume
struct UOnlineSubsystemPC_SendPlayerSessionResume_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause
struct UOnlineSubsystemPC_SendPlayerSessionPause_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd
struct UOnlineSubsystemPC_SendPlayerSessionEnd_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	int                                                ExitStatusId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart
struct UOnlineSubsystemPC_SendPlayerSessionStart_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting
struct UOnlineSubsystemPC_UpdatePlayerMuteSetting_Params
{
	bool                                               PlayerMuteSetting;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted
struct UOnlineSubsystemPC_IsTalkerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate
struct UOnlineSubsystemPC_ClearGetUserAccountInfoDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddGetUserAccountInfoDelegate
struct UOnlineSubsystemPC_AddGetUserAccountInfoDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo
struct UOnlineSubsystemPC_GetUserAccountInfo_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved
struct UOnlineSubsystemPC_OnUserAccountInfoRetrieved_Params
{
	bool                                               bSuccessful;                                              // (Parm)
	struct FUserAccountInfo                            AccountInfo;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate
struct UOnlineSubsystemPC_RemoveAccountPickerCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate
struct UOnlineSubsystemPC_AddAccountPickerCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAccountPickerComplete
struct UOnlineSubsystemPC_OnAccountPickerComplete_Params
{
	bool                                               bForceLogin;                                              // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFilterTextDelegate
struct UOnlineSubsystemPC_ClearFilterTextDelegate_Params
{
	struct FScriptDelegate                             FilterTextDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFilterTextDelegate
struct UOnlineSubsystemPC_AddFilterTextDelegate_Params
{
	struct FScriptDelegate                             FilterTextDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFilterText
struct UOnlineSubsystemPC_OnFilterText_Params
{
	struct FString                                     OriginalText;                                             // (Parm, NeedCtorLink)
	struct FString                                     FilteredText;                                             // (Parm, NeedCtorLink)
	bool                                               bCensorCompletely;                                        // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckFilterText
struct UOnlineSubsystemPC_CheckFilterText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
struct UOnlineSubsystemPC_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
struct UOnlineSubsystemPC_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsersByUniqueNetIds
struct UOnlineSubsystemPC_OnPrivilegeCheckedForUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     Results;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersDelegate
struct UOnlineSubsystemPC_ClearPrivilegeCheckedForUsersDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersDelegate
struct UOnlineSubsystemPC_AddPrivilegeCheckedForUsersDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsers
struct UOnlineSubsystemPC_OnPrivilegeCheckedForUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResult>                  Results;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsersByUniqueNetIds
struct UOnlineSubsystemPC_CanCommunicateTextWithUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsers
struct UOnlineSubsystemPC_CanCommunicateTextWithUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSessionMemberInfo>                  Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsersByUniqueNetIds
struct UOnlineSubsystemPC_CanCommunicateVoiceWithUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsers
struct UOnlineSubsystemPC_CanCommunicateVoiceWithUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSessionMemberInfo>                  Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch
struct UOnlineSubsystemPC_CheckForGameInviteOnLaunch_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId
struct UOnlineSubsystemPC_GetControllerIdFromNetId_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                ControllerId;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CacheLoggedInGamepad
struct UOnlineSubsystemPC_CacheLoggedInGamepad_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent
struct UOnlineSubsystemPC_UnsubscribeToStatisticEvent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent
struct UOnlineSubsystemPC_SubscribeToStatisticEvent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
	struct FScriptDelegate                             EventDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStatisticChanged
struct UOnlineSubsystemPC_OnStatisticChanged_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
	struct FString                                     NewStatValue;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAchievements
struct UOnlineSubsystemPC_ClearAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
struct UOnlineSubsystemPC_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemPC_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemPC_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
struct UOnlineSubsystemPC_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
struct UOnlineSubsystemPC_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                          // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemPC_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemPC_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
struct UOnlineSubsystemPC_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
struct UOnlineSubsystemPC_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	float                                              PercentComplete;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
struct UOnlineSubsystemPC_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemPC_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemPC_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
struct UOnlineSubsystemPC_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
struct UOnlineSubsystemPC_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemPC_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemPC_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
struct UOnlineSubsystemPC_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
struct UOnlineSubsystemPC_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemPC_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
struct UOnlineSubsystemPC_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
struct UOnlineSubsystemPC_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
struct UOnlineSubsystemPC_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
struct UOnlineSubsystemPC_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
struct UOnlineSubsystemPC_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemPC_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemPC_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
struct UOnlineSubsystemPC_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
struct UOnlineSubsystemPC_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
struct UOnlineSubsystemPC_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
struct UOnlineSubsystemPC_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemPC_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemPC_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
struct UOnlineSubsystemPC_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
struct UOnlineSubsystemPC_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
struct UOnlineSubsystemPC_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemPC_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
struct UOnlineSubsystemPC_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
struct UOnlineSubsystemPC_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemPC_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemPC_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
struct UOnlineSubsystemPC_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
struct UOnlineSubsystemPC_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemPC_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
struct UOnlineSubsystemPC_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemPC_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemPC_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemPC_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
struct UOnlineSubsystemPC_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
struct UOnlineSubsystemPC_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemPC_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemPC_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
struct UOnlineSubsystemPC_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HideKeyboardUI
struct UOnlineSubsystemPC_HideKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
struct UOnlineSubsystemPC_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
struct UOnlineSubsystemPC_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     StatusString;                                             // (Parm, NeedCtorLink)
	bool                                               PlayerActive;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemPC_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemPC_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
struct UOnlineSubsystemPC_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
struct UOnlineSubsystemPC_GetLocale_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
struct UOnlineSubsystemPC_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemPC_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemPC_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
struct UOnlineSubsystemPC_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus
struct UOnlineSubsystemPC_GetCurrentConnectionStatus_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
struct UOnlineSubsystemPC_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
struct UOnlineSubsystemPC_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
struct UOnlineSubsystemPC_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
struct UOnlineSubsystemPC_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
	bool                                               bPauseGame;                                               // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
struct UOnlineSubsystemPC_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
struct UOnlineSubsystemPC_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
struct UOnlineSubsystemPC_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
struct UOnlineSubsystemPC_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
struct UOnlineSubsystemPC_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemPC_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
struct UOnlineSubsystemPC_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
struct UOnlineSubsystemPC_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
struct UOnlineSubsystemPC_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
struct UOnlineSubsystemPC_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
struct UOnlineSubsystemPC_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                      // (Parm, NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                   // (Parm, NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                           // (Parm, OutParm)
	struct FDouble                                     OutAggregateSigma;                                        // (Parm, OutParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
struct UOnlineSubsystemPC_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
struct UOnlineSubsystemPC_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemPC_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemPC_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemPC_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
struct UOnlineSubsystemPC_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
struct UOnlineSubsystemPC_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
struct UOnlineSubsystemPC_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	int                                                LeaderboardId;                                            // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemPC_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemPC_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
struct UOnlineSubsystemPC_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
struct UOnlineSubsystemPC_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
struct UOnlineSubsystemPC_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
struct UOnlineSubsystemPC_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemPC_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemPC_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemPC_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
struct UOnlineSubsystemPC_ReadOnlineStatsByRank_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends
struct UOnlineSubsystemPC_ReadOnlineStatForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               FavoriteFriendsOnly;                                      // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
struct UOnlineSubsystemPC_ReadOnlineStats_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer
struct UOnlineSubsystemPC_ReadOnlineStatsForPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
struct UOnlineSubsystemPC_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
struct UOnlineSubsystemPC_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCustomOnlineDelegates
struct UOnlineSubsystemPC_ClearCustomOnlineDelegates_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemPC_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemPC_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
struct UOnlineSubsystemPC_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
struct UOnlineSubsystemPC_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemPC_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
struct UOnlineSubsystemPC_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
struct UOnlineSubsystemPC_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemPC_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemPC_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
struct UOnlineSubsystemPC_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
struct UOnlineSubsystemPC_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
struct UOnlineSubsystemPC_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemPC_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemPC_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
struct UOnlineSubsystemPC_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
struct UOnlineSubsystemPC_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
struct UOnlineSubsystemPC_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
struct UOnlineSubsystemPC_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
struct UOnlineSubsystemPC_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
struct UOnlineSubsystemPC_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
struct UOnlineSubsystemPC_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
struct UOnlineSubsystemPC_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate
struct UOnlineSubsystemPC_ClearCurrentUserChangedDelegate_Params
{
	struct FScriptDelegate                             CurrentUserDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddCurrentUserChangedDelegate
struct UOnlineSubsystemPC_AddCurrentUserChangedDelegate_Params
{
	struct FScriptDelegate                             CurrentUserDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
struct UOnlineSubsystemPC_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
struct UOnlineSubsystemPC_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
struct UOnlineSubsystemPC_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
struct UOnlineSubsystemPC_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
struct UOnlineSubsystemPC_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
struct UOnlineSubsystemPC_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
struct UOnlineSubsystemPC_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
struct UOnlineSubsystemPC_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData
struct UOnlineSubsystemPC_CanUploadFitnessData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareKinectContent
struct UOnlineSubsystemPC_CanShareKinectContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareWithSocialNetwork
struct UOnlineSubsystemPC_CanShareWithSocialNetwork_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanBrowseInternet
struct UOnlineSubsystemPC_CanBrowseInternet_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumVideoContent
struct UOnlineSubsystemPC_CanAccessPremiumVideoContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumContent
struct UOnlineSubsystemPC_CanAccessPremiumContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUseCloudStorage
struct UOnlineSubsystemPC_CanUseCloudStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanRecordDVRClips
struct UOnlineSubsystemPC_CanRecordDVRClips_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
struct UOnlineSubsystemPC_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
struct UOnlineSubsystemPC_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
struct UOnlineSubsystemPC_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareUserCreatedContent
struct UOnlineSubsystemPC_CanShareUserCreatedContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanMultiplayerCrossPlay
struct UOnlineSubsystemPC_CanMultiplayerCrossPlay_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice
struct UOnlineSubsystemPC_CanCommunicateVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVideo
struct UOnlineSubsystemPC_CanCommunicateVideo_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateText
struct UOnlineSubsystemPC_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
struct UOnlineSubsystemPC_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeLevelCheckedDelegate
struct UOnlineSubsystemPC_ClearPrivilegeLevelCheckedDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeLevelCheckedDelegate
struct UOnlineSubsystemPC_AddPrivilegeLevelCheckedDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeLevelChecked
struct UOnlineSubsystemPC_OnPrivilegeLevelChecked_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
struct UOnlineSubsystemPC_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
struct UOnlineSubsystemPC_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
struct UOnlineSubsystemPC_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
struct UOnlineSubsystemPC_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
struct UOnlineSubsystemPC_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
struct UOnlineSubsystemPC_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
struct UOnlineSubsystemPC_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.PairUserAndControllerAtIndex
struct UOnlineSubsystemPC_PairUserAndControllerAtIndex_Params
{
	unsigned char                                      PlayerIndex;                                              // (Parm)
	unsigned char                                      ControllerIndex;                                          // (Parm)
	int                                                PairIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearSystemUserContrllerPairingChangedDelegate
struct UOnlineSubsystemPC_ClearSystemUserContrllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddSystemUserContrllerPairingChangedDelegate
struct UOnlineSubsystemPC_AddSystemUserContrllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnSystemUserControllerPairingChanged
struct UOnlineSubsystemPC_OnSystemUserControllerPairingChanged_Params
{
	int                                                NewLocalUserNum;                                          // (Parm)
	int                                                PreviousLocalUserNum;                                     // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
struct UOnlineSubsystemPC_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
struct UOnlineSubsystemPC_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
struct UOnlineSubsystemPC_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
struct UOnlineSubsystemPC_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
struct UOnlineSubsystemPC_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen
struct UOnlineSubsystemPC_IsAccountPickerOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
struct UOnlineSubsystemPC_ShowLoginUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bForceLogin;                                              // (OptionalParm, Parm)
	bool                                               bShowOnlineOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
struct UOnlineSubsystemPC_OnFriendsChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
struct UOnlineSubsystemPC_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
struct UOnlineSubsystemPC_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemPC_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemPC_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
struct UOnlineSubsystemPC_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
struct UOnlineSubsystemPC_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
struct UOnlineSubsystemPC_OnMutingChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearURLTokenRetrievedDelegate
struct UOnlineSubsystemPC_ClearURLTokenRetrievedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             tsrDelegate;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddURLTokenRetrievedDelegate
struct UOnlineSubsystemPC_AddURLTokenRetrievedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             tsrDelegate;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL
struct UOnlineSubsystemPC_GetTokenAndSignatureForURL_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved
struct UOnlineSubsystemPC_OnTokenAndSignatureRetrieved_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     AuthToken;                                                // (Parm, NeedCtorLink)
	struct FString                                     Signature;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnCurrentUserChanged
struct UOnlineSubsystemPC_OnCurrentUserChanged_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     CurrentUser;                                              // (Parm, NeedCtorLink)
	struct FString                                     LoggedInUser;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
struct UOnlineSubsystemPC_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
struct UOnlineSubsystemPC_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
struct UOnlineSubsystemPC_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll
struct UOnlineVoiceInterfacePC_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll
struct UOnlineVoiceInterfacePC_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bAllowFriends;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetSpeechRecognitionObject
struct UOnlineVoiceInterfacePC_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SelectVocabulary
struct UOnlineVoiceInterfacePC_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                VocabularyId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearRecognitionCompleteDelegate
struct UOnlineVoiceInterfacePC_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddRecognitionCompleteDelegate
struct UOnlineVoiceInterfacePC_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnRecognitionComplete
struct UOnlineVoiceInterfacePC_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults
struct UOnlineVoiceInterfacePC_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition
struct UOnlineVoiceInterfacePC_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition
struct UOnlineVoiceInterfacePC_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice
struct UOnlineVoiceInterfacePC_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice
struct UOnlineVoiceInterfacePC_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate
struct UOnlineVoiceInterfacePC_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddPlayerTalkingDelegate
struct UOnlineVoiceInterfacePC_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnPlayerTalkingStateChange
struct UOnlineVoiceInterfacePC_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted
struct UOnlineVoiceInterfacePC_IsTalkerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker
struct UOnlineVoiceInterfacePC_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker
struct UOnlineVoiceInterfacePC_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UpdatePlayerMuteSetting
struct UOnlineVoiceInterfacePC_UpdatePlayerMuteSetting_Params
{
	bool                                               PlayerMuteSetting;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetRemoteTalkerPriority
struct UOnlineVoiceInterfacePC_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Priority;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent
struct UOnlineVoiceInterfacePC_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking
struct UOnlineVoiceInterfacePC_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking
struct UOnlineVoiceInterfacePC_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker
struct UOnlineVoiceInterfacePC_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker
struct UOnlineVoiceInterfacePC_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterLocalTalker
struct UOnlineVoiceInterfacePC_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterLocalTalker
struct UOnlineVoiceInterfacePC_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
