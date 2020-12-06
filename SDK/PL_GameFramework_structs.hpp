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

#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_NumInDragHistory                                   4
#define CONST_NumTouchDataEntries                                5

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameTypes.EShakeParam
enum class EShakeParam : uint8_t
{
	ESP_OffsetRandom               = 0,
	ESP_OffsetZero                 = 1,
	ESP_MAX                        = 2
};


// Enum GameFramework.GameCrowdAgent.EConformType
enum class EConformType : uint8_t
{
	CFM_NavMesh                    = 0,
	CFM_BSP                        = 1,
	CFM_World                      = 2,
	CFM_None                       = 3,
	CFM_MAX                        = 4
};


// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
enum class ECrowdBehaviorEvent : uint8_t
{
	CBE_None                       = 0,
	CBE_Spawn                      = 1,
	CBE_Random                     = 2,
	CBE_SeePlayer                  = 3,
	CBE_EncounterAgent             = 4,
	CBE_TakeDamage                 = 5,
	CBE_GroupWaiting               = 6,
	CBE_Uneasy                     = 7,
	CBE_Alert                      = 8,
	CBE_Panic                      = 9,
	CBE_MAX                        = 10
};


// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                       = 0,
	ERS_Random                     = 1,
	ERS_MAX                        = 2
};


// Enum GameFramework.GameStateObject.GameSessionType
enum class EGameSessionType : uint8_t
{
	GT_SessionInvalid              = 0,
	GT_SinglePlayer                = 1,
	GT_Coop                        = 2,
	GT_Multiplayer                 = 3,
	GT_MAX                         = 4
};


// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
	CVT_16to9_Full                 = 0,
	CVT_16to9_VertSplit            = 1,
	CVT_16to9_HorizSplit           = 2,
	CVT_4to3_Full                  = 3,
	CVT_4to3_HorizSplit            = 4,
	CVT_4to3_VertSplit             = 5,
	CVT_MAX                        = 6
};


// Enum GameFramework.MobileInputZone.EZoneType
enum class EZoneType : uint8_t
{
	ZoneType_Button                = 0,
	ZoneType_Joystick              = 1,
	ZoneType_Trackball             = 2,
	ZoneType_Slider                = 3,
	ZoneType_SubClassed            = 4,
	ZoneType_MAX                   = 5
};


// Enum GameFramework.MobileInputZone.EZoneState
enum class EZoneState : uint8_t
{
	ZoneState_Inactive             = 0,
	ZoneState_Activating           = 1,
	ZoneState_Active               = 2,
	ZoneState_Deactivating         = 3,
	ZoneState_MAX                  = 4
};


// Enum GameFramework.MobileInputZone.EZoneSlideType
enum class EZoneSlideType : uint8_t
{
	ZoneSlide_UpDown               = 0,
	ZoneSlide_LeftRight            = 1,
	ZoneSlide_MAX                  = 2
};


// Enum GameFramework.MobilePlayerInput.EUIOrientation
enum class EUIOrientation : uint8_t
{
	UI_Unknown                     = 0,
	UI_Portait                     = 1,
	UI_PortaitUpsideDown           = 2,
	UI_LandscapeRight              = 3,
	UI_LandscapeLeft               = 4,
	UI_MAX                         = 5
};


// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
enum class EMenuImageDrawStyle : uint8_t
{
	IDS_Normal                     = 0,
	IDS_Stretched                  = 1,
	IDS_Tile                       = 2,
	IDS_MAX                        = 3
};


// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
enum class ETextDrawMethod : uint8_t
{
	DRAW_CenterText                = 0,
	DRAW_WrapText                  = 1,
	DRAW_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.GameTypes.CrowdSpawnInfoItem
// 0x185BA808F60
struct FCrowdSpawnInfoItem
{
	unsigned char                                      UnknownData00[0x185BA808F60];                             // 0x0000(0x185BA808F60) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.AgentArchetypeInfo
// 0x185BA808BA0
struct FAgentArchetypeInfo
{
	unsigned char                                      UnknownData00[0x185BA808BA0];                             // 0x0000(0x185BA808BA0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.CrowdSpawnerPlayerInfo
// 0x185BA80B2A0
struct FCrowdSpawnerPlayerInfo
{
	unsigned char                                      UnknownData00[0x185BA80B2A0];                             // 0x0000(0x185BA80B2A0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.NearbyDynamicItem
// 0x185BA80DA60
struct FNearbyDynamicItem
{
	unsigned char                                      UnknownData00[0x185BA80DA60];                             // 0x0000(0x185BA80DA60) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.AICmdHistoryItem
// 0x185BC24A450
struct FAICmdHistoryItem
{
	unsigned char                                      UnknownData00[0x185BC24A450];                             // 0x0000(0x185BC24A450) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x185BA80BD20
struct FSpecialMoveStruct
{
	unsigned char                                      UnknownData00[0x185BA80BD20];                             // 0x0000(0x185BA80BD20) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x185BA80B4E0
struct FGameSpecialMoveInfo
{
	unsigned char                                      UnknownData00[0x185BA80B4E0];                             // 0x0000(0x185BA80B4E0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x185BA80B1E0
struct FTakeHitInfo
{
	unsigned char                                      UnknownData00[0x185BA80B1E0];                             // 0x0000(0x185BA80B1E0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x185BA80C020
struct FScreenShakeStruct
{
	unsigned char                                      UnknownData00[0x185BA80C020];                             // 0x0000(0x185BA80C020) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x185BA80CAA0
struct FShakeParams
{
	unsigned char                                      UnknownData00[0x185BA80CAA0];                             // 0x0000(0x185BA80CAA0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x185BA80C1A0
struct FScreenShakeAnimStruct
{
	unsigned char                                      UnknownData00[0x185BA80C1A0];                             // 0x0000(0x185BA80C1A0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameCrowdAgent.AvoidOtherSampleItem
// 0x185BA811BA0
struct FAvoidOtherSampleItem
{
	unsigned char                                      UnknownData00[0x185BA811BA0];                             // 0x0000(0x185BA811BA0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x185BA811660
struct FRecentInteraction
{
	unsigned char                                      UnknownData00[0x185BA811660];                             // 0x0000(0x185BA811660) MISSED OFFSET
};

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x185BA812F20
struct FBehaviorEntry
{
	unsigned char                                      UnknownData00[0x185BA812F20];                             // 0x0000(0x185BA812F20) MISSED OFFSET
};

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x185BA819160
struct FRequiredMobileInputConfig
{
	unsigned char                                      UnknownData00[0x185BA819160];                             // 0x0000(0x185BA819160) MISSED OFFSET
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x185BA82DC20
struct FGameCrowdAttachmentList
{
	unsigned char                                      UnknownData00[0x185BA82DC20];                             // 0x0000(0x185BA82DC20) MISSED OFFSET
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x185BA82CF60
struct FGameCrowdAttachmentInfo
{
	unsigned char                                      UnknownData00[0x185BA82CF60];                             // 0x0000(0x185BA82CF60) MISSED OFFSET
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x185B6243E30
struct FRecoilParams
{
	unsigned char                                      UnknownData00[0x185B6243E30];                             // 0x0000(0x185B6243E30) MISSED OFFSET
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x185B6244670
struct FRecoilDef
{
	unsigned char                                      UnknownData00[0x185B6244670];                             // 0x0000(0x185B6244670) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x185BADBCFB0
struct FTeamState
{
	unsigned char                                      UnknownData00[0x185BADBCFB0];                             // 0x0000(0x185BADBCFB0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x185BADBA970
struct FPlayerState
{
	unsigned char                                      UnknownData00[0x185BADBA970];                             // 0x0000(0x185BADBA970) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x185BB67D680
struct FAggregateEventMapping
{
	unsigned char                                      UnknownData00[0x185BB67D680];                             // 0x0000(0x185BB67D680) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x185BB67D8C0
struct FTeamEvents
{
	unsigned char                                      UnknownData00[0x185BB67D8C0];                             // 0x0000(0x185BB67D8C0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x185BB67E640
struct FPlayerEvents
{
	unsigned char                                      UnknownData00[0x185BB67E640];                             // 0x0000(0x185BB67E640) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x185BADBDC70
struct FGameEvents
{
	unsigned char                                      UnknownData00[0x185BADBDC70];                             // 0x0000(0x185BADBDC70) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0000
struct FDamageEvents
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
	class GameStateObject*                             GameState;                                                // 0x0088(0x0008)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x0090(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x00A0(0x0048) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00E8(0x0010) (NeedCtorLink)
	TArray<int>                                        AggregatesFound;                                          // 0x00F8(0x0010) (Const, NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x0108(0x0048)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x0150(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0160(0x0010) (Const, NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0170(0x0058) (Const, NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x01C8(0x0058) (Const, NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0220(0x0058) (Const, NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x0278(0x0058) (Const, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0000
struct FPawnEvents
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
	class GameStateObject*                             GameState;                                                // 0x0088(0x0008)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x0090(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x00A0(0x0048) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00E8(0x0010) (NeedCtorLink)
	TArray<int>                                        AggregatesFound;                                          // 0x00F8(0x0010) (Const, NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x0108(0x0048)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x0150(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0160(0x0010) (Const, NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0170(0x0058) (Const, NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x01C8(0x0058) (Const, NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0220(0x0058) (Const, NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x0278(0x0058) (Const, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0000
struct FProjectileEvents
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
	class GameStateObject*                             GameState;                                                // 0x0088(0x0008)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x0090(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x00A0(0x0048) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00E8(0x0010) (NeedCtorLink)
	TArray<int>                                        AggregatesFound;                                          // 0x00F8(0x0010) (Const, NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x0108(0x0048)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x0150(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0160(0x0010) (Const, NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0170(0x0058) (Const, NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x01C8(0x0058) (Const, NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0220(0x0058) (Const, NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x0278(0x0058) (Const, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0000
struct FWeaponEvents
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
	class GameStateObject*                             GameState;                                                // 0x0088(0x0008)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x0090(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x00A0(0x0048) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00E8(0x0010) (NeedCtorLink)
	TArray<int>                                        AggregatesFound;                                          // 0x00F8(0x0010) (Const, NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x0108(0x0048)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x0150(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0160(0x0010) (Const, NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0170(0x0058) (Const, NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x01C8(0x0058) (Const, NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0220(0x0058) (Const, NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x0278(0x0058) (Const, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.EventsBase
// 0x185BADBD7F0
struct FEventsBase
{
	unsigned char                                      UnknownData00[0x185BADBD7F0];                             // 0x0000(0x185BADBD7F0) MISSED OFFSET
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x185BADBD430
struct FGameEvent
{
	unsigned char                                      UnknownData00[0x185BADBD430];                             // 0x0000(0x185BADBD430) MISSED OFFSET
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x185BB681150
struct FPenetrationAvoidanceFeeler
{
	unsigned char                                      UnknownData00[0x185BB681150];                             // 0x0000(0x185BB681150) MISSED OFFSET
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x185BB680500
struct FCamFocusPointParams
{
	unsigned char                                      UnknownData00[0x185BB680500];                             // 0x0000(0x185BB680500) MISSED OFFSET
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x185BB2E7B70
struct FViewOffsetData
{
	unsigned char                                      UnknownData00[0x185BB2E7B70];                             // 0x0000(0x185BB2E7B70) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileInputZone.TextureUVs
// 0x185BB2ED6F0
struct FTextureUVs
{
	unsigned char                                      UnknownData00[0x185BB2ED6F0];                             // 0x0000(0x185BB2ED6F0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchData
// 0x185BB2ED030
struct FTouchData
{
	unsigned char                                      UnknownData00[0x185BB2ED030];                             // 0x0000(0x185BB2ED030) MISSED OFFSET
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputGroup
// 0x185BB2ADEC0
struct FMobileInputGroup
{
	unsigned char                                      UnknownData00[0x185BB2ADEC0];                             // 0x0000(0x185BB2ADEC0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputZoneClassMap
// 0x185BB2AF240
struct FMobileInputZoneClassMap
{
	unsigned char                                      UnknownData00[0x185BB2AF240];                             // 0x0000(0x185BB2AF240) MISSED OFFSET
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchDataEvent
// 0x185BB2B4280
struct FTouchDataEvent
{
	unsigned char                                      UnknownData00[0x185BB2B4280];                             // 0x0000(0x185BB2B4280) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuObject.UVCoords
// 0x185BB2B5E10
struct FUVCoords
{
	unsigned char                                      UnknownData00[0x185BB2B5E10];                             // 0x0000(0x185BB2B5E10) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuInventory.RenderElementInfo
// 0x185BB27CEC0
struct FRenderElementInfo
{
	unsigned char                                      UnknownData00[0x185BB27CEC0];                             // 0x0000(0x185BB27CEC0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuInventory.DragElementInfo
// 0x185BB27E0C0
struct FDragElementInfo
{
	unsigned char                                      UnknownData00[0x185BB27E0C0];                             // 0x0000(0x185BB27E0C0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuList.SelectedMenuItem
// 0x185BB1A35C0
struct FSelectedMenuItem
{
	unsigned char                                      UnknownData00[0x185BB1A35C0];                             // 0x0000(0x185BB1A35C0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuList.DragHistoryData
// 0x185BB1A5F00
struct FDragHistoryData
{
	unsigned char                                      UnknownData00[0x185BB1A5F00];                             // 0x0000(0x185BB1A5F00) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuList.MenuListDragInfo
// 0x185BB1A56C0
struct FMenuListDragInfo
{
	unsigned char                                      UnknownData00[0x185BB1A56C0];                             // 0x0000(0x185BB1A56C0) MISSED OFFSET
};

// ScriptStruct GameFramework.MobileMenuList.MenuListMovementInfo
// 0x185BB1A4E80
struct FMenuListMovementInfo
{
	unsigned char                                      UnknownData00[0x185BB1A4E80];                             // 0x0000(0x185BB1A4E80) MISSED OFFSET
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x185BAF4D1D0
struct FPropertyInfo
{
	unsigned char                                      UnknownData00[0x185BAF4D1D0];                             // 0x0000(0x185BAF4D1D0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
