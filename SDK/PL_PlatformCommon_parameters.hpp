#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_PlatformCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlatformCommon.PComBrowserManager.OpenURL
struct UPComBrowserManager_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bShowNavButtons;                                          // (OptionalParm, Parm)
	bool                                               bSetFocus;                                                // (OptionalParm, Parm)
};

// Function PlatformCommon.PComGameEngine.SendGameRequest
struct UPComGameEngine_SendGameRequest_Params
{
	struct FString                                     fsRequest;                                                // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComGameEngine.SendCtrlRequest
struct UPComGameEngine_SendCtrlRequest_Params
{
	struct FString                                     fsRequest;                                                // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComGameEngine.SendMarshalAll
struct UPComGameEngine_SendMarshalAll_Params
{
	bool                                               bLowPriority;                                             // (Parm)
};

// Function PlatformCommon.PComGameEngine.SendMarshal
struct UPComGameEngine_SendMarshal_Params
{
	struct FUniqueNetId                                qwPlayerId;                                               // (Parm)
	bool                                               bLowPriority;                                             // (Parm)
};

// Function PlatformCommon.PComGameEngine.ClearMarshal
struct UPComGameEngine_ClearMarshal_Params
{
};

// Function PlatformCommon.PComGameEngine.SetFieldString
struct UPComGameEngine_SetFieldString_Params
{
	int                                                nToken;                                                   // (Parm)
	struct FString                                     StrValue;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameEngine.SetFieldFloat
struct UPComGameEngine_SetFieldFloat_Params
{
	int                                                nToken;                                                   // (Parm)
	float                                              FloatValue;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameEngine.SetFieldInt
struct UPComGameEngine_SetFieldInt_Params
{
	int                                                nToken;                                                   // (Parm)
	int                                                IntValue;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameEngine.SetFunction
struct UPComGameEngine_SetFunction_Params
{
	int                                                nFunction;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameViewportClient.Init
struct UPComGameViewportClient_Init_Params
{
	struct FString                                     OutError;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
struct UPComGameViewportClient_StartFacebookStreaming_Params
{
};

// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
struct UPComGameViewportClient_StopRTMPStreaming_Params
{
};

// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
struct UPComGameViewportClient_StartRTMPStreaming_Params
{
	struct FString                                     InServer;                                                 // (Parm, NeedCtorLink)
	struct FString                                     InKey;                                                    // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
struct UPComGameViewportClient_SetRTMPSettings_Params
{
	bool                                               bAllowWebcam;                                             // (Parm)
	bool                                               bAllowMicrophone;                                         // (Parm)
	bool                                               bAllowDesktopAudio;                                       // (Parm)
};

// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
struct UPComGameViewportClient_CheckGameSettingsVersion_Params
{
};

// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
struct UPComGameViewportClient_HandleGameSettingsMigration_Params
{
	int                                                OldGameSettingsVersion;                                   // (Parm)
};

// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
struct UPComGameViewportClient_GetCurrentGameSettingsVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
struct UPComGameViewportClient_InitDynamicResolutionScaler_Params
{
};

// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
struct UPComImageDownloader_SetPComImageDownloadedDelegate_Params
{
	struct FScriptDelegate                             PComImageDownloadedDelegate;                              // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
struct UPComImageDownloader_OnPComImageDownloaded_Params
{
	struct FPComImageDownload                          CachedEntry;                                              // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
struct UPComInputLightingEffect_IsLogitechSdkVersionValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
struct UPComInputLightingEffect_SetCurrentTime_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
	float                                              CurrentTime;                                              // (Parm)
};

// Function PlatformCommon.PComInputLightingEffect.StopPreset
struct UPComInputLightingEffect_StopPreset_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
};

// Function PlatformCommon.PComInputLightingEffect.PlayPreset
struct UPComInputLightingEffect_PlayPreset_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
	bool                                               bUseOverrideStartTime;                                    // (OptionalParm, Parm)
	float                                              OverrideStartTime;                                        // (OptionalParm, Parm)
};

// Function PlatformCommon.PComInputLightingEffect.DisableSystem
struct UPComInputLightingEffect_DisableSystem_Params
{
};

// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
struct UPComInputLightingEffect_TryEnableSystem_Params
{
};

// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
struct UPComJsonHandler_OnImageDownloaded_Params
{
	struct FPComImageDownload                          CachedEntry;                                              // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
struct UPComOpenBroadcaster_DecodeFacebookRTMPUrl_Params
{
	struct FString                                     InRequest;                                                // (Parm, NeedCtorLink)
	class UWebRequest*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComOpenBroadcaster.Tick
struct UPComOpenBroadcaster_Tick_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
struct UPComOpenBroadcaster_ForceStopStreaming_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
struct UPComOpenBroadcaster_StopStreaming_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
struct UPComOpenBroadcaster_StartRTMPStreaming_Params
{
	struct FString                                     InServer;                                                 // (Parm, NeedCtorLink)
	struct FString                                     InKey;                                                    // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
struct UPComOpenBroadcaster_StartFacebookStreaming_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
struct UPComOpenBroadcaster_QueueFacebookStreaming_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
struct UPComOpenBroadcaster_SetStreamSettings_Params
{
	struct FPComOpenBroadcasterSettings                InSettings;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
struct UPComOpenBroadcaster_IsStreaming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
struct UPComOpenBroadcaster_CloseWebBrowser_Params
{
};

// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
struct UPComOpenBroadcaster_OpenWebBrowser_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
struct UPComOpenBroadcaster_IsWebBrowserLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
struct UPComOpenBroadcaster_PreloadWebBrowser_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
struct UPComPerformanceCaptureBase_CreateFileAndExit_Params
{
	struct FString                                     FileNameWithExtension;                                    // (Parm, NeedCtorLink)
	struct FString                                     FileContents;                                             // (Parm, NeedCtorLink)
	struct FString                                     SubfolderName;                                            // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
struct UPComPerformanceCaptureBase_GetPerfStats_Params
{
	TArray<struct FPComPerformanceCaptureStat>         PerfStats;                                                // (Const, Parm, NeedCtorLink)
	struct FString                                     FileContents;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
struct UPComPerformanceCaptureBase_GetStatsToCollect_Params
{
	struct FString                                     FileContents;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
struct UPComPerformanceCaptureBase_GetMapNameAndTime_Params
{
	struct FString                                     MapNameStr;                                               // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FormattedDate;                                            // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FormattedTime;                                            // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
struct UPComPerformanceCaptureBase_StopCycleStats_Params
{
	TArray<struct FPComPerformanceCaptureStat>         PerfStats;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
struct UPComPerformanceCaptureBase_GetPerformanceData_Params
{
	TArray<struct FPComPerformanceCaptureStat>         PerfStats;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
struct UPComPerformanceCaptureBase_EnableStatNotify_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
struct UPComPerformanceCaptureBase_EnableNonCycleStats_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
struct UPComPerformanceCaptureBase_MoveCamera_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm)
	class AActor*                                      Node;                                                     // (Parm)
};

// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
struct UPComPerformanceCaptureBase_InitializePerformanceCaptureSettings_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
struct APComPerformanceCaptureGame_DoNextAction_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
struct APComPerformanceCaptureGame_CollectNodes_Params
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
struct APComPerformanceCaptureGame_PostBeginPlay_Params
{
};

// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
struct UPComPictureInPicture_TestPictureInPicture_Params
{
};

// Function PlatformCommon.PComPictureInPicture.DebugRender
struct UPComPictureInPicture_DebugRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
struct UPComPictureInPicture_IsViewDescReady_Params
{
	struct FPComPipViewDesc                            ViewDesc;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPictureInPicture.IsViewReady
struct UPComPictureInPicture_IsViewReady_Params
{
	struct FName                                       ViewName;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPictureInPicture.RequestRender
struct UPComPictureInPicture_RequestRender_Params
{
	struct FName                                       ViewName;                                                 // (Parm)
};

// Function PlatformCommon.PComPictureInPicture.RemoveView
struct UPComPictureInPicture_RemoveView_Params
{
	struct FName                                       ViewName;                                                 // (Parm)
};

// Function PlatformCommon.PComPictureInPicture.AddView
struct UPComPictureInPicture_AddView_Params
{
	struct FPComPipViewDesc                            InViewDesc;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
struct UPComPictureInPicture_InitializeRenderTarget_Params
{
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
struct UPComPictureInPictureScene_SetSkyColor_Params
{
	struct FColor                                      InSkyColor;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
struct UPComPictureInPictureScene_SetSkyBrightness_Params
{
	float                                              InSkyBrightness;                                          // (Parm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
struct UPComPictureInPictureScene_SetBounceLightColor_Params
{
	struct FColor                                      LightColor;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
struct UPComPictureInPictureScene_SetBounceLightBrightness_Params
{
	float                                              InLightBrightness;                                        // (Parm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
struct UPComPictureInPictureScene_SetBounceLightDirection_Params
{
	struct FRotator                                    InLightDir;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
struct UPComPictureInPictureScene_EnableDirectionalBounceLight_Params
{
	bool                                               bInEnableBoundLight;                                      // (Parm)
	float                                              InBounceLightBrightness;                                  // (OptionalParm, Parm)
	struct FRotator                                    BounceLightDir;                                           // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
struct UPComPictureInPictureScene_SetLightColor_Params
{
	struct FColor                                      LightColor;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
struct UPComPictureInPictureScene_SetLightBrightness_Params
{
	float                                              InLightBrightness;                                        // (Parm)
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
struct UPComPictureInPictureScene_SetLightDirection_Params
{
	struct FRotator                                    InLightDir;                                               // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
struct UPComPictureInPictureScene_GetLightDirection_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
struct UPComPictureInPictureScene_RemoveComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, EditInline)
};

// Function PlatformCommon.PComPictureInPictureScene.AddComponent
struct UPComPictureInPictureScene_AddComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, EditInline)
	struct FMatrix                                     LocalToWorld;                                             // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPictureInPictureScene.InitScene
struct UPComPictureInPictureScene_InitScene_Params
{
};

// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
struct APComPlayerController_PlayTestInputLightingEffect_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
};

// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
struct APComPlayerController_SetCurrentTimeForInputLightingEffect_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
	float                                              InCurrentTime;                                            // (Parm)
};

// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
struct APComPlayerController_StopInputLightingEffect_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
};

// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
struct APComPlayerController_PlayInputLightingEffect_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
	bool                                               bUseOverrideStartTime;                                    // (OptionalParm, Parm)
	float                                              OverrideStartTime;                                        // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
struct APComPlayerController_ClientPlayInputLightingEffect_Params
{
	struct FName                                       InPresetName;                                             // (Parm)
	bool                                               bUseOverrideStartTime;                                    // (OptionalParm, Parm)
	float                                              OverrideStartTime;                                        // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPlayerController.TryAutoLogin
struct APComPlayerController_TryAutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
struct APComPlayerController_TryAutoLoginDelayed_Params
{
};

// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
struct APComPlayerController_SetAsNewPartyHost_Params
{
};

// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
struct APComPlayerController_ToggleGameSessionInvitesAllowed_Params
{
	bool                                               bAllowed;                                                 // (Parm)
};

// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
struct APComPlayerController_TogglePartySessionInvitesAllowed_Params
{
	bool                                               bAllowed;                                                 // (Parm)
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
struct APComPlayerController_UpdateMCTSWithNewPartyInfo_Params
{
};

// Function PlatformCommon.PComPlayerController.IsHostOfParty
struct APComPlayerController_IsHostOfParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
struct APComPlayerController_OnPeoplePickerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FOnlineFriend>                       PeoplePicked;                                             // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
struct APComPlayerController_OnReadFriendsListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
struct APComPlayerController_ShowPeoplePickerUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
struct APComPlayerController_JoinCustomMatchForInviteDelay_Params
{
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
struct APComPlayerController_JoinCustomMatchFromInvite_Params
{
};

// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
struct APComPlayerController_OnJoinSessionForReceivedInviteComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
struct APComPlayerController_OnPrivilegeCheckForGameSessionJoin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
struct APComPlayerController_OnPrivilegeLevelCheckedCompleteForPartyJoin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
struct APComPlayerController_OnGameDestroyedForPartyJoin_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
struct APComPlayerController_OnAlternatePrivilegeLevelCheckedComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
struct APComPlayerController_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPlayerController.JoinPartySession
struct APComPlayerController_JoinPartySession_Params
{
	unsigned char                                      PartySessionGuid;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
struct APComPlayerController_OnPartySessionDestroyed_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.DestroyPartySession
struct APComPlayerController_DestroyPartySession_Params
{
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
struct APComPlayerController_InvitePlayerToParty_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
struct APComPlayerController_InvitePlayerToPartyByName_Params
{
	struct FString                                     InPlayerName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
struct APComPlayerController_OnCreatePartySessionComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bSuccessful;                                              // (Parm)
};

// Function PlatformCommon.PComPlayerController.CreatePartySession
struct APComPlayerController_CreatePartySession_Params
{
};

// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
struct APComPlayerController_UnregisterP2PEnemiesForCustomMatch_Params
{
	TArray<struct FUniqueNetId>                        EnemyIds;                                                 // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
struct APComPlayerController_OnGetVoicePermissionsForUsersComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResult>                  Results;                                                  // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
struct APComPlayerController_OnGetSessionMemberInfoComplete_Params
{
	TArray<struct FSessionMemberInfo>                  SessionListInfo;                                          // (Parm, NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
struct APComPlayerController_OnGetUserConnectionInfoComplete_Params
{
	TArray<struct FSessionMemberInfo>                  SessionListInfo;                                          // (Parm, NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
struct APComPlayerController_GetUserNamesForPS4P2PConnections_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
struct APComPlayerController_CloseConnectionsToInvalidPeers_Params
{
	TArray<struct FSessionMemberInfo>                  SessionListInfo;                                          // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.EstablishPeers
struct APComPlayerController_EstablishPeers_Params
{
};

// Function PlatformCommon.PComPlayerController.LostP2PConnection
struct APComPlayerController_LostP2PConnection_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
};

// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
struct APComPlayerController_GetControllerIdFromNetId_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                ControllerId;                                             // (Parm, OutParm)
};

// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
struct APComPlayerController_PairLoggedInUserAndCurrentController_Params
{
};

// Function PlatformCommon.PComPlayerController.IsInGame
struct APComPlayerController_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.IsPackageInstalled
struct APComPlayerController_IsPackageInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
struct APComPlayerController_OnMultiplayerSessionChange_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FSessionUpdateInfo                          SessionChanges;                                           // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.CheckFilterText
struct APComPlayerController_CheckFilterText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
struct APComPlayerController_CanCommunicateTextWithUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.CanCommunicateText
struct APComPlayerController_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
struct APComPlayerController_OnTextFilterApplied_Params
{
	struct FString                                     OriginalText;                                             // (Parm, NeedCtorLink)
	struct FString                                     FilteredText;                                             // (Parm, NeedCtorLink)
	bool                                               bCensorCompletely;                                        // (Parm)
};

// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
struct APComPlayerController_RequestUpdateFriendsList_Params
{
	bool                                               bForceRequest;                                            // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
struct APComPlayerController_UpdateMctsWithFriends_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
struct APComPlayerController_OnContentPurchaseResponse_Params
{
	bool                                               bAuthorized;                                              // (Parm)
	struct FQWord                                      qwOrderId;                                                // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
struct APComPlayerController_OnPrivilegeCheckedForUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     Results;                                                  // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
struct APComPlayerController_OnPrivilegeLevelChecked_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
struct APComPlayerController_ClearOnlineDelegates_Params
{
};

// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
struct APComPlayerController_RegisterOnlineDelegates_Params
{
};

// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
struct APComPlayerController_ClientRestablishP2PConnections_Params
{
};

// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
struct APComPlayerController_ServerReEstablishP2PConnections_Params
{
};

// Function PlatformCommon.PComPlayerController.IsReconnect
struct APComPlayerController_IsReconnect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
struct APComPlayerController_RestablishVoiceForReconnect_Params
{
};

// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
struct APComPlayerController_OnJoinOnlineGameCompleteForReceivedSessionInfo_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
struct APComPlayerController_ReceiveSessionInfo_Params
{
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
	TEnumAsByte<EConsoleType>                          ConsoleType;                                              // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
struct APComPlayerController_OnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
struct APComPlayerController_ChooseThisControllerForSessionScout_Params
{
	bool                                               bCustomMatch;                                             // (Parm)
	int                                                MaxPlayers;                                               // (Parm)
	bool                                               bPrivate;                                                 // (Parm)
	TArray<struct FUniqueNetId>                        ReservedMembers;                                          // (OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
struct APComPlayerController_OnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
struct APComPlayerController_OnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
struct APComPlayerController_FinishQuitToMainMenu_Params
{
};

// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
struct APComPlayerController_CleanupOnlineSubsystemSession_Params
{
	bool                                               bWasFromMenu;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.QuitToMainMenu
struct APComPlayerController_QuitToMainMenu_Params
{
};

// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
struct APComPlayerController_ServerAcknowledgePossession_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function PlatformCommon.PComPlayerController.AcknowledgePossession
struct APComPlayerController_AcknowledgePossession_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead
struct APComPlayerController_OnAllMarketplaceProductDetailsRead_Params
{
};

// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
struct APComPlayerController_LeaveMatchQueue_Params
{
};

// Function PlatformCommon.PComPlayerController.UpdatePartyUI
struct APComPlayerController_UpdatePartyUI_Params
{
};

// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
struct APComPlayerController_TryOpenPartyUI_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
struct APComPlayerController_ShowCustomGameDisallowedPopup_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
struct APComPlayerController_ShowPackageNotInstalledForPartyInviteWarning_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
struct APComPlayerController_ShowPartyNoLongerAvailableWarning_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
struct APComPlayerController_ShowPartyFullWarning_Params
{
	bool                                               bPartySession;                                            // (Parm)
};

// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
struct APComPlayerController_ShowUnableToReadFriendsListWarning_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
struct APComPlayerController_ShowNoFriendsForPartyInviteWarning_Params
{
};

// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
struct APComPlayerController_ShowControllerDisconnectedWarning_Params
{
};

// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
struct APComPlayerController_ShouldPartySessionsBePublic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
struct APComPlayerController_CreateOrJoinPartySession_Params
{
};

// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
struct APComPlayerController_ArePartySessionInvitesAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
struct APComPlayerController_UpdateMCTSSession_Params
{
	struct FString                                     SessionGuid;                                              // (Parm, NeedCtorLink)
	bool                                               bIsHost;                                                  // (Parm)
};

// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
struct APComPlayerController_BlockPartySceneInput_Params
{
	bool                                               bBlockInput;                                              // (Parm)
};

// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
struct APComPlayerController_FilterFriendListForPeoplePicker_Params
{
	TArray<struct FOnlineFriend>                       FriendList;                                               // (Parm, OutParm, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  SessionMemberList;                                        // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
struct APComPlayerController_ShowPrivilegeMessageAndDeclineInvite_Params
{
};

// Function PlatformCommon.PComPlayerController.ConnectToPeers
struct APComPlayerController_ConnectToPeers_Params
{
	TArray<struct FSessionMemberInfo>                  SessionListInfo;                                          // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.TryJoinSession
struct APComPlayerController_TryJoinSession_Params
{
};

// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
struct APComPlayerController_MCTSSetSessionId_Params
{
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
};

// Function PlatformCommon.PComPlayerController.IsInCustomMatch
struct APComPlayerController_IsInCustomMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.SendSessionEnd
struct APComPlayerController_SendSessionEnd_Params
{
};

// Function PlatformCommon.PComPlayerController.SendSessionStart
struct APComPlayerController_SendSessionStart_Params
{
	int                                                GameModeId;                                               // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
struct APComPlayerController_OnRemoteTalkerStatusChange_Params
{
	struct FUniqueNetId                                RemoteNetId;                                              // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
struct APComPlayerController_OnCurrentUserChanged_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     CurrentUser;                                              // (Parm, NeedCtorLink)
	struct FString                                     LoggedInUser;                                             // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
struct APComPlayerController_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
struct APComPlayerController_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
struct APComPlayerController_OnMarketplaceItemPurchased_Params
{
};

// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
struct APComPlayerController_GetPlayerDLCLicenses_Params
{
	TArray<struct FOnlineContent>                      ContentList;                                              // (Parm, OutParm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
struct APComPlayerController_OnReadPlayerMarketplaceInventoryComplete_Params
{
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
struct APComPlayerController_PlayerReceivedURLTokenAndSignatureForPortalInventory_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     AuthToken;                                                // (Parm, NeedCtorLink)
	struct FString                                     Signature;                                                // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
struct APComPlayerController_ProcessPortalInventoryWithAuthToken_Params
{
};

// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
struct APComPlayerController_DumpStoreCatalog_Params
{
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
};

// Function PlatformCommon.PComPlayerController.DumpConumables
struct APComPlayerController_DumpConumables_Params
{
};

// Function PlatformCommon.PComPlayerController.DumpDurables
struct APComPlayerController_DumpDurables_Params
{
};

// Function PlatformCommon.PComPlayerController.DumpGameProducts
struct APComPlayerController_DumpGameProducts_Params
{
};

// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
struct APComPlayerController_OnReadAdditionalProductDetailsComplete_Params
{
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
};

// Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete
struct APComPlayerController_OnReadDetailsForProductIdListComplete_Params
{
	TArray<struct FMarketplaceProductDetails>          ProductList;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
struct APComPlayerController_OnReadAvailableProductsComplete_Params
{
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
};

// Function PlatformCommon.PComPlayerController.RefreshStoreData
struct APComPlayerController_RefreshStoreData_Params
{
};

// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
struct APComPlayerController_IsLoggedIntoOSS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
struct APComPlayerController_ShowConsoleLoginUI_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bForceLoginAfter;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
struct APComPlayerController_CacheLoggedInGamepad_Params
{
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
struct APComPlayerController_PlayerReceivedTokenForLogin_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
struct APComPlayerController_PlayerReceivedURLTokenAndSignatureForLogin_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     AuthToken;                                                // (Parm, NeedCtorLink)
	struct FString                                     Signature;                                                // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
struct APComPlayerController_GetOSSTokenAndSignatureForLogin_Params
{
};

// Function PlatformCommon.PComPlayerController.GetTokenURL
struct APComPlayerController_GetTokenURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.BeginLogin
struct APComPlayerController_BeginLogin_Params
{
};

// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
struct APComPlayerController_PlayerRetrievedOSSInventory_Params
{
	TArray<struct FMarketplaceInventoryItem>           Items;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
struct APComPlayerController_ValidateCreatedPartySession_Params
{
};

// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
struct APComPlayerController_UpdateClientAuthToken_Params
{
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.UpdateClientToken
struct APComPlayerController_UpdateClientToken_Params
{
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.ChallengeJoin
struct APComPlayerController_ChallengeJoin_Params
{
	int                                                nMatchId;                                                 // (Parm)
	struct FString                                     fsName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     fsPassword;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.ChallengeCreate
struct APComPlayerController_ChallengeCreate_Params
{
	int                                                nQueue;                                                   // (Parm)
	struct FString                                     fsName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     fsPassword;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
struct APComPlayerController_UpdateDatacenterPing_Params
{
};

// Function PlatformCommon.PComPlayerController.TestVideoPlayer
struct APComPlayerController_TestVideoPlayer_Params
{
};

// Function PlatformCommon.PComPlayerController.AddCheats
struct APComPlayerController_AddCheats_Params
{
};

// Function PlatformCommon.PComPlayerController.ClientAddCheats
struct APComPlayerController_ClientAddCheats_Params
{
};

// Function PlatformCommon.PComPlayerInput.Jump
struct UPComPlayerInput_Jump_Params
{
};

// Function PlatformCommon.PComPlayerInput.UnbindCommand
struct UPComPlayerInput_UnbindCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	bool                                               bGamepad;                                                 // (Parm)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
struct UPComPlayerInput_UnbindCommandAll_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.UnbindKey
struct UPComPlayerInput_UnbindKey_Params
{
	struct FName                                       BindName;                                                 // (Const, Parm, OutParm)
};

// Function PlatformCommon.PComPlayerInput.SetCommandBind
struct UPComPlayerInput_SetCommandBind_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	bool                                               bGamepad;                                                 // (Parm)
	int                                                nAlternate;                                               // (Parm)
	struct FString                                     ExtendedBinding;                                          // (Const, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.SetBindExtended
struct UPComPlayerInput_SetBindExtended_Params
{
	struct FString                                     ExtendedBinding;                                          // (Const, Parm, NeedCtorLink)
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
struct UPComPlayerInput_GetDisplayLookSensitivityY_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
struct UPComPlayerInput_GetDisplayLookSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
struct UPComPlayerInput_SetAimAcceleration_Params
{
	float                                              fLookAccel;                                               // (Parm)
};

// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
struct UPComPlayerInput_SetLookSensitivity_Params
{
	float                                              fSensitivity;                                             // (Parm)
	float                                              fSensitivityY;                                            // (OptionalParm, Parm)
};

// Function PlatformCommon.PComPlayerInput.SetMouseInput
struct UPComPlayerInput_SetMouseInput_Params
{
	bool                                               bInvert;                                                  // (Parm)
	bool                                               bSmooth;                                                  // (Parm)
	float                                              fSensitivity;                                             // (Parm)
};

// Function PlatformCommon.PComPlayerInput.SetDirty
struct UPComPlayerInput_SetDirty_Params
{
};

// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
struct UPComPlayerInput_ReadMouseSettings_Params
{
};

// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
struct UPComPlayerInput_StoreMouseSettings_Params
{
};

// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
struct UPComPlayerInput_GetKeybindWithCurrentModifiers_Params
{
	struct FName                                       Key;                                                      // (Const, Parm, OutParm)
	struct FKeyBind                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.GetBind
struct UPComPlayerInput_GetBind_Params
{
	struct FName                                       Key;                                                      // (Const, Parm, OutParm)
	struct FKeyBind                                    ModifierKeyBind;                                          // (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
struct UPComPlayerInput_KeybindToExtendedString_Params
{
	struct FKeyBind                                    Bind;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
struct UPComPlayerInput_ExtendedStringToKeybind_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	struct FKeyBind                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
struct UPComPlayerInput_GetBindFromCommand_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	bool                                               bGamepad;                                                 // (Parm)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
	struct FKeyBind                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComPlayerInput.GetBindExtended
struct UPComPlayerInput_GetBindExtended_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	struct FKeyBind                                    Bind;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               bExactMatch;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
struct UPComPlayerInput_ResetKeysToDefault_Params
{
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
struct UPComPositionHistoryServerComponent_IsInSphere_Params
{
	float                                              RewindTime;                                               // (Parm)
	struct FVector                                     LocationToCheck;                                          // (Parm)
	float                                              RadiusToCheck;                                            // (Parm)
	struct FPComPositionHistoryData                    PastDataUsed;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
struct UPComPositionHistoryServerComponent_IsOverlapping_Params
{
	float                                              RewindTime;                                               // (Parm)
	struct FVector                                     LocationToCheck;                                          // (Parm)
	float                                              RadiusToCheck;                                            // (Parm)
	struct FPComPositionHistoryData                    PastDataUsed;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
struct UPComPositionHistoryServerComponent_GetPastData_Params
{
	float                                              RewindTime;                                               // (Parm)
	bool                                               bUseClientTimeStamps;                                     // (OptionalParm, Parm)
	struct FPComPositionHistoryData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
struct UPComPositionHistoryServerComponent_RecordData_Params
{
};

// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
struct APComRepInfo_Game_CreateMusicThemePlayer_Params
{
};

// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
struct APComRepInfo_Game_PostBeginPlay_Params
{
};

// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
struct APComRepInfo_Game_PlayMusicEvent_Params
{
	struct FName                                       EventName;                                                // (Const, Parm)
};

// Function PlatformCommon.PComSupportCommands.scLogTickFlags
struct UPComSupportCommands_scLogTickFlags_Params
{
	int                                                nFlags;                                                   // (Parm)
	bool                                               bSet;                                                     // (OptionalParm, Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
struct UPComSupportCommands_scPerfAlwaysRelevantLimit_Params
{
	int                                                feet;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
struct UPComSupportCommands_scGPerfServerFlags_Params
{
	int                                                Flags;                                                    // (Parm)
	int                                                alternate1;                                               // (Parm)
	int                                                alternate2;                                               // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
struct UPComSupportCommands_scPerfPhysThreshold_Params
{
	float                                              thresh1;                                                  // (Parm)
	float                                              thesh2;                                                   // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfTickRate
struct UPComSupportCommands_scPerfTickRate_Params
{
	int                                                tickHz;                                                   // (Parm)
	int                                                altTickHz;                                                // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
struct UPComSupportCommands_scPerfDebugRelevMode_Params
{
	int                                                Mode;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
struct UPComSupportCommands_scPerfDebugSkip_Params
{
	int                                                skips;                                                    // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
struct UPComSupportCommands_scPerfDebugFeet_Params
{
	int                                                feet;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scDemoStop
struct UPComSupportCommands_scDemoStop_Params
{
};

// Function PlatformCommon.PComSupportCommands.scDemoRec
struct UPComSupportCommands_scDemoRec_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.scTimer
struct UPComSupportCommands_scTimer_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.scTime
struct UPComSupportCommands_scTime_Params
{
	int                                                nSeconds;                                                 // (Parm)
};

// Function PlatformCommon.PComSupportCommands.scScore
struct UPComSupportCommands_scScore_Params
{
	int                                                nTeam;                                                    // (Parm)
	int                                                nCount;                                                   // (OptionalParm, Parm)
};

// Function PlatformCommon.PComSupportCommands.scEndGame
struct UPComSupportCommands_scEndGame_Params
{
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.scStartGame
struct UPComSupportCommands_scStartGame_Params
{
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.scLogMark
struct UPComSupportCommands_scLogMark_Params
{
	struct FString                                     Comment;                                                  // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.scLog
struct UPComSupportCommands_scLog_Params
{
	struct FString                                     LogName;                                                  // (Parm, NeedCtorLink)
	bool                                               bEnabled;                                                 // (OptionalParm, Parm)
};

// Function PlatformCommon.PComSupportCommands.gmmf
struct UPComSupportCommands_gmmf_Params
{
};

// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
struct UPComSupportCommands_SetLogServerTickStatsFlags_Params
{
	int                                                Flags;                                                    // (Parm)
	bool                                               bSet;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
struct UPComSupportCommands_GPerfDebugPhysicsThreshold_Params
{
	float                                              fThresh1;                                                 // (Parm)
	float                                              fThresh2;                                                 // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
struct UPComSupportCommands_GPerfDebugTickRate_Params
{
	int                                                tickHz;                                                   // (Parm)
	int                                                altTickHz;                                                // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
struct UPComSupportCommands_GPerfAllRelevantLimit_Params
{
	int                                                feet;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
struct UPComSupportCommands_GPerfServerFlags_Params
{
	int                                                Flags;                                                    // (Parm)
	int                                                alternate1;                                               // (Parm)
	int                                                alternate2;                                               // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
struct UPComSupportCommands_GPerfDebugRelevMode_Params
{
	int                                                Mode;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
struct UPComSupportCommands_GPerfDebugSkips_Params
{
	int                                                skips;                                                    // (Parm)
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
struct UPComSupportCommands_GPerfDebugFeet_Params
{
	int                                                feet;                                                     // (Parm)
};

// Function PlatformCommon.PComSupportCommands.gmDiag
struct UPComSupportCommands_gmDiag_Params
{
	int                                                Code;                                                     // (Parm)
	int                                                Route;                                                    // (Parm)
};

// Function PlatformCommon.PComSupportCommands.gmC
struct UPComSupportCommands_gmC_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.gmCommand
struct UPComSupportCommands_gmCommand_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
struct UPComSupportCommands_gmMatchLobbyResume_Params
{
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
struct UPComSupportCommands_gmMatchLobbyPause_Params
{
};

// Function PlatformCommon.PComSupportCommands.gmMatchNext
struct UPComSupportCommands_gmMatchNext_Params
{
	int                                                nMapId;                                                   // (Parm)
};

// Function PlatformCommon.PComSupportCommands.gmMatchForce
struct UPComSupportCommands_gmMatchForce_Params
{
	int                                                nQueueId;                                                 // (OptionalParm, Parm)
};

// Function PlatformCommon.PComUIManagerBase.DebugDraw
struct UPComUIManagerBase_DebugDraw_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
struct UPComUtilityFunctions_GetGDeltaTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
struct UPComUtilityFunctions_IsAWithStop_Params
{
	class UObject*                                     InObject;                                                 // (Parm)
	class UClass*                                      SomeBase;                                                 // (Const, Parm)
	class UClass*                                      StopAtBase;                                               // (Const, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
struct UPComUtilityFunctions_FakeNetSerialize_Params
{
	struct FVector                                     InVector;                                                 // (Const, Parm, OutParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformCommon.PComVideoPlayer.DestroyMe
struct APComVideoPlayer_DestroyMe_Params
{
};

// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
struct APComVideoPlayer_TestOnVideoError_Params
{
	class APComVideoPlayer*                            VideoPlayer;                                              // (Parm)
	TEnumAsByte<EPComVideoPlayerError>                 ErrorCode;                                                // (Parm)
};

// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
struct APComVideoPlayer_TestVideoPlayer_Params
{
	class AActor*                                      SpawningActor;                                            // (Parm)
	struct FString                                     InURL;                                                    // (OptionalParm, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComVideoPlayer.StopVideoSession
struct APComVideoPlayer_StopVideoSession_Params
{
};

// Function PlatformCommon.PComVideoPlayer.Initialize
struct APComVideoPlayer_Initialize_Params
{
};

// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
struct APComVideoPlayer_NativePostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function PlatformCommon.PComVideoPlayer.OnVideoError
struct APComVideoPlayer_OnVideoError_Params
{
	class APComVideoPlayer*                            VideoPlayer;                                              // (Parm)
	TEnumAsByte<EPComVideoPlayerError>                 ErrorCode;                                                // (Parm)
};

// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
struct APComVideoPlayer_OnVideoFinished_Params
{
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
struct UPComMusicThemePlayer_UpdateReplicatedMusicEvent_Params
{
	struct FName                                       EventName;                                                // (Const, Parm)
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
struct UPComMusicThemePlayer_UpdateMusicTrack_Params
{
	struct FMusicTrackStruct                           NewMusicTrack;                                            // (Const, Parm, NeedCtorLink)
	float                                              fDuration;                                                // (Const, OptionalParm, Parm)
};

// Function PlatformCommon.PComMusicThemePlayer.StopMusic
struct UPComMusicThemePlayer_StopMusic_Params
{
};

// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
struct UPComMusicThemePlayer_PlayMusicEvent_Params
{
	struct FName                                       EventName;                                                // (Const, Parm)
};

// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
struct UPComMusicThemePlayer_PlayDefaultMusic_Params
{
};

// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
struct UPComMusicThemePlayer_OnThemeLoaded_Params
{
};

// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
struct UPComMusicThemePlayer_LoadTheme_Params
{
	struct FString                                     themepath;                                                // (Const, Parm, NeedCtorLink)
};

// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
struct UPComMusicThemePlayer_GetDefaultThemePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
struct UPComMusicThemePlayer_LoadDefaultTheme_Params
{
};

// Function PlatformCommon.PComMusicThemePlayer.Init
struct UPComMusicThemePlayer_Init_Params
{
};

// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
struct APComMusicThemeSyncActor_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
struct APComMusicThemeSyncActor_UpdateMusicEventClient_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
struct APComMusicThemeSyncActor_UpdateMusicEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
