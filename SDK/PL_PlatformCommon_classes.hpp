#pragma once

// Paladins (4.1.3942.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_PlatformCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlatformCommon.PComBrowserInteraction
// 0x0008 (0x00B8 - 0x00B0)
class UPComBrowserInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x00B0(0x0008) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComBrowserInteraction");
		return ptr;
	}

};


// Class PlatformCommon.PComBrowserManager
// 0x0000 (0x0060 - 0x0060)
class UPComBrowserManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComBrowserManager");
		return ptr;
	}


	void STATIC_OpenURL(const struct FString& URL, bool bShowNavButtons, bool bSetFocus);
};


// Class PlatformCommon.PComCheatManager
// 0x0000 (0x00A0 - 0x00A0)
class UPComCheatManager : public UGameCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComCheatManager");
		return ptr;
	}

};


// Class PlatformCommon.PComGameEngine
// 0x0008 (0x0AB0 - 0x0AA8)
class UPComGameEngine : public UGameEngine
{
public:
	struct FPointer                                    pOutgoingMarshal;                                         // 0x0AA8(0x0008) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComGameEngine");
		return ptr;
	}


	void STATIC_SendGameRequest(const struct FString& fsRequest);
	void STATIC_SendCtrlRequest(const struct FString& fsRequest);
	void STATIC_SendMarshalAll(bool bLowPriority);
	void STATIC_SendMarshal(const struct FUniqueNetId& qwPlayerId, bool bLowPriority);
	void STATIC_ClearMarshal();
	bool STATIC_SetFieldString(int nToken, const struct FString& StrValue);
	bool STATIC_SetFieldFloat(int nToken, float FloatValue);
	bool STATIC_SetFieldInt(int nToken, int IntValue);
	bool STATIC_SetFunction(int nFunction);
};


// Class PlatformCommon.PComGameViewportClient
// 0x001C (0x01C4 - 0x01A8)
class UPComGameViewportClient : public UGameViewportClient
{
public:
	class UPComOpenBroadcaster*                        OpenBroadcaster;                                          // 0x01A8(0x0008) (Transient)
	class UPComInputLightingEffect*                    InputLightingEffect;                                      // 0x01B0(0x0008) (Transient)
	unsigned long                                      bUseDynamicResolutionScaler : 1;                          // 0x01B8(0x0004) (Config)
	struct FPointer                                    DynamicResolutionScaler;                                  // 0x01BC(0x0008) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComGameViewportClient");
		return ptr;
	}


	bool Init(struct FString* OutError);
	void STATIC_StartFacebookStreaming();
	void STATIC_StopRTMPStreaming();
	void STATIC_StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey);
	void STATIC_SetRTMPSettings(bool bAllowWebcam, bool bAllowMicrophone, bool bAllowDesktopAudio);
	void STATIC_CheckGameSettingsVersion();
	void STATIC_HandleGameSettingsMigration(int OldGameSettingsVersion);
	int STATIC_GetCurrentGameSettingsVersion();
	void STATIC_InitDynamicResolutionScaler();
};


// Class PlatformCommon.PComImageDownloader
// 0x0020 (0x0080 - 0x0060)
class UPComImageDownloader : public UObject
{
public:
	TArray<struct FPComImageDownload>                  DownloadImages;                                           // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             __OnPComImageDownloaded__Delegate;                        // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComImageDownloader");
		return ptr;
	}


	void STATIC_SetPComImageDownloadedDelegate(const struct FScriptDelegate& PComImageDownloadedDelegate);
	void OnPComImageDownloaded(const struct FPComImageDownload& CachedEntry);
};


// Class PlatformCommon.PComInputLightingEffect
// 0x0080 (0x00E0 - 0x0060)
class UPComInputLightingEffect : public UObject
{
public:
	unsigned long                                      bAllowLogitechSdk : 1;                                    // 0x0060(0x0004) (Config)
	unsigned long                                      bLogitechSdkInitialized : 1;                              // 0x0060(0x0004) (Transient)
	unsigned long                                      bLatchedSystemSettingsSdkAllowed : 1;                     // 0x0060(0x0004) (Transient)
	TArray<struct FPComInputLightingPreset>            Presets;                                                  // 0x0064(0x0010) (Config, NeedCtorLink)
	struct FMap_Mirror                                 PresetsMap;                                               // 0x0074(0x0048) (Native, Transient)
	TArray<struct FPComActiveInputLightingPreset>      ActivePresets;                                            // 0x00BC(0x0010) (Transient, NeedCtorLink)
	struct FLinearColor                                BlendFromColor;                                           // 0x00CC(0x0010) (Transient)
	float                                              BlendPercent;                                             // 0x00DC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComInputLightingEffect");
		return ptr;
	}


	bool STATIC_IsLogitechSdkVersionValid();
	void STATIC_SetCurrentTime(const struct FName& InPresetName, float CurrentTime);
	void STATIC_StopPreset(const struct FName& InPresetName);
	void STATIC_PlayPreset(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime);
	void STATIC_DisableSystem();
	void STATIC_TryEnableSystem();
};


