#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_Core_classes.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_SAVE_SYSTEM_VERSION_KEY                            "CloudSaveSystemVersion"
#define CONST_MINFLOORZ                                          0.7
#define CONST_RBSTATE_LINVELSCALE                                10.0
#define CONST_MAX_INSTANCES_PER_CLASS                            5
#define CONST_ACTORMAXSTEPHEIGHT                                 35.0
#define CONST_FORCEFEEDBACK_MAX                                  100.f
#define CONST_RBSTATE_ANGVELSCALE                                1000.0
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PING_POLL       39
#define CONST_REP_RBLOCATION_ERROR_TOLERANCE_SQ                  16.0f
#define CONST_COVERLINK_EdgeExposureDot                          0.85f
#define CONST_RB_None                                            0x00
#define CONST_TRACEFLAG_Blocking                                 8
#define CONST_RB_NeedsUpdate                                     0x01
#define CONST_GameplayEventsWriterBase_GAMEEVENT_ROUND_ENDED     3
#define CONST_RB_Sleeping                                        0x02
#define CONST_TRACEFLAG_ForceController                          16
#define CONST_TRACEFLAG_SkipMovers                               4
#define CONST_DEFAULT_SIZE_X                                     1024
#define CONST_DATA_STORE_ID_KEY                                  "DataStoreID"
#define CONST_TRACEFLAG_PhysicsVolumes                           2
#define CONST_PIT_Game                                           0x0001
#define CONST_TRACEFLAG_Bullet                                   1
#define CONST_PIT_App                                            0x0002
#define CONST_PIT_All                                            0x001F
#define CONST_PIT_GameDemo                                       0x0010
#define CONST_MAX_BOOKMARK_NUMBER                                10
#define CONST_PIT_Durable                                        0x0008
#define CONST_PIT_Consumable                                     0x0004
#define CONST_SDPG_NumBits                                       3
#define CONST_LATENT_MOVETOWARD                                  503
#define CONST_GameplayEventsWriterBase_GAMEEVENT_MEMORYUSAGE_POLL 35
#define CONST_MAX_ACTIVE_CAMERA_ANIMS                            8
#define CONST_GET_SAVE_SLOT_ERROR                                -2
#define CONST_MAXNEARZEROVELOCITYSQUARED                         9.0
#define CONST_MAXCLIENTUPDATEINTERVAL                            0.25
#define CONST_BLOCKEDPATHCOST                                    10000000
#define CONST_CLIENTADJUSTUPDATECOST                             180.0
#define CONST_MAXVEHICLEPOSITIONERRORSQUARED                     900.0
#define CONST_MaxHistory                                         16
#define CONST_MAXPOSITIONERRORSQUARED                            3.0
#define CONST_INFINITE_PATH_COST                                 10000000
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GPUFRAMETIME_POLL 42
#define CONST_GET_SAVE_SLOT_INVALID                              -1
#define CONST_COMMON_DATA_SAVE_SLOT_INDEX                        -1
#define CONST_SAVE_DATA_BLOB_NAME_KEY                            "DataBlobName"
#define CONST_HeaderFlags_NoEventStrings                         1
#define CONST_NUM_SAVE_SLOTS_KEY                                 "NumSaveSlots"
#define CONST_COVERLINK_DangerDist                               1536.f
#define CONST_DEFAULT_SIZE_Y                                     768
#define CONST_GameplayEventsWriterBase_GAMEEVENT_FRAMERATE_POLL  36
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_SPAWN    102
#define CONST_MAX_SUPPORTED_GAMEPADS                             24
#define CONST_COVERLINK_EdgeCheckDot                             0.25f
#define CONST_COVERLINK_ExposureDot                              0.4f
#define CONST_NULLCHARACTER                                      127
#define CONST_FORCEFEEDBACK_MIN                                  0.f
#define CONST_FSM_DEFAULTRECYCLETIME                             0.2
#define CONST_GameplayEventsWriterBase_GAMEEVENT_MATCH_STARTED   0
#define CONST_GameplayEventsWriterBase_GAMEEVENT_NETWORKUSAGEIN_POLL 37
#define CONST_GameplayEventsWriterBase_GAMEEVENT_MATCH_ENDED     1
#define CONST_GameplayEventsWriterBase_GAMEEVENT_ROUND_STARTED   2
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_ROUND_STALEMATE 110
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GAME_CLASS      6
#define CONST_GameplayEventsWriterBase_GAMEEVENT_RENDERTHREAD_POLL 40
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GAME_OPTION_URL 7
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GAME_MAPNAME    8
#define CONST_GameplayEventsWriterBase_GAMEEVENT_NETWORKUSAGEOUT_POLL 38
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GAMETHREAD_POLL 41
#define CONST_GameplayEventsWriterBase_GAMEEVENT_FRAMETIME_POLL  43
#define CONST_GameplayEventsWriterBase_GAMEEVENT_TEAM_CREATED    50
#define CONST_GameplayEventsWriterBase_GAMEEVENT_TEAM_GAME_SCORE 51
#define CONST_GameplayEventsWriterBase_GAMEEVENT_TEAM_MATCH_WON  4
#define CONST_GameplayEventsWriterBase_GAMEEVENT_TEAM_ROUND_WON  5
#define CONST_GameplayEventsWriterBase_GAMEEVENT_TEAM_ROUND_STALEMATE 52
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_LOGIN    100
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_LOGOUT   101
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_MATCH_WON 103
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_KILL     104
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_LOCATION_POLL 105
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_TEAMCHANGE 106
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_KILL_STREAK 107
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_DEATH    108
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_ROUND_WON 109
#define CONST_GameplayEventsWriterBase_GAMEEVENT_WEAPON_DAMAGE   150
#define CONST_GameplayEventsWriterBase_GAMEEVENT_WEAPON_DAMAGE_MELEE 151
#define CONST_GameplayEventsWriterBase_GAMEEVENT_WEAPON_FIRED    152
#define CONST_GameplayEventsWriterBase_GAMEEVENT_PLAYER_KILL_NORMAL 200
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GENERIC_PARAM_LIST_START 300
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GENERIC_PARAM_LIST_END 400
#define CONST_GameplayEventsWriterBase_GAMEEVENT_GAME_SPECIFIC   1000
#define CONST_GameplayEventsWriterBase_GAMEEVENT_MAX_EVENTID     0x0000FFFF
#define CONST_SCENEFILTER_None                                   0x00000000
#define CONST_SCENEFILTER_IncludeTransient                       0x00000001
#define CONST_SCENEFILTER_InputProcessorOnly                     0x00000002
#define CONST_SCENEFILTER_PausersOnly                            0x00000004
#define CONST_SCENEFILTER_PrimitiveUsersOnly                     0x00000008
#define CONST_SCENEFILTER_UsesPostProcessing                     0x00000010
#define CONST_SCENEFILTER_ReceivesFocus                          0x00000020
#define CONST_SCENEFILTER_Any                                    0xFFFFFFFF
#define CONST_MAX_DEBUG_DISPLAY_PROPERTY_STRINGS                 5
#define CONST_LINECHECK_GRANULARITY                              768.f
#define CONST_NUM_PATHFINDING_PARAMS                             9
#define CONST_NumBreadCrumbs                                     10
#define CONST_MAX_AIGROUP_NUMBER                                 10
#define CONST_PROCBUILDING_VERSION                               1
#define CONST_ROOF_MINZ                                          0.7
#define CONST_REMOTE_USER_SIZE                                   10

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.Actor.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};


// Enum Engine.Actor.EMoveDir
enum class EMoveDir : uint8_t
{
	MD_Stationary                  = 0,
	MD_Forward                     = 1,
	MD_Backward                    = 2,
	MD_Left                        = 3,
	MD_Right                       = 4,
	MD_Up                          = 5,
	MD_Down                        = 6,
	MD_MAX                         = 7
};


// Enum Engine.Actor.EPhysics
enum class EPhysics : uint8_t
{
	PHYS_None                      = 0,
	PHYS_Walking                   = 1,
	PHYS_Falling                   = 2,
	PHYS_Swimming                  = 3,
	PHYS_Flying                    = 4,
	PHYS_Rotating                  = 5,
	PHYS_Projectile                = 6,
	PHYS_Interpolating             = 7,
	PHYS_Spider                    = 8,
	PHYS_Ladder                    = 9,
	PHYS_RigidBody                 = 10,
	PHYS_SoftBody                  = 11,
	PHYS_NavMeshWalking            = 12,
	PHYS_Suspended                 = 13,
	PHYS_Custom                    = 14,
	PHYS_Tweening                  = 15,
	PHYS_Charging                  = 16,
	PHYS_Blinking                  = 17,
	PHYS_MAX                       = 18
};


// Enum Engine.Actor.ECollisionType
enum class ECollisionType : uint8_t
{
	COLLIDE_CustomDefault          = 0,
	COLLIDE_NoCollision            = 1,
	COLLIDE_BlockAll               = 2,
	COLLIDE_BlockWeapons           = 3,
	COLLIDE_TouchAll               = 4,
	COLLIDE_TouchWeapons           = 5,
	COLLIDE_BlockAllButWeapons     = 6,
	COLLIDE_TouchAllButWeapons     = 7,
	COLLIDE_BlockWeaponsKickable   = 8,
	COLLIDE_MAX                    = 9
};


// Enum Engine.Actor.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.Actor.EDoubleClickDir
enum class EDoubleClickDir : uint8_t
{
	DCLICK_None                    = 0,
	DCLICK_Left                    = 1,
	DCLICK_Right                   = 2,
	DCLICK_Forward                 = 3,
	DCLICK_Back                    = 4,
	DCLICK_Active                  = 5,
	DCLICK_Done                    = 6,
	DCLICK_MAX                     = 7
};


// Enum Engine.Actor.EApplyEffectResult
enum class EApplyEffectResult : uint8_t
{
	APPLYEFFECT_OK                 = 0,
	APPLYEFFECT_IMMUNE             = 1,
	APPLYEFFECT_FAIL               = 2,
	APPLYEFFECT_MAX                = 3
};


// Enum Engine.Actor.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.ELoginStatus
enum class ELoginStatus : uint8_t
{
	LS_NotLoggedIn                 = 0,
	LS_UsingLocalProfile           = 1,
	LS_LoggedIn                    = 2,
	LS_MAX                         = 3
};


// Enum Engine.OnlineSubsystem.ESessionMemberStatus
enum class ESessionMemberStatus : uint8_t
{
	DSMS_Reserved                  = 0,
	DSMS_Inactive                  = 1,
	DSMS_Ready                     = 2,
	DSMS_Active                    = 3,
	DSMS_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.EOnlineNewsType
enum class EOnlineNewsType : uint8_t
{
	ONT_Unknown                    = 0,
	ONT_GameNews                   = 1,
	ONT_ContentAnnouncements       = 2,
	ONT_Misc                       = 3,
	ONT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.ENATType
enum class ENATType : uint8_t
{
	NAT_Unknown                    = 0,
	NAT_Open                       = 1,
	NAT_Moderate                   = 2,
	NAT_Strict                     = 3,
	NAT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EOnlineServerConnectionStatus
enum class EOnlineServerConnectionStatus : uint8_t
{
	OSCS_NotConnected              = 0,
	OSCS_Connected                 = 1,
	OSCS_ConnectionDropped         = 2,
	OSCS_NoNetworkConnection       = 3,
	OSCS_ServiceUnavailable        = 4,
	OSCS_UpdateRequired            = 5,
	OSCS_ServersTooBusy            = 6,
	OSCS_DuplicateLoginDetected    = 7,
	OSCS_InvalidUser               = 8,
	OSCS_Banned                    = 9,
	OSCS_TooYoung                  = 10,
	OSCS_PSNUnavailable            = 11,
	OSCS_MAX                       = 12
};


// Enum Engine.OnlineSubsystem.EInventoryItemState
enum class EInventoryItemState : uint8_t
{
	IIS_Unknown                    = 0,
	IIS_All                        = 1,
	IIS_Enabled                    = 2,
	IIS_Suspended                  = 3,
	IIS_Expired                    = 4,
	IIS_Canceled                   = 5,
	IIS_MAX                        = 6
};


// Enum Engine.OnlineSubsystem.EMediaItemType
enum class EMediaItemType : uint8_t
{
	MIT_Unknown                    = 0,
	MIT_Game                       = 1,
	MIT_Application                = 2,
	MIT_GameContent                = 3,
	MIT_GameConsumable             = 4,
	MIT_Subscription               = 5,
	MIT_MAX                        = 6
};


// Enum Engine.OnlineSubsystem.EOnlineEnumerationReadState
enum class EOnlineEnumerationReadState : uint8_t
{
	OERS_NotStarted                = 0,
	OERS_InProgress                = 1,
	OERS_Done                      = 2,
	OERS_Failed                    = 3,
	OERS_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.EOnlineGameState
enum class EOnlineGameState : uint8_t
{
	OGS_NoSession                  = 0,
	OGS_Pending                    = 1,
	OGS_Starting                   = 2,
	OGS_InProgress                 = 3,
	OGS_Ending                     = 4,
	OGS_Ended                      = 5,
	OGS_MAX                        = 6
};


// Enum Engine.OnlineSubsystem.ECatalogSortOrder
enum class ECatalogSortOrder : uint8_t
{
	CSO_FreeAndPaidCountDaily      = 0,
	CSO_PaidCountAllTime           = 1,
	CSO_PaidCountDail              = 2,
	CSO_DigitalReleaseDate         = 3,
	CSO_ReleaseDate                = 4,
	CSO_UserRatings                = 5,
	CSO_MAX                        = 6
};


// Enum Engine.OnlineSubsystem.EAchievementUnlockType
enum class EAchievementUnlockType : uint8_t
{
	AUT_Unknown                    = 0,
	AUT_All                        = 1,
	AUT_Persistent                 = 2,
	AUT_Challenge                  = 3,
	AUT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EAchievementMediaAssetType
enum class EAchievementMediaAssetType : uint8_t
{
	AMAT_Unknown                   = 0,
	AMAT_Icon                      = 1,
	AMAT_Art                       = 2,
	AMAT_MAX                       = 3
};


// Enum Engine.OnlineSubsystem.EAchievementParticipationType
enum class EAchievementParticipationType : uint8_t
{
	EAPT_Unknown                   = 0,
	EAPT_Individual                = 1,
	EAPT_Group                     = 2,
	EAPT_MAX                       = 3
};


// Enum Engine.OnlineSubsystem.EAchievementProgressState
enum class EAchievementProgressState : uint8_t
{
	APS_Unknown                    = 0,
	APS_Achieved                   = 1,
	APS_NotStarted                 = 2,
	APS_InProgress                 = 3,
	APS_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EAchievementRewardType
enum class EAchievementRewardType : uint8_t
{
	ART_Unknown                    = 0,
	ART_Gamerscore                 = 1,
	ART_InApp                      = 2,
	ART_Art                        = 3,
	ART_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EOnlineFileType
enum class EOnlineFileType : uint8_t
{
	OFT_Unknown                    = 0,
	OFT_Binary                     = 1,
	OFT_Json                       = 2,
	OFT_MAX                        = 3
};


// Enum Engine.OnlineSubsystem.EOnlineAccountCreateStatus
enum class EOnlineAccountCreateStatus : uint8_t
{
	OACS_CreateSuccessful          = 0,
	OACS_UnknownError              = 1,
	OACS_InvalidUserName           = 2,
	OACS_InvalidPassword           = 3,
	OACS_InvalidUniqueUserName     = 4,
	OACS_UniqueUserNameInUse       = 5,
	OACS_ServiceUnavailable        = 6,
	OACS_MAX                       = 7
};


// Enum Engine.OnlineSubsystem.ELanBeaconState
enum class ELanBeaconState : uint8_t
{
	LANB_NotUsingLanBeacon         = 0,
	LANB_Hosting                   = 1,
	LANB_Searching                 = 2,
	LANB_MAX                       = 3
};


// Enum Engine.OnlineSubsystem.EOnlineContentType
enum class EOnlineContentType : uint8_t
{
	OCT_Downloaded                 = 0,
	OCT_SaveGame                   = 1,
	OCT_MAX                        = 2
};


// Enum Engine.OnlineSubsystem.EOnlineCreateGameSessionFlag
enum class EOnlineCreateGameSessionFlag : uint8_t
{
	OCGSF_New                      = 0,
	OCGSF_ReSubmit                 = 1,
	OCGSF_MAX                      = 2
};


// Enum Engine.OnlineSubsystem.EOnlineFriendState
enum class EOnlineFriendState : uint8_t
{
	OFS_Offline                    = 0,
	OFS_Online                     = 1,
	OFS_Away                       = 2,
	OFS_Busy                       = 3,
	OFS_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.EOnlineAccountTier
enum class EOnlineAccountTier : uint8_t
{
	OAT_Unknown                    = 0,
	OAT_NewUser                    = 1,
	OAT_Silver                     = 2,
	OAT_Gold                       = 3,
	OAT_FamilyGold                 = 4,
	OAT_MAX                        = 5
};


// Enum Engine.OnlineSubsystem.ENetworkNotificationPosition
enum class ENetworkNotificationPosition : uint8_t
{
	NNP_TopLeft                    = 0,
	NNP_TopCenter                  = 1,
	NNP_TopRight                   = 2,
	NNP_CenterLeft                 = 3,
	NNP_Center                     = 4,
	NNP_CenterRight                = 5,
	NNP_BottomLeft                 = 6,
	NNP_BottomCenter               = 7,
	NNP_BottomRight                = 8,
	NNP_MAX                        = 9
};


// Enum Engine.OnlineSubsystem.EReputationFeedbackType
enum class EReputationFeedbackType : uint8_t
{
	RFBT_CommunicationsAbusiveVoice = 0,
	RFBT_CommunicationsInappropriateVideo = 1,
	RFBT_FairPlayCheater           = 2,
	RFBT_FairPlayKicked            = 3,
	RFBT_FairPlayKillsTeammates    = 4,
	RFBT_FairPlayQuitter           = 5,
	RFBT_FairPlayTampering         = 6,
	RFBT_InappropriateUserGeneratedContent = 7,
	RFBT_PositiveHelpfulPlayer     = 8,
	RFBT_PositiveHighQualityUserGeneratedContent = 9,
	RFBT_PositiveSkilledPlayer     = 10,
	RFBT_MAX                       = 11
};


// Enum Engine.OnlineSubsystem.EFeaturePrivilegeLevel
enum class EFeaturePrivilegeLevel : uint8_t
{
	FPL_Disabled                   = 0,
	FPL_EnabledFriendsOnly         = 1,
	FPL_Enabled                    = 2,
	FPL_MAX                        = 3
};


// Enum Engine.OnlineSubsystem.EFeaturePrivilege
enum class EFeaturePrivilege : uint8_t
{
	FP_OnlinePlay                  = 0,
	FP_CommunicationText           = 1,
	FP_CommunicationVideo          = 2,
	FP_CommunicationVoice          = 3,
	FP_ShareUserCreatedContent     = 4,
	FP_PurchaseContent             = 5,
	FP_ViewPlayerProfile           = 6,
	FP_ShowPresenceInformation     = 7,
	FP_RecordDVRClips              = 8,
	FP_CloudStorage                = 9,
	FP_PremiumContent              = 10,
	FP_PremiumVideoContent         = 11,
	FP_BrowseInternet              = 12,
	FP_SocialNetworkSharing        = 13,
	FP_KinectSharing               = 14,
	FP_FitnessUpload               = 15,
	FP_MAX                         = 16
};


// Enum Engine.OnlineAuthInterface.EAuthStatus
enum class EAuthStatus : uint8_t
{
	AUS_NotStarted                 = 0,
	AUS_Pending                    = 1,
	AUS_Authenticated              = 2,
	AUS_Failed                     = 3,
	AUS_MAX                        = 4
};


// Enum Engine.PrimitiveComponent.GJKResult
enum class EGJKResult : uint8_t
{
	GJK_Intersect                  = 0,
	GJK_NoIntersection             = 1,
	GJK_Fail                       = 2,
	GJK_MAX                        = 3
};


// Enum Engine.Scene.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.Scene.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_UnrealEdBackground        = 0,
	SDPG_EmissiveSkybox            = 1,
	SDPG_World                     = 2,
	SDPG_Middleground              = 3,
	SDPG_Foreground                = 4,
	SDPG_UnrealEdForeground        = 5,
	SDPG_PostProcess               = 6,
	SDPG_MAX                       = 7
};


// Enum Engine.PrimitiveComponent.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.PrimitiveComponent.ERBCollisionChannel
enum class ERBCollisionChannel : uint8_t
{
	RBCC_Default                   = 0,
	RBCC_Nothing                   = 1,
	RBCC_Pawn                      = 2,
	RBCC_Vehicle                   = 3,
	RBCC_Water                     = 4,
	RBCC_GameplayPhysics           = 5,
	RBCC_EffectPhysics             = 6,
	RBCC_Untitled1                 = 7,
	RBCC_Untitled2                 = 8,
	RBCC_Untitled3                 = 9,
	RBCC_Untitled4                 = 10,
	RBCC_Cloth                     = 11,
	RBCC_FluidDrain                = 12,
	RBCC_SoftBody                  = 13,
	RBCC_FracturedMeshPart         = 14,
	RBCC_BlockingVolume            = 15,
	RBCC_DeadPawn                  = 16,
	RBCC_Clothing                  = 17,
	RBCC_ClothingCollision         = 18,
	RBCC_MAX                       = 19
};


// Enum Engine.PrimitiveComponent.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_ValueName                 = 8,
	PSPT_MAX                       = 9
};


// Enum Engine.Controller.EStunType
enum class EStunType : uint8_t
{
	STUN_TYPE_NONE                 = 0,
	STUN_TYPE_PREMATCH             = 1,
	STUN_TYPE_NOPOSTURE            = 2,
	STUN_TYPE_MOUNT                = 3,
	STUN_TYPE_STASIS               = 4,
	STUN_TYPE_DISORIENT            = 5,
	STUN_TYPE_NORMAL               = 6,
	STUN_TYPE_TAUNT                = 7,
	STUN_TYPE_MESMERIZED           = 8,
	STUN_TYPE_FEARED               = 9,
	STUN_TYPE_PANICKED             = 10,
	STUN_TYPE_MAX                  = 11
};


// Enum Engine.Camera.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.DOFEffect.EFocusType
enum class EFocusType : uint8_t
{
	FOCUS_Distance                 = 0,
	FOCUS_Position                 = 1,
	FOCUS_MAX                      = 2
};


// Enum Engine.Camera.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CAPS_CameraLocal               = 0,
	CAPS_World                     = 1,
	CAPS_UserDefined               = 2,
	CAPS_MAX                       = 3
};


// Enum Engine.SeqAct_ControlMovieTexture.EMovieControlType
enum class EMovieControlType : uint8_t
{
	MCT_Play                       = 0,
	MCT_Stop                       = 1,
	MCT_Pause                      = 2,
	MCT_MAX                        = 3
};


// Enum Engine.Settings.EPropertyValueMappingType
enum class EPropertyValueMappingType : uint8_t
{
	PVMT_RawValue                  = 0,
	PVMT_PredefinedValues          = 1,
	PVMT_Ranged                    = 2,
	PVMT_IdMapped                  = 3,
	PVMT_MAX                       = 4
};


// Enum Engine.Settings.ESettingsDataType
enum class ESettingsDataType : uint8_t
{
	SDT_Empty                      = 0,
	SDT_Int32                      = 1,
	SDT_Int64                      = 2,
	SDT_Double                     = 3,
	SDT_String                     = 4,
	SDT_Float                      = 5,
	SDT_Blob                       = 6,
	SDT_DateTime                   = 7,
	SDT_UInt32                     = 8,
	SDT_UInt64                     = 9,
	SDT_MAX                        = 10
};


// Enum Engine.Settings.EOnlineDataAdvertisementType
enum class EOnlineDataAdvertisementType : uint8_t
{
	ODAT_DontAdvertise             = 0,
	ODAT_OnlineService             = 1,
	ODAT_QoS                       = 2,
	ODAT_OnlineServiceAndQoS       = 3,
	ODAT_MAX                       = 4
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchComparisonType
enum class EOnlineGameSearchComparisonType : uint8_t
{
	OGSCT_Equals                   = 0,
	OGSCT_NotEquals                = 1,
	OGSCT_GreaterThan              = 2,
	OGSCT_GreaterThanEquals        = 3,
	OGSCT_LessThan                 = 4,
	OGSCT_LessThanEquals           = 5,
	OGSCT_MAX                      = 6
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchEntryType
enum class EOnlineGameSearchEntryType : uint8_t
{
	OGSET_Property                 = 0,
	OGSET_LocalizedSetting         = 1,
	OGSET_ObjectProperty           = 2,
	OGSET_MAX                      = 3
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchSortType
enum class EOnlineGameSearchSortType : uint8_t
{
	OGSSO_Ascending                = 0,
	OGSSO_Descending               = 1,
	OGSSO_MAX                      = 2
};


// Enum Engine.PlayerController.EProgressMessageType
enum class EProgressMessageType : uint8_t
{
	PMT_Clear                      = 0,
	PMT_Information                = 1,
	PMT_AdminMessage               = 2,
	PMT_DownloadProgress           = 3,
	PMT_ConnectionFailure          = 4,
	PMT_PeerConnectionFailure      = 5,
	PMT_PeerHostMigrationFailure   = 6,
	PMT_SocketFailure              = 7,
	PMT_MAX                        = 8
};


// Enum Engine.ParticleSystem.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystem.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.ParticleSystem.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.SkeletalMeshComponent.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3
};


// Enum Engine.SkeletalMeshComponent.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.SkeletalMeshComponent.EFaceFXRegOp
enum class EFaceFXRegOp : uint8_t
{
	FXRO_Add                       = 0,
	FXRO_Multiply                  = 1,
	FXRO_Replace                   = 2,
	FXRO_MAX                       = 3
};


// Enum Engine.SkeletalMeshComponent.EFaceFXBlendMode
enum class EFaceFXBlendMode : uint8_t
{
	FXBM_Overwrite                 = 0,
	FXBM_Additive                  = 1,
	FXBM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.EInstanceWeightUsage
enum class EInstanceWeightUsage : uint8_t
{
	IWU_PartialSwap                = 0,
	IWU_FullSwap                   = 1,
	IWU_MAX                        = 2
};


// Enum Engine.SkeletalMeshComponent.EAnimRotationOnly
enum class EAnimRotationOnly : uint8_t
{
	EARO_AnimSet                   = 0,
	EARO_ForceEnabled              = 1,
	EARO_ForceDisabled             = 2,
	EARO_MAX                       = 3
};


// Enum Engine.SkeletalMeshComponent.ERootMotionRotationMode
enum class ERootMotionRotationMode : uint8_t
{
	RMRM_Ignore                    = 0,
	RMRM_RotateActor               = 1,
	RMRM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	RMM_Translate                  = 0,
	RMM_Velocity                   = 1,
	RMM_Ignore                     = 2,
	RMM_Accel                      = 3,
	RMM_Relative                   = 4,
	RMM_MAX                        = 5
};


// Enum Engine.SkeletalMeshComponent.EMaxDistanceScaleMode
enum class EMaxDistanceScaleMode : uint8_t
{
	MDSM_Multiply                  = 0,
	MDSM_Substract                 = 1,
	MDSM_MAX                       = 2
};


// Enum Engine.PlayerController.EInputMatchAction
enum class EInputMatchAction : uint8_t
{
	IMA_GreaterThan                = 0,
	IMA_LessThan                   = 1,
	IMA_MAX                        = 2
};


// Enum Engine.PlayerController.EInputTypes
enum class EInputTypes : uint8_t
{
	IT_XAxis                       = 0,
	IT_YAxis                       = 1,
	IT_MAX                         = 2
};


// Enum Engine.Pylon.ENavMeshEdgeType
enum class ENavMeshEdgeType : uint8_t
{
	NAVEDGE_Normal                 = 0,
	NAVEDGE_Mantle                 = 1,
	NAVEDGE_Coverslip              = 2,
	NAVEDGE_SwatTurn               = 3,
	NAVEDGE_DropDown               = 4,
	NAVEDGE_PathObject             = 5,
	NAVEDGE_BackRefDummy           = 6,
	NAVEDGE_Jump                   = 7,
	NAVEDGE_MAX                    = 8
};


// Enum Engine.AmbientOcclusionEffect.EAmbientOcclusionQuality
enum class EAmbientOcclusionQuality : uint8_t
{
	AO_High                        = 0,
	AO_Medium                      = 1,
	AO_Low                         = 2,
	AO_MAX                         = 3
};


// Enum Engine.Brush.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_MAX                        = 5
};


// Enum Engine.ReverbVolume.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EngineTypes.EPathFindingError
enum class EPathFindingError : uint8_t
{
	PATHERROR_STARTPOLYNOTFOUND    = 0,
	PATHERROR_GOALPOLYNOTFOUND     = 1,
	PATHERROR_ANCHORPYLONNOTFOUND  = 2,
	PATHERROR_NOPATHFOUND          = 3,
	PATHERROR_COMPUTEVALIDFINALDEST_FAIL = 4,
	PATHERROR_GETNEXTMOVELOCATION_FAIL = 5,
	PATHERROR_MOVETIMEOUT          = 6,
	PATHERROR_MAX                  = 7
};


// Enum Engine.AudioDevice.EDebugState
enum class EDebugState : uint8_t
{
	DEBUGSTATE_None                = 0,
	DEBUGSTATE_IsolateDryAudio     = 1,
	DEBUGSTATE_IsolateReverb       = 2,
	DEBUGSTATE_TestLPF             = 3,
	DEBUGSTATE_TestStereoBleed     = 4,
	DEBUGSTATE_TestLFEBleed        = 5,
	DEBUGSTATE_DisableLPF          = 6,
	DEBUGSTATE_DisableRadio        = 7,
	DEBUGSTATE_MAX                 = 8
};


// Enum Engine.AudioDevice.ESoundClassName
enum class ESoundClassName : uint8_t
{
	ESoundClassName_MAX            = 0
};


// Enum Engine.AudioDevice.ETTSSpeaker
enum class ETTSSpeaker : uint8_t
{
	TTSSPEAKER_Paul                = 0,
	TTSSPEAKER_Harry               = 1,
	TTSSPEAKER_Frank               = 2,
	TTSSPEAKER_Dennis              = 3,
	TTSSPEAKER_Kit                 = 4,
	TTSSPEAKER_Betty               = 5,
	TTSSPEAKER_Ursula              = 6,
	TTSSPEAKER_Rita                = 7,
	TTSSPEAKER_Wendy               = 8,
	TTSSPEAKER_MAX                 = 9
};


// Enum Engine.SoundNodeAttenuation.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.SoundNodeAttenuation.SoundDistanceModel
enum class ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_MAX                = 5
};


// Enum Engine.PlatformInterfaceBase.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.AnimSequence.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.AnimSequence.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.AnimNode.ESliderType
enum class ESliderType : uint8_t
{
	ST_1D                          = 0,
	ST_2D                          = 1,
	ST_MAX                         = 2
};


// Enum Engine.AnimNode_MultiBlendPerBone.EWeightCheck
enum class EWeightCheck : uint8_t
{
	EWC_AnimNodeSlotNotPlaying     = 0,
	EWC_MAX                        = 1
};


// Enum Engine.AnimNode_MultiBlendPerBone.EBlendType
enum class EBlendType : uint8_t
{
	EBT_ParentBoneSpace            = 0,
	EBT_MeshSpace                  = 1,
	EBT_MAX                        = 2
};


// Enum Engine.AnimNodeAimOffset.EAnimAimDir
enum class EAnimAimDir : uint8_t
{
	ANIMAIM_LEFTUP                 = 0,
	ANIMAIM_CENTERUP               = 1,
	ANIMAIM_RIGHTUP                = 2,
	ANIMAIM_LEFTCENTER             = 3,
	ANIMAIM_CENTERCENTER           = 4,
	ANIMAIM_RIGHTCENTER            = 5,
	ANIMAIM_LEFTDOWN               = 6,
	ANIMAIM_CENTERDOWN             = 7,
	ANIMAIM_RIGHTDOWN              = 8,
	ANIMAIM_MAX                    = 9
};


// Enum Engine.AnimNodeAimOffset.EAimID
enum class EAimID : uint8_t
{
	EAID_LeftUp                    = 0,
	EAID_LeftDown                  = 1,
	EAID_RightUp                   = 2,
	EAID_RightDown                 = 3,
	EAID_ZeroUp                    = 4,
	EAID_ZeroDown                  = 5,
	EAID_ZeroLeft                  = 6,
	EAID_ZeroRight                 = 7,
	EAID_CellLU                    = 8,
	EAID_CellCU                    = 9,
	EAID_CellRU                    = 10,
	EAID_CellLC                    = 11,
	EAID_CellCC                    = 12,
	EAID_CellRC                    = 13,
	EAID_CellLD                    = 14,
	EAID_CellCD                    = 15,
	EAID_CellRD                    = 16,
	EAID_MAX                       = 17
};


// Enum Engine.AnimNodeBlendByBase.EBaseBlendType
enum class EBaseBlendType : uint8_t
{
	BBT_ByActorTag                 = 0,
	BBT_ByActorClass               = 1,
	BBT_MAX                        = 2
};


// Enum Engine.AnimNodeSequence.ERootRotationOption
enum class ERootRotationOption : uint8_t
{
	RRO_Default                    = 0,
	RRO_Discard                    = 1,
	RRO_Extract                    = 2,
	RRO_MAX                        = 3
};


// Enum Engine.AnimNodeSequence.ERootBoneAxis
enum class ERootBoneAxis : uint8_t
{
	RBA_Default                    = 0,
	RBA_Discard                    = 1,
	RBA_Translate                  = 2,
	RBA_MAX                        = 3
};


// Enum Engine.Pawn.EFootstepTypes
enum class EFootstepTypes : uint8_t
{
	FOOTSTEP_Run                   = 0,
	FOOTSTEP_Walk                  = 1,
	FOOTSTEP_Scuff                 = 2,
	FOOTSTEP_MAX                   = 3
};


// Enum Engine.Pawn.EPathSearchType
enum class EPathSearchType : uint8_t
{
	PST_Default                    = 0,
	PST_Breadth                    = 1,
	PST_NewBestPathTo              = 2,
	PST_Constraint                 = 3,
	PST_MAX                        = 4
};


// Enum Engine.EngineTypes.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_ModulateAndAdd           = 5,
	BLEND_SoftMasked               = 6,
	BLEND_AlphaComposite           = 7,
	BLEND_DitheredTranslucent      = 8,
	BLEND_MAX                      = 9
};


// Enum Engine.EngineTypes.EMaterialLightingModel
enum class EMaterialLightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_SHPRT                      = 3,
	MLM_Custom                     = 4,
	MLM_Anisotropic                = 5,
	MLM_MAX                        = 6
};


// Enum Engine.EngineTypes.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EngineTypes.EMobileValueSource
enum class EMobileValueSource : uint8_t
{
	MVS_Constant                   = 0,
	MVS_VertexColorRed             = 1,
	MVS_VertexColorGreen           = 2,
	MVS_VertexColorBlue            = 3,
	MVS_VertexColorAlpha           = 4,
	MVS_BaseTextureRed             = 5,
	MVS_BaseTextureGreen           = 6,
	MVS_BaseTextureBlue            = 7,
	MVS_BaseTextureAlpha           = 8,
	MVS_MaskTextureRed             = 9,
	MVS_MaskTextureGreen           = 10,
	MVS_MaskTextureBlue            = 11,
	MVS_MaskTextureAlpha           = 12,
	MVS_NormalTextureAlpha         = 13,
	MVS_EmissiveTextureRed         = 14,
	MVS_EmissiveTextureGreen       = 15,
	MVS_EmissiveTextureBlue        = 16,
	MVS_EmissiveTextureAlpha       = 17,
	MVS_MAX                        = 18
};


// Enum Engine.EngineTypes.EMobileTextureBlendFactorSource
enum class EMobileTextureBlendFactorSource : uint8_t
{
	MTBFS_VertexColor              = 0,
	MTBFS_MaskTexture              = 1,
	MTBFS_MAX                      = 2
};


// Enum Engine.EngineTypes.EMobileTexCoordsSource
enum class EMobileTexCoordsSource : uint8_t
{
	MTCS_TexCoords0                = 0,
	MTCS_TexCoords1                = 1,
	MTCS_TexCoords2                = 2,
	MTCS_TexCoords3                = 3,
	MTCS_MAX                       = 4
};


// Enum Engine.EngineTypes.EMobileAlphaValueSource
enum class EMobileAlphaValueSource : uint8_t
{
	MAVS_DiffuseTextureAlpha       = 0,
	MAVS_MaskTextureRed            = 1,
	MAVS_MaskTextureGreen          = 2,
	MAVS_MaskTextureBlue           = 3,
	MAVS_MAX                       = 4
};


// Enum Engine.EngineTypes.EMobileColorMultiplySource
enum class EMobileColorMultiplySource : uint8_t
{
	MCMS_None                      = 0,
	MCMS_BaseTextureRed            = 1,
	MCMS_BaseTextureGreen          = 2,
	MCMS_BaseTextureBlue           = 3,
	MCMS_BaseTextureAlpha          = 4,
	MCMS_MaskTextureRed            = 5,
	MCMS_MaskTextureGreen          = 6,
	MCMS_MaskTextureBlue           = 7,
	MCMS_MaskTextureAlpha          = 8,
	MCMS_MAX                       = 9
};


// Enum Engine.EngineTypes.EMobileEmissiveColorSource
enum class EMobileEmissiveColorSource : uint8_t
{
	MECS_EmissiveTexture           = 0,
	MECS_BaseTexture               = 1,
	MECS_Constant                  = 2,
	MECS_MAX                       = 3
};


// Enum Engine.EngineTypes.EMobileEnvironmentBlendMode
enum class EMobileEnvironmentBlendMode : uint8_t
{
	MEBM_Add                       = 0,
	MEBM_Lerp                      = 1,
	MEBM_MAX                       = 2
};


// Enum Engine.EngineTypes.EMobileSpecularMask
enum class EMobileSpecularMask : uint8_t
{
	MSM_Constant                   = 0,
	MSM_Luminance                  = 1,
	MSM_DiffuseRed                 = 2,
	MSM_DiffuseGreen               = 3,
	MSM_DiffuseBlue                = 4,
	MSM_DiffuseAlpha               = 5,
	MSM_MaskTextureRGB             = 6,
	MSM_MaskTextureRed             = 7,
	MSM_MaskTextureGreen           = 8,
	MSM_MaskTextureBlue            = 9,
	MSM_MaskTextureAlpha           = 10,
	MSM_MAX                        = 11
};


// Enum Engine.EngineTypes.EMobileAmbientOcclusionSource
enum class EMobileAmbientOcclusionSource : uint8_t
{
	MAOS_Disabled                  = 0,
	MAOS_VertexColorRed            = 1,
	MAOS_VertexColorGreen          = 2,
	MAOS_VertexColorBlue           = 3,
	MAOS_VertexColorAlpha          = 4,
	MAOS_MAX                       = 5
};


// Enum Engine.EngineTypes.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_NoGlobalIllumination   = 4,
	Quality_MAX                    = 5
};


// Enum Engine.DynamicLightEnvironmentComponent.EDynamicLightEnvironmentBoundsMethod
enum class EDynamicLightEnvironmentBoundsMethod : uint8_t
{
	DLEB_OwnerComponents           = 0,
	DLEB_ManualOverride            = 1,
	DLEB_ActiveComponents          = 2,
	DLEB_MAX                       = 3
};


// Enum Engine.ApexDestructibleAsset.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};


// Enum Engine.ApexDestructibleDamageParameters.EDamageParameterOverrideMode
enum class EDamageParameterOverrideMode : uint8_t
{
	DPOM_Absolute                  = 0,
	DPOM_Multiplier                = 1,
	DPOM_MAX                       = 2
};


// Enum Engine.CameraShake.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.Canvas.EDisplayPlane
enum class EDisplayPlane : uint8_t
{
	DISPLAYPLANE_RENDER            = 0,
	DISPLAYPLANE_HUD               = 1,
	DISPLAYPLANE_INTERMEDIATE_HUD  = 2,
	DISPLAYPLANE_MAX               = 3
};


// Enum Engine.Canvas.ECanvasBlendMode
enum class ECanvasBlendMode : uint8_t
{
	BLEND_CANVAS_Opaque            = 0,
	BLEND_CANVAS_Masked            = 1,
	BLEND_CANVAS_Translucent       = 2,
	BLEND_CANVAS_Additive          = 3,
	BLEND_CANVAS_Modulate          = 4,
	BLEND_CANVAS_ModulateAndAdd    = 5,
	BLEND_CANVAS_SoftMasked        = 6,
	BLEND_CANVAS_AlphaComposite    = 7,
	BLEND_CANVAS_DitheredTranslucent = 8,
	BLEND_CANVAS_AlphaOnly         = 9,
	BLEND_CANVAS_MAX               = 10
};


// Enum Engine.Texture.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_OneBitAlpha                 = 6,
	TC_NormalmapUncompressed       = 7,
	TC_NormalmapBC5                = 8,
	TC_OneBitMonochrome            = 9,
	TC_SimpleLightmapModification  = 10,
	TC_VectorDisplacementmap       = 11,
	TC_MAX                         = 12
};


// Enum Engine.Texture.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_A8R8G8B8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_FilteredShadowDepth         = 13,
	PF_R32F                        = 14,
	PF_G16R16                      = 15,
	PF_G16R16F                     = 16,
	PF_G16R16F_FILTER              = 17,
	PF_G32R32F                     = 18,
	PF_A2B10G10R10                 = 19,
	PF_A16B16G16R16                = 20,
	PF_D24                         = 21,
	PF_R16F                        = 22,
	PF_R16F_FILTER                 = 23,
	PF_BC5                         = 24,
	PF_V8U8                        = 25,
	PF_A1                          = 26,
	PF_FloatR11G11B10              = 27,
	PF_A4R4G4B4                    = 28,
	PF_G8R8                        = 29,
	PF_B8G8R8A8                    = 30,
	EPixelFormat_MAX               = 31
};


// Enum Engine.Texture.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Linear                      = 1,
	TF_ForceBilinear               = 2,
	TF_ForceTrilinear              = 3,
	TF_ForceAnisotropicPoint       = 4,
	TF_ForceAnisotropicLinear      = 5,
	TF_MAX                         = 6
};


