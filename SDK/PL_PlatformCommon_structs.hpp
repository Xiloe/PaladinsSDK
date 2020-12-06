#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"

namespace Classes
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
// 0x185BAF53A10
struct FPComOpenBroadcasterSettings
{
	unsigned char                                      UnknownData00[0x185BAF53A10];                             // 0x0000(0x185BAF53A10) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComImageDownloader.PComImageDownload
// 0x185BAF549D0
struct FPComImageDownload
{
	unsigned char                                      UnknownData00[0x185BAF549D0];                             // 0x0000(0x185BAF549D0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComInputLightingPreset
// 0x185BAF53DD0
struct FPComInputLightingPreset
{
	unsigned char                                      UnknownData00[0x185BAF53DD0];                             // 0x0000(0x185BAF53DD0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComInputLightingEffect.PComActiveInputLightingPreset
// 0x185BAF522D0
struct FPComActiveInputLightingPreset
{
	unsigned char                                      UnknownData00[0x185BAF522D0];                             // 0x0000(0x185BAF522D0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComMusicTheme.MusicEvent
// 0x185BAF55D50
struct FMusicEvent
{
	unsigned char                                      UnknownData00[0x185BAF55D50];                             // 0x0000(0x185BAF55D50) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureProfile
// 0x185B4EDBF70
struct FPComPerformanceCaptureProfile
{
	unsigned char                                      UnknownData00[0x185B4EDBF70];                             // 0x0000(0x185B4EDBF70) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStat
// 0x185B4EDD470
struct FPComPerformanceCaptureStat
{
	unsigned char                                      UnknownData00[0x185B4EDD470];                             // 0x0000(0x185B4EDD470) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerNode
// 0x185B4EDC630
struct FPComPerformanceCaptureStatsPerNode
{
	unsigned char                                      UnknownData00[0x185B4EDC630];                             // 0x0000(0x185B4EDC630) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureBase.PComPerformanceCaptureStatsPerSkin
// 0x185B4EDCCF0
struct FPComPerformanceCaptureStatsPerSkin
{
	unsigned char                                      UnknownData00[0x185B4EDCCF0];                             // 0x0000(0x185B4EDCCF0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPerformanceCaptureGame.PComPerformanceCaptureStatCollection
// 0x185B4EDF4B0
struct FPComPerformanceCaptureStatCollection
{
	unsigned char                                      UnknownData00[0x185B4EDF4B0];                             // 0x0000(0x185B4EDF4B0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPictureInPicture.PComPipViewDesc
// 0x185B4EDE370
struct FPComPipViewDesc
{
	unsigned char                                      UnknownData00[0x185B4EDE370];                             // 0x0000(0x185B4EDE370) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPlayerProfile.BadgeStruct
// 0x185BADEA6D0
struct FBadgeStruct
{
	unsigned char                                      UnknownData00[0x185BADEA6D0];                             // 0x0000(0x185BADEA6D0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPlayerProfile.PropertyPair
// 0x185BADE73D0
struct FPropertyPair
{
	unsigned char                                      UnknownData00[0x185BADE73D0];                             // 0x0000(0x185BADE73D0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPlayerProfile.AccoladeStruct
// 0x185BADEAFD0
struct FAccoladeStruct
{
	unsigned char                                      UnknownData00[0x185BADEAFD0];                             // 0x0000(0x185BADEAFD0) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComPositionHistoryServerComponent.PComPositionHistoryData
// 0x185BADE9D10
struct FPComPositionHistoryData
{
	unsigned char                                      UnknownData00[0x185BADE9D10];                             // 0x0000(0x185BADE9D10) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComStructures.CombatMessageInfo
// 0x185BADEC650
struct FCombatMessageInfo
{
	unsigned char                                      UnknownData00[0x185BADEC650];                             // 0x0000(0x185BADEC650) MISSED OFFSET
};

// ScriptStruct PlatformCommon.PComUIManagerBase.ManagerImage
// 0x185BADEF7D0
struct FManagerImage
{
	unsigned char                                      UnknownData00[0x185BADEF7D0];                             // 0x0000(0x185BADEF7D0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