// Class PlatformCommon.PComJsonHandler
// 0x0068 (0x00C8 - 0x0060)
class UPComJsonHandler : public UObject
{
public:
	class UPComImageDownloader*                        m_pImageDownloader;                                       // 0x0060(0x0008)
	struct FPointer                                    m_pCallbackObject;                                        // 0x0068(0x0008) (Native)
	struct FString                                     m_strUrl;                                                 // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_strDownloadDir;                                         // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_strLocalDir;                                            // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_strJson;                                                // 0x00A0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_strName;                                                // 0x00B0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    m_pHttp;                                                  // 0x00C0(0x0008) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComJsonHandler");
		return ptr;
	}


	void STATIC_OnImageDownloaded(const struct FPComImageDownload& CachedEntry);
};


// Class PlatformCommon.PComOpenBroadcaster
// 0x0088 (0x00E8 - 0x0060)
class UPComOpenBroadcaster : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     FacebookAppId;                                            // 0x0068(0x0010) (Config, NeedCtorLink)
	struct FString                                     FacebookApprovedDomain;                                   // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FString                                     FacebookLiveUrl;                                          // 0x0088(0x0010) (Config, NeedCtorLink)
	TEnumAsByte<EPComOpenBroadcasterState>             CurrentState;                                             // 0x0098(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FPComOpenBroadcasterSettings                CurrentSettings;                                          // 0x009C(0x0004) (Transient)
	struct FPointer                                    StreamerProcessHandle;                                    // 0x00A0(0x0008) (Transient)
	struct FScriptDelegate                             __PreloadWebBrowser__Delegate;                            // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __IsWebBrowserLoaded__Delegate;                           // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OpenWebBrowser__Delegate;                               // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CloseWebBrowser__Delegate;                              // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComOpenBroadcaster");
		return ptr;
	}


	class UWebRequest* DecodeFacebookRTMPUrl(const struct FString& InRequest);
	void Tick();
	void STATIC_ForceStopStreaming();
	void STATIC_StopStreaming();
	void STATIC_StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey);
	void STATIC_StartFacebookStreaming();
	void STATIC_QueueFacebookStreaming();
	void STATIC_SetStreamSettings(struct FPComOpenBroadcasterSettings* InSettings);
	bool STATIC_IsStreaming();
	void CloseWebBrowser();
	void OpenWebBrowser(const struct FString& URL);
	bool IsWebBrowserLoaded();
	void PreloadWebBrowser();
};


// Class PlatformCommon.PComPerformanceCaptureBase
// 0x007C (0x00DC - 0x0060)
class UPComPerformanceCaptureBase : public UObject
{
public:
	TArray<struct FName>                               StatsToCollect;                                           // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FArray_Mirror                               StatIds;                                                  // 0x0070(0x0010) (Native, Transient)
	TArray<unsigned char>                              StatTypes;                                                // 0x0080(0x0010) (Transient, NeedCtorLink)
	float                                              FOV;                                                      // 0x0090(0x0004) (Config)
	TArray<struct FPComPerformanceCaptureProfile>      Profiles;                                                 // 0x0094(0x0010) (Config, NeedCtorLink)
	struct FPComPerformanceCaptureProfile              FallbackProfile;                                          // 0x00A4(0x001C) (Config)
	struct FPComPerformanceCaptureProfile              ActiveProfile;                                            // 0x00C0(0x001C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPerformanceCaptureBase");
		return ptr;
	}


	void STATIC_CreateFileAndExit(const struct FString& FileNameWithExtension, const struct FString& FileContents, const struct FString& SubfolderName);
	void STATIC_GetPerfStats(TArray<struct FPComPerformanceCaptureStat> PerfStats, struct FString* FileContents);
	void STATIC_GetStatsToCollect(struct FString* FileContents);
	void STATIC_GetMapNameAndTime(struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime);
	void STATIC_StopCycleStats(TArray<struct FPComPerformanceCaptureStat>* PerfStats);
	void STATIC_GetPerformanceData(TArray<struct FPComPerformanceCaptureStat>* PerfStats);
	void STATIC_EnableStatNotify();
	void STATIC_EnableNonCycleStats();
	void STATIC_MoveCamera(class APlayerController* PlayerController, class AActor* Node);
	void STATIC_InitializePerformanceCaptureSettings();
};


// Class PlatformCommon.PComPerformanceCaptureGame
// 0x002C (0x04F8 - 0x04CC)
class APComPerformanceCaptureGame : public AGameInfo
{
public:
	class UPComPerformanceCaptureBase*                 BasePerformanceCapture;                                   // 0x04CC(0x0008) (Transient)
	TEnumAsByte<EPComPerformanceCaptureState>          CurrentCaptureState;                                      // 0x04D4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	TArray<class APComPerformanceCaptureNode*>         NodesToCapture;                                           // 0x04D8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPComPerformanceCaptureStatsPerNode> StatsPerNode;                                             // 0x04E8(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPerformanceCaptureGame");
		return ptr;
	}


	void STATIC_DoNextAction();
	void STATIC_CollectNodes();
	void PostBeginPlay();
};