// Enum Engine.Texture.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.Texture.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh             = 27,
	TEXTUREGROUP_NPC               = 28,
	TEXTUREGROUP_NPCNormalMap      = 29,
	TEXTUREGROUP_NPCSpecular       = 30,
	TEXTUREGROUP_WorldDetail       = 31,
	TEXTUREGROUP_TitleScreenPreview = 32,
	TEXTUREGROUP_UIStreamable      = 33,
	TEXTUREGROUP_MAX               = 34
};


// Enum Engine.Texture.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.Texture.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.CloudSaveSystem.SaveDataVersionSupport
enum class ESaveDataVersionSupport : uint8_t
{
	SaveDataVersionSupportLessThenEqual = 0,
	SaveDataVersionSupportEqual    = 1,
	SaveDataVersionSupportAny      = 2,
	SaveDataVersionSupport_MAX     = 3
};


// Enum Engine.CloudSaveSystem.SaveSlotOperationEnum
enum class ESaveSlotOperationEnum : uint8_t
{
	SSO_SET                        = 0,
	SSO_GET                        = 1,
	SSO_DELETE                     = 2,
	SSO_MAX                        = 3
};


// Enum Engine.CloudStorageBase.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.UIRoot.EInputPlatformType
enum class EInputPlatformType : uint8_t
{
	IPT_PC                         = 0,
	IPT                            = 1,
	IPT_PS3                        = 2,
	IPT_MAX                        = 3
};


// Enum Engine.Interaction.ETouchType
enum class ETouchType : uint8_t
{
	Touch_Began                    = 0,
	Touch_Moved                    = 1,
	Touch_Stationary               = 2,
	Touch_Ended                    = 3,
	Touch_Cancelled                = 4,
	Touch_MAX                      = 5
};


// Enum Engine.CoverGroup.ECoverGroupFillAction
enum class ECoverGroupFillAction : uint8_t
{
	CGFA_Overwrite                 = 0,
	CGFA_Add                       = 1,
	CGFA_Remove                    = 2,
	CGFA_Clear                     = 3,
	CGFA_Cylinder                  = 4,
	CGFA_MAX                       = 5
};


// Enum Engine.CoverLink.ECoverLocationDescription
enum class ECoverLocationDescription : uint8_t
{
	CoverDesc_None                 = 0,
	CoverDesc_InWindow             = 1,
	CoverDesc_InDoorway            = 2,
	CoverDesc_BehindCar            = 3,
	CoverDesc_BehindTruck          = 4,
	CoverDesc_OnTruck              = 5,
	CoverDesc_BehindBarrier        = 6,
	CoverDesc_BehindColumn         = 7,
	CoverDesc_BehindCrate          = 8,
	CoverDesc_BehindWall           = 9,
	CoverDesc_BehindStatue         = 10,
	CoverDesc_BehindSandbags       = 11,
	CoverDesc_MAX                  = 12
};


// Enum Engine.CoverLink.ECoverType
enum class ECoverType : uint8_t
{
	CT_None                        = 0,
	CT_Standing                    = 1,
	CT_MidLevel                    = 2,
	CT_MAX                         = 3
};


// Enum Engine.CoverLink.ECoverAction
enum class ECoverAction : uint8_t
{
	CA_Default                     = 0,
	CA_BlindLeft                   = 1,
	CA_BlindRight                  = 2,
	CA_LeanLeft                    = 3,
	CA_LeanRight                   = 4,
	CA_PopUp                       = 5,
	CA_BlindUp                     = 6,
	CA_PeekLeft                    = 7,
	CA_PeekRight                   = 8,
	CA_PeekUp                      = 9,
	CA_MAX                         = 10
};


// Enum Engine.CoverLink.ECoverDirection
enum class ECoverDirection : uint8_t
{
	CD_Default                     = 0,
	CD_Left                        = 1,
	CD_Right                       = 2,
	CD_Up                          = 3,
	CD_MAX                         = 4
};


// Enum Engine.CoverLink.EFireLinkID
enum class EFireLinkID : uint8_t
{
	FLI_FireLink                   = 0,
	FLI_RejectedFireLink           = 1,
	FLI_MAX                        = 2
};


// Enum Engine.StaticMeshComponent.ELightmapModificationFunction
enum class ELightmapModificationFunction : uint8_t
{
	MLMF_Modulate                  = 0,
	MLMF_ModulateAlpha             = 1,
	MLMF_MAX                       = 2
};


// Enum Engine.DecalComponent.EFilterMode
enum class EFilterMode : uint8_t
{
	FM_None                        = 0,
	FM_Ignore                      = 1,
	FM_Affect                      = 2,
	FM_MAX                         = 3
};


// Enum Engine.DecalComponent.EDecalTransform
enum class EDecalTransform : uint8_t
{
	DecalTransform_OwnerAbsolute   = 0,
	DecalTransform_OwnerRelative   = 1,
	DecalTransform_SpawnRelative   = 2,
	DecalTransform_MAX             = 3
};


// Enum Engine.MaterialInterface.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_FracturedMeshes       = 1,
	MATUSAGE_ParticleSprites       = 2,
	MATUSAGE_BeamTrails            = 3,
	MATUSAGE_ParticleSubUV         = 4,
	MATUSAGE_SpeedTree             = 5,
	MATUSAGE_StaticLighting        = 6,
	MATUSAGE_GammaCorrection       = 7,
	MATUSAGE_LensFlare             = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_FluidSurface          = 10,
	MATUSAGE_Decals                = 11,
	MATUSAGE_MaterialEffect        = 12,
	MATUSAGE_MorphTargets          = 13,
	MATUSAGE_FogVolumes            = 14,
	MATUSAGE_RadialBlur            = 15,
	MATUSAGE_InstancedMeshes       = 16,
	MATUSAGE_SplineMesh            = 17,
	MATUSAGE_ScreenDoorFade        = 18,
	MATUSAGE_APEXMesh              = 19,
	MATUSAGE_Terrain               = 20,
	MATUSAGE_Landscape             = 21,
	MATUSAGE_MobileLandscape       = 22,
	MATUSAGE_MAX                   = 23
};


// Enum Engine.Material.EMaterialDepthModifier
enum class EMaterialDepthModifier : uint8_t
{
	MDM_None                       = 0,
	MDM_DrawWithDepthModifiers     = 1,
	MDM_DepthGreaterEqual          = 2,
	MDM_DepthLessEqual             = 3,
	MDM_NonConservativeDepth       = 4,
	MDM_MAX                        = 5
};


// Enum Engine.LightComponent.EShadowFilterQuality
enum class EShadowFilterQuality : uint8_t
{
	SFQ_Low                        = 0,
	SFQ_Medium                     = 1,
	SFQ_High                       = 2,
	SFQ_MAX                        = 3
};


// Enum Engine.LightComponent.EShadowProjectionTechnique
enum class EShadowProjectionTechnique : uint8_t
{
	ShadowProjTech_Default         = 0,
	ShadowProjTech_PCF             = 1,
	ShadowProjTech_VSM             = 2,
	ShadowProjTech_BPCF_Low        = 3,
	ShadowProjTech_BPCF_Medium     = 4,
	ShadowProjTech_BPCF_High       = 5,
	ShadowProjTech_MAX             = 6
};


// Enum Engine.LightComponent.ELightShadowMode
enum class ELightShadowMode : uint8_t
{
	LightShadow_Normal             = 0,
	LightShadow_Modulate           = 1,
	LightShadow_ModulateBetter     = 2,
	LightShadow_MAX                = 3
};


// Enum Engine.LightComponent.ELightAffectsClassification
enum class ELightAffectsClassification : uint8_t
{
	LAC_USER_SELECTED              = 0,
	LAC_DYNAMIC_AFFECTING          = 1,
	LAC_STATIC_AFFECTING           = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX                        = 4
};


// Enum Engine.DistributionFloatParameterBase.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.DOFAndBloomEffect.EDOFQuality
enum class EDOFQuality : uint8_t
{
	DOFQuality_Low                 = 0,
	DOFQuality_Medium              = 1,
	DOFQuality_High                = 2,
	DOFQuality_MAX                 = 3
};


// Enum Engine.DOFAndBloomEffect.EDOFType
enum class EDOFType : uint8_t
{
	DOFType_SimpleDOF              = 0,
	DOFType_ReferenceDOF           = 1,
	DOFType_BokehDOF               = 2,
	DOFType_MAX                    = 3
};


// Enum Engine.DoorMarker.EDoorType
enum class EDoorType : uint8_t
{
	DOOR_Shoot                     = 0,
	DOOR_Touch                     = 1,
	DOOR_MAX                       = 2
};


// Enum Engine.ParticleSystemComponent.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_WorldAttractorCollision   = 4,
	EPET_Kismet                    = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleSystemComponent.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_MAX                         = 6
};


// Enum Engine.FacebookIntegration.EFacebookIntegrationDelegate
enum class EFacebookIntegrationDelegate : uint8_t
{
	FID_AuthorizationComplete      = 0,
	FID_FacebookRequestComplete    = 1,
	FID_DialogComplete             = 2,
	FID_FriendsListComplete        = 3,
	FID_MAX                        = 4
};


// Enum Engine.FileWriter.FWFileType
enum class EFWFileType : uint8_t
{
	FWFT_Log                       = 0,
	FWFT_Stats                     = 1,
	FWFT_HTML                      = 2,
	FWFT_User                      = 3,
	FWFT_Debug                     = 4,
	FWFT_MAX                       = 5
};


// Enum Engine.FluidInfluenceComponent.EInfluenceType
enum class EInfluenceType : uint8_t
{
	Fluid_Flow                     = 0,
	Fluid_Raindrops                = 1,
	Fluid_Wave                     = 2,
	Fluid_Sphere                   = 3,
	Fluid_MAX                      = 4
};


// Enum Engine.FontImportOptions.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.ForceFeedbackWaveform.EWaveformFunction
enum class EWaveformFunction : uint8_t
{
	WF_Constant                    = 0,
	WF_LinearIncreasing            = 1,
	WF_LinearDecreasing            = 2,
	WF_Sin0to90                    = 3,
	WF_Sin90to180                  = 4,
	WF_Sin0to180                   = 5,
	WF_Noise                       = 6,
	WF_MAX                         = 7
};


// Enum Engine.WorldInfo.EHostMigrationProgress
enum class EHostMigrationProgress : uint8_t
{
	HostMigration_None             = 0,
	HostMigration_FindingNewHost   = 1,
	HostMigration_MigratingAsHost  = 2,
	HostMigration_MigratingAsClient = 3,
	HostMigration_ClientTravel     = 4,
	HostMigration_HostReadyToTravel = 5,
	HostMigration_Failed           = 6,
	HostMigration_MAX              = 7
};


// Enum Engine.WorldInfo.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Xbox360                = 1,
	CONSOLE_PS3                    = 2,
	CONSOLE_Mobile                 = 3,
	CONSOLE_IPhone                 = 4,
	CONSOLE_Android                = 5,
	CONSOLE_WiiU                   = 6,
	CONSOLE_Flash                  = 7,
	CONSOLE_Orbis                  = 8,
	CONSOLE_Durango                = 9,
	CONSOLE_Switch                 = 10,
	CONSOLE_MAX                    = 11
};


// Enum Engine.WorldInfo.EPreferredLightmapType
enum class EPreferredLightmapType : uint8_t
{
	EPLT_Default                   = 0,
	EPLT_Directional               = 1,
	EPLT_Simple                    = 2,
	EPLT_MAX                       = 3
};


// Enum Engine.WorldInfo.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.WorldInfo.ENetMode
enum class ENetMode : uint8_t
{
	NM_Standalone                  = 0,
	NM_DedicatedServer             = 1,
	NM_ListenServer                = 2,
	NM_Client                      = 3,
	NM_MAX                         = 4
};


// Enum Engine.WorldInfo.EZPrepassOverride
enum class EZPrepassOverride : uint8_t
{
	ZPPO_UseRHIDefault             = 0,
	ZPPO_Disabled                  = 1,
	ZPPO_AllSolidObjects           = 2,
	ZPPO_SpecificObjects           = 3,
	ZPPO_MAX                       = 4
};


// Enum Engine.GameEngine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.GameInfo.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.GameInfo.PIEPawnMeshTypes
enum class EPIEPawnMeshTypes : uint8_t
{
	PIEMESH_UseMeshID              = 0,
	PIEMESH_MAX                    = 1
};


// Enum Engine.GamePadLightbarSubsystem.LightBarState
enum class ELightBarState : uint8_t
{
	ELBS_Standby                   = 0,
	ELBS_Lerping                   = 1,
	ELBS_Pulsing                   = 2,
	ELBS_MAX                       = 3
};


// Enum Engine.GameplayEvents.EGameStatGroups
enum class EGameStatGroups : uint8_t
{
	GSG_EngineStats                = 0,
	GSG_Game                       = 1,
	GSG_Team                       = 2,
	GSG_Player                     = 3,
	GSG_Weapon                     = 4,
	GSG_Damage                     = 5,
	GSG_Projectile                 = 6,
	GSG_Pawn                       = 7,
	GSG_GameSpecific               = 8,
	GSG_Aggregate                  = 9,
	GSG_MAX                        = 10
};


// Enum Engine.GameViewportClient.ESplitScreenType
enum class ESplitScreenType : uint8_t
{
	eSST_NONE                      = 0,
	eSST_2P_HORIZONTAL             = 1,
	eSST_2P_VERTICAL               = 2,
	eSST_3P_FAVOR_TOP              = 3,
	eSST_3P_FAVOR_BOTTOM           = 4,
	eSST_4P                        = 5,
	eSST_MAX                       = 6
};


// Enum Engine.GameViewportClient.EDebugDisplayType
enum class EDebugDisplayType : uint8_t
{
	DDT_FIELD                      = 0,
	DDT_STATE                      = 1,
	DDT_PROPERTY                   = 2,
	DDT_GAME_PHASE                 = 3,
	DDT_MAX                        = 4
};


// Enum Engine.GameViewportClient.ESetMode
enum class ESetMode : uint8_t
{
	SetMode_Toggle                 = 0,
	SetMode_Enable                 = 1,
	SetMode_Disable                = 2,
	SetMode_MAX                    = 3
};


// Enum Engine.GameViewportClient.ESafeZoneType
enum class ESafeZoneType : uint8_t
{
	eSZ_TOP                        = 0,
	eSZ_BOTTOM                     = 1,
	eSZ_LEFT                       = 2,
	eSZ_RIGHT                      = 3,
	eSZ_MAX                        = 4
};


// Enum Engine.HavokCustomTraversalAnnotation.EHavokTraversalType
enum class EHavokTraversalType : uint8_t
{
	TRAVERSALTYPE_DROP_DOWN        = 0,
	TRAVERSALTYPE_CLIMB            = 1,
	TRAVERSALTYPE_JUMP             = 2,
	TRAVERSALTYPE_VAULT            = 3,
	TRAVERSALTYPE_DUCK_UNDER       = 4,
	TRAVERSALTYPE_PORTAL           = 5,
	TRAVERSALTYPE_MAX              = 6
};


