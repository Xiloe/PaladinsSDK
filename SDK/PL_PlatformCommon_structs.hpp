#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_Engine_classes.hpp"
#include "PL_GameFramework_classes.hpp"
#include "PL_Core_classes.hpp"
#include "PL_IpDrv_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_MAX_POSITION_HISTORY_FRAMES                        30
#define CONST_MAX_SIMULTANEOUS_DOWNLOADS                         8
#define CONST_BROWSER_SURFACE_ID                                 1
#define CONST_m_nMinDisplayLookSensitivity                       1.0
#define CONST_PICTURE_IN_PICTURE_BASE_WIDTH                      1920.0f
#define CONST_TIME_OUT                                           30.f
#define CONST_PICTURE_IN_PICTURE_BASE_HEIGHT                     1080.0f
#define CONST_GC_OS_TYPE_VISTA                                   10303
#define CONST_m_nMaxDisplayLookSensitivity                       100.0
#define CONST_GC_OS_TYPE_BELOW_XP                                10300
#define CONST_GC_OS_TYPE_XP                                      10301
#define CONST_GC_OS_TYPE_WIN7                                    10305
#define CONST_GC_OS_TYPE_WIN8                                    10307

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlatformCommon.PComOpenBroadcaster.EPComOpenBroadcasterState
enum class EPComOpenBroadcasterState : uint8_t
{
	POBS_Idle                      = 0,
	POBS_WaitingForFacebookWebBrowserLoaded = 1,
	POBS_WaitingForFacebookNewPublishFlow = 2,
	POBS_FacebookNewPublishError   = 3,
	POBS_WaitingForFacebookLogin   = 4,
	POBS_WaitingForFacebookPublish = 5,
	POBS_FacebookPublishFinished   = 6,
	POBS_Streaming                 = 7,
	POBS_Quitting                  = 8,
	POBS_MAX                       = 9
};


// Enum PlatformCommon.PComImageDownloader.EPComImageDownloadState
enum class EPComImageDownloadState : uint8_t
{
	TIDS_NotStarted                = 0,
	TIDS_Downloading               = 1,
	TIDS_Succeeded                 = 2,
	TIDS_Failed                    = 3,
	TIDS_MAX                       = 4
};


// Enum PlatformCommon.PComPerformanceCaptureBase.EPComPerformanceCaptureState
enum class EPComPerformanceCaptureState : uint8_t
{
	PPCS_WaitingToStart            = 0,
	PPCS_MoveToNode                = 1,
	PPCS_StartBasicStats           = 2,
	PPCS_StopBasicStats            = 3,
	PPCS_StartCycleStats           = 4,
	PPCS_StopCycleStats            = 5,
	PPCS_SaveAndExit               = 6,
	PPCS_LoadCharacters            = 7,
	PPCS_LoadCharactersOnly        = 8,
	PPCS_DestroyPawns              = 9,
	PPCS_MAX                       = 10
};


// Enum PlatformCommon.PComStructures.CMTargetType
enum class ECMTargetType : uint8_t
{
	CMTT_Pawn                      = 0,
	CMTT_Deployable                = 1,
	CMTT_Destructible              = 2,
	CMTT_Projectile                = 3,
	CMTT_MAX                       = 4
};


// Enum PlatformCommon.PComSupportCommands.GC_ALERT_PRIORITY
enum class EGC_ALERT_PRIORITY : uint8_t
{
	GC_APT_MINIMAL                 = 0,
	GC_APT_NORMAL                  = 1,
	GC_APT_HIGH                    = 2,
	GC_APT_CRITICAL                = 3,
	GC_APT_MAX                     = 4
};


// Enum PlatformCommon.PComSupportCommands.GC_CHAT_CHANNEL
enum class EGC_CHAT_CHANNEL : uint8_t
{
	GC_CC_GLOBAL                   = 0,
	GC_CC_CLAN                     = 1,
	GC_CC_INSTANCE                 = 2,
	GC_CC_LOCAL_TEAM               = 3,
	GC_CC_PARTY                    = 4,
	GC_CC_CITY                     = 5,
	GC_CC_PERSONAL                 = 6,
	GC_CC_PRIVATE                  = 7,
	GC_CC_EOM_LOBBY                = 8,
	GC_CC_SYSTEM                   = 9,
	GC_CC_TRADE                    = 10,
	GC_CC_LFG                      = 11,
	GC_CC_LFG01                    = 12,
	GC_CC_HELP                     = 13,
	GC_CC_VOIP_NEWS                = 14,
	GC_CC_GM                       = 15,
	GC_CC_VIP                      = 16,
	GC_CC_LFG02                    = 17,
	GC_CC_COUNT                    = 18,
	GC_CC_VOIP_ECHO                = 19,
	GC_CC_VOIP_CONF                = 20,
	GC_CC_COMBAT                   = 21,
	GC_CC_EMOTE                    = 22,
	GC_CC_INVALID                  = 23,
	GC_CC_LAST                     = 24,
	GC_CC_MAX                      = 25
};