// Class PlatformCommon.PComPerformanceCaptureNode
// 0x0014 (0x0294 - 0x0280)
class APComPerformanceCaptureNode : public AActor
{
public:
	struct FString                                     ExecCommand;                                              // 0x0280(0x0010) (Edit, NeedCtorLink)
	float                                              DelayBeforeCapture;                                       // 0x0290(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPerformanceCaptureNode");
		return ptr;
	}

};


// Class PlatformCommon.PComPictureInPicture
// 0x003C (0x009C - 0x0060)
class UPComPictureInPicture : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0060(0x0008) (Const, Native, NoExport)
	class UPComPictureInPictureScene*                  Scene;                                                    // 0x0068(0x0008)
	class UTextureRenderTarget2D*                      RenderTargetToUse;                                        // 0x0070(0x0008)
	TArray<struct FPComPipViewDesc>                    ViewDescs;                                                // 0x0078(0x0010) (Native, AlwaysInit)
	unsigned long                                      bEnableDebugRendering : 1;                                // 0x0088(0x0004)
	struct FVector2D                                   CurrentOffset;                                            // 0x008C(0x0008)
	struct FVector2D                                   CurrentScaling;                                           // 0x0094(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPictureInPicture");
		return ptr;
	}


	void STATIC_TestPictureInPicture();
	void STATIC_DebugRender(class UCanvas* Canvas);
	bool STATIC_IsViewDescReady(struct FPComPipViewDesc* ViewDesc);
	bool STATIC_IsViewReady(const struct FName& ViewName);
	void STATIC_RequestRender(const struct FName& ViewName);
	void STATIC_RemoveView(const struct FName& ViewName);
	void STATIC_AddView(struct FPComPipViewDesc* InViewDesc);
	void STATIC_InitializeRenderTarget();
};


// Class PlatformCommon.PComPictureInPictureScene
// 0x0048 (0x00A8 - 0x0060)
class UPComPictureInPictureScene : public UObject
{
public:
	float                                              SkyBrightness;                                            // 0x0060(0x0004) (Edit)
	struct FColor                                      SkyColor;                                                 // 0x0064(0x0004) (Edit)
	float                                              LightBrightness;                                          // 0x0068(0x0004) (Edit)
	unsigned long                                      bAlwaysAllowAudioPlayback : 1;                            // 0x006C(0x0004) (Edit)
	unsigned long                                      bForceAllUsedMipsResident : 1;                            // 0x006C(0x0004) (Edit)
	struct FPointer                                    Scene;                                                    // 0x0070(0x0008) (Native, Transient)
	TArray<class UActorComponent*>                     Components;                                               // 0x0078(0x0010) (ExportObject, Component, NeedCtorLink, EditInline)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x0088(0x0008) (ExportObject, Component, EditInline)
	class UDirectionalLightComponent*                  DirectionalBounceLight;                                   // 0x0090(0x0008) (ExportObject, Component, EditInline)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0098(0x0008) (ExportObject, Component, EditInline)
	class ULineBatchComponent*                         LineBatcher;                                              // 0x00A0(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPictureInPictureScene");
		return ptr;
	}


	void STATIC_SetSkyColor(struct FColor* InSkyColor);
	void STATIC_SetSkyBrightness(float InSkyBrightness);
	void STATIC_SetBounceLightColor(struct FColor* LightColor);
	void STATIC_SetBounceLightBrightness(float InLightBrightness);
	void STATIC_SetBounceLightDirection(struct FRotator* InLightDir);
	void STATIC_EnableDirectionalBounceLight(bool bInEnableBoundLight, float InBounceLightBrightness, const struct FRotator& BounceLightDir);
	void STATIC_SetLightColor(struct FColor* LightColor);
	void STATIC_SetLightBrightness(float InLightBrightness);
	void STATIC_SetLightDirection(struct FRotator* InLightDir);
	struct FRotator STATIC_GetLightDirection();
	void STATIC_RemoveComponent(class UActorComponent* Component);
	void STATIC_AddComponent(class UActorComponent* Component, struct FMatrix* LocalToWorld);
	void STATIC_InitScene();
};