// Enum Engine.HavokNavigationHandle.EHavokNavigationMeshType
enum class EHavokNavigationMeshType : uint8_t
{
	HavokNavMesh_Pristine          = 0,
	HavokNavMesh_Obstacle          = 1,
	HavokNavMesh_Taskforce1        = 2,
	HavokNavMesh_Taskforce2        = 3,
	HavokNavMesh_MAX               = 4
};


// Enum Engine.HavokNavigationHandle.EHavokEdgeType
enum class EHavokEdgeType : uint8_t
{
	EDGETYPE_REGULAR               = 0,
	EDGETYPE_TRAVERSAL_DROPDOWN    = 1,
	EDGETYPE_TRAVERSAL_JUMP        = 2,
	EDGETYPE_MAX                   = 3
};


// Enum Engine.HavokNavMeshActor.EHavokVersion
enum class EHavokVersion : uint8_t
{
	HAVOK_2012_2                   = 0,
	HAVOK_2013_3                   = 1,
	HAVOK_2014_2                   = 2,
	HAVOK_2016_1                   = 3,
	HAVOK_MAX                      = 4
};


// Enum Engine.InAppMessageBase.EInAppMessageInterfaceDelegate
enum class EInAppMessageInterfaceDelegate : uint8_t
{
	IAMD_InAppSMSUIComplete        = 0,
	IAMD_InAppEmailComplete        = 1,
	IAMD_MAX                       = 2
};


// Enum Engine.InGameAdManager.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.InstancedFoliageActor.EInstancedMeshStreamState
enum class EInstancedMeshStreamState : uint8_t
{
	IMSS_StreamedOut               = 0,
	IMSS_StreamedIn                = 1,
	IMSS_StreamingInFile           = 2,
	IMSS_StreamingInRenderData     = 3,
	IMSS_StreamingOut              = 4,
	IMSS_MAX                       = 5
};


// Enum Engine.InstancedFoliageSettings.FoliageCullOption
enum class EFoliageCullOption : uint8_t
{
	FOLIAGECULL_Cull               = 0,
	FOLIAGECULL_ScaleZ             = 1,
	FOLIAGECULL_ScaleXYZ           = 2,
	FOLIAGECULL_TranslateZ         = 3,
	FOLIAGECULL_MAX                = 4
};


// Enum Engine.Interface_NavMeshPathObstacle.EEdgeHandlingStatus
enum class EEdgeHandlingStatus : uint8_t
{
	EHS_AddedBothDirs              = 0,
	EHS_Added0to1                  = 1,
	EHS_Added1to0                  = 2,
	EHS_AddedNone                  = 3,
	EHS_MAX                        = 4
};


// Enum Engine.InterpTrack.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.InterpTrackHeadTracking.EHeadTrackingAction
enum class EHeadTrackingAction : uint8_t
{
	EHTA_DisableHeadTracking       = 0,
	EHTA_EnableHeadTracking        = 1,
	EHTA_MAX                       = 2
};


// Enum Engine.InterpTrackToggle.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.InterpTrackVisibility.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.InterpTrackVisibility.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveFrame
enum class EInterpTrackMoveFrame : uint8_t
{
	IMF_World                      = 0,
	IMF_RelativeToInitial          = 1,
	IMF_MAX                        = 2
};


// Enum Engine.InterpTrackMoveAxis.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Engine.LandscapeGizmoActiveActor.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Engine.LevelGridVolume.LevelGridCellShape
enum class ELevelGridCellShape : uint8_t
{
	LGCS_Box                       = 0,
	LGCS_Hex                       = 1,
	LGCS_MAX                       = 2
};


// Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.MaterialExpressionAntialiasedTextureMask.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.MaterialExpressionCustom.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.MaterialExpressionDepthOfFieldFunction.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_MAX                       = 3
};


// Enum Engine.MaterialExpressionFunctionInput.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MAX              = 7
};


// Enum Engine.MaterialExpressionLandscapeLayerBlend.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_AlphaBlend                  = 0,
	LB_HeightBlend                 = 1,
	LB_MAX                         = 2
};


// Enum Engine.MaterialExpressionSceneTexture.ESceneTextureType
enum class ESceneTextureType : uint8_t
{
	SceneTex_Lighting              = 0,
	SceneTex_MAX                   = 1
};


// Enum Engine.MaterialExpressionTerrainLayerCoords.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};


// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_World                = 0,
	TRANSFORM_View                 = 1,
	TRANSFORM_Local                = 2,
	TRANSFORM_Tangent              = 3,
	TRANSFORM_MAX                  = 4
};


// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_World          = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_Tangent        = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_MAX            = 4
};


// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransform
enum class EMaterialPositionTransform : uint8_t
{
	TRANSFORMPOS_World             = 0,
	TRANSFORMPOS_MAX               = 1
};


// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX         = 2
};


// Enum Engine.MicroTransactionBase.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.MicroTransactionBase.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.NxForceFieldGeneric.FFG_ForceFieldCoordinates
enum class EFFG_ForceFieldCoordinates : uint8_t
{
	FFG_CARTESIAN                  = 0,
	FFG_SPHERICAL                  = 1,
	FFG_CYLINDRICAL                = 2,
	FFG_TOROIDAL                   = 3,
	FFG_MAX                        = 4
};


// Enum Engine.NxGenericForceFieldBrush.FFB_ForceFieldCoordinates
enum class EFFB_ForceFieldCoordinates : uint8_t
{
	FFB_CARTESIAN                  = 0,
	FFB_SPHERICAL                  = 1,
	FFB_CYLINDRICAL                = 2,
	FFB_TOROIDAL                   = 3,
	FFB_MAX                        = 4
};


// Enum Engine.OnlineGameDownloadInterface.EDownloadSpeed
enum class EDownloadSpeed : uint8_t
{
	EDLS_Pause                     = 0,
	EDLS_Slow                      = 1,
	EDLS_Fast                      = 2,
	EDLS_MAX                       = 3
};


// Enum Engine.OnlinePlayerStorage.EOnlineProfilePropertyOwner
enum class EOnlineProfilePropertyOwner : uint8_t
{
	OPPO_None                      = 0,
	OPPO_OnlineService             = 1,
	OPPO_Game                      = 2,
	OPPO_MAX                       = 3
};


// Enum Engine.OnlinePlayerStorage.EOnlinePlayerStorageAsyncState
enum class EOnlinePlayerStorageAsyncState : uint8_t
{
	OPAS_NotStarted                = 0,
	OPAS_Read                      = 1,
	OPAS_Write                     = 2,
	OPAS_Finished                  = 3,
	OPAS_MAX                       = 4
};


// Enum Engine.OnlineProfileSettings.EProfileSettingID
enum class EProfileSettingID : uint8_t
{
	PSI_Unknown                    = 0,
	PSI_ControllerVibration        = 1,
	PSI_YInversion                 = 2,
	PSI_GamerCred                  = 3,
	PSI_GamerRep                   = 4,
	PSI_VoiceMuted                 = 5,
	PSI_VoiceThruSpeakers          = 6,
	PSI_VoiceVolume                = 7,
	PSI_GamerPictureKey            = 8,
	PSI_GamerMotto                 = 9,
	PSI_GamerTitlesPlayed          = 10,
	PSI_GamerAchievementsEarned    = 11,
	PSI_GameDifficulty             = 12,
	PSI_ControllerSensitivity      = 13,
	PSI_PreferredColor1            = 14,
	PSI_PreferredColor2            = 15,
	PSI_AutoAim                    = 16,
	PSI_AutoCenter                 = 17,
	PSI_MovementControl            = 18,
	PSI_RaceTransmission           = 19,
	PSI_RaceCameraLocation         = 20,
	PSI_RaceBrakeControl           = 21,
	PSI_RaceAcceleratorControl     = 22,
	PSI_GameCredEarned             = 23,
	PSI_GameAchievementsEarned     = 24,
	PSI_EndLiveIds                 = 25,
	PSI_ProfileVersionNum          = 26,
	PSI_ProfileSaveCount           = 27,
	PSI_MAX                        = 28
};


// Enum Engine.OnlineProfileSettings.EProfileDifficultyOptions
enum class EProfileDifficultyOptions : uint8_t
{
	PDO_Normal                     = 0,
	PDO_Easy                       = 1,
	PDO_Hard                       = 2,
	PDO_MAX                        = 3
};


// Enum Engine.OnlineProfileSettings.EProfileControllerSensitivityOptions
enum class EProfileControllerSensitivityOptions : uint8_t
{
	PCSO_Medium                    = 0,
	PCSO_Low                       = 1,
	PCSO_High                      = 2,
	PCSO_MAX                       = 3
};


// Enum Engine.OnlineProfileSettings.EProfilePreferredColorOptions
enum class EProfilePreferredColorOptions : uint8_t
{
	PPCO_None                      = 0,
	PPCO_Black                     = 1,
	PPCO_White                     = 2,
	PPCO_Yellow                    = 3,
	PPCO_Orange                    = 4,
	PPCO_Pink                      = 5,
	PPCO_Red                       = 6,
	PPCO_Purple                    = 7,
	PPCO_Blue                      = 8,
	PPCO_Green                     = 9,
	PPCO_Brown                     = 10,
	PPCO_Silver                    = 11,
	PPCO_MAX                       = 12
};