// Enum PlatformCommon.PComSupportCommands.GC_STEAM_TXN_TYPES
enum class EGC_STEAM_TXN_TYPES : uint8_t
{
	GC_STT_INVALID                 = 0,
	GC_STT_GETUSERINFO             = 1,
	GC_STT_INIT                    = 2,
	GC_STT_FINALIZE                = 3,
	GC_STT_DECLINE                 = 4,
	GC_STT_MAX                     = 5
};


// Enum PlatformCommon.PComVideoPlayer.EPComVideoPlayerError
enum class EPComVideoPlayerError : uint8_t
{
	PVPE_NoError                   = 0,
	PVPE_CannotOpenVideo           = 1,
	PVPE_StreamingProblem          = 2,
	PVPE_Unknown                   = 3,
	PVPE_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformCommon.PComOpenBroadcaster.PComOpenBroadcasterSettings
// 0x0004
struct FPComOpenBroadcasterSettings
{
	unsigned long                                      bAllowWebcam : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bAllowMicrophone : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bAllowDesktopAudio : 1;                                   // 0x0000(0x0004) (Edit)
};

// ScriptStruct PlatformCommon.PComImageDownloader.PComImageDownload
// 0x0040
struct FPComImageDownload
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     FilePath;                                                 // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    HttpDownloader;                                           // 0x0020(0x0008) (Const, Native)
	TEnumAsByte<EOnlineImageDownloadState>             State;                                                    // 0x0028(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TArray<unsigned char>                              Data;                                                     // 0x002C(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bPendingRemoval : 1;                                      // 0x003C(0x0004)
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComInputLightingPreset
// 0x003C
struct FPComInputLightingPreset
{
	struct FName                                       PresetName;                                               // 0x0000(0x0008) (Edit)
	struct FInterpCurveLinearColor                     Curve;                                                    // 0x0008(0x0014) (Edit, NeedCtorLink)
	struct FLinearColor                                ColorTint;                                                // 0x001C(0x0010) (Edit)
	int                                                LoopCount;                                                // 0x002C(0x0004) (Edit)
	float                                              PlaybackRate;                                             // 0x0030(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0034(0x0004) (Edit)
	int                                                Priority;                                                 // 0x0038(0x0004) (Edit)
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComActiveInputLightingPreset
// 0x000C
struct FPComActiveInputLightingPreset
{
	int                                                LoopCount;                                                // 0x0000(0x0004)
	float                                              CurrentTime;                                              // 0x0004(0x0004)
	float                                              PlaybackRate;                                             // 0x0008(0x0004)
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStat
// 0x0010
struct FPComPerformanceCaptureStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008)
	struct FDouble                                     StatValue;                                                // 0x0008(0x0008)
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureProfile
// 0x001C
struct FPComPerformanceCaptureProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit)
	int                                                ScalabilityBucket;                                        // 0x0008(0x0004) (Edit)
	int                                                ResolutionX;                                              // 0x000C(0x0004) (Edit)
	int                                                ResolutionY;                                              // 0x0010(0x0004) (Edit)
	int                                                VsyncInterval;                                            // 0x0014(0x0004) (Edit)
	unsigned long                                      bFullScreen : 1;                                          // 0x0018(0x0004) (Edit)
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerNode
// 0x0018
struct FPComPerformanceCaptureStatsPerNode
{
	class AActor*                                      Node;                                                     // 0x0000(0x0008)
	TArray<struct FPComPerformanceCaptureStat>         Stats;                                                    // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct PlatformCommon.PComPictureInPicture.PComPipViewDesc
// 0x01E4
struct FPComPipViewDesc
{
	struct FName                                       ViewName;                                                 // 0x0000(0x0008)
	struct FVector                                     ViewLocation;                                             // 0x0008(0x000C)
	struct FRotator                                    ViewRotation;                                             // 0x0014(0x000C)
	struct FBox                                        Viewport;                                                 // 0x0020(0x001C)
	class UPostProcessChain*                           PostProcessChain;                                         // 0x003C(0x0008)
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0044(0x0180) (NeedCtorLink)
	float                                              FOV;                                                      // 0x01C4(0x0004)
	struct FColor                                      ClearColor;                                               // 0x01C8(0x0004)
	unsigned long                                      bDebugRenderTranslucent : 1;                              // 0x01CC(0x0004)
	unsigned long                                      bAlwaysRender : 1;                                        // 0x01CC(0x0004)
	struct FDouble                                     RequestRenderTime;                                        // 0x01D0(0x0008)
	struct FDouble                                     LastRenderedTime;                                         // 0x01D8(0x0008)
	int                                                NumFramesSinceRender;                                     // 0x01E0(0x0004)
};

// ScriptStruct PlatformCommon.PComPlayerProfile.BadgeStruct
// 0x003C
struct FBadgeStruct
{
	int                                                BadgeId;                                                  // 0x0000(0x0004)
	int                                                ActivityId;                                               // 0x0004(0x0004)
	int                                                Icon;                                                     // 0x0008(0x0004)
	int                                                Tier;                                                     // 0x000C(0x0004)
	int                                                Progress;                                                 // 0x0010(0x0004)
	int                                                MaxValue;                                                 // 0x0014(0x0004)
	int                                                Category;                                                 // 0x0018(0x0004)
	struct FString                                     Title;                                                    // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x002C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct PlatformCommon.PComPlayerProfile.PropertyPair
// 0x0008
struct FPropertyPair
{
	int                                                PropertyId;                                               // 0x0000(0x0004)
	int                                                Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct PlatformCommon.PComPlayerProfile.AccoladeStruct
// 0x0010
struct FAccoladeStruct
{
	int                                                AccoladeId;                                               // 0x0000(0x0004)
	int                                                ActivityId;                                               // 0x0004(0x0004)
	int                                                Type;                                                     // 0x0008(0x0004)
	int                                                Value;                                                    // 0x000C(0x0004)
};

// ScriptStruct PlatformCommon.PComPositionHistoryServerComponent.PComPositionHistoryData
// 0x002C
struct FPComPositionHistoryData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C)
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x0024(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	unsigned long                                      bWasFalling : 1;                                          // 0x0028(0x0004)
	unsigned long                                      bCollideActors : 1;                                       // 0x0028(0x0004)
	unsigned long                                      bBlockActors : 1;                                         // 0x0028(0x0004)
};

// ScriptStruct PlatformCommon.PComUIManagerBase.ManagerImage
// 0x0018
struct FManagerImage
{
	struct FString                                     strImageName;                                             // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	class UTexture2DDynamic*                           pTexture;                                                 // 0x0010(0x0008)
};

// ScriptStruct PlatformCommon.PComMusicTheme.MusicEvent
// 0x0038
struct FMusicEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit)
	struct FMusicTrackStruct                           EventTrack;                                               // 0x0008(0x002C) (Edit, NeedCtorLink)
	float                                              EventDuration;                                            // 0x0034(0x0004) (Edit)
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerSkin
// 0x0070
struct FPComPerformanceCaptureStatsPerSkin
{
	struct FString                                     CharacterName;                                            // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SkinName;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     SkeletalMeshPathName;                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     SkeletalMeshPathNameHead;                                 // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     SkeletalMeshPathNameBody;                                 // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     SkeletalMeshPathNameWeapon;                               // 0x0050(0x0010) (NeedCtorLink)
	TArray<struct FPComPerformanceCaptureStat>         Stats;                                                    // 0x0060(0x0010) (NeedCtorLink)
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureGame.PComPerformanceCaptureStatCollection
// 0x0018
struct FPComPerformanceCaptureStatCollection
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008)
	TArray<struct FPComPerformanceCaptureStat>         Stats;                                                    // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct PlatformCommon.PComStructures.CombatMessageInfo
// 0x0040
struct FCombatMessageInfo
{
	int                                                nMsgId;                                                   // 0x0000(0x0004)
	int                                                nSourceId;                                                // 0x0004(0x0004)
	TEnumAsByte<ECMTargetType>                         eSourceType;                                              // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                nSourceOwnerId;                                           // 0x000C(0x0004)
	int                                                nTargetId;                                                // 0x0010(0x0004)
	int                                                nTargetOwnerId;                                           // 0x0014(0x0004)
	TEnumAsByte<ECMTargetType>                         eTargetType;                                              // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                nAmount1;                                                 // 0x001C(0x0004)
	int                                                nAmount2;                                                 // 0x0020(0x0004)
	int                                                nSourceItemId;                                            // 0x0024(0x0004)
	int                                                nDamageTypeId;                                            // 0x0028(0x0004)
	unsigned char                                      nFireModeIndex;                                           // 0x002C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                nLocationId;                                              // 0x0030(0x0004)
	int                                                nEventIndex;                                              // 0x0034(0x0004)
	int                                                nLocationX;                                               // 0x0038(0x0004)
	int                                                nLocationY;                                               // 0x003C(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