// Class PlatformCommon.PComPlayerController
// 0x005C (0x07D8 - 0x077C)
class APComPlayerController : public AGamePlayerController
{
public:
	struct FUniqueNetId                                m_LastPendingPartyInviteId;                               // 0x077C(0x0008)
	unsigned long                                      m_bPartySessionJoinInProgress : 1;                        // 0x0784(0x0004)
	unsigned long                                      m_bPartySessionCreateInProgress : 1;                      // 0x0784(0x0004)
	unsigned long                                      m_bPartyDestroyInProgress : 1;                            // 0x0784(0x0004)
	unsigned long                                      m_bQuittingToMainMenu : 1;                                // 0x0784(0x0004) (Transient)
	unsigned long                                      m_bHasAcknowledgedPawn : 1;                               // 0x0784(0x0004) (Transient)
	unsigned long                                      m_bLastClientTokenRequestFailed : 1;                      // 0x0784(0x0004) (Transient)
	unsigned long                                      m_bKeepLoggedIn : 1;                                      // 0x0784(0x0004) (Config, GlobalConfig)
	struct Fdword                                      m_dwPendingPartyId;                                       // 0x0788(0x0004)
	int                                                m_nMaxPartyPublicConnections;                             // 0x078C(0x0004) (Config)
	struct FOnlineGameSearchResult                     m_PendingInviteResult;                                    // 0x0790(0x0010)
	struct FName                                       PartySessionName;                                         // 0x07A0(0x0008) (Const)
	struct FName                                       GameSessionName;                                          // 0x07A8(0x0008) (Const)
	struct Fdword                                      m_dwLastLoginPortalId;                                    // 0x07B0(0x0004) (Config, GlobalConfig)
	struct Fdword                                      m_dwLastLoginAccountId;                                   // 0x07B4(0x0004) (Config, GlobalConfig)
	struct FString                                     m_sLastLoginAccessToken;                                  // 0x07B8(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     m_sLastLoginAccessTokenExpiration;                        // 0x07C8(0x0010) (Config, GlobalConfig, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPlayerController");
		return ptr;
	}


	void PlayTestInputLightingEffect(const struct FName& InPresetName);
	void STATIC_SetCurrentTimeForInputLightingEffect(const struct FName& InPresetName, float InCurrentTime);
	void STATIC_StopInputLightingEffect(const struct FName& InPresetName);
	void STATIC_PlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime);
	void ClientPlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime);
	bool STATIC_TryAutoLogin();
	void TryAutoLoginDelayed();
	void SetAsNewPartyHost();
	void ToggleGameSessionInvitesAllowed(bool bAllowed);
	void TogglePartySessionInvitesAllowed(bool bAllowed);
	void UpdateMCTSWithNewPartyInfo();
	bool IsHostOfParty();
	void STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked);
	void STATIC_OnReadFriendsListComplete(bool bWasSuccessful);
	bool ShowPeoplePickerUI();
	void STATIC_JoinCustomMatchForInviteDelay();
	void JoinCustomMatchFromInvite();
	void STATIC_OnJoinSessionForReceivedInviteComplete(const struct FName& SessionName, bool bWasSuccessful);
	void STATIC_OnPrivilegeCheckForGameSessionJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void STATIC_OnPrivilegeLevelCheckedCompleteForPartyJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void STATIC_OnGameDestroyedForPartyJoin(const struct FName& SessionName, bool bWasSuccessful);
	void STATIC_OnAlternatePrivilegeLevelCheckedComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	void JoinPartySession(unsigned char PartySessionGuid);
	void OnPartySessionDestroyed(const struct FName& SessionName, bool bWasSuccessful);
	void DestroyPartySession();
	bool InvitePlayerToParty(const struct FUniqueNetId& InPlayerId);
	bool InvitePlayerToPartyByName(const struct FString& InPlayerName);
	void STATIC_OnCreatePartySessionComplete(const struct FName& SessionName, bool bSuccessful);
	void CreatePartySession();
	void UnregisterP2PEnemiesForCustomMatch(TArray<struct FUniqueNetId> EnemyIds);
	void STATIC_OnGetVoicePermissionsForUsersComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results);
	void OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful);
	void OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful);
	TArray<struct FString> STATIC_GetUserNamesForPS4P2PConnections();
	void STATIC_CloseConnectionsToInvalidPeers(TArray<struct FSessionMemberInfo> SessionListInfo);
	void EstablishPeers();
	void LostP2PConnection(const struct FUniqueNetId& UniqueId);
	void GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId);
	void PairLoggedInUserAndCurrentController();
	bool STATIC_IsInGame();
	bool STATIC_IsPackageInstalled();
	void OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges);
	bool CheckFilterText(const struct FString& Text);
	bool CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users);
	bool CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	void STATIC_OnTextFilterApplied(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely);
	void STATIC_RequestUpdateFriendsList(bool bForceRequest);
	void STATIC_UpdateMctsWithFriends(bool bWasSuccessful);
	void STATIC_OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId);
	void STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results);
	void STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void ClearOnlineDelegates();
	void STATIC_RegisterOnlineDelegates();
	void STATIC_ClientRestablishP2PConnections();
	void STATIC_ServerReEstablishP2PConnections();
	bool STATIC_IsReconnect();
	void RestablishVoiceForReconnect();
	void STATIC_OnJoinOnlineGameCompleteForReceivedSessionInfo(const struct FName& SessionName, bool bWasSuccessful);
	void ReceiveSessionInfo(unsigned char PlatformSpecificInfo, TEnumAsByte<EConsoleType> ConsoleType);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	void ChooseThisControllerForSessionScout(bool bCustomMatch, int MaxPlayers, bool bPrivate, TArray<struct FUniqueNetId>* ReservedMembers);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	void STATIC_FinishQuitToMainMenu();
	bool STATIC_CleanupOnlineSubsystemSession(bool bWasFromMenu);
	void QuitToMainMenu();
	void ServerAcknowledgePossession(class APawn* P);
	void AcknowledgePossession(class APawn* P);
	void STATIC_OnAllMarketplaceProductDetailsRead();
	void STATIC_LeaveMatchQueue();
	void STATIC_UpdatePartyUI();
	void STATIC_TryOpenPartyUI();
	void STATIC_ShowCustomGameDisallowedPopup();
	void STATIC_ShowPackageNotInstalledForPartyInviteWarning();
	void STATIC_ShowPartyNoLongerAvailableWarning();
	void STATIC_ShowPartyFullWarning(bool bPartySession);
	void STATIC_ShowUnableToReadFriendsListWarning();
	void STATIC_ShowNoFriendsForPartyInviteWarning();
	void STATIC_ShowControllerDisconnectedWarning();
	bool STATIC_ShouldPartySessionsBePublic();
	void STATIC_CreateOrJoinPartySession();
	bool STATIC_ArePartySessionInvitesAllowed();
	void STATIC_UpdateMCTSSession(const struct FString& SessionGuid, bool bIsHost);
	void STATIC_BlockPartySceneInput(bool bBlockInput);
	void STATIC_FilterFriendListForPeoplePicker(TArray<struct FOnlineFriend>* FriendList, TArray<struct FSessionMemberInfo>* SessionMemberList);
	void STATIC_ShowPrivilegeMessageAndDeclineInvite();
	void STATIC_ConnectToPeers(TArray<struct FSessionMemberInfo>* SessionListInfo);
	void STATIC_TryJoinSession();
	void STATIC_MCTSSetSessionId(unsigned char PlatformSpecificInfo);
	bool STATIC_IsInCustomMatch();
	void STATIC_SendSessionEnd();
	void STATIC_SendSessionStart(int GameModeId);
	void STATIC_OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking);
	void STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser);
	void STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void STATIC_OnMarketplaceItemPurchased();
	TEnumAsByte<EOnlineEnumerationReadState> GetPlayerDLCLicenses(TArray<struct FOnlineContent>* ContentList);
	void STATIC_OnReadPlayerMarketplaceInventoryComplete();
	void STATIC_PlayerReceivedURLTokenAndSignatureForPortalInventory(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature);
	void ProcessPortalInventoryWithAuthToken();
	void STATIC_DumpStoreCatalog(TEnumAsByte<EMediaItemType> MediaType);
	void STATIC_DumpConumables();
	void STATIC_DumpDurables();
	void STATIC_DumpGameProducts();
	void STATIC_OnReadAdditionalProductDetailsComplete(TEnumAsByte<EMediaItemType> MediaType);
	void STATIC_OnReadDetailsForProductIdListComplete(TArray<struct FMarketplaceProductDetails>* ProductList);
	void STATIC_OnReadAvailableProductsComplete(TEnumAsByte<EMediaItemType> MediaType);
	void RefreshStoreData();
	bool IsLoggedIntoOSS();
	bool ShowConsoleLoginUI(int ControllerId, bool bForceLoginAfter);
	void CacheLoggedInGamepad();
	void STATIC_PlayerReceivedTokenForLogin(bool bSuccess);
	void STATIC_PlayerReceivedURLTokenAndSignatureForLogin(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature);
	void GetOSSTokenAndSignatureForLogin();
	struct FString STATIC_GetTokenURL();
	void STATIC_BeginLogin();
	void STATIC_PlayerRetrievedOSSInventory(TArray<struct FMarketplaceInventoryItem>* Items);
	void STATIC_ValidateCreatedPartySession();
	void STATIC_UpdateClientAuthToken(const struct FString& Token);
	void STATIC_UpdateClientToken(const struct FString& Token);
	void STATIC_ChallengeJoin(int nMatchId, const struct FString& fsName, const struct FString& fsPassword);
	void STATIC_ChallengeCreate(int nQueue, const struct FString& fsName, const struct FString& fsPassword);
	void STATIC_UpdateDatacenterPing();
	void STATIC_TestVideoPlayer();
	void STATIC_AddCheats();
	void STATIC_ClientAddCheats();
};