// Enum Engine.OnlineProfileSettings.EProfileAutoAimOptions
enum class EProfileAutoAimOptions : uint8_t
{
	PAAO_Off                       = 0,
	PAAO_On                        = 1,
	PAAO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileAutoCenterOptions
enum class EProfileAutoCenterOptions : uint8_t
{
	PACO_Off                       = 0,
	PACO_On                        = 1,
	PACO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileMovementControlOptions
enum class EProfileMovementControlOptions : uint8_t
{
	PMCO_L_Thumbstick              = 0,
	PMCO_R_Thumbstick              = 1,
	PMCO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceTransmissionOptions
enum class EProfileRaceTransmissionOptions : uint8_t
{
	PRTO_Auto                      = 0,
	PRTO_Manual                    = 1,
	PRTO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceCameraLocationOptions
enum class EProfileRaceCameraLocationOptions : uint8_t
{
	PRCLO_Behind                   = 0,
	PRCLO_Front                    = 1,
	PRCLO_Inside                   = 2,
	PRCLO_MAX                      = 3
};


// Enum Engine.OnlineProfileSettings.EProfileRaceBrakeControlOptions
enum class EProfileRaceBrakeControlOptions : uint8_t
{
	PRBCO_Trigger                  = 0,
	PRBCO_Button                   = 1,
	PRBCO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceAcceleratorControlOptions
enum class EProfileRaceAcceleratorControlOptions : uint8_t
{
	PRACO_Trigger                  = 0,
	PRACO_Button                   = 1,
	PRACO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileYInversionOptions
enum class EProfileYInversionOptions : uint8_t
{
	PYIO_Off                       = 0,
	PYIO_On                        = 1,
	PYIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileXInversionOptions
enum class EProfileXInversionOptions : uint8_t
{
	PXIO_Off                       = 0,
	PXIO_On                        = 1,
	PXIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileOmniDirEvadeOptions
enum class EProfileOmniDirEvadeOptions : uint8_t
{
	PODI_Off                       = 0,
	PODI_On                        = 1,
	PODI_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileControllerVibrationToggleOptions
enum class EProfileControllerVibrationToggleOptions : uint8_t
{
	PCVTO_Off                      = 0,
	PCVTO_IgnoreThis               = 1,
	PCVTO_IgnoreThis2              = 2,
	PCVTO_On                       = 3,
	PCVTO_MAX                      = 4
};


// Enum Engine.OnlineProfileSettings.EProfileVoiceThruSpeakersOptions
enum class EProfileVoiceThruSpeakersOptions : uint8_t
{
	PVTSO_Off                      = 0,
	PVTSO_On                       = 1,
	PVTSO_Both                     = 2,
	PVTSO_MAX                      = 3
};


// Enum Engine.ParticleEmitter.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_None                       = 3,
	ERM_MAX                        = 4
};


// Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.ParticleEmitter.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.ParticleModule.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_MAX                       = 7
};


// Enum Engine.ParticleModule.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.ParticleModuleAttractorBoneSocket.EBoneSocketAttractorFalloffType
enum class EBoneSocketAttractorFalloffType : uint8_t
{
	BSFOFF_Constant                = 0,
	BSFOFF_Linear                  = 1,
	BSFOFF_Exponent                = 2,
	BSFOFF_MAX                     = 3
};


// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestSelectionMethod
enum class ELocationBoneSocketDestSelectionMethod : uint8_t
{
	BONESOCKETDESTSEL_Sequential   = 0,
	BONESOCKETDESTSEL_Random       = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll     = 3,
	BONESOCKETDESTSEL_MAX          = 4
};


// Enum Engine.ParticleModuleAttractorBoneSocket.ELocationBoneSocketDestination
enum class ELocationBoneSocketDestination : uint8_t
{
	BONESOCKETDEST_Bones           = 0,
	BONESOCKETDEST_Sockets         = 1,
	BONESOCKETDEST_MAX             = 2
};


// Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.ParticleModuleAttractorSkelVertSurface.EVertSurfaceAttractorFalloffType
enum class EVertSurfaceAttractorFalloffType : uint8_t
{
	VSFOFF_Constant                = 0,
	VSFOFF_Linear                  = 1,
	VSFOFF_Exponent                = 2,
	VSFOFF_MAX                     = 3
};


// Enum Engine.ParticleModuleAttractorSkelVertSurface.EAttractorSkelVertSurfaceDestination
enum class EAttractorSkelVertSurfaceDestination : uint8_t
{
	VERTSURFACEDEST_Vert           = 0,
	VERTSURFACEDEST_Surface        = 1,
	VERTSURFACEDEST_MAX            = 2
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_PawnMeshSocket         = 5,
	PEB2STM_MAX                    = 6
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.ParticleModuleBeamModifier.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.ParticleModuleCameraOffset.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.ParticleModuleCollision.ParticleAttractorActionType
enum class EParticleAttractorActionType : uint8_t
{
	PAAT_None                      = 0,
	PAAT_Destroy                   = 1,
	PAAT_Freeze                    = 2,
	PAAT_Event                     = 3,
	PAAT_MAX                       = 4
};


// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ParticleModuleLocationBoneSocket.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX              = 3
};


// Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ParticleModuleLocationSkelVertSurface.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.ParticleModuleLocationStaticVertSurface.ELocationStaticVertSurfaceSource
enum class ELocationStaticVertSurfaceSource : uint8_t
{
	VERTSTATICSURFACESOURCE_Vert   = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX    = 2
};


// Enum Engine.ParticleModuleOrbit.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.ParticleModuleParameterDynamic.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5
};


// Enum Engine.ParticleModulePhysicsVolumes.EParticleLevelInfluenceType
enum class EParticleLevelInfluenceType : uint8_t
{
	LIT_Never                      = 0,
	LIT_OutsidePhysicsVolumes      = 1,
	LIT_Always                     = 2,
	LIT_MAX                        = 3
};


// Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_Square                     = 0,
	PSA_Rectangle                  = 1,
	PSA_Velocity                   = 2,
	PSA_TypeSpecific               = 3,
	PSA_MAX                        = 4
};


// Enum Engine.ParticleModuleRequired.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.ParticleModuleRequired.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.ParticleModuleTrailSpawn.ETrail2SpawnMethod
enum class ETrail2SpawnMethod : uint8_t
{
	PET2SM_Emitter                 = 0,
	PET2SM_Velocity                = 1,
	PET2SM_Distance                = 2,
	PET2SM_MAX                     = 3
};


// Enum Engine.ParticleModuleTrailTaper.ETrailTaperMethod
enum class ETrailTaperMethod : uint8_t
{
	PETTM_None                     = 0,
	PETTM_Full                     = 1,
	PETTM_Partial                  = 2,
	PETTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamMethod
enum class EBeamMethod : uint8_t
{
	PEBM_Distance                  = 0,
	PEBM_EndPoints                 = 1,
	PEBM_EndPoints_Interpolated    = 2,
	PEBM_UserSet_EndPoints         = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX                       = 5
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamEndPointMethod
enum class EBeamEndPointMethod : uint8_t
{
	PEBEPM_Calculated              = 0,
	PEBEPM_Distribution            = 1,
	PEBEPM_Distribution_Constant   = 2,
	PEBEPM_MAX                     = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ParticleModuleTypeDataMeshPhysX.EPhysXMeshRotationMethod
enum class EPhysXMeshRotationMethod : uint8_t
{
	PMRM_Disabled                  = 0,
	PMRM_Spherical                 = 1,
	PMRM_Box                       = 2,
	PMRM_LongBox                   = 3,
	PMRM_FlatBox                   = 4,
	PMRM_Velocity                  = 5,
	PMRM_MAX                       = 6
};


// Enum Engine.ParticleModuleTypeDataRibbon.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ProcBuildingRuleset.EProcBuildingAxis
enum class EProcBuildingAxis : uint8_t
{
	EPBAxis_X                      = 0,
	EPBAxis_Z                      = 1,
	EPBAxis_MAX                    = 2
};


// Enum Engine.ProcBuilding.EScopeEdge
enum class EScopeEdge : uint8_t
{
	EPSA_Top                       = 0,
	EPSA_Bottom                    = 1,
	EPSA_Left                      = 2,
	EPSA_Right                     = 3,
	EPSA_None                      = 4,
	EPSA_MAX                       = 5
};


// Enum Engine.ProcBuilding.EBuildingStatsBrowserColumns
enum class EBuildingStatsBrowserColumns : uint8_t
{
	BSBC_Name                      = 0,
	BSBC_Ruleset                   = 1,
	BSBC_NumStaticMeshComps        = 2,
	BSBC_NumInstancedStaticMeshComps = 3,
	BSBC_NumInstancedTris          = 4,
	BSBC_LightmapMemBytes          = 5,
	BSBC_ShadowmapMemBytes         = 6,
	BSBC_LODDiffuseMemBytes        = 7,
	BSBC_LODLightingMemBytes       = 8,
	BSBC_MAX                       = 9
};


// Enum Engine.ProcBuilding.EPBCornerType
enum class EPBCornerType : uint8_t
{
	EPBC_Default                   = 0,
	EPBC_Chamfer                   = 1,
	EPBC_Round                     = 2,
	EPBC_MAX                       = 3
};


// Enum Engine.PBRuleNodeEdgeAngle.EProcBuildingEdge
enum class EProcBuildingEdge : uint8_t
{
	EPBE_Top                       = 0,
	EPBE_Bottom                    = 1,
	EPBE_Left                      = 2,
	EPBE_Right                     = 3,
	EPBE_MAX                       = 4
};


// Enum Engine.PhysicalMaterial.EPhysEffectType
enum class EPhysEffectType : uint8_t
{
	EPMET_Impact                   = 0,
	EPMET_Slide                    = 1,
	EPMET_MAX                      = 2
};


// Enum Engine.PhysXParticleSystem.ESimulationMethod
enum class ESimulationMethod : uint8_t
{
	ESM_SPH                        = 0,
	ESM_NO_PARTICLE_INTERACTION    = 1,
	ESM_MIXED_MODE                 = 2,
	ESM_MAX                        = 3
};


// Enum Engine.PhysXParticleSystem.EPacketSizeMultiplier
enum class EPacketSizeMultiplier : uint8_t
{
	EPSM                           = 0,
	EPSM01                         = 1,
	EPSM02                         = 2,
	EPSM03                         = 3,
	EPSM04                         = 4,
	EPSM05                         = 5,
	EPSM_MAX                       = 6
};


// Enum Engine.PlayerReplicationInfo.EAudioDeviceCategory
enum class EAudioDeviceCategory : uint8_t
{
	ADC_Communications             = 0,
	ADC_Voice                      = 1,
	ADC_Multimedia                 = 2,
	ADC_MAX                        = 3
};


// Enum Engine.PlayerReplicationInfo.EAudioDeviceType
enum class EAudioDeviceType : uint8_t
{
	ADT_Capture                    = 0,
	ADT_Render                     = 1,
	ADT_MAX                        = 2
};


// Enum Engine.PlayerReplicationInfo.EAudioDeviceSharing
enum class EAudioDeviceSharing : uint8_t
{
	ADS_Exclusive                  = 0,
	ADS_Private                    = 1,
	ADS_Shared                     = 2,
	ADS_MAX                        = 3
};


// Enum Engine.SceneCaptureComponent.ESceneCaptureViewMode
enum class ESceneCaptureViewMode : uint8_t
{
	SceneCapView_Lit               = 0,
	SceneCapView_Unlit             = 1,
	SceneCapView_LitNoShadows      = 2,
	SceneCapView_Wire              = 3,
	SceneCapView_MAX               = 4
};


// Enum Engine.RB_BodySetup.ESleepFamily
enum class ESleepFamily : uint8_t
{
	SF_Normal                      = 0,
	SF_Sensitive                   = 1,
	SF_MAX                         = 2
};


// Enum Engine.RB_RadialForceActor.ERadialForceType
enum class ERadialForceType : uint8_t
{
	RFT_Force                      = 0,
	RFT_Impulse                    = 1,
	RFT_MAX                        = 2
};


// Enum Engine.Route.ERouteDirection
enum class ERouteDirection : uint8_t
{
	ERD_Forward                    = 0,
	ERD_Reverse                    = 1,
	ERD_MAX                        = 2
};


// Enum Engine.Route.ERouteFillAction
enum class ERouteFillAction : uint8_t
{
	RFA_Overwrite                  = 0,
	RFA_Add                        = 1,
	RFA_Remove                     = 2,
	RFA_Clear                      = 3,
	RFA_MAX                        = 4
};


// Enum Engine.Route.ERouteType
enum class ERouteType : uint8_t
{
	ERT_Linear                     = 0,
	ERT_Loop                       = 1,
	ERT_Circle                     = 2,
	ERT_MAX                        = 3
};


// Enum Engine.SeqAct_ActorFactory.EPointSelection
enum class EPointSelection : uint8_t
{
	PS_Normal                      = 0,
	PS_Random                      = 1,
	PS_Reverse                     = 2,
	PS_MAX                         = 3
};


// Enum Engine.SeqAct_SetMesh.EMeshType
enum class EMeshType : uint8_t
{
	MeshType_StaticMesh            = 0,
	MeshType_SkeletalMesh          = 1,
	MeshType_MAX                   = 2
};


// Enum Engine.WorldAttractor.EWorldAttractorFalloffType
enum class EWorldAttractorFalloffType : uint8_t
{
	FOFF_Constant                  = 0,
	FOFF_Linear                    = 1,
	FOFF_Exponent                  = 2,
	FOFF_MAX                       = 3
};


// Enum Engine.SeqEvent_ParticleEvent.EParticleEventOutputType
enum class EParticleEventOutputType : uint8_t
{
	ePARTICLEOUT_Spawn             = 0,
	ePARTICLEOUT_Death             = 1,
	ePARTICLEOUT_Collision         = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet            = 4,
	ePARTICLEOUT_MAX               = 5
};


// Enum Engine.SkelControlBase.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ActorSpace                 = 1,
	BCS_ComponentSpace             = 2,
	BCS_ParentBoneSpace            = 3,
	BCS_BoneSpace                  = 4,
	BCS_OtherBoneSpace             = 5,
	BCS_BaseMeshSpace              = 6,
	BCS_MAX                        = 7
};


// Enum Engine.SkelControlSpline.ESplineControlRotMode
enum class ESplineControlRotMode : uint8_t
{
	SCR_NoChange                   = 0,
	SCR_AlongSpline                = 1,
	SCR_Interpolate                = 2,
	SCR_MAX                        = 3
};


// Enum Engine.SkeletalMesh.SoftBodyBoneType
enum class ESoftBodyBoneType : uint8_t
{
	SOFTBODYBONE_Fixed             = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment  = 2,
	SOFTBODYBONE_MAX               = 3
};


// Enum Engine.SkeletalMesh.ClothBoneType
enum class EClothBoneType : uint8_t
{
	CLOTHBONE_Fixed                = 0,
	CLOTHBONE_BreakableAttachment  = 1,
	CLOTHBONE_TearLine             = 2,
	CLOTHBONE_MAX                  = 3
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationNormalMode
enum class ESkeletalMeshOptimizationNormalMode : uint8_t
{
	SMONM_Recalculate              = 0,
	SMONM_RecalculateSoft          = 1,
	SMONM_RecalculateHard          = 2,
	SMONM_MAX                      = 3
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMesh.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2
};


// Enum Engine.SkeletalMesh.TriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};


// Enum Engine.SkeletalMesh.BoneBreakOption
enum class EBoneBreakOption : uint8_t
{
	BONEBREAK_SoftPreferred        = 0,
	BONEBREAK_AutoDetect           = 1,
	BONEBREAK_RigidPreferred       = 2,
	BONEBREAK_MAX                  = 3
};


// Enum Engine.SkeletalMesh.TriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};


// Enum Engine.SkeletalMesh.ClothMovementScaleGen
enum class EClothMovementScaleGen : uint8_t
{
	ECMDM_DistToFixedVert          = 0,
	ECMDM_VertexBoneWeight         = 1,
	ECMDM_Empty                    = 2,
	ECMDM_MAX                      = 3
};


// Enum Engine.SoundNodeWave.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Dingo                    = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.SpeedTreeComponent.ESpeedTreeMeshType
enum class ESpeedTreeMeshType : uint8_t
{
	STMT_MinMinusOne               = 0,
	STMT_Branches1                 = 1,
	STMT_Branches2                 = 2,
	STMT_Fronds                    = 3,
	STMT_LeafCards                 = 4,
	STMT_LeafMeshes                = 5,
	STMT_Billboards                = 6,
	STMT_Max                       = 7
};


// Enum Engine.SVehicleWheel.EWheelSide
enum class EWheelSide : uint8_t
{
	SIDE_None                      = 0,
	SIDE_Left                      = 1,
	SIDE_Right                     = 2,
	SIDE_MAX                       = 3
};


// Enum Engine.TerrainMaterial.ETerrainMappingType
enum class ETerrainMappingType : uint8_t
{
	TMT_Auto                       = 0,
	TMT_XY                         = 1,
	TMT_XZ                         = 2,
	TMT_YZ                         = 3,
	TMT_MAX                        = 4
};


// Enum Engine.TextureFlipBook.TextureFlipBookMethod
enum class ETextureFlipBookMethod : uint8_t
{
	TFBM_UL_ROW                    = 0,
	TFBM_UL_COL                    = 1,
	TFBM_UR_ROW                    = 2,
	TFBM_UR_COL                    = 3,
	TFBM_LL_ROW                    = 4,
	TFBM_LL_COL                    = 5,
	TFBM_LR_ROW                    = 6,
	TFBM_LR_COL                    = 7,
	TFBM_RANDOM                    = 8,
	TFBM_MAX                       = 9
};


// Enum Engine.TextureMovie.EMovieStreamSource
enum class EMovieStreamSource : uint8_t
{
	MovieStream_File               = 0,
	MovieStream_Memory             = 1,
	MovieStream_MAX                = 2
};


// Enum Engine.TwitterIntegrationBase.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.TwitterIntegrationBase.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.UberPostProcessEffect.EPostProcessAAType
enum class EPostProcessAAType : uint8_t
{
	PostProcessAA_Off              = 0,
	PostProcessAA_FXAA0            = 1,
	PostProcessAA_FXAA1            = 2,
	PostProcessAA_FXAA2            = 3,
	PostProcessAA_FXAA3            = 4,
	PostProcessAA_FXAA4            = 5,
	PostProcessAA_FXAA5            = 6,
	PostProcessAA_MLAA             = 7,
	PostProcessAA_MAX              = 8
};


// Enum Engine.UberPostProcessEffect.ETonemapperType
enum class ETonemapperType : uint8_t
{
	Tonemapper_Off                 = 0,
	Tonemapper_Filmic              = 1,
	Tonemapper_Customizable        = 2,
	Tonemapper_MAX                 = 3
};


// Enum Engine.UIDataProvider_MenuItem.EMenuOptionType
enum class EMenuOptionType : uint8_t
{
	MENUOT_ComboReadOnly           = 0,
	MENUOT_ComboNumeric            = 1,
	MENUOT_CheckBox                = 2,
	MENUOT_Slider                  = 3,
	MENUOT_Spinner                 = 4,
	MENUOT_EditBox                 = 5,
	MENUOT_CollectionCheckBox      = 6,
	MENUOT_CollapsingList          = 7,
	MENUOT_MAX                     = 8
};


// Enum Engine.UIDataStore_OnlineStats.EStatsFetchType
enum class EStatsFetchType : uint8_t
{
	SFT_Player                     = 0,
	SFT_CenteredOnPlayer           = 1,
	SFT_Friends                    = 2,
	SFT_TopRankings                = 3,
	SFT_MAX                        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x185B6EB1900
struct FAnimSlotDesc
{
	unsigned char                                      UnknownData00[0x185B6EB1900];                             // 0x0000(0x185B6EB1900) MISSED OFFSET
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x185B66BA030
struct FRigidBodyState
{
	unsigned char                                      UnknownData00[0x185B66BA030];                             // 0x0000(0x185B66BA030) MISSED OFFSET
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x185B66B8830
struct FRigidBodyContactInfo
{
	unsigned char                                      UnknownData00[0x185B66B8830];                             // 0x0000(0x185B66B8830) MISSED OFFSET
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x185B66B9EB0
struct FCollisionImpactData
{
	unsigned char                                      UnknownData00[0x185B66B9EB0];                             // 0x0000(0x185B66B9EB0) MISSED OFFSET
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x185B66BAAB0
struct FPhysEffectInfo
{
	unsigned char                                      UnknownData00[0x185B66BAAB0];                             // 0x0000(0x185B66BAAB0) MISSED OFFSET
};

// ScriptStruct Engine.Actor.ActorReference
// 0x185B66BACF0
struct FActorReference
{
	unsigned char                                      UnknownData00[0x185B66BACF0];                             // 0x0000(0x185B66BACF0) MISSED OFFSET
};

// ScriptStruct Engine.Actor.NavReference
// 0x185B66B8A70
struct FNavReference
{
	unsigned char                                      UnknownData00[0x185B66B8A70];                             // 0x0000(0x185B66B8A70) MISSED OFFSET
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x185B66B86B0
struct FBasedPosition
{
	unsigned char                                      UnknownData00[0x185B66B86B0];                             // 0x0000(0x185B66B86B0) MISSED OFFSET
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x185B66C3570
struct FTraceHitInfo
{
	unsigned char                                      UnknownData00[0x185B66C3570];                             // 0x0000(0x185B66C3570) MISSED OFFSET
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x185B66C5130
struct FImpactInfo
{
	unsigned char                                      UnknownData00[0x185B66C5130];                             // 0x0000(0x185B66C5130) MISSED OFFSET
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x185B93D8B60
struct FSeqOpInputLink
{
	unsigned char                                      UnknownData00[0x185B93D8B60];                             // 0x0000(0x185B93D8B60) MISSED OFFSET
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x185B6EB3E80
struct FAnimSlotInfo
{
	unsigned char                                      UnknownData00[0x185B6EB3E80];                             // 0x0000(0x185B6EB3E80) MISSED OFFSET
};

// ScriptStruct Engine.Actor.TimerData
// 0x185B6EB2800
struct FTimerData
{
	unsigned char                                      UnknownData00[0x185B6EB2800];                             // 0x0000(0x185B6EB2800) MISSED OFFSET
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x185B96A9D80
struct FKeyValuePair
{
	unsigned char                                      UnknownData00[0x185B96A9D80];                             // 0x0000(0x185B96A9D80) MISSED OFFSET
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x185B96AA440
struct FPlayerResponseLine
{
	unsigned char                                      UnknownData00[0x185B96AA440];                             // 0x0000(0x185B96AA440) MISSED OFFSET
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x185B96AC6C0
struct FServerResponseLine
{
	unsigned char                                      UnknownData00[0x185B96AC6C0];                             // 0x0000(0x185B96AC6C0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x185B96AEAC0
struct FUniqueNetId
{
	unsigned char                                      UnknownData00[0x185B96AEAC0];                             // 0x0000(0x185B96AEAC0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x185B96AE580
struct FNamedSession
{
	unsigned char                                      UnknownData00[0x185B96AE580];                             // 0x0000(0x185B96AE580) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x185B96ADB00
struct FOnlineRegistrant
{
	unsigned char                                      UnknownData00[0x185B96ADB00];                             // 0x0000(0x185B96ADB00) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x185B96AD2C0
struct FNamedInterface
{
	unsigned char                                      UnknownData00[0x185B96AD2C0];                             // 0x0000(0x185B96AD2C0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x185B96B9740
struct FNamedInterfaceDef
{
	unsigned char                                      UnknownData00[0x185B96B9740];                             // 0x0000(0x185B96B9740) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SessionMemberInfo
// 0x185B96B3740
struct FSessionMemberInfo
{
	unsigned char                                      UnknownData00[0x185B96B3740];                             // 0x0000(0x185B96B3740) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x185B96BA580
struct FOnlineArbitrationRegistrant
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
	unsigned char                                      UnknownData02[0x185B96BA31C];                             // 0x0264(0x185B96BA31C) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SessionUpdateInfo
// 0x185B96B0380
struct FSessionUpdateInfo
{
	unsigned char                                      UnknownData00[0x185B96B0380];                             // 0x0000(0x185B96B0380) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x185B96B4700
struct FSocialPostLinkInfo
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
	unsigned char                                      UnknownData02[0x185B96B449C];                             // 0x0264(0x185B96B449C) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x185B96B3BC0
struct FSocialPostImageInfo
{
	unsigned char                                      UnknownData00[0x185B96B3BC0];                             // 0x0000(0x185B96B3BC0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x185B96B2600
struct FSocialPostImageFlags
{
	unsigned char                                      UnknownData00[0x185B96B2600];                             // 0x0000(0x185B96B2600) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x185B96B47C0
struct FSocialPostPrivileges
{
	unsigned char                                      UnknownData00[0x185B96B47C0];                             // 0x0000(0x185B96B47C0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x185B96B3800
struct FOnlinePartyMember
{
	unsigned char                                      UnknownData00[0x185B96B3800];                             // 0x0000(0x185B96B3800) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.PermissionsResultByUniqueNetId
// 0x185B96B2900
struct FPermissionsResultByUniqueNetId
{
	unsigned char                                      UnknownData00[0x185B96B2900];                             // 0x0000(0x185B96B2900) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.PermissionsResult
// 0x185B96B4E80
struct FPermissionsResult
{
	unsigned char                                      UnknownData00[0x185B96B4E80];                             // 0x0000(0x185B96B4E80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceInventoryItem
// 0x185B96B3C80
struct FMarketplaceInventoryItem
{
	unsigned char                                      UnknownData00[0x185B96B3C80];                             // 0x0000(0x185B96B3C80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductImage
// 0x185B96B5A80
struct FMarketplaceProductImage
{
	unsigned char                                      UnknownData00[0x185B96B5A80];                             // 0x0000(0x185B96B5A80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductDetails
// 0x185B96B5000
struct FMarketplaceProductDetails
{
	unsigned char                                      UnknownData00[0x185B96B5000];                             // 0x0000(0x185B96B5000) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceProductAvailability
// 0x185B96B7100
struct FMarketplaceProductAvailability
{
	unsigned char                                      UnknownData00[0x185B96B7100];                             // 0x0000(0x185B96B7100) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x185B96B6500
struct FAchievementDetails
{
	unsigned char                                      UnknownData00[0x185B96B6500];                             // 0x0000(0x185B96B6500) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.AchievementTitleAssociation
// 0x185B96BA940
struct FAchievementTitleAssociation
{
	unsigned char                                      UnknownData00[0x185B96BA940];                             // 0x0000(0x185B96BA940) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.AchievementReward
// 0x185B96B6200
struct FAchievementReward
{
	unsigned char                                      UnknownData00[0x185B96B6200];                             // 0x0000(0x185B96B6200) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.AchievementMediaAsset
// 0x185B96B8840
struct FAchievementMediaAsset
{
	unsigned char                                      UnknownData00[0x185B96B8840];                             // 0x0000(0x185B96B8840) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.UserAccountInfo
// 0x185B96B8CC0
struct FUserAccountInfo
{
	unsigned char                                      UnknownData00[0x185B96B8CC0];                             // 0x0000(0x185B96B8CC0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x185B96B9C80
struct FCommunityContentMetadata
{
	unsigned char                                      UnknownData00[0x185B96B9C80];                             // 0x0000(0x185B96B9C80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x185B96B9F80
struct FCommunityContentFile
{
	unsigned char                                      UnknownData00[0x185B96B9F80];                             // 0x0000(0x185B96B9F80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x185B96BA100
struct FTitleFile
{
	unsigned char                                      UnknownData00[0x185B96BA100];                             // 0x0000(0x185B96BA100) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x185B96B8E40
struct FEmsFile
{
	unsigned char                                      UnknownData00[0x185B96B8E40];                             // 0x0000(0x185B96B8E40) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x185B96BA400
struct FOnlineFriendMessage
{
	unsigned char                                      UnknownData00[0x185B96BA400];                             // 0x0000(0x185B96BA400) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x185B96BA880
struct FRemoteTalker
{
	unsigned char                                      UnknownData00[0x185B96BA880];                             // 0x0000(0x185B96BA880) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x185B96B9800
struct FLocalTalker
{
	unsigned char                                      UnknownData00[0x185B96B9800];                             // 0x0000(0x185B96B9800) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x185B96BAD00
struct FOnlinePlayerScore
{
	unsigned char                                      UnknownData00[0x185B96BAD00];                             // 0x0000(0x185B96BAD00) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x185B96B8240
struct FSpeechRecognizedWord
{
	unsigned char                                      UnknownData00[0x185B96B8240];                             // 0x0000(0x185B96B8240) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x185B96BDE80
struct FOnlineCrossTitleContent
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
	unsigned char                                      UnknownData02[0x185B96BDC1C];                             // 0x0264(0x185B96BDC1C) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x185B96BDB80
struct FOnlineContent
{
	unsigned char                                      UnknownData00[0x185B96BDB80];                             // 0x0000(0x185B96BDB80) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x185B96BDA00
struct FOnlineFriend
{
	unsigned char                                      UnknownData00[0x185B96BDA00];                             // 0x0000(0x185B96BDA00) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.OnlineProfile
// 0x185B96BC740
struct FOnlineProfile
{
	unsigned char                                      UnknownData00[0x185B96BC740];                             // 0x0000(0x185B96BC740) MISSED OFFSET
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x185B96BC8C0
struct FFriendsQuery
{
	unsigned char                                      UnknownData00[0x185B96BC8C0];                             // 0x0000(0x185B96BC8C0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x185B96BB300
struct FBaseAuthSession
{
	unsigned char                                      UnknownData00[0x185B96BB300];                             // 0x0000(0x185B96BB300) MISSED OFFSET
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x185B96BF5C0
struct FPendingClientAuth
{
	unsigned char                                      UnknownData00[0x185B96BF5C0];                             // 0x0000(0x185B96BF5C0) MISSED OFFSET
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x185B96BFE00
struct FServerAuthRetry
{
	unsigned char                                      UnknownData00[0x185B96BFE00];                             // 0x0000(0x185B96BFE00) MISSED OFFSET
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x185B96C2800
struct FAuthSession
{
	unsigned char                                      UnknownData00[0x185B96C2800];                             // 0x0000(0x185B96C2800) MISSED OFFSET
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x185B96C4A80
struct FLocalAuthSession
{
	unsigned char                                      UnknownData00[0x185B96C4A80];                             // 0x0000(0x185B96C4A80) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x185B5A8C210
struct FRBCollisionChannelContainer
{
	unsigned char                                      UnknownData00[0x185B5A8C210];                             // 0x0000(0x185B5A8C210) MISSED OFFSET
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x185B5A8E910
struct FLightingChannelContainer
{
	unsigned char                                      UnknownData00[0x185B5A8E910];                             // 0x0000(0x185B5A8E910) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponent.ParticleSysParam
// 0x185B5A95990
struct FParticleSysParam
{
	unsigned char                                      UnknownData00[0x185B5A95990];                             // 0x0000(0x185B5A95990) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x185B5A99710
struct FMaterialViewRelevance
{
	unsigned char                                      UnknownData00[0x185B5A99710];                             // 0x0000(0x185B5A99710) MISSED OFFSET
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x185B5A98750
struct FVisiblePortalInfo
{
	unsigned char                                      UnknownData00[0x185B5A98750];                             // 0x0000(0x185B5A98750) MISSED OFFSET
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x185B93CBC60
struct FTViewTarget
{
	unsigned char                                      UnknownData00[0x185B93CBC60];                             // 0x0000(0x185B93CBC60) MISSED OFFSET
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x185B93D44E0
struct FTCameraCache
{
	unsigned char                                      UnknownData00[0x185B93D44E0];                             // 0x0000(0x185B93D44E0) MISSED OFFSET
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x185B93CB4E0
struct FViewTargetTransitionParams
{
	unsigned char                                      UnknownData00[0x185B93CB4E0];                             // 0x0000(0x185B93CB4E0) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x185B93CEA20
struct FLUTBlender
{
	unsigned char                                      UnknownData00[0x185B93CEA20];                             // 0x0000(0x185B93CEA20) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x185B93CDCA0
struct FMobileColorGradingParams
{
	unsigned char                                      UnknownData00[0x185B93CDCA0];                             // 0x0000(0x185B93CDCA0) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x185B93CC9E0
struct FMobilePostProcessSettings
{
	unsigned char                                      UnknownData00[0x185B93CC9E0];                             // 0x0000(0x185B93CC9E0) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x185B93D4060
struct FPostProcessSettings
{
	unsigned char                                      UnknownData00[0x185B93D4060];                             // 0x0000(0x185B93D4060) MISSED OFFSET
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x185B93D42A0
struct FRenderingPerformanceOverrides
{
	unsigned char                                      UnknownData00[0x185B93D42A0];                             // 0x0000(0x185B93D42A0) MISSED OFFSET
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x185B93DA2A0
struct FSeqOpOutputLink
{
	unsigned char                                      UnknownData00[0x185B93DA2A0];                             // 0x0000(0x185B93DA2A0) MISSED OFFSET
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x185B7E0A040
struct FSeqVarLink
{
	unsigned char                                      UnknownData00[0x185B7E0A040];                             // 0x0000(0x185B7E0A040) MISSED OFFSET
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x185B7E090D0
struct FSeqEventLink
{
	unsigned char                                      UnknownData00[0x185B7E090D0];                             // 0x0000(0x185B7E090D0) MISSED OFFSET
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x185B93D9760
struct FSeqOpOutputInputLink
{
	unsigned char                                      UnknownData00[0x185B93D9760];                             // 0x0000(0x185B93D9760) MISSED OFFSET
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x185B93DE6E0
struct FIdToStringMapping
{
	unsigned char                                      UnknownData00[0x185B93DE6E0];                             // 0x0000(0x185B93DE6E0) MISSED OFFSET
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x185B93DC8E0
struct FLocalizedStringSetting
{
	unsigned char                                      UnknownData00[0x185B93DC8E0];                             // 0x0000(0x185B93DC8E0) MISSED OFFSET
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x185B93E0EA0
struct FSettingsProperty
{
	unsigned char                                      UnknownData00[0x185B93E0EA0];                             // 0x0000(0x185B93E0EA0) MISSED OFFSET
};

// ScriptStruct Engine.Settings.SettingsData
// 0x185B93DD4E0
struct FSettingsData
{
	unsigned char                                      UnknownData00[0x185B93DD4E0];                             // 0x0000(0x185B93DD4E0) MISSED OFFSET
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x185B93E04E0
struct FStringIdToStringMapping
{
	unsigned char                                      UnknownData00[0x185B93E04E0];                             // 0x0000(0x185B93E04E0) MISSED OFFSET
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x185B93E0120
struct FLocalizedStringSettingMetaData
{
	unsigned char                                      UnknownData00[0x185B93E0120];                             // 0x0000(0x185B93E0120) MISSED OFFSET
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x185B93DEF20
struct FSettingsPropertyPropertyMetaData
{
	unsigned char                                      UnknownData00[0x185B93DEF20];                             // 0x0000(0x185B93DEF20) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x185B93E6DE0
struct FOnlineGameSearchQuery
{
	unsigned char                                      UnknownData00[0x185B93E6DE0];                             // 0x0000(0x185B93E6DE0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x185B93E52E0
struct FOverrideSkill
{
	unsigned char                                      UnknownData00[0x185B93E52E0];                             // 0x0000(0x185B93E52E0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x185B93E62A0
struct FOnlineGameSearchORClause
{
	unsigned char                                      UnknownData00[0x185B93E62A0];                             // 0x0000(0x185B93E62A0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x185B93E5760
struct FOnlineGameSearchSortClause
{
	unsigned char                                      UnknownData00[0x185B93E5760];                             // 0x0000(0x185B93E5760) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x185B93E7020
struct FOnlineGameSearchParameter
{
	unsigned char                                      UnknownData00[0x185B93E7020];                             // 0x0000(0x185B93E7020) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x185B93E5E20
struct FNamedObjectProperty
{
	unsigned char                                      UnknownData00[0x185B93E5E20];                             // 0x0000(0x185B93E5E20) MISSED OFFSET
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x185B93E8EE0
struct FOnlineGameSearchResult
{
	unsigned char                                      UnknownData00[0x185B93E8EE0];                             // 0x0000(0x185B93E8EE0) MISSED OFFSET
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x185B60719C0
struct FDebugTextInfo
{
	unsigned char                                      UnknownData00[0x185B60719C0];                             // 0x0000(0x185B60719C0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystem.ParticleChannelContainer
// 0x185BB3A14A0
struct FParticleChannelContainer
{
	unsigned char                                      UnknownData00[0x185BB3A14A0];                             // 0x0000(0x185BB3A14A0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x185BB3A10E0
struct FLODSoloTrack
{
	unsigned char                                      UnknownData00[0x185BB3A10E0];                             // 0x0000(0x185BB3A10E0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x185BB3A0C60
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x185BB3A0C60];                             // 0x0000(0x185BB3A0C60) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x185BB3AA920
struct FBonePair
{
	unsigned char                                      UnknownData00[0x185BB3AA920];                             // 0x0000(0x185BB3AA920) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x185C1D4F750
struct FAnimBlendChild
{
	unsigned char                                      UnknownData00[0x185C1D4F750];                             // 0x0000(0x185C1D4F750) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x185BB3AF720
struct FSkelMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x185BB3AF720];                             // 0x0000(0x185BB3AF720) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x185BB3AF420
struct FAttachment
{
	unsigned char                                      UnknownData00[0x185BB3AF420];                             // 0x0000(0x185BB3AF420) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x185BB3B1820
struct FActiveMorph
{
	unsigned char                                      UnknownData00[0x185BB3B1820];                             // 0x0000(0x185BB3B1820) MISSED OFFSET
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x185BB3BEF60
struct FConnectedPeerInfo
{
	unsigned char                                      UnknownData00[0x185BB3BEF60];                             // 0x0000(0x185BB3BEF60) MISSED OFFSET
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x185BB3CE560
struct FClientAdjustment
{
	unsigned char                                      UnknownData00[0x185BB3CE560];                             // 0x0000(0x185BB3CE560) MISSED OFFSET
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x185B60662C0
struct FKismetDrawTextInfo
{
	unsigned char                                      UnknownData00[0x185B60662C0];                             // 0x0000(0x185B60662C0) MISSED OFFSET
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x185B6069080
struct FConsoleMessage
{
	unsigned char                                      UnknownData00[0x185B6069080];                             // 0x0000(0x185B6069080) MISSED OFFSET
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x185B7E0BA40
struct FHudLocalizedMessage
{
	unsigned char                                      UnknownData00[0x185B7E0BA40];                             // 0x0000(0x185B7E0BA40) MISSED OFFSET
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x185B60728C0
struct FAutomatedTestingDatum
{
	unsigned char                                      UnknownData00[0x185B60728C0];                             // 0x0000(0x185B60728C0) MISSED OFFSET
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x185B607A6C0
struct FInputMatchRequest
{
	unsigned char                                      UnknownData00[0x185B607A6C0];                             // 0x0000(0x185B607A6C0) MISSED OFFSET
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x185B6079280
struct FInputEntry
{
	unsigned char                                      UnknownData00[0x185B6079280];                             // 0x0000(0x185B6079280) MISSED OFFSET
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x185B6083C00
struct FDebugNavCost
{
	unsigned char                                      UnknownData00[0x185B6083C00];                             // 0x0000(0x185B6083C00) MISSED OFFSET
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x185B6083B40
struct FNavigationOctreeObject
{
	unsigned char                                      UnknownData00[0x185B6083B40];                             // 0x0000(0x185B6083B40) MISSED OFFSET
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x185B6082C40
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B6082C40];                             // 0x0000(0x185B6082C40) MISSED OFFSET
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x185B6084980
struct FKSphereElem
{
	unsigned char                                      UnknownData00[0x185B6084980];                             // 0x0000(0x185B6084980) MISSED OFFSET
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x185B60881C0
struct FKBoxElem
{
	unsigned char                                      UnknownData00[0x185B60881C0];                             // 0x0000(0x185B60881C0) MISSED OFFSET
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x185B6088D00
struct FKSphylElem
{
	unsigned char                                      UnknownData00[0x185B6088D00];                             // 0x0000(0x185B6088D00) MISSED OFFSET
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x185B6087680
struct FKConvexElem
{
	unsigned char                                      UnknownData00[0x185B6087680];                             // 0x0000(0x185B6087680) MISSED OFFSET
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x185B60890C0
struct FKAggregateGeom
{
	unsigned char                                      UnknownData00[0x185B60890C0];                             // 0x0000(0x185B60890C0) MISSED OFFSET
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x185B608B340
struct FPolyReference
{
	unsigned char                                      UnknownData00[0x185B608B340];                             // 0x0000(0x185B608B340) MISSED OFFSET
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x185B48A7020
struct FPathSizeInfo
{
	unsigned char                                      UnknownData00[0x185B48A7020];                             // 0x0000(0x185B48A7020) MISSED OFFSET
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x185B608F600
struct FKCachedConvexData_Mirror
{
	unsigned char                                      UnknownData00[0x185B608F600];                             // 0x0000(0x185B608F600) MISSED OFFSET
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x185B608F780
struct FGeomSelection
{
	unsigned char                                      UnknownData00[0x185B608F780];                             // 0x0000(0x185B608F780) MISSED OFFSET
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x185B608DE00
struct FInteriorSettings
{
	unsigned char                                      UnknownData00[0x185B608DE00];                             // 0x0000(0x185B608DE00) MISSED OFFSET
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x185B6092780
struct FReverbSettings
{
	unsigned char                                      UnknownData00[0x185B6092780];                             // 0x0000(0x185B6092780) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x185B6093500
struct FAudioComponentParam
{
	unsigned char                                      UnknownData00[0x185B6093500];                             // 0x0000(0x185B6093500) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x185B6095A80
struct FSubtitleCue
{
	unsigned char                                      UnknownData00[0x185B6095A80];                             // 0x0000(0x185B6095A80) MISSED OFFSET
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x185B60980C0
struct FListener
{
	unsigned char                                      UnknownData00[0x185B60980C0];                             // 0x0000(0x185B60980C0) MISSED OFFSET
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x185B6098000
struct FAudioClassInfo
{
	unsigned char                                      UnknownData00[0x185B6098000];                             // 0x0000(0x185B6098000) MISSED OFFSET
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x185B6097400
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x185B6097400];                             // 0x0000(0x185B6097400) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x185B6099980
struct FAmbientSoundSlot
{
	unsigned char                                      UnknownData00[0x185B6099980];                             // 0x0000(0x185B6099980) MISSED OFFSET
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// 0x185B605BD00
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B605BD00];                             // 0x0000(0x185B605BD00) MISSED OFFSET
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x185B605AF80
struct FInterpPointOnSpline
{
	unsigned char                                      UnknownData00[0x185B605AF80];                             // 0x0000(0x185B605AF80) MISSED OFFSET
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x185B605B280
struct FSplineSoundSlot
{
	unsigned char                                      UnknownData00[0x185B605B280];                             // 0x0000(0x185B605B280) MISSED OFFSET
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x185C1D42310
struct FMultiCueSplineSoundSlot
{
	unsigned char                                      UnknownData00[0x185C1D42310];                             // 0x0000(0x185C1D42310) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x185C1D43F90
struct FDelegateArray
{
	unsigned char                                      UnknownData00[0x185C1D43F90];                             // 0x0000(0x185C1D43F90) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x185C1D42790
struct FPlatformInterfaceData
{
	unsigned char                                      UnknownData00[0x185C1D42790];                             // 0x0000(0x185C1D42790) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x185C1D43ED0
struct FPlatformInterfaceDelegateResult
{
	unsigned char                                      UnknownData00[0x185C1D43ED0];                             // 0x0000(0x185C1D43ED0) MISSED OFFSET
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x185C1D44B90
struct FEventStringParam
{
	unsigned char                                      UnknownData00[0x185C1D44B90];                             // 0x0000(0x185C1D44B90) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x185C1D462D0
struct FCompressedTrack
{
	unsigned char                                      UnknownData00[0x185C1D462D0];                             // 0x0000(0x185C1D462D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x185C1D471D0
struct FCurveTrack
{
	unsigned char                                      UnknownData00[0x185C1D471D0];                             // 0x0000(0x185C1D471D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x185C1D474D0
struct FRotationTrack
{
	unsigned char                                      UnknownData00[0x185C1D474D0];                             // 0x0000(0x185C1D474D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x185C1D46510
struct FTranslationTrack
{
	unsigned char                                      UnknownData00[0x185C1D46510];                             // 0x0000(0x185C1D46510) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x185C1D47650
struct FSkelControlModifier
{
	unsigned char                                      UnknownData00[0x185C1D47650];                             // 0x0000(0x185C1D47650) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x185C1D477D0
struct FTimeModifier
{
	unsigned char                                      UnknownData00[0x185C1D477D0];                             // 0x0000(0x185C1D477D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x185C1D49390
struct FRawAnimSequenceTrack
{
	unsigned char                                      UnknownData00[0x185C1D49390];                             // 0x0000(0x185C1D49390) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x185C1D4AD10
struct FAnimNotifyEvent
{
	unsigned char                                      UnknownData00[0x185C1D4AD10];                             // 0x0000(0x185C1D4AD10) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x185C1D4CD50
struct FCurveKey
{
	unsigned char                                      UnknownData00[0x185C1D4CD50];                             // 0x0000(0x185C1D4CD50) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimationEndInformation
// 0x185C1D51010
struct FAnimationEndInformation
{
	unsigned char                                      UnknownData00[0x185C1D51010];                             // 0x0000(0x185C1D51010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x185C1D50890
struct FWeightNodeRule
{
	unsigned char                                      UnknownData00[0x185C1D50890];                             // 0x0000(0x185C1D50890) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x185C1D50110
struct FWeightRule
{
	unsigned char                                      UnknownData00[0x185C1D50110];                             // 0x0000(0x185C1D50110) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x185C1D50C50
struct FBranchInfo
{
	unsigned char                                      UnknownData00[0x185C1D50C50];                             // 0x0000(0x185C1D50C50) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x185C1D4F8D0
struct FPerBoneMaskInfo
{
	unsigned char                                      UnknownData00[0x185C1D4F8D0];                             // 0x0000(0x185C1D4F8D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x185C1D4EA90
struct FAimTransform
{
	unsigned char                                      UnknownData00[0x185C1D4EA90];                             // 0x0000(0x185C1D4EA90) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x185C1D50D10
struct FAimComponent
{
	unsigned char                                      UnknownData00[0x185C1D50D10];                             // 0x0000(0x185C1D50D10) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x185C1D51CD0
struct FAimOffsetProfile
{
	unsigned char                                      UnknownData00[0x185C1D51CD0];                             // 0x0000(0x185C1D51CD0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x185C1D56590
struct FChildBoneBlendInfo
{
	unsigned char                                      UnknownData00[0x185C1D56590];                             // 0x0000(0x185C1D56590) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeSequence.DeferredAnimNotifyTickInformation
// 0x185C1D564D0
struct FDeferredAnimNotifyTickInformation
{
	unsigned char                                      UnknownData00[0x185C1D564D0];                             // 0x0000(0x185C1D564D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeSequence.DeferredAnimNotifyEndInformation
// 0x185C1D58A50
struct FDeferredAnimNotifyEndInformation
{
	unsigned char                                      UnknownData00[0x185C1D58A50];                             // 0x0000(0x185C1D58A50) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x185C1D5ACD0
struct FRandomAnimInfo
{
	unsigned char                                      UnknownData00[0x185C1D5ACD0];                             // 0x0000(0x185C1D5ACD0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x185C1D5BBD0
struct FAnimBlendInfo
{
	unsigned char                                      UnknownData00[0x185C1D5BBD0];                             // 0x0000(0x185C1D5BBD0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x185C1D5C1D0
struct FAnimInfo
{
	unsigned char                                      UnknownData00[0x185C1D5C1D0];                             // 0x0000(0x185C1D5C1D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x185C1D5E5D0
struct FSynchGroup
{
	unsigned char                                      UnknownData00[0x185C1D5E5D0];                             // 0x0000(0x185C1D5E5D0) MISSED OFFSET
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x185C1D603D0
struct FScalarParameterInterpStruct
{
	unsigned char                                      UnknownData00[0x185C1D603D0];                             // 0x0000(0x185C1D603D0) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x185B7706C80
struct FAnimGroup
{
	unsigned char                                      UnknownData00[0x185B7706C80];                             // 0x0000(0x185B7706C80) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x185B77182C0
struct FRootMotionCurve
{
	unsigned char                                      UnknownData00[0x185B77182C0];                             // 0x0000(0x185B77182C0) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x185B771C940
struct FSwarmDebugOptions
{
	unsigned char                                      UnknownData00[0x185B771C940];                             // 0x0000(0x185B771C940) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x185B7718980
struct FLocalizedSubtitle
{
	unsigned char                                      UnknownData00[0x185B7718980];                             // 0x0000(0x185B7718980) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x185B771CDC0
struct FLightMapRef
{
	unsigned char                                      UnknownData00[0x185B771CDC0];                             // 0x0000(0x185B771CDC0) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x185B771CE80
struct FDominantShadowInfo
{
	unsigned char                                      UnknownData00[0x185B771CE80];                             // 0x0000(0x185B771CE80) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x185B771B140
struct FLightmassLightSettings
{
	unsigned char                                      UnknownData00[0x185B771B140];                             // 0x0000(0x185B771B140) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x185B771C040
struct FLightmassPointLightSettings
{
	unsigned char                                      UnknownData00[0x185B771C040];                             // 0x0000(0x185B771C040) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x185B771A6C0
struct FLightmassDirectionalLightSettings
{
	unsigned char                                      UnknownData00[0x185B771A6C0];                             // 0x0000(0x185B771A6C0) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x185B771B5C0
struct FLightmassPrimitiveSettings
{
	unsigned char                                      UnknownData00[0x185B771B5C0];                             // 0x0000(0x185B771B5C0) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x185B771A240
struct FLightmassDebugOptions
{
	unsigned char                                      UnknownData00[0x185B771A240];                             // 0x0000(0x185B771A240) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x185B771FAC0
struct FTrailSamplePoint
{
	unsigned char                                      UnknownData00[0x185B771FAC0];                             // 0x0000(0x185B771FAC0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x185B771D300
struct FTrailSample
{
	unsigned char                                      UnknownData00[0x185B771D300];                             // 0x0000(0x185B771D300) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x185B771F4C0
struct FTrailSocketSamplePoint
{
	unsigned char                                      UnknownData00[0x185B771F4C0];                             // 0x0000(0x185B771F4C0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x185C1D25F40
struct FAnimSetMeshLinkup
{
	unsigned char                                      UnknownData00[0x185C1D25F40];                             // 0x0000(0x185C1D25F40) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x185C1D28340
struct FSkelControlListHead
{
	unsigned char                                      UnknownData00[0x185C1D28340];                             // 0x0000(0x185C1D28340) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.HelmetMorphRestrictions
// 0x185C1D28580
struct FHelmetMorphRestrictions
{
	unsigned char                                      UnknownData00[0x185C1D28580];                             // 0x0000(0x185C1D28580) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x185C1D27500
struct FPreviewSkelMeshStruct
{
	unsigned char                                      UnknownData00[0x185C1D27500];                             // 0x0000(0x185C1D27500) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x185C1D272C0
struct FPreviewSocketStruct
{
	unsigned char                                      UnknownData00[0x185C1D272C0];                             // 0x0000(0x185C1D272C0) MISSED OFFSET
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x185C1D28940
struct FPreviewAnimSetsStruct
{
	unsigned char                                      UnknownData00[0x185C1D28940];                             // 0x0000(0x185C1D28940) MISSED OFFSET
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x185C1D28DC0
struct FClothingLodInfo
{
	unsigned char                                      UnknownData00[0x185C1D28DC0];                             // 0x0000(0x185C1D28DC0) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x185C1D2FFC0
struct FNxDestructibleParameters
{
	unsigned char                                      UnknownData00[0x185C1D2FFC0];                             // 0x0000(0x185C1D2FFC0) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x185C1D30BC0
struct FNxDestructibleDepthParameters
{
	unsigned char                                      UnknownData00[0x185C1D30BC0];                             // 0x0000(0x185C1D30BC0) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x185C1D2FD80
struct FNxDestructibleParametersFlag
{
	unsigned char                                      UnknownData00[0x185C1D2FD80];                             // 0x0000(0x185C1D2FD80) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x185C1D31340
struct FNxDestructibleDamageParameters
{
	unsigned char                                      UnknownData00[0x185C1D31340];                             // 0x0000(0x185C1D31340) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x185C1D2F900
struct FNxDestructibleDebrisParameters
{
	unsigned char                                      UnknownData00[0x185C1D2F900];                             // 0x0000(0x185C1D2F900) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x185C1D308C0
struct FNxDestructibleAdvancedParameters
{
	unsigned char                                      UnknownData00[0x185C1D308C0];                             // 0x0000(0x185C1D308C0) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x185C1D33140
struct FDamagePair
{
	unsigned char                                      UnknownData00[0x185C1D33140];                             // 0x0000(0x185C1D33140) MISSED OFFSET
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x185C1D32840
struct FDamageParameters
{
	unsigned char                                      UnknownData00[0x185C1D32840];                             // 0x0000(0x185C1D32840) MISSED OFFSET
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x185C1D34880
struct FNotificationMessageInfo
{
	unsigned char                                      UnknownData00[0x185C1D34880];                             // 0x0000(0x185C1D34880) MISSED OFFSET
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x185C1D34B80
struct FNotificationInfo
{
	unsigned char                                      UnknownData00[0x185C1D34B80];                             // 0x0000(0x185C1D34B80) MISSED OFFSET
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x185C1D34940
struct FLaunchNotificationInfo
{
	unsigned char                                      UnknownData00[0x185C1D34940];                             // 0x0000(0x185C1D34940) MISSED OFFSET
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x185C1D407C0
struct FFOscillator
{
	unsigned char                                      UnknownData00[0x185C1D407C0];                             // 0x0000(0x185C1D407C0) MISSED OFFSET
};

// ScriptStruct Engine.CameraShake.V2DOscillator
// 0x185C1D40E80
struct FV2DOscillator
{
	unsigned char                                      UnknownData00[0x185C1D40E80];                             // 0x0000(0x185C1D40E80) MISSED OFFSET
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x185C1D40040
struct FVOscillator
{
	unsigned char                                      UnknownData00[0x185C1D40040];                             // 0x0000(0x185C1D40040) MISSED OFFSET
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x185C1D40940
struct FROscillator
{
	unsigned char                                      UnknownData00[0x185C1D40940];                             // 0x0000(0x185C1D40940) MISSED OFFSET
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x185C1D40580
struct FCameraShakeInstance
{
	unsigned char                                      UnknownData00[0x185C1D40580];                             // 0x0000(0x185C1D40580) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x185B2D79310
struct FCanvasIcon
{
	unsigned char                                      UnknownData00[0x185B2D79310];                             // 0x0000(0x185B2D79310) MISSED OFFSET
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x185C1D203C0
struct FTextureGroupContainer
{
	unsigned char                                      UnknownData00[0x185C1D203C0];                             // 0x0000(0x185C1D203C0) MISSED OFFSET
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x185B2D6CF50
struct FTexture2DMipMap
{
	unsigned char                                      UnknownData00[0x185B2D6CF50];                             // 0x0000(0x185B2D6CF50) MISSED OFFSET
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x185B2D6F290
struct FTextureLinkedListMirror
{
	unsigned char                                      UnknownData00[0x185B2D6F290];                             // 0x0000(0x185B2D6F290) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x185B2D70490
struct FDepthFieldGlowInfo
{
	unsigned char                                      UnknownData00[0x185B2D70490];                             // 0x0000(0x185B2D70490) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x185B2D70550
struct FMobileDistanceFieldParams
{
	unsigned char                                      UnknownData00[0x185B2D70550];                             // 0x0000(0x185B2D70550) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x185B2D6E690
struct FFontRenderInfo
{
	unsigned char                                      UnknownData00[0x185B2D6E690];                             // 0x0000(0x185B2D6E690) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x185B2D6FAD0
struct FCanvasUVTri
{
	unsigned char                                      UnknownData00[0x185B2D6FAD0];                             // 0x0000(0x185B2D6FAD0) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x185B2D73610
struct FTextSizingParameters
{
	unsigned char                                      UnknownData00[0x185B2D73610];                             // 0x0000(0x185B2D73610) MISSED OFFSET
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x185B2D736D0
struct FWrappedStringElement
{
	unsigned char                                      UnknownData00[0x185B2D736D0];                             // 0x0000(0x185B2D736D0) MISSED OFFSET
};

// ScriptStruct Engine.CloudSaveSystem.SetSaveDataCallbackStruct
// 0x185B2D87410
struct FSetSaveDataCallbackStruct
{
	unsigned char                                      UnknownData00[0x185B2D87410];                             // 0x0000(0x185B2D87410) MISSED OFFSET
};

// ScriptStruct Engine.CloudSaveSystem.SaveSlotOperation
// 0x185B2D85010
struct FSaveSlotOperation
{
	unsigned char                                      UnknownData00[0x185B2D85010];                             // 0x0000(0x185B2D85010) MISSED OFFSET
};

// ScriptStruct Engine.CloudSaveSystem.GetSaveDataCallbackStruct
// 0x185B2D871D0
struct FGetSaveDataCallbackStruct
{
	unsigned char                                      UnknownData00[0x185B2D871D0];                             // 0x0000(0x185B2D871D0) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x185B2D91250
struct FUIRangeData
{
	unsigned char                                      UnknownData00[0x185B2D91250];                             // 0x0000(0x185B2D91250) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x185B2D8F2D0
struct FTextureCoordinates
{
	unsigned char                                      UnknownData00[0x185B2D8F2D0];                             // 0x0000(0x185B2D8F2D0) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x185B2D90590
struct FInputKeyAction
{
	unsigned char                                      UnknownData00[0x185B2D90590];                             // 0x0000(0x185B2D90590) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x185B2D90C50
struct FInputEventParameters
{
	unsigned char                                      UnknownData00[0x185B2D90C50];                             // 0x0000(0x185B2D90C50) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x185B2D91790
struct FSubscribedInputEventParameters
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	TArray<struct FString>                             BadCapsLocContexts;                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData01[0x185B2D91720];                             // 0x0070(0x185B2D91720) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x185B2D8FC90
struct FUIAxisEmulationDefinition
{
	unsigned char                                      UnknownData00[0x185B2D8FC90];                             // 0x0000(0x185B2D8FC90) MISSED OFFSET
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x185B2D90AD0
struct FRawInputKeyEventData
{
	unsigned char                                      UnknownData00[0x185B2D90AD0];                             // 0x0000(0x185B2D90AD0) MISSED OFFSET
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x185B2D96110
struct FAutoCompleteCommand
{
	unsigned char                                      UnknownData00[0x185B2D96110];                             // 0x0000(0x185B2D96110) MISSED OFFSET
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x185B2D95510
struct FAutoCompleteNode
{
	unsigned char                                      UnknownData00[0x185B2D95510];                             // 0x0000(0x185B2D95510) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x185B2DA6F10
struct FCovPosInfo
{
	unsigned char                                      UnknownData00[0x185B2DA6F10];                             // 0x0000(0x185B2DA6F10) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x185B2D99350
struct FFireLinkItem
{
	unsigned char                                      UnknownData00[0x185B2D99350];                             // 0x0000(0x185B2D99350) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x185B2D98390
struct FFireLink
{
	unsigned char                                      UnknownData00[0x185B2D98390];                             // 0x0000(0x185B2D98390) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x185B2D98810
struct FDynamicLinkInfo
{
	unsigned char                                      UnknownData00[0x185B2D98810];                             // 0x0000(0x185B2D98810) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x185B2D988D0
struct FExposedLink
{
	unsigned char                                      UnknownData00[0x185B2D988D0];                             // 0x0000(0x185B2D988D0) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x185B2D98A50
struct FCoverReference
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	TArray<class ActorComponent*>                      Components;                                               // 0x0060(0x0010) (Const, ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class ActorComponent*>                      AllComponents;                                            // 0x0070(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	struct FVector                                     Location;                                                 // 0x0080(0x000C) (Edit, Const, Net)
	struct FRotator                                    Rotation;                                                 // 0x008C(0x000C) (Edit, Const, Net)
	float                                              DrawScale;                                                // 0x0098(0x0004) (Edit, Const, Net)
	struct FVector                                     DrawScale3D;                                              // 0x009C(0x000C) (Edit, Const)
	struct FVector                                     PrePivot;                                                 // 0x00A8(0x000C) (Edit, Const)
	struct FRenderCommandFence                         DetachFence;                                              // 0x00B4(0x0004) (Const, Native)
	float                                              CustomTimeDilation;                                       // 0x00B8(0x0004)
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x00BC(0x0001) (Edit, Const, Net)
	TEnumAsByte<ENetRole>                              RemoteRole;                                               // 0x00BD(0x0001) (Net)
	TEnumAsByte<ENetRole>                              Role;                                                     // 0x00BE(0x0001) (Net)
	TEnumAsByte<ECollisionType>                        CollisionType;                                            // 0x00BF(0x0001) (Edit, Const, Transient)
	TEnumAsByte<ECollisionType>                        ReplicatedCollisionType;                                  // 0x00C0(0x0001) (Net, Transient)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x00C1(0x0001) (Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x00C4(0x0008) (Const, Net)
	class AActor*                                      Base;                                                     // 0x00CC(0x0008) (Edit, Const, Net)
	TArray<struct FTimerData>                          Timers;                                                   // 0x00D4(0x0010) (Const, NeedCtorLink)
	unsigned long                                      bStatic : 1;                                              // 0x00E4(0x0004) (Const)
	unsigned long                                      bHidden : 1;                                              // 0x00E4(0x0004) (Edit, Const, Net)
	unsigned long                                      bNoDelete : 1;                                            // 0x00E4(0x0004) (Const)
	unsigned long                                      bDeleteMe : 1;                                            // 0x00E4(0x0004) (Const)
	unsigned long                                      bTicked : 1;                                              // 0x00E4(0x0004) (Const, Transient)
	unsigned long                                      bOnlyOwnerSee : 1;                                        // 0x00E4(0x0004) (Const)
	unsigned long                                      bTickIsDisabled : 1;                                      // 0x00E4(0x0004) (Const)
	unsigned long                                      bServerTickIsDisabled : 1;                                // 0x00E4(0x0004) (Const)
	unsigned long                                      bWorldGeometry : 1;                                       // 0x00E4(0x0004)
	unsigned long                                      bIgnoreRigidBodyPawns : 1;                                // 0x00E4(0x0004)
	unsigned long                                      bOrientOnSlope : 1;                                       // 0x00E4(0x0004)
	unsigned long                                      bIgnoreEncroachers : 1;                                   // 0x00E4(0x0004) (Const)
	unsigned long                                      bPushedByEncroachers : 1;                                 // 0x00E4(0x0004)
	unsigned long                                      bDestroyedByInterpActor : 1;                              // 0x00E4(0x0004)
	unsigned long                                      bRouteBeginPlayEvenIfStatic : 1;                          // 0x00E4(0x0004) (Const)
	unsigned long                                      bIsMoving : 1;                                            // 0x00E4(0x0004) (Const)
	unsigned long                                      bAlwaysEncroachCheck : 1;                                 // 0x00E4(0x0004)
	unsigned long                                      bHasAlternateTargetLocation : 1;                          // 0x00E4(0x0004)
	unsigned long                                      bCanStepUpOn : 1;                                         // 0x00E4(0x0004) (Edit)
	unsigned long                                      bNetTemporary : 1;                                        // 0x00E4(0x0004) (Const)
	unsigned long                                      bOnlyRelevantToOwner : 1;                                 // 0x00E4(0x0004) (Const)
	unsigned long                                      bNetDirty : 1;                                            // 0x00E4(0x0004) (Transient)
	unsigned long                                      bAlwaysRelevant : 1;                                      // 0x00E4(0x0004)
	unsigned long                                      bReplicateInstigator : 1;                                 // 0x00E4(0x0004)
	unsigned long                                      bReplicateMovement : 1;                                   // 0x00E4(0x0004)
	unsigned long                                      bSkipActorPropertyReplication : 1;                        // 0x00E4(0x0004)
	unsigned long                                      bUpdateSimulatedPosition : 1;                             // 0x00E4(0x0004) (Net)
	unsigned long                                      bTearOff : 1;                                             // 0x00E4(0x0004) (Net)
	unsigned long                                      bOnlyDirtyReplication : 1;                                // 0x00E4(0x0004)
	unsigned long                                      bAlwaysInformOfTimelapse : 1;                             // 0x00E4(0x0004) (Const)
	unsigned long                                      bNetTimelapse : 1;                                        // 0x00E4(0x0004) (Transient)
	unsigned long                                      bNetTimelapseInit : 1;                                    // 0x00E4(0x0004) (Transient)
	unsigned long                                      bNetTimelapsePost : 1;                                    // 0x00E8(0x0004) (Transient)
	unsigned long                                      bAllowFluidSurfaceInteraction : 1;                        // 0x00E8(0x0004) (Edit)
	unsigned long                                      bDemoRecording : 1;                                       // 0x00E8(0x0004) (Transient)
	unsigned long                                      bDemoOwner : 1;                                           // 0x00E8(0x0004)
	unsigned long                                      bForceDemoRelevant : 1;                                   // 0x00E8(0x0004)
	unsigned long                                      bNetInitialRotation : 1;                                  // 0x00E8(0x0004) (Const)
	unsigned long                                      bReplicateRigidBodyLocation : 1;                          // 0x00E8(0x0004)
	unsigned long                                      bKillDuringLevelTransition : 1;                           // 0x00E8(0x0004)
	unsigned long                                      bExchangedRoles : 1;                                      // 0x00E8(0x0004) (Const)
	unsigned long                                      bConsiderAllStaticMeshComponentsForStreaming : 1;         // 0x00E8(0x0004) (Edit)
	unsigned long                                      bDebug : 1;                                               // 0x00E8(0x0004) (Edit)
	unsigned long                                      bPostRenderIfNotVisible : 1;                              // 0x00E8(0x0004)
	unsigned long                                      s_bThrottleNetRelevancy : 1;                              // 0x00E8(0x0004)
	unsigned long                                      m_bHasThreadedWork : 1;                                   // 0x00E8(0x0004) (Const)
	unsigned long                                      bForceNetUpdate : 1;                                      // 0x00E8(0x0004) (Transient)
	unsigned long                                      bPendingNetUpdate : 1;                                    // 0x00E8(0x0004) (Const, Transient)
	unsigned long                                      bHardAttach : 1;                                          // 0x00E8(0x0004) (Edit, Const, Net)
	unsigned long                                      bIgnoreBaseRotation : 1;                                  // 0x00E8(0x0004) (Edit)
	unsigned long                                      bShadowParented : 1;                                      // 0x00E8(0x0004) (Edit)
	unsigned long                                      bSkipAttachedMoves : 1;                                   // 0x00E8(0x0004) (Edit)
	unsigned long                                      bCanBeAdheredTo : 1;                                      // 0x00E8(0x0004)
	unsigned long                                      bCanBeFrictionedTo : 1;                                   // 0x00E8(0x0004)
	unsigned long                                      bHurtEntry : 1;                                           // 0x00E8(0x0004)
	unsigned long                                      bGameRelevant : 1;                                        // 0x00E8(0x0004)
	unsigned long                                      bMovable : 1;                                             // 0x00E8(0x0004) (Const)
	unsigned long                                      bDestroyInPainVolume : 1;                                 // 0x00E8(0x0004)
	unsigned long                                      bCanBeDamaged : 1;                                        // 0x00E8(0x0004)
	unsigned long                                      bShouldBaseAtStartup : 1;                                 // 0x00E8(0x0004)
	unsigned long                                      bPendingDelete : 1;                                       // 0x00E8(0x0004)
	unsigned long                                      bCanTeleport : 1;                                         // 0x00E8(0x0004)
	unsigned long                                      bAlwaysTick : 1;                                          // 0x00E8(0x0004) (Const)
	unsigned long                                      bBlocksNavigation : 1;                                    // 0x00E8(0x0004) (Edit)
	unsigned long                                      BlockRigidBody : 1;                                       // 0x00EC(0x0004) (Edit, Const, Transient)
	unsigned long                                      bCollideWhenPlacing : 1;                                  // 0x00EC(0x0004)
	unsigned long                                      bCollideActors : 1;                                       // 0x00EC(0x0004) (Const, Net)
	unsigned long                                      bCollideWorld : 1;                                        // 0x00EC(0x0004) (Net)
	unsigned long                                      bCollideComplex : 1;                                      // 0x00EC(0x0004) (Edit)
	unsigned long                                      bBlockActors : 1;                                         // 0x00EC(0x0004) (Net)
	unsigned long                                      bProjTarget : 1;                                          // 0x00EC(0x0004) (Net)
	unsigned long                                      bBlocksTeleport : 1;                                      // 0x00EC(0x0004)
	unsigned long                                      bMoveIgnoresDestruction : 1;                              // 0x00EC(0x0004)
	unsigned long                                      bProjectileMoveSingleBlocking : 1;                        // 0x00EC(0x0004)
	unsigned long                                      bNoEncroachCheck : 1;                                     // 0x00EC(0x0004) (Edit)
	unsigned long                                      bCollideAsEncroacher : 1;                                 // 0x00EC(0x0004)
	unsigned long                                      bPhysRigidBodyOutOfWorldCheck : 1;                        // 0x00EC(0x0004) (Edit)
	unsigned long                                      bComponentOutsideWorld : 1;                               // 0x00EC(0x0004) (Const, Transient)
	unsigned long                                      bForceOctreeSNFilter : 1;                                 // 0x00EC(0x0004)
	unsigned long                                      bForceOctreeMNFilter : 1;                                 // 0x00EC(0x0004)
	unsigned long                                      bRigidBodyWasAwake : 1;                                   // 0x00EC(0x0004) (Const, Transient)
	unsigned long                                      bCallRigidBodyWakeEvents : 1;                             // 0x00EC(0x0004)
	unsigned long                                      bWhitelistCollisionWarning : 1;                           // 0x00EC(0x0004) (Edit, Const)
	unsigned long                                      bBounce : 1;                                              // 0x00EC(0x0004)
	unsigned long                                      bJustTeleported : 1;                                      // 0x00EC(0x0004) (Const)
	unsigned long                                      bSupportNetIrrelevant : 1;                                // 0x00EC(0x0004) (Edit)
	unsigned long                                      bClientSideOnly : 1;                                      // 0x00EC(0x0004) (Edit)
	unsigned long                                      bEnableMobileTouch : 1;                                   // 0x00EC(0x0004) (Edit)
	unsigned long                                      bNetInitial : 1;                                          // 0x00EC(0x0004) (Const)
	unsigned long                                      bNetOwner : 1;                                            // 0x00EC(0x0004) (Const, Net)
	unsigned long                                      bNetRelevant : 1;                                         // 0x00EC(0x0004) (Const, Net)
	unsigned long                                      bNetAcked : 1;                                            // 0x00EC(0x0004) (Const)
	unsigned long                                      bHiddenEd : 1;                                            // 0x00EC(0x0004) (Const)
	unsigned long                                      bEditable : 1;                                            // 0x00EC(0x0004) (Const)
	unsigned long                                      bHiddenEdGroup : 1;                                       // 0x00EC(0x0004) (Const, Deprecated)
	unsigned long                                      bHiddenEdLayer : 1;                                       // 0x00EC(0x0004) (Const)
	unsigned long                                      bHiddenEdCustom : 1;                                      // 0x00F0(0x0004) (Const)
	unsigned long                                      bHiddenEdTemporary : 1;                                   // 0x00F0(0x0004) (Transient)
	unsigned long                                      bHiddenEdLevel : 1;                                       // 0x00F0(0x0004) (Transient)
	unsigned long                                      bHiddenEdScene : 1;                                       // 0x00F0(0x0004) (Transient)
	unsigned long                                      bEdShouldSnap : 1;                                        // 0x00F0(0x0004) (Edit)
	unsigned long                                      bTempEditor : 1;                                          // 0x00F0(0x0004) (Const, Transient)
	unsigned long                                      bPathColliding : 1;                                       // 0x00F0(0x0004) (Edit)
	unsigned long                                      bPathTemp : 1;                                            // 0x00F0(0x0004) (Transient)
	unsigned long                                      bScriptInitialized : 1;                                   // 0x00F0(0x0004)
	unsigned long                                      bLockLocation : 1;                                        // 0x00F0(0x0004) (Edit)
	unsigned long                                      bForceAllowKismetModification : 1;                        // 0x00F0(0x0004) (Const)
	unsigned long                                      bReplicateBotRankId : 1;                                  // 0x00F0(0x0004)
	unsigned long                                      bNoTick : 1;                                              // 0x00F0(0x0004)
	unsigned long                                      bDebugEffectIsRelevant : 1;                               // 0x00F0(0x0004) (Edit)
	unsigned long                                      bUpdateHavokPos : 1;                                      // 0x00F0(0x0004)
	unsigned long                                      bHavokPosOnlyUseCollisionComponent : 1;                   // 0x00F0(0x0004)
	unsigned long                                      c_bJustStartedTimelapsePlayback : 1;                      // 0x00F0(0x0004)
	unsigned long                                      c_bJustEndedTimelapsePlayback : 1;                        // 0x00F0(0x0004)
	unsigned long                                      m_bCanBaseOn : 1;                                         // 0x00F0(0x0004) (Edit)
	unsigned long                                      m_bSupportsRelativeLocationBase : 1;                      // 0x00F0(0x0004) (Edit)
	unsigned long                                      m_bComplexOccluder : 1;                                   // 0x00F0(0x0004)
	unsigned long                                      m_bCanPlayFirstPersonAkEvent : 1;                         // 0x00F0(0x0004) (Const)
	int                                                SkelMeshCompTickTag;                                      // 0x00F4(0x0004) (Const, Transient)
	int                                                NetTag;                                                   // 0x00F8(0x0004) (Const, Transient)
	int                                                IndexInTickList;                                          // 0x00FC(0x0004) (Const, Transient)
	float                                              LastSlowRelevancyCheckTime;                               // 0x0100(0x0004) (Const, Transient)
	float                                              NetUpdateTime;                                            // 0x0104(0x0004) (Const)
	float                                              NetUpdateFrequency;                                       // 0x0108(0x0004)
	float                                              NetPriority;                                              // 0x010C(0x0004)
	float                                              LastNetUpdateTime;                                        // 0x0110(0x0004) (Const, Transient)
	float                                              TimeSinceLastTick;                                        // 0x0114(0x0004)
	class Pawn*                                        Instigator;                                               // 0x0118(0x0008) (Net)
	class WorldInfo*                                   WorldInfo;                                                // 0x0120(0x0008) (Const, Transient)
	float                                              LifeSpan;                                                 // 0x0128(0x0004)
	float                                              CreationTime;                                             // 0x012C(0x0004) (Const)
	float                                              LastRenderTime;                                           // 0x0130(0x0004) (Transient)
	struct FName                                       Tag;                                                      // 0x0134(0x0008) (Edit)
	struct FName                                       InitialState;                                             // 0x013C(0x0008)
	struct FName                                       Layer;                                                    // 0x0144(0x0008) (Edit)
	struct FName                                       Group;                                                    // 0x014C(0x0008) (Deprecated)
	struct FQWord                                      HiddenEditorViews;                                        // 0x0154(0x0008) (Transient)
	TArray<class AActor*>                              Touching;                                                 // 0x015C(0x0010) (Const, Transient, NeedCtorLink)
	TArray<class AActor*>                              Children;                                                 // 0x016C(0x0010) (Const, Transient, NeedCtorLink)
	float                                              LatentFloat;                                              // 0x017C(0x0004) (Const)
	class AnimNodeSequence*                            LatentSeqNode;                                            // 0x0180(0x0008) (Const)
	class PhysicsVolume*                               PhysicsVolume;                                            // 0x0188(0x0008) (Const, Transient)
	struct FVector                                     Velocity;                                                 // 0x0190(0x000C) (Net)
	struct FVector                                     Acceleration;                                             // 0x019C(0x000C)
	struct FVector                                     AngularVelocity;                                          // 0x01A8(0x000C) (Const, Transient)
	class SkeletalMeshComponent*                       BaseSkelComponent;                                        // 0x01B4(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BaseBoneName;                                             // 0x01BC(0x0008) (Edit)
	TArray<class AActor*>                              Attached;                                                 // 0x01C4(0x0010) (Const, NeedCtorLink)
	struct FVector                                     RelativeLocation;                                         // 0x01D4(0x000C) (Const, Net)
	struct FRotator                                    RelativeRotation;                                         // 0x01E0(0x000C) (Const, Net)
	class PrimitiveComponent*                          CollisionComponent;                                       // 0x01EC(0x0008) (Edit, ExportObject, EditConst, Component, EditInline)
	int                                                OverlapTag;                                               // 0x01F4(0x0004) (Native)
	struct FRotator                                    RotationRate;                                             // 0x01F8(0x000C) (Edit)
	class AActor*                                      PendingTouch;                                             // 0x0204(0x0008)
	struct FName                                       DatabaseFieldName;                                        // 0x020C(0x0008)
	class LocalMessage*                                MessageClass;                                             // 0x0214(0x0008)
	int                                                BotRankId;                                                // 0x021C(0x0004) (Net)
	TArray<class SequenceEvent*>                       SupportedEvents;                                          // 0x0220(0x0010) (Const, NeedCtorLink)
	TArray<class SequenceEvent*>                       GeneratedEvents;                                          // 0x0230(0x0010) (Const, NeedCtorLink)
	TArray<class SeqAct_Latent*>                       LatentActions;                                            // 0x0240(0x0010) (NeedCtorLink)
	int                                                LocationPackedKey;                                        // 0x0250(0x0004)
	struct FVector                                     LocationPrev;                                             // 0x0254(0x000C)
	float                                              m_fLastOcclusionCheckTime;                                // 0x0260(0x0004)
	float                                              m_fOcclusionCheckInterval;                                // 0x0264(0x0004) (Edit)
	float                                              m_fOcclusionNormalization;                                // 0x0268(0x0004) (Edit)
	float                                              m_fLastOcclusionCheckLocation;                            // 0x026C(0x0004)
	float                                              m_fOcclusionCheckDist;                                    // 0x0270(0x0004) (Edit)
	float                                              m_fOcclusionAmount;                                       // 0x0274(0x0004)
	float                                              m_fMaxDistForOcclusionPathfinding;                        // 0x0278(0x0004)
	float                                              m_fMaxDistForOcclusionCheck;                              // 0x027C(0x0004)
	unsigned char                                      UnknownData02[0x185B2D987D0];                             // 0x0280(0x185B2D987D0) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x185B2D98BD0
struct FSlotMoveRef
{
	unsigned char                                      UnknownData00[0x185B2D98BD0];                             // 0x0000(0x185B2D98BD0) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x185B2D9C710
struct FCoverSlot
{
	unsigned char                                      UnknownData00[0x185B2D9C710];                             // 0x0000(0x185B2D9C710) MISSED OFFSET
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x185B2D9D790
struct FCoverInfo
{
	unsigned char                                      UnknownData00[0x185B2D9D790];                             // 0x0000(0x185B2D9D790) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x185B2DA81D0
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x185B2DA81D0];                             // 0x0000(0x185B2DA81D0) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x185B2DA7810
struct FPaintedVertex
{
	unsigned char                                      UnknownData00[0x185B2DA7810];                             // 0x0000(0x185B2DA7810) MISSED OFFSET
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x185B2DA96D0
struct FCoverMeshes
{
	unsigned char                                      UnknownData00[0x185B2DA96D0];                             // 0x0000(0x185B2DA96D0) MISSED OFFSET
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x185B2DA8950
struct FCoverReplicationInfo
{
	unsigned char                                      UnknownData00[0x185B2DA8950];                             // 0x0000(0x185B2DA8950) MISSED OFFSET
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x185B2DA8B90
struct FManualCoverTypeInfo
{
	unsigned char                                      UnknownData00[0x185B2DA8B90];                             // 0x0000(0x185B2DA8B90) MISSED OFFSET
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x185B69C5710
struct FCullDistanceSizePair
{
	unsigned char                                      UnknownData00[0x185B69C5710];                             // 0x0000(0x185B69C5710) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x185B69C4390
struct FPresetGeneratedPoint
{
	unsigned char                                      UnknownData00[0x185B69C4390];                             // 0x0000(0x185B69C4390) MISSED OFFSET
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x185B69C3D90
struct FPlayerDataStoreGroup
{
	unsigned char                                      UnknownData00[0x185B69C3D90];                             // 0x0000(0x185B69C3D90) MISSED OFFSET
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x185B69C8590
struct FDecalReceiver
{
	unsigned char                                      UnknownData00[0x185B69C8590];                             // 0x0000(0x185B69C8590) MISSED OFFSET
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x185B69CB050
struct FActiveDecalInfo
{
	unsigned char                                      UnknownData00[0x185B69CB050];                             // 0x0000(0x185B69CB050) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x185B69CF850
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      UnknownData00[0x185B69CF850];                             // 0x0000(0x185B69CF850) MISSED OFFSET
};

// ScriptStruct Engine.Material.MaterialInput
// 0x185B69D3090
struct FMaterialInput
{
	unsigned char                                      UnknownData00[0x185B69D3090];                             // 0x0000(0x185B69D3090) MISSED OFFSET
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x185B69D5A90
struct FMaterialFunctionInfo
{
	unsigned char                                      UnknownData00[0x185B69D5A90];                             // 0x0000(0x185B69D5A90) MISSED OFFSET
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x185B69D2790
struct FColorMaterialInput
{
	unsigned char                                      UnknownData00[0x185B69D2790];                             // 0x0000(0x185B69D2790) MISSED OFFSET
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x185B69D4DD0
struct FScalarMaterialInput
{
	unsigned char                                      UnknownData00[0x185B69D4DD0];                             // 0x0000(0x185B69D4DD0) MISSED OFFSET
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x185B69D3ED0
struct FVectorMaterialInput
{
	unsigned char                                      UnknownData00[0x185B69D3ED0];                             // 0x0000(0x185B69D3ED0) MISSED OFFSET
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x185B69D44D0
struct FVector2MaterialInput
{
	unsigned char                                      UnknownData00[0x185B69D44D0];                             // 0x0000(0x185B69D44D0) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x185B69D8190
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B69D8190];                             // 0x0000(0x185B69D8190) MISSED OFFSET
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x185B69E8D50
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B69E8D50];                             // 0x0000(0x185B69E8D50) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x185B69EF110
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	unsigned char                                      UnknownData00[0x185B69EF110];                             // 0x0000(0x185B69EF110) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000
struct FParticleEventAttractorCollideData
{
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0000(0x024C) MISSED OFFSET
	class ParticleSystem*                              Template;                                                 // 0x024C(0x0008) (Edit, Const)
	class ParticleLightEnvironmentComponent*           LightEnvironmentClass;                                    // 0x0254(0x0008)
	class AActor*                                      LightEnvironmentSharedInstigator;                         // 0x025C(0x0008) (Transient)
	int                                                MaxLightEnvironmentPooledReuses;                          // 0x0264(0x0004) (Transient)
	TArray<struct FPointer>                            EmitterInstances;                                         // 0x0268(0x0010) (Const, Native, Transient)
	TArray<class StaticMeshComponent*>                 SMComponents;                                             // 0x0278(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<class MaterialInterface*>                   SMMaterialInterfaces;                                     // 0x0288(0x0010) (Const, Transient, DuplicateTransient, NeedCtorLink)
	TArray<class SkeletalMeshComponent*>               SkelMeshComponents;                                       // 0x0298(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<struct FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray;                                          // 0x02A8(0x0010) (Const, Native, Transient)
	unsigned long                                      bAutoActivate : 1;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bWasCompleted : 1;                                        // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bHasDurationElapsed : 1;                                  // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bSuppressSpawning : 1;                                    // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bWasDeactivated : 1;                                      // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bResetOnDetach : 1;                                       // 0x02B8(0x0004) (Edit)
	unsigned long                                      bUpdateOnDedicatedServer : 1;                             // 0x02B8(0x0004)
	unsigned long                                      bJustAttached : 1;                                        // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWasRecycledSinceLastTick : 1;                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWarmingUp : 1;                                           // 0x02B8(0x0004)
	unsigned long                                      bIsCachedInPool : 1;                                      // 0x02B8(0x0004)
	unsigned long                                      bOverrideLODMethod : 1;                                   // 0x02B8(0x0004) (Edit)
	unsigned long                                      bSkipUpdateDynamicDataDuringTick : 1;                     // 0x02B8(0x0004)
	unsigned long                                      bSkipBoundsUpdate : 1;                                    // 0x02B8(0x0004)
	unsigned long                                      bUpdateComponentInTick : 1;                               // 0x02B8(0x0004)
	unsigned long                                      bDeferredBeamUpdate : 1;                                  // 0x02B8(0x0004)
	unsigned long                                      bForcedInActive : 1;                                      // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsWarmingUp : 1;                                         // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsViewRelevanceDirty : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      bRecacheViewRelevance : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_EmitBasedOnAnimNotify : 1;                              // 0x02B8(0x0004)
	unsigned long                                      bLODUpdatePending : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bSkipSpawnCountCheck : 1;                                 // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_bRealTimeTicking : 1;                                   // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x02B8(0x0004) (Const)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x02BC(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     OldPosition;                                              // 0x02CC(0x000C)
	struct FVector                                     PartSysVelocity;                                          // 0x02D8(0x000C)
	float                                              WarmupTime;                                               // 0x02E4(0x0004)
	float                                              WarmupTickRate;                                           // 0x02E8(0x0004)
	int                                                LODLevel;                                                 // 0x02EC(0x0004) (Transient)
	float                                              SecondsBeforeInactive;                                    // 0x02F0(0x0004) (Edit)
	float                                              TimeSinceLastForceUpdateTransform;                        // 0x02F4(0x0004) (Transient)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x02F8(0x0004)
	float                                              AccumTickTime;                                            // 0x02FC(0x0004) (Transient)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x0300(0x0001) (Edit)
	TEnumAsByte<EParticleReplayState>                  ReplayState;                                              // 0x0301(0x0001) (Const, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	TArray<struct FMaterialViewRelevance>              CachedViewRelevanceFlags;                                 // 0x0304(0x0010) (Const, Transient, NeedCtorLink)
	float                                              m_ActiveRemainingTime;                                    // 0x0314(0x0004)
	struct FParticleChannelContainer                   m_ParticleChannels;                                       // 0x0318(0x0004) (Transient)
	TArray<class ParticleSystemReplay*>                ReplayClips;                                              // 0x031C(0x0010) (Edit, Const, NeedCtorLink, EditInline)
	int                                                ReplayClipIDNumber;                                       // 0x032C(0x0004) (Const, Transient)
	int                                                ReplayFrameIndex;                                         // 0x0330(0x0004) (Const, Transient)
	float                                              AccumLODDistanceCheckTime;                                // 0x0334(0x0004) (Transient)
	TArray<struct FParticleEventSpawnData>             SpawnEvents;                                              // 0x0338(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventDeathData>             DeathEvents;                                              // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventCollideData>           CollisionEvents;                                          // 0x0358(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventKismetData>            KismetEvents;                                             // 0x0368(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventAttractorCollideData>  AttractorCollisionEvents;                                 // 0x0378(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    ReleaseResourcesFence;                                    // 0x0388(0x0008) (Const, Native, Transient)
	float                                              CustomTimeDilation;                                       // 0x0390(0x0004) (Edit)
	float                                              EmitterDelay;                                             // 0x0394(0x0004) (Transient)
	float                                              FOV;                                                      // 0x0398(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x039C(0x000C) (Const)
	struct FScriptDelegate                             __OnSystemFinished__Delegate;                             // 0x03A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemDurationElapsed__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x185B69EE690
struct FParticleEventKismetData
{
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0000(0x024C) MISSED OFFSET
	class ParticleSystem*                              Template;                                                 // 0x024C(0x0008) (Edit, Const)
	class ParticleLightEnvironmentComponent*           LightEnvironmentClass;                                    // 0x0254(0x0008)
	class AActor*                                      LightEnvironmentSharedInstigator;                         // 0x025C(0x0008) (Transient)
	int                                                MaxLightEnvironmentPooledReuses;                          // 0x0264(0x0004) (Transient)
	TArray<struct FPointer>                            EmitterInstances;                                         // 0x0268(0x0010) (Const, Native, Transient)
	TArray<class StaticMeshComponent*>                 SMComponents;                                             // 0x0278(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<class MaterialInterface*>                   SMMaterialInterfaces;                                     // 0x0288(0x0010) (Const, Transient, DuplicateTransient, NeedCtorLink)
	TArray<class SkeletalMeshComponent*>               SkelMeshComponents;                                       // 0x0298(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<struct FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray;                                          // 0x02A8(0x0010) (Const, Native, Transient)
	unsigned long                                      bAutoActivate : 1;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bWasCompleted : 1;                                        // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bHasDurationElapsed : 1;                                  // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bSuppressSpawning : 1;                                    // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bWasDeactivated : 1;                                      // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bResetOnDetach : 1;                                       // 0x02B8(0x0004) (Edit)
	unsigned long                                      bUpdateOnDedicatedServer : 1;                             // 0x02B8(0x0004)
	unsigned long                                      bJustAttached : 1;                                        // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWasRecycledSinceLastTick : 1;                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWarmingUp : 1;                                           // 0x02B8(0x0004)
	unsigned long                                      bIsCachedInPool : 1;                                      // 0x02B8(0x0004)
	unsigned long                                      bOverrideLODMethod : 1;                                   // 0x02B8(0x0004) (Edit)
	unsigned long                                      bSkipUpdateDynamicDataDuringTick : 1;                     // 0x02B8(0x0004)
	unsigned long                                      bSkipBoundsUpdate : 1;                                    // 0x02B8(0x0004)
	unsigned long                                      bUpdateComponentInTick : 1;                               // 0x02B8(0x0004)
	unsigned long                                      bDeferredBeamUpdate : 1;                                  // 0x02B8(0x0004)
	unsigned long                                      bForcedInActive : 1;                                      // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsWarmingUp : 1;                                         // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsViewRelevanceDirty : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      bRecacheViewRelevance : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_EmitBasedOnAnimNotify : 1;                              // 0x02B8(0x0004)
	unsigned long                                      bLODUpdatePending : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bSkipSpawnCountCheck : 1;                                 // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_bRealTimeTicking : 1;                                   // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x02B8(0x0004) (Const)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x02BC(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     OldPosition;                                              // 0x02CC(0x000C)
	struct FVector                                     PartSysVelocity;                                          // 0x02D8(0x000C)
	float                                              WarmupTime;                                               // 0x02E4(0x0004)
	float                                              WarmupTickRate;                                           // 0x02E8(0x0004)
	int                                                LODLevel;                                                 // 0x02EC(0x0004) (Transient)
	float                                              SecondsBeforeInactive;                                    // 0x02F0(0x0004) (Edit)
	float                                              TimeSinceLastForceUpdateTransform;                        // 0x02F4(0x0004) (Transient)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x02F8(0x0004)
	float                                              AccumTickTime;                                            // 0x02FC(0x0004) (Transient)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x0300(0x0001) (Edit)
	TEnumAsByte<EParticleReplayState>                  ReplayState;                                              // 0x0301(0x0001) (Const, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	TArray<struct FMaterialViewRelevance>              CachedViewRelevanceFlags;                                 // 0x0304(0x0010) (Const, Transient, NeedCtorLink)
	float                                              m_ActiveRemainingTime;                                    // 0x0314(0x0004)
	struct FParticleChannelContainer                   m_ParticleChannels;                                       // 0x0318(0x0004) (Transient)
	TArray<class ParticleSystemReplay*>                ReplayClips;                                              // 0x031C(0x0010) (Edit, Const, NeedCtorLink, EditInline)
	int                                                ReplayClipIDNumber;                                       // 0x032C(0x0004) (Const, Transient)
	int                                                ReplayFrameIndex;                                         // 0x0330(0x0004) (Const, Transient)
	float                                              AccumLODDistanceCheckTime;                                // 0x0334(0x0004) (Transient)
	TArray<struct FParticleEventSpawnData>             SpawnEvents;                                              // 0x0338(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventDeathData>             DeathEvents;                                              // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventCollideData>           CollisionEvents;                                          // 0x0358(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventKismetData>            KismetEvents;                                             // 0x0368(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventAttractorCollideData>  AttractorCollisionEvents;                                 // 0x0378(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    ReleaseResourcesFence;                                    // 0x0388(0x0008) (Const, Native, Transient)
	float                                              CustomTimeDilation;                                       // 0x0390(0x0004) (Edit)
	float                                              EmitterDelay;                                             // 0x0394(0x0004) (Transient)
	float                                              FOV;                                                      // 0x0398(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x039C(0x000C) (Const)
	struct FScriptDelegate                             __OnSystemFinished__Delegate;                             // 0x03A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemDurationElapsed__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x185B69EE2C8];                             // 0x03C8(0x185B69EE2C8) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x185B69E7190
struct FParticleEventCollideData
{
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0000(0x024C) MISSED OFFSET
	class ParticleSystem*                              Template;                                                 // 0x024C(0x0008) (Edit, Const)
	class ParticleLightEnvironmentComponent*           LightEnvironmentClass;                                    // 0x0254(0x0008)
	class AActor*                                      LightEnvironmentSharedInstigator;                         // 0x025C(0x0008) (Transient)
	int                                                MaxLightEnvironmentPooledReuses;                          // 0x0264(0x0004) (Transient)
	TArray<struct FPointer>                            EmitterInstances;                                         // 0x0268(0x0010) (Const, Native, Transient)
	TArray<class StaticMeshComponent*>                 SMComponents;                                             // 0x0278(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<class MaterialInterface*>                   SMMaterialInterfaces;                                     // 0x0288(0x0010) (Const, Transient, DuplicateTransient, NeedCtorLink)
	TArray<class SkeletalMeshComponent*>               SkelMeshComponents;                                       // 0x0298(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<struct FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray;                                          // 0x02A8(0x0010) (Const, Native, Transient)
	unsigned long                                      bAutoActivate : 1;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bWasCompleted : 1;                                        // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bHasDurationElapsed : 1;                                  // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bSuppressSpawning : 1;                                    // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bWasDeactivated : 1;                                      // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bResetOnDetach : 1;                                       // 0x02B8(0x0004) (Edit)
	unsigned long                                      bUpdateOnDedicatedServer : 1;                             // 0x02B8(0x0004)
	unsigned long                                      bJustAttached : 1;                                        // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWasRecycledSinceLastTick : 1;                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWarmingUp : 1;                                           // 0x02B8(0x0004)
	unsigned long                                      bIsCachedInPool : 1;                                      // 0x02B8(0x0004)
	unsigned long                                      bOverrideLODMethod : 1;                                   // 0x02B8(0x0004) (Edit)
	unsigned long                                      bSkipUpdateDynamicDataDuringTick : 1;                     // 0x02B8(0x0004)
	unsigned long                                      bSkipBoundsUpdate : 1;                                    // 0x02B8(0x0004)
	unsigned long                                      bUpdateComponentInTick : 1;                               // 0x02B8(0x0004)
	unsigned long                                      bDeferredBeamUpdate : 1;                                  // 0x02B8(0x0004)
	unsigned long                                      bForcedInActive : 1;                                      // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsWarmingUp : 1;                                         // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsViewRelevanceDirty : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      bRecacheViewRelevance : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_EmitBasedOnAnimNotify : 1;                              // 0x02B8(0x0004)
	unsigned long                                      bLODUpdatePending : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bSkipSpawnCountCheck : 1;                                 // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_bRealTimeTicking : 1;                                   // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x02B8(0x0004) (Const)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x02BC(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     OldPosition;                                              // 0x02CC(0x000C)
	struct FVector                                     PartSysVelocity;                                          // 0x02D8(0x000C)
	float                                              WarmupTime;                                               // 0x02E4(0x0004)
	float                                              WarmupTickRate;                                           // 0x02E8(0x0004)
	int                                                LODLevel;                                                 // 0x02EC(0x0004) (Transient)
	float                                              SecondsBeforeInactive;                                    // 0x02F0(0x0004) (Edit)
	float                                              TimeSinceLastForceUpdateTransform;                        // 0x02F4(0x0004) (Transient)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x02F8(0x0004)
	float                                              AccumTickTime;                                            // 0x02FC(0x0004) (Transient)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x0300(0x0001) (Edit)
	TEnumAsByte<EParticleReplayState>                  ReplayState;                                              // 0x0301(0x0001) (Const, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	TArray<struct FMaterialViewRelevance>              CachedViewRelevanceFlags;                                 // 0x0304(0x0010) (Const, Transient, NeedCtorLink)
	float                                              m_ActiveRemainingTime;                                    // 0x0314(0x0004)
	struct FParticleChannelContainer                   m_ParticleChannels;                                       // 0x0318(0x0004) (Transient)
	TArray<class ParticleSystemReplay*>                ReplayClips;                                              // 0x031C(0x0010) (Edit, Const, NeedCtorLink, EditInline)
	int                                                ReplayClipIDNumber;                                       // 0x032C(0x0004) (Const, Transient)
	int                                                ReplayFrameIndex;                                         // 0x0330(0x0004) (Const, Transient)
	float                                              AccumLODDistanceCheckTime;                                // 0x0334(0x0004) (Transient)
	TArray<struct FParticleEventSpawnData>             SpawnEvents;                                              // 0x0338(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventDeathData>             DeathEvents;                                              // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventCollideData>           CollisionEvents;                                          // 0x0358(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventKismetData>            KismetEvents;                                             // 0x0368(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventAttractorCollideData>  AttractorCollisionEvents;                                 // 0x0378(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    ReleaseResourcesFence;                                    // 0x0388(0x0008) (Const, Native, Transient)
	float                                              CustomTimeDilation;                                       // 0x0390(0x0004) (Edit)
	float                                              EmitterDelay;                                             // 0x0394(0x0004) (Transient)
	float                                              FOV;                                                      // 0x0398(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x039C(0x000C) (Const)
	struct FScriptDelegate                             __OnSystemFinished__Delegate;                             // 0x03A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemDurationElapsed__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x185B69E6DC8];                             // 0x03C8(0x185B69E6DC8) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x185B69E9890
struct FParticleEventDeathData
{
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0000(0x024C) MISSED OFFSET
	class ParticleSystem*                              Template;                                                 // 0x024C(0x0008) (Edit, Const)
	class ParticleLightEnvironmentComponent*           LightEnvironmentClass;                                    // 0x0254(0x0008)
	class AActor*                                      LightEnvironmentSharedInstigator;                         // 0x025C(0x0008) (Transient)
	int                                                MaxLightEnvironmentPooledReuses;                          // 0x0264(0x0004) (Transient)
	TArray<struct FPointer>                            EmitterInstances;                                         // 0x0268(0x0010) (Const, Native, Transient)
	TArray<class StaticMeshComponent*>                 SMComponents;                                             // 0x0278(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<class MaterialInterface*>                   SMMaterialInterfaces;                                     // 0x0288(0x0010) (Const, Transient, DuplicateTransient, NeedCtorLink)
	TArray<class SkeletalMeshComponent*>               SkelMeshComponents;                                       // 0x0298(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<struct FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray;                                          // 0x02A8(0x0010) (Const, Native, Transient)
	unsigned long                                      bAutoActivate : 1;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bWasCompleted : 1;                                        // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bHasDurationElapsed : 1;                                  // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bSuppressSpawning : 1;                                    // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bWasDeactivated : 1;                                      // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bResetOnDetach : 1;                                       // 0x02B8(0x0004) (Edit)
	unsigned long                                      bUpdateOnDedicatedServer : 1;                             // 0x02B8(0x0004)
	unsigned long                                      bJustAttached : 1;                                        // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWasRecycledSinceLastTick : 1;                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWarmingUp : 1;                                           // 0x02B8(0x0004)
	unsigned long                                      bIsCachedInPool : 1;                                      // 0x02B8(0x0004)
	unsigned long                                      bOverrideLODMethod : 1;                                   // 0x02B8(0x0004) (Edit)
	unsigned long                                      bSkipUpdateDynamicDataDuringTick : 1;                     // 0x02B8(0x0004)
	unsigned long                                      bSkipBoundsUpdate : 1;                                    // 0x02B8(0x0004)
	unsigned long                                      bUpdateComponentInTick : 1;                               // 0x02B8(0x0004)
	unsigned long                                      bDeferredBeamUpdate : 1;                                  // 0x02B8(0x0004)
	unsigned long                                      bForcedInActive : 1;                                      // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsWarmingUp : 1;                                         // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsViewRelevanceDirty : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      bRecacheViewRelevance : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_EmitBasedOnAnimNotify : 1;                              // 0x02B8(0x0004)
	unsigned long                                      bLODUpdatePending : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bSkipSpawnCountCheck : 1;                                 // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_bRealTimeTicking : 1;                                   // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x02B8(0x0004) (Const)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x02BC(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     OldPosition;                                              // 0x02CC(0x000C)
	struct FVector                                     PartSysVelocity;                                          // 0x02D8(0x000C)
	float                                              WarmupTime;                                               // 0x02E4(0x0004)
	float                                              WarmupTickRate;                                           // 0x02E8(0x0004)
	int                                                LODLevel;                                                 // 0x02EC(0x0004) (Transient)
	float                                              SecondsBeforeInactive;                                    // 0x02F0(0x0004) (Edit)
	float                                              TimeSinceLastForceUpdateTransform;                        // 0x02F4(0x0004) (Transient)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x02F8(0x0004)
	float                                              AccumTickTime;                                            // 0x02FC(0x0004) (Transient)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x0300(0x0001) (Edit)
	TEnumAsByte<EParticleReplayState>                  ReplayState;                                              // 0x0301(0x0001) (Const, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	TArray<struct FMaterialViewRelevance>              CachedViewRelevanceFlags;                                 // 0x0304(0x0010) (Const, Transient, NeedCtorLink)
	float                                              m_ActiveRemainingTime;                                    // 0x0314(0x0004)
	struct FParticleChannelContainer                   m_ParticleChannels;                                       // 0x0318(0x0004) (Transient)
	TArray<class ParticleSystemReplay*>                ReplayClips;                                              // 0x031C(0x0010) (Edit, Const, NeedCtorLink, EditInline)
	int                                                ReplayClipIDNumber;                                       // 0x032C(0x0004) (Const, Transient)
	int                                                ReplayFrameIndex;                                         // 0x0330(0x0004) (Const, Transient)
	float                                              AccumLODDistanceCheckTime;                                // 0x0334(0x0004) (Transient)
	TArray<struct FParticleEventSpawnData>             SpawnEvents;                                              // 0x0338(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventDeathData>             DeathEvents;                                              // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventCollideData>           CollisionEvents;                                          // 0x0358(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventKismetData>            KismetEvents;                                             // 0x0368(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventAttractorCollideData>  AttractorCollisionEvents;                                 // 0x0378(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    ReleaseResourcesFence;                                    // 0x0388(0x0008) (Const, Native, Transient)
	float                                              CustomTimeDilation;                                       // 0x0390(0x0004) (Edit)
	float                                              EmitterDelay;                                             // 0x0394(0x0004) (Transient)
	float                                              FOV;                                                      // 0x0398(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x039C(0x000C) (Const)
	struct FScriptDelegate                             __OnSystemFinished__Delegate;                             // 0x03A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemDurationElapsed__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x185B69E94C8];                             // 0x03C8(0x185B69E94C8) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000
struct FParticleEventSpawnData
{
	unsigned char                                      UnknownData00[0x24C];                                     // 0x0000(0x024C) MISSED OFFSET
	class ParticleSystem*                              Template;                                                 // 0x024C(0x0008) (Edit, Const)
	class ParticleLightEnvironmentComponent*           LightEnvironmentClass;                                    // 0x0254(0x0008)
	class AActor*                                      LightEnvironmentSharedInstigator;                         // 0x025C(0x0008) (Transient)
	int                                                MaxLightEnvironmentPooledReuses;                          // 0x0264(0x0004) (Transient)
	TArray<struct FPointer>                            EmitterInstances;                                         // 0x0268(0x0010) (Const, Native, Transient)
	TArray<class StaticMeshComponent*>                 SMComponents;                                             // 0x0278(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<class MaterialInterface*>                   SMMaterialInterfaces;                                     // 0x0288(0x0010) (Const, Transient, DuplicateTransient, NeedCtorLink)
	TArray<class SkeletalMeshComponent*>               SkelMeshComponents;                                       // 0x0298(0x0010) (Const, ExportObject, Transient, Component, DuplicateTransient, NeedCtorLink, EditInline)
	TArray<struct FViewParticleEmitterInstanceMotionBlurInfo> ViewMBInfoArray;                                          // 0x02A8(0x0010) (Const, Native, Transient)
	unsigned long                                      bAutoActivate : 1;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bWasCompleted : 1;                                        // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bHasDurationElapsed : 1;                                  // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bSuppressSpawning : 1;                                    // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bWasDeactivated : 1;                                      // 0x02B8(0x0004) (Const, Transient)
	unsigned long                                      bResetOnDetach : 1;                                       // 0x02B8(0x0004) (Edit)
	unsigned long                                      bUpdateOnDedicatedServer : 1;                             // 0x02B8(0x0004)
	unsigned long                                      bJustAttached : 1;                                        // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWasRecycledSinceLastTick : 1;                            // 0x02B8(0x0004) (Transient)
	unsigned long                                      bWarmingUp : 1;                                           // 0x02B8(0x0004)
	unsigned long                                      bIsCachedInPool : 1;                                      // 0x02B8(0x0004)
	unsigned long                                      bOverrideLODMethod : 1;                                   // 0x02B8(0x0004) (Edit)
	unsigned long                                      bSkipUpdateDynamicDataDuringTick : 1;                     // 0x02B8(0x0004)
	unsigned long                                      bSkipBoundsUpdate : 1;                                    // 0x02B8(0x0004)
	unsigned long                                      bUpdateComponentInTick : 1;                               // 0x02B8(0x0004)
	unsigned long                                      bDeferredBeamUpdate : 1;                                  // 0x02B8(0x0004)
	unsigned long                                      bForcedInActive : 1;                                      // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsWarmingUp : 1;                                         // 0x02B8(0x0004) (Transient)
	unsigned long                                      bIsViewRelevanceDirty : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      bRecacheViewRelevance : 1;                                // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_EmitBasedOnAnimNotify : 1;                              // 0x02B8(0x0004)
	unsigned long                                      bLODUpdatePending : 1;                                    // 0x02B8(0x0004) (Transient)
	unsigned long                                      bSkipSpawnCountCheck : 1;                                 // 0x02B8(0x0004) (Transient)
	unsigned long                                      m_bRealTimeTicking : 1;                                   // 0x02B8(0x0004) (Transient)
	unsigned long                                      bHasSavedScale3D : 1;                                     // 0x02B8(0x0004) (Const)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x02BC(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     OldPosition;                                              // 0x02CC(0x000C)
	struct FVector                                     PartSysVelocity;                                          // 0x02D8(0x000C)
	float                                              WarmupTime;                                               // 0x02E4(0x0004)
	float                                              WarmupTickRate;                                           // 0x02E8(0x0004)
	int                                                LODLevel;                                                 // 0x02EC(0x0004) (Transient)
	float                                              SecondsBeforeInactive;                                    // 0x02F0(0x0004) (Edit)
	float                                              TimeSinceLastForceUpdateTransform;                        // 0x02F4(0x0004) (Transient)
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x02F8(0x0004)
	float                                              AccumTickTime;                                            // 0x02FC(0x0004) (Transient)
	TEnumAsByte<EParticleSystemLODMethod>              LODMethod;                                                // 0x0300(0x0001) (Edit)
	TEnumAsByte<EParticleReplayState>                  ReplayState;                                              // 0x0301(0x0001) (Const, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	TArray<struct FMaterialViewRelevance>              CachedViewRelevanceFlags;                                 // 0x0304(0x0010) (Const, Transient, NeedCtorLink)
	float                                              m_ActiveRemainingTime;                                    // 0x0314(0x0004)
	struct FParticleChannelContainer                   m_ParticleChannels;                                       // 0x0318(0x0004) (Transient)
	TArray<class ParticleSystemReplay*>                ReplayClips;                                              // 0x031C(0x0010) (Edit, Const, NeedCtorLink, EditInline)
	int                                                ReplayClipIDNumber;                                       // 0x032C(0x0004) (Const, Transient)
	int                                                ReplayFrameIndex;                                         // 0x0330(0x0004) (Const, Transient)
	float                                              AccumLODDistanceCheckTime;                                // 0x0334(0x0004) (Transient)
	TArray<struct FParticleEventSpawnData>             SpawnEvents;                                              // 0x0338(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventDeathData>             DeathEvents;                                              // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventCollideData>           CollisionEvents;                                          // 0x0358(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventKismetData>            KismetEvents;                                             // 0x0368(0x0010) (Transient, NeedCtorLink)
	TArray<struct FParticleEventAttractorCollideData>  AttractorCollisionEvents;                                 // 0x0378(0x0010) (Transient, NeedCtorLink)
	struct FPointer                                    ReleaseResourcesFence;                                    // 0x0388(0x0008) (Const, Native, Transient)
	float                                              CustomTimeDilation;                                       // 0x0390(0x0004) (Edit)
	float                                              EmitterDelay;                                             // 0x0394(0x0004) (Transient)
	float                                              FOV;                                                      // 0x0398(0x0004) (Const)
	struct FVector                                     SavedScale3D;                                             // 0x039C(0x000C) (Const)
	struct FScriptDelegate                             __OnSystemFinished__Delegate;                             // 0x03A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemDurationElapsed__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x185B69E9F50
struct FParticleEventData
{
	unsigned char                                      UnknownData00[0x185B69E9F50];                             // 0x0000(0x185B69E9F50) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{

};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x185B69EEF90
struct FParticleEmitterInstanceMotionBlurInfo
{
	unsigned char                                      UnknownData00[0x185B69EEF90];                             // 0x0000(0x185B69EEF90) MISSED OFFSET
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x185B69F27D0
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B69F27D0];                             // 0x0000(0x185B69F27D0) MISSED OFFSET
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x185B69F54D0
struct FEmitterBaseInfo
{
	unsigned char                                      UnknownData00[0x185B69F54D0];                             // 0x0000(0x185B69F54D0) MISSED OFFSET
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x185B65D4530
struct FStatColorMapping
{
	unsigned char                                      UnknownData00[0x185B65D4530];                             // 0x0000(0x185B65D4530) MISSED OFFSET
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x185B65D42F0
struct FDropNoteInfo
{
	unsigned char                                      UnknownData00[0x185B65D42F0];                             // 0x0000(0x185B65D42F0) MISSED OFFSET
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x185B65D2D30
struct FStatColorMapEntry
{
	unsigned char                                      UnknownData00[0x185B65D2D30];                             // 0x0000(0x185B65D2D30) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x185B65D5970
struct FPrimitiveMaterialRef
{
	unsigned char                                      UnknownData00[0x185B65D5970];                             // 0x0000(0x185B65D5970) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x185B65D7CB0
struct FPostProcessMaterialRef
{
	unsigned char                                      UnknownData00[0x185B65D7CB0];                             // 0x0000(0x185B65D7CB0) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x185B65D5370
struct FMaterialReferenceList
{
	unsigned char                                      UnknownData00[0x185B65D5370];                             // 0x0000(0x185B65D5370) MISSED OFFSET
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x185B65D7EF0
struct FVelocityObstacleStat
{
	unsigned char                                      UnknownData00[0x185B65D7EF0];                             // 0x0000(0x185B65D7EF0) MISSED OFFSET
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x185B65DACB0
struct FFacebookFriend
{
	unsigned char                                      UnknownData00[0x185B65DACB0];                             // 0x0000(0x185B65DACB0) MISSED OFFSET
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x185B65E20F0
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B65E20F0];                             // 0x0000(0x185B65E20F0) MISSED OFFSET
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x185B65E2DB0
struct FFontImportOptionsData
{
	unsigned char                                      UnknownData00[0x185B65E2DB0];                             // 0x0000(0x185B65E2DB0) MISSED OFFSET
};

// ScriptStruct Engine.Font.FontCharacter
// 0x185B65E4D30
struct FFontCharacter
{
	unsigned char                                      UnknownData00[0x185B65E4D30];                             // 0x0000(0x185B65E4D30) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackManager.ForceFeedbackPlayingInfo
// 0x185B65E7EB0
struct FForceFeedbackPlayingInfo
{
	unsigned char                                      UnknownData00[0x185B65E7EB0];                             // 0x0000(0x185B65E7EB0) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x185B65E8F30
struct FWaveformSample
{
	unsigned char                                      UnknownData00[0x185B65E8F30];                             // 0x0000(0x185B65E8F30) MISSED OFFSET
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x185B65EA1F0
struct FFragmentGroup
{
	unsigned char                                      UnknownData00[0x185B65EA1F0];                             // 0x0000(0x185B65EA1F0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x185B65F59B0
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	unsigned char                                      UnknownData00[0x185B65F59B0];                             // 0x0000(0x185B65F59B0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x185B65EF8F0
struct FHostMigrationState
{
	unsigned char                                      UnknownData00[0x185B65EF8F0];                             // 0x0000(0x185B65EF8F0) MISSED OFFSET
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x185B65EDAF0
struct FMusicTrackStruct
{
	unsigned char                                      UnknownData00[0x185B65EDAF0];                             // 0x0000(0x185B65EDAF0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x185B65F4FF0
struct FPhysXVerticalProperties
{
	unsigned char                                      UnknownData00[0x185B65F4FF0];                             // 0x0000(0x185B65F4FF0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x185B65F0DF0
struct FWorldFractureSettings
{
	unsigned char                                      UnknownData00[0x185B65F0DF0];                             // 0x0000(0x185B65F0DF0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x185B65F5CB0
struct FNavMeshPathConstraintCacheDatum
{
	unsigned char                                      UnknownData00[0x185B65F5CB0];                             // 0x0000(0x185B65F5CB0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x185B65F41B0
struct FLightmassWorldInfoSettings
{
	unsigned char                                      UnknownData00[0x185B65F41B0];                             // 0x0000(0x185B65F41B0) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x185B65F3430
struct FScreenMessageString
{
	unsigned char                                      UnknownData00[0x185B65F3430];                             // 0x0000(0x185B65F3430) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x185B65F3F70
struct FPhysXEmitterVerticalProperties
{
	unsigned char                                      UnknownData00[0x185B65F3F70];                             // 0x0000(0x185B65F3F70) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x185B65F5470
struct FApexModuleDestructibleSettings
{
	unsigned char                                      UnknownData00[0x185B65F5470];                             // 0x0000(0x185B65F5470) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x185B65F4930
struct FPhysXSceneProperties
{
	unsigned char                                      UnknownData00[0x185B65F4930];                             // 0x0000(0x185B65F4930) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x185B65F4B70
struct FPhysXSimulationProperties
{
	unsigned char                                      UnknownData00[0x185B65F4B70];                             // 0x0000(0x185B65F4B70) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x185B65F6070
struct FCompartmentRunList
{
	unsigned char                                      UnknownData00[0x185B65F6070];                             // 0x0000(0x185B65F6070) MISSED OFFSET
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x185B65F73F0
struct FNetViewer
{
	unsigned char                                      UnknownData00[0x185B65F73F0];                             // 0x0000(0x185B65F73F0) MISSED OFFSET
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x185B65FC370
struct FDeferredPartToSpawn
{
	unsigned char                                      UnknownData00[0x185B65FC370];                             // 0x0000(0x185B65FC370) MISSED OFFSET
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x185B65FC4F0
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B65FC4F0];                             // 0x0000(0x185B65FC4F0) MISSED OFFSET
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x185B6607530
struct FLevelStreamingStatus
{
	unsigned char                                      UnknownData00[0x185B6607530];                             // 0x0000(0x185B6607530) MISSED OFFSET
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x185B6607D70
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      UnknownData00[0x185B6607D70];                             // 0x0000(0x185B6607D70) MISSED OFFSET
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x185B6607470
struct FNamedNetDriver
{
	unsigned char                                      UnknownData00[0x185B6607470];                             // 0x0000(0x185B6607470) MISSED OFFSET
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x185B6606CF0
struct FAnimTag
{
	unsigned char                                      UnknownData00[0x185B6606CF0];                             // 0x0000(0x185B6606CF0) MISSED OFFSET
};

// ScriptStruct Engine.GameEngine.URL
// 0x185B66081F0
struct FURL
{
	unsigned char                                      UnknownData00[0x185B66081F0];                             // 0x0000(0x185B66081F0) MISSED OFFSET
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x185B660AFB0
struct FGameClassShortName
{
	unsigned char                                      UnknownData00[0x185B660AFB0];                             // 0x0000(0x185B660AFB0) MISSED OFFSET
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x185B660A170
struct FGameTypePrefix
{
	unsigned char                                      UnknownData00[0x185B660A170];                             // 0x0000(0x185B660A170) MISSED OFFSET
};

// ScriptStruct Engine.GamePadLightbarSubsystem.ColorDefinition
// 0x185B8F70450
struct FColorDefinition
{
	unsigned char                                      UnknownData00[0x185B8F70450];                             // 0x0000(0x185B8F70450) MISSED OFFSET
};

// ScriptStruct Engine.GamePadLightbarSubsystem.LerpToInstruction
// 0x185B8F6FFD0
struct FLerpToInstruction
{
	unsigned char                                      UnknownData00[0x185B8F6FFD0];                             // 0x0000(0x185B8F6FFD0) MISSED OFFSET
};

// ScriptStruct Engine.GamePadLightbarSubsystem.PulseInstruction
// 0x0000
struct FPulseInstruction
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	TEnumAsByte<ELightBarState>                        CurrentLightBarState;                                     // 0x0060(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                CurrentColor;                                             // 0x0064(0x0010)
	struct FLinearColor                                OriginalColor;                                            // 0x0074(0x0010)
	struct FLinearColor                                TargetColor;                                              // 0x0084(0x0010)
	float                                              LerpTimeRemaining;                                        // 0x0094(0x0004)
	float                                              TotalLerpTime;                                            // 0x0098(0x0004)
	struct FColor                                      DefaultColor;                                             // 0x009C(0x0004) (Edit, Const, Config)
	TArray<struct FColorDefinition>                    ColorDefinitions;                                         // 0x00A0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FLerpToInstruction>                  LerpToInstructions;                                       // 0x00B0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FSetAndLerpInstruction>              SetAndLerpInstructions;                                   // 0x00C0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FPulseInstruction>                   PulseInstructions;                                        // 0x00D0(0x0010) (Const, Config, NeedCtorLink, EditInline)
};

// ScriptStruct Engine.GamePadLightbarSubsystem.SetAndLerpInstruction
// 0x185B8F708D0
struct FSetAndLerpInstruction
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	TEnumAsByte<ELightBarState>                        CurrentLightBarState;                                     // 0x0060(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                CurrentColor;                                             // 0x0064(0x0010)
	struct FLinearColor                                OriginalColor;                                            // 0x0074(0x0010)
	struct FLinearColor                                TargetColor;                                              // 0x0084(0x0010)
	float                                              LerpTimeRemaining;                                        // 0x0094(0x0004)
	float                                              TotalLerpTime;                                            // 0x0098(0x0004)
	struct FColor                                      DefaultColor;                                             // 0x009C(0x0004) (Edit, Const, Config)
	TArray<struct FColorDefinition>                    ColorDefinitions;                                         // 0x00A0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FLerpToInstruction>                  LerpToInstructions;                                       // 0x00B0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FSetAndLerpInstruction>              SetAndLerpInstructions;                                   // 0x00C0(0x0010) (Edit, Const, Config, NeedCtorLink, EditInline)
	TArray<struct FPulseInstruction>                   PulseInstructions;                                        // 0x00D0(0x0010) (Const, Config, NeedCtorLink, EditInline)
	unsigned char                                      UnknownData02[0x185B8F707F0];                             // 0x00E0(0x185B8F707F0) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x185B8F73990
struct FPlayerInformation
{
	unsigned char                                      UnknownData00[0x185B8F73990];                             // 0x0000(0x185B8F73990) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x185B8F73210
struct FTeamInformation
{
	unsigned char                                      UnknownData00[0x185B8F73210];                             // 0x0000(0x185B8F73210) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x185B8F73ED0
struct FGameplayEventMetaData
{
	unsigned char                                      UnknownData00[0x185B8F73ED0];                             // 0x0000(0x185B8F73ED0) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x185B8F73B10
struct FWeaponClassEventData
{
	unsigned char                                      UnknownData00[0x185B8F73B10];                             // 0x0000(0x185B8F73B10) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x185B8F73BD0
struct FDamageClassEventData
{
	unsigned char                                      UnknownData00[0x185B8F73BD0];                             // 0x0000(0x185B8F73BD0) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x185B8F73C90
struct FProjectileClassEventData
{
	unsigned char                                      UnknownData00[0x185B8F73C90];                             // 0x0000(0x185B8F73C90) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x185B8F747D0
struct FPawnClassEventData
{
	unsigned char                                      UnknownData00[0x185B8F747D0];                             // 0x0000(0x185B8F747D0) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x185B8F75010
struct FGameStatGroup
{
	unsigned char                                      UnknownData00[0x185B8F75010];                             // 0x0000(0x185B8F75010) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x185B8F741D0
struct FGameplayEventsHeader
{
	unsigned char                                      UnknownData00[0x185B8F741D0];                             // 0x0000(0x185B8F741D0) MISSED OFFSET
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x185B8F74D10
struct FGameSessionInformation
{
	unsigned char                                      UnknownData00[0x185B8F74D10];                             // 0x0000(0x185B8F74D10) MISSED OFFSET
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x185B8F87E50
struct FTitleSafeZoneArea
{
	unsigned char                                      UnknownData00[0x185B8F87E50];                             // 0x0000(0x185B8F87E50) MISSED OFFSET
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x185B8F89050
struct FSplitscreenData
{
	unsigned char                                      UnknownData00[0x185B8F89050];                             // 0x0000(0x185B8F89050) MISSED OFFSET
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x185B8F82090
struct FDebugDisplayProperty
{
	unsigned char                                      UnknownData00[0x185B8F82090];                             // 0x0000(0x185B8F82090) MISSED OFFSET
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x185B8F88D50
struct FPerPlayerSplitscreenData
{
	unsigned char                                      UnknownData00[0x185B8F88D50];                             // 0x0000(0x185B8F88D50) MISSED OFFSET
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000
struct FExportShowFlags_Mirror
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
	struct FPointer                                    VfTable_FExec;                                            // 0x0068(0x0008) (Const, Native, NoExport)
	struct FPointer                                    Viewport;                                                 // 0x0070(0x0008) (Const)
	struct FPointer                                    ViewportFrame;                                            // 0x0078(0x0008) (Const)
	TArray<class Interaction*>                         GlobalInteractions;                                       // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	class UIInteraction*                               UIControllerClass;                                        // 0x0090(0x0008)
	class UIInteraction*                               UIController;                                             // 0x0098(0x0008)
	class Console*                                     ViewportConsole;                                          // 0x00A0(0x0008)
	struct FExportShowFlags_Mirror                     ShowFlags;                                                // 0x00A8(0x0010) (Const)
	struct FString                                     LoadingMessage;                                           // 0x00B8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SavingMessage;                                            // 0x00C8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConnectingMessage;                                        // 0x00D8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PausedMessage;                                            // 0x00E8(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PrecachingMessage;                                        // 0x00F8(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      bShowTitleSafeZone : 1;                                   // 0x0108(0x0004)
	unsigned long                                      bDisplayHardwareMouseCursor : 1;                          // 0x0108(0x0004) (Transient)
	unsigned long                                      bOverrideDiffuseAndSpecular : 1;                          // 0x0108(0x0004) (Transient)
	unsigned long                                      bIsPlayInEditorViewport : 1;                              // 0x0108(0x0004) (Transient)
	unsigned long                                      bShowSystemMouseCursor : 1;                               // 0x0108(0x0004) (Transient)
	unsigned long                                      bDisableWorldRendering : 1;                               // 0x0108(0x0004)
	unsigned long                                      bCapturedWorldRendering : 1;                              // 0x0108(0x0004)
	unsigned long                                      bDebugNoGFxUI : 1;                                        // 0x0108(0x0004) (Config)
	struct FTitleSafeZoneArea                          TitleSafeZone;                                            // 0x010C(0x0010)
	TArray<struct FSplitscreenData>                    SplitscreenInfo;                                          // 0x011C(0x0010) (NeedCtorLink)
	TEnumAsByte<ESplitScreenType>                      DesiredSplitscreenType;                                   // 0x012C(0x0001)
	TEnumAsByte<ESplitScreenType>                      ActiveSplitscreenType;                                    // 0x012D(0x0001)
	TEnumAsByte<ESplitScreenType>                      Default2PSplitType;                                       // 0x012E(0x0001) (Const)
	TEnumAsByte<ESplitScreenType>                      Default3PSplitType;                                       // 0x012F(0x0001) (Const)
	struct FString                                     ProgressMessage[0x2];                                     // 0x0130(0x0010) (NeedCtorLink)
	float                                              ProgressTimeOut;                                          // 0x0150(0x0004)
	float                                              ProgressFadeTime;                                         // 0x0154(0x0004)
	TArray<struct FDebugDisplayProperty>               DebugProperties;                                          // 0x0158(0x0010) (NeedCtorLink)
	struct FPointer                                    ScaleformInteraction;                                     // 0x0168(0x0008) (Const, Native)
	struct FPointer                                    PreviousFrameViewFamily;                                  // 0x0170(0x0008)
	struct FScriptDelegate                             __HandleInputKey__Delegate;                               // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __HandleInputAxis__Delegate;                              // 0x0188(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0188(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __HandleInputChar__Delegate;                              // 0x0198(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0198(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x185B8F8EE10
struct FShowFlags_Mirror
{
	unsigned char                                      UnknownData00[0x185B8F8EE10];                             // 0x0000(0x185B8F8EE10) MISSED OFFSET
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x185B8F90850
struct FPolySegmentSpan
{
	unsigned char                                      UnknownData00[0x185B8F90850];                             // 0x0000(0x185B8F90850) MISSED OFFSET
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x185B8F90550
struct FNavMeshPathParams
{
	unsigned char                                      UnknownData00[0x185B8F90550];                             // 0x0000(0x185B8F90550) MISSED OFFSET
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x185B8F92DD0
struct FPathStore
{
	unsigned char                                      UnknownData00[0x185B8F92DD0];                             // 0x0000(0x185B8F92DD0) MISSED OFFSET
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x185B8F90790
struct FEdgePointer
{
	unsigned char                                      UnknownData00[0x185B8F90790];                             // 0x0000(0x185B8F90790) MISSED OFFSET
};

// ScriptStruct Engine.HavokNavigationHandle.CachedPathItem
// 0x185B8F97210
struct FCachedPathItem
{
	unsigned char                                      UnknownData00[0x185B8F97210];                             // 0x0000(0x185B8F97210) MISSED OFFSET
};

// ScriptStruct Engine.HavokNavMeshActor.NavMeshLayerInfo
// 0x185B8F99D90
struct FNavMeshLayerInfo
{
	unsigned char                                      UnknownData00[0x185B8F99D90];                             // 0x0000(0x185B8F99D90) MISSED OFFSET
};

// ScriptStruct Engine.HavokNavMeshActor.UserEdgeData
// 0x185B8F9D750
struct FUserEdgeData
{
	unsigned char                                      UnknownData00[0x185B8F9D750];                             // 0x0000(0x185B8F9D750) MISSED OFFSET
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x185B8F9D450
struct FActorToLookAt
{
	unsigned char                                      UnknownData00[0x185B8F9D450];                             // 0x0000(0x185B8F9D450) MISSED OFFSET
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x185BC872DC0
struct FIniLocFileEntry
{
	unsigned char                                      UnknownData00[0x185BC872DC0];                             // 0x0000(0x185BC872DC0) MISSED OFFSET
};

// ScriptStruct Engine.Input.KeyBind
// 0x185BC879540
struct FKeyBind
{
	unsigned char                                      UnknownData00[0x185BC879540];                             // 0x0000(0x185BC879540) MISSED OFFSET
};

// ScriptStruct Engine.Input.TouchTracker
// 0x185BC877F80
struct FTouchTracker
{
	unsigned char                                      UnknownData00[0x185BC877F80];                             // 0x0000(0x185BC877F80) MISSED OFFSET
};

// ScriptStruct Engine.InstancedFoliageActor.InstancedMeshStreamGroup
// 0x185BC878700
struct FInstancedMeshStreamGroup
{
	unsigned char                                      UnknownData00[0x185BC878700];                             // 0x0000(0x185BC878700) MISSED OFFSET
};

// ScriptStruct Engine.InstancedFoliageActor.InstancedMeshStreamCookerHelper
// 0x185BC879240
struct FInstancedMeshStreamCookerHelper
{
	unsigned char                                      UnknownData00[0x185BC879240];                             // 0x0000(0x185BC879240) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x185BC87BB80
struct FInstancedStaticMeshInstanceData
{
	unsigned char                                      UnknownData00[0x185BC87BB80];                             // 0x0000(0x185BC87BB80) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x185BC87E580
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x185BC87E580];                             // 0x0000(0x185BC87E580) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshActor.VertexColorPhysicalMaterialMapping
// 0x185BC87EAC0
struct FVertexColorPhysicalMaterialMapping
{
	unsigned char                                      UnknownData00[0x185BC87EAC0];                             // 0x0000(0x185BC87EAC0) MISSED OFFSET
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x185BC8808C0
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185BC8808C0];                             // 0x0000(0x185BC8808C0) MISSED OFFSET
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x185BC885180
struct FCurveEdTab
{
	unsigned char                                      UnknownData00[0x185BC885180];                             // 0x0000(0x185BC885180) MISSED OFFSET
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x185BC885900
struct FCurveEdEntry
{
	unsigned char                                      UnknownData00[0x185BC885900];                             // 0x0000(0x185BC885900) MISSED OFFSET
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x185BC8835C0
struct FAnimSetBakeAndPruneStatus
{
	unsigned char                                      UnknownData00[0x185BC8835C0];                             // 0x0000(0x185BC8835C0) MISSED OFFSET
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x185BC889080
struct FInterpEdSelKey
{
	unsigned char                                      UnknownData00[0x185BC889080];                             // 0x0000(0x185BC889080) MISSED OFFSET
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x185BBFAB1F0
struct FCameraPreviewInfo
{
	unsigned char                                      UnknownData00[0x185BBFAB1F0];                             // 0x0000(0x185BBFAB1F0) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x185BC8862C0
struct FSubTrackGroup
{
	unsigned char                                      UnknownData00[0x185BC8862C0];                             // 0x0000(0x185BC8862C0) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x185BBFABD50
struct FSupportedSubTrackInfo
{
	unsigned char                                      UnknownData00[0x185BBFABD50];                             // 0x0000(0x185BBFABD50) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x185BC88BA80
struct FAnimControlTrackKey
{
	unsigned char                                      UnknownData00[0x185BC88BA80];                             // 0x0000(0x185BC88BA80) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x185BC889D40
struct FBoolTrackKey
{
	unsigned char                                      UnknownData00[0x185BC889D40];                             // 0x0000(0x185BC889D40) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x185BC88B000
struct FDirectorTrackCut
{
	unsigned char                                      UnknownData00[0x185BC88B000];                             // 0x0000(0x185BC88B000) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x185BC88B3C0
struct FEventTrackKey
{
	unsigned char                                      UnknownData00[0x185BC88B3C0];                             // 0x0000(0x185BC88B3C0) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x185BC889C80
struct FFaceFXTrackKey
{
	unsigned char                                      UnknownData00[0x185BC889C80];                             // 0x0000(0x185BC889C80) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x185BC889980
struct FFaceFXSoundCueKey
{
	unsigned char                                      UnknownData00[0x185BC889980];                             // 0x0000(0x185BC889980) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x185BC88A100
struct FHeadTrackingKey
{
	unsigned char                                      UnknownData00[0x185BC88A100];                             // 0x0000(0x185BC88A100) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x185BC88EE40
struct FFloatMaterialParamMICData
{
	unsigned char                                      UnknownData00[0x185BC88EE40];                             // 0x0000(0x185BC88EE40) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x185BC88E780
struct FToggleTrackKey
{
	unsigned char                                      UnknownData00[0x185BC88E780];                             // 0x0000(0x185BC88E780) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x185BC88ED80
struct FVectorMaterialParamMICData
{
	unsigned char                                      UnknownData00[0x185BC88ED80];                             // 0x0000(0x185BC88ED80) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x185BC891A80
struct FVisibilityTrackKey
{
	unsigned char                                      UnknownData00[0x185BC891A80];                             // 0x0000(0x185BC891A80) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x185BC890AC0
struct FInterpLookupTrack
{
	unsigned char                                      UnknownData00[0x185BC890AC0];                             // 0x0000(0x185BC890AC0) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x185BC891540
struct FInterpLookupPoint
{
	unsigned char                                      UnknownData00[0x185BC891540];                             // 0x0000(0x185BC891540) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackNotify.NotifyTrackKey
// 0x185BC890100
struct FNotifyTrackKey
{
	unsigned char                                      UnknownData00[0x185BC890100];                             // 0x0000(0x185BC890100) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x185BC890C40
struct FParticleReplayTrackKey
{
	unsigned char                                      UnknownData00[0x185BC890C40];                             // 0x0000(0x185BC890C40) MISSED OFFSET
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x185BC88FC80
struct FSoundTrackKey
{
	unsigned char                                      UnknownData00[0x185BC88FC80];                             // 0x0000(0x185BC88FC80) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x185BC8A0840
struct FLandscapeLayerStruct
{
	unsigned char                                      UnknownData00[0x185BC8A0840];                             // 0x0000(0x185BC8A0840) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x185BC8A06C0
struct FLandscapeWeightmapUsage
{
	unsigned char                                      UnknownData00[0x185BC8A06C0];                             // 0x0000(0x185BC8A06C0) MISSED OFFSET
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x185BC8A1F80
struct FLandscapeLayerInfo
{
	unsigned char                                      UnknownData00[0x185BC8A1F80];                             // 0x0000(0x185BC8A1F80) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x185BC8A2340
struct FWeightmapLayerAllocationInfo
{
	unsigned char                                      UnknownData00[0x185BC8A2340];                             // 0x0000(0x185BC8A2340) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0000
struct FGizmoSelectData
{

};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0000
struct FLandscapeAddCollision
{

};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x185BC8A6240
struct FFontParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A6240];                             // 0x0000(0x185BC8A6240) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x185BC8A6180
struct FScalarParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A6180];                             // 0x0000(0x185BC8A6180) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x185BC8A6900
struct FTextureParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A6900];                             // 0x0000(0x185BC8A6900) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x185BC8A5700
struct FVectorParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A5700];                             // 0x0000(0x185BC8A5700) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.MICStateParams
// 0x185BC8A7200
struct FMICStateParams
{
	unsigned char                                      UnknownData00[0x185BC8A7200];                             // 0x0000(0x185BC8A7200) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.StateVectorParameterValue
// 0x185BC8A7800
struct FStateVectorParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A7800];                             // 0x0000(0x185BC8A7800) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceConstant.StateScalarParameterValue
// 0x185BC8A7F80
struct FStateScalarParameterValue
{
	unsigned char                                      UnknownData00[0x185BC8A7F80];                             // 0x0000(0x185BC8A7F80) MISSED OFFSET
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x185BC8A8700
struct FLensFlareElement
{
	unsigned char                                      UnknownData00[0x185BC8A8700];                             // 0x0000(0x185BC8A8700) MISSED OFFSET
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x185BC8A9F00
struct FLensFlareElementCurvePair
{
	unsigned char                                      UnknownData00[0x185BC8A9F00];                             // 0x0000(0x185BC8A9F00) MISSED OFFSET
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x185BC8AC0C0
struct FLensFlareElementMaterials
{
	unsigned char                                      UnknownData00[0x185BC8AC0C0];                             // 0x0000(0x185BC8AC0C0) MISSED OFFSET
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{

};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x185BC8AD980
struct FLevelGridCellCoordinate
{
	unsigned char                                      UnknownData00[0x185BC8AD980];                             // 0x0000(0x185BC8AD980) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x185BC8AE880
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185BC8AE880];                             // 0x0000(0x185BC8AE880) MISSED OFFSET
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x185BC9F6EF0
struct FPostProcessSettingsOverride
{
	unsigned char                                      UnknownData00[0x185BC9F6EF0];                             // 0x0000(0x185BC9F6EF0) MISSED OFFSET
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x185BC9F5C30
struct FCurrentPostProcessVolumeInfo
{
	unsigned char                                      UnknownData00[0x185BC9F5C30];                             // 0x0000(0x185BC9F5C30) MISSED OFFSET
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x185BC9F48B0
struct FSynchronizedActorVisibilityHistory
{
	unsigned char                                      UnknownData00[0x185BC9F48B0];                             // 0x0000(0x185BC9F48B0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x185BC9F8AB0
struct FExpressionOutput
{
	unsigned char                                      UnknownData00[0x185BC9F8AB0];                             // 0x0000(0x185BC9F8AB0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x185BC9F81B0
struct FExpressionInput
{
	unsigned char                                      UnknownData00[0x185BC9F81B0];                             // 0x0000(0x185BC9F81B0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x185BC9FD7F0
struct FCustomInput
{
	unsigned char                                      UnknownData00[0x185BC9FD7F0];                             // 0x0000(0x185BC9FD7F0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x185BCA02CB0
struct FLayerBlendInput
{
	unsigned char                                      UnknownData00[0x185BCA02CB0];                             // 0x0000(0x185BCA02CB0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x185BCA01270
struct FFunctionExpressionInput
{
	unsigned char                                      UnknownData00[0x185BCA01270];                             // 0x0000(0x185BCA01270) MISSED OFFSET
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x185BCA00370
struct FFunctionExpressionOutput
{
	unsigned char                                      UnknownData00[0x185BCA00370];                             // 0x0000(0x185BCA00370) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x185BCA080B0
struct FParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA080B0];                             // 0x0000(0x185BCA080B0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x185BCA076F0
struct FFontParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA076F0];                             // 0x0000(0x185BCA076F0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x185BCA08170
struct FScalarParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA08170];                             // 0x0000(0x185BCA08170) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x185BCA085F0
struct FTextureParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA085F0];                             // 0x0000(0x185BCA085F0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x185BCA077B0
struct FVectorParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA077B0];                             // 0x0000(0x185BCA077B0) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x185BCA065B0
struct FLinearColorParameterValueOverTime
{
	unsigned char                                      UnknownData00[0x185BCA065B0];                             // 0x0000(0x185BCA065B0) MISSED OFFSET
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x185BCA0AB70
struct FPurchaseInfo
{
	unsigned char                                      UnknownData00[0x185BCA0AB70];                             // 0x0000(0x185BCA0AB70) MISSED OFFSET
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x185BCA0DC30
struct FMorphNodeConn
{
	unsigned char                                      UnknownData00[0x185BCA0DC30];                             // 0x0000(0x185BCA0DC30) MISSED OFFSET
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x185BCA0EE30
struct FBoneAngleMorph
{
	unsigned char                                      UnknownData00[0x185BCA0EE30];                             // 0x0000(0x185BCA0EE30) MISSED OFFSET
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x185BCA13030
struct FBiasedGoalActor
{
	unsigned char                                      UnknownData00[0x185BCA13030];                             // 0x0000(0x185BCA13030) MISSED OFFSET
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x185BCA1A170
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185BCA1A170];                             // 0x0000(0x185BCA1A170) MISSED OFFSET
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x185B9D5C920
struct FMMStats_Timer
{
	unsigned char                                      UnknownData00[0x185B9D5C920];                             // 0x0000(0x185B9D5C920) MISSED OFFSET
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x185B9D764E0
struct FOnlineProfileSetting
{
	unsigned char                                      UnknownData00[0x185B9D764E0];                             // 0x0000(0x185B9D764E0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x185B9D7ECA0
struct FRecentParty
{
	unsigned char                                      UnknownData00[0x185B9D7ECA0];                             // 0x0000(0x185B9D7ECA0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x185B9D7C4E0
struct FCurrentPlayerMet
{
	unsigned char                                      UnknownData00[0x185B9D7C4E0];                             // 0x0000(0x185B9D7C4E0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineStats.OnlineStatsRow
// 0x185B9D7F2A0
struct FOnlineStatsRow
{
	unsigned char                                      UnknownData00[0x185B9D7F2A0];                             // 0x0000(0x185B9D7F2A0) MISSED OFFSET
};

// ScriptStruct Engine.OnlineStats.ColumnMetaData
// 0x185B9D7F120
struct FColumnMetaData
{
	unsigned char                                      UnknownData00[0x185B9D7F120];                             // 0x0000(0x185B9D7F120) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x185B9D4B460
struct FParticleBurst
{
	unsigned char                                      UnknownData00[0x185B9D4B460];                             // 0x0000(0x185B9D4B460) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x185B9E80A60
struct FParticleCurvePair
{
	unsigned char                                      UnknownData00[0x185B9E80A60];                             // 0x0000(0x185B9E80A60) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x185B9E81960
struct FParticleRandomSeedInfo
{
	unsigned char                                      UnknownData00[0x185B9E81960];                             // 0x0000(0x185B9E81960) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x185B9E82320
struct FAttractLocationBoneSocketInfo
{
	unsigned char                                      UnknownData00[0x185B9E82320];                             // 0x0000(0x185B9E82320) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x185B9E842A0
struct FBeamModifierOptions
{
	unsigned char                                      UnknownData00[0x185B9E842A0];                             // 0x0000(0x185B9E842A0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x185B9E87F60
struct FParticleAttractorCollisionAction
{
	unsigned char                                      UnknownData00[0x185B9E87F60];                             // 0x0000(0x185B9E87F60) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x185B9E8B4A0
struct FParticleEvent_GenerateInfo
{
	unsigned char                                      UnknownData00[0x185B9E8B4A0];                             // 0x0000(0x185B9E8B4A0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x185B9E8A1E0
struct FLocationBoneSocketInfo
{
	unsigned char                                      UnknownData00[0x185B9E8A1E0];                             // 0x0000(0x185B9E8A1E0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x185B9E8F0A0
struct FOrbitOptions
{
	unsigned char                                      UnknownData00[0x185B9E8F0A0];                             // 0x0000(0x185B9E8F0A0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x185B9E8F760
struct FEmitterDynamicParameter
{
	unsigned char                                      UnknownData00[0x185B9E8F760];                             // 0x0000(0x185B9E8F760) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x185B9E994E0
struct FBeamTargetData
{
	unsigned char                                      UnknownData00[0x185B9E994E0];                             // 0x0000(0x185B9E994E0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x185B9E97AA0
struct FPhysXEmitterVerticalLodProperties
{
	unsigned char                                      UnknownData00[0x185B9E97AA0];                             // 0x0000(0x185B9E97AA0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x185B9EA1E20
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x185B9EA1E20];                             // 0x0000(0x185B9EA1E20) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x185B9EA0DA0
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x185B9EA0DA0];                             // 0x0000(0x185B9EA0DA0) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x185B9EA3FE0
struct FPBRuleLink
{
	unsigned char                                      UnknownData00[0x185B9EA3FE0];                             // 0x0000(0x185B9EA3FE0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x185B9EA4A60
struct FPBParamSwatch
{
	unsigned char                                      UnknownData00[0x185B9EA4A60];                             // 0x0000(0x185B9EA4A60) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x185B9EA4B20
struct FPBVariationInfo
{
	unsigned char                                      UnknownData00[0x185B9EA4B20];                             // 0x0000(0x185B9EA4B20) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x185B9EA40A0
struct FPBMaterialParam
{
	unsigned char                                      UnknownData00[0x185B9EA40A0];                             // 0x0000(0x185B9EA40A0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x185B9EA7EE0
struct FPBFracMeshCompInfo
{
	unsigned char                                      UnknownData00[0x185B9EA7EE0];                             // 0x0000(0x185B9EA7EE0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x185B9EA90E0
struct FPBFaceUVInfo
{
	unsigned char                                      UnknownData00[0x185B9EA90E0];                             // 0x0000(0x185B9EA90E0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x185B9EA85A0
struct FPBMemUsageInfo
{
	unsigned char                                      UnknownData00[0x185B9EA85A0];                             // 0x0000(0x185B9EA85A0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x185B9EA7D60
struct FPBMeshCompInfo
{
	unsigned char                                      UnknownData00[0x185B9EA7D60];                             // 0x0000(0x185B9EA7D60) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x185B9EA82A0
struct FPBEdgeInfo
{
	unsigned char                                      UnknownData00[0x185B9EA82A0];                             // 0x0000(0x185B9EA82A0) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x185B9EA9260
struct FPBScopeProcessInfo
{
	unsigned char                                      UnknownData00[0x185B9EA9260];                             // 0x0000(0x185B9EA9260) MISSED OFFSET
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x185B9EA6CE0
struct FPBScope2D
{
	unsigned char                                      UnknownData00[0x185B9EA6CE0];                             // 0x0000(0x185B9EA6CE0) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x185B9EAA9A0
struct FRBCornerAngleInfo
{
	unsigned char                                      UnknownData00[0x185B9EAA9A0];                             // 0x0000(0x185B9EAA9A0) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x185B9EAB120
struct FRBEdgeAngleInfo
{
	unsigned char                                      UnknownData00[0x185B9EAB120];                             // 0x0000(0x185B9EAB120) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x185B9EAACA0
struct FBuildingMeshInfo
{
	unsigned char                                      UnknownData00[0x185B9EAACA0];                             // 0x0000(0x185B9EAACA0) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x185B9EAA3A0
struct FBuildingMatOverrides
{
	unsigned char                                      UnknownData00[0x185B9EAA3A0];                             // 0x0000(0x185B9EAA3A0) MISSED OFFSET
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x185B9EAE660
struct FRBSplitInfo
{
	unsigned char                                      UnknownData00[0x185B9EAE660];                             // 0x0000(0x185B9EAE660) MISSED OFFSET
};

// ScriptStruct Engine.PlayerReplicationInfo.PRIAudioDeviceInfo
// 0x185B9EBC5E0
struct FPRIAudioDeviceInfo
{
	unsigned char                                      UnknownData00[0x185B9EBC5E0];                             // 0x0000(0x185B9EBC5E0) MISSED OFFSET
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x185B4887520
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B4887520];                             // 0x0000(0x185B4887520) MISSED OFFSET
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x185B488EC60
struct FActivateOp
{
	unsigned char                                      UnknownData00[0x185B488EC60];                             // 0x0000(0x185B488EC60) MISSED OFFSET
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x185B488D460
struct FQueuedActivationInfo
{
	unsigned char                                      UnknownData00[0x185B488D460];                             // 0x0000(0x185B488D460) MISSED OFFSET
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x185B48975A0
struct FKCachedConvexData
{
	unsigned char                                      UnknownData00[0x185B48975A0];                             // 0x0000(0x185B48975A0) MISSED OFFSET
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x185B4894C60
struct FKCachedConvexDataElement
{
	unsigned char                                      UnknownData00[0x185B4894C60];                             // 0x0000(0x185B4894C60) MISSED OFFSET
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x185B489ABA0
struct FLinearDOFSetup
{
	unsigned char                                      UnknownData00[0x185B489ABA0];                             // 0x0000(0x185B489ABA0) MISSED OFFSET
};

// ScriptStruct Engine.SavedMove.SavedChargeState
// 0x185B48A29A0
struct FSavedChargeState
{
	unsigned char                                      UnknownData00[0x185B48A29A0];                             // 0x0000(0x185B48A29A0) MISSED OFFSET
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x185B48AF7E0
struct FCameraCutInfo
{
	unsigned char                                      UnknownData00[0x185B48AF7E0];                             // 0x0000(0x185B48AF7E0) MISSED OFFSET
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x185B48AE6A0
struct FSavedTransform
{
	unsigned char                                      UnknownData00[0x185B48AE6A0];                             // 0x0000(0x185B48AE6A0) MISSED OFFSET
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x185B48B13A0
struct FLevelStreamingNameCombo
{
	unsigned char                                      UnknownData00[0x185B48B13A0];                             // 0x0000(0x185B48B13A0) MISSED OFFSET
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x185B48B5A20
struct FSwitchRange
{
	unsigned char                                      UnknownData00[0x185B48B5A20];                             // 0x0000(0x185B48B5A20) MISSED OFFSET
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x185B48B8A20
struct FWorldAttractorData
{
	unsigned char                                      UnknownData00[0x185B48B8A20];                             // 0x0000(0x185B48B8A20) MISSED OFFSET
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x185B48BE5A0
struct FSwitchClassInfo
{
	unsigned char                                      UnknownData00[0x185B48BE5A0];                             // 0x0000(0x185B48BE5A0) MISSED OFFSET
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x185B48BEA20
struct FSwitchObjectCase
{
	unsigned char                                      UnknownData00[0x185B48BEA20];                             // 0x0000(0x185B48BEA20) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x185B62557C0
struct FSoftBodyTetraLink
{
	unsigned char                                      UnknownData00[0x185B62557C0];                             // 0x0000(0x185B62557C0) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x185B6256300
struct FSoftBodySpecialBoneInfo
{
	unsigned char                                      UnknownData00[0x185B6256300];                             // 0x0000(0x185B6256300) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x185B6255880
struct FClothSpecialBoneInfo
{
	unsigned char                                      UnknownData00[0x185B6255880];                             // 0x0000(0x185B6255880) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x185B6255AC0
struct FSkeletalMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x185B6255AC0];                             // 0x0000(0x185B6255AC0) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x185B6259C00
struct FSkeletalMeshLODInfo
{
	unsigned char                                      UnknownData00[0x185B6259C00];                             // 0x0000(0x185B6259C00) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.BoneToRemove
// 0x185B6259B40
struct FBoneToRemove
{
	unsigned char                                      UnknownData00[0x185B6259B40];                             // 0x0000(0x185B6259B40) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x185B62584C0
struct FTriangleSortSettings
{
	unsigned char                                      UnknownData00[0x185B62584C0];                             // 0x0000(0x185B62584C0) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x185B6259D80
struct FBoneMirrorExport
{
	unsigned char                                      UnknownData00[0x185B6259D80];                             // 0x0000(0x185B6259D80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x185B6259000
struct FBoneMirrorInfo
{
	unsigned char                                      UnknownData00[0x185B6259000];                             // 0x0000(0x185B6259000) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x185B6257200
struct FApexClothingAssetInfo
{
	unsigned char                                      UnknownData00[0x185B6257200];                             // 0x0000(0x185B6257200) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x185B6259240
struct FApexClothingLodInfo
{
	unsigned char                                      UnknownData00[0x185B6259240];                             // 0x0000(0x185B6259240) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x185B6261700
struct FSkelMeshActorControlTarget
{
	unsigned char                                      UnknownData00[0x185B6261700];                             // 0x0000(0x185B6261700) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x185B6260740
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B6260740];                             // 0x0000(0x185B6260740) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x185B6263F80
struct FSkelMaterialSetterDatum
{
	unsigned char                                      UnknownData00[0x185B6263F80];                             // 0x0000(0x185B6263F80) MISSED OFFSET
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x185B6268000
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x185B6268000];                             // 0x0000(0x185B6268000) MISSED OFFSET
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x185B6266980
struct FSoundClassProperties
{
	unsigned char                                      UnknownData00[0x185B6266980];                             // 0x0000(0x185B6266980) MISSED OFFSET
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x185B6268780
struct FSoundClassAdjuster
{
	unsigned char                                      UnknownData00[0x185B6268780];                             // 0x0000(0x185B6268780) MISSED OFFSET
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x185B6266500
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x185B6266500];                             // 0x0000(0x185B6266500) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x185B6269140
struct FDistanceDatum
{
	unsigned char                                      UnknownData00[0x185B6269140];                             // 0x0000(0x185B6269140) MISSED OFFSET
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x185B626E840
struct FRecogVocabulary
{
	unsigned char                                      UnknownData00[0x185B626E840];                             // 0x0000(0x185B626E840) MISSED OFFSET
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x185B626E780
struct FRecognisableWord
{
	unsigned char                                      UnknownData00[0x185B626E780];                             // 0x0000(0x185B626E780) MISSED OFFSET
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x185B626F140
struct FRecogUserData
{
	unsigned char                                      UnknownData00[0x185B626F140];                             // 0x0000(0x185B626F140) MISSED OFFSET
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x185B6273700
struct FSpeedTreeStaticLight
{
	unsigned char                                      UnknownData00[0x185B6273700];                             // 0x0000(0x185B6273700) MISSED OFFSET
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x185B6272EC0
struct FSplineConnection
{
	unsigned char                                      UnknownData00[0x185B6272EC0];                             // 0x0000(0x185B6272EC0) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x185B6277B40
struct FSplineMeshParams
{
	unsigned char                                      UnknownData00[0x185B6277B40];                             // 0x0000(0x185B6277B40) MISSED OFFSET
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x185B62773C0
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B62773C0];                             // 0x0000(0x185B62773C0) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x185B6275440
struct FSMMaterialSetterDatum
{
	unsigned char                                      UnknownData00[0x185B6275440];                             // 0x0000(0x185B6275440) MISSED OFFSET
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x185B62818C0
struct FVehicleState
{
	unsigned char                                      UnknownData00[0x185B62818C0];                             // 0x0000(0x185B62818C0) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{

};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{

};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x185B624B740
struct FTerrainLayer
{
	unsigned char                                      UnknownData00[0x185B624B740];                             // 0x0000(0x185B624B740) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x185B624DD80
struct FTerrainDecoLayer
{
	unsigned char                                      UnknownData00[0x185B624DD80];                             // 0x0000(0x185B624DD80) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{

};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x185B84CF5A0
struct FSelectedTerrainVertex
{
	unsigned char                                      UnknownData00[0x185B84CF5A0];                             // 0x0000(0x185B84CF5A0) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x185B624CDC0
struct FTerrainDecorationInstance
{
	unsigned char                                      UnknownData00[0x185B624CDC0];                             // 0x0000(0x185B624CDC0) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x185B624B8C0
struct FTerrainDecoration
{
	unsigned char                                      UnknownData00[0x185B624B8C0];                             // 0x0000(0x185B624B8C0) MISSED OFFSET
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{

};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x185B84D15E0
struct FCachedTerrainMaterialArray
{
	unsigned char                                      UnknownData00[0x185B84D15E0];                             // 0x0000(0x185B84D15E0) MISSED OFFSET
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x185B84CFBA0
struct FTerrainPatchBounds
{
	unsigned char                                      UnknownData00[0x185B84CFBA0];                             // 0x0000(0x185B84CFBA0) MISSED OFFSET
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x185B84D1EE0
struct FTerrainMaterialMask
{
	unsigned char                                      UnknownData00[0x185B84D1EE0];                             // 0x0000(0x185B84D1EE0) MISSED OFFSET
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x185B84D1FA0
struct FTerrainBVTree
{
	unsigned char                                      UnknownData00[0x185B84D1FA0];                             // 0x0000(0x185B84D1FA0) MISSED OFFSET
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x185B84D25A0
struct FTerrainFilteredMaterial
{
	unsigned char                                      UnknownData00[0x185B84D25A0];                             // 0x0000(0x185B84D25A0) MISSED OFFSET
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x185B84D0020
struct FFilterLimit
{
	unsigned char                                      UnknownData00[0x185B84D0020];                             // 0x0000(0x185B84D0020) MISSED OFFSET
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x185B84D2660
struct FSourceTexture2DRegion
{
	unsigned char                                      UnknownData00[0x185B84D2660];                             // 0x0000(0x185B84D2660) MISSED OFFSET
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x185B84D6920
struct FCheckpointRecord
{
	unsigned char                                      UnknownData00[0x185B84D6920];                             // 0x0000(0x185B84D6920) MISSED OFFSET
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x185B84D9F20
struct FLevelStreamingData
{
	unsigned char                                      UnknownData00[0x185B84D9F20];                             // 0x0000(0x185B84D9F20) MISSED OFFSET
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x185B84DEEA0
struct FPlayerStorageArrayProvider
{
	unsigned char                                      UnknownData00[0x185B84DEEA0];                             // 0x0000(0x185B84DEEA0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x185B84E4720
struct FDynamicResourceProviderDefinition
{
	unsigned char                                      UnknownData00[0x185B84E4720];                             // 0x0000(0x185B84E4720) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x185B84E5560
struct FGameResourceDataProvider
{
	unsigned char                                      UnknownData00[0x185B84E5560];                             // 0x0000(0x185B84E5560) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x185B84E9460
struct FUIDataStoreInputAlias
{
	unsigned char                                      UnknownData00[0x185B84E9460];                             // 0x0000(0x185B84E9460) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x185B84E7AE0
struct FUIInputKeyData
{
	unsigned char                                      UnknownData00[0x185B84E7AE0];                             // 0x0000(0x185B84E7AE0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x185AC99E400
struct FGameSearchCfg
{
	unsigned char                                      UnknownData00[0x185AC99E400];                             // 0x0000(0x185AC99E400) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x185AC9A0CA0
struct FGameSettingsCfg
{
	unsigned char                                      UnknownData00[0x185AC9A0CA0];                             // 0x0000(0x185AC9A0CA0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x185B84EFFA0
struct FRankMetaData
{
	unsigned char                                      UnknownData00[0x185B84EFFA0];                             // 0x0000(0x185B84EFFA0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x185B84EE1A0
struct FPlayerNickMetaData
{
	unsigned char                                      UnknownData00[0x185B84EE1A0];                             // 0x0000(0x185B84EE1A0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x185B84EEDA0
struct FRegistryKeyValuePair
{
	unsigned char                                      UnknownData00[0x185B84EEDA0];                             // 0x0000(0x185B84EEDA0) MISSED OFFSET
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x185B84EE9E0
struct FUIMenuInputMap
{
	unsigned char                                      UnknownData00[0x185B84EE9E0];                             // 0x0000(0x185B84EE9E0) MISSED OFFSET
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x185B84F2E20
struct FUIKeyRepeatData
{
	unsigned char                                      UnknownData00[0x185B84F2E20];                             // 0x0000(0x185B84F2E20) MISSED OFFSET
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x185B84F1020
struct FUIAxisEmulationData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
	struct FPointer                                    VfTable_FExec;                                            // 0x00B0(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FGlobalDataStoreClientManager;                    // 0x00B8(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x00C0(0x0008) (Const, Native, NoExport)
	class UIManager*                                   UIManager;                                                // 0x00C8(0x0008)
	class UIManager*                                   UIManagerClass;                                           // 0x00D0(0x0008)
	class GameUISceneClient*                           SceneClientClass;                                         // 0x00D8(0x0008)
	class GameUISceneClient*                           SceneClient;                                              // 0x00E0(0x0008) (Const, Transient)
	TArray<struct FName>                               SupportedDoubleClickKeys;                                 // 0x00E8(0x0010) (Transient, NeedCtorLink)
	class DataStoreClient*                             DataStoreManager;                                         // 0x00F8(0x0008) (Const, Transient)
	unsigned long                                      bProcessInput : 1;                                        // 0x0100(0x0004) (Const, Transient)
	float                                              UIJoystickDeadZone;                                       // 0x0104(0x0004) (Const, Config)
	float                                              UIAxisMultiplier;                                         // 0x0108(0x0004) (Const, Config)
	float                                              AxisRepeatDelay;                                          // 0x010C(0x0004) (Const, Config)
	float                                              MouseButtonRepeatDelay;                                   // 0x0110(0x0004) (Const, Config)
	float                                              DoubleClickTriggerSeconds;                                // 0x0114(0x0004) (Const, Config)
	int                                                DoubleClickPixelTolerance;                                // 0x0118(0x0004) (Const, Config)
	struct FUIKeyRepeatData                            MouseButtonRepeatInfo;                                    // 0x011C(0x0010) (Const, Transient)
	TArray<struct FUIAxisEmulationDefinition>          ConfiguredAxisEmulationDefinitions;                       // 0x012C(0x0010) (Const, Config, NeedCtorLink)
	unsigned char                                      UnknownData01[0x48];                                      // 0x013C(0x0048) UNKNOWN PROPERTY: MapProperty Engine.UIInteraction.AxisEmulationDefinitions
	struct FUIAxisEmulationData                        AxisInputEmulation[0x18];                                 // 0x0184(0x0014) (Transient)
	unsigned char                                      UnknownData02[0x185B84F0CBC];                             // 0x0364(0x185B84F0CBC) MISSED OFFSET
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x185B84F62A0
struct FSoundEventMapping
{
	unsigned char                                      UnknownData00[0x185B84F62A0];                             // 0x0000(0x185B84F62A0) MISSED OFFSET
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x185ABC2A000
struct FStaticMeshLODElement
{
	unsigned char                                      UnknownData00[0x185ABC2A000];                             // 0x0000(0x185ABC2A000) MISSED OFFSET
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x185ABC29940
struct FStaticMeshLODInfo
{
	unsigned char                                      UnknownData00[0x185ABC29940];                             // 0x0000(0x185ABC29940) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
