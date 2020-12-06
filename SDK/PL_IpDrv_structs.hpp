#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_Core_classes.hpp"
#include "PL_Engine_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_PLAYER_MATCH                                       0
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                      = 0,
	MODE_Line                      = 1,
	MODE_Binary                    = 2,
	MODE_MAX                       = 3
};


// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                   = 0,
	RMODE_Event                    = 1,
	RMODE_MAX                      = 2
};


// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                     = 0,
	LMODE_DOS                      = 1,
	LMODE_UNIX                     = 2,
	LMODE_MAC                      = 3,
	LMODE_MAX                      = 4
};


// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
enum class EMcpChallengeFileStatus : uint8_t
{
	MCFS_NotStarted                = 0,
	MCFS_Pending                   = 1,
	MCFS_Success                   = 2,
	MCFS_Failed                    = 3,
	MCFS_MAX                       = 4
};


// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
enum class EMcpFileCompressionType : uint8_t
{
	MFCT_NONE                      = 0,
	MFCT_ZLIB                      = 1,
	MFCT_MAX                       = 2
};


// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum class EMcpGroupAccessLevel : uint8_t
{
	MGAL_Owner                     = 0,
	MGAL_Member                    = 1,
	MGAL_Public                    = 2,
	MGAL_MAX                       = 3
};


// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum class EMcpGroupAcceptState : uint8_t
{
	MGAS_Error                     = 0,
	MGAS_Pending                   = 1,
	MGAS_Accepted                  = 2,
	MGAS_MAX                       = 3
};


// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum class EMcpMessageCompressionType : uint8_t
{
	MMCT_NONE                      = 0,
	MMCT_LZO                       = 1,
	MMCT_ZLIB                      = 2,
	MMCT_MAX                       = 3
};


// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum class EMeshBeaconPacketType : uint8_t
{
	MB_Packet_UnknownType          = 0,
	MB_Packet_ClientNewConnectionRequest = 1,
	MB_Packet_ClientBeginBandwidthTest = 2,
	MB_Packet_ClientCreateNewSessionResponse = 3,
	MB_Packet_HostNewConnectionResponse = 4,
	MB_Packet_HostBandwidthTestRequest = 5,
	MB_Packet_HostCompletedBandwidthTest = 6,
	MB_Packet_HostTravelRequest    = 7,
	MB_Packet_HostCreateNewSessionRequest = 8,
	MB_Packet_DummyData            = 9,
	MB_Packet_Heartbeat            = 10,
	MB_Packet_MAX                  = 11
};


// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum class EMeshBeaconConnectionResult : uint8_t
{
	MB_ConnectionResult_Succeeded  = 0,
	MB_ConnectionResult_Duplicate  = 1,
	MB_ConnectionResult_Timeout    = 2,
	MB_ConnectionResult_Error      = 3,
	MB_ConnectionResult_MAX        = 4
};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum class EMeshBeaconBandwidthTestState : uint8_t
{
	MB_BandwidthTestState_NotStarted = 0,
	MB_BandwidthTestState_RequestPending = 1,
	MB_BandwidthTestState_StartPending = 2,
	MB_BandwidthTestState_InProgress = 3,
	MB_BandwidthTestState_Completed = 4,
	MB_BandwidthTestState_Incomplete = 5,
	MB_BandwidthTestState_Timeout  = 6,
	MB_BandwidthTestState_Error    = 7,
	MB_BandwidthTestState_MAX      = 8
};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum class EMeshBeaconBandwidthTestResult : uint8_t
{
	MB_BandwidthTestResult_Succeeded = 0,
	MB_BandwidthTestResult_Timeout = 1,
	MB_BandwidthTestResult_Error   = 2,
	MB_BandwidthTestResult_MAX     = 3
};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum class EMeshBeaconBandwidthTestType : uint8_t
{
	MB_BandwidthTestType_Upstream  = 0,
	MB_BandwidthTestType_Downstream = 1,
	MB_BandwidthTestType_RoundtripLatency = 2,
	MB_BandwidthTestType_MAX       = 3
};


// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum class EMeshBeaconClientState : uint8_t
{
	MBCS_None                      = 0,
	MBCS_Connecting                = 1,
	MBCS_Connected                 = 2,
	MBCS_ConnectionFailed          = 3,
	MBCS_AwaitingResponse          = 4,
	MBCS_Closed                    = 5,
	MBCS_MAX                       = 6
};


// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats               = 0,
	EUT_ProfileData                = 1,
	EUT_MatchmakingData            = 2,
	EUT_PlaylistPopulation         = 3,
	EUT_MAX                        = 4
};


// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum class EOnlineImageDownloadState : uint8_t
{
	PIDS_NotStarted                = 0,
	PIDS_Downloading               = 1,
	PIDS_Succeeded                 = 2,
	PIDS_Failed                    = 3,
	PIDS_MAX                       = 4
};


// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType          = 0,
	RPT_ClientReservationRequest   = 1,
	RPT_ClientReservationUpdateRequest = 2,
	RPT_ClientCancellationRequest  = 3,
	RPT_HostReservationResponse    = 4,
	RPT_HostReservationCountUpdate = 5,
	RPT_HostTravelRequest          = 6,
	RPT_HostIsReady                = 7,
	RPT_HostHasCancelled           = 8,
	RPT_Heartbeat                  = 9,
	RPT_MAX                        = 10
};


// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError               = 0,
	PRR_PartyLimitReached          = 1,
	PRR_IncorrectPlayerCount       = 2,
	PRR_RequestTimedOut            = 3,
	PRR_ReservationDuplicate       = 4,
	PRR_ReservationNotFound        = 5,
	PRR_ReservationAccepted        = 6,
	PRR_ReservationDenied          = 7,
	PRR_MAX                        = 8
};


// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation = 0,
	PBClientRequest_UpdateReservation = 1,
	PBClientRequest_MAX            = 2
};


// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                      = 0,
	PBCS_Connecting                = 1,
	PBCS_Connected                 = 2,
	PBCS_ConnectionFailed          = 3,
	PBCS_AwaitingResponse          = 4,
	PBCS_Closed                    = 5,
	PBCS_MAX                       = 6
};


// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations         = 0,
	PBHS_DenyReservations          = 1,
	PBHS_MAX                       = 2
};


// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized              = 0,
	STATE_Ready                    = 1,
	STATE_Listening                = 2,
	STATE_Connecting               = 3,
	STATE_Connected                = 4,
	STATE_ListenClosePending       = 5,
	STATE_ConnectClosePending      = 6,
	STATE_ListenClosing            = 7,
	STATE_ConnectClosing           = 8,
	STATE_MAX                      = 9
};


// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                 = 0,
	TitleFile_Save                 = 1,
	TitleFile_Load                 = 2,
	TitleFile_MAX                  = 3
};


// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                    = 0,
	Request_POST                   = 1,
	Request_MAX                    = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeFile
// 0x185B6211A30
struct FMcpClashMobChallengeFile
{
	unsigned char                                      UnknownData00[0x185B6211A30];                             // 0x0000(0x185B6211A30) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotificationParams
// 0x185B6213D70
struct FMcpClashMobPushNotificationParams
{
	unsigned char                                      UnknownData00[0x185B6213D70];                             // 0x0000(0x185B6213D70) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotification
// 0x185B62129F0
struct FMcpClashMobPushNotification
{
	unsigned char                                      UnknownData00[0x185B62129F0];                             // 0x0000(0x185B62129F0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeEvent
// 0x185B6216170
struct FMcpClashMobChallengeEvent
{
	unsigned char                                      UnknownData00[0x185B6216170];                             // 0x0000(0x185B6216170) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeUserStatus
// 0x185B6215630
struct FMcpClashMobChallengeUserStatus
{
	unsigned char                                      UnknownData00[0x185B6215630];                             // 0x0000(0x185B6215630) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// 0x185B62175B0
struct FFileNameToURLMapping
{
	unsigned char                                      UnknownData00[0x185B62175B0];                             // 0x0000(0x185B62175B0) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x185B6218E70
struct FTitleFileWeb
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TScriptInterface<class OnlineAccountInterface>     AccountInterface;                                         // 0x0068(0x0010)
	TScriptInterface<class OnlinePlayerInterface>      PlayerInterface;                                          // 0x0078(0x0010)
	TScriptInterface<class OnlinePlayerInterfaceEx>    PlayerInterfaceEx;                                        // 0x0088(0x0010)
	TScriptInterface<class OnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0098(0x0010)
	TScriptInterface<class OnlineSystemInterface>      SystemInterface;                                          // 0x00A8(0x0010)
	TScriptInterface<class OnlineGameInterface>        GameInterface;                                            // 0x00B8(0x0010)
	TScriptInterface<class OnlineContentInterface>     ContentInterface;                                         // 0x00C8(0x0010)
	TScriptInterface<class OnlineVoiceInterface>       VoiceInterface;                                           // 0x00D8(0x0010)
	TScriptInterface<class OnlineStatsInterface>       StatsInterface;                                           // 0x00E8(0x0010)
	TScriptInterface<class OnlineNewsInterface>        NewsInterface;                                            // 0x00F8(0x0010)
	TScriptInterface<class OnlinePartyChatInterface>   PartyChatInterface;                                       // 0x0108(0x0010)
	TScriptInterface<class OnlineTitleFileInterface>   TitleFileInterface;                                       // 0x0118(0x0010)
	TScriptInterface<class OnlineTitleFileCacheInterface> TitleFileCacheInterface;                                  // 0x0128(0x0010)
	TScriptInterface<class UserCloudFileInterface>     UserCloudInterface;                                       // 0x0138(0x0010)
	TScriptInterface<class SharedCloudFileInterface>   SharedCloudInterface;                                     // 0x0148(0x0010)
	TScriptInterface<class OnlineSocialInterface>      SocialInterface;                                          // 0x0158(0x0010)
	TScriptInterface<class OnlineChatInterface>        ChatInterface;                                            // 0x0168(0x0010)
	TScriptInterface<class OnlineAuthInterface>        AuthInterface;                                            // 0x0178(0x0010)
	TScriptInterface<class OnlineGameDVRInterface>     GameDVRInterface;                                         // 0x0188(0x0010)
	TScriptInterface<class OnlineCommunityContentInterface> CommunityContentInterface;                                // 0x0198(0x0010)
	TArray<struct FScriptDelegate>                     OnLeaveStorefrontDelegates;                               // 0x01A8(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerNetId;                                      // 0x01B8(0x0008) (Native)
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x01C0(0x0010) (NeedCtorLink)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x01D0(0x0010) (Config, NeedCtorLink)
	TArray<struct FNamedSession>                       Sessions;                                                 // 0x01E0(0x0010) (Const, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  PartyMemberList;                                          // 0x01F0(0x0010) (NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  GameMemberList;                                           // 0x0200(0x0010) (NeedCtorLink)
	unsigned long                                      bCameFromAutoLogin : 1;                                   // 0x0210(0x0004)
	unsigned long                                      bUseBuildIdOverride : 1;                                  // 0x0210(0x0004) (Config)
	int                                                BuildIdOverride;                                          // 0x0214(0x0004) (Config)
	struct FString                                     IniLocPatcherClassName;                                   // 0x0218(0x0010) (Config, NeedCtorLink)
	class IniLocPatcher*                               Patcher;                                                  // 0x0228(0x0008) (Transient)
	float                                              AsyncMinCompletionTime;                                   // 0x0230(0x0004) (Config)
	struct FString                                     DefaultSessionTemplateName;                               // 0x0234(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     PartySessionTemplateName;                                 // 0x0244(0x0010) (Const, Config, NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveStorefront__Delegate;                            // 0x0254(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x185B6218C0C];                             // 0x0264(0x185B6218C0C) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeUserRequest
// 0x185B621F9B0
struct FMcpChallengeUserRequest
{
	unsigned char                                      UnknownData00[0x185B621F9B0];                             // 0x0000(0x185B621F9B0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpClashMobManager.McpChallengeRequest
// 0x185B621DAF0
struct FMcpChallengeRequest
{
	unsigned char                                      UnknownData00[0x185B621DAF0];                             // 0x0000(0x185B621DAF0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// 0x185B62259B0
struct FMcpGroupMember
{
	unsigned char                                      UnknownData00[0x185B62259B0];                             // 0x0000(0x185B62259B0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// 0x185B6223DF0
struct FMcpGroup
{
	unsigned char                                      UnknownData00[0x185B6223DF0];                             // 0x0000(0x185B6223DF0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// 0x185B6226070
struct FMcpGroupList
{
	unsigned char                                      UnknownData00[0x185B6226070];                             // 0x0000(0x185B6226070) MISSED OFFSET
};

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// 0x185B622EBF0
struct FMcpIdMapping
{
	unsigned char                                      UnknownData00[0x185B622EBF0];                             // 0x0000(0x185B622EBF0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// 0x185B6231EF0
struct FAddMappingRequest
{
	unsigned char                                      UnknownData00[0x185B6231EF0];                             // 0x0000(0x185B6231EF0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// 0x185B6231230
struct FQueryMappingRequest
{
	unsigned char                                      UnknownData00[0x185B6231230];                             // 0x0000(0x185B6231230) MISSED OFFSET
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValue
// 0x185B6233CF0
struct FManagedValue
{
	unsigned char                                      UnknownData00[0x185B6233CF0];                             // 0x0000(0x185B6233CF0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValueSaveSlot
// 0x185B6233570
struct FManagedValueSaveSlot
{
	unsigned char                                      UnknownData00[0x185B6233570];                             // 0x0000(0x185B6233570) MISSED OFFSET
};

// ScriptStruct IpDrv.McpManagedValueManager.SaveSlotRequestState
// 0x185B62340B0
struct FSaveSlotRequestState
{
	unsigned char                                      UnknownData00[0x185B62340B0];                             // 0x0000(0x185B62340B0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpManagedValueManager.ValueRequestState
// 0x185B6234170
struct FValueRequestState
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
	struct FString                                     CreateSaveSlotUrl;                                        // 0x00C8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ReadSaveSlotUrl;                                          // 0x00D8(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateValueUrl;                                           // 0x00E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteValueUrl;                                           // 0x00F8(0x0010) (Config, NeedCtorLink)
	TArray<struct FManagedValueSaveSlot>               SaveSlots;                                                // 0x0108(0x0010) (NeedCtorLink)
	TArray<struct FSaveSlotRequestState>               CreateSaveSlotRequests;                                   // 0x0118(0x0010) (NeedCtorLink)
	TArray<struct FSaveSlotRequestState>               ReadSaveSlotRequests;                                     // 0x0128(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  UpdateValueRequests;                                      // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  DeleteValueRequests;                                      // 0x0148(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x185B6234018];                             // 0x0158(0x185B6234018) MISSED OFFSET
};

// ScriptStruct IpDrv.McpMessageBase.McpMessage
// 0x185B62390F0
struct FMcpMessage
{
	unsigned char                                      UnknownData00[0x185B62390F0];                             // 0x0000(0x185B62390F0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// 0x185B6238370
struct FMcpMessageList
{
	unsigned char                                      UnknownData00[0x185B6238370];                             // 0x0000(0x185B6238370) MISSED OFFSET
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// 0x185B6239DB0
struct FMcpMessageContents
{
	unsigned char                                      UnknownData00[0x185B6239DB0];                             // 0x0000(0x185B6239DB0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// 0x185B623CDB0
struct FMcpCompressMessageRequest
{
	unsigned char                                      UnknownData00[0x185B623CDB0];                             // 0x0000(0x185B623CDB0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// 0x185B623DFB0
struct FMcpUncompressMessageRequest
{
	unsigned char                                      UnknownData00[0x185B623DFB0];                             // 0x0000(0x185B623DFB0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// 0x185BCADC1F0
struct FMcpUserCloudFilesEntry
{
	unsigned char                                      UnknownData00[0x185BCADC1F0];                             // 0x0000(0x185BCADC1F0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x185BCADB2F0
struct FMcpUserCloudFileInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TScriptInterface<class OnlineAccountInterface>     AccountInterface;                                         // 0x0068(0x0010)
	TScriptInterface<class OnlinePlayerInterface>      PlayerInterface;                                          // 0x0078(0x0010)
	TScriptInterface<class OnlinePlayerInterfaceEx>    PlayerInterfaceEx;                                        // 0x0088(0x0010)
	TScriptInterface<class OnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0098(0x0010)
	TScriptInterface<class OnlineSystemInterface>      SystemInterface;                                          // 0x00A8(0x0010)
	TScriptInterface<class OnlineGameInterface>        GameInterface;                                            // 0x00B8(0x0010)
	TScriptInterface<class OnlineContentInterface>     ContentInterface;                                         // 0x00C8(0x0010)
	TScriptInterface<class OnlineVoiceInterface>       VoiceInterface;                                           // 0x00D8(0x0010)
	TScriptInterface<class OnlineStatsInterface>       StatsInterface;                                           // 0x00E8(0x0010)
	TScriptInterface<class OnlineNewsInterface>        NewsInterface;                                            // 0x00F8(0x0010)
	TScriptInterface<class OnlinePartyChatInterface>   PartyChatInterface;                                       // 0x0108(0x0010)
	TScriptInterface<class OnlineTitleFileInterface>   TitleFileInterface;                                       // 0x0118(0x0010)
	TScriptInterface<class OnlineTitleFileCacheInterface> TitleFileCacheInterface;                                  // 0x0128(0x0010)
	TScriptInterface<class UserCloudFileInterface>     UserCloudInterface;                                       // 0x0138(0x0010)
	TScriptInterface<class SharedCloudFileInterface>   SharedCloudInterface;                                     // 0x0148(0x0010)
	TScriptInterface<class OnlineSocialInterface>      SocialInterface;                                          // 0x0158(0x0010)
	TScriptInterface<class OnlineChatInterface>        ChatInterface;                                            // 0x0168(0x0010)
	TScriptInterface<class OnlineAuthInterface>        AuthInterface;                                            // 0x0178(0x0010)
	TScriptInterface<class OnlineGameDVRInterface>     GameDVRInterface;                                         // 0x0188(0x0010)
	TScriptInterface<class OnlineCommunityContentInterface> CommunityContentInterface;                                // 0x0198(0x0010)
	TArray<struct FScriptDelegate>                     OnLeaveStorefrontDelegates;                               // 0x01A8(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerNetId;                                      // 0x01B8(0x0008) (Native)
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x01C0(0x0010) (NeedCtorLink)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x01D0(0x0010) (Config, NeedCtorLink)
	TArray<struct FNamedSession>                       Sessions;                                                 // 0x01E0(0x0010) (Const, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  PartyMemberList;                                          // 0x01F0(0x0010) (NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  GameMemberList;                                           // 0x0200(0x0010) (NeedCtorLink)
	unsigned long                                      bCameFromAutoLogin : 1;                                   // 0x0210(0x0004)
	unsigned long                                      bUseBuildIdOverride : 1;                                  // 0x0210(0x0004) (Config)
	int                                                BuildIdOverride;                                          // 0x0214(0x0004) (Config)
	struct FString                                     IniLocPatcherClassName;                                   // 0x0218(0x0010) (Config, NeedCtorLink)
	class IniLocPatcher*                               Patcher;                                                  // 0x0228(0x0008) (Transient)
	float                                              AsyncMinCompletionTime;                                   // 0x0230(0x0004) (Config)
	struct FString                                     DefaultSessionTemplateName;                               // 0x0234(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     PartySessionTemplateName;                                 // 0x0244(0x0010) (Const, Config, NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveStorefront__Delegate;                            // 0x0254(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x185BCADB08C];                             // 0x0264(0x185BCADB08C) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemAttribute
// 0x185BCAE0E70
struct FMcpInventoryItemAttribute
{
	unsigned char                                      UnknownData00[0x185BCAE0E70];                             // 0x0000(0x185BCAE0E70) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItem
// 0x185BCAE27F0
struct FMcpInventoryItem
{
	unsigned char                                      UnknownData00[0x185BCAE27F0];                             // 0x0000(0x185BCAE27F0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemContainer
// 0x185BCAE4830
struct FMcpInventoryItemContainer
{
	unsigned char                                      UnknownData00[0x185BCAE4830];                             // 0x0000(0x185BCAE4830) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryBase.McpInventorySaveSlot
// 0x185BCAE28B0
struct FMcpInventorySaveSlot
{
	unsigned char                                      UnknownData00[0x185BCAE28B0];                             // 0x0000(0x185BCAE28B0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryManager.SaveSlotRequestState
// 0x185BCAE87F0
struct FSaveSlotRequestState
{
	unsigned char                                      UnknownData00[0x185BCAE87F0];                             // 0x0000(0x185BCAE87F0) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserInventoryManager.InventoryItemRequestState
// 0x185BCAEA530
struct FInventoryItemRequestState
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
	struct FString                                     CreateSaveSlotUrl;                                        // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteSaveSlotUrl;                                        // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListSaveSlotUrl;                                          // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListItemsUrl;                                             // 0x0158(0x0010) (Config, NeedCtorLink)
	struct FString                                     PurchaseItemUrl;                                          // 0x0168(0x0010) (Config, NeedCtorLink)
	struct FString                                     SellItemUrl;                                              // 0x0178(0x0010) (Config, NeedCtorLink)
	struct FString                                     EarnItemUrl;                                              // 0x0188(0x0010) (Config, NeedCtorLink)
	struct FString                                     ConsumeItemUrl;                                           // 0x0198(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteItemUrl;                                            // 0x01A8(0x0010) (Config, NeedCtorLink)
	struct FString                                     IapRecordUrl;                                             // 0x01B8(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpInventorySaveSlot>               SaveSlots;                                                // 0x01C8(0x0010) (NeedCtorLink)
	TArray<struct FSaveSlotRequestState>               SaveSlotRequests;                                         // 0x01D8(0x0010) (NeedCtorLink)
	TArray<struct FSaveSlotRequestState>               ListSaveSlotRequests;                                     // 0x01E8(0x0010) (NeedCtorLink)
	TArray<struct FSaveSlotRequestState>               ListItemsRequests;                                        // 0x01F8(0x0010) (NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          ItemRequests;                                             // 0x0208(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x185BCAEA318];                             // 0x0218(0x185BCAEA318) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// 0x185BCAF3470
struct FMcpUserStatus
{
	unsigned char                                      UnknownData00[0x185BCAF3470];                             // 0x0000(0x185BCAF3470) MISSED OFFSET
};

// ScriptStruct IpDrv.McpUserManager.RegisterUserRequest
// 0x185BCAF48B0
struct FRegisterUserRequest
{
	unsigned char                                      UnknownData00[0x185BCAF48B0];                             // 0x0000(0x185BCAF48B0) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x185BCAFA5B0
struct FConnectionBandwidthStats
{
	unsigned char                                      UnknownData00[0x185BCAFA5B0];                             // 0x0000(0x185BCAFA5B0) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x185BCAFCCB0
struct FPlayerMember
{
	unsigned char                                      UnknownData00[0x185BCAFCCB0];                             // 0x0000(0x185BCAFCCB0) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x185BCAFAF70
struct FClientBandwidthTestData
{
	unsigned char                                      UnknownData00[0x185BCAFAF70];                             // 0x0000(0x185BCAFAF70) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x185BCAFB030
struct FClientConnectionRequest
{
	unsigned char                                      UnknownData00[0x185BCAFB030];                             // 0x0000(0x185BCAFB030) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x185BCAFEB70
struct FClientMeshBeaconConnection
{
	unsigned char                                      UnknownData00[0x185BCAFEB70];                             // 0x0000(0x185BCAFEB70) MISSED OFFSET
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x185BCAFDA30
struct FClientConnectionBandwidthTestData
{
	unsigned char                                      UnknownData00[0x185BCAFDA30];                             // 0x0000(0x185BCAFDA30) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x185BCB059B0
struct FEventUploadConfig
{
	unsigned char                                      UnknownData00[0x185BCB059B0];                             // 0x0000(0x185BCB059B0) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// 0x185BCB124F0
struct FOnlineImageDownload
{
	unsigned char                                      UnknownData00[0x185BCB124F0];                             // 0x0000(0x185BCB124F0) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x185BCB15C70
struct FNewsCacheEntry
{
	unsigned char                                      UnknownData00[0x185BCB15C70];                             // 0x0000(0x185BCB15C70) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x185BCB17B30
struct FPlaylist
{
	unsigned char                                      UnknownData00[0x185BCB17B30];                             // 0x0000(0x185BCB17B30) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x185BCB188B0
struct FPlaylistPopulation
{
	unsigned char                                      UnknownData00[0x185BCB188B0];                             // 0x0000(0x185BCB188B0) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x185BCB15BB0
struct FConfiguredGameSetting
{
	unsigned char                                      UnknownData00[0x185BCB15BB0];                             // 0x0000(0x185BCB15BB0) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlinePlaylistManager.InventorySwap
// 0x185BCB17830
struct FInventorySwap
{
	unsigned char                                      UnknownData00[0x185BCB17830];                             // 0x0000(0x185BCB17830) MISSED OFFSET
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x185BA7F3960
struct FTitleFileMcp
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TScriptInterface<class OnlineAccountInterface>     AccountInterface;                                         // 0x0068(0x0010)
	TScriptInterface<class OnlinePlayerInterface>      PlayerInterface;                                          // 0x0078(0x0010)
	TScriptInterface<class OnlinePlayerInterfaceEx>    PlayerInterfaceEx;                                        // 0x0088(0x0010)
	TScriptInterface<class OnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0098(0x0010)
	TScriptInterface<class OnlineSystemInterface>      SystemInterface;                                          // 0x00A8(0x0010)
	TScriptInterface<class OnlineGameInterface>        GameInterface;                                            // 0x00B8(0x0010)
	TScriptInterface<class OnlineContentInterface>     ContentInterface;                                         // 0x00C8(0x0010)
	TScriptInterface<class OnlineVoiceInterface>       VoiceInterface;                                           // 0x00D8(0x0010)
	TScriptInterface<class OnlineStatsInterface>       StatsInterface;                                           // 0x00E8(0x0010)
	TScriptInterface<class OnlineNewsInterface>        NewsInterface;                                            // 0x00F8(0x0010)
	TScriptInterface<class OnlinePartyChatInterface>   PartyChatInterface;                                       // 0x0108(0x0010)
	TScriptInterface<class OnlineTitleFileInterface>   TitleFileInterface;                                       // 0x0118(0x0010)
	TScriptInterface<class OnlineTitleFileCacheInterface> TitleFileCacheInterface;                                  // 0x0128(0x0010)
	TScriptInterface<class UserCloudFileInterface>     UserCloudInterface;                                       // 0x0138(0x0010)
	TScriptInterface<class SharedCloudFileInterface>   SharedCloudInterface;                                     // 0x0148(0x0010)
	TScriptInterface<class OnlineSocialInterface>      SocialInterface;                                          // 0x0158(0x0010)
	TScriptInterface<class OnlineChatInterface>        ChatInterface;                                            // 0x0168(0x0010)
	TScriptInterface<class OnlineAuthInterface>        AuthInterface;                                            // 0x0178(0x0010)
	TScriptInterface<class OnlineGameDVRInterface>     GameDVRInterface;                                         // 0x0188(0x0010)
	TScriptInterface<class OnlineCommunityContentInterface> CommunityContentInterface;                                // 0x0198(0x0010)
	TArray<struct FScriptDelegate>                     OnLeaveStorefrontDelegates;                               // 0x01A8(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerNetId;                                      // 0x01B8(0x0008) (Native)
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x01C0(0x0010) (NeedCtorLink)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x01D0(0x0010) (Config, NeedCtorLink)
	TArray<struct FNamedSession>                       Sessions;                                                 // 0x01E0(0x0010) (Const, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  PartyMemberList;                                          // 0x01F0(0x0010) (NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  GameMemberList;                                           // 0x0200(0x0010) (NeedCtorLink)
	unsigned long                                      bCameFromAutoLogin : 1;                                   // 0x0210(0x0004)
	unsigned long                                      bUseBuildIdOverride : 1;                                  // 0x0210(0x0004) (Config)
	int                                                BuildIdOverride;                                          // 0x0214(0x0004) (Config)
	struct FString                                     IniLocPatcherClassName;                                   // 0x0218(0x0010) (Config, NeedCtorLink)
	class IniLocPatcher*                               Patcher;                                                  // 0x0228(0x0008) (Transient)
	float                                              AsyncMinCompletionTime;                                   // 0x0230(0x0004) (Config)
	struct FString                                     DefaultSessionTemplateName;                               // 0x0234(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     PartySessionTemplateName;                                 // 0x0244(0x0010) (Const, Config, NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveStorefront__Delegate;                            // 0x0254(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x185BA7F36FC];                             // 0x0264(0x185BA7F36FC) MISSED OFFSET
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x185BA7F38A0
struct FPlayerReservation
{
	unsigned char                                      UnknownData00[0x185BA7F38A0];                             // 0x0000(0x185BA7F38A0) MISSED OFFSET
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x185BA7F3EA0
struct FPartyReservation
{
	unsigned char                                      UnknownData00[0x185BA7F3EA0];                             // 0x0000(0x185BA7F3EA0) MISSED OFFSET
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x185BA7F8220
struct FClientBeaconConnection
{
	unsigned char                                      UnknownData00[0x185BA7F8220];                             // 0x0000(0x185BA7F8220) MISSED OFFSET
};

// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x185BA7FA620
struct FTitleFileCacheEntry
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TScriptInterface<class OnlineAccountInterface>     AccountInterface;                                         // 0x0068(0x0010)
	TScriptInterface<class OnlinePlayerInterface>      PlayerInterface;                                          // 0x0078(0x0010)
	TScriptInterface<class OnlinePlayerInterfaceEx>    PlayerInterfaceEx;                                        // 0x0088(0x0010)
	TScriptInterface<class OnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0098(0x0010)
	TScriptInterface<class OnlineSystemInterface>      SystemInterface;                                          // 0x00A8(0x0010)
	TScriptInterface<class OnlineGameInterface>        GameInterface;                                            // 0x00B8(0x0010)
	TScriptInterface<class OnlineContentInterface>     ContentInterface;                                         // 0x00C8(0x0010)
	TScriptInterface<class OnlineVoiceInterface>       VoiceInterface;                                           // 0x00D8(0x0010)
	TScriptInterface<class OnlineStatsInterface>       StatsInterface;                                           // 0x00E8(0x0010)
	TScriptInterface<class OnlineNewsInterface>        NewsInterface;                                            // 0x00F8(0x0010)
	TScriptInterface<class OnlinePartyChatInterface>   PartyChatInterface;                                       // 0x0108(0x0010)
	TScriptInterface<class OnlineTitleFileInterface>   TitleFileInterface;                                       // 0x0118(0x0010)
	TScriptInterface<class OnlineTitleFileCacheInterface> TitleFileCacheInterface;                                  // 0x0128(0x0010)
	TScriptInterface<class UserCloudFileInterface>     UserCloudInterface;                                       // 0x0138(0x0010)
	TScriptInterface<class SharedCloudFileInterface>   SharedCloudInterface;                                     // 0x0148(0x0010)
	TScriptInterface<class OnlineSocialInterface>      SocialInterface;                                          // 0x0158(0x0010)
	TScriptInterface<class OnlineChatInterface>        ChatInterface;                                            // 0x0168(0x0010)
	TScriptInterface<class OnlineAuthInterface>        AuthInterface;                                            // 0x0178(0x0010)
	TScriptInterface<class OnlineGameDVRInterface>     GameDVRInterface;                                         // 0x0188(0x0010)
	TScriptInterface<class OnlineCommunityContentInterface> CommunityContentInterface;                                // 0x0198(0x0010)
	TArray<struct FScriptDelegate>                     OnLeaveStorefrontDelegates;                               // 0x01A8(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerNetId;                                      // 0x01B8(0x0008) (Native)
	TArray<struct FNamedInterface>                     NamedInterfaces;                                          // 0x01C0(0x0010) (NeedCtorLink)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                       // 0x01D0(0x0010) (Config, NeedCtorLink)
	TArray<struct FNamedSession>                       Sessions;                                                 // 0x01E0(0x0010) (Const, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  PartyMemberList;                                          // 0x01F0(0x0010) (NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  GameMemberList;                                           // 0x0200(0x0010) (NeedCtorLink)
	unsigned long                                      bCameFromAutoLogin : 1;                                   // 0x0210(0x0004)
	unsigned long                                      bUseBuildIdOverride : 1;                                  // 0x0210(0x0004) (Config)
	int                                                BuildIdOverride;                                          // 0x0214(0x0004) (Config)
	struct FString                                     IniLocPatcherClassName;                                   // 0x0218(0x0010) (Config, NeedCtorLink)
	class IniLocPatcher*                               Patcher;                                                  // 0x0228(0x0008) (Transient)
	float                                              AsyncMinCompletionTime;                                   // 0x0230(0x0004) (Config)
	struct FString                                     DefaultSessionTemplateName;                               // 0x0234(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     PartySessionTemplateName;                                 // 0x0244(0x0010) (Const, Config, NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveStorefront__Delegate;                            // 0x0254(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x185BA7FA3BC];                             // 0x0264(0x185BA7FA3BC) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