// Class PlatformCommon.PComPlayerInput
// 0x0024 (0x02F8 - 0x02D4)
class UPComPlayerInput : public UPlayerInput
{
public:
	unsigned long                                      c_bDirty : 1;                                             // 0x02D4(0x0004)
	unsigned long                                      c_bUseServerBindings : 1;                                 // 0x02D4(0x0004) (Config)
	unsigned long                                      c_bJumpEnabled : 1;                                       // 0x02D4(0x0004) (Config)
	struct FString                                     c_sCurrentProfile;                                        // 0x02D8(0x0010) (Config, NeedCtorLink)
	int                                                m_nKeybindConfigSet;                                      // 0x02E8(0x0004)
	float                                              m_nMinLookSensitivity;                                    // 0x02EC(0x0004)
	float                                              m_nMaxLookSensitivity;                                    // 0x02F0(0x0004)
	int                                                m_RecCastMode;                                            // 0x02F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPlayerInput");
		return ptr;
	}


	void STATIC_Jump();
	void STATIC_UnbindCommand(const struct FString& Command, bool bGamepad, int nAlternate);
	void UnbindCommandAll(const struct FString& Command);
	void STATIC_UnbindKey(struct FName* BindName);
	void SetCommandBind(const struct FString& Command, bool bGamepad, int nAlternate, const struct FString& ExtendedBinding);
	void STATIC_SetBindExtended(const struct FString& ExtendedBinding, const struct FString& Command);
	float GetDisplayLookSensitivityY();
	float GetDisplayLookSensitivity();
	void STATIC_SetAimAcceleration(float fLookAccel);
	void STATIC_SetLookSensitivity(float fSensitivity, float fSensitivityY);
	void STATIC_SetMouseInput(bool bInvert, bool bSmooth, float fSensitivity);
	void STATIC_SetDirty();
	void STATIC_ReadMouseSettings();
	void STATIC_StoreMouseSettings();
	struct FKeyBind GetKeybindWithCurrentModifiers(struct FName* Key);
	struct FString GetBind(struct FName* Key, struct FKeyBind* ModifierKeyBind);
	struct FString STATIC_KeybindToExtendedString(struct FKeyBind* Bind);
	struct FKeyBind STATIC_ExtendedStringToKeybind(const struct FString& Str, const struct FString& Cmd);
	struct FKeyBind STATIC_GetBindFromCommand(const struct FString& Cmd, bool bGamepad, int nAlternate);
	bool STATIC_GetBindExtended(const struct FString& Str, bool bExactMatch, struct FKeyBind* Bind);
	void STATIC_ResetKeysToDefault();
};


// Class PlatformCommon.PComPlayerProfile
// 0x00A0 (0x0134 - 0x0094)
class UPComPlayerProfile : public UOnlinePlayerStorage
{
public:
	int                                                Rank;                                                     // 0x0094(0x0004)
	int                                                Kills;                                                    // 0x0098(0x0004)
	int                                                Deaths;                                                   // 0x009C(0x0004)
	int                                                Assists;                                                  // 0x00A0(0x0004)
	int                                                XpLevel;                                                  // 0x00A4(0x0004)
	int                                                HZPoints;                                                 // 0x00A8(0x0004)
	int                                                XPPoints;                                                 // 0x00AC(0x0004)
	int                                                AssistPoints;                                             // 0x00B0(0x0004)
	int                                                AverageScore;                                             // 0x00B4(0x0004)
	int                                                BoostHoursRemaining;                                      // 0x00B8(0x0004)
	int                                                InfoMask;                                                 // 0x00BC(0x0004)
	int                                                TimePlayed;                                               // 0x00C0(0x0004)
	int                                                TotalAccolades;                                           // 0x00C4(0x0004)
	int                                                FastestSki;                                               // 0x00C8(0x0004)
	int                                                FlagGrabs;                                                // 0x00CC(0x0004)
	int                                                FlagCaps;                                                 // 0x00D0(0x0004)
	int                                                GensDestroyed;                                            // 0x00D4(0x0004)
	int                                                ObjsDestroyed;                                            // 0x00D8(0x0004)
	unsigned long                                      bVIP : 1;                                                 // 0x00DC(0x0004)
	unsigned long                                      bBoost : 1;                                               // 0x00DC(0x0004)
	int                                                PlayerID;                                                 // 0x00E0(0x0004)
	struct FString                                     PlayerName;                                               // 0x00E4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FBadgeStruct>                        Badges;                                                   // 0x00F4(0x0010) (NeedCtorLink)
	TArray<struct FBadgeStruct>                        TopBadges;                                                // 0x0104(0x0010) (NeedCtorLink)
	TArray<struct FPropertyPair>                       ClassTimePlayed;                                          // 0x0114(0x0010) (NeedCtorLink)
	TArray<struct FAccoladeStruct>                     Accolades;                                                // 0x0124(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPlayerProfile");
		return ptr;
	}

};


// Class PlatformCommon.PComPositionHistoryComponent
// 0x0003 (0x0088 - 0x0085)
class UPComPositionHistoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPositionHistoryComponent");
		return ptr;
	}

};


// Class PlatformCommon.PComPositionHistoryServerComponent
// 0x05A7 (0x062C - 0x0085)
class UPComPositionHistoryServerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                CurrentIndex;                                             // 0x0088(0x0004)
	float                                              ServerTimeStamps[0x1E];                                   // 0x008C(0x0004)
	float                                              ClientTimeStamps[0x1E];                                   // 0x0104(0x0004)
	struct FVector                                     Positions[0x1E];                                          // 0x017C(0x000C)
	struct FVector                                     Velocities[0x1E];                                         // 0x02E4(0x000C)
	struct FRotator                                    Rotations[0x1E];                                          // 0x044C(0x000C)
	unsigned char                                      bJustTeleported[0x1E];                                    // 0x05B4(0x0001)
	unsigned char                                      bCollideActors[0x1E];                                     // 0x05D2(0x0001)
	unsigned char                                      bBlockActors[0x1E];                                       // 0x05F0(0x0001)
	TEnumAsByte<EPhysics>                              Physics[0x1E];                                            // 0x060E(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComPositionHistoryServerComponent");
		return ptr;
	}


	bool STATIC_IsInSphere(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed);
	bool IsOverlapping(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed);
	struct FPComPositionHistoryData STATIC_GetPastData(float RewindTime, bool bUseClientTimeStamps);
	void STATIC_RecordData();
};


// Class PlatformCommon.PComRepInfo_Game
// 0x0020 (0x0308 - 0x02E8)
class APComRepInfo_Game : public AGameReplicationInfo
{
public:
	class UPComMusicThemePlayer*                       m_MusicThemePlayer;                                       // 0x02E8(0x0008)
	class UClass*                                      m_MusicThemePlayerClass;                                  // 0x02F0(0x0008)
	struct FString                                     m_MusicThemePlayerClassName;                              // 0x02F8(0x0010) (Config, GlobalConfig, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComRepInfo_Game");
		return ptr;
	}


	void STATIC_CreateMusicThemePlayer();
	void PostBeginPlay();
	void STATIC_PlayMusicEvent(const struct FName& EventName);
};


// Class PlatformCommon.PComStructures
// 0x0000 (0x0060 - 0x0060)
class UPComStructures : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComStructures");
		return ptr;
	}

};


// Class PlatformCommon.PComSupportCommands
// 0x0010 (0x0070 - 0x0060)
class UPComSupportCommands : public UObject
{
public:
	class APComPlayerController*                       PC;                                                       // 0x0060(0x0008) (Const, Transient)
	class AWorldInfo*                                  WorldInfo;                                                // 0x0068(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComSupportCommands");
		return ptr;
	}


	void STATIC_scLogTickFlags(int nFlags, bool bSet);
	void STATIC_scPerfAlwaysRelevantLimit(int feet);
	void STATIC_scGPerfServerFlags(int Flags, int alternate1, int alternate2);
	void STATIC_scPerfPhysThreshold(float thresh1, float thesh2);
	void STATIC_scPerfTickRate(int tickHz, int altTickHz);
	void STATIC_scPerfDebugRelevMode(int Mode);
	void STATIC_scPerfDebugSkip(int skips);
	void STATIC_scPerfDebugFeet(int feet);
	void STATIC_scDemoStop();
	void STATIC_scDemoRec(const struct FString& sCommand);
	void STATIC_scTimer(const struct FString& sCommand);
	void STATIC_scTime(int nSeconds);
	void STATIC_scScore(int nTeam, int nCount);
	void STATIC_scEndGame(const struct FString& Reason);
	void STATIC_scStartGame(const struct FString& Reason);
	void STATIC_scLogMark(const struct FString& Comment);
	void STATIC_scLog(const struct FString& LogName, bool bEnabled);
	void STATIC_gmmf();
	void STATIC_SetLogServerTickStatsFlags(int Flags, bool bSet);
	void STATIC_GPerfDebugPhysicsThreshold(float fThresh1, float fThresh2);
	void STATIC_GPerfDebugTickRate(int tickHz, int altTickHz);
	void STATIC_GPerfAllRelevantLimit(int feet);
	void STATIC_GPerfServerFlags(int Flags, int alternate1, int alternate2);
	void STATIC_GPerfDebugRelevMode(int Mode);
	void STATIC_GPerfDebugSkips(int skips);
	void STATIC_GPerfDebugFeet(int feet);
	void STATIC_gmDiag(int Code, int Route);
	void STATIC_gmC(const struct FString& sCommand);
	void STATIC_gmCommand(const struct FString& sCommand);
	void STATIC_gmMatchLobbyResume();
	void STATIC_gmMatchLobbyPause();
	void STATIC_gmMatchNext(int nMapId);
	void STATIC_gmMatchForce(int nQueueId);
};


// Class PlatformCommon.PComUIManagerBase
// 0x0024 (0x0084 - 0x0060)
class UPComUIManagerBase : public UObject
{
public:
	unsigned long                                      m_bDebugDraw : 1;                                         // 0x0060(0x0004)
	unsigned long                                      m_bLocalLoad : 1;                                         // 0x0060(0x0004)
	TArray<struct FManagerImage>                       m_cachedImages;                                           // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_strJson;                                                // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComUIManagerBase");
		return ptr;
	}


	void DebugDraw(class UCanvas* Canvas);
};


// Class PlatformCommon.PComUtilityFunctions
// 0x0000 (0x0060 - 0x0060)
class UPComUtilityFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComUtilityFunctions");
		return ptr;
	}


	float STATIC_GetGDeltaTime();
	bool STATIC_IsAWithStop(class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase);
	struct FVector STATIC_FakeNetSerialize(struct FVector* InVector);
};


// Class PlatformCommon.PComVideoPlayer
// 0x0074 (0x02F4 - 0x0280)
class APComVideoPlayer : public AActor
{
public:
	struct FString                                     VideoURL;                                                 // 0x0280(0x0010) (Edit, NeedCtorLink)
	int                                                Width;                                                    // 0x0290(0x0004) (Edit)
	int                                                Height;                                                   // 0x0294(0x0004) (Edit)
	float                                              Volume;                                                   // 0x0298(0x0004) (Edit)
	unsigned long                                      bAutoResize : 1;                                          // 0x029C(0x0004) (Edit)
	unsigned long                                      bConstrainAspectRatio : 1;                                // 0x029C(0x0004) (Edit)
	unsigned long                                      bDebugRender : 1;                                         // 0x029C(0x0004) (Edit)
	unsigned long                                      bVideoFinished : 1;                                       // 0x029C(0x0004) (Transient)
	unsigned long                                      bOnVideoFinishedIssued : 1;                               // 0x029C(0x0004) (Transient)
	unsigned long                                      bHasMinorStreamingProblem : 1;                            // 0x029C(0x0004) (Transient)
	float                                              ConstrainedAspectRatio;                                   // 0x02A0(0x0004) (Edit)
	struct FPointer                                    Resource;                                                 // 0x02A4(0x0008) (Native, Transient)
	class UTextureRenderTarget2D*                      RenderTargetToUse;                                        // 0x02AC(0x0008) (Transient)
	class UTextureRenderTarget2D*                      TextureCopyForStreamingProblem;                           // 0x02B4(0x0008) (Transient)
	float                                              TimeSinceMinorStreamingProblem;                           // 0x02BC(0x0004) (Transient)
	class UMaterial*                                   StreamingProblemMaterial;                                 // 0x02C0(0x0008) (Transient)
	TEnumAsByte<EPComVideoPlayerError>                 CurrentErrorState;                                        // 0x02C8(0x0001) (Transient)
	TEnumAsByte<EPComVideoPlayerError>                 RenderThreadErrorState;                                   // 0x02C9(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	class UTexture2D*                                  BlackTexture;                                             // 0x02CC(0x0008) (Transient)
	struct FScriptDelegate                             __OnVideoFinished__Delegate;                              // 0x02D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnVideoError__Delegate;                                 // 0x02E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComVideoPlayer");
		return ptr;
	}


	void STATIC_DestroyMe();
	void STATIC_TestOnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode);
	void STATIC_TestVideoPlayer(class AActor* SpawningActor, const struct FString& InURL);
	void Initialize();
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode);
	void OnVideoFinished();
};


// Class PlatformCommon.SearFiles
// 0x0000 (0x00B4 - 0x00B4)
class USearFiles : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.SearFiles");
		return ptr;
	}

};


// Class PlatformCommon.PComMusicTheme
// 0x003C (0x009C - 0x0060)
class UPComMusicTheme : public UObject
{
public:
	struct FMusicTrackStruct                           DefaultTrack;                                             // 0x0060(0x002C) (Edit, NeedCtorLink)
	TArray<struct FMusicEvent>                         MusicEvents;                                              // 0x008C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComMusicTheme");
		return ptr;
	}

};


// Class PlatformCommon.PComMusicThemeFactory
// 0x0000 (0x00A8 - 0x00A8)
class UPComMusicThemeFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComMusicThemeFactory");
		return ptr;
	}

};


// Class PlatformCommon.PComMusicThemePlayer
// 0x006C (0x00CC - 0x0060)
class UPComMusicThemePlayer : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     MusicThemePath;                                           // 0x0068(0x0010) (Transient, NeedCtorLink)
	class UPComMusicTheme*                             MusicTheme;                                               // 0x0078(0x0008) (Transient)
	class UAudioComponent*                             MusicComp;                                                // 0x0080(0x0008) (ExportObject, Transient, Component, EditInline)
	class APComMusicThemeSyncActor*                    MusicSyncActor;                                           // 0x0088(0x0008)
	struct FName                                       LastMusicEvent;                                           // 0x0090(0x0008) (Transient)
	struct FMusicTrackStruct                           CurrentMusicTrack;                                        // 0x0098(0x002C) (Transient, NeedCtorLink)
	float                                              CurrentMusicTrackStartTime;                               // 0x00C4(0x0004) (Transient)
	float                                              CurrentMusicTrackDuration;                                // 0x00C8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComMusicThemePlayer");
		return ptr;
	}


	void STATIC_UpdateReplicatedMusicEvent(const struct FName& EventName);
	void STATIC_UpdateMusicTrack(const struct FMusicTrackStruct& NewMusicTrack, float fDuration);
	void STATIC_StopMusic();
	void STATIC_PlayMusicEvent(const struct FName& EventName);
	void STATIC_PlayDefaultMusic();
	void STATIC_OnThemeLoaded();
	void STATIC_LoadTheme(const struct FString& themepath);
	struct FString STATIC_GetDefaultThemePath();
	void STATIC_LoadDefaultTheme();
	void Init();
};


// Class PlatformCommon.PComMusicThemeSyncActor
// 0x0008 (0x0288 - 0x0280)
class APComMusicThemeSyncActor : public AActor
{
public:
	struct FName                                       m_ReplicatedMusicEvent;                                   // 0x0280(0x0008) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComMusicThemeSyncActor");
		return ptr;
	}


	void ReplicatedEvent(const struct FName& VarName);
	void STATIC_UpdateMusicEventClient(const struct FName& EventName);
	void STATIC_UpdateMusicEvent(const struct FName& EventName);
};


// Class PlatformCommon.PComSeqAct_PlayMusicEvent
// 0x0008 (0x0110 - 0x0108)
class UPComSeqAct_PlayMusicEvent : public USequenceAction
{
public:
	struct FName                                       EventName;                                                // 0x0108(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComSeqAct_PlayMusicEvent");
		return ptr;
	}

};


// Class PlatformCommon.PComNetDriver
// 0x0024 (0x024C - 0x0228)
class UPComNetDriver : public UTcpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0228(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComNetDriver");
		return ptr;
	}

};


// Class PlatformCommon.PComNetConn
// 0x0088 (0xB1B8 - 0xB130)
class UPComNetConn : public UTcpipConnection
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0xB130(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComNetConn");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
