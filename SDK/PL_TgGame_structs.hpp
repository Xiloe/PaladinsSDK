#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_GameFramework_classes.hpp"
#include "PL_Core_classes.hpp"
#include "PL_Engine_classes.hpp"
#include "PL_PlatformCommon_classes.hpp"
#include "PL_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_TGPID_POWER_PHYSICAL_ITEM                          1007
#define CONST_CHAMPION_ID_VIKTOR_BR                              2486
#define CONST_DODM_MODIFIER_SHOW_HEALTHBAR_OFFSCREEN             1048576
#define CONST_CONTEXT_NOTIFY_PING                                117584
#define CONST_CHAMPION_ID_FLAK                                   2404
#define CONST_TGPID_TICK_TIME                                    89
#define CONST_SERIS_EDM_CAMERA_EFFECT_FX_ID                      12149
#define CONST_TGPID_MINIMAP_LOS_IGNORED                          1032
#define CONST_ABYSSAL_ECHO_TASKFORCE                             3
#define CONST_CHAMPION_ID_TYRA                                   2314
#define CONST_BNT_SENSOR_TOWERS                                  10
#define CONST_TGPID_RESPAWN_TIME_REDUCTION_PERC                  1880
#define CONST_PALADINS_COLOR_RED                                 0xbe1e2d
#define CONST_BNT_ACTION_SELECT_COMBAT_THREAT                    1048594
#define CONST_CONTEXT_NOTIFY_DEFEND                              116960
#define CONST_PALADINS_COLOR_CYAN                                0x000fff
#define CONST_GRACE_TRACER_DURATION                              1.0f
#define CONST_CHAMPION_ID_MALDAMBA                               2303
#define CONST_TGPID_DAMAGE_DEALT_PERC_MAGICAL                    1865
#define CONST_AIE_PROPERTY                                       6
#define CONST_EFFECT_GROUP_SITUATIONAL_BOOST                     10915
#define CONST_BNT_ACTION_MOVE_TO_AVOIDABLE_PROJECTILE            1048712
#define CONST_STARTER_DECK_RUCKUS                                776
#define CONST_ABYSSAL_FERNANDO_BOT_ID                            2496
#define CONST_CHAMPION_ID_ATLAS                                  2512
#define CONST_TGSPAWNTELEPORTEREXIT_TARGETHEIGHT                 128
#define CONST_TGPID_EFFECTIVE_RADIUS                             343
#define CONST_TGEGC_REVEALED                                     15184
#define CONST_WARDERSFIELD_POST_DEPLOY_LOCKOUT_TIME              0.3f
#define CONST_BNT_CONDITION_IS_FORTRESS_VULNERABLE               408
#define CONST_PALADINS_COLOR_BLUE                                0x195766
#define CONST_TALENT_ID_BOMBKING_ACCELERANT                      16427
#define CONST_FX_SCALE_BY_DAMAGE                                 745
#define CONST_CHAMPION_ID_PVE_SKYE_POISON                        2336
#define CONST_ORACLE_MAX_STACKS_PER_TARGET                       4
#define CONST_TGPID_THREAT                                       420
#define CONST_TGPID_BLOCK_DAMAGE_PERC                            1770
#define CONST_GT_CapturePointObjective                           99
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_SPAWN             102
#define CONST_ABYSSAL_VIVIAN_BOT_ID                              2498
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_KILL_STREAK       107
#define CONST_CHAMPION_ID_PVE_BUCK_LEAP3                         2366
#define CONST_TIMER_INTERVAL                                     0
#define CONST_AIBOARD_BEHAVIOR_LANENPC                           0x10
#define CONST_BNT_CONDITION_TEAM_DEATH_COUNT                     434
#define CONST_CHAMPION_ID_PVE_TORVALD_ROOT2                      2373
#define CONST_TGPID_INHAND_ABSOLUTE_RANGE                        1685
#define CONST_TGPID_TGEFFECTMODIFYEFFECT_APPVALUE                1951
#define CONST_ABYSSAL_VIKTOR_BOT_ID                              2499
#define CONST_CHAMPION_ID_INARA                                  2348
#define CONST_TGPID_NEAR_DAMAGE_PERCENT                          1768
#define CONST_ABILITY_BOMBKING_GRUMPY                            13412
#define CONST_CHAMPION_ID_MAKOA                                  2288
#define CONST_TGPID_NUGGET_STEALER_FULL_HP                       1827
#define CONST_PALADINS_COLOR_DARK                                0x243745
#define CONST_CHAMPION_ID_WILLO                                  2393
#define CONST_VV_BOT_RANK_GUARDIAN                               10124
#define CONST_TGPID_KNOCKSTRAIGHT                                2036
#define CONST_GTP_DieToGrohkChainLightning                       1926
#define CONST_ABILITY_DROGOX_FIRESPIT                            13327
#define CONST_CHAMPION_ID_PIP                                    2056
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_TEAM_ROUND_STALEMATE 52
#define CONST_TGPID_MAX_TARGET_COUNT                             415
#define CONST_TGPID_PROTECTION_ON_FIRE                           1661
#define CONST_TgPlayerController_GAMEEVENT_WEAPON_DAMAGE_MELEE   151
#define CONST_ABYSSAL_YING_BOT_ID                                2497
#define CONST_GT_DieToGrover                                     136
#define CONST_SPRAY_WIDTH                                        128
#define CONST_BNT_CONDITION_SQUAD_HEALTH_PERCENT                 429
#define CONST_TGPID_MIN_AGENTS                                   401
#define CONST_TGPID_REPORT_DAMAGE_DEVICE_ID                      2144
#define CONST_INDEX_SEE_STEALTHED_ENEMY                          4
#define CONST_CHAMPION_ID_ORACLE                                 2372
#define CONST_TGACHIEVEMENT_JUMP_JUMP_ACTIVITY_ID                1933
#define CONST_PHYS_TWEEN_FLAG_COLLIDE_WITH_WORLD                 1
#define CONST_BNT_UTILITY_FILTER_INSIDE_ACTIVE_RALLY_POINT       268435463
#define CONST_BNT_ACTION_CLEAR_LAST_ATTACKER                     1048603
#define CONST_INDEX_DISPLAY_TARGET_BRACKET                       2
#define CONST_TGEGC_FROZEN                                       15017
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_01         10693
#define CONST_DEVICE_ASTRAL_MARK                                 17178
#define CONST_TFT_FRIENDLY                                       10132
#define CONST_GT_OnslaughtGameMode                               202
#define CONST_SERIS_EDM_WEP_SKIN_ID                              23853
#define CONST_TgPawn_GAMEEVENT_PLAYER_SPAWN                      102
#define CONST_CHAMPION_ID_TORVALD                                2322
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_02         10694
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_03         11080
#define CONST_TGPID_PHYSICAL_IMMUNITY                            1606
#define CONST_MENDING_SPIRITS_DEVICE_ID                          14822
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_04         11081
#define CONST_TGT_MAX_TIMERS                                     32
#define CONST_TgGame_Paladins_GAMEEVENT_PALADINS_PLAYER_KILL_NORMAL 2002
#define CONST_CHAMPION_ID_DARKLORD                               2420
#define CONST_CHAMPION_ID_BUCK                                   2147
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_KILL_STREAK 107
#define CONST_CHAMPION_ID_GROVER                                 2254
#define CONST_CARD_IT_FOLLOWS                                    19909
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_05         11082
#define CONST_MAX_VISIBLE_THROUGH_WALL_INSTIGATORS               12
#define CONST_BNT_CONDITION_IS_ACTIVE_CAPTURE_POINT              416
#define CONST_BNT_CONDITION_NUM_RALLY_POINTS                     324
#define CONST_CHAMPION_ID_IMANI                                  2509
#define CONST_GT_DieToFernando                                   135
#define CONST_CHAMPION_ID_MAEVE                                  2338
#define CONST_GT_SurvivalFogConverging                           125
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_06         11083
#define CONST_TGPAWN_ON_LANDED                                   15043
#define CONST_TGPID_DECOY_AGGRO                                  1944
#define CONST_TGPID_HOVER                                        1762
#define CONST_GTP_SiegeContestingPoint                           1938
#define CONST_BNT_CONDITION_COMBAT_IS_TARGETING_TYPE             279
#define CONST_CHAMPION_ID_RUCKUS                                 2149
#define CONST_DODM_SHOW_ALL_SILHOUETTE                           448
#define CONST_CHAMPION_ID_BARIK                                  2073
#define CONST_TG_AIM_FUDGE_FACTOR                                256.0f
#define CONST_BNT_CONDITION_NEARBY_GOD_COUNT                     275
#define CONST_TG_BACK_HIT_ANGLE                                  120.0
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PING_POLL     39
#define CONST_GT_ContestPayloadAttackers                         118
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_LOCATION_POLL    105
#define CONST_BNT_SENSOR_PURCHASE_SKILLS                         12
#define CONST_BOT_ID_BARIK_TURRET                                2151
#define CONST_OBJECTIVE_FRIENDLY_SPECIALFX                       2929
#define CONST_CHAMPION_ID_PVE_BARIK_TURRET1                      2326
#define CONST_CHAMPION_ID_DREDGE                                 2495
#define CONST_TGPID_INHAND_RELOAD_SPEED                          1688
#define CONST_AIBOARD_BEHAVIOR_MAPNPC                            0x02
#define CONST_ITEM_SKIN_HEAD_ANDROXUS_XBOX                       15134
#define CONST_BOT_ID_YING_ILLUSION                               2273
#define CONST_GTP_Abilities                                      1806
#define CONST_BNT_COMPOSITE_RANDOM                               3
#define CONST_TGPID_LIFT                                         2030
#define CONST_BOT_ID_IMANI_AVATAR                                2508
#define CONST_FORCED_3P_MAX_OFFSET                               300.0f
#define CONST_CHAMPION_ID_CASSIE                                 2092
#define CONST_LERP_FROM_CLIENT_POSITION_DURATION                 0.2
#define CONST_TGPID_SCALE_COLLISION_RADIUS                       1814
#define CONST_CHAMPION_ID_SHALIN                                 2307
#define CONST_TGPID_PROTECTION_BLEEDING                          1819
#define CONST_BNT_CONDITION_IS_TARGET_OF_TWR_OR_MTR              273
#define CONST_CHAMPION_ID_EVIE                                   2094
#define CONST_CHAMPION_ID_FERNANDO                               2071
#define CONST_BNT_ACTION_SELECT_LANE_MOVE_AS_COMBAT_TARGET       1048604
#define CONST_TDM_MEDIUM_MUSIC_TIME_THRESHOLD                    30
#define CONST_TG_ASSIST_TIMEOUT                                  5
#define CONST_FLAGBALL_RESPAWN_DURATION                          12
#define CONST_CHAMPION_ID_GROHK                                  2093
#define CONST_TGPID_KNOCKBACK_PLUS_GRAVITY                       1507
#define CONST_TGPID_HAS_HEALING_EFFECT_UI_SELF                   1959
#define CONST_TGPID_HP5_PERCENT                                  1565
#define CONST_TGEGT_EQUIP_MODE                                   283
#define CONST_CHAMPION_ID_SKYE                                   2057
#define CONST_CUE_ATTACKANY_PERIOD                               5.0
#define CONST_REFRESH_REUSE                                      1
#define CONST_BNT_CONDITION_TIMER                                300
#define CONST_EVIE_COMBO_DEVICE_ID_BLINK                         10315
#define CONST_GT_Tutorial_MoveForwardsBackwards                  165
#define CONST_CHAMPION_ID_VANGUARD                               2479
#define CONST_TgPawn_GAMEEVENT_PALADINS_PLAYER_DEATH             1002
#define CONST_CHAMPION_ID_ANDROXUS                               2205
#define CONST_CHAMPION_ID_KINESSA                                2249
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_TEAM_CREATED  50
#define CONST_TGPID_POWER_UTILITY_ITEM                           1485
#define CONST_CHAMPION_ID_PVE_FERNANDO_FB1                       2328
#define CONST_CHAMPION_ID_DEMON                                  2472
#define CONST_TG_CK_ULT_CHARGE_FIREMODE_ID                       30007
#define CONST_MAX_UNIQUE_PLAYER_IDS                              15
#define CONST_CHAMPION_ID_YING                                   2267
#define CONST_TgPlayerController_GAMEEVENT_PALADINS_PLAYER_KILL_ASSIST 2003
#define CONST_TGPID_STEALTH_IN_COMBAT                            1664
#define CONST_TGPID_PET_LIFESPAN                                 354
#define CONST_CHAMPION_ID_ASTRO                                  2431
#define CONST_BNT_CONDITION_DIFFICULTY_LEVEL                     311
#define CONST_CARD_PROPERTY_START                                1710
#define CONST_BNT_CONDITION_COMBAT_IS_HOSTILE                    269
#define CONST_TGPID_DAMAGE_DEALT_PERC_SHIELDS                    1860
#define CONST_TG_MESMERIZE_MIN_DURATION                          0.5f
#define CONST_CHAMPION_ID_DROGOZ                                 2277
#define CONST_TGPID_MIN_RANGE                                    48
#define CONST_TGPID_ARC_RANGE                                    1057
#define CONST_CHAMPION_ID_BOMBKING                               2281
#define CONST_COMPLETE_DECK_FERNANDO                             759
#define CONST_TG_CK_INHAND_DAMAGE_FIREMODE_ID                    30010
#define CONST_CHAMPION_ID_VIKTOR                                 2285
#define CONST_CHAMPION_ID_LEX                                    2362
#define CONST_TGPID_CUSTOM_VALUE_4                               1594
#define CONST_CHAMPION_ID_PRINCESS                               2417
#define CONST_TGPID_AMMO_REGEN_PER_SEC                           1854
#define CONST_TgPawn_GAMEEVENT_GAME_OPTION_URL                   7
#define CONST_NUM_SCORE_TYPES                                    23
#define CONST_TGPID_DEVICE_EFFECTIVE_RANGE                       153
#define CONST_TGPID_OVERTIME_RATE_MODIFIER                       317
#define CONST_CHAMPION_ID_OWL                                    2438
#define CONST_BNT_ACTION_FOLLOW_LANE                             1048602
#define CONST_BNT_CONDITION_DEVICE_IS_FIRING                     321
#define CONST_CHAMPION_ID_VORA                                   2536
#define CONST_TGPID_TUTORIAL_MAP                                 368
#define CONST_TGPID_CUSTOM_VALUE_3                               1050
#define CONST_CHAMPION_ID_LAZARUS                                2477
#define CONST_CHAMPION_ID_CHURCHILL                              2480
#define CONST_ABILITY_BUCK_NETSHOT                               12981
#define CONST_CHAMPION_ID_RIDER                                  2481
#define CONST_BNT_ACTION_SELECT_LANE_MINOTAUR                    1048589
#define CONST_CHAMPION_ID_FURIA                                  2491
#define CONST_GTP_DieToDrogozSalvo                               1924
#define CONST_BNT_CONDITION_DISTANCE_FROM_SPAWN                  282
#define CONST_HALF_BUCK                                          71.3
#define CONST_BNT_CONDITION_COMBAT_DAMAGEABLE                    261
#define CONST_TGPID_HEALTH_FLOOR                                 1838
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GAME_MAPNAME  8
#define CONST_CHAMPION_ID_KOGA                                   2493
#define CONST_CHAMPION_ID_CASPIAN                                2554
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_ROUND_ENDED   3
#define CONST_CHAMPION_ID_PVE_BARIK_TURRET2                      2337
#define CONST_BNT_ACTION_SELECT_COMBAT_LEASH                     1048596
#define CONST_SMITE_MIDPOINT_ROUTE_THRESHOLD                     176.0f
#define CONST_TGPID_DEVICE_MODE_COOLDOWN_TIME                    4
#define CONST_TgPawn_GAMEEVENT_GAMETHREAD_POLL                   41
#define CONST_CHAMPION_ID_PVE_FERNANDO_SHIELD                    2331
#define CONST_CHAMPION_ID_PVE_GROVER_HEALS                       2333
#define CONST_BNT_CONDITION_NEARBY_TARGET_TYPE_COUNT             277
#define CONST_CHAMPION_ID_PVE_MAKOA_ULT                          2324
#define CONST_TgPawn_GAMEEVENT_PLAYER_DEATH                      108
#define CONST_TDM_HIGH_MUSIC_SCORE_THRESHOLD                     5
#define CONST_TGPID_TIME_TO_CAPTURE                              288
#define CONST_TGPID_DEFENDER_RECAP_RATE                          296
#define CONST_GT_Tutorial_SelectItemTab                          178
#define CONST_TGEGC_DISARM                                       10423
#define CONST_TGDT_RECALL                                        15054
#define CONST_COMPLETE_DECK_PIP                                  761
#define CONST_CHAMPION_ID_PVE_MAKOA_HOOK                         2245
#define CONST_TGPID_MARKED_FOR_PRESENCE                          2028
#define CONST_BNT_CONDITION_TASKFORCE                            317
#define CONST_TgGame_Paladins_GAMEEVENT_PALADINS_PLAYER_KILL_SUICIDE 2001
#define CONST_TGPID_POST_LAND_DURATION                           1693
#define CONST_CHAMPION_ID_PVE_MAKOA_SPIN                         2243
#define CONST_BNT_ACTION_SELECT_COMBAT_JUNGLE                    1048614
#define CONST_BNT_SENSOR_GODS                                    8
#define CONST_TgObject_TG_EQP_POINT_MAX                          49
#define CONST_TGPID_WALL_KNOCKBACK_HIT                           1764
#define CONST_CHAMPION_ID_PVE_MAKOA_SHIELD                       2323
#define CONST_TgPawn_GAMEEVENT_TEAM_MATCH_WON                    4
#define CONST_TgPawn_GAMEEVENT_MAX_EVENTID                       0x0000FFFF
#define CONST_TG_ASSIST_TIMEOUT_OBJ                              10
#define CONST_GT_Tutorial_SuccessfulCapture                      194
#define CONST_CHAMPION_ID_PVE_PIP_HEALS                          2339
#define CONST_FIREMODE_ID_DISENGAGE                              23970
#define CONST_TGPID_ENERGY_COST                                  1013
#define CONST_CHAMPION_ID_PVE_VIKTOR_GRENADE1                    2354
#define CONST_SPRAY_MISSED_1P_FX_ID                              -1
#define CONST_BNT_CONDITION_PET_PHASE                            325
#define CONST_TGDT_ALTFIRE_CARD                                  15189
#define CONST_SPRAY_HIT_3P_FX_ID                                 7427
#define CONST_CHAMPION_ID_PVE_VIKTOR_GRENADE2                    2356
#define CONST_MESH_ID_AZAAN_RECTANGLE                            11836
#define CONST_TGPID_POWER_MAGICAL_ITEM                           1008
#define CONST_TGEGC_FEAR                                         10051
#define CONST_CHAMPION_ID_PVE_VIKTOR_GRENADE3                    2357
#define CONST_TGPID_OUT_OF_COMBAT                                1694
#define CONST_CONTEXT_NOTIFY_ENEMY                               117670
#define CONST_CHAMPION_ID_PVE_TORVALD_ROOT1                      2342
#define CONST_TG_DISTANCE_FADE_TIME                              1.0f
#define CONST_CHAMPION_ID_PVE_FERNANDO_FB2                       2330
#define CONST_TgGame_Paladins_GAMEEVENT_GENERIC_PARAM_LIST_START 300
#define CONST_CHAMPION_ID_PVE_FERNANDO_FB3                       2329
#define CONST_TgPlayerController_GAMEEVENT_TEAM_ROUND_STALEMATE  52
#define CONST_COMPLETE_DECK_GROVER                               796
#define CONST_GTP_Tutorial                                       1953
#define CONST_CHAMPION_ID_PVE_FERNANDO_FB4                       2367
#define CONST_CHAMPION_ID_PVE_BUCK_LEAP1                         2352
#define CONST_TGPT_COMBO                                         503
#define CONST_CHAMPION_ID_PVE_BUCK_LEAP2                         2351
#define CONST_TGPID_GP_MAX_RESPAWN_TIME                          1569
#define CONST_CHAMPION_ID_PVE_BUCK_NET1                          2349
#define CONST_CHAMPION_ID_PVE_BUCK_NET2                          2353
#define CONST_CHAMPION_ID_PVE_PIP_POLY1                          2361
#define CONST_TGEGC_REMOVE_EFFECT                                877
#define CONST_STARTER_DECK_BARIK                                 769
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_LOGIN  100
#define CONST_TGPID_PULLIN                                       1667
#define CONST_RAUM_LIFE_SHARD_ASM_ID                             10598
#define CONST_TgPlayerController_GAMEEVENT_TEAM_GAME_SCORE       51
#define CONST_STARTER_DECK_PIP                                   775
#define CONST_BNT_CONDITION_LANEPUSHER_IS_VISIBLE                422
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_KILL   104
#define CONST_STARTER_DECK_CASSIE                                770
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN                       1554
#define CONST_ORACLE_BEAM_FADE_END_DIST                          3000.0f
#define CONST_TGEGT_POST_HIT_DELAY                               10456
#define CONST_DODM_MODIFIER_ALWAYS_SHOW                          32768
#define CONST_TGPID_CAPTURE_ONLY_ONCE                            289
#define CONST_GT_SiegeContestingPoint                            161
#define CONST_DODM_SHOW_ENEMY_INDICATOR                          4
#define CONST_TERMINUS_NO_CHUNK_NO_GEO_MESH_ID                   10080
#define CONST_STARTER_DECK_EVIE                                  772
#define CONST_STARTER_DECK_FERNANDO                              771
#define CONST_TGPID_MARKED                                       1839
#define CONST_TgGame_Paladins_GAMEEVENT_PALADINS_PLAYER_DEATH    1002
#define CONST_TGEGT_HIT_AURA                                     10060
#define CONST_STARTER_DECK_GROHK                                 773
#define CONST_STARTER_DECK_BUCK                                  774
#define CONST_TG_COMBAT_DURATION                                 5.0
#define CONST_TG_CANCEL_SAFETY_PERIOD                            0.5f
#define CONST_GT_AutoPurchaseItems                               199
#define CONST_GT_DieToUltimate                                   156
#define CONST_TGEGT_WHILE_DEAD                                   16715
#define CONST_STARTER_DECK_SKYE                                  777
#define CONST_TGPID_NAME_SELECTION_LIST                          292
#define CONST_STARTER_DECK_ANDROXUS                              783
#define CONST_BNT_ACTION_LOOK_AT_CAPTURE_POINT                   1048707
#define CONST_COMPLETE_DECK_BARIK                                757
#define CONST_TGPID_FROZEN                                       1794
#define CONST_BNT_ACTION_LEASH_TO_SPAWN                          1048593
#define CONST_BNT_CONDITION_IS_ATTACKING_TASK_FORCE              442
#define CONST_COMPLETE_DECK_CASSIE                               758
#define CONST_TgPawn_GAMEEVENT_PLAYER_LOGIN                      100
#define CONST_TGTT_ATTACK_MAP_TELEPORT                           10657
#define CONST_COMPLETE_DECK_EVIE                                 760
#define CONST_COMPLETE_DECK_GROHK                                765
#define CONST_TGPID_EP5                                          1006
#define CONST_TGEGT_FINAL_BLOW                                   10575
#define CONST_BNT_CONDITION_COMBAT_HAS_EFFECT_CATEGORY           306
#define CONST_FORCED_3P_BASE_COLLISION_RADIUS                    32.0f
#define CONST_INDEX_SEE_DEPLOYABLES                              5
#define CONST_ABILITY_VIKTOR_FRAGGRENADE                         14149
#define CONST_COMPLETE_DECK_BUCK                                 764
#define CONST_CHAMPION_ID_TIBERIUS                               2529
#define CONST_COMPLETE_DECK_RUCKUS                               762
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_DEATH            108
#define CONST_TGPID_JUMP_HEIGHT_MODIFIER                         1978
#define CONST_TGPID_CC_IMMUNITY_SUPERIOR                         1894
#define CONST_TG_MOUNTED_CAMERA_CHECK_RADIUS_MULTIPLIER          3.25f
#define CONST_TGCM_SET                                           11042
#define CONST_TGTT_ATTACK_FORWARD_TELEPORT                       15034
#define CONST_BNT_ACTION_JUMP                                    1048627
#define CONST_COMPLETE_DECK_SKYE                                 763
#define CONST_TGPID_MESMERIZE                                    2019
#define CONST_BNT_CONDITION_NUM_GODS_NEAR_PROJECTILE             439
#define CONST_BNT_CONDITION_IS_IN_MINOTAUR_RADIUS                271
#define CONST_DODM_SHOW_ENEMY_PROJECTILE_RING                    1024
#define CONST_MAX_STATS_DEVICES                                  9
#define CONST_COMPLETE_DECK_ANDROXUS                             782
#define CONST_DODM_SHOW_OWNED_INDICATOR                          1
#define CONST_COMPLETE_DECK_KINESSA                              793
#define CONST_BNT_ACTION_UPDATE_TARGET_LAST_KNOWN_LOCATION       1048720
#define CONST_TGPID_FORCE_3P_VIEW                                1654
#define CONST_BNT_CONDITION_NUM_GODS_NEAR_DEPLOYABLE             438
#define CONST_LOCAL_SILHOUETTE_RED                               1.0f
#define CONST_MIN_FOV                                            80
#define CONST_LOCAL_SILHOUETTE_GREEN                             0.7f
#define CONST_LOCAL_SILHOUETTE_BLUE                              0.1875f
#define CONST_LOCAL_SILHOUETTE_ALPHA                             0.25f
#define CONST_TG_DISTANCE_CAP                                    100000.0f
#define CONST_TG_PHYSICALITY_PLAYERS_AND_DECOYS                  15047
#define CONST_TGEGT_STACKING                                     155
#define CONST_BNT_ACTION_USE_DEVICE                              1048577
#define CONST_FRIENDLY_SILHOUETTE_RED                            0.0f
#define CONST_FRIENDLY_SILHOUETTE_GREEN                          1.0f
#define CONST_CONTEXT_NOTIFY_HELP                                117672
#define CONST_TGPID_POWER_UTILITY_BOT                            1484
#define CONST_TG_CONTESTED                                       3
#define CONST_FRIENDLY_SILHOUETTE_BLUE                           1.0f
#define CONST_FRIENDLY_SILHOUETTE_ALPHA                          0.25f
#define CONST_ENEMY_SILHOUETTE_RED                               1.0f
#define CONST_BNT_CONDITION_WON_LAST_POINT                       440
#define CONST_TgPlayerController_GAMEEVENT_WEAPON_FIRED          152
#define CONST_ENEMY_SILHOUETTE_GREEN                             0.0f
#define CONST_TGTT_TARGET_PET_OWNER                              15030
#define CONST_BNT_NONE                                           0
#define CONST_GTP_DieToEvie                                      1911
#define CONST_AIE_PROPERTY_PERC                                  7
#define CONST_DODM_SHOW_FRIENDLY_ALL_OVERLAYS                    146
#define CONST_ENEMY_SILHOUETTE_BLUE                              0.0f
#define CONST_ENEMY_SILHOUETTE_ALPHA                             0.25f
#define CONST_WALL_HACK_DIST_SQ                                  64000000
#define CONST_RAUM_MAX_LIFE_SHARDS                               20
#define CONST_AIBOARD_BEHAVIOR_PET                               0x04
#define CONST_SIMPROJ_VECTOR_MUNGE_FACTOR                        100
#define CONST_DODM_SHOW_OWNED_SILHOUETTE                         64
#define CONST_CHAMPION_ID_VAMPIRE                                2551
#define CONST_ABILITY_MAKOA_ANCHOR                               14181
#define CONST_BNT_CONDITION_IS_LANEPUSHER_HOSTILE                427
#define CONST_CHAMPION_ID_BOMBQUEEN                              2550
#define CONST_CHAMPION_ID_SEVEN                                  2549
#define CONST_DODM_SHOW_ALL_INDICATORS                           7
#define CONST_TGPID_MINIMAP_DETECTOR                             1033
#define CONST_TGTT_TARGET_ENEMY_AND_SELF                         10805
#define CONST_BNT_CONDITION_IS_AT_RALLY_POINT                    323
#define CONST_TgPlayerController_GAMEEVENT_ROUND_ENDED           3
#define CONST_CHAMPION_ID_AZAAN                                  2548
#define CONST_TGPID_CAPTURE_TIME_RESET                           358
#define CONST_PHYS_TWEEN_FLAG_KEEP_PITCH                         4
#define CONST_CHAMPION_ID_SAATI                                  2543
#define CONST_TGPID_DAMAGE_CAP_PERC_MAX_HP                       1857
#define CONST_CHAMPION_ID_BUNNY                                  2542
#define CONST_GT_CheckpiointsAttackers                           121
#define CONST_CHAMPION_ID_SHADOW                                 2541
#define CONST_VV_BOT_RANK_GOD                                    10126
#define CONST_CHAMPION_ID_COMMANDER                              2540
#define CONST_CHAMPION_ID_YAGORATH                               2538
#define CONST_TG_MAX_PLAYER_STUCK_BOMBS                          6
#define CONST_STRIX_EDM_RECOLOR_SKIN_ID                          23927
#define CONST_TGPID_HAS_HEALING_EFFECT_UI_FRIEND                 1960
#define CONST_BNT_ACTION_SUGGEST_COMBAT_SQUAD                    1048599
#define CONST_CHAMPION_ID_CORVUS                                 2533
#define CONST_BNT_CONDITION_TIME_IN_PAYLOAD_MODE                 441
#define CONST_TGDT_TALENT_WEAPON                                 15393
#define CONST_GT_Tutorial_LMBToFire                              171
#define CONST_CHAMPION_ID_RAUM                                   2528
#define CONST_AIBOARD_BEHAVIOR_GOD                               0x01
#define CONST_TGPID_AUTO_SPAWN                                   170
#define CONST_TGPID_BOOST_CHARGE_RATE                            337
#define CONST_CHAMPION_ID_DRUID                                  2517
#define CONST_TgObject_TG_MOUNT_TYPE_MAX                         3
#define CONST_REFIRE_SERVER_GRACE                                0.1f
#define CONST_GTP_OnslaughtGameMode                              2026
#define CONST_VVG_CONVERSATION_TYPE                              1126
#define CONST_TgPawn_GAMEEVENT_PALADINS_PLAYER_KILL_ASSIST       2003
#define CONST_VV_BOT_RANK_TURRET                                 15115
#define CONST_TgPawn_GAMEEVENT_FRAMERATE_POLL                    36
#define CONST_VV_BOT_RANK_SIEGE_WALL                             11104
#define CONST_VV_BOT_RANK_ELITE_MINION                           10787
#define CONST_SPRAY_FLANKWINS_TRACKER_ACTIVITYID                 2022
#define CONST_VV_BOT_RANK_DEPLOYABLE                             10678
#define CONST_TGPID_MINIMUM_RADIUS                               1048
#define CONST_VV_BOT_RANK_DECOY                                  10679
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_TEAM_MATCH_WON 4
#define CONST_TGPID_END_OT_ON_DEFENDER_PROGRESS                  320
#define CONST_ITEM_SKIN_BODY_ANDROXUS_PS4                        15145
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_DEAD_ZONE_INNER       1984
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PALADINS_PLAYER_KILL_ASSIST 2003
#define CONST_TGPT_INT                                           176
#define CONST_TFT_ENEMY                                          10133
#define CONST_VV_BOT_RANK_NEUTRAL_BOSS                           10270
#define CONST_GTP_SiegeContestingPayload                         1939
#define CONST_BNT_ACTION_FOLLOW_LANE_REVERSE                     1048619
#define CONST_INDEX_DISPLAY_TARGET_DISTANCE                      3
#define CONST_VV_BOT_RANK_BUFFMONSTER                            10178
#define CONST_VV_BOT_RANK_MONSTER                                10085
#define CONST_TGDT_PASSIVES                                      10964
#define CONST_ITEM_VOICE_BARIK_STEAMTF2                          15289
#define CONST_FIREMODE_ID_CASSIE_INHAND                          10148
#define CONST_TGPID_SHIELD_MAX                                   1599
#define CONST_TGDT_RANGED                                        388
#define CONST_VV_BOT_RANK_PHOENIX                                10125
#define CONST_CONFIG_PROP_KEYBIND_SPRAY                          2012
#define CONST_VV_BOT_RANK_TOWER                                  10127
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_KILL           104
#define CONST_TGPID_MOUNT_TIME                                   1776
#define CONST_TGPID_ENTER_COMBAT                                 1700
#define CONST_VV_BOT_RANK_MINION                                 10123
#define CONST_ORACLE_AGONY_DEVICE_ID                             16608
#define CONST_BNT_CONDITION_HAS_NAVIGATION                       332
#define CONST_BNT_CONDITION_COMBAT_DAMAGED_FRIENDLY_GOD          304
#define CONST_TGPID_POINTS                                       398
#define CONST_AIE_STASIS                                         4
#define CONST_VV_BOT_RANK_FAMILIAR                               10425
#define CONST_CONTEXT_NOTIFY_WARD_HERE                           122294
#define CONST_TGPID_STEALTH_GUARD                                1832
#define CONST_TG_ROLE_DAMAGE                                     10601
#define CONST_CONTEXT_NOTIFY_SELF_RETREAT                        118528
#define CONST_TGPID_PATROL_LOOP                                  181
#define CONST_TGEGC_SCALING_DOT                                  18231
#define CONST_CONTEXT_NOTIFY_SELF_RETURNED                       118527
#define CONST_DEVICE_ID_OWL_INHAND                               19108
#define CONST_BNT_ACTION_SELECT_COMBAT_FORTRESS_OBJECTIVE        1048705
#define CONST_CONTEXT_NOTIFY_SELF_GANK                           118526
#define CONST_CONTEXT_NOTIFY_SELF_DEFEND                         118525
#define CONST_TgPlayerController_GAMEEVENT_GAME_CLASS            6
#define CONST_CONTEXT_NOTIFY_SELF_ATTACK                         118524
#define CONST_OBJECTIVE_NEUTRAL_FOREGROUND_SPECIALFX             6286
#define CONST_CONTEXT_NOTIFY_RETURNED                            117675
#define CONST_CONTEXT_NOTIFY_RETREAT                             117674
#define CONST_TGPID_MANA_MAX                                     1001
#define CONST_CONTEXT_NOTIFY_INCOMING                            117673
#define CONST_CONTEXT_NOTIFY_GANK                                117671
#define CONST_TGPID_COMBAT_DURATION_REDUCTION_PERC               1703
#define CONST_TGPID_REMOVE_ALL_DEBUFFS                           1795
#define CONST_BNT_CONDITION_DISTANCE_FROM_LANEPUSHER             401
#define CONST_DODM_SHOW_ENEMY_PLAYER_ICON                        16384
#define CONST_GT_PayloadCheckpoint1ReachedDefenders              158
#define CONST_CONTEXT_NOTIFY_MIA                                 117676
#define CONST_TGDT_SPRAY                                         15332
#define CONST_DODM_MODIFIER_PLAYER_AS_DEPLOYABLE                 524288
#define CONST_DODM_SHOW_FRIENDLY_HEALING_INDICATOR               16777216
#define CONST_MIN_TIME_ON_TOP                                    5.f
#define CONST_BNT_UTILITY_FORTRESS_DISTANCE                      268435459
#define CONST_BNT_ACTION_MOVE_TO_COMBAT_LKL                      1048629
#define CONST_CONTEXT_NOTIFY_BE_CAREFUL                          116961
#define CONST_TGDT_MOVEMENT_ABILITY                              11070
#define CONST_GTP_DieToAndroxusDefiance                          1919
#define CONST_CONTEXT_NOTIFY_ATTACK                              116959
#define CONST_BNT_ACTION_SELECT_LANEPUSHER_COMBAT_TARGET         1048702
#define CONST_EQ_MAX_LOAD_DEVICE                                 15
#define CONST_DODM_SHOW_EVERYTHING                               511
#define CONST_TGPID_DEPLOYABLE_SELECTION_LIST                    185
#define CONST_DEVICE_ID_FIRE_SPIT                                13327
#define CONST_DEVICE_ID_BLADES_DISPLACE                          16235
#define CONST_BNT_CONDITION_COMBAT_DAMAGEABLE_DEVICE             262
#define CONST_DEFAULT_BLOODPOOL_FX_RADIUS                        19.0f
#define CONST_DODM_SHOW_ALL_HEALTHBAR                            56
#define CONST_BNT_CONDITION_HEALTH_PERCENT                       268
#define CONST_MESH_ID_FURIA_RMB_TARGETING                        9555
#define CONST_DODM_SHOW_ENEMY_ALL_OVERLAYS                       292
#define CONST_DODM_SHOW_OWNED_ALL_OVERLAYS                       73
#define CONST_TgPawn_GAMEEVENT_NETWORKUSAGEOUT_POLL              38
#define CONST_BNT_ACTION_SELECT_COMBAT_SQUAD                     1048598
#define CONST_BNT_ACTION_STRAFE                                  1048621
#define CONST_DODM_SHOW_OWNED_HEALING_INDICATOR                  8388608
#define CONST_TGPID_INHAND_AMMO_CAPACITY                         1687
#define CONST_TgPlayerController_GAMEEVENT_TEAM_CREATED          50
#define CONST_BNT_CONDITION_COMBAT_IS_HITTABLE                   336
#define CONST_DODM_MODIFIER_SHOW_DAMAGE_PULSE                    4194304
#define CONST_DODM_MODIFIER_SHOW_FOR_SUPPORTS_ONLY               2097152
#define CONST_BNT_CONDITION_DISTANCE_FROM_NAVIGATION_DESTINATION 330
#define CONST_DODM_MODIFIER_BRING_TO_FRONT                       262144
#define CONST_BNT_CONDITION_IS_LAST_ATTACKER_OF_TYPE             292
#define CONST_TGPID_DISABLE_RAGDOLL                              2044
#define CONST_BNT_ACTION_MOVE_TO_CAPTURE_POINT                   1048701
#define CONST_DODM_MODIFIER_HIDE_WHEN_IN_LOS                     131072
#define CONST_GT_SiegePointSpawned                               132
#define CONST_TGIFGT_GRENADE_BOUNCE                              761
#define CONST_DODM_MODIFIER_FULL_SCALE                           65536
#define CONST_BNT_CONDITION_IS_ACTIVE_READY                      316
#define CONST_BNT_CONDITION_NEAREST_TOWER_HEALTH_PCT             295
#define CONST_DODM_SHOW_FRIENDLY_PLAYER_ICON                     8192
#define CONST_BNT_CONDITION_CAN_PURCHASE_SKILLS                  260
#define CONST_TGPID_AMMO_COUNT                                   424
#define CONST_DODM_HIDE                                          0
#define CONST_DODM_SHOW_PROJECTILE_AS_DEPLOYABLE                 4096
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_CHILD_DEVICE          1840
#define CONST_DODM_BLINK_ON_PROJECTILE_RING                      2048
#define CONST_TgPlayerController_GAMEEVENT_GAMETHREAD_POLL       41
#define CONST_CONFIG_PROP_KEYBIND_WEAPONINSPECT                  2032
#define CONST_DODM_SHOW_ENEMY_SILHOUETTE                         256
#define CONST_TGPID_DAMAGE_TAKEN_PERC_PHYS                       1630
#define CONST_TGEGT_STRONGEST_MASKS                              15416
#define CONST_DODM_SHOW_FRIENDLY_SILHOUETTE                      128
#define CONST_OBJECTIVE_PENDING_SPECIALFX                        2930
#define CONST_TGPID_DESTRUCTIBLE_SELECTION_LIST                  188
#define CONST_DODM_SHOW_ENEMY_HEALTHBAR                          32
#define CONST_BNT_UTILITY_PAWN_DISTANCE_TO_NORMAL                268435464
#define CONST_TGPID_ALLOW_PLAYERBOT_INTERACTION                  291
#define CONST_TgPawn_GAMEEVENT_PLAYER_ROUND_STALEMATE            110
#define CONST_TgPlayerController_GAMEEVENT_NETWORKUSAGEIN_POLL   37
#define CONST_DODM_SHOW_FRIENDLY_HEALTHBAR                       16
#define CONST_ORACLE_STACK_3P_FX_ID                              7740
#define CONST_TOWERING_BARRIER_MASK                              2
#define CONST_DODM_SHOW_OWNED_HEALTHBAR                          8
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_MAX_EVENTID   0x0000FFFF
#define CONST_TgGamePhase_Push_GAMEEVENT_GENERIC_PARAM_LIST_START 300
#define CONST_BNT_CONDITION_IS_DECOY_STATE                       335
#define CONST_TG_UPDATE_ALTITUDE_RTPC_DELAY                      0.5
#define CONST_DODM_SHOW_FRIENDLY_INDICATOR                       2
#define CONST_MAX_PRACTICAL_PLAYER_IDS                           10
#define CONST_TGPAWN_VERY_LARGE_HEALTH                           64000
#define CONST_TGPID_POINTS_TO_WIN                                327
#define CONST_TG_DEVICE_WALL_BANG_FIRE_ID                        27538
#define CONST_MAX_GENERAL_UTILITY_STAT                           318.0f
#define CONST_MAX_CHAMP_RADIUS                                   50.0
#define CONST_GT_CounteringTorvald                               198
#define CONST_MAX_FOV                                            120
#define CONST_TGPID_LIFESTEAL_TARGET                             2006
#define CONST_ITEM_VOICE_DEFAULT                                 15283
#define CONST_TGPID_AMMO_REPLENISH                               427
#define CONST_FURIA_TIME_DELAY_TARGET_VALID                      0.1f
#define CONST_TGPID_FIRE_HOLD_RATE                               1963
#define CONST_TGPID_PROJECTILE_SPEED                             46
#define CONST_BNT_ACTION_USE_ACTIVE                              1048608
#define CONST_MAX_DECK_SIZE                                      15
#define CONST_TGPID_SILENCE                                      1023
#define CONST_UNREAL_UNITS_TO_FEET                               0.0625
#define CONST_GT_CapturingPoints                                 104
#define CONST_TGPID_POISONED                                     1792
#define CONST_FEET_TO_UNREAL_UNITS                               16
#define CONST_TgGamePhase_Push_GAMEEVENT_GAME_OPTION_URL         7
#define CONST_AI_TEAM_PASSTHRU_DISTANCE                          100000
#define CONST_BNT_CONDITION_DISTANCE_FROM_DAMAGING_DEPLOYABLE    436
#define CONST_AI_DEFAULT_DISTANCE_OFFSET                         50
#define CONST_MAX_CORE_STATS                                     18
#define CONST_TgPlayerController_GAMEEVENT_ROUND_STARTED         2
#define CONST_TG_MIN_REFIRE_SPEED                                0.5
#define CONST_TgGamePhase_Push_GAMEEVENT_PALADINS_PLAYER_DEATH   1002
#define CONST_BNT_SENSOR_INCOMING_DAMAGE                         17
#define CONST_TGEGC_LOCAL                                        302
#define CONST_BNT_SENSOR_DEVICE_TARGETING                        16
#define CONST_SMITE_MINION_INTRASQUAD_SPAWN_DELAY                0.5f
#define CONST_BNT_COMPOSITE_SEQUENCE                             1
#define CONST_TGPID_ON_FIRE                                      1791
#define CONST_TG_DOT_GUARD_MOUNTING                              false
#define CONST_AIBOARD_SQUAD                                      0x08
#define CONST_BNT_COMPOSITE_SEQUENCE_SCRIPTED                    2
#define CONST_BNT_COMPOSITE_GATED                                4
#define CONST_TG_DEVICE_WALL_BANG_ID                             27451
#define CONST_BNT_CONDITION_COMBAT_TARGET_DISTANCE_FROM_CAPTURE_POINT 411
#define CONST_TgGamePhase_Push_GAMEEVENT_WEAPON_DAMAGE_MELEE     151
#define CONST_BNT_SENSOR_SIGHT_RADIUS                            9
#define CONST_GT_SiegePayloadBackingUp                           163
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_ROUND_STALEMATE 110
#define CONST_BNT_SENSOR_IN_HOSTILE_ABILITY                      11
#define CONST_TGPID_MARK_SHOT_MARK                               1991
#define CONST_TgPawn_GAMEEVENT_PALADINS_PLAYER_KILL_SUICIDE      2001
#define CONST_TG_SURRENDER_VOTE_YES                              0x01
#define CONST_BNT_SENSOR_SAFE_TO_RECALL                          13
#define CONST_MAX_OPPRESSOR_MINE_TARGETS                         6
#define CONST_BNT_ACTION_SPREAD_FROM_SQUAD                       1048622
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GAME_CLASS    6
#define CONST_BNT_SENSOR_LEASH                                   14
#define CONST_TGDT_ACTIVES                                       15055
#define CONST_SPRAY_FRONTLINEWINS_TRACKER_ACTIVITYID             2023
#define CONST_TgGame_Paladins_GAMEEVENT_WEAPON_DAMAGE            150
#define CONST_BNT_CONDITION_AMMO_PER_SHOT                        418
#define CONST_BNT_SENSOR_LANE                                    15
#define CONST_BNT_CONDITION_COMBAT_IS_IN_LEASH                   297
#define CONST_BNT_SENSOR_RALLY_POINTS                            18
#define CONST_GTP_DieToDrogozFireSpit                            1925
#define CONST_TgGamePhase_Push_GAMEEVENT_PALADINS_PLAYER_KILL    1001
#define CONST_BNT_ACTION_RELOAD_DEVICE                           1048719
#define CONST_BNT_SENSOR_FORTRESS                                21
#define CONST_TGPID_AMMO_CLIP_SIZE                               426
#define CONST_GTP_DieToAndroxusReversal                          1920
#define CONST_BNT_CONDITION_IS_AT_SPAWN                          256
#define CONST_BNT_ACTION_SELECT_LANE_JUNGLE                      1048588
#define CONST_BNT_CONDITION_COMBAT_IS_STEALTHED                  289
#define CONST_TGPID_PROTECTION_STUN                              163
#define CONST_TGPID_AMMO_CLIP_POST_RELOAD_TIME                   425
#define CONST_TIBERIUS_BLADE_THROWN_TIMEOUT                      0.5f
#define CONST_BNT_CONDITION_IS_SAFE_TO_RECALL                    257
#define CONST_BNT_CONDITION_IS_IN_HOSTILE_ABILITY                258
#define CONST_TGPID_POLYMORPH_RIDER                              2075
#define CONST_TGPID_KNOCKBACK                                    60
#define CONST_BNT_CONDITION_CAN_PURCHASE_ITEMS                   259
#define CONST_BNT_CONDITION_COMBAT_HEALTH_PERCENT                263
#define CONST_BNT_CONDITION_CURRENT_LEVEL                        264
#define CONST_BNT_CONDITION_DEVICE_READY                         265
#define CONST_GTP_DieToYingShatter                               1930
#define CONST_BNT_ACTION_RUN_TO_SPAWN                            1048578
#define CONST_BNT_CONDITION_COMBAT_HAS_TARGET                    266
#define CONST_TGPID_CC_IMMUNITY                                  1417
#define CONST_BNT_CONDITION_LANE_HAS_TARGET                      267
#define CONST_BNT_CONDITION_COMBAT_IS_OF_TYPE                    270
#define CONST_BNT_CONDITION_IS_IN_TOWER_RADIUS                   272
#define CONST_TGPID_SHIELD_PERCENT                               1988
#define CONST_TG_CK_MAX_HEALTH_FIREMODE_ID                       30011
#define CONST_BNT_ACTION_LOOK_AT_FORTRESS                        1048706
#define CONST_BNT_CONDITION_COMBAT_IS_IN_DISTANCE                274
#define CONST_BNT_CONDITION_NEARBY_GOD_DELTA                     276
#define CONST_BNT_CONDITION_NEARBY_TARGET_TYPE_DELTA             278
#define CONST_BNT_CONDITION_MANA_PERCENT                         280
#define CONST_TGPID_JUMP_SPEED_MODIFIER                          1782
#define CONST_BNT_CONDITION_MINIONS_IN_TOWER_RADIUS              281
#define CONST_TGPID_VISIBLE_THROUGH_STEALTH_INSTIGATOR_ONLY      1862
#define CONST_BNT_CONDITION_COMBAT_IS_VISIBLE                    283
#define CONST_BNT_CONDITION_TIME_SINCE_TOOK_DAMAGE               284
#define CONST_INDEX_SEE_FLYING_ENEMY                             3
#define CONST_BNT_CONDITION_COMBAT_IS_IN_MINOTAUR_RADIUS         285
#define CONST_TGPID_WALL_JUMP_HEIGHT_INCREASE                    1966
#define CONST_BNT_ACTION_SELECT_OWNER_COMBAT_TARGET              1048626
#define CONST_BNT_ACTION_RUN_TO_SPREAD_LOCATION                  1048597
#define CONST_BNT_ACTION_MOVE_TO_ASSAULT_POSITION                1048623
#define CONST_DEVICE_LIGHT_SPEED                                 19186
#define CONST_BNT_ACTION_LOOK_AT_TARGET_LKL                      1048721
#define CONST_BNT_CONDITION_COMBAT_IS_IN_TOWER_RADIUS            286
#define CONST_GTP_RespawnBeacon                                  1849
#define CONST_TGPID_PROTECTION_PULL                              1360
#define CONST_BNT_CONDITION_IS_SPAWN_GATE_OPEN                   423
#define CONST_BNT_CONDITION_COMBAT_IS_TARGET_OF_TWR_OR_MTR       287
#define CONST_TG_RANGE_FALLOFF_MIN_PERCENT                       10.0f
#define CONST_BNT_UTILITY_FILTER_PAYLOAD                         268435466
#define CONST_BNT_ACTION_PLAY_EMOTE                              1048582
#define CONST_TGEGC_DRUID_MARK                                   17660
#define CONST_TgPlayerController_GAMEEVENT_PALADINS_PLAYER_KILL_NORMAL 2002
#define CONST_BNT_CONDITION_DISTANCE_FROM_SELECTED_TARGET        288
#define CONST_TGPID_PROTECTION_DOT_DURATION                      1868
#define CONST_BNT_CONDITION_COMBAT_IS_LOOKING_AT                 290
#define CONST_BNT_CONDITION_DISTANCE_FROM_COMBAT_TARGET          291
#define CONST_TG_MIN_RELOAD_SCALE                                0.4f
#define CONST_BNT_CONDITION_SELECTED_TARGET_HEALTH_PCT           293
#define CONST_BNT_CONDITION_GODS_IN_TOWER_RADIUS                 294
#define CONST_BNT_ACTION_MOVE_TO_DEPLOYABLE                      1048628
#define CONST_BNT_CONDITION_COMBAT_IS_IN_FOUNTAIN                296
#define CONST_TGPID_ETHEREAL                                     1821
#define CONST_TGIFGT_WEAPON_IMPACT                               762
#define CONST_TGPID_NO_FRICTION                                  1763
#define CONST_TGPID_DAMAGE_DEALT_PERC_DEPLOYABLES                1859
#define CONST_TgPlayerController_GAMEEVENT_GAME_SPECIFIC         1000
#define CONST_BNT_UTILITY_FILTER_CAPTUREPOINT                    268435461
#define CONST_BNT_CONDITION_COMBAT_IS_IN_SIGHT_RADIUS            298
#define CONST_TGCM_ADD                                           67
#define CONST_TGPID_STEALTH_SOFT_REVEAL_DISTANCE                 1881
#define CONST_BNT_CONDITION_IS_OUTSIDE_LEASH                     299
#define CONST_BNT_CONDITION_HAS_SPREAD_LOCATION                  301
#define CONST_TGPID_HEALING_DEALT_PERC                           2105
#define CONST_TGTT_ATTACK_GROUND_TARGET_PROJECTILE               10251
#define CONST_BNT_CONDITION_TARGET_TYPE_IS_IN_LEASH              302
#define CONST_TGPID_SEE_THROUGH_STEALTH                          1863
#define CONST_BNT_CONDITION_ENERGY                               303
#define CONST_TGDT_MOUNT                                         11077
#define CONST_BNT_ACTION_CLEAR_LOOK_AT                           1048592
#define CONST_INDEX_DISPLAY_TARGET_MINIMAP                       0
#define CONST_TGTT_TARGET_FRIEND                                 10184
#define CONST_BNT_CONDITION_COMBAT_TARGET_INSIDE_DEVICE_VOLUME   421
#define CONST_BNT_CONDITION_IS_TOO_FAR_FROM_LANE                 305
#define CONST_AIE_STUN                                           5
#define CONST_BNT_CONDITION_HAS_EFFECT_CATEGORY                  307
#define CONST_GT_DieToMalDamba                                   189
#define CONST_BNT_CONDITION_TARGETS_DAMAGEABLE_BY_DEVICE         308
#define CONST_BNT_CONDITION_GAMETYPE                             309
#define CONST_BNT_CONDITION_COMBAT_IS_LAST_ATTACKER              310
#define CONST_TGPID_RESPAWN                                      171
#define CONST_TgPawn_GAMEEVENT_GPUFRAMETIME_POLL                 42
#define CONST_BUNNY_DEFAULT_SPIRIT_ENEMY_LINK_BEAM_FX_ID_3P      15689
#define CONST_BNT_CONDITION_INCOMING_DAMAGE                      312
#define CONST_BNT_ACTION_PURCHASE_BURN_CARDS                     1048709
#define CONST_GTP_RoundEndSurvivalOrSiege                        1902
#define CONST_TGPID_CAPTURE_TIME                                 87
#define CONST_BNT_CONDITION_HAS_CONSUMABLE                       313
#define CONST_BNT_CONDITION_HAS_ACTIVE                           314
#define CONST_TGPID_AMMO_COST_PER_SHOT                           1853
#define CONST_TGEGC_STEALTH                                      10863
#define CONST_TGPT_FLOAT                                         137
#define CONST_GT_Abilities                                       105
#define CONST_AIE_ENERGY                                         8
#define CONST_BNT_CONDITION_DISTANCE_FROM_LANE_TARGET            315
#define CONST_SPRAY_DAMAGEWINS_TRACKER_GOALID                    1399
#define CONST_TGEGC_CORVUS_BEACON                                17803
#define CONST_BNT_CONDITION_COMBAT_HEALTH_AFTER_ATTACK           318
#define CONST_TGDT_TALENT_ABILITY1                               15381
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_WEAPON_DAMAGE_MELEE 151
#define CONST_AUTO_FORFEIT_TIME_SEC                              120.0f
#define CONST_BNT_CONDITION_RETURN_ALWAYS                        319
#define CONST_TGPAWN_GROHK_TEMPEST_OVERLY_FX_ID                  6870
#define CONST_TGTT_TARGET_FRIEND_ONLY                            884
#define CONST_BNT_CONDITION_LAST_ATTACKER_IS_TARGET_TYPE         320
#define CONST_MAX_NUM_DEPLOYED_BOTS                              3
#define CONST_BNT_CONDITION_COMBAT_DROPPED                       322
#define CONST_BNT_CONDITION_PHYSICS_STATE                        326
#define CONST_BNT_CONDITION_COMBAT_PHYSICS_STATE                 327
#define CONST_BNT_CONDITION_SQUAD_AVERAGE_DISTANCE               331
#define CONST_BNT_CONDITION_DISTANCE_FROM_OWNER                  333
#define CONST_TGPID_CONE_ATTACK_ANGLE_OFFSET                     1627
#define CONST_BNT_CONDITION_COMBAT_IS_SHIELDED                   431
#define CONST_BNT_CONDITION_COMBAT_TARGET_DISTANCE_OWNER         334
#define CONST_BNT_ACTION_REGEN_HEALTH                            1048610
#define CONST_GLOBAL_OFFHAND_CLIENT_COOLDOWN                     5.1
#define CONST_TGPID_HEALTH_MAX_PERCENT                           1620
#define CONST_CARD_SEETHING_RAGE                                 20030
#define CONST_BNT_CONDITION_IS_META_GAME_STATE                   400
#define CONST_BNT_CONDITION_IS_AT_ACTIVE_CAPTURE_POINT           402
#define CONST_TGFXMAT_WEAPON                                     16600
#define CONST_DEBUG_PROPERTY_DEVICE_ID                           20417
#define CONST_BNT_CONDITION_DISTANCE_FROM_FORTRESS               404
#define CONST_INDEX_SEE_NON_MOVING_ENEMY                         0
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_TEAMCHANGE       106
#define CONST_BNT_CONDITION_COMBAT_LANEPUSHER_HEALTH_PERCENT     415
#define CONST_BNT_CONDITION_IS_IN_FORTRESS                       405
#define CONST_TG_MAX_FLASH_EVENTS                                32
#define CONST_MISSION_TIME_SETUP_SECS                            90.0
#define CONST_HEALTH_NUGGET_HEAL_ALLIES_ID                       10364
#define CONST_BNT_CONDITION_TIME_SINCE_LANEPUSHER_TOOK_DAMAGE    406
#define CONST_TgGamePhase_Push_GAMEEVENT_NETWORKUSAGEIN_POLL     37
#define CONST_TgPawn_GAMEEVENT_PLAYER_KILL                       104
#define CONST_TgPawn_GAMEEVENT_GENERIC_PARAM_LIST_END            400
#define CONST_TGPID_CONE_ATTACK_ANGLE                            64
#define CONST_BNT_CONDITION_IS_LANEPUSHER_LAST_ATTACKER_OF_TYPE  407
#define CONST_BNT_CONDITION_DISTANCE_FROM_CAPTURE_POINT          409
#define CONST_BNT_CONDITION_DISTANCE_FROM_FORTRESS_OBJECTIVE     410
#define CONST_TGPID_CRIPPLE                                      1523
#define CONST_TG_PHYSICALITY_PLAYERS                             10034
#define CONST_TGPID_AIR_CONTROL                                  1952
#define CONST_BNT_CONDITION_GODS_IN_CAPTURE_POINT_RADIUS         412
#define CONST_TGTT_TARGET_SELF                                   214
#define CONST_BNT_CONDITION_CAPTURE_POINT_IS_VISIBLE             413
#define CONST_GLOBAL_OFFHAND_COOLDOWN                            5.0
#define CONST_TGDT_ABILITY1_CARD                                 15000
#define CONST_BNT_CONDITION_COMBAT_IS_LOOKING_AT_CAPTURE_POINT   414
#define CONST_TGPID_TGEFFECTMODIFYEFFECT_MAXSTACK                1989
#define CONST_BNT_CONDITION_AMMO_COUNT                           417
#define CONST_BNT_CONDITION_IS_IN_DEVICE_VOLUME                  420
#define CONST_INVALID_LIGHT_SCORE                                2
#define CONST_GT_Tutorial_FToHustle                              174
#define CONST_BNT_CONDITION_AMMO_AFTER_SHOT                      419
#define CONST_TGPID_CUSTOM_VALUE_2                               1049
#define CONST_BNT_UTILITY_FILTER_ASSAULTRANGETYPE                268435462
#define CONST_BNT_CONDITION_NUM_DEATHS                           424
#define CONST_TGPID_CREDITS                                      399
#define CONST_BNT_CONDITION_DELTA_GODS_CAPTURE_POINT             425
#define CONST_TGTT_ATTACK_GROUND_TARGET_BOT                      10382
#define CONST_BNT_CONDITION_IS_LANEPUSHER_ACTIVE                 426
#define CONST_BNT_CONDITION_DISTANCE_FROM_SQUAD_TARGET           428
#define CONST_TGPID_AI_ACCURACY_DEG_MISSED                       1889
#define CONST_BNT_CONDITION_SQUAD_IS_VISIBLE                     430
#define CONST_TGPID_DROGOZ_ENERGY                                1886
#define CONST_BNT_UTILITY_FILTER_LOSTOTARGETLASTKNOWNLOCATION    268435471
#define CONST_BNT_CONDITION_SQUAD_IS_SHIELDED                    432
#define CONST_TGTT_ATTACK_INSTANT_LINE                           10015
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_WEAPON_FIRED  152
#define CONST_BNT_CONDITION_DISTANCE_FROM_SHIELD                 433
#define CONST_BNT_CONDITION_GODS_IN_LANE_PUSHER_RADIUS           435
#define CONST_BNT_CONDITION_DISTANCE_FROM_AVOIDABLE_PROJECTILE   437
#define CONST_BNT_ACTION_CLEAR_RALLY_POINT                       1048616
#define CONST_BNT_CONDITION_IS_DESIRED_AIM_DEVICE                443
#define CONST_TGPID_DISARM                                       303
#define CONST_InhandBow                                          14891
#define CONST_BNT_CONDITION_IS_BOT_BEHAVIOR_STATE                444
#define CONST_BNT_CONDITION_DISTANCE_FROM_ASSAULT_POINT          445
#define CONST_BNT_CONDITION_NEARBY_ALLY_ATTACKED                 446
#define CONST_BNT_CONDITION_NUMBER_DEVICES_FIRING                447
#define CONST_TGDT_TALENT_ARMOR                                  15392
#define CONST_MAX_BROADCAST_CHANNELS                             4
#define CONST_BNT_CONDITION_COMBAT_IS_SQUAD_TARGET               448
#define CONST_PROP_LOGIN_DAYS                                    2145
#define CONST_BNT_CONDITION_SIEGE_SCORE                          449
#define CONST_BNT_ACTION_CLEAR_COMBAT_TARGET                     1048591
#define CONST_TGEGC_BLOCK_CHILD_DEV_APPLICATION                  17285
#define CONST_TGPID_OBJECTIVE_ID                                 347
#define CONST_EVIE_COMBO_DEVICE_ID_ICE_BLOCK_SUB                 14403
#define CONST_GT_ChampionOverview                                109
#define CONST_BNT_ACTION_CLEAR_NAVIGATION_QUEUE                  1048576
#define CONST_GT_DieToViktorFragGrenade                          155
#define CONST_BNT_ACTION_FOLLOW_COMBAT_TARGET                    1048579
#define CONST_BNT_ACTION_PURCHASE_ITEMS                          1048583
#define CONST_BNT_ACTION_LOOK_AT_COMBAT_TARGET                   1048580
#define CONST_BNT_ACTION_MOVE_TO_LANE_TARGET                     1048581
#define CONST_BNT_ACTION_PURCHASE_SKILLS                         1048584
#define CONST_BNT_ACTION_SELECT_COMBAT_LANE                      1048585
#define CONST_BNT_ACTION_SELECT_COMBAT_LASTATTACKER              1048586
#define CONST_TGPID_AI_DEVICE_RADIUS                             1487
#define CONST_GTP_CardTypes                                      1807
#define CONST_BNT_ACTION_SELECT_LANE_MOVE                        1048587
#define CONST_BNT_ACTION_CLEAR_LANE_MOVE_TARGET                  1048590
#define CONST_TGPID_ASTRO_BUFF                                   2023
#define CONST_MAX_DJ_BLADES_FACES                                8
#define CONST_BNT_ACTION_SELECT_COMBAT_TARGETS_TARGET            1048618
#define CONST_TGPID_PROTECTION_KNOCKUP                           1837
#define CONST_BNT_ACTION_LOOK_AT_SPAWN_ROTATION                  1048595
#define CONST_BNT_ACTION_CLEAR_SPREAD_LOCATION                   1048600
#define CONST_BNT_ACTION_RUN_TO_OWNER                            1048601
#define CONST_BNT_ACTION_MOVE_TO_LANE_VOLUME                     1048605
#define CONST_TGPID_PERSIST_TIME                                 150
#define CONST_BNT_ACTION_JUKE                                    1048606
#define CONST_MAX_SPOT_POINTS                                    100
#define CONST_BNT_ACTION_LOOK_AT_LANEPUSHER                      1048708
#define CONST_TGST_TOTAL_POWER                                   10553
#define CONST_BNT_ACTION_USE_CONSUMABLE                          1048607
#define CONST_INDEX_SEE_WALKING_ENEMY                            1
#define CONST_MAX_ILLUSION_TARGETS                               2
#define CONST_GTP_DieToFernando                                  1912
#define CONST_BNT_ACTION_FOLLOW_PATROL                           1048609
#define CONST_OBJECTIVE_NEUTRAL_SPECIALFX                        2954
#define CONST_BNT_ACTION_PAUSE_AI                                1048611
#define CONST_BNT_ACTION_MOVE_AROUND_LANEPUSHER                  1048713
#define CONST_BNT_ACTION_PLAY_VGS                                1048612
#define CONST_TGPID_HEALING_TAKEN_PERC                           1056
#define CONST_BNT_ACTION_ASSIGN_LANE                             1048613
#define CONST_BNT_ACTION_MOVE_TO_RALLY_POINT                     1048615
#define CONST_TGPID_PLAYER_KNOCKBACK_HIT                         2104
#define CONST_TG_MAX_DISTANCE_FOR_SHARED_VISIBILITY_SQ           2560000
#define CONST_BNT_ACTION_CANCEL_FIRING                           1048617
#define CONST_GT_Tutorial_UpgradeItems                           190
#define CONST_BNT_ACTION_STOP_DEVICE                             1048620
#define CONST_TgGame_Paladins_GAMEEVENT_WEAPON_DAMAGE_MELEE      151
#define CONST_BNT_ACTION_MOVE_TO_COVER                           1048624
#define CONST_BNT_ACTION_SELECT_COMBAT_OWNER_LASTATTACKER        1048625
#define CONST_BOMBARDMENT_FIRE_BOMB_MODE                         29624
#define CONST_BNT_UTILITY_FILTER_DISTANCEFROMTARGET              268435470
#define CONST_BNT_ACTION_MOVE_TO_LANEPUSHER                      1048700
#define CONST_GT_FriendlySiegeEngine                             113
#define CONST_BNT_ACTION_SELECT_COMBAT_LANEPUSHER_COMBAT         1048704
#define CONST_INDEX_SEE_BOTS_ONLY                                7
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_KILL_NORMAL 200
#define CONST_GTP_SiegePointSpawned                              1909
#define CONST_BNT_UTILITY_RANDOM                                 268435456
#define CONST_BNT_ACTION_MOVE_TO_SHIELD                          1048710
#define CONST_BNT_ACTION_MOVE_TO_DAMAGING_DEPLOYABLE             1048711
#define CONST_GT_SiegeCapturedPoint                              129
#define CONST_BNT_ACTION_GROUP_UP                                1048714
#define CONST_BNT_UTILITY_FILTER_LOSTOTARGET                     268435467
#define CONST_TGPID_ROOT                                         338
#define CONST_BNT_ACTION_WIGGLE                                  1048715
#define CONST_TGPID_CUSTOM_VALUE_6                               1596
#define CONST_BNT_ACTION_MOVE_TO_LANEPUSHER_FRONT                1048716
#define CONST_ULT_EYE_SOCKET                                     7828
#define CONST_BNT_ACTION_SET_AIM_DEVICE                          1048717
#define CONST_GT_Tutorial_QToFrag                                173
#define CONST_BNT_ACTION_SET_BOT_BEHAVIOR_STATE                  1048718
#define CONST_BNT_ACTION_SELECT_ALLY_ATTACKER_AS_TARGET          1048722
#define CONST_DEVICE_ID_CAUTERIZE_SCALING                        29030
#define CONST_BNT_ACTION_PURCHASE_CARDS                          1048723
#define CONST_ABILITY_YING_ILLUSION_AUTO                         13332
#define CONST_BNT_UTILITY_FILTER_GAMESTATE                       268435457
#define CONST_GTP_ChampionOverview                               1824
#define CONST_BNT_UTILITY_COMBAT_TARGET_DISTANCE                 268435458
#define CONST_MENDING_SPIRITS_EFFECT_GROUP_ID                    55837
#define CONST_BNT_UTILITY_DISTANCE2PAWN                          268435460
#define CONST_TGPID_DAMAGE_DEALT_PERC_PHYSICAL                   1864
#define CONST_BNT_UTILITY_COMBAT_TARGET_DISTANCE_TO_NORMAL       268435465
#define CONST_GTP_PushObjectiveEnded                             1831
#define CONST_BNT_UTILITY_FILTER_STAYINTARGETFOV                 268435468
#define CONST_TGPID_SHIELD_BUFF_PERCENT_ON_CREATE                2152
#define CONST_MAX_EQUIPPED_SPRAYS                                4
#define CONST_TGEGC_IGNORE_PARALLEL_COOLDOWN                     18100
#define CONST_TGPID_LIFESTEAL_PURE                               2154
#define CONST_TGPID_STEALTH_DISABLED                             141
#define CONST_TGPID_DAMAGE_DEALT_TO_FRONTLINE_PERC               2064
#define CONST_BNT_UTILITY_FILTER_DISTANCEFROMPAWN                268435469
#define CONST_DEFAULT_RANGE                                      150
#define CONST_PROTECTION_DAMAGE_IMMUNITY_VALUE                   10000
#define CONST_TGPID_PROJECITLE_GRAVITY_OVERRIDE                  1983
#define CONST_TGPID_DAMAGE_RADIUS                                6
#define CONST_TGPID_REMOTE_ACTIVATION_TIME                       7
#define CONST_TGPID_MANA_PERCENT                                 1045
#define CONST_TgGame_Paladins_GAMEEVENT_GAME_MAPNAME             8
#define CONST_TgPawn_GAMEEVENT_WEAPON_FIRED                      152
#define CONST_TGPID_PROXIMITY_DISTANCE                           8
#define CONST_TGPID_CONFIG_SETTING_SCOPE_SENSITIVITY             2042
#define CONST_TGPID_FIRE_LOCK_TIME                               437
#define CONST_TGPID_DAMAGE_CAP                                   2151
#define CONST_MAX_DIST_WHIZBY_IN_HALF_BUCKS                      5
#define CONST_TGPID_GP_STARTING_LEVEL                            1427
#define CONST_TGEGC_WALLHACK                                     10966
#define CONST_TGPID_ACCURACY                                     10
#define CONST_GTP_Dismounted                                     1800
#define CONST_TGPID_RANGE                                        5
#define CONST_TGPID_GROUND_SPEED                                 49
#define CONST_GT_DieToDrogozSalvo                                147
#define CONST_TGPID_AIR_SPEED                                    70
#define CONST_TGPID_MOUNT_GROUND_SPEED                           1775
#define CONST_TGPID_FLASH_BANG                                   2031
#define CONST_TGPID_NO_BACKPEDAL_PENALTY                         1524
#define CONST_TGPID_KNOCKUP                                      1019
#define CONST_GT_DieToBarikTurret                                139
#define CONST_TGPID_KNOCKSTRAIGHTUP                              1435
#define CONST_ITEM_COUPON_BATTLEPASSLEVEL_PSPLUS                 24883
#define CONST_TG_UNCONTESTED                                     0
#define CONST_TGPID_KNOCKSTRAIGHTBACK                            1761
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PALADINS_PLAYER_KILL_NORMAL 2002
#define CONST_CONTRIBUTION_BUFFER                                0.75f
#define CONST_TGPID_KNOCKBACK_PLUS_GRAV_NO_CHARGE                1961
#define CONST_TGPID_SCALE_MESH                                   1810
#define CONST_TGPID_VISIBLE_THROUGH_WALLS                        1707
#define CONST_TgPawn_GAMEEVENT_GAME_MAPNAME                      8
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_MEMORYUSAGE_POLL 35
#define CONST_TGPID_SCALE_COLLISION_HEIGHT                       1813
#define CONST_GT_RespawnBeacon                                   123
#define CONST_TGPID_CONFUSED                                     1812
#define CONST_TG_ROLE_SUPPORT                                    15060
#define CONST_TGEA_MAX_EFFECTS                                   16
#define CONST_TGPID_POLYMORPH_CHICKEN                            1841
#define CONST_TGPID_MARK_SHOT_FIRING_AT_MARK                     1992
#define CONST_TGPID_STUNTAUNT                                    1555
#define CONST_TgPawn_GAMEEVENT_MEMORYUSAGE_POLL                  35
#define CONST_TGPID_MP5                                          1003
#define CONST_TGPID_SPAWN_TABLE_ID                               340
#define CONST_TGPID_PURSUIT_FIRING_AT_TARGET                     1999
#define CONST_TGPID_ENERGY_CHARGE_MULTIPLIER                     2027
#define CONST_TGPID_CONFIG_SETTING_GYRO_Y_SENSITIVITY            2137
#define CONST_TgPawn_GAMEEVENT_PLAYER_LOCATION_POLL              105
#define CONST_TGPAWN_KINESSA_OVERLAY_FRIEND_FX_ID                6861
#define CONST_TG_AOE_FALLOFF_MIN_PERCENT                         70.0f
#define CONST_TGPID_VISION_RANGE                                 152
#define CONST_TGPID_POWER_MAGICAL_BOT                            1083
#define CONST_TGPID_INHAND_EFFECTIVE_RANGE                       1684
#define CONST_TGPID_DEVICE_MODE_BUILDUP_TIME                     2
#define CONST_TGPID_LOOT_TABLE_ID                                332
#define CONST_IMPASSE_SIDE_WALL_SEGMENTS                         2
#define CONST_TGPID_DEVICE_MODE_FIRE_TIME                        53
#define CONST_TGPID_ARC_MAX_RANGE                                1058
#define CONST_TGPID_DEVICE_MODE_TIME_TO_HOLD_BLOCK               258
#define CONST_TGPID_TIME_TO_DEPLOY_SECS                          279
#define CONST_TGPID_DEVICE_SHOTS_PER_FIRE                        287
#define CONST_TgRepInfo_Player_TG_EQP_POINT_MAX                  49
#define CONST_TGPID_FIRE_PRE_HIT_DELAY                           1016
#define CONST_TGPID_FIRE_POST_HIT_DELAY                          1017
#define CONST_TGPID_HOLD_TIME                                    88
#define CONST_TGPID_GLOBAL_ALARM_NUMBER                          182
#define CONST_TGPID_CAPTURE_SCORE                                97
#define CONST_TGPID_TICK_SCORE                                   98
#define CONST_TGPID_STUN                                         166
#define CONST_DEVICE_ID_BLADES_INHAND                            16218
#define CONST_TGPID_FEAR                                         1418
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_ROUND_WON 109
#define CONST_TG_SPAWNFX_VALID_DURATION                          5
#define CONST_TGPID_DAZE                                         1433
#define CONST_TgPawn_GAMEEVENT_TEAM_ROUND_STALEMATE              52
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_ROUND_STALEMATE  110
#define CONST_TGPID_STASIS                                       1051
#define CONST_TGPID_REVEAL                                       1053
#define CONST_TGPID_DAMAGE_DEVICE_INTERCEPT                      1823
#define CONST_TGEGC_CARD_EQUIP_STATS                             15373
#define CONST_TGPID_DAMAGE_MITIGATE_INTERCEPT                    1848
#define CONST_TGPID_ON_LANDED_INTERCEPT                          1826
#define CONST_TgGame_Paladins_GAMEEVENT_GAMETHREAD_POLL          41
#define CONST_TGPID_DISORIENT                                    1583
#define CONST_TGPID_PLACEMENT_METHOD                             180
#define CONST_TGPID_ENERGY_STUN                                  1652
#define CONST_AGONY_MAX_DETONATED_ORBS                           5
#define CONST_TGPID_VISIBLE_THROUGH_WALLS_INSTIGATOR_ONLY        1852
#define CONST_TG_DEVICE_ID_AUTO_HEAL                             12433
#define CONST_TGPID_SEE_THROUGH_WALLS                            1771
#define CONST_TGPID_TEAM_NUMBER                                  175
#define CONST_TgGame_Paladins_GAMEEVENT_FRAMERATE_POLL           36
#define CONST_TGPID_VISIBLE_THROUGH_STEALTH                      1861
#define CONST_TG_ITEM_COUNT_MAX                                  4
#define CONST_SPRAY_DAMAGEWINS_TRACKER_ACTIVITYID                2018
#define CONST_TG_DEFAULTSPAWNGUARDTIME                           3.0f
#define CONST_TGPID_VISIBLE_THROUGH_WALLS_TASKFORCE              2107
#define CONST_TGPID_VISIBLE_THROUGH_STEALTH_TASKFORCE            2108
#define CONST_TGPID_CUSTOM_FLIGHT                                1941
#define CONST_TGPID_GRAVITY_SCALE                                1820
#define CONST_TGPID_LIFESTEAL                                    1010
#define CONST_TGPID_JUMP_HANG                                    1882
#define CONST_TGPID_WALL_GRABBED_HIT                             2153
#define CONST_TGPID_BLEEDING                                     1793
#define CONST_TGPID_APPLY_DOTS_NOW                               1878
#define CONST_TGPID_LEAPING                                      1899
#define CONST_TGPID_FALL_OUT_OF_WORLD                            1945
#define CONST_BOMBKING_COMBO_DEVICE_ID_DETONATOR                 14309
#define CONST_TGPID_CAPTURE_ACCEL_RATE_CAP                       298
#define CONST_TGPID_PRESENCE_BUFF                                2029
#define CONST_DEVICE_ID_BLADES_NINE_LIVES                        16306
#define CONST_TGPID_PET_HEALTH_PCT                               2111
#define CONST_TGPID_POWER_PHYSICAL_PERC                          1047
#define CONST_CASPIAN_MAX_SWORDS                                 5
#define CONST_TGPAWN_KINESSA_OVERLAY_ENEMY_FX_ID                 6862
#define CONST_TGPID_REMOVE_EFFECT                                140
#define CONST_TGPID_CURRENCY_MULTIPLIER                          2083
#define CONST_GTP_DieToDeathFog                                  1936
#define CONST_TGPID_PERSIST_PULSE                                151
#define CONST_TGEGC_DAZE                                         15009
#define CONST_TGPID_CHARACTER_VISION_RANGE                       152
#define CONST_TgPawn_GAMEEVENT_FRAMETIME_POLL                    43
#define CONST_TgGamePhase_Push_GAMEEVENT_RENDERTHREAD_POLL       40
#define CONST_TGPID_MAX_DEPLOYABLES_OUT                          154
#define CONST_TGPID_DEVICE_SELECTION_LIST                        282
#define CONST_TGPID_CAPTURE_ACCEL_RATE                           297
#define CONST_TGPID_REWARD_XP                                    400
#define CONST_GT_PayloadCheckpoint1ReachedAttackers              157
#define CONST_INDEX_DISPLAY_TARGET_INGAME                        1
#define CONST_INDEX_DISPLAY_TARGET_TAGGED                        4
#define CONST_GTP_RoundLostSurvivalOrSiege                       1908
#define CONST_TGPID_STEALTH_WITHFADING                           1597
#define CONST_INDEX_DISPLAY_SEND_AUDIO_WARNING                   5
#define CONST_CARD_ASTRAL_CYCLE                                  0
#define CONST_INDEX_DISPLAY_TARGET_LOW_HEALTH                    6
#define CONST_INDEX_SEE_MAKING_NOISE_ENEMY                       2
#define CONST_MAX_NUM_PETS                                       8
#define CONST_INDEX_SEE_BEACONS                                  6
#define CONST_TGPID_MAGICAL_IMMUNITY                             1607
#define CONST_CUE_ATTACKFROMBEHIND_PERIOD                        30.0
#define CONST_TGPID_FRONTAL_IMMUNITY                             1954
#define CONST_TGCM_ADD_PERC_MAX_HEALTH                           15033
#define CONST_TGPID_PROTECTION_SLOW                              158
#define CONST_TG_NAV_ROUTE_INDICATOR_PATHING_FX_ID               2276
#define CONST_TGPID_PROTECTION_KNOCKBACK                         233
#define CONST_MAX_OBSCURING_DEPLOYABLES                          10
#define CONST_TGPID_PROTECTION_FEAR                              1892
#define CONST_TGPID_PROTECTION_SILENCE                           1893
#define CONST_ITEM_SKIN_HEAD_BARIK_STEAMTF2                      15224
#define CONST_TGPID_PROTECTION_CC                                1591
#define CONST_TGPID_PROTECTION_LIFT                              2149
#define CONST_TGPID_PROTECTION_POISON                            1696
#define CONST_CUE_ATTACKFROMSNIPER_PERIOD                        30.0
#define CONST_TGPID_ENERGY                                       1004
#define CONST_HEAL_BEAM_FX_ID                                    7224
#define CONST_TGPID_PROTECTION_POLYMORPH                         2148
#define CONST_MEDIUM_DIFFICULTY_CONFIG_ID                        64
#define CONST_CONTRIBUTION_BUFFEE                                0.25f
#define CONST_TGPID_PROTECTION_DOT_DURATION_PERC                 1873
#define CONST_TgPlayerController_GAMEEVENT_MATCH_STARTED         0
#define CONST_TGPID_PROTECTION_DOT_DAMAGE_PERC                   1870
#define CONST_TGDT_WEAPON_CARD                                   11049
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_TEAMCHANGE 106
#define CONST_TGPID_DEBUFF_IMMUNITY                              1796
#define CONST_TG_PAWN_POLYMORPH_CHICKEN_MESH_ID                  5599
#define CONST_TGPID_REDUCE_DEBUFF_DURATION                       1811
#define CONST_SPRAY_FLANKWINS_TRACKER_GOALID                     1405
#define CONST_TGPID_SLOW_IMMUNITY                                1746
#define CONST_TGPID_JUMP_PENALTY_IMMUNITY                        1753
#define CONST_TGPID_TGEFFECTMODIFYEFFECT_LIFETIME                1950
#define CONST_TGPID_REMOVE_PROTECTION_CC                         1560
#define CONST_TGPID_MISSING_HEALTH                               211
#define CONST_TGPID_CAPTURE_TIME_EXTENTION                       300
#define CONST_TG_CK_GROUNDSPEED_FIREMODE_ID                      30008
#define CONST_TGPID_ARCING_JUMPS                                 309
#define CONST_TGPID_CONTAGIOUS_RADIUS                            312
#define CONST_MAX_DRAWN_CARDS                                    5
#define CONST_FERNANDO_COMBO_DEVICE_ID_FIREBALL                  11481
#define CONST_TGPID_FIRE_ANGLE                                   2009
#define CONST_TGPID_PROC_CHANCE_MODIFIER                         1815
#define CONST_TGPID_DOT_DURATION_PERC                            1879
#define CONST_TGPID_FAR_DAMAGE_PERCENT                           1769
#define CONST_TgPawn_GAMEEVENT_MATCH_STARTED                     0
#define CONST_DRUID_MAX_ACTIVE_HEAL_BEAMS                        10
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_Y_SENSITIVITY         1972
#define CONST_TGPID_HEADSHOT_DAMAGE_REDUCTION                    2110
#define CONST_TGPID_BOT_COUNT                                    172
#define CONST_TgPawn_GAMEEVENT_GAME_SPECIFIC                     1000
#define CONST_GEOMETRY_TEST_PERIOD                               0.125
#define CONST_TgPawn_GAMEEVENT_TEAM_CREATED                      50
#define CONST_TGPID_RESPAWN_DELAY                                173
#define CONST_TgGame_Paladins_GAMEEVENT_TEAM_CREATED             50
#define CONST_TGPID_SPAWN_DELAY                                  174
#define CONST_COOLDOWN_SERVER_GRACE                              0.5f
#define CONST_TGPID_TASK_FORCE_NUMBER                            176
#define CONST_TGPID_SELECTION_METHOD                             178
#define CONST_TGPID_BOT_SELECTION_LIST                           179
#define CONST_TGPID_SHIELD                                       1598
#define CONST_TGPID_SPAWN_LOCATION_LIST                          183
#define CONST_TGPID_PATROL_LOCATION_LIST                         184
#define CONST_TGPID_INSTANCE_SELECTION_LIST                      229
#define CONST_TGDT_SUB_COMPONENT                                 11052
#define CONST_TGPID_BULK_SPAWN                                   230
#define CONST_TGPID_ALLOW_AIBOT_INTERACTION                      290
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_AIM_ACCEL_MODE        1973
#define CONST_TGPID_TIME_TO_HOLD                                 294
#define CONST_TgPawn_GAMEEVENT_WEAPON_DAMAGE_MELEE               151
#define CONST_TGPID_OBJECTIVE_BOT_ID                             301
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GPUFRAMETIME_POLL 42
#define CONST_TGPID_POINTS_PER_SECOND                            326
#define CONST_TGPID_FIRE_HOLD_TIME                               1757
#define CONST_TGPID_OBJECTIVE_UNLOCK_DELAY                       331
#define CONST_TGPID_TAUNT                                        305
#define CONST_DEFAULT_FX_RADIUS                                  240.0f
#define CONST_TGPID_BLOCK_FRIENDLY_FIRE                          302
#define CONST_TGPID_PRIORITY                                     346
#define CONST_TGPID_OBJECTIVE_COOLDOWN_SECONDS                   409
#define CONST_TGPID_MINIMUM_LEVEL                                410
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_KILL_NORMAL       200
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_CHILD_ITEMS           1942
#define CONST_TGPID_AMMO_CLIP_PRE_RELOAD_TIME                    435
#define CONST_TGPID_DROGOZ_ENERGY_MAX                            1887
#define CONST_TGPID_ORACLE_ORB_STACK                             1993
#define CONST_TGPID_GP_SURRENDER_TIME                            1386
#define CONST_MAX_RECOIL_SEED                                    32749
#define CONST_TG_SURRENDER_VOTE_NO                               0x02
#define CONST_TGPID_HEALTH                                       51
#define CONST_TGPID_HEALTH_MAX                                   304
#define CONST_TGPID_HP5                                          1011
#define CONST_TGPID_HP5_PERCENT_OF_MAX_HEALTH                    1772
#define CONST_TGPID_MANA                                         1002
#define CONST_JENOS_EDM_SKIN_ID                                  23845
#define CONST_TGPID_ENERGY_MAX                                   1005
#define CONST_TG_RANGE_FALLOFF_BEGIN_PERCENT                     50.0f
#define CONST_TGPID_SHIELD_MAX_INSTIGATOR_SCALE                  1612
#define CONST_TGDT_ULTIMATE                                      15052
#define CONST_TGPID_POWER_PHYSICAL_BOT                           1082
#define CONST_TG_PAWN_GEN_INVIS_FX_ID                            2277
#define CONST_PLAYER_NOT_TAGGED                                  -1
#define CONST_MAX_STICKY_BOMBS                                   3
#define CONST_TGPID_POWER_MAGICAL_PERC                           1046
#define CONST_TGPID_LIFESTEAL_INSTIGATOR_ONLY                    1898
#define CONST_TGPID_HEALTH_COST                                  1578
#define CONST_TGDT_TALENT_ALTFIRE                                15391
#define CONST_GTP_ContestPayloadAttackers                        1843
#define CONST_TGPID_MANA_COST                                    1012
#define CONST_DEVICE_GRAVITY_LIFT                                19187
#define CONST_DEVICE_ID_BLADES_MIDNIGHT                          16241
#define CONST_TGPID_HEALTH_PERCENT                               1044
#define CONST_TGPID_CUSTOM_VALUE_5                               1595
#define CONST_TGPID_FIRE_HOLD_ACCURACY_PERC_LOW                  1758
#define CONST_TGPID_FIRE_HOLD_DAMAGE_PERC_LOW                    1759
#define CONST_SPRAY_SUPPORTWINS_TRACKER_GOALID                   1407
#define CONST_CONFIG_PROP_KEYBIND_VERSION                        2128
#define CONST_TGPID_SLOW_CAP_PERC                                1948
#define CONST_HARD_DIFFICULTY_CONFIG_ID                          65
#define CONST_GTT_HUD_POPUP                                      10742
#define CONST_TGTT_TARGET_NOT_SELF                               10587
#define CONST_TGPID_MARKED_INHAND                                1970
#define CONST_TgGame_Paladins_GAMEEVENT_TEAM_MATCH_WON           4
#define CONST_TGPID_HEALING_TAKEN_OTHERS_PERC                    1947
#define CONST_TGPID_HEALING_DISABLED                             2119
#define CONST_GT_Tutorial_RToReload                              172
#define CONST_TGPID_DAMAGE_REDUCTION_PERC_PENETRATION            2106
#define CONST_TGPID_DAMAGE_TAKEN_PERC                            316
#define CONST_TGPID_DAMAGE_TAKEN_PERC_INHAND                     1665
#define CONST_THE_LAW_TARGETTING_BEAM_FX_ID                      7680
#define CONST_DEVICE_SELF_RESURRECTION                           19489
#define CONST_TGPID_DAMAGE_TAKEN_PERC_AOE                        1765
#define CONST_EASY_DIFFICULTY_CONFIG_ID                          63
#define CONST_TGPID_DAMAGE_TAKEN_PERC_DIRECT                     1949
#define CONST_TGPID_DAMAGE_TAKEN_PERC_MAX_ATTACK                 2155
#define CONST_GUARDIAN_PHASE_START                               7200.0f
#define CONST_TGPID_DAMAGE_CAP_PERC_CUR_HP                       1858
#define CONST_TGPID_DAMAGE_DEALT_PERC                            65
#define CONST_TGPID_DAMAGE_DEALT_PERC_BASIC                      1605
#define CONST_TGPID_DAMAGE_DEALT_FLAT                            1875
#define CONST_TGPID_HEAL_BLOCK                                   1877
#define CONST_TGPID_STEALTH                                      1416
#define CONST_TGPID_HEAL_CAP                                     2156
#define CONST_TGDT_EMOTE                                         15205
#define CONST_GT_Tutorial_EToUlt                                 176
#define CONST_TGPID_STEALTH_NO_REVEAL                            1660
#define CONST_TGPID_BREAK_GRAB                                   1556
#define CONST_TGPID_GP_STARTING_GOLD                             1426
#define CONST_TGPID_INHAND_REFIRE_SPEED                          1699
#define CONST_TGPID_GP_GOLD_SPOOL                                1500
#define CONST_TGPID_GP_XP_SPOOL                                  1501
#define CONST_TgGamePhase_Push_GAMEEVENT_WEAPON_FIRED            152
#define CONST_LANE_PUSHER_BOT_ID                                 2004
#define CONST_TGPID_GP_ENABLE_NEW_FOW                            1568
#define CONST_TGPID_GP_GOD_XP_COEFFICIENT                        1581
#define CONST_TGPID_INHAND_EFFECTIVE_AOE                         1689
#define CONST_GTT_HUD_POPUP_NO_TITLE                             15136
#define CONST_TGPID_INHAND_ABSOLUTE_AOE                          1690
#define CONST_TGPID_INHAND_RESTORE_AMMO                          1855
#define CONST_DEVICE_ID_OWL_SIDEARM                              19144
#define CONST_TGPID_IGNORE_ACTOR_BLOCKING                        1745
#define CONST_TGFXP_TEXTURE                                      307
#define CONST_TGPID_INHAND_FIRE_OVERRIDE                         1822
#define CONST_TGTT_TARGET_ENEMY_ALT_CC_EFFECT                    17944
#define CONST_TGPID_LOCK_INPUT                                   2129
#define CONST_TGPID_AI_DEVICE_RANGE                              1486
#define CONST_TGPID_HEAD_SHOT_DAMAGE                             1905
#define CONST_TG_MAX_PRIMARY_OBJECTIVES                          5
#define CONST_TgPawn_GAMEEVENT_TEAM_ROUND_WON                    5
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_ROUND_WON        109
#define CONST_TGPID_AI_ACCURACY_PERC                             1888
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_X_SENSITIVITY         1971
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_AIM_ACCEL_BOOST       1974
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_AIM_ASSIST_MAGNET     1975
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_AIM_ASSIST_FRICTION   1976
#define CONST_TGPID_CONFIG_SETTING_GAMEPAD_DEAD_ZONE_OUTER       1985
#define CONST_TGPID_DEATH_FX_TYPE                                2081
#define CONST_NUM_ITEMS_STORE2                                   12
#define CONST_TGEGC_LIFT                                         16657
#define CONST_TgPlayerController_GAMEEVENT_RENDERTHREAD_POLL     40
#define CONST_PROTECTION_IMMUNITY_VALUE                          100
#define CONST_TgPawn_GAMEEVENT_PALADINS_PLAYER_KILL              1001
#define CONST_TgPawn_GAMEEVENT_PALADINS_PLAYER_KILL_NORMAL       2002
#define CONST_NUM_ITEMS_STORE1                                   4
#define CONST_TgPawn_GAMEEVENT_MATCH_ENDED                       1
#define CONST_TGEGC_PERMANENT_REMOVE_ON_DEATH                    16875
#define CONST_TgPawn_GAMEEVENT_ROUND_STARTED                     2
#define CONST_TgPawn_GAMEEVENT_ROUND_ENDED                       3
#define CONST_TgGamePhase_Push_GAMEEVENT_TEAM_GAME_SCORE         51
#define CONST_TGEGT_STACKING_REFRESH                             15440
#define CONST_TgPawn_GAMEEVENT_GAME_CLASS                        6
#define CONST_TgPawn_GAMEEVENT_NETWORKUSAGEIN_POLL               37
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_SPAWN  102
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_LOGIN             100
#define CONST_TgPawn_GAMEEVENT_PING_POLL                         39
#define CONST_TgPawn_GAMEEVENT_PLAYER_LOGOUT                     101
#define CONST_GTP_DieToBuckNetShot                               1923
#define CONST_ABILITY_ANDROXUS_DEFIANCE                          13324
#define CONST_TgPawn_GAMEEVENT_RENDERTHREAD_POLL                 40
#define CONST_GTP_DieToGrover                                    1913
#define CONST_TGEGC_MOUNT_SPEED_BUFF                             15063
#define CONST_TgPawn_GAMEEVENT_TEAM_GAME_SCORE                   51
#define CONST_TgPawn_GAMEEVENT_PLAYER_MATCH_WON                  103
#define CONST_EDM_LOBBY_STOP_EVENT_FX_ID                         12377
#define CONST_TgPawn_GAMEEVENT_PLAYER_TEAMCHANGE                 106
#define CONST_TgPawn_GAMEEVENT_PLAYER_KILL_STREAK                107
#define CONST_FLAGBALL_RESPAWN_DISTANCE                          100
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_NETWORKUSAGEIN_POLL 37
#define CONST_TgPawn_GAMEEVENT_PLAYER_ROUND_WON                  109
#define CONST_GTP_DieToYingIllusion                              1931
#define CONST_TgPawn_GAMEEVENT_WEAPON_DAMAGE                     150
#define CONST_GTP_Toggle3p                                       2063
#define CONST_TgPawn_GAMEEVENT_PLAYER_KILL_NORMAL                200
#define CONST_TgPawn_GAMEEVENT_GENERIC_PARAM_LIST_START          300
#define CONST_SERVER_NINJAJUICE_TOLERANCE                        0.90
#define CONST_MAX_DEVICE_EQPOINT                                 15
#define CONST_TgPawn_TG_MOUNT_TYPE_MAX                           3
#define CONST_TgPawn_TG_EQP_POINT_MAX                            49
#define CONST_PHYS_TWEEN_FLAG_ROTATE_TOWARDS_TARGET              2
#define CONST_TG_DEFAULT_CAMERA_CHECK_RADIUS                     15.0f
#define CONST_TgGamePhase_Push_GAMEEVENT_GENERIC_PARAM_LIST_END  400
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_LOCATION_POLL  105
#define CONST_TG_UNOCCLUDED_WEAPON_SOUND_THREAT_DURATION         1.0
#define CONST_CUE_ATTACKFROMSNIPER_RANGESQR                      1000000
#define CONST_KINESSA_GEN_LOCK                                   27295
#define CONST_CUE_ATTACKFROMABOVE_PERIOD                         30.0
#define CONST_MAX_VISIBLE_THROUGH_STEALTH_INSTIGATORS            12
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GAME_SPECIFIC 1000
#define CONST_TG_PAWN_MOUNT_CAST_FX_ID                           10662
#define CONST_MAX_BLINDING_DEPLOYABLES                           10
#define CONST_TG_CARD_COOLDOWN_ON_DEATH                          false
#define CONST_TG_STILL_DURATION                                  5.0
#define CONST_TG_STILL_THRESHOLD                                 1.0
#define CONST_TG_PAWN_POLYMORPH_OUT_FX_ID                        6674
#define CONST_TG_VOLUME_STEALTH_FADE_TIME                        1.0f
#define CONST_TG_PHYSICALITY_MECHANICALS_AND_DECOYS              15050
#define CONST_TG_PHYSICALITY_DECOYS                              15046
#define CONST_TGTT_ATTACK_GROUND_TARGET_TELEPORT                 10636
#define CONST_TG_PHYSICALITY_MECHANICALS                         10035
#define CONST_TGTT_ATTACK_NA                                     83
#define CONST_TG_PHYSICALITY_STRUCTURES                          861
#define CONST_TG_PHYSICALITY_NON_STRUCTURES                      860
#define CONST_TGC_REMEMBER_PLAYER_ATTACKED_TIME                  2
#define CONST_TGC_KILL_COMBO_MAX_TIME                            5
#define CONST_TG_HIT_INDICATOR_POINTS_TO_INSTIGATOR              1
#define CONST_GTP_SiegeEnginePower                               1804
#define CONST_MAX_EQUIPPED_EMOTES                                4
#define CONST_TG_PROXIMITY_SPEED_MAGNITUDE                       20.0f
#define CONST_GTP_DieToRuckusDualFire                            1928
#define CONST_TGEGC_KNOCKUP                                      15014
#define CONST_FX_SCALE_BY_RADIUS_SQUARED                         1023
#define CONST_TG_ROLE_FLANKER                                    10541
#define CONST_TG_ROLE_FRONTLINE                                  10542
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PALADINS_PLAYER_KILL 1001
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PALADINS_PLAYER_DEATH 1002
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PALADINS_PLAYER_KILL_SUICIDE 2001
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_MATCH_STARTED 0
#define CONST_TGCM_SUBTRACT                                      70
#define CONST_TgPlayerController_GAMEEVENT_GPUFRAMETIME_POLL     42
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_MATCH_ENDED   1
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_ROUND_STARTED 2
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GAME_OPTION_URL 7
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_FRAMERATE_POLL 36
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_NETWORKUSAGEOUT_POLL 38
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_RENDERTHREAD_POLL 40
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GAMETHREAD_POLL 41
#define CONST_PRO_DIFFICULTY_CONFIG_ID                           66
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_FRAMETIME_POLL 43
#define CONST_TgGamePhase_Push_GAMEEVENT_GAMETHREAD_POLL         41
#define CONST_WALL_KNOCKBACK_HIT_CHECK_HEIGHT                    43.0f
#define CONST_ITEM_SKIN_WEAPON_ANDROXUS_PS4                      15147
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_TEAM_GAME_SCORE 51
#define CONST_GTT_HUD_SPECIAL                                    15101
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_TEAM_ROUND_WON 5
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_LOGOUT 101
#define CONST_ABILITY_SKYE_POISONBOLTS                           11491
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_MATCH_WON 103
#define CONST_TgGamePhase_Push_GAMEEVENT_TEAM_CREATED            50
#define CONST_AIE_DAMAGE                                         0
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_LOCATION_POLL 105
#define CONST_TGST_IN_HAND                                       10131
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_PLAYER_DEATH  108
#define CONST_ABILITY_DROGOZ_SALVO                               14140
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_WEAPON_DAMAGE 150
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GENERIC_PARAM_LIST_START 300
#define CONST_TgAIController_BehaviorGod_GAMEEVENT_GENERIC_PARAM_LIST_END 400
#define CONST_TGIFGT_FOOTSTEP_SCUFF                              816
#define CONST_PRACTICE_DIFFICULTY_CONFIG_ID                      62
#define CONST_TGDT_ABILITY                                       11041
#define CONST_TG_NAV_ROUTE_INDICATOR_SPINUP_FX_ID                0
#define CONST_MAX_METERING_CALLBACK_SLOTS                        16
#define CONST_TGDT_MAX_QUEUED_PROJECTILE_TOUCHES                 128
#define CONST_TGDT_CONSUMABLE                                    10097
#define CONST_TGDT_BOT_RANGED                                    670
#define CONST_TGDT_BOT_MELEE                                     671
#define CONST_GT_DieToAnchor                                     187
#define CONST_TGDT_TALENT_ULTIMATE                               15437
#define CONST_HEAL_ALLIES_DEPLOYABLE_ID                          685
#define CONST_TGDT_TALENT_ABILITY2                               15390
#define CONST_TGDT_TEST_DEVICE                                   10844
#define CONST_TGEGC_MARKED_WITH_UI                               15294
#define CONST_TGDT_BASIC_ATTACK                                  10828
#define CONST_TGMAX_FIRE_MODE                                    5
#define CONST_TGDT_ARMOR_CARD                                    11051
#define CONST_TGDT_ABILITY2_CARD                                 15188
#define CONST_DEPLOYMODE_MINIMUM_RADIUS_CHECK_DIST               20.0f
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_KILL_NORMAL      200
#define CONST_DEPLOYMODE_GROUND_DELTA_CHECK_DIST                 60.0f
#define CONST_TgGamePhase_Push_GAMEEVENT_GAME_MAPNAME            8
#define CONST_SPRAY_HEIGHT                                       128
#define CONST_TG_RETICULE_AIM_DISTANCE                           10.f
#define CONST_TGEGC_REDUCED_HEALING                              15368
#define CONST_TG_AOE_FALLOFF_BEGIN_PERCENT                       70.0f
#define CONST_TG_VV_PACING_TYPE_ENERGY                           10014
#define CONST_GT_Dismounted                                      100
#define CONST_TG_VV_PACING_TYPE_MANA                             10013
#define CONST_TG_VV_PACING_TYPE_HEALTH                           10692
#define CONST_TGD_MESH_TYPE_ATTACHED                             856
#define CONST_TGD_MESH_TYPE_INHAND                               855
#define CONST_TGEGT_HIT_SPECIAL_INSTANT                          10681
#define CONST_TGEGT_HIT_SPECIAL_MANAGED                          10036
#define CONST_TGEGT_HIT                                          264
#define CONST_TGEGT_SUCCESSFUL_HIT                               759
#define CONST_GT_Tutorial_StandToCapture                         193
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_LOGOUT         101
#define CONST_TGEGT_ACTIVE                                       11073
#define CONST_TGEGT_FIRED_PER_SHOT                               10030
#define CONST_TGEGT_STOP_FIRING                                  17849
#define CONST_TGEGT_PRE_HIT_DELAY                                10455
#define CONST_TgGamePhase_Push_GAMEEVENT_GPUFRAMETIME_POLL       42
#define CONST_WALL_KNOCKBACK_HIT_CHECK_DISTANCE                  96.0f
#define CONST_TGEGT_WHILE_HOLDING                                15173
#define CONST_TGEGT_WHILE_FIRING                                 263
#define CONST_TALENT_ID_ASH_FORTRESS_BREAKER                     18556
#define CONST_DEVICE_VANGUARD_SHIELD                             19876
#define CONST_TGEGT_BUILDUP                                      262
#define CONST_TGEGT_EQUIP                                        261
#define CONST_BOMBARDMENT_HEAVY_BOMB_MODE                        29636
#define CONST_DEVICE_LIANS_SHIELD                                22888
#define CONST_TgGame_Paladins_GAMEEVENT_GAME_CLASS               6
#define CONST_FX_SCALE_ABSOLUTE                                  10677
#define CONST_FX_SCALE_BY_RADIUS                                 746
#define CONST_TGFXMAT_GENERIC_ENEMY                              17281
#define CONST_MAEVE_STREET_JUSTICE_FX_ID                         11742
#define CONST_TGFXMAT_GENERIC_FRIENDLY                           17280
#define CONST_TGFXMAT_GENERIC_LOCAL                              17279
#define CONST_ITEM_SKIN_WEAPON_VIKTOR_PSPLUS                     15868
#define CONST_TGFXMAT_BODY                                       618
#define CONST_TGFXMAT_HEAD                                       617
#define CONST_SPRAY_TRACE_LENGTH                                 5
#define CONST_TGFXMAT_HAIR                                       616
#define CONST_DEVICE_ABSORPTION_FIELD                            19478
#define CONST_TGFXMAT_GENERIC                                    615
#define CONST_TGFXT_PRIORITY_SPAWN_SORTORDER                     15
#define CONST_TGFXT_PRIORITY_FLAME                               838
#define CONST_GTP_SurvivalMatchStarted                           1850
#define CONST_GTP_ContestPayloadDefenders                        1844
#define CONST_TGFXT_PRIORITY_STEALTH_DETECTION                   627
#define CONST_TGFXT_PRIORITY_STEALTH                             626
#define CONST_TGFXT_PRIORITY_SHIELD                              625
#define CONST_TGFXT_NO_PRIORITY                                  0
#define CONST_TGFXP_COLOR                                        301
#define CONST_TGFXP_VECTOR                                       300
#define CONST_TGEGC_DISABLED_HEALING                             17706
#define CONST_TGFXP_SCALAR                                       299
#define CONST_BOT_ENCOUNTER_DESPAWN_TIME                         60
#define CONST_ICON_TEXTURE_OWL_SNIPER_SWAP                       "AbilityIcon_Strix.Ability_Strix_SwapToSniperRifle"
#define CONST_FORCED_3P_BASE_COLLISION_HEIGHT                    60.0f
#define CONST_OBJECTIVE_ENEMY_SPECIALFX                          2928
#define CONST_OBJECTIVE_FRIENDLY_FOREGROUND_SPECIALFX            6289
#define CONST_TgPlayerController_GAMEEVENT_PALADINS_PLAYER_KILL_SUICIDE 2001
#define CONST_OBJECTIVE_ENEMY_FOREGROUND_SPECIALFX               6287
#define CONST_GT_CheckpointsDefenders                            122
#define CONST_OBJECTIVE_PENDING_FOREGROUND_SPECIALFX             6288
#define CONST_MIN_CAPTURE_FX_RENDER_DISTANCE                     750
#define CONST_TG_TEAM1_CAPTURING                                 1
#define CONST_TG_TEAM2_CAPTURING                                 2
#define CONST_TG_CAPTUREPOINT_FOGHORN_FX_ID                      6694
#define CONST_TGPAWN_ANDROXUS_SLOWFALL_FX_ID                     6824
#define CONST_UNKNOWN_PROJECTILE_INSTANCE_ID                     0
#define CONST_VAMPIRE_COMBO_DEVICE_ID_INHAND                     30610
#define CONST_FIRST_VALID_PROJECTILE_INSTANCE_ID                 1
#define CONST_BASE_RESPAWN_TIME_SEC                              5
#define CONST_MESH_ID_GAUNTLET_ULT_TARGETING                     6824
#define CONST_DEVICE_ID_BLAST_SHOT                               11450
#define CONST_DEVICE_ID_PROTECTION                               15793
#define CONST_TgGamePhase_Push_GAMEEVENT_GAME_SPECIFIC           1000
#define CONST_DEVICE_ID_RECHARGE                                 15794
#define CONST_DEVICE_ID_BLADES_ALTFIRE                           16229
#define CONST_DEVICE_ID_BOOSTER                                  13333
#define CONST_DEVICE_ID_OWL_STEALTH                              19145
#define CONST_DEVICE_ID_OWL_SCOPE                                19111
#define CONST_TGFXLIGHT_MAX_SETTINGS_VALUE                       5
#define CONST_TALENT_ID_ASSYMETRIC_WARFARE                       26958
#define CONST_FIREMODE_ID_CASSIE_CROSSBOW                        24356
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_MATCH_WON        103
#define CONST_ITEM_SET_BARIK_STEAMTF2                            15338
#define CONST_STRIX_EDM_RECOLOR_WEP_SKIN_ID                      23926
#define CONST_ITEM_SKIN_BODY_BARIK_STEAMTF2                      14870
#define CONST_ITEM_SKIN_BODY_ANDROXUS_XBOX                       15146
#define CONST_ITEM_SKIN_BODY_VIKTOR_PSPLUS                       15177
#define CONST_ITEM_SKIN_HEAD_ANDROXUS_PS4                        15133
#define CONST_TG_CK_COOLDOWN_FIREMODE_ID                         30006
#define CONST_ITEM_SKIN_HEAD_VIKTOR_PSPLUS                       15155
#define CONST_TGEGC_MARKED                                       15012
#define CONST_ITEM_SKIN_WEAPON_BARIK_STEAMTF2                    14867
#define CONST_ITEM_SKIN_WEAPON_ANDROXUS_XBOX                     15148
#define CONST_CONFIG_SET_PLAYER_PREFERENCES                      6
#define CONST_GTP_CheckpiointsAttackers                          1846
#define CONST_CONFIG_PROP_KEYBIND_COSMETICWHEEL                  2126
#define CONST_CONFIG_PROP_GAMEPAD_VERSION                        2131
#define CONST_PROP_ACCOUNT_LINK_POPUP_SEEN                       1986
#define CONST_PROP_CARD_TUTORIAL_SEEN                            2020
#define CONST_TG_PAWN_POLYMORPH_RIDER_MESH_ID                    8998
#define CONST_TG_PAWN_POLYMORPH_CHICKEN_OUT_FX_ID                6674
#define CONST_TG_PAWN_POLYMORPH_CHICKEN_IN_FX_ID                 6675
#define CONST_TG_PAWN_POLYMORPH_RIDER_OUT_FX_ID                  10450
#define CONST_TG_PAWN_POLYMORPH_RIDER_IN_FX_ID                   10450
#define CONST_GT_SiegeCapturePhase                               127
#define CONST_TG_PAWN_POLYMORPH_IN_FX_ID                         6675
#define CONST_TG_PAWN_ROYALE_SPAWN_FX_ID                         10493
#define CONST_TG_FOGHORN_FX_ID                                   6694
#define CONST_TG_PAWN_MOUNT_SUMMON_FX_ID                         7203
#define CONST_GRACE_TRACER_FX_ID                                 8105
#define CONST_TgGamePhase_Push_GAMEEVENT_FRAMETIME_POLL          43
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_ROUND_STALEMATE 110
#define CONST_KHAN_ULT_PULL_FX_ID                                10958
#define CONST_GTP_CaptureThePointGameMode                        1836
#define CONST_DEVICE_DEATH_FOG                                   13033
#define CONST_SPRAY_MISSED_3P_FX_ID                              -1
#define CONST_RIGHT_CLICK_CANCELING_ENABLED                      false
#define CONST_SPRAY_HIT_1P_FX_ID                                 7428
#define CONST_MAX_GENERAL_PHYSICAL_STAT                          180.0f
#define CONST_GROHK_SHOCK_PULSE_BOUNCE_FX_ID                     7126
#define CONST_GROVER_VINE_FX_ID                                  6706
#define CONST_TGAUF_ALLOW_NONE                                   0
#define CONST_IMANI_SPLITTING_ICE_FX_ID                          12708
#define CONST_MAEVE_EDM_AFFECTED_CAMERA_EFFECT_FX_ID             9096
#define CONST_MAEVE_EDM_SELF_CAMERA_EFFECT_FX_ID                 9095
#define CONST_IMANI_DIGITIZED_RECOLOR_SKIN_ID                    27014
#define CONST_IMANI_DIGITIZED_SKIN_ID                            26915
#define CONST_PIP_EDM_WEP_SKIN_ID                                23842
#define CONST_GT_CaptureThePointGameMode                         116
#define CONST_STRIX_EDM_WEP_SKIN_ID                              23694
#define CONST_JENOS_EDM_WEP_SKIN_ID                              23846
#define CONST_GTP_AssaultGameMode                                1835
#define CONST_MAEVE_EDM_WEP_SKIN_ID                              19279
#define CONST_TgPlayerController_GAMEEVENT_GAME_MAPNAME          8
#define CONST_PIP_EDM_SKIN_ID                                    23841
#define CONST_GTP_DieToSkyePoisonBolts                           1929
#define CONST_SERIS_EDM_SKIN_ID                                  23854
#define CONST_CORVUS_TIME_DELAY_TARGET_VALID                     0.1f
#define CONST_STRIX_EDM_SKIN_ID                                  23693
#define CONST_MAEVE_EDM_SKIN_ID                                  19275
#define CONST_MESH_ID_GENERIC_ENCROACHMENT_CONE                  10775
#define CONST_PIT_MAX_SIZE                                       20
#define CONST_TGTT_ATTACK_ATTACHED_DEPLOYABLE                    10670
#define CONST_TgPlayerController_GAMEEVENT_PALADINS_PLAYER_KILL  1001
#define CONST_TgPlayerController_GAMEEVENT_PALADINS_PLAYER_DEATH 1002
#define CONST_TgPlayerController_GAMEEVENT_MATCH_ENDED           1
#define CONST_TgPlayerController_GAMEEVENT_GAME_OPTION_URL       7
#define CONST_TgPlayerController_GAMEEVENT_MEMORYUSAGE_POLL      35
#define CONST_TgPlayerController_GAMEEVENT_FRAMERATE_POLL        36
#define CONST_MOLOTOV_NO_NEIGHBOR                                -1
#define CONST_TgPlayerController_GAMEEVENT_NETWORKUSAGEOUT_POLL  38
#define CONST_TgPlayerController_GAMEEVENT_PING_POLL             39
#define CONST_TgPlayerController_GAMEEVENT_FRAMETIME_POLL        43
#define CONST_TgWeaponMeshActor_LexInhand_MAX_THE_LAW_TARGETS    5
#define CONST_TGEGC_APPLY_THROUGH_DEATH                          17971
#define CONST_TgPlayerController_GAMEEVENT_TEAM_MATCH_WON        4
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_SPAWN          102
#define CONST_TgPlayerController_GAMEEVENT_TEAM_ROUND_WON        5
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_LOGIN          100
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_MATCH_WON      103
#define CONST_CARD_IT_WAITS                                      19980
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_TEAMCHANGE     106
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_KILL_STREAK    107
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_DEATH          108
#define CONST_TGPID_SOUL_ARMOR_MAX                               2142
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_ROUND_WON      109
#define CONST_TgPlayerController_GAMEEVENT_WEAPON_DAMAGE         150
#define CONST_TgPlayerController_GAMEEVENT_PLAYER_KILL_NORMAL    200
#define CONST_TgPlayerController_GAMEEVENT_GENERIC_PARAM_LIST_START 300
#define CONST_TgPlayerController_GAMEEVENT_GENERIC_PARAM_LIST_END 400
#define CONST_TgPlayerController_GAMEEVENT_MAX_EVENTID           0x0000FFFF
#define CONST_ABILITY_YING_SHATTER                               13284
#define CONST_ABILITY_RUCKUS_DUALFIRE                            11460
#define CONST_IMPASSE_POST_TARGET_LOCKOUT_TIME                   0.7f
#define CONST_ABILITY_GROVER_AXETHROW                            11490
#define CONST_ABILITY_GROHK_CHAINLIGHTNING                       11510
#define CONST_ABILITY_BOMBKING_STICKY                            14308
#define CONST_ABILITY_ANDROXUS_REVERSAL                          13251
#define CONST_MAX_LAST_PURCHASED                                 26
#define CONST_VGS_SPAM_LENGTH                                    0.5
#define CONST_PING_LENGTH                                        4
#define CONST_MAX_FLASH_SIM_PROJECTILES                          32
#define CONST_MAX_DARK_CONVERGENCE_TARGETS                       5
#define CONST_TGST_HIGHEST_VALUE                                 10130
#define CONST_DARK_CONVERGENCE_PULL_BEAM_FX_ID                   7681
#define CONST_MAX_TRAIL_POINTS                                   20
#define CONST_HEALTH_NUGGET_DOUBLE_ID                            10339
#define CONST_TGEGC_ASTRO_DOT                                    16620
#define CONST_EXIT_STRATEGY_ID                                   10698
#define CONST_MOLOTOV_CENTER_POINTS                              18
#define CONST_MOLOTOV_BLOCK_NEIGHBOR                             -2
#define CONST_TG_DEVICE_ACCURSED_ARM_GUN_ID                      13255
#define CONST_TG_DEVICE_NETHER_STEP_ID                           12658
#define CONST_ANDROLEG2_MAX_STACKS                               10
#define CONST_DRAG_END_LOCATION_LOCK_DIST_SQ                     16384
#define CONST_SPRINT_REFIRE_SAFETY_PERIOD                        0.5f
#define CONST_DEVICE_CHARGE_BURST                                19481
#define CONST_SPRAY_FRONTLINEWINS_TRACKER_GOALID                 1406
#define CONST_DEVICE_SHATTER_FALL                                19836
#define CONST_GT_AssaultGameMode                                 115
#define CONST_CARD_PLAYING_GOD                                   19976
#define CONST_CARD_STONE_STRENGTH                                20063
#define CONST_TgGame_Paladins_GAMEEVENT_MATCH_STARTED            0
#define CONST_DEVICE_ID_DROGOZ_THRUST                            13328
#define CONST_DISCOVERY_DEVICE_ID                                16914
#define CONST_POST_ABORT_LOCKOUT_TIME                            0.45
#define CONST_TGAUF_ALLOW_ALL                                    15
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_TEAMCHANGE        106
#define CONST_TGAUF_ALLOW_CRIPPLE                                8
#define CONST_TGAUF_ALLOW_GRAB                                   4
#define CONST_TGAUF_ALLOW_SILENCE                                2
#define CONST_TGST_BASE_POWER                                    10625
#define CONST_TG_ALACRITY_DEVICE_ID                              18816
#define CONST_TGAUF_ALLOW_STUN                                   1
#define CONST_IMPASSE_TOTAL_WALL_SEGMENTS                        5
#define CONST_TGDT_Direct                                        15206
#define CONST_GT_Tutorial_UToLoadout                             177
#define CONST_TGDT_AoE                                           15207
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_KILL_STREAK      107
#define CONST_TGDT_Magical                                       10057
#define CONST_TGDT_Physical                                      113
#define CONST_TGDT_None                                          112
#define CONST_TGMT_MOVEMENT                                      10583
#define CONST_TGTT_TARGET_FRIEND_AND_ENEMY                       10029
#define CONST_TGTT_TARGET_OWNPET                                 15006
#define CONST_PRE_MATCH_FROZEN_TIME_SECS                         3.0f
#define CONST_TGTT_TARGET_ALL                                    703
#define CONST_TGTT_TARGET_ENEMY                                  212
#define CONST_TGTT_ATTACK_GROUND_TARGET_DEPLOYABLE               10011
#define CONST_TGTT_ATTACK_GROUND_TARGET                          10032
#define CONST_BUNNY_DEFAULT_SPIRIT_FRIENDLY_LINK_BEAM_FX_ID_3P   15625
#define CONST_TGTT_ATTACK_TELEPORT_TO_SPAWN                      1442
#define CONST_TGTT_ATTACK_PROJECTILE_RANGED                      177
#define CONST_TGTT_ATTACK_INSTANT_RANGED                         85
#define CONST_TgGamePhase_Push_GAMEEVENT_WEAPON_DAMAGE           150
#define CONST_SPRAY_DEPTH                                        128
#define CONST_TG_PROXIMITY_SPEED_STACK_MAX                       5
#define CONST_GT_DieToYingShatter                                153
#define CONST_TGCM_NA                                            119
#define CONST_GT_DieToSkyePoisonBolts                            152
#define CONST_TGCM_PERC_INCREASE                                 68
#define CONST_TGCM_PERC_DECREASE                                 69
#define CONST_TGCM_SET_PERC                                      11043
#define CONST_TGEGT_STRONGEST_WINS                               157
#define CONST_TGEGT_REFRESH                                      10257
#define CONST_TGEGC_BLEEDING                                     15026
#define CONST_TGEGC_EXILE                                        17486
#define CONST_TGEGC_CC_IMMUNE                                    15053
#define CONST_GT_Tutorial_ProgressPayload                        195
#define CONST_TGEGC_CONFUSED                                     15011
#define CONST_TGEGC_CRIPPLE                                      10585
#define CONST_TGEGC_DAMAGE_BUFF                                  17732
#define CONST_TGEGC_JUMP_PENALTY                                 11068
#define CONST_TGEGC_KNOCKBACK                                    10052
#define CONST_GTP_DieToViktorFragGrenade                         1932
#define CONST_TGEGC_MOVEMENT_SPEED_BUFF                          15062
#define CONST_TGEGC_ON_FIRE                                      10858
#define CONST_TGEGC_POISONED                                     10859
#define CONST_TGEGC_POLYMORPH                                    15051
#define CONST_TGEGC_YAGORATH_POISON                              17940
#define CONST_TGEGC_ROOT                                         10050
#define CONST_GT_LeveledUp                                       102
#define CONST_TGEGC_SHIELD_SPECIAL                               15291
#define CONST_SEVEN_ULT_BEAM_FX_ID                               16229
#define CONST_GTP_DieToBombKingGrumpy                            1922
#define CONST_TGEGC_SILENCE                                      10053
#define CONST_TGEGC_SLOW                                         10048
#define CONST_TGEGC_STUN                                         10049
#define CONST_TGEGC_STUN_TAUNT                                   10649
#define CONST_TGEGC_WEAKEN                                       15071
#define CONST_TGEGC_LEX_REVEAL                                   15506
#define CONST_TGEGC_SOUL_ORB_STACK                               15547
#define CONST_TGEGC_MESMERIZE                                    16608
#define CONST_TGEGC_ASTRO_HEAL                                   16627
#define CONST_TGEGC_ASTRO_BUFF                                   16628
#define CONST_TGEGC_PRESENCE_DOT                                 16637
#define CONST_TGEGC_FLASH_BANG                                   16658
#define CONST_TGEGC_PERMANENT                                    16874
#define CONST_MAX_SIM_PROJ_OVERRIDES                             8
#define CONST_TGEGC_TRUE_HEALING                                 18170
#define CONST_TIMER_LIFEDONE                                     1
#define CONST_DEFAULT_MAX_EFFECT_STACKS                          100
#define CONST_TGST_ITEM_POWER                                    10552
#define CONST_TGEGC_SCALING_HOT                                  17823
#define CONST_AIE_STUN_PROXY_EFFECT_GROUP_ID                     33431
#define CONST_AIE_MANA                                           2
#define CONST_AIE_HEALTH                                         1
#define CONST_REFRESH_ADD                                        2
#define CONST_REFRESH_NONE                                       0
#define CONST_TGEGS_EMPTY_REP                                    4
#define CONST_TGEGS_FLASH_REP                                    3
#define CONST_TgGamePhase_Push_GAMEEVENT_MAX_EVENTID             0x0000FFFF
#define CONST_TGEGS_ACTIVE                                       2
#define CONST_TG_PROXIMITY_SPEED_MOD_RADIUS                      20.0f
#define CONST_TGEGS_ACTIVE_REP                                   1
#define CONST_MAX_MARKED_TARGETS                                 5
#define CONST_TGEGS_EMPTY                                        0
#define CONST_TGEA_MAX_EFFECTS_QUEUE                             16
#define CONST_GAUNTLET_MAX_BEAM_SEGMENTS                         12
#define CONST_GTP_CapturingPoints                                1805
#define CONST_PROJECTILE_LINE_TRACE_DISTANCE                     32
#define CONST_TGIFGT_FOOTSTEP_RUN                                760
#define CONST_TGIFGT_FOOTSTEP_WALK                               815
#define CONST_SURRENDER_TIME_SECS                                60.0
#define CONST_SURRENDER_TIME_BETWEEN                             180.0
#define CONST_PLAYER_END_GAME_DELAY                              10.0f
#define CONST_FINISH_END_MISSION_DELAY                           300.0
#define CONST_PRE_GUARDIAN_PHASE_START                           7110.0f
#define CONST_MAX_GENERAL_MAGICAL_STAT                           540.0f
#define CONST_MAX_GENERAL_DEFENSE_STAT                           228.0f
#define CONST_TgGame_Paladins_GAMEEVENT_MAX_EVENTID              0x0000FFFF
#define CONST_GTP_ProgressPayload                                1842
#define CONST_GTP_EnemySiegeEngine                               1834
#define CONST_TgGame_Paladins_GAMEEVENT_GAME_SPECIFIC            1000
#define CONST_TgGame_Paladins_GAMEEVENT_GENERIC_PARAM_LIST_END   400
#define CONST_TgGame_Paladins_GAMEEVENT_WEAPON_FIRED             152
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_ROUND_STALEMATE   110
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_ROUND_WON         109
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_DEATH             108
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_LOCATION_POLL     105
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_KILL              104
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_MATCH_WON         103
#define CONST_TgGame_Paladins_GAMEEVENT_PLAYER_LOGOUT            101
#define CONST_TgGame_Paladins_GAMEEVENT_TEAM_ROUND_STALEMATE     52
#define CONST_TgGame_Paladins_GAMEEVENT_TEAM_ROUND_WON           5
#define CONST_TgGame_Paladins_GAMEEVENT_TEAM_GAME_SCORE          51
#define CONST_TgGame_Paladins_GAMEEVENT_FRAMETIME_POLL           43
#define CONST_TgGame_Paladins_GAMEEVENT_GPUFRAMETIME_POLL        42
#define CONST_TgGame_Paladins_GAMEEVENT_RENDERTHREAD_POLL        40
#define CONST_TgGame_Paladins_GAMEEVENT_PING_POLL                39
#define CONST_TG_CK_JUMP_BUFF_FIREMODE_ID                        30009
#define CONST_TgGame_Paladins_GAMEEVENT_NETWORKUSAGEOUT_POLL     38
#define CONST_TgGame_Paladins_GAMEEVENT_NETWORKUSAGEIN_POLL      37
#define CONST_TgGame_Paladins_GAMEEVENT_MEMORYUSAGE_POLL         35
#define CONST_TgGame_Paladins_GAMEEVENT_GAME_OPTION_URL          7
#define CONST_TgGame_Paladins_GAMEEVENT_PALADINS_PLAYER_KILL     1001
#define CONST_TgGame_Paladins_GAMEEVENT_ROUND_ENDED              3
#define CONST_TgGame_Paladins_GAMEEVENT_ROUND_STARTED            2
#define CONST_TgGame_Paladins_GAMEEVENT_MATCH_ENDED              1
#define CONST_TgGame_Paladins_GAMEEVENT_PALADINS_PLAYER_KILL_ASSIST 2003
#define CONST_TgGame_Paladins_SUDDEN_DEATH_MSG_ID                195974
#define CONST_FLAGBALL_DEVICE_ID                                 23446
#define CONST_TDM_MEDIUM_MUSIC_SCORE_THRESHOLD                   10
#define CONST_TDM_LOW_MUSIC_SCORE_THRESHOLD                      13
#define CONST_GT_DieToGrohkChainLightning                        149
#define CONST_PALADINS_ACTIVITY_WELL_TRAINED                     1975
#define CONST_TgGamePhase_Push_GAMEEVENT_PALADINS_PLAYER_KILL_SUICIDE 2001
#define CONST_TgGamePhase_Push_GAMEEVENT_PALADINS_PLAYER_KILL_NORMAL 2002
#define CONST_TgGamePhase_Push_GAMEEVENT_PALADINS_PLAYER_KILL_ASSIST 2003
#define CONST_TgGamePhase_Push_GAMEEVENT_MATCH_STARTED           0
#define CONST_TgGamePhase_Push_GAMEEVENT_MATCH_ENDED             1
#define CONST_TgGamePhase_Push_GAMEEVENT_ROUND_STARTED           2
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_LOGIN            100
#define CONST_TgGamePhase_Push_GAMEEVENT_ROUND_ENDED             3
#define CONST_TgGamePhase_Push_GAMEEVENT_GAME_CLASS              6
#define CONST_TgGamePhase_Push_GAMEEVENT_MEMORYUSAGE_POLL        35
#define CONST_TgGamePhase_Push_GAMEEVENT_FRAMERATE_POLL          36
#define CONST_TgGamePhase_Push_GAMEEVENT_NETWORKUSAGEOUT_POLL    38
#define CONST_TgGamePhase_Push_GAMEEVENT_PING_POLL               39
#define CONST_TgGamePhase_Push_GAMEEVENT_TEAM_MATCH_WON          4
#define CONST_TgGamePhase_Push_GAMEEVENT_TEAM_ROUND_WON          5
#define CONST_TgGamePhase_Push_GAMEEVENT_TEAM_ROUND_STALEMATE    52
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_LOGOUT           101
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_SPAWN            102
#define CONST_TgGamePhase_Push_GAMEEVENT_PLAYER_KILL             104
#define CONST_TDM_LOW_MUSIC_TIME_THRESHOLD                       60
#define CONST_TG_MAX_TASK_TEAM_NUMBER                            10
#define CONST_TDM_HIGH_MUSIC_TIME_THRESHOLD                      10
#define CONST_GT_CardsOnCooldown                                 101
#define CONST_GT_SiegeEnginePower                                103
#define CONST_GT_CardTypes                                       106
#define CONST_GT_Level6                                          107
#define CONST_GT_HealthNugget                                    108
#define CONST_GT_PushObjectiveAttack                             110
#define CONST_GT_PushObjectiveDefend                             111
#define CONST_GT_PushObjectiveEnded                              112
#define CONST_GT_EnemySiegeEngine                                114
#define CONST_GT_ProgressPayload                                 117
#define CONST_GT_ContestPayloadDefenders                         119
#define CONST_GT_PayloadTipBackwards                             120
#define CONST_GTP_SiegeCapturePhase                              1903
#define CONST_GT_SurvivalMatchStarted                            124
#define CONST_GT_DieToKinessa                                    137
#define CONST_GT_RoundEndSurvivalOrSiege                         126
#define CONST_GT_SiegeLostPoint                                  130
#define CONST_GT_RoundLostSurvivalOrSiege                        131
#define CONST_GT_DieToCassie                                     133
#define CONST_GT_DieToEvie                                       134
#define CONST_ORACLE_BEAM_FADE_START_VALUE                       0.0f
#define CONST_GT_DieToPip                                        138
#define CONST_GT_DieToRuckus                                     140
#define CONST_GT_DieToSkye                                       141
#define CONST_GT_DieToAndroxusDefiance                           142
#define CONST_GT_DieToAndroxusReversal                           143
#define CONST_GT_DieToBombKingSticky                             144
#define CONST_GT_DieToBombKingGrumpy                             145
#define CONST_GT_DieToBuckNetShot                                146
#define CONST_GT_DieToDrogozFireSpit                             148
#define CONST_GT_DieToGroverAxeThrow                             150
#define CONST_GT_DieToRuckusDualFire                             151
#define CONST_GT_DieToYingIllusion                               154
#define CONST_GT_DieToDeathFog                                   159
#define CONST_GT_SiegeCapturingPoint                             160
#define CONST_GT_SiegeContestingPayload                          162
#define CONST_GT_Tutorial_AimUsingMouse                          164
#define CONST_GT_Tutorial_MoveLeftRight                          166
#define CONST_GT_Tutorial_SpaceToJump                            167
#define CONST_GT_Tutorial_MoveOnMount                            168
#define CONST_GT_Tutorial_DismountedOnDamage                     169
#define CONST_GT_Tutorial_ChampionsRegenerateHealth              170
#define CONST_GT_Tutorial_RMBToIronSights                        175
#define CONST_GT_Tutorial_OneCardPerCategory                     179
#define CONST_GT_Tutorial_ItemsLastMatch                         191
#define CONST_GT_Tutorial_ActiveObjectiveMarker                  192
#define CONST_GT_Tutorial_EnemiesHaltPayload                     196
#define CONST_GT_DieToMakoa                                      188
#define CONST_ORACLE_BEAM_FADE_END_VALUE                         0.7f
#define CONST_GTP_CapturePointObjective                          1801
#define CONST_GTP_CardsOnCooldown                                1802
#define CONST_GTP_LeveledUp                                      1803
#define CONST_GTP_Level6                                         1808
#define CONST_GTP_HealthNugget                                   1809
#define CONST_GTP_PushObjectiveAttack                            1829
#define CONST_GTP_PushObjectiveDefend                            1830
#define CONST_GTP_FriendlySiegeEngine                            1833
#define CONST_GTP_PayloadTipBackwards                            1845
#define CONST_GTP_CheckpointsDefenders                           1847
#define CONST_GTP_SurvivalFogConverging                          1851
#define CONST_GTP_SiegeCapturedPoint                             1906
#define CONST_GTP_SiegeLostPoint                                 1907
#define CONST_GTP_DieToCassie                                    1910
#define CONST_GTP_DieToKinessa                                   1914
#define CONST_GTP_DieToPip                                       1915
#define CONST_GTP_DieToBarikTurret                               1916
#define CONST_GTP_DieToRuckus                                    1917
#define CONST_GTP_DieToSkye                                      1918
#define CONST_GTP_DieToBombKingSticky                            1921
#define CONST_LOW_PRIORITY_REMINDERS_SECS                        120.f
#define CONST_GTP_DieToGroverAxeThrow                            1927
#define CONST_GTP_DieToUltimate                                  1933
#define CONST_GTP_PayloadCheckpoint1ReachedAttackers             1934
#define CONST_GTP_PayloadCheckpoint1ReachedDefenders             1935
#define CONST_GTP_SiegeCapturingPoint                            1937
#define CONST_GTP_SiegePayloadBackingUp                          1940
#define CONST_GTP_DieToAnchor                                    1956
#define CONST_GTP_DieToMakoa                                     1957
#define CONST_GTP_DieToMalDamba                                  1958
#define CONST_GTP_CounteringTorvald                              2018
#define CONST_GTP_AutoPurchaseItems                              2021
#define CONST_GTT_HUD                                            10634
#define CONST_GTT_WORLD_TIP                                      15029
#define CONST_BOMBKING_COMBO_DEVICE_ID_AUTO                      14308
#define CONST_BOMBKING_COMBO_FIREMODE_ID_STICKY_BOMB_DETONATE    25097
#define CONST_EVIE_COMBO_DEVICE_ID_ICE_BLOCK                     11414
#define CONST_GROVER_COMBO_DEVICE_ID_AUTO                        13026
#define CONST_MAX_GRACE_TARGETS                                  15
#define CONST_TG_NAV_ROUTE_INDICATOR_SPINDOWN_FX_ID              0
#define CONST_CARD_STAR_SEEKER                                   1
#define CONST_MAX_DJ_BLADES_FACE_PRIORITIES                      3
#define CONST_DEVICE_ID_SALVO                                    14140
#define CONST_ACTIVE_SHIELD_MASK                                 1
#define CONST_GENERAL_DEFENSIVE_MASK                             4
#define CONST_TGPM_REMEMBER_PLAYER_ATTACKED_TIME                 4
#define CONST_TgPawn_Lex_MAX_THE_LAW_TARGETS                     5
#define CONST_ORACLE_MAX_STACK_TARGETS                           10
#define CONST_ORACLE_STACK_FX_GROUP_ID                           57644
#define CONST_ORACLE_STACK_1P_FX_ID                              7739
#define CONST_ORACLE_SOUL_COLLECTOR_DEVICE_ID                    16610
#define CONST_ORACLE_SECONDARY_HEAL_BEAM_FX_ID                   7708
#define CONST_ORACLE_MAX_SECONDARY_HEAL_TARGETS                  4
#define CONST_ORACLE_AGONY_EFFECT_PERCENT_PER_ORB                5
#define CONST_RIDER_MAX_MARKED_TARGETS                           5
#define CONST_MAX_VOODOO_LINKS                                   5
#define CONST_TGPID_CONFIG_SETTING_GYRO_X_SENSITIVITY            2136
#define CONST_TG_SURRENDER_VOTE_NONE                             0x00
#define CONST_TGPID_SOUL_ARMOR                                   2141
#define CONST_BASE_DRAWN_CARDS                                   3
#define CONST_MAX_DECK_SLOTS                                     5
#define CONST_MAX_TRACKED_PROJECTILES                            15
#define CONST_SPRAY_SUPPORTWINS_TRACKER_ACTIVITYID               2021
#define CONST_TG_MAX_PING_INFO                                   4
#define CONST_TG_ITEM_STORE_MAX                                  6
#define CONST_TG_ACTIVE_ITEMS_MAX                                3
#define CONST_TG_CONSUMABLE_MAX                                  2
#define CONST_TG_GENERAL_STATS_MAX                               4
#define CONST_TG_PROPS_MAX                                       20
#define CONST_TG_MAX_PREMADE_DEPLOYS                             20
#define CONST_ENEMY_DISTANCE_RADIUS                              800.0f
#define CONST_TGSKELCON_HOOKCHAIN_TOTALSEGMENTS                  72
#define CONST_TGSKELCON_HOOKCHAIN_STARTOFFSET                    4
#define CONST_DEFAULT_AKEVENT_SHUTDOWN_DELAY                     5.0
#define CONST_INVALID_LIGHTARRAY_INDEX                           -1
#define CONST_TG_MAX_DISTANCE_FOR_SPAWN_CALCULATION              1600.0f
#define CONST_TgWeaponMeshActor_TG_EQP_POINT_MAX                 49
#define CONST_THE_LAW_TARGETTING_BEAM_EXECUTE_FX_ID              7834
#define CONST_THE_LAW_HIT_BEAM_FX_ID                             7703
#define CONST_ORACLE_MAX_BEAM_SEGMENTS                           12
#define CONST_ORACLE_BEAM_FADE_START_DIST                        800.0f
#define CONST_MOON_SHARD_MAX_GRABBED_PAWNS                       5
#define CONST_CASPIAN_SWORDFLAG_ISACTIVE                         1
#define CONST_CASPIAN_SWORDFLAG_ISFIRED                          2
#define CONST_DEFAULT_BLOSSOM_FX_RADIUS                          40.0f
#define CONST_BOMB_QUEEN_BAG_BOMBS                               16
#define CONST_BUNNY_DEFAULT_SPIRIT_FRIENDLY_LINK_BEAM_FX_ID_1P   15624
#define CONST_BUNNY_DEFAULT_SPIRIT_ENEMY_LINK_BEAM_FX_ID_1P      15688
#define CONST_BUNNY_DEFAULT_SPIRIT_LINK_BEAM_BREAK_FX_ID_1P      15681
#define CONST_BUNNY_GLOBAL_MAX_SPIRIT_LINKS                      3
#define CONST_BUNNY_JUMP_HEIGHT_INCREASE                         1.5
#define CONST_MAX_IMANI_DIGITIZED_FACES                          8
#define CONST_RAUM_LIFESHARD_SMOOTHING_NORMALIZATION             3.334
#define CONST_RAUM_SHARDFLAG_ISSUCKING                           2
#define CONST_RAUM_SHARDFLAG_ISACTIVE                            1
#define CONST_SEVEN_MAX_MARKED_TARGETS                           5
#define CONST_DEFAULT_ULT_BEAM_FX_ID_1P                          15508
#define CONST_VAMP_GLOBAL_MAX_MARKS                              2

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgGame.AlienFXManager.FXOverlay
enum class EFXOverlay : uint8_t
{
	FXO_NONE                       = 0,
	FXO_MENU                       = 1,
	FXO_CHESTOPENING               = 2,
	FXO_CHESTREVEAL                = 3,
	FXO_UNLOCKEDCHAMP              = 4,
	FXO_MATCHLOBBY                 = 5,
	FXO_MATCHSETUP                 = 6,
	FXO_GAMEPLAY                   = 7,
	FXO_MATCHOVERTIME              = 8,
	FXO_MATCHVICTORY               = 9,
	FXO_MATCHDEFEAT                = 10,
	FXO_POINTVICTORY               = 11,
	FXO_POINTDEFEAT                = 12,
	FXO_ULT                        = 13,
	FXO_MAX                        = 14
};


// Enum TgGame.TgAchievement_MaldambaSpecificChallenge.MaldambaSpecificChallengeEntryType
enum class EMaldambaSpecificChallengeEntryType : uint8_t
{
	MALCHAL_FEAR_TARGET            = 0,
	MALCHAL_HEAL_ALLY              = 1,
	MALCHAL_BECOME_SNAKE           = 2,
	MALCHAL_MAX                    = 3
};


// Enum TgGame.TgActionPoint.eActionPointType
enum class EeActionPointType : uint8_t
{
	ACTION_NONE                    = 0,
	ACTION_RELAX_OPEN              = 1,
	ACTION_MINE_DEFAULT            = 2,
	ACTION_RELAX_WALL              = 3,
	ACTION_CONSOLE_STANDARD        = 4,
	ACTION_CONSOLE_LAB_DEFAULT     = 5,
	ACTION_GUARD_WATCH_NORMAL      = 6,
	ACTION_GUARD_WATCH_ELEVATED    = 7,
	ACTION_FACTORY_LINE_DEFAULT    = 8,
	ACTION_SNIPE                   = 9,
	ACTION_PLACE_TURRET            = 10,
	ACTION_PLACE_SHIELD            = 11,
	ACTION_PLACE_CRATE             = 12,
	ACTION_PLACE_MINE              = 13,
	ACTION_PLACE_SENSOR            = 14,
	ACTION_MAX                     = 15
};


// Enum TgGame.TgObject.EWeaponMeshSwapRetrieveStrategy
enum class EWeaponMeshSwapRetrieveStrategy : uint8_t
{
	WMSRS_None                     = 0,
	WMSRS_Normal                   = 1,
	WMSRS_PostFire                 = 2,
	WMSRS_MAX                      = 3
};


// Enum TgGame.TgObject.EModelHighlightType
enum class EModelHighlightType : uint8_t
{
	HIGHLIGHT_None                 = 0,
	HIGHLIGHT_Body                 = 1,
	HIGHLIGHT_Head                 = 2,
	HIGHLIGHT_Weapon               = 3,
	HIGHLIGHT_MAX                  = 4
};


// Enum TgGame.TgObject.EDamageLocationType
enum class EDamageLocationType : uint8_t
{
	DamageLocationType_None        = 0,
	DamageLocationType_Torso       = 1,
	DamageLocationType_LLeg        = 2,
	DamageLocationType_RLeg        = 3,
	DamageLocationType_LArm        = 4,
	DamageLocationType_RArm        = 5,
	DamageLocationType_Head        = 6,
	DamageLocationType_MAX         = 7
};


// Enum TgGame.TgObject.GAME_ITEMS_TYPE
enum class EGAME_ITEMS_TYPE : uint8_t
{
	ITEMS_NONE                     = 0,
	ITEMS_STANDARD                 = 1,
	ITEMS_CONQUEST                 = 2,
	ITEMS_ROYALE                   = 3,
	ITEMS_MAX                      = 4
};


// Enum TgGame.TgObject.LOOTTYPE
enum class ELOOTTYPE : uint8_t
{
	LOOT_ITEM                      = 0,
	LOOT_SKILL                     = 1,
	LOOT_TALENT                    = 2,
	LOOT_MAX                       = 3
};


// Enum TgGame.TgObject.EPedestalType
enum class EPedestalType : uint8_t
{
	PEDESTAL_FrontLine             = 0,
	PEDESTAL_Flank                 = 1,
	PEDESTAL_Support               = 2,
	PEDESTAL_Damager               = 3,
	PEDESTAL_Team1                 = 4,
	PEDESTAL_Team2                 = 5,
	PEDESTAL_Team3                 = 6,
	PEDESTAL_Team4                 = 7,
	PEDESTAL_Team5                 = 8,
	PEDESTAL_MAX                   = 9
};


// Enum TgGame.TgObject.EThreatLevel
enum class EThreatLevel : uint8_t
{
	ThreatLevel_Invalid            = 0,
	ThreatLevel_None               = 1,
	ThreatLevel_Low                = 2,
	ThreatLevel_Medium             = 3,
	ThreatLevel_High               = 4,
	ThreatLevel_MAX                = 5
};


// Enum TgGame.TgObject.EPlayOfTheGameEventType
enum class EPlayOfTheGameEventType : uint8_t
{
	POTG_ScoreKillSingle           = 0,
	POTG_ScoreKillDouble           = 1,
	POTG_ScoreKillTriple           = 2,
	POTG_ScoreKillQuad             = 3,
	POTG_ScoreKillPenta            = 4,
	POTG_ScoreKillHexa             = 5,
	POTG_ScoreAssist               = 6,
	POTG_Emote                     = 7,
	POTG_Spray                     = 8,
	POTG_MovementAbility           = 9,
	POTG_OvertimeStarted           = 10,
	POTG_Died                      = 11,
	POTG_RoundEnded                = 12,
	POTG_Healing                   = 13,
	POTG_HealingSelf               = 14,
	POTG_DamagePercent             = 15,
	POTG_EnvironmentKill           = 16,
	POTG_Shielding                 = 17,
	POTG_DamagePrevented           = 18,
	POTG_DamagePreventedSelf       = 19,
	POTG_HeadShot                  = 20,
	POTG_ContestTime               = 21,
	POTG_ObjectiveTime             = 22,
	POTG_CrowdControlSoft          = 23,
	POTG_CrowdControlHard          = 24,
	POTG_ForcedPOTG                = 25,
	POTG_MAX                       = 26
};


// Enum TgGame.TgObject.EPetPosition
enum class EPetPosition : uint8_t
{
	PETPOS_Default                 = 0,
	PETPOS_Front                   = 1,
	PETPOS_FrontRight              = 2,
	PETPOS_Right                   = 3,
	PETPOS_BackRight               = 4,
	PETPOS_Back                    = 5,
	PETPOS_BackLeft                = 6,
	PETPOS_Left                    = 7,
	PETPOS_FrontLeft               = 8,
	PETPOS_MAX                     = 9
};


// Enum TgGame.TgObject.EPetPhase
enum class EPetPhase : uint8_t
{
	PETPHASE_Default               = 0,
	PETPHASE_CodeOverride          = 1,
	PETPHASE_Heel                  = 2,
	PETPHASE_Follow                = 3,
	PETPHASE_Guard                 = 4,
	PETPHASE_MAX                   = 5
};


// Enum TgGame.TgObject.EPolymorphType
enum class EPolymorphType : uint8_t
{
	Polymorph_None                 = 0,
	Polymorph_Chicken              = 1,
	Polymorph_Rider                = 2,
	Polymorph_MAX                  = 3
};


// Enum TgGame.TgObject.EGameMode
enum class EGameMode : uint8_t
{
	GameMode_Siege                 = 0,
	GameMode_Survival              = 1,
	GameMode_CapturePoint          = 2,
	GameMode_MAX                   = 3
};


// Enum TgGame.TgObject.EGameRespawnRule
enum class EGameRespawnRule : uint8_t
{
	GameRespawnRule_Normal         = 0,
	GameRespawnRule_Phoenix        = 1,
	GameRespawnRule_GrimReaper     = 2,
	GameRespawnRule_MAX            = 3
};


// Enum TgGame.TgObject.EGameEnvironmentRule
enum class EGameEnvironmentRule : uint8_t
{
	GameEnvRule_Normal             = 0,
	GameEnvRule_Chill              = 1,
	GameEnvRule_Foggy              = 2,
	GameEnvRule_HeatWave           = 3,
	GameEnvRule_MAX                = 4
};


// Enum TgGame.TgObject.EMountType
enum class EMountType : uint8_t
{
	MOUNT_Horse                    = 0,
	MOUNT_Cat                      = 1,
	MOUNT_Vehicle                  = 2,
	MOUNT_MAX                      = 3
};


// Enum TgGame.TgObject.ELobbyAnimState
enum class ELobbyAnimState : uint8_t
{
	LobbyAnimState_None            = 0,
	LobbyAnimState_Intro           = 1,
	LobbyAnimState_Emote           = 2,
	LobbyAnimState_MVP             = 3,
	LobbyAnimState_MAX             = 4
};


// Enum TgGame.TgObject.ELanePusherActionPoint
enum class ELanePusherActionPoint : uint8_t
{
	LPAP_None                      = 0,
	LPAP_OuterWall                 = 1,
	LPAP_InnerWall                 = 2,
	LPAP_BaseObjective             = 3,
	LPAP_Checkpoint1               = 4,
	LPAP_Checkpoint2               = 5,
	LPAP_Goal                      = 6,
	LPAP_PayloadBegin              = 7,
	LPAP_MAX                       = 8
};


// Enum TgGame.TgObject.EUITargetingType
enum class EUITargetingType : uint8_t
{
	UITARGETING_None               = 0,
	UITARGETING_PendingRocketLockOn = 1,
	UITARGETING_RocketLockOn       = 2,
	UITARGETING_MAX                = 3
};


// Enum TgGame.TgObject.ECardOwner
enum class ECardOwner : uint8_t
{
	CARDOWNER_NONE                 = 0,
	CARDOWNER_FREE                 = 1,
	CARDOWNER_SELF                 = 2,
	CARDOWNER_TEAM                 = 3,
	CARDOWNER_MAX                  = 4
};


// Enum TgGame.TgObject.EAbilityInfoSlot
enum class EAbilityInfoSlot : uint8_t
{
	SLOT_Ability1                  = 0,
	SLOT_Ability2                  = 1,
	SLOT_Ability3                  = 2,
	SLOT_Perk1                     = 3,
	SLOT_Perk2                     = 4,
	SLOT_Perk3                     = 5,
	SLOT_Perk4                     = 6,
	SLOT_Perk5                     = 7,
	SLOT_Perk6                     = 8,
	SLOT_Perk7                     = 9,
	SLOT_Perk8                     = 10,
	SLOT_Perk9                     = 11,
	SLOT_Perk10                    = 12,
	SLOT_Perk11                    = 13,
	SLOT_Perk12                    = 14,
	SLOT_Perk13                    = 15,
	SLOT_Perk14                    = 16,
	SLOT_MAX                       = 17
};


// Enum TgGame.TgObject.EReticuleType
enum class EReticuleType : uint8_t
{
	RETICULE_None                  = 0,
	RETICULE_Circle                = 1,
	RETICULE_Precise               = 2,
	RETICULE_Wide                  = 3,
	RETICULE_Dot                   = 4,
	RETICULE_ShaLin                = 5,
	RETICULE_Atlas                 = 6,
	RETICULE_Maeve                 = 7,
	RETICULE_Drop                  = 8,
	RETICULE_MAX                   = 9
};


// Enum TgGame.TgObject.EPurchaseFailure
enum class EPurchaseFailure : uint8_t
{
	TGPF_None                      = 0,
	TGPF_UnknownItem               = 1,
	TGPF_UnavailableItem           = 2,
	TGPF_UnknownOwner              = 3,
	TGPF_NotEnoughCurrency         = 4,
	TGPF_AtStackLimit              = 5,
	TGPF_AlreadyPurchased          = 6,
	TGPF_NoAvailableSlots          = 7,
	TGPF_InvalidUpgrade            = 8,
	TGPF_CannotSell                = 9,
	TGPF_CannotSellInUse           = 10,
	TGPF_Unknown                   = 11,
	TGPF_MAX                       = 12
};


// Enum TgGame.TgObject.ERewardValueType
enum class ERewardValueType : uint8_t
{
	RVT_None                       = 0,
	RVT_Initial                    = 1,
	RVT_Spool                      = 2,
	RVT_Kill                       = 3,
	RVT_Assist                     = 4,
	RVT_Taken                      = 5,
	RVT_Healing                    = 6,
	RVT_Mitigated                  = 7,
	RVT_Damage                     = 8,
	RVT_Objective                  = 9,
	RVT_Captured                   = 10,
	RVT_Capturing                  = 11,
	RVT_Contesting                 = 12,
	RVT_Destroyed                  = 13,
	RVT_PushingPayload             = 14,
	RVT_ContestingPayload          = 15,
	RVT_RoundWon                   = 16,
	RVT_SuccessfulDefense          = 17,
	RVT_SuccessfulPush             = 18,
	RVT_Cheat                      = 19,
	RVT_Bounty                     = 20,
	RVT_Gather                     = 21,
	RVT_Gained                     = 22,
	RVT_OctaviaPassive             = 23,
	RVT_CreditItem                 = 24,
	RVT_MAX                        = 25
};


// Enum TgGame.TgObject.GOD_PANTHEON
enum class EGOD_PANTHEON : uint8_t
{
	PANTHEON_None                  = 0,
	PANTHEON_Egyptian              = 1,
	PANTHEON_Norse                 = 2,
	PANTHEON_Greek                 = 3,
	PANTHEON_Roman                 = 4,
	PANTHEON_Chinese               = 5,
	PANTHEON_Mayan                 = 6,
	PANTHEON_Hindu                 = 7,
	PANTHEON_MAX                   = 8
};


// Enum TgGame.TgObject.HitReactionMoveType
enum class EHitReactionMoveType : uint8_t
{
	HIT_MOVE_TYPE_ALL              = 0,
	HIT_MOVE_TYPE_IDLE             = 1,
	HIT_MOVE_TYPE_MOVING           = 2,
	HIT_MOVE_TYPE_MAX              = 3
};


// Enum TgGame.TgObject.RecoilHitDir
enum class ERecoilHitDir : uint8_t
{
	RECOIL_DIR_FromFront           = 0,
	RECOIL_DIR_FromBack            = 1,
	RECOIL_DIR_FromLeft            = 2,
	RECOIL_DIR_FromRight           = 3,
	RECOIL_DIR_MAX                 = 4
};


// Enum TgGame.TgObject.PING_TYPE
enum class EPING_TYPE : uint8_t
{
	PT_NORMAL                      = 0,
	PT_NORMAL_ENEMY                = 1,
	PT_RETREAT                     = 2,
	PT_RETREAT_ENEMY               = 3,
	PT_ALERT                       = 4,
	PT_ALERT_ENEMY                 = 5,
	PT_SENTINEL                    = 6,
	PT_SENTINEL_ENEMY              = 7,
	PT_ALERT_SILENT                = 8,
	PT_MAX                         = 9
};


// Enum TgGame.TgObject.EUISettingUpdate
enum class EUISettingUpdate : uint8_t
{
	UISU_All                       = 0,
	UISU_AudioVideo                = 1,
	UISU_Interface                 = 2,
	UISU_Control                   = 3,
	UISU_Targeting                 = 4,
	UISU_Gamepad                   = 5,
	UISU_MAX                       = 6
};


// Enum TgGame.TgObject.EDeviceFailType
enum class EDeviceFailType : uint8_t
{
	DFT_None                       = 0,
	DFT_Unspecified                = 1,
	DFT_Custom                     = 2,
	DFT_NotEnoughPower             = 3,
	DFT_OnCooldown                 = 4,
	DFT_CannotPlace                = 5,
	DFT_Stunned                    = 6,
	DFT_Silenced                   = 7,
	DFT_Disarmed                   = 8,
	DFT_Crippled                   = 9,
	DFT_FireLockout                = 10,
	DFT_InCombat                   = 11,
	DFT_FullHealth                 = 12,
	DFT_NotOnGround                = 13,
	DFT_NoAmmo                     = 14,
	DFT_TransitioningTo1p          = 15,
	DFT_Polymorphed                = 16,
	DFT_Mounted                    = 17,
	DFT_MAX                        = 18
};


// Enum TgGame.TgObject.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_CARD                       = 5,
	EQP_RECALL                     = 6,
	EQP_EMOTE                      = 7,
	EQP_BURN_CARD                  = 8,
	EQP_BURN_CARD01                = 9,
	EQP_BURN_CARD02                = 10,
	EQP_BURN_CARD03                = 11,
	EQP_SUPPORT                    = 12,
	EQP_REGEN                      = 13,
	EQP_SUPPORT01                  = 14,
	EQP_ULT_CHARGE                 = 15,
	EQP_ALT_FIRE                   = 16,
	EQP_SPRAY                      = 17,
	EQP_SUPPORT02                  = 18,
	EQP_CARD01                     = 19,
	EQP_CARD02                     = 20,
	EQP_CARD03                     = 21,
	EQP_CARD04                     = 22,
	EQP_MOUNT                      = 23,
	EQP_COMBO                      = 24,
	EQP_MVPPOSE                    = 25,
	EQP_TALENT                     = 26,
	EQP_PROPERTY_DEBUG             = 27,
	EQP_BURN_CARD04                = 28,
	EQP_BURN_CARD05                = 29,
	EQP_UNUSED                     = 30,
	EQP_GAME_MODE_RESERVED         = 31,
	EQP_UNUSED01                   = 32,
	EQP_UNUSED02                   = 33,
	EQP_UNUSED03                   = 34,
	EQP_UNUSED04                   = 35,
	EQP_UNUSED05                   = 36,
	EQP_UNUSED06                   = 37,
	EQP_UNUSED07                   = 38,
	EQP_UNUSED08                   = 39,
	EQP_UNUSED09                   = 40,
	EQP_UNUSED10                   = 41,
	EQP_UNUSED11                   = 42,
	EQP_UNUSED12                   = 43,
	EQP_UNUSED13                   = 44,
	EQP_UNUSED14                   = 45,
	EQP_UNUSED15                   = 46,
	EQP_UNUSED16                   = 47,
	EQP_UNUSED17                   = 48,
	EQP_MAX                        = 49
};


// Enum TgGame.TgObject.eTutorialForceableElements
enum class EeTutorialForceableElements : uint8_t
{
	ETBUI_Skills                   = 0,
	ETBUI_ItemShop                 = 1,
	ETBUI_ItemShopButton           = 2,
	ETBUI_Intro                    = 3,
	ETBUI_ItemShopWalkthrough      = 4,
	ETBUI_ActiveItems              = 5,
	ETBUI_ConsumableItems          = 6,
	ETBUI_Escape                   = 7,
	ETBUI_MAX                      = 8
};


// Enum TgGame.TgObject.TgSupportedAspectRatios
enum class ETgSupportedAspectRatios : uint8_t
{
	TgAR_4x3                       = 0,
	TgAR_5x4                       = 1,
	TgAR_16x9                      = 2,
	TgAR_16x10                     = 3,
	TgAR_Other                     = 4,
	TgAR_MAX                       = 5
};


// Enum TgGame.TgObject.ENPCVoices
enum class ENPCVoices : uint8_t
{
	NPCVOICE_VendorMale01          = 0,
	NPCVOICE_VendorMale02          = 1,
	NPCVOICE_VendorMale03          = 2,
	NPCVOICE_VendorMale04          = 3,
	NPCVOICE_VendorMale05          = 4,
	NPCVOICE_VendorMale06          = 5,
	NPCVOICE_VendorMale07          = 6,
	NPCVOICE_VendorMale08          = 7,
	NPCVOICE_VendorMale09          = 8,
	NPCVOICE_VendorMale10          = 9,
	NPCVOICE_VendorFemale01        = 10,
	NPCVOICE_VendorFemale02        = 11,
	NPCVOICE_VendorFemale03        = 12,
	NPCVOICE_VendorFemale04        = 13,
	NPCVOICE_VendorFemale05        = 14,
	NPCVOICE_VendorFemale06        = 15,
	NPCVOICE_VendorFemale07        = 16,
	NPCVOICE_VendorFemale08        = 17,
	NPCVOICE_VendorFemale09        = 18,
	NPCVOICE_VendorFemale10        = 19,
	NPCVOICE_MAX                   = 20
};


// Enum TgGame.TgObject.DeployableOverlayState
enum class EDeployableOverlayState : uint8_t
{
	DOS_IDLE                       = 0,
	DOS_ACTIVE                     = 1,
	DOS_FINISHED                   = 2,
	DOS_MAX                        = 3
};


// Enum TgGame.TgObject.DeployableOverlayIcon
enum class EDeployableOverlayIcon : uint8_t
{
	DOI_BLANK                      = 0,
	DOI_TURRET                     = 1,
	DOI_GRUMPY_BOMB                = 2,
	DOI_ILLUSION                   = 3,
	DOI_ILLUSION_ULT               = 4,
	DOI_TIME_BOMB                  = 5,
	DOI_POPPY_BOMB                 = 6,
	DOI_MEGA_TURRET                = 7,
	DOI_OPPRESSOR_MINE             = 8,
	DOI_STICKY_BOMB                = 9,
	DOI_FRAG_GRENADE               = 10,
	DOI_DYNAMIC                    = 11,
	DOI_DARK_CONVERGENCE           = 12,
	DOI_SEEDLING                   = 13,
	DOI_DEMON_TELEPORT             = 14,
	DOI_HEAL                       = 15,
	DOI_DEATH_MARKER               = 16,
	DOI_FLAGBALL                   = 17,
	DOI_BROADSIDE                  = 18,
	DOI_KRAKEN                     = 19,
	DOI_SHORTCUT                   = 20,
	DOI_DRUID_FOX                  = 21,
	DOI_DRUID_FOX_LIT              = 22,
	DOI_TERMINUS_ULT               = 23,
	DOI_SAATI_DECOY                = 24,
	DOI_CLUSTER_GRENADE            = 25,
	DOI_MAX                        = 26
};


// Enum TgGame.TgObject.MinimapFactoryType
enum class EMinimapFactoryType : uint8_t
{
	MMF_None                       = 0,
	MMF_Speed                      = 1,
	MMF_Damage                     = 2,
	MMF_Protection                 = 3,
	MMF_Mana                       = 4,
	MMF_Cooldown                   = 5,
	MMF_HealthRegen                = 6,
	MMF_BonusMinions               = 7,
	MMF_Tower                      = 8,
	MMF_Phoenix                    = 9,
	MMF_CapturePoint               = 10,
	MMF_MinorSpawn                 = 11,
	MMF_GoldFury                   = 12,
	MMF_SiegeSpawner               = 13,
	MMF_MAX                        = 14
};


// Enum TgGame.TgObject.OverlayType
enum class EOverlayType : uint8_t
{
	OT_UNKNOWN                     = 0,
	OT_LOCALPLAYER                 = 1,
	OT_PLAYER                      = 2,
	OT_DEPLOYABLE                  = 3,
	OT_MAX                         = 4
};


// Enum TgGame.TgObject.AlertType
enum class EAlertType : uint8_t
{
	ATT_Regular                    = 0,
	ATT_Beneficial                 = 1,
	ATT_Detrimental                = 2,
	ATT_Spectator                  = 3,
	ATT_Important                  = 4,
	ATT_MAX                        = 5
};


// Enum TgGame.TgObject.AlertPriority
enum class EAlertPriority : uint8_t
{
	APT_Minimal                    = 0,
	APT_Normal                     = 1,
	APT_High                       = 2,
	APT_Critical                   = 3,
	APT_MAX                        = 4
};


// Enum TgGame.TgObject.ETargetingHighlightStyle
enum class ETargetingHighlightStyle : uint8_t
{
	THS_None                       = 0,
	THS_Highlight                  = 1,
	THS_HighlightAndMark           = 2,
	THS_HighlightAndBracket        = 3,
	THS_HighlightAndBracketWorld   = 4,
	THS_MAX                        = 5
};


// Enum TgGame.TgObject.ETargetingReticleStyle
enum class ETargetingReticleStyle : uint8_t
{
	TRS_None                       = 0,
	TRS_MAX                        = 1
};


// Enum TgGame.TgObject.ETargetingPreviewStyle
enum class ETargetingPreviewStyle : uint8_t
{
	TPS_None                       = 0,
	TPS_MAX                        = 1
};


// Enum TgGame.TgObject.ETargetingLineStyle
enum class ETargetingLineStyle : uint8_t
{
	TLS_None                       = 0,
	TLS_MAX                        = 1
};


// Enum TgGame.TgObject.UIDISPLAYTYPE
enum class EUIDISPLAYTYPE : uint8_t
{
	UIDISPLAY_ALWAYS               = 0,
	UIDISPLAY_MOUSE                = 1,
	UIDISPLAY_PCONLY               = 2,
	UIDISPLAY_CONSOLE              = 3,
	UIDISPLAY_GAMEPAD              = 4,
	UIDISPLAY_MAX                  = 5
};


// Enum TgGame.TgObject.ELobbyCameraTag
enum class ELobbyCameraTag : uint8_t
{
	LobbyCam_Login                 = 0,
	LobbyCam_TitleHome             = 1,
	LobbyCam_TitlePlay             = 2,
	LobbyCam_SearchingForMatch     = 3,
	LobbyCam_MatchLobby            = 4,
	LobbyCam_TitleChampions        = 5,
	LobbyCam_ViewAllChampions      = 6,
	LobbyCam_ViewChampion          = 7,
	LobbyCam_TitleChests           = 8,
	LobbyCam_LootChest             = 9,
	LobbyCam_Store                 = 10,
	LobbyCam_StoreDetail           = 11,
	LobbyCam_EndOfMatchLobby       = 12,
	LobbyCam_WisdomDetail          = 13,
	LobbyCam_ViewChampionWeapon    = 14,
	LobbyCam_TeamMatchLobby        = 15,
	LobbyCam_VIPStoreCamera        = 16,
	LobbyCam_VIPStoreWeapon        = 17,
	LobbyCam_EventHome             = 18,
	LobbyCam_EventQuest            = 19,
	LobbyCam_BattlePassRewards     = 20,
	LobbyCam_StoreWeapon           = 21,
	LobbyCam_StoreChests           = 22,
	LobbyCam_ChestOpening          = 23,
	LobbyCam_Gifts                 = 24,
	LobbyCam_GiftOpening           = 25,
	LobbyCam_BattlePassCloseup     = 26,
	LobbyCam_ProfilePreview        = 27,
	LobbyCam_MAX                   = 28
};


// Enum TgGame.TgObject.CameraPerspectiveType
enum class ECameraPerspectiveType : uint8_t
{
	CamPT_FirstPerson              = 0,
	CamPT_ThirdPerson              = 1,
	CamPT_ThirdPersonAbility       = 2,
	CamPT_ThirdPersonMounted       = 3,
	CamPT_ThirdPersonFreeRotate    = 4,
	CamPT_MAX                      = 5
};


// Enum TgGame.TgObject.MiniMapEntityType
enum class EMiniMapEntityType : uint8_t
{
	MMap_LocalSpectator            = 0,
	MMap_LocalPlayer               = 1,
	MMap_Player                    = 2,
	MMap_Bot                       = 3,
	MMap_Factory                   = 4,
	MMap_Deployable                = 5,
	MMap_CapturePoint              = 6,
	MMap_ChaosCapturePoint         = 7,
	MMap_MAX                       = 8
};


// Enum TgGame.TgObject.TgMapTeam
enum class ETgMapTeam : uint8_t
{
	MAPTEAM                        = 0,
	MAPTEAM01                      = 1,
	MAPTEAM_NEUTRAL                = 2,
	MAPTEAM_MAX                    = 3
};


// Enum TgGame.TgObject.PLAYER_COMBAT_EVENT_TYPE
enum class EPLAYER_COMBAT_EVENT_TYPE : uint8_t
{
	PCET_None                      = 0,
	PCET_Spawn                     = 1,
	PCET_MAX                       = 2
};


// Enum TgGame.TgObject.ITEM_EVENT_TYPE
enum class EITEM_EVENT_TYPE : uint8_t
{
	IET_None                       = 0,
	IET_CastStart                  = 1,
	IET_CastComplete               = 2,
	IET_CastInterrupt              = 3,
	IET_ItemPurchase               = 4,
	IET_ItemSell                   = 5,
	IET_AbilityPurchase            = 6,
	IET_MAX                        = 7
};


// Enum TgGame.TgObject.DAMAGE_INFO_TYPE
enum class EDAMAGE_INFO_TYPE : uint8_t
{
	DIT_None                       = 0,
	DIT_Death                      = 1,
	DIT_Damage                     = 2,
	DIT_Status                     = 3,
	DIT_Healing                    = 4,
	DIT_ManaBurn                   = 5,
	DIT_ManaRestore                = 6,
	DIT_Objective                  = 7,
	DIT_Experience                 = 8,
	DIT_Currency                   = 9,
	DIT_Level                      = 10,
	DIT_CritDamage                 = 11,
	DIT_HeadShot                   = 12,
	DIT_Backstab                   = 13,
	DIT_KillingBlow                = 14,
	DIT_Assist                     = 15,
	DIT_KillingBlowWrath           = 16,
	DIT_ShieldDamage               = 17,
	DIT_CappedDamage               = 18,
	DIT_MAX                        = 19
};


// Enum TgGame.TgObject.DeviceTargetMode
enum class EDeviceTargetMode : uint8_t
{
	TGDTM_Self                     = 0,
	TGDTM_Reticle                  = 1,
	TGDTM_Projectile               = 2,
	TGDTM_AOE                      = 3,
	TGDTM_Ground                   = 4,
	TGDTM_Cone                     = 5,
	TGDTM_Linear                   = 6,
	TGDTM_LockOn                   = 7,
	TGDTM_SpawnPoint               = 8,
	TGDTM_WorldMap                 = 9,
	TGDTM_ReticleFindSpot          = 10,
	TGDTM_MAX                      = 11
};


// Enum TgGame.TgObject.GameTimerState
enum class EGameTimerState : uint8_t
{
	TGMTS_UNSET                    = 0,
	TGMTS_WAITING_FOR_PLAYERS      = 1,
	TGMTS_SETUP                    = 2,
	TGMTS_MISSION_RUNNING          = 3,
	TGMTS_MISSION_OVERTIME         = 4,
	TGMTS_MISSION_COMPLETE         = 5,
	TGMTS_MISSION_PAUSED           = 6,
	TGMTS_CUSTOM                   = 7,
	TGMTS_ROUND_COMPLETE           = 8,
	TGMTS_MAX                      = 9
};


// Enum TgGame.TgObject.TG_GAME_TYPE
enum class ETG_GAME_TYPE : uint8_t
{
	TGT_UNSET                      = 0,
	TGT_CITY                       = 1,
	TGT_ARENA                      = 2,
	TGT_ARENA_PRACTICE             = 3,
	TGT_ARENA_CAPTURE              = 4,
	TGT_ARENA_ESCORT               = 5,
	TGT_ARENA_ESCORT_PRACTICE      = 6,
	TGT_BATTLE                     = 7,
	TGT_BATTLE_EXPERT              = 8,
	TGT_BATTLE_PRACTICE            = 9,
	TGT_BATTLE_JOUST               = 10,
	TGT_BATTLE_CASUAL              = 11,
	TGT_BATTLE_TRAINING            = 12,
	TGT_BATTLE_ARAM                = 13,
	TGT_BATTLE_ARAM_PRACTICE       = 14,
	TGT_POINTCAPTURE               = 15,
	TGT_DOMINATION                 = 16,
	TGT_SINGLEPOINTCAPTUREANDHOLD  = 17,
	TGT_IDOL                       = 18,
	TGT_SIEGE                      = 19,
	TGT_BATTLE_TC                  = 20,
	TGT_BATTLE_SHOOTINGRANGE       = 21,
	TGT_CHAOS                      = 22,
	TGT_CHAOS_PRACTICE             = 23,
	TGT_CHAOSRACE                  = 24,
	TGT_CHAOS_PUSH                 = 25,
	TGT_CHAOS_PAYLOAD              = 26,
	TGT_CHAOS_PAYLOAD_PRACTICE     = 27,
	TGT_CHAOS_CAPTUREANDPAYLOAD    = 28,
	TGT_CHAOS_CAPTUREANDPAYLOAD_PRACTICE = 29,
	TGT_CHAOS_CAPTUREPOINT         = 30,
	TGT_CHAOS_CAPTUREPOINT_PRACTICE = 31,
	TGT_CHAOS_SURVIVAL             = 32,
	TGT_CHAOS_SURVIVAL_PRACTICE    = 33,
	TGT_CHAOS_SHOOTINGRANGE        = 34,
	TGT_CHAOS_TUTORIAL             = 35,
	TGT_CHAOS_PVE                  = 36,
	TGT_CHAOS_PVE_SURVIVAL         = 37,
	TGT_CHAOS_TEAM_DEATH_MATCH     = 38,
	TGT_CHAOS_ONSLAUGHT            = 39,
	TGT_CHAOS_ONSLAUGHT_PRACTICE   = 40,
	TGT_CHAOS_ROYALE               = 41,
	TGT_CHAOS_ASCENDED_ASSAULT     = 42,
	TGT_CHAOS_FLAGBALL             = 43,
	TGT_CHAOS_EVENT                = 44,
	TGT_CHAOS_END_TIMES            = 45,
	TGT_CHAOS_CRAZY_KING           = 46,
	TGT_MAX                        = 47
};


// Enum TgGame.TgObject.GAME_WIN_STATE
enum class EGAME_WIN_STATE : uint8_t
{
	GWS_NONE                       = 0,
	GWS_TASKFORCE_TWO_WON          = 1,
	GWS_TASKFORCE_ONE_WON          = 2,
	GWS_TIE                        = 3,
	GWS_MAX                        = 4
};


// Enum TgGame.TgObject.INITIALIZEABLE_BOOL
enum class EINITIALIZEABLE_BOOL : uint8_t
{
	IBOOL_UNINITIALIZED            = 0,
	IBOOL_FALSE                    = 1,
	IBOOL_TRUE                     = 2,
	IBOOL_MAX                      = 3
};


// Enum TgGame.TgActorFactory.eSelectionMethod
enum class EeSelectionMethod : uint8_t
{
	TGSM_RANDOM                    = 0,
	TGSM_SEQUENTIAL                = 1,
	TGSM_MAX                       = 2
};


// Enum TgGame.TgAIController_Behavior.EUseDeviceAimType
enum class EUseDeviceAimType : uint8_t
{
	AIDeviceAim_CombatTarget       = 0,
	AIDeviceAim_Self               = 1,
	AIDeviceAim_MAX                = 2
};


// Enum TgGame.TgAIController_Behavior.ERangeType
enum class ERangeType : uint8_t
{
	RangeType_Short                = 0,
	RangeType_Mid                  = 1,
	RangeType_Long                 = 2,
	RangeType_None                 = 3,
	RangeType_MAX                  = 4
};


// Enum TgGame.TgAIController_Behavior.EBotDifficultyLevel
enum class EBotDifficultyLevel : uint8_t
{
	AIDifficulty_Practice          = 0,
	AIDifficulty_Easy1             = 1,
	AIDifficulty_Easy2             = 2,
	AIDifficulty_Medium1           = 3,
	AIDifficulty_Medium2           = 4,
	AIDifficulty_Hard1             = 5,
	AIDifficulty_Hard2             = 6,
	AIDifficulty_Pro1              = 7,
	AIDifficulty_Pro2              = 8,
	AIDifficulty_Max               = 9
};


// Enum TgGame.TgAIBehaviorNode.EBehaviorStatus
enum class EBehaviorStatus : uint8_t
{
	BEHAVIOR_None                  = 0,
	BEHAVIOR_Complete              = 1,
	BEHAVIOR_Running               = 2,
	BEHAVIOR_Paused                = 3,
	BEHAVIOR_Failed                = 4,
	BEHAVIOR_Aborted               = 5,
	BEHAVIOR_MAX                   = 6
};


// Enum TgGame.TgAIBehaviorNode.EBehaviorComparison
enum class EBehaviorComparison : uint8_t
{
	BEHAVIORCOMPARE_Equal          = 0,
	BEHAVIORCOMPARE_NotEqual       = 1,
	BEHAVIORCOMPARE_LessThan       = 2,
	BEHAVIORCOMPARE_LessThanOrEqual = 3,
	BEHAVIORCOMPARE_GreaterThan    = 4,
	BEHAVIORCOMPARE_GreaterThanOrEqual = 5,
	BEHAVIORCOMPARE_MAX            = 6
};


// Enum TgGame.TgAIController_Behavior.EUtilityType
enum class EUtilityType : uint8_t
{
	UTIL_Function                  = 0,
	UTIL_Filter                    = 1,
	UTIL_MAX                       = 2
};


// Enum TgGame.TgAIController_Behavior.EAIAnnotationType
enum class EAIAnnotationType : uint8_t
{
	AIA_AssaultPoint               = 0,
	AIA_CoverPoint                 = 1,
	AIA_MAX                        = 2
};


// Enum TgGame.TgAIController_Behavior.ETargetSelector
enum class ETargetSelector : uint8_t
{
	TargetSelect_Closest           = 0,
	TargetSelect_Weakest           = 1,
	TargetSelect_Strongest         = 2,
	TargetSelect_LowestPercentHealth = 3,
	TargetSelect_Random            = 4,
	TargetSelect_MAX               = 5
};


// Enum TgGame.TgAIController_Behavior.ESelectionArbitrator
enum class ESelectionArbitrator : uint8_t
{
	ARBITRATE_FAIL                 = 0,
	ARBITRATE_CLOSEST              = 1,
	ARBITRATE_RANDOM               = 2,
	ARBITRATE_FIRST                = 3,
	ARBITRATE_MAX                  = 4
};


// Enum TgGame.TgAIController_Behavior.EEffectGroupCategory
enum class EEffectGroupCategory : uint8_t
{
	AIEffectCategory_None          = 0,
	AIEffectCategory_Slow          = 1,
	AIEffectCategory_Stun          = 2,
	AIEffectCategory_Frozen        = 3,
	AIEffectCategory_Knockback     = 4,
	AIEffectCategory_Root          = 5,
	AIEffectCategory_Silence       = 6,
	AIEffectCategory_Disarm        = 7,
	AIEffectCategory_Cripple       = 8,
	AIEffectCategory_Daze          = 9,
	AIEffectCategory_Fear          = 10,
	AIEffectCategory_Taunt         = 11,
	AIEffectCategory_Mesmerize     = 12,
	AIEffectCategory_MAX           = 13
};


// Enum TgGame.TgAIController_Behavior.EActiveType
enum class EActiveType : uint8_t
{
	AIActive_Meditation            = 0,
	AIActive_HandOfGods            = 1,
	AIActive_Sprint                = 2,
	AIActive_Ward                  = 3,
	AIActive_Aegis                 = 4,
	AIActive_Beads                 = 5,
	AIActive_MAX                   = 6
};


// Enum TgGame.TgAIController_Behavior.EConsumableType
enum class EConsumableType : uint8_t
{
	AIConsumable_HealthPotion      = 0,
	AIConsumable_ManaPotion        = 1,
	AIConsumable_MultiPotion       = 2,
	AIConsumable_Ward              = 3,
	AIConsumable_DamagePotion      = 4,
	AIConsumable_DefensePotion     = 5,
	AIConsumable_MAX               = 6
};


// Enum TgGame.TgAIController_Behavior.EJungleTargetType
enum class EJungleTargetType : uint8_t
{
	AIJungleTarget_Attack          = 0,
	AIJungleTarget_Mana            = 1,
	AIJungleTarget_Speed           = 2,
	AIJungleTarget_BigXP           = 3,
	AIJungleTarget_LittleXP        = 4,
	AIJungleTarget_GoldFury        = 5,
	AIJungleTarget_Nearest         = 6,
	AIJungleTarget_MAX             = 7
};


// Enum TgGame.TgAIController_Behavior.ECombatTargetType
enum class ECombatTargetType : uint8_t
{
	AICombatTarget_Any             = 0,
	AICombatTarget_God             = 1,
	AICombatTarget_Guardian        = 2,
	AICombatTarget_Minion          = 3,
	AICombatTarget_Tower           = 4,
	AICombatTarget_JungleCamp      = 5,
	AICombatTarget_Pet             = 6,
	AICombatTarget_Decoy           = 7,
	AICombatTarget_Deployable      = 8,
	AICombatTarget_GodBot          = 9,
	AICombatTarget_GodHuman        = 10,
	AICombatTarget_SiegeWall       = 11,
	AICombatTarget_Turret          = 12,
	AICombatTarget_MAX             = 13
};


// Enum TgGame.TgPawn.EBotBehaviorState
enum class EBotBehaviorState : uint8_t
{
	BEHAVIORSTATE_IDLE             = 0,
	BEHAVIORSTATE_ENGAGING         = 1,
	BEHAVIORSTATE_FALLBACK         = 2,
	BEHAVIORSTATE_MAX              = 3
};


// Enum TgGame.TgPawn.EMetaGameState
enum class EMetaGameState : uint8_t
{
	GAMESTATE_NONE                 = 0,
	GAMESTATE_NEUTRAL              = 1,
	GAMESTATE_ACTIVE_POINT         = 2,
	GAMESTATE_ATTACKING            = 3,
	GAMESTATE_DEFENDING            = 4,
	GAMESTATE_TITAN_BATTLE         = 5,
	GAMESTATE_MAX                  = 6
};


// Enum TgGame.TgPawn.EMountState
enum class EMountState : uint8_t
{
	MS_None                        = 0,
	MS_Summon                      = 1,
	MS_Mounted                     = 2,
	MS_MAX                         = 3
};


// Enum TgGame.TgPawn.EEmoteCategory
enum class EEmoteCategory : uint8_t
{
	EMOTECAT_None                  = 0,
	EMOTECAT_PlayerVGS             = 1,
	EMOTECAT_SpawnChatter          = 2,
	EMOTECAT_AbilityOnCooldown     = 3,
	EMOTECAT_TakingDamage          = 4,
	EMOTECAT_Celebration           = 5,
	EMOTECAT_Kills                 = 6,
	EMOTECAT_Action                = 7,
	EMOTECAT_ContextCue            = 8,
	EMOTECAT_HealContext           = 9,
	EMOTECAT_PainContext           = 10,
	EMOTECAT_Ultimate              = 11,
	EMOTECAT_Override              = 12,
	EMOTECAT_Movement              = 13,
	EMOTECAT_MAX                   = 14
};


// Enum TgGame.TgPawn.EEmote
enum class EEmote : uint8_t
{
	EMOTE_None                     = 0,
	EMOTE_Wait                     = 1,
	EMOTE_Shutup                   = 2,
	EMOTE_Chatter                  = 3,
	EMOTE_Achievement              = 4,
	EMOTE_Taunt                    = 5,
	EMOTE_Joke                     = 6,
	EMOTE_Laugh                    = 7,
	EMOTE_Health_Low               = 8,
	EMOTE_Kill_Streak              = 9,
	EMOTE_Intro                    = 10,
	EMOTE_Death                    = 11,
	EMOTE_DeathDirected            = 12,
	EMOTE_DeathGrunt               = 13,
	EMOTE_DeathFall                = 14,
	EMOTE_FirstBlood               = 15,
	EMOTE_Ability1                 = 16,
	EMOTE_Ability2                 = 17,
	EMOTE_Ability3                 = 18,
	EMOTE_AbilityUltimate          = 19,
	EMOTE_Mount                    = 20,
	EMOTE_SetOnFire                = 21,
	EMOTE_StunnedOrFrozen          = 22,
	EMOTE_Kill                     = 23,
	EMOTE_KillSiegeEngine          = 24,
	EMOTE_KillGate                 = 25,
	EMOTE_LevelUp                  = 26,
	EMOTE_Victory                  = 27,
	EMOTE_Defeat                   = 28,
	EMOTE_PickWeaponCard           = 29,
	EMOTE_PickArmorCard            = 30,
	EMOTE_PickAbilityCard          = 31,
	EMOTE_KillAssist               = 32,
	EMOTE_UniqueCombat             = 33,
	EMOTE_KillAbility1             = 34,
	EMOTE_KillAbility2             = 35,
	EMOTE_CapturePoint             = 36,
	EMOTE_TakingDamage             = 37,
	EMOTE_EnemyCapturingPoint      = 38,
	EMOTE_OnPointAndFiring         = 39,
	EMOTE_HealedByTeammate         = 40,
	EMOTE_HealMe                   = 41,
	EMOTE_Weapon                   = 42,
	EMOTE_Idle                     = 43,
	EMOTE_Credits                  = 44,
	EMOTE_HelpTheTank              = 45,
	EMOTE_WaitForTeam              = 46,
	EMOTE_AbilityOnCooldown        = 47,
	EMOTE_Mastery1                 = 48,
	EMOTE_Mastery9                 = 49,
	EMOTE_Mastery12                = 50,
	EMOTE_Mastery15                = 51,
	EMOTE_Train                    = 52,
	EMOTE_GruntHit                 = 53,
	EMOTE_GruntJump                = 54,
	EMOTE_BehindUs                 = 55,
	EMOTE_AboveUs                  = 56,
	EMOTE_Sniper                   = 57,
	EMOTE_Respawn                  = 58,
	EMOTE_MAX                      = 59
};


// Enum TgGame.TgPawn.STEALTH_TYPE
enum class ESTEALTH_TYPE : uint8_t
{
	STEALTH_TYPE_NONE              = 0,
	STEALTH_TYPE_PULSED            = 1,
	STEALTH_TYPE_FADING            = 2,
	STEALTH_TYPE_INSTANT           = 3,
	STEALTH_TYPE_NO_REVEAL         = 4,
	STEALTH_TYPE_MAX               = 5
};


// Enum TgGame.TgPawn.TG_REP_DEVICE_STATE
enum class ETG_REP_DEVICE_STATE : uint8_t
{
	RDS_INACTIVE                   = 0,
	RDS_FIRING                     = 1,
	RDS_GENERIC1                   = 2,
	RDS_GENERIC2                   = 3,
	RDS_MAX                        = 4
};


// Enum TgGame.TgPawn.EChargeState
enum class EChargeState : uint8_t
{
	CHARGE_None                    = 0,
	CHARGE_NoTurn                  = 1,
	CHARGE_NoTurn_RotPawn          = 2,
	CHARGE_NoTurnBackwards         = 3,
	CHARGE_Turn                    = 4,
	CHARGE_Fairy                   = 5,
	CHARGE_MAX                     = 6
};


// Enum TgGame.TgPawn.ETweenState
enum class ETweenState : uint8_t
{
	TWEEN_None                     = 0,
	TWEEN_Default                  = 1,
	TWEEN_DefaultImmune            = 2,
	TWEEN_TimedKnockup             = 3,
	TWEEN_Damagable                = 4,
	TWEEN_DamagableSuspend         = 5,
	TWEEN_PullGrab                 = 6,
	TWEEN_PullGrabWithCollision    = 7,
	TWEEN_Lift                     = 8,
	TWEEN_LiftImmune               = 9,
	TWEEN_MAX                      = 10
};


// Enum TgGame.TgPawn.TG_POSTURE
enum class ETG_POSTURE : uint8_t
{
	TG_POSTURE_DEFAULT             = 0,
	TG_POSTURE_REST                = 1,
	TG_POSTURE_FUSSY               = 2,
	TG_POSTURE_INTRO               = 3,
	TG_POSTURE_ENRAGED             = 4,
	TG_POSTURE_PATROL              = 5,
	TG_POSTURE_GENERICFIRE1        = 6,
	TG_POSTURE_GENERICFIRE2        = 7,
	TG_POSTURE_GENERICFIRE3        = 8,
	TG_POSTURE_DEAD                = 9,
	TG_POSTURE_SEARCHING           = 10,
	TG_POSTURE_FALLING             = 11,
	TG_POSTURE_MOUNT               = 12,
	TG_POSTURE_STASIS              = 13,
	TG_POSTURE_KNOCKBACK           = 14,
	TG_POSTURE_MESMERIZE           = 15,
	TG_POSTURE_DISARMED            = 16,
	TG_POSTURE_SCARED              = 17,
	TG_POSTURE_STUNNED             = 18,
	TG_POSTURE_PULLED              = 19,
	TG_POSTURE_FEARLIFT            = 20,
	TG_POSTURE_SHOOTWHILEPULL      = 21,
	TG_POSTURE_NONE                = 22,
	TG_POSTURE_MAX                 = 23
};


// Enum TgGame.TgPawn.EHitAudioCue
enum class EHitAudioCue : uint8_t
{
	CUEHIT_None                    = 0,
	CUEHIT_Pain                    = 1,
	CUEHIT_FromAbove               = 2,
	CUEHIT_FromBehind              = 3,
	CUEHIT_Sniper                  = 4,
	CUEHIT_MAX                     = 5
};


// Enum TgGame.TgPawn.OverlayState
enum class EOverlayState : uint8_t
{
	OMS_Normal                     = 0,
	OMS_ForceVisible               = 1,
	OMS_ForceHidden                = 2,
	OMS_MAX                        = 3
};


// Enum TgGame.TgPawn.OverlayMICType
enum class EOverlayMICType : uint8_t
{
	OMT_None                       = 0,
	OMT_Execute                    = 1,
	OMT_Shield                     = 2,
	OMT_CCImmune                   = 3,
	OMT_CharacterCustom1           = 4,
	OMT_Freeze                     = 5,
	OMT_MAX                        = 6
};


// Enum TgGame.TgCombatActor.DiminishingReturnsProfile
enum class EDiminishingReturnsProfile : uint8_t
{
	DRP_Type1                      = 0,
	DRP_Type2                      = 1,
	DRP_MAX                        = 2
};


// Enum TgGame.TgCombatActor.GameplayDesignType
enum class EGameplayDesignType : uint8_t
{
	GDT_None                       = 0,
	GDT_Player                     = 1,
	GDT_Pet                        = 2,
	GDT_Deployable                 = 3,
	GDT_Shield                     = 4,
	GDT_MAX                        = 5
};


// Enum TgGame.TgPawn.TgMeshVisibilityState
enum class ETgMeshVisibilityState : uint8_t
{
	TMVS_Visible                   = 0,
	TMVS_Invisible                 = 1,
	TMVS_Hidden                    = 2,
	TMVS_MAX                       = 3
};


// Enum TgGame.TgPawn.TG_DEATH_REASON
enum class ETG_DEATH_REASON : uint8_t
{
	DR_NORMAL                      = 0,
	DR_DESPAWN                     = 1,
	DR_MAX_DEPLOY_LIMIT            = 2,
	DR_RECONNECT                   = 3,
	DR_FREEZE_GIB                  = 4,
	DR_LEX_EXECUTE                 = 5,
	DR_RIDER                       = 6,
	DR_YAGORATH                    = 7,
	DR_MAX                         = 8
};


// Enum TgGame.TgSoundNotifyActorInterface.ENotifySound
enum class ENotifySound : uint8_t
{
	NSND_None                      = 0,
	NSND_Waypoint                  = 1,
	NSND_BGDeploying               = 2,
	NSND_BGDeployed                = 3,
	NSND_MapShow                   = 4,
	NSND_MapHide                   = 5,
	NSND_BGFogAlertShown           = 6,
	NSND_BGFogAlertAnimating       = 7,
	NSND_FogWarning                = 8,
	NSND_TeammateDied              = 9,
	NSND_TeamWon                   = 10,
	NSND_TeamWiped                 = 11,
	NSND_MovementUnlocked          = 12,
	NSND_BGZeppelinInTransit       = 13,
	NSND_BGZeppelinDeploying       = 14,
	NSND_BGZeppelinDone            = 15,
	NSND_BGFirstBlood              = 16,
	NSND_BG75Remain                = 17,
	NSND_BG50Remain                = 18,
	NSND_BG25Remain                = 19,
	NSND_BG5Remain                 = 20,
	NSND_BGChickenState_Into       = 21,
	NSND_BGChickenState_OutOf      = 22,
	NSND_OpenLoot                  = 23,
	NSND_POTG                      = 24,
	NSND_ClientRevived             = 25,
	NSND_LobbyToLobby              = 26,
	NSND_LobbyToMatch              = 27,
	NSND_LobbyToSummary            = 28,
	NSND_GoToAsiaticEvent          = 29,
	NSND_GoToBattlePass            = 30,
	NSND_GoToBattlePassEncore      = 31,
	NSND_Unlocked                  = 32,
	NSND_BattlePassAcquisition     = 33,
	NSND_GoToEvent                 = 34,
	NSND_EOMLShards                = 35,
	NSND_HNHBlessing               = 36,
	NSND_HNHMinorUnlock            = 37,
	NSND_HNHMajorUnlock            = 38,
	NSND_GameIntro                 = 39,
	NSND_MatchLobbyChampions       = 40,
	NSND_MatchLobbyCustomize       = 41,
	NSND_MatchReady                = 42,
	NSND_MUS_Level_Default_Play    = 43,
	NSND_TDM_MUS_Intro             = 44,
	NSND_TDM_MUS_MatchStart        = 45,
	NSND_TDM_MUS_Low               = 46,
	NSND_TDM_MUS_Medium            = 47,
	NSND_TDM_MUS_High              = 48,
	NSND_TDM_MUS_End               = 49,
	NSND_Flagball_BallCatch        = 50,
	NSND_Flagball_BallDropped      = 51,
	NSND_Flagball_BallPickedUp     = 52,
	NSND_Flagball_BallReset        = 53,
	NSND_Flagball_BallSpawned      = 54,
	NSND_Flagball_BallThrow        = 55,
	NSND_Flagball_Countdown        = 56,
	NSND_Flagball_Game_EnemyScored = 57,
	NSND_Flagball_Game_MatchPoint  = 58,
	NSND_Flagball_Game_ScoreAchieved = 59,
	NSND_Flagball_Game_TeamScored  = 60,
	NSND_Flagball_ANN_BallSpawn    = 61,
	NSND_Flagball_ANN_BallReset    = 62,
	NSND_Flagball_ANN_BallDropped  = 63,
	NSND_Flagball_ANN_BallEnemy    = 64,
	NSND_Flagball_ANN_BallTeam     = 65,
	NSND_Flagball_ANN_Game_TeamScore = 66,
	NSND_Flagball_ANN_Game_EnemyScore = 67,
	NSND_Flagball_ANN_Game_MatchPoint = 68,
	NSND_Flagball_ANN_Game_Victory = 69,
	NSND_Flagball_ANN_Game_Defeat  = 70,
	NSND_Flagball_ANN_Game_Start   = 71,
	NSND_Flagball_ANN_Game_LeadGain = 72,
	NSND_Flagball_ANN_Game_LeadLost = 73,
	NSND_Flagball_ANN_Game_Tied    = 74,
	NSND_Flagball_MUS_FlagBall_Loading = 75,
	NSND_Flagball_MUS_FlagBall_Intro = 76,
	NSND_Flagball_MUS_FlagBall_MatchStart = 77,
	NSND_Flagball_MUS_FlagBall_Score = 78,
	NSND_Flagball_MUS_FlagBall_MatchPoint = 79,
	NSND_Flagball_MUS_FlagBall_End = 80,
	NSND_AbyssalEcho_EchoSpawned   = 81,
	NSND_AbyssalEcho_EchoDespawned = 82,
	NSND_AbyssalEcho_EchoDied      = 83,
	NSND_AbyssalEcho_ANN_FernandoSpawned = 84,
	NSND_AbyssalEcho_ANN_ViktorSpawned = 85,
	NSND_AbyssalEcho_ANN_VivianSpawned = 86,
	NSND_AbyssalEcho_ANN_YingSpawned = 87,
	NSND_AbyssalEcho_ANN_FernandoDespawned = 88,
	NSND_AbyssalEcho_ANN_ViktorDespawned = 89,
	NSND_AbyssalEcho_ANN_VivianDespawned = 90,
	NSND_AbyssalEcho_ANN_YingDespawned = 91,
	NSND_AbyssalEcho_ANN_FernandoDied = 92,
	NSND_AbyssalEcho_ANN_ViktorDied = 93,
	NSND_AbyssalEcho_ANN_VivianDied = 94,
	NSND_AbyssalEcho_ANN_YingDied  = 95,
	NSND_AbyssalEcho_ANN_FernandoTaunt = 96,
	NSND_AbyssalEcho_ANN_ViktorTaunt = 97,
	NSND_AbyssalEcho_ANN_VivianTaunt = 98,
	NSND_AbyssalEcho_ANN_YingTaunt = 99,
	NSND_AbyssalEcho_MUS_EchoSpawn = 100,
	NSND_AbyssalEcho_MUS_Outro     = 101,
	NSND_EndTimes_Intro            = 102,
	NSND_EndTimes_PointSwitch      = 103,
	NSND_EndTimes_Buff_Speed       = 104,
	NSND_EndTimes_Buff_Damage      = 105,
	NSND_EndTimes_Buff_Health      = 106,
	NSND_EndTimes_Buff_Jump        = 107,
	NSND_EndTimes_Buff_Cooldown    = 108,
	NSND_EndTimes_Buff_Ultimate    = 109,
	NSND_EndTimes_75Percent        = 110,
	NSND_CrazyKing_PointSwitch     = 111,
	NSND_VaultOpenPurchase         = 112,
	NSND_VaultCompletePurchase     = 113,
	NSND_EOMLEventXPTicker         = 114,
	NSND_BattlePassBooster         = 115,
	NSND_BattlePassLevelUp         = 116,
	NSND_BattlePassPurchase        = 117,
	NSND_ChestPurchaseStart        = 118,
	NSND_ChestPurchaseLoop         = 119,
	NSND_ChestPurchaseLoopEnd      = 120,
	NSND_ChestPurchaseEnd          = 121,
	NSND_GiftPurchase              = 122,
	NSND_GiftReceive               = 123,
	NSND_WinterEventCompletePurchase = 124,
	NSND_CommendationReceive       = 125,
	NSND_MAX                       = 126
};


// Enum TgGame.TgGameplayCurvesSet.ECurveSetTypes
enum class ECurveSetTypes : uint8_t
{
	CST_None                       = 0,
	CST_Recoil                     = 1,
	CST_RecoilSimple               = 2,
	CST_AccuracyBloom              = 3,
	CST_DamageFalloff              = 4,
	CST_DamageFalloffAOE           = 5,
	CST_DamagePerShotHit           = 6,
	CST_SpreadTendency             = 7,
	CST_RuckusSpinUpControl        = 8,
	CST_GravityFromZVelocity       = 9,
	CST_AirControlFromZVelocity    = 10,
	CST_WallRunVerticalMovement    = 11,
	CST_AimAssist                  = 12,
	CST_AimAssistKeyframes         = 13,
	CST_AimAcceleration            = 14,
	CST_TargetTracking             = 15,
	CST_HitMarkerScaleByDamage     = 16,
	CST_GravityFromCustom          = 17,
	CST_ProjectileSpeedOverTime    = 18,
	CST_FlakInhandSlow             = 19,
	CST_FlakInhandKnockback        = 20,
	CST_ThreatLevelByRange         = 21,
	CST_AimAssistBoundsScale       = 22,
	CST_ProjFrictionOverTime       = 23,
	CST_ProjGravityOverTime        = 24,
	CST_ScopeWeaponFOV             = 25,
	CST_ScopeWorldFOV              = 26,
	CST_AimAssistBoundsByFOV       = 27,
	CST_SpeedOverDistance          = 28,
	CST_PositionFromPitch          = 29,
	CST_RecoilVisual               = 30,
	CST_StackDamageMultiplier      = 31,
	CST_MoveSpeedOverTime          = 32,
	CST_AccelerationOverTime       = 33,
	CST_ResistanceFromDeviation    = 34,
	CST_BulletMagnetOverDist       = 35,
	CST_HitReactions               = 36,
	CST_GyroSensitivity            = 37,
	CST_DamageFromDistance         = 38,
	CST_DamageFromCharge           = 39,
	CST_DamageOverTime             = 40,
	CST_SpinUpScaling              = 41,
	CST_YagorathMovementAcceleration = 42,
	CST_YagorathmovementDeceleration = 43,
	CST_YagorathmovementPassiveDeceleration = 44,
	CST_MAX                        = 45
};


// Enum TgGame.TgPawn.LocalViewerRangeState
enum class ELocalViewerRangeState : uint8_t
{
	LVRS_EffectiveRange            = 0,
	LVRS_MaxRange                  = 1,
	LVRS_BeyondRange               = 2,
	LVRS_MAX                       = 3
};


// Enum TgGame.TgPawn.UI_SKILL_EQUIP_SLOT
enum class EUI_SKILL_EQUIP_SLOT : uint8_t
{
	UI_SLOT_ONE                    = 0,
	UI_SLOT_TWO                    = 1,
	UI_SLOT_THREE                  = 2,
	UI_SLOT_MAX                    = 3
};


// Enum TgGame.TgProperty.TG_PAWN_PROPERTIES
enum class ETG_PAWN_PROPERTIES : uint8_t
{
	TGPIDX_CHARACTER_VISION_RANGE  = 0,
	TGPIDX_ENERGY_MAX              = 1,
	TGPIDX_ENERGY                  = 2,
	TGPIDX_EP5                     = 3,
	TGPIDX_WALL_JUMP_HEIGHT_INCREASE = 4,
	TGPIDX_RESPAWN_TIME_REDUCTION_PERC = 5,
	TGPIDX_STEALTH_SOFT_REVEAL_DISTANCE = 6,
	TGPIDX_AIR_CONTROL             = 7,
	TGPIDX_GROUND_SPEED            = 8,
	TGPIDX_AIR_SPEED               = 9,
	TGPIDX_JUMP_SPEED_MODIFIER     = 10,
	TGPIDX_JUMP_HEIGHT_MODIFIER    = 11,
	TGPIDX_MOUNT_GROUND_SPEED      = 12,
	TGPIDX_MOUNT_TIME              = 13,
	TGPIDX_DROGOZ_ENERGY           = 14,
	TGPIDX_DROGOZ_ENERGY_MAX       = 15,
	TGPIDX_ORACLE_ORB_STACK        = 16,
	TGPIDX_HEALTH_MAX              = 17,
	TGPIDX_HEALTH_MAX_PERCENT      = 18,
	TGPIDX_HEALTH                  = 19,
	TGPIDX_HP5                     = 20,
	TGPIDX_MANA_MAX                = 21,
	TGPIDX_MANA                    = 22,
	TGPIDX_MP5                     = 23,
	TGPIDX_STEALTH_GUARD           = 24,
	TGPIDX_VISIBLE_THROUGH_WALLS   = 25,
	TGPIDX_VISIBLE_THROUGH_WALLS_TASKFORCE = 26,
	TGPIDX_VISIBLE_THROUGH_WALLS_INSTIGATOR_ONLY = 27,
	TGPIDX_SEE_THROUGH_WALLS       = 28,
	TGPIDX_VISIBLE_THROUGH_STEALTH = 29,
	TGPIDX_VISIBLE_THROUGH_STEALTH_TASKFORCE = 30,
	TGPIDX_VISIBLE_THROUGH_STEALTH_INSTIGATOR_ONLY = 31,
	TGPIDX_SEE_THROUGH_STEALTH     = 32,
	TGPIDX_NUGGET_STEALER_FULL_HP  = 33,
	TGPIDX_HOVER                   = 34,
	TGPIDX_CUSTOM_FLIGHT           = 35,
	TGPIDX_NO_FRICTION             = 36,
	TGPIDX_GRAVITY_SCALE           = 37,
	TGPIDX_JUMP_HANG               = 38,
	TGPIDX_SHIELD                  = 39,
	TGPIDX_SHIELD_MAX              = 40,
	TGPIDX_LIFESTEAL               = 41,
	TGPIDX_LIFESTEAL_PURE          = 42,
	TGPIDX_LIFESTEAL_INSTIGATOR_ONLY = 43,
	TGPIDX_LIFESTEAL_TARGET        = 44,
	TGPIDX_POWER_MAGICAL_BOT       = 45,
	TGPIDX_POWER_PHYSICAL_BOT      = 46,
	TGPIDX_PROTECTION_FEAR         = 47,
	TGPIDX_PROTECTION_KNOCKBACK    = 48,
	TGPIDX_PROTECTION_KNOCKUP      = 49,
	TGPIDX_PROTECTION_SILENCE      = 50,
	TGPIDX_PROTECTION_SLOW         = 51,
	TGPIDX_PROTECTION_STUN         = 52,
	TGPIDX_PROTECTION_PULL         = 53,
	TGPIDX_PROTECTION_CC           = 54,
	TGPIDX_PROTECTION_ON_FIRE      = 55,
	TGPIDX_PROTECTION_BLEEDING     = 56,
	TGPIDX_PROTECTION_POISON       = 57,
	TGIPDX_PROTECTION_POLYMORPH    = 58,
	TGIPDX_PROTECTION_LIFT         = 59,
	TGPIDX_PROTECTION_DOT_DURATION = 60,
	TGPIDX_PROTECTION_DOT_DURATION_PERC = 61,
	TGPIDX_PROTECTION_DOT_DAMAGE_PERC = 62,
	TGPIDX_DEBUFF_IMMUNITY         = 63,
	TGPIDX_REDUCE_DEBUFF_DURATION  = 64,
	TGPIDX_CC_IMMUNITY             = 65,
	TGPIDX_CC_IMMUNITY_SUPERIOR    = 66,
	TGPIDX_SLOW_IMMUNITY           = 67,
	TGPIDX_JUMP_PENALTY_IMMUNITY   = 68,
	TGPIDX_TAUNT                   = 69,
	TGPIDX_POWER_PHYSICAL_PERC     = 70,
	TGPIDX_POWER_MAGICAL_PERC      = 71,
	TGPIDX_HEALING_DEALT_PERC      = 72,
	TGPIDX_HEALING_TAKEN_PERC      = 73,
	TGPIDX_HEALING_TAKEN_OTHERS_PERC = 74,
	TGPIDX_HEALING_DISABLED        = 75,
	TGPIDX_DAMAGE_TAKEN_PERC       = 76,
	TGPIDX_HEADSHOT_DAMAGE_REDUCTION = 77,
	TGPIDX_DAMAGE_DEALT_PERC       = 78,
	TGPIDX_DAMAGE_DEALT_PERC_BASIC = 79,
	TGPIDX_DAMAGE_DEALT_PERC_PHYSICAL = 80,
	TGPIDX_DAMAGE_DEALT_PERC_MAGICAL = 81,
	TGPIDX_DAMAGE_DEALT_PERC_DEPLOYABLES = 82,
	TGPIDX_DAMAGE_DEALT_PERC_SHIELDS = 83,
	TGPIDX_DAMAGE_DEALT_FLAT       = 84,
	TGPIDX_DAMAGE_DEALT_TO_FRONTLINE_PERC = 85,
	TGPIDX_POWER_PHYSICAL_ITEM     = 86,
	TGPIDX_POWER_MAGICAL_ITEM      = 87,
	TGPIDX_POWER_UTILITY_BOT       = 88,
	TGPIDX_POWER_UTILITY_ITEM      = 89,
	TGPIDX_MARKED                  = 90,
	TGPIDX_MARKED_INHAND           = 91,
	TGPIDX_MINIMAP_LOS_IGNORED     = 92,
	TGPIDX_MINIMAP_DETECTOR        = 93,
	TGPIDX_BLOCK_DAMAGE_PERC       = 94,
	TGPIDX_FRONTAL_IMMUNITY        = 95,
	TGPIDX_NO_BACKPEDAL_PENALTY    = 96,
	TGPIDX_HP5_PERC                = 97,
	TGPIDX_HP5_PERC_OF_MAX_HEALTH  = 98,
	TGPIDX_PHYSICAL_IMMUNITY       = 99,
	TGPIDX_MAGICAL_IMMUNITY        = 100,
	TGPIDX_DAMAGE_TAKEN_PERC_PHYS  = 101,
	TGPIDX_DAMAGE_TAKEN_PERC_INHAND = 102,
	TGPIDX_DAMAGE_TAKEN_PERC_AOE   = 103,
	TGPIDX_DAMAGE_TAKEN_PERC_DIRECT = 104,
	TGPIDX_DAMAGE_TAKEN_PERC_MAX_ATTACK = 105,
	TGPIDX_DAMAGE_REDUCTION_PERC_PENETRATION = 106,
	TGPIDX_HEAL_BLOCK              = 107,
	TGPIDX_INHAND_RELOAD_SPEED     = 108,
	TGPIDX_INHAND_AMMO_CAPACITY    = 109,
	TGPIDX_COMBAT_DURATION_REDUCTION_PERC = 110,
	TGPIDX_IGNORE_ACTOR_BLOCKING   = 111,
	TGPIDX_FORCE_3P_VIEW           = 112,
	TGPIDX_LOCK_INPUT              = 113,
	TGPIDX_SCALE_MESH              = 114,
	TGPIDX_SCALE_COLLISION_HEIGHT  = 115,
	TGPIDX_SCALE_COLLISION_RADIUS  = 116,
	TGPIDX_CONFUSED                = 117,
	TGPIDX_NEAR_DAMAGE_PERCENT     = 118,
	TGPIDX_FAR_DAMAGE_PERCENT      = 119,
	TGPIDX_BLEEDING                = 120,
	TGPIDX_ON_FIRE                 = 121,
	TGPIDX_POISONED                = 122,
	TGPIDX_FROZEN                  = 123,
	TGPIDX_INHAND_EFFECTIVE_AOE    = 124,
	TGPIDX_INHAND_ABSOLUTE_AOE     = 125,
	TGPIDX_PROC_CHANCE_MODIFIER    = 126,
	TGPIDX_DOT_DURATION_PERC       = 127,
	TGPIDX_ETHEREAL                = 128,
	TGPIDX_INHAND_FIRE_OVERRIDE    = 129,
	TGPIDX_HEALTH_FLOOR            = 130,
	TGPIDX_LEAPING                 = 131,
	TGPIDX_DECOY_AGGRO             = 132,
	TGPIDX_HAS_HEALING_EFFECT_UI_SELF = 133,
	TGPIDX_HAS_HEALING_EFFECT_UI_FRIEND = 134,
	TGPIDX_MARK_SHOT_MARK          = 135,
	TGPIDX_MARK_SHOT_FIRING_AT_MARK = 136,
	TGPIDX_PURSUIT_FIRING_AT_TARGET = 137,
	TGPIDX_MESMERIZE               = 138,
	TGPIDX_MARKED_FOR_PRESENCE     = 139,
	TGPIDX_PRESENCE_BUFF           = 140,
	TGPIDX_DISABLE_RAGDOLL         = 141,
	TGPIDX_PET_HEALTH_PCT          = 142,
	TGPIDX_ROOT                    = 143,
	TGPIDX_SOUL_ARMOR              = 144,
	TGPIDX_SOUL_ARMOR_MAX          = 145,
	TGPIDX_SHIELD_BUFF_PERCENT_ON_CREATE = 146,
	TGPIDX_MAX                     = 147,
	TG_PAWN_PROPERTIES_MAX         = 148
};


// Enum TgGame.TgGrabSource.EGrabState
enum class EGrabState : uint8_t
{
	GRAB_None                      = 0,
	GRAB_ShellSpin                 = 1,
	GRAB_LazarusRush               = 2,
	GRAB_VanguardUlt               = 3,
	GRAB_PullGrab                  = 4,
	GRAB_AzaanDash                 = 5,
	GRAB_MAX                       = 6
};


// Enum TgGame.TgPawn.PawnDamageMitigatorReason
enum class EPawnDamageMitigatorReason : uint8_t
{
	PDMR_None                      = 0,
	PDMR_BunnyLink                 = 1,
	PDMR_MAX                       = 2
};


// Enum TgGame.TgPawn.TG_TELEPORT_STATE
enum class ETG_TELEPORT_STATE : uint8_t
{
	TELEPORT_NONE                  = 0,
	TELEPORT_ENTER                 = 1,
	TELEPORT_EXIT                  = 2,
	TELEPORT_ENTER_BLINK           = 3,
	TELEPORT_EXIT_BLINK            = 4,
	TELEPORT_KINESSA_TRANSPORTER_ENTER = 5,
	TELEPORT_KINESSA_TRANSPORTER_EXIT = 6,
	TELEPORT_MAX                   = 7
};


// Enum TgGame.TgPawn.EForcedSilhouetteVisibility
enum class EForcedSilhouetteVisibility : uint8_t
{
	FSV_None                       = 0,
	FSV_Visible                    = 1,
	FSV_Hidden                     = 2,
	FSV_MAX                        = 3
};


// Enum TgGame.TgPawn.EUIHealthBarArmorType
enum class EUIHealthBarArmorType : uint8_t
{
	UIHBAT_Undefined               = 0,
	UIHBAT_SoulArmor               = 1,
	UIHBAT_BloodHealth             = 2,
	UIHBAT_MAX                     = 3
};


// Enum TgGame.TgPawn.TG_PlaySpecialEffect
enum class ETG_PlaySpecialEffect : uint8_t
{
	PLAYFX_Heal                    = 0,
	PLAYFX_RUberLaser              = 1,
	PLAYFX_LUberLaser              = 2,
	PLAYFX_SiegeWallImpact         = 3,
	PLAYFX_GAMMARAY_BUILDUP        = 4,
	PLAYFX_GAMMARAY_FIRE           = 5,
	PLAYFX_Jump                    = 6,
	PLAYFX_SpecialJump             = 7,
	PLAYFX_Land                    = 8,
	PLAYFX_Teleport                = 9,
	PLAYFX_PreTeleport             = 10,
	PLAYFX_Flourish                = 11,
	PLAYFX_RiderShieldHit          = 12,
	PLAYFX_RiderLegMarksExplode    = 13,
	PLAYFX_MAX                     = 14
};


// Enum TgGame.TgPawn.TG_MARKED_TYPES
enum class ETG_MARKED_TYPES : uint8_t
{
	TG_MARKED_MOJI                 = 0,
	TG_MARKED_SEVEN                = 1,
	TG_MARKED_NONE                 = 2,
	TG_MARKED_MAX                  = 3
};


// Enum TgGame.TgPawn_Character.EArchetypes
enum class EArchetypes : uint8_t
{
	ARCHETYPE_TANK                 = 0,
	ARCHETYPE_DAMAGE               = 1,
	ARCHETYPE_SUPPORT              = 2,
	ARCHETYPE_FLANK                = 3,
	ARCHETYPE_MAX                  = 4
};


// Enum TgGame.TgPawn_Character.EUITargeters
enum class EUITargeters : uint8_t
{
	TARGETER_KINESSA               = 0,
	TARGETER_TYRA                  = 1,
	TARGETER_TORVALD_PROTECTION    = 2,
	TARGETER_ORACLE                = 3,
	TARGETER_ASTRO                 = 4,
	TARGETER_YING_TELEPORT         = 5,
	TARGETER_TORVALD_NULLIFY       = 6,
	TARGETER_RIDER                 = 7,
	TARGETER_VANGUARD_GRAB         = 8,
	TARGETER_VANGUARD_ULT          = 9,
	TARGETER_DRUID_LOCKON          = 10,
	TARGETER_DRUID_FOXAGGRO        = 11,
	TARGETER_CORVUS_MARK           = 12,
	TARGETER_REI_LINK              = 13,
	TARGETER_REI_LINKED            = 14,
	TARGETER_YAGORATH_ULT          = 15,
	TARGETER_SHADOW_TELEPORT       = 16,
	TARGETER_SEVEN_ULT             = 17,
	TARGETER_VAMPIRE_MARK          = 18,
	TARGETER_VAMPIRE_MARKED        = 19,
	TARGETER_MAX                   = 20
};


// Enum TgGame.TgPawn_Character.ForceFaceActorReason
enum class EForceFaceActorReason : uint8_t
{
	FFAR_Unknown                   = 0,
	FFAR_Ability                   = 1,
	FFAR_Tween                     = 2,
	FFAR_Death                     = 3,
	FFAR_Any                       = 4,
	FFAR_MAX                       = 5
};


// Enum TgGame.TgPawn_Illusion.EDecoyAIState
enum class EDecoyAIState : uint8_t
{
	DAIS_Normal                    = 0,
	DAIS_Shatter                   = 1,
	DAIS_Rift                      = 2,
	DAIS_MAX                       = 3
};


// Enum TgGame.TgAILocalPositionSolver.ERepulsorWeightMethod
enum class ERepulsorWeightMethod : uint8_t
{
	RWM_Cubic                      = 0,
	RWM_Lerp                       = 1,
	RWM_Slerp                      = 2,
	RWM_MAX                        = 3
};


// Enum TgGame.TgAIObstacleAvoidance.EObstacleAvoidanceStatus
enum class EObstacleAvoidanceStatus : uint8_t
{
	OAS_NoPath                     = 0,
	OAS_Pathing                    = 1,
	OAS_PathFinished               = 2,
	OAS_MAX                        = 3
};


// Enum TgGame.TgAIUtility.EGraphType
enum class EGraphType : uint8_t
{
	Graph_LINEAER                  = 0,
	Graph_MAX                      = 1
};


// Enum TgGame.TgAnimBlendBy1P3P.EBlendPerspectiveTypes
enum class EBlendPerspectiveTypes : uint8_t
{
	BLEND1P3P_1P                   = 0,
	BLEND1P3P_3P                   = 1,
	BLEND1P3P_MAX                  = 2
};


// Enum TgGame.TgAnimBlendByDirection.EBlendDirTypes
enum class EBlendDirTypes : uint8_t
{
	FBDir_Forward                  = 0,
	FBDir_Back                     = 1,
	FBDir_Left                     = 2,
	FBDir_Right                    = 3,
	FBDir_ForwardRight             = 4,
	FBDir_ForwardLeft              = 5,
	FBDir_BackRight                = 6,
	FBDir_BackLeft                 = 7,
	FBDir_Standing                 = 8,
	FBDir_None                     = 9,
	FBDir_MAX                      = 10
};


// Enum TgGame.TgAnimBlendByDirection.EBlendByDirectionSpeedType
enum class EBlendByDirectionSpeedType : uint8_t
{
	EBBDST_Velocity                = 0,
	EBBDST_Accel                   = 1,
	EBBDST_MAX                     = 2
};


// Enum TgGame.TgAnimBlendByFall.EBlendFallTypes
enum class EBlendFallTypes : uint8_t
{
	FBT_Up                         = 0,
	FBT_UpLoop                     = 1,
	FBT_PreDown                    = 2,
	FBT_Down                       = 3,
	FBT_PreLand                    = 4,
	FBT_Land                       = 5,
	FBT_AirJump                    = 6,
	FBT_None                       = 7,
	FBT_MAX                        = 8
};


// Enum TgGame.TgAnimBlendByFall.EFallSource
enum class EFallSource : uint8_t
{
	FALLSOURCE_FullJump            = 0,
	FALLSOURCE_ShortJump           = 1,
	FALLSOURCE_AnyJump             = 2,
	FALLSOURCE_Falling             = 3,
	FALLSOURCE_All                 = 4,
	FALLSOURCE_MAX                 = 5
};


// Enum TgGame.TgAnimBlendByFlying.EFlyDirTypes
enum class EFlyDirTypes : uint8_t
{
	FDir_Forward                   = 0,
	FDir_Back                      = 1,
	FDir_Left                      = 2,
	FDir_Right                     = 3,
	FDir_Up                        = 4,
	FDir_Down                      = 5,
	FDir_UpMidair                  = 6,
	FDir_None                      = 7,
	FDir_MAX                       = 8
};


// Enum TgGame.TgAnimBlendByPaladinsCharacter.EPalCharParams
enum class EPalCharParams : uint8_t
{
	PCP_FireInhand                 = 0,
	PCP_FireAlt                    = 1,
	PCP_FireAbility                = 2,
	PCP_FireMovement               = 3,
	PCP_FireUlt                    = 4,
	PCP_Reload                     = 5,
	PCP_Retrieve                   = 6,
	PCP_Emote                      = 7,
	PCP_FireSupportingDevice       = 8,
	PCP_PutAway                    = 9,
	PCP_CharacterSpecific1         = 10,
	PCP_CharacterSpecific2         = 11,
	PCP_CharacterSpecific3         = 12,
	PCP_CharacterSpecific4         = 13,
	PCP_CharacterSpecific5         = 14,
	PCP_Intro                      = 15,
	PCP_Outro                      = 16,
	PCP_MAX                        = 17
};


// Enum TgGame.TgAnimBlendBySpeed.ESpeedType
enum class ESpeedType : uint8_t
{
	EST_Velocity                   = 0,
	EST_AccelAndMaxSpeed           = 1,
	EST_MAX                        = 2
};


// Enum TgGame.TgAnimMetaData_Keyframed.EOnRelevanceBehavior
enum class EOnRelevanceBehavior : uint8_t
{
	ORB_NORMAL                     = 0,
	ORB_FORCE_FIRSTKEYFRAME        = 1,
	ORB_FORCE_LASTKEYFRAME         = 2,
	ORB_FORCE_OTHER                = 3,
	ORB_MAINTAIN                   = 4,
	ORB_MAX                        = 5
};


// Enum TgGame.TgAnimMetaData_SkelControl_BoneScale_KeyFrame.EOnRelevanceChange
enum class EOnRelevanceChange : uint8_t
{
	ORC_NORMAL                     = 0,
	ORC_FORCE_KEYFRAME             = 1,
	ORC_FORCE_ACTIVE               = 2,
	ORC_FORCE_INACTIVE             = 3,
	ORC_FORCE_OTHER                = 4,
	ORC_MAX                        = 5
};


// Enum TgGame.TgAnimNodeAimOffset.EPitchControlType
enum class EPitchControlType : uint8_t
{
	PITCHCONTROL_Disable           = 0,
	PITCHCONTROL_Legacy            = 1,
	PITCHCONTROL_Pure              = 2,
	PITCHCONTROL_UserDefined       = 3,
	PITCHCONTROL_MAX               = 4
};


// Enum TgGame.TgAnimNodeBlendByAbilityDrag.EBlendDrag
enum class ETgAnimNodeBlendByAbilityDrag_EBlendDrag : uint8_t
{
	BLENDDRAG_Inactive             = 0,
	BLENDDRAG_Throw                = 1,
	BLENDDRAG_Hit                  = 2,
	BLENDDRAG_PrePullLoop          = 3,
	BLENDDRAG_Pull                 = 4,
	BLENDDRAG_PullLoop             = 5,
	BLENDDRAG_EndPull              = 6,
	BLENDDRAG_MissThrow            = 7,
	BLENDDRAG_MissThrowEnd         = 8,
	BLENDDRAG_MissInvalid          = 9,
	BLENDDRAG_MissInvalidEnd       = 10,
	BLENDDRAG_CloseRangeEnd        = 11,
	BLENDDRAG_MAX                  = 12
};


// Enum TgGame.TgAnimNodeBlendByAbilityDragChain.EBlendDrag
enum class ETgAnimNodeBlendByAbilityDragChain_EBlendDrag : uint8_t
{
	BLENDCHAIN_Inactive            = 0,
	BLENDCHAIN_Throw               = 1,
	BLENDCHAIN_Hit                 = 2,
	BLENDCHAIN_MissThrow           = 3,
	BLENDCHAIN_MissInvalid         = 4,
	BLENDCHAIN_MAX                 = 5
};


// Enum TgGame.TgAnimNodeBlendByAbilityDragonSlam.EBlendDragonSlam
enum class EBlendDragonSlam : uint8_t
{
	BLENDDRAGON_ReadyFlightFromGound = 0,
	BLENDDRAGON_ReadyFlightFromAir = 1,
	BLENDDRAGON_Flying             = 2,
	BLENDDRAGON_Punch              = 3,
	BLENDDRAGON_EndFlight          = 4,
	BLENDDRAGON_MAX                = 5
};


// Enum TgGame.TgAnimNodeBlendByAbilityHyperShot.EBlendHyperShot
enum class EBlendHyperShot : uint8_t
{
	BLENDHYPERSHOT_Inactive        = 0,
	BLENDHYPERSHOT_Buildup         = 1,
	BLENDHYPERSHOT_Idle            = 2,
	BLENDHYPERSHOT_Activate        = 3,
	BLENDHYPERSHOT_FireBuildup     = 4,
	BLENDHYPERSHOT_Fire            = 5,
	BLENDHYPERSHOT_TransitionToIdle = 6,
	BLENDHYPERSHOT_Cancel          = 7,
	BLENDHYPERSHOT_MAX             = 8
};


// Enum TgGame.TgAnimNodeBlendByAbilityReversal.EBlendReversal
enum class EBlendReversal : uint8_t
{
	BLENDREVERSAL_Inactive         = 0,
	BLENDREVERSAL_Buildup          = 1,
	BLENDREVERSAL_Fire             = 2,
	BLENDREVERSAL_Miss             = 3,
	BLENDREVERSAL_MAX              = 4
};


// Enum TgGame.TgAnimNodeBlendByAbilitySimple.EBlendSimpleAbility
enum class EBlendSimpleAbility : uint8_t
{
	BLENDSA_Inactive               = 0,
	BLENDSA_Firing                 = 1,
	BLENDSA_MAX                    = 2
};


// Enum TgGame.TgAnimNodeBlendByAbilitySmash.EBlendMakoaSmash
enum class EBlendMakoaSmash : uint8_t
{
	BLENDSMASH_ChargeUp            = 0,
	BLENDSMASH_Attack              = 1,
	BLENDSMASH_MAX                 = 2
};


// Enum TgGame.TgDevice.ENotifyDelegateEvents
enum class ENotifyDelegateEvents : uint8_t
{
	NDE_OnFired                    = 0,
	NDE_OnReload                   = 1,
	NDE_OnStartFire                = 2,
	NDE_OnStopFire                 = 3,
	NDE_OnCooldownEnd              = 4,
	NDE_Generic1                   = 5,
	NDE_Generic2                   = 6,
	NDE_Generic3                   = 7,
	NDE_MAX                        = 8
};


// Enum TgGame.TgTimerManager.TGT_EVENT
enum class ETGT_EVENT : uint8_t
{
	TGTE_DONE                      = 0,
	TGTE_START                     = 1,
	TGTE_UPDATE                    = 2,
	TGTE_PAUSED                    = 3,
	TGTE_MAX                       = 4
};


// Enum TgGame.TgClientSettings.EMapPlacement
enum class EMapPlacement : uint8_t
{
	MPLC_Bottom                    = 0,
	MPLC_Top                       = 1,
	MPLC_MAX                       = 2
};


// Enum TgGame.TgClientSettings.ECastMode
enum class ECastMode : uint8_t
{
	CM_Default                     = 0,
	CM_Quick                       = 1,
	CM_Instant                     = 2,
	CM_Use_Global                  = 3,
	CM_MAX                         = 4
};


// Enum TgGame.TgClientSettings.EFriendStateNotifications
enum class EFriendStateNotifications : uint8_t
{
	FSN_Never                      = 0,
	FSN_Lobby_Only                 = 1,
	FSN_InGame_Only                = 2,
	FSN_Always                     = 3,
	FSN_MAX                        = 4
};


// Enum TgGame.TgClientSettings.ENamePlateName
enum class ENamePlateName : uint8_t
{
	NPN_PlayerName                 = 0,
	NPN_GodName                    = 1,
	NPN_None                       = 2,
	NPN_MAX                        = 3
};


// Enum TgGame.TgClientSettings.EColorBlindOption
enum class EColorBlindOption : uint8_t
{
	CB_None                        = 0,
	CB_Protanope                   = 1,
	CB_Deuteranope                 = 2,
	CB_Tritanope                   = 3,
	CB_MAX                         = 4
};


// Enum TgGame.TgClientSettings.EAspectRatio
enum class EAspectRatio : uint8_t
{
	SETTINGAR_16x9                 = 0,
	SETTINGAR_16x10                = 1,
	SETTINGAR_MAX                  = 2
};


// Enum TgGame.TgClientSettings.EControlIconStyle
enum class EControlIconStyle : uint8_t
{
	ECIS_Auto                      = 0,
	ECIS_XboxOne                   = 1,
	ECIS_PS4                       = 2,
	ECIS_Switch                    = 3,
	ECIS_MAX                       = 4
};


// Enum TgGame.TgClientSettings.ECrossplayCombinedSetting
enum class ECrossplayCombinedSetting : uint8_t
{
	ECCS_AllowAll                  = 0,
	ECCS_GamepadOnly               = 1,
	ECCS_KeyboardOnly              = 2,
	ECCS_PlatformOnly              = 3,
	ECCS_MAX                       = 4
};


// Enum TgGame.TgClientSettings.ECrossInputMethod
enum class ECrossInputMethod : uint8_t
{
	ECIM_Gamepad                   = 0,
	ECIM_Keyboard                  = 1,
	ECIM_MAX                       = 2
};


// Enum TgGame.TgClientSettings.ESettingHudSkillsOrder
enum class ESettingHudSkillsOrder : uint8_t
{
	SHSO_LEGACY_UNINITIALIZED      = 0,
	SHSO_NEW                       = 1,
	SHSO_LEGACY                    = 2,
	SHSO_MAX                       = 3
};


// Enum TgGame.TgDevice.EDeviceChangeEvent
enum class EDeviceChangeEvent : uint8_t
{
	DCE_Created                    = 0,
	DCE_ToggleState                = 1,
	DCE_CanFire                    = 2,
	DCE_Selected                   = 3,
	DCE_Cooldown                   = 4,
	DCE_PtsAlloc                   = 5,
	DCE_Refire                     = 6,
	DCE_InstanceCount              = 7,
	DCE_DeviceBuildup              = 8,
	DCE_MAX                        = 9
};


// Enum TgGame.TgDevice.ETargetingModeStatus
enum class ETargetingModeStatus : uint8_t
{
	TMS_None                       = 0,
	TMS_CannotFire                 = 1,
	TMS_CannotPlace                = 2,
	TMS_OK                         = 3,
	TMS_OutOfRange                 = 4,
	TMS_MAX                        = 5
};


// Enum TgGame.TgDevice.DeviceEmoteAt
enum class EDeviceEmoteAt : uint8_t
{
	DEA_StartBuildup               = 0,
	DEA_StartFire                  = 1,
	DEA_Custom                     = 2,
	DEA_MAX                        = 3
};


// Enum TgGame.TgDevice.DeviceTimerBarType
enum class EDeviceTimerBarType : uint8_t
{
	DTBT_None                      = 0,
	DTBT_PreHit                    = 1,
	DTBT_PostHit                   = 2,
	DTBT_PersistTime               = 3,
	DTBT_RefireTime                = 4,
	DTBT_FireHold                  = 5,
	DTBT_Custom                    = 6,
	DTBT_MAX                       = 7
};


// Enum TgGame.TgDevice.EWeaponFireType
enum class EWeaponFireType : uint8_t
{
	EWFT_InstantHit                = 0,
	EWFT_Projectile                = 1,
	EWFT_Custom                    = 2,
	EWFT_None                      = 3,
	EWFT_MAX                       = 4
};


// Enum TgGame.TgDevice.EBankCooldownReduction
enum class EBankCooldownReduction : uint8_t
{
	BCR_None                       = 0,
	BCR_Once                       = 1,
	BCR_Always                     = 2,
	BCR_Custom                     = 3,
	BCR_MAX                        = 4
};


// Enum TgGame.TgDevice_Charge.ChargeFiringType
enum class EChargeFiringType : uint8_t
{
	CFT_Fire                       = 0,
	CFT_PreFire                    = 1,
	CFT_PostFire                   = 2,
	CFT_MAX                        = 3
};


// Enum TgGame.TgDevice_Charge.ChargeStopOnHitType
enum class EChargeStopOnHitType : uint8_t
{
	CSHT_None                      = 0,
	CSHT_AnyValidTarget            = 1,
	CSHT_GodOnly                   = 2,
	CSHT_GodOrGodPossessed         = 3,
	CSHT_NotGod                    = 4,
	CSHT_MAX                       = 5
};


// Enum TgGame.TgDevice_VanguardGrab.VanguardGrabAnimUpdate
enum class EVanguardGrabAnimUpdate : uint8_t
{
	VGAU_Charge                    = 0,
	VGAU_Miss                      = 1,
	VGAU_Grab                      = 2,
	VGAU_Throw                     = 3,
	VGAU_Interrupt                 = 4,
	VGAU_MAX                       = 5
};


// Enum TgGame.TgPawn_Vanguard.VanguardUltAnimUpdate
enum class EVanguardUltAnimUpdate : uint8_t
{
	VUAU_Start                     = 0,
	VUAU_Miss                      = 1,
	VUAU_Pull                      = 2,
	VUAU_Hold                      = 3,
	VUAU_Throw                     = 4,
	VUAU_MAX                       = 5
};


// Enum TgGame.TgAnimNodeBlendByAbilityVine.EBlendVine
enum class EBlendVine : uint8_t
{
	BLENDVINE_Inactive             = 0,
	BLENDVINE_Throw                = 1,
	BLENDVINE_ThrowLoop            = 2,
	BLENDVINE_Pull                 = 3,
	BLENDVINE_HitPostFire          = 4,
	BLENDVINE_MissPostFire         = 5,
	BLENDVINE_MAX                  = 6
};


// Enum TgGame.TgAnimNodeBlendByAndroxusDrift.EBlendAndroxusDrift
enum class EBlendAndroxusDrift : uint8_t
{
	BLENDDRIFT_NotDrifting         = 0,
	BLENDDRIFT_Drifting            = 1,
	BLENDDRIFT_TransitionToNotDrifting = 2,
	BLENDDRIFT_TransitionToDrifting = 3,
	BLENDDRIFT_MAX                 = 4
};


// Enum TgGame.TgAnimNodeBlendByDrogozFlying.EBlendDrogozFlying
enum class EBlendDrogozFlying : uint8_t
{
	BLENDDROGOZ_NotFlying          = 0,
	BLENDDROGOZ_Flying             = 1,
	BLENDDROGOZ_TransitionToNotFlying = 2,
	BLENDDROGOZ_TransitionToFlying = 3,
	BLENDDROGOZ_MAX                = 4
};


// Enum TgGame.TgAnimNodeBlendByKnockdown.EKnockDownChildren
enum class EKnockDownChildren : uint8_t
{
	KNOCKDOWNANIM_Input            = 0,
	KNOCKDOWNANIM_DownState        = 1,
	KNOCKDOWNANIM_GetUp            = 2,
	KNOCKDOWNANIM_MAX              = 3
};


// Enum TgGame.TgAnimNodeBlendList_EquipScreen.EEquipScreenAnimTypes
enum class EEquipScreenAnimTypes : uint8_t
{
	ESAT_Default                   = 0,
	ESAT_Weapon                    = 1,
	ESAT_Helmet                    = 2,
	ESAT_Backpack                  = 3,
	ESAT_Suit                      = 4,
	ESAT_MAX                       = 5
};


// Enum TgGame.TgAnimNodeBlendNPC.NPCAnimationStates
enum class ENPCAnimationStates : uint8_t
{
	NPCAS_NoCustomerPresent        = 0,
	NPCAS_CustomerPresent          = 1,
	NPCAS_Greeting                 = 2,
	NPCAS_NoSale                   = 3,
	NPCAS_CallOut                  = 4,
	NPCAS_Sale                     = 5,
	NPCAS_TransCustomerPresentToNotPresent = 6,
	NPCAS_None                     = 7,
	NPCAS_MAX                      = 8
};


// Enum TgGame.TgDevice_Spite.SpiteAnimState
enum class ESpiteAnimState : uint8_t
{
	SAS_Intro                      = 0,
	SAS_HitChain                   = 1,
	SAS_MissOutro                  = 2,
	SAS_BounceOffOutro             = 3,
	SAS_InterruptOutro             = 4,
	SAS_MAX                        = 5
};


// Enum TgGame.TgDevice_Telepunch.TelepunchAnimState
enum class ETelepunchAnimState : uint8_t
{
	TelepunchAnimState_Buildup     = 0,
	TelepunchAnimState_Travel      = 1,
	TelepunchAnimState_HitOutro    = 2,
	TelepunchAnimState_PreTravelMissOutro = 3,
	TelepunchAnimState_PostTravelMissOutro = 4,
	TelepunchAnimState_MAX         = 5
};


// Enum TgGame.TgAnimNodeFidget.EFidgetType
enum class EFidgetType : uint8_t
{
	FT_Timed                       = 0,
	FT_ChanceOnIdleCompletes       = 1,
	FT_MAX                         = 2
};


// Enum TgGame.TgAnimNotify_AudioGroup.TG_MESH_SOURCE
enum class ETG_MESH_SOURCE : uint8_t
{
	TG_MESH_SOURCE_PAWN            = 0,
	TG_MESH_SOURCE_IN_HAND_DEVICE  = 1,
	TG_MESH_SOURCE_MAX             = 2
};


// Enum TgGame.TgAnimNotify_InterpolateMorphTargetWeight.InterruptMorphTargetBehavior
enum class EInterruptMorphTargetBehavior : uint8_t
{
	ResetToInitial                 = 0,
	ResetToValue                   = 1,
	RestToTarget                   = 2,
	InterruptMorphTargetBehavior_MAX = 3
};


// Enum TgGame.TgAnimNotify_ToggleRigidBodies.ERigidBodyFixationChange
enum class ERigidBodyFixationChange : uint8_t
{
	RBF_Fix                        = 0,
	RBF_Unfix                      = 1,
	RBF_Toggle                     = 2,
	RBF_MAX                        = 3
};


// Enum TgGame.TgAnimTurnInPlace.ForcedTransitionAngle
enum class EForcedTransitionAngle : uint8_t
{
	FTA_NONE                       = 0,
	FTA                            = 1,
	FTA01                          = 2,
	FTA_MAX                        = 3
};


// Enum TgGame.TgAssaultPoint.EAssaultType
enum class EAssaultType : uint8_t
{
	AssaultType_None               = 0,
	AssaultType_Short              = 1,
	AssaultType_MidShort           = 2,
	AssaultType_Mid                = 3,
	AssaultType_LongMid            = 4,
	AssaultType_Long               = 5,
	AssaultType_MAX                = 6
};


// Enum TgGame.TgAssaultPoint.ELocationType
enum class ELocationType : uint8_t
{
	ELocationType_CapturePoint     = 0,
	ELocationType_Attack           = 1,
	ELocationType_Defend           = 2,
	ELocationType_MAX              = 3
};


// Enum TgGame.TgSpecialFx.EManagedDecalState
enum class EManagedDecalState : uint8_t
{
	DecalState_Inactive            = 0,
	DecalState_Active              = 1,
	DecalState_FadingOut           = 2,
	DecalState_MAX                 = 3
};


// Enum TgGame.TgSpecialFx.ELightFxState
enum class ELightFxState : uint8_t
{
	LFX_UNMANAGED                  = 0,
	LFX_ACTIVE                     = 1,
	LFX_KILLEDBYMGR                = 2,
	LFX_DYING                      = 3,
	LFX_INACTIVE                   = 4,
	LFX_MAX                        = 5
};


// Enum TgGame.TgMaterialStack.MaterialParamHarvestType
enum class EMaterialParamHarvestType : uint8_t
{
	MPHT_None                      = 0,
	MPHT_NormalOnly                = 1,
	MPHT_Basic                     = 2,
	MPHT_SpecialFX                 = 3,
	MPHT_DeathFX                   = 4,
	MPHT_All                       = 5,
	MPHT_MAX                       = 6
};


// Enum TgGame.TgBotFactory.eBotSelection
enum class EeBotSelection : uint8_t
{
	BS_RANDOM                      = 0,
	BS_SEQUENTIAL                  = 1,
	BS_MAX                         = 2
};


// Enum TgGame.TgBotFactory_Minions.MinionFactoryType
enum class EMinionFactoryType : uint8_t
{
	MFT_Conquest                   = 0,
	MFT_Joust                      = 1,
	MFT_Assault                    = 2,
	MFT_Mayan                      = 3,
	MFT_Other                      = 4,
	MFT_MAX                        = 5
};


// Enum TgGame.TgCameraModifier_LobbyCameraTransition.CameraTransType
enum class ECameraTransType : uint8_t
{
	CTT_None                       = 0,
	CTT_PanRight                   = 1,
	CTT_PanLeft                    = 2,
	CTT_PanUp                      = 3,
	CTT_PanDown                    = 4,
	CTT_MAX                        = 5
};


// Enum TgGame.TgObjective.EObjectiveStatus
enum class EObjectiveStatus : uint8_t
{
	Status_Inactive                = 0,
	Status_Active                  = 1,
	Status_PendingActive           = 2,
	Status_MAX                     = 3
};


// Enum TgGame.TgPlayerController.ZombieModex
enum class EZombieModex : uint8_t
{
	Z_IDLE                         = 0,
	Z_MOVING                       = 1,
	Z_COMBAT                       = 2,
	Z_MAX                          = 3
};


// Enum TgGame.TgPlayerController.EClientPawnFuncType
enum class EClientPawnFuncType : uint8_t
{
	BOMB_QUEEN_BOMB_BAG_SPAWN      = 0,
	BOMB_QUEEN_BOMB_BAG_MAX        = 1
};


// Enum TgGame.TgPlayerController.EPlayerInputType
enum class EPlayerInputType : uint8_t
{
	PIT_MoveForward                = 0,
	PIT_MoveBackward               = 1,
	PIT_MoveRight                  = 2,
	PIT_MoveLeft                   = 3,
	PIT_LookLeft                   = 4,
	PIT_LookRight                  = 5,
	PIT_LookUp                     = 6,
	PIT_LookDown                   = 7,
	PIT_Auto                       = 8,
	PIT_Alt                        = 9,
	PIT_BattleAbility              = 10,
	PIT_MovementAbility            = 11,
	PIT_Ultimate                   = 12,
	PIT_Reload                     = 13,
	PIT_Jump                       = 14,
	PIT_Mount                      = 15,
	PIT_LoadoutMenu                = 16,
	PIT_BurnCardMenu               = 17,
	PIT_Emote                      = 18,
	PIT_Spray                      = 19,
	PIT_MAX                        = 20
};


// Enum TgGame.TgPlayerController.EAnnouncerSeries
enum class EAnnouncerSeries : uint8_t
{
	ANS_TimeRemaining              = 0,
	ANS_TimeRemaining5Count        = 1,
	ANS_TotalTimeRemaining         = 2,
	ANS_Countdown                  = 3,
	ANS_Overtime                   = 4,
	ANS_PlayersRemaining           = 5,
	ANS_MAX                        = 6
};


// Enum TgGame.TgPlayerController.EWatchOtherPlayersMode
enum class EWatchOtherPlayersMode : uint8_t
{
	WOPM_NONE                      = 0,
	WOPM_PLAYER                    = 1,
	WOPM_MAX                       = 2
};


// Enum TgGame.TgPlayerController.EHUDOverlay
enum class EHUDOverlay : uint8_t
{
	HO_None                        = 0,
	HO_Sniper                      = 1,
	HO_Binoculars                  = 2,
	HO_AtlasUlt                    = 3,
	HO_OwlScope                    = 4,
	HO_RiderUltVictim              = 5,
	HO_SevenUlt                    = 6,
	HO_MAX                         = 7
};


// Enum TgGame.TgPlayerController.EGiveGoldResult
enum class EGiveGoldResult : uint8_t
{
	GGR_PlayerNotFound             = 0,
	GGR_PlayerNotFriendly          = 1,
	GGR_NotEnoughGold              = 2,
	GGR_Success                    = 3,
	GGR_MAX                        = 4
};


// Enum TgGame.TgPlayerController.TG_CAMERAPOSTURE
enum class ETG_CAMERAPOSTURE : uint8_t
{
	TG_CAMERAPOSTURE_None          = 0,
	TG_CAMERAPOSTURE_Ability3P     = 1,
	TG_CAMERAPOSTURE_Force3P       = 2,
	TG_CAMERAPOSTURE_Force1P       = 3,
	TG_CAMERAPOSTURE_MAX           = 4
};


// Enum TgGame.TgSpectatorController.EZoomState
enum class EZoomState : uint8_t
{
	ZOOM_None                      = 0,
	ZOOM_In                        = 1,
	ZOOM_Out                       = 2,
	ZOOM_MAX                       = 3
};


// Enum TgGame.TgSpectatorController.SpecFlightMode
enum class ESpecFlightMode : uint8_t
{
	SFM_Normal                     = 0,
	SFM_Heli                       = 1,
	SFM_HeliNoVert                 = 2,
	SFM_MAX                        = 3
};


// Enum TgGame.TgSpectatorController.SpectatorCameraMode
enum class ESpectatorCameraMode : uint8_t
{
	SpecCam_None                   = 0,
	SpecCam_Fly                    = 1,
	SpecCam_FollowThirdPerson      = 2,
	SpecCam_FollowFirstPerson      = 3,
	SpecCam_FollowTopDown          = 4,
	SpecCam_Camera                 = 5,
	SpecCam_Overview               = 6,
	SpecCam_LockedView             = 7,
	SpecCam_MAX                    = 8
};


// Enum TgGame.TgSpectatorController.SpectatorCameraCycle
enum class ESpectatorCameraCycle : uint8_t
{
	SpecCycle_None                 = 0,
	SpecCycle_PlayerFriendly       = 1,
	SpecCycle_PlayerEnemy          = 2,
	SpecCycle_Player               = 3,
	SpecCycle_TowerFriendly        = 4,
	SpecCycle_TowerEnemy           = 5,
	SpecCycle_Tower                = 6,
	SpecCycle_Cinematic            = 7,
	SpecCycle_Action               = 8,
	SpecCycle_MAX                  = 9
};


// Enum TgGame.TgSpectatorController.ESpectatorMode
enum class ESpectatorMode : uint8_t
{
	SPECMODE_Manual                = 0,
	SPECMODE_Director              = 1,
	SPECMODE_Assisted              = 2,
	SPECMODE_Broadcast1            = 3,
	SPECMODE_Broadcast2            = 4,
	SPECMODE_Broadcast3            = 5,
	SPECMODE_Broadcast4            = 6,
	SPECMODE_MAX                   = 7
};


// Enum TgGame.TgDeployable.AdvancedCollisionMode
enum class EAdvancedCollisionMode : uint8_t
{
	ACM_None                       = 0,
	ACM_Shield                     = 1,
	ACM_Geometry                   = 2,
	ACM_MAX                        = 3
};


// Enum TgGame.TgDevice_BuckInhand.ReloadAnimType
enum class EReloadAnimType : uint8_t
{
	RAT_FirstShell                 = 0,
	RAT_LoopingShells              = 1,
	RAT_PostReload                 = 2,
	RAT_MAX                        = 3
};


// Enum TgGame.TgDeviceFire.DeviceTargeterType
enum class EDeviceTargeterType : uint8_t
{
	TGDTT_None                     = 0,
	TGDTT_Self                     = 1,
	TGDTT_Friend                   = 2,
	TGDTT_Enemy                    = 3,
	TGDTT_OwnPet                   = 4,
	TGDTT_Enemy_And_Self           = 5,
	TGDTT_Friend_Only              = 6,
	TGDTT_Pet_Owner                = 7,
	TGDTT_Not_Self                 = 8,
	TGDTT_All                      = 9,
	TGDTT_MAX                      = 10
};


// Enum TgGame.TgDeviceFire.HeadShotResult
enum class EHeadShotResult : uint8_t
{
	HEADSHOT_SuccessfulMeshTrace   = 0,
	HEADSHOT_FailedMeshTrace       = 1,
	HEADSHOT_CannotMeshTrace       = 2,
	HEADSHOT_Failure               = 3,
	HEADSHOT_MAX                   = 4
};


// Enum TgGame.TgDeviceFire.TargetSelectionType
enum class ETargetSelectionType : uint8_t
{
	TGTST_Default                  = 0,
	TGTST_Random                   = 1,
	TGTST_Closest                  = 2,
	TGTST_ClosestAimCenter         = 3,
	TGTST_LowestHealthPercent      = 4,
	TGTST_MAX                      = 5
};


// Enum TgGame.TgDeviceForm_Drag.EDragState
enum class EDragState : uint8_t
{
	DRAG_Inactive                  = 0,
	DRAG_Throw                     = 1,
	DRAG_Hit                       = 2,
	DRAG_Pull                      = 3,
	DRAG_EndPull                   = 4,
	DRAG_MissThrow                 = 5,
	DRAG_MissInvalid               = 6,
	DRAG_MissThrowEnd              = 7,
	DRAG_MissInvalidEnd            = 8,
	DRAG_CloseRangeEnd             = 9,
	DRAG_MAX                       = 10
};


// Enum TgGame.TgPawn_Lazarus.ResurrectionState
enum class EResurrectionState : uint8_t
{
	RS_NONE                        = 0,
	RS_STANDBY                     = 1,
	RS_BUILDUP                     = 2,
	RS_ACTIVE                      = 3,
	RS_SUICIDE                     = 4,
	RS_END                         = 5,
	RS_MAX                         = 6
};


// Enum TgGame.TgDeviceForm_Spray.SprayDisplayBehavior
enum class ESprayDisplayBehavior : uint8_t
{
	SDB_RandomSprayAlpha           = 0,
	SDB_MasteryNumbers             = 1,
	SDB_SprayAlphaMasteryNumbers   = 2,
	SDB_TickingNumbers             = 3,
	SDB_Kills                      = 4,
	SDB_DamageDealt                = 5,
	SDB_WinsDamage                 = 6,
	SDB_WinsFlank                  = 7,
	SDB_WinsSupport                = 8,
	SDB_WinsFrontline              = 9,
	SDB_MAX                        = 10
};


// Enum TgGame.TgDistributionFloatSoundAttenuation.SoundAttenuationType
enum class ESoundAttenuationType : uint8_t
{
	TG_ATTENUATION_None            = 0,
	TG_ATTENUATION_Sm_foley        = 1,
	TG_ATTENUATION_Lg_foley        = 2,
	TG_ATTENUATION_Melee_Hit       = 3,
	TG_ATTENUATION_Sm_gun          = 4,
	TG_ATTENUATION_Med_gun         = 5,
	TG_ATTENUATION_Lg_gun          = 6,
	TG_ATTENUATION_Sm_exp          = 7,
	TG_ATTENUATION_Med_exp         = 8,
	TG_ATTENUATION_Lg_exp          = 9,
	TG_ATTENUATION_MAX             = 10
};


// Enum TgGame.TgDoorMarker.DoorStatus
enum class EDoorStatus : uint8_t
{
	TGD_NONE                       = 0,
	TGD_LOCKED                     = 1,
	TGD_OPEN                       = 2,
	TGD_CLOSE                      = 3,
	TGD_MAX                        = 4
};


// Enum TgGame.TgEffectGroup.AttackType
enum class EAttackType : uint8_t
{
	TGAT_None                      = 0,
	TGAT_Range                     = 1,
	TGAT_AOE                       = 2,
	TGAT_Falling                   = 3,
	TGAT_MAX                       = 4
};


// Enum TgGame.TgEffectManager.EDiminshingReturnsStackType
enum class EDiminshingReturnsStackType : uint8_t
{
	DRST_None                      = 0,
	DRST_CrowdControl              = 1,
	DRST_SuperiorCrowdControl      = 2,
	DRST_Stun                      = 3,
	DRST_MAX                       = 4
};


// Enum TgGame.TgEmitter_CameraEffect_DamageBase.EDamageEffectScreenLocation
enum class EDamageEffectScreenLocation : uint8_t
{
	DESL_Right                     = 0,
	DESL_TopRight                  = 1,
	DESL_Top                       = 2,
	DESL_TopLeft                   = 3,
	DESL_Left                      = 4,
	DESL_BottomLeft                = 5,
	DESL_Bottom                    = 6,
	DESL_BottomRight               = 7,
	DESL_MAX                       = 8
};


// Enum TgGame.TgProjectile.SpawnDeployableOrientation
enum class ESpawnDeployableOrientation : uint8_t
{
	SDO_AlignUpToNormal            = 0,
	SDO_FaceRotation               = 1,
	SDO_MAX                        = 2
};


// Enum TgGame.TgProj_Simulated.eSimProjEvent
enum class EeSimProjEvent : uint8_t
{
	Proj_Spawn                     = 0,
	Proj_Exploded                  = 1,
	Proj_ExplodedSpecial           = 2,
	Proj_HitTimeWall               = 3,
	Proj_Shutdown                  = 4,
	Proj_Hit                       = 5,
	Proj_Target                    = 6,
	Proj_HitWall                   = 7,
	Proj_HideProjectile            = 8,
	Proj_Fizzle                    = 9,
	Proj_Halt                      = 10,
	Proj_Bounce                    = 11,
	Proj_MAX                       = 12
};


// Enum TgGame.TgFlagContentData.FlagContentDataType
enum class EFlagContentDataType : uint8_t
{
	FCDT_None                      = 0,
	FCDT_Egyptian_Lobby            = 1,
	FCDT_Egyptian_Wall             = 2,
	FCDT_Norse_Lobby               = 3,
	FCDT_Norse_Wall                = 4,
	FCDT_Greek_Lobby               = 5,
	FCDT_Greek_Wall                = 6,
	FCDT_Roman_Lobby               = 7,
	FCDT_Roman_Wall                = 8,
	FCDT_Chinese_Lobby             = 9,
	FCDT_Chinese_Wall              = 10,
	FCDT_Mayan_Lobby               = 11,
	FCDT_Mayan_Wall                = 12,
	FCDT_Hindu_Lobby               = 13,
	FCDT_Hindu_Wall                = 14,
	FCDT_MAX                       = 15
};


// Enum TgGame.TgRepInfo_Game.MAP_LANE
enum class EMAP_LANE : uint8_t
{
	MAP_LANE_NONE                  = 0,
	MAP_LANE_LEFT                  = 1,
	MAP_LANE_MIDDLE                = 2,
	MAP_LANE_RIGHT                 = 3,
	MAP_LANE_MAX                   = 4
};


// Enum TgGame.TgRepInfo_Game.MissionTimerState
enum class EMissionTimerState : uint8_t
{
	MTS_STOPPED                    = 0,
	MTS_RUNNING                    = 1,
	MTS_PAUSED                     = 2,
	MTS_MAX                        = 3
};


// Enum TgGame.TgRepInfo_Game.EHUDType
enum class EHUDType : uint8_t
{
	EHT_None                       = 0,
	EHT_Siege                      = 1,
	EHT_TDM                        = 2,
	EHT_HH_Climb                   = 3,
	EHT_HH_TDM                     = 4,
	EHT_Flagball                   = 5,
	EHT_Onslaught                  = 6,
	EHT_MAX                        = 7
};


// Enum TgGame.TgRepInfo_Game.AbyssalEchoActiveSTatus
enum class EAbyssalEchoActiveSTatus : uint8_t
{
	AEAS_Inactive                  = 0,
	AEAS_Active                    = 1,
	AEAS_TimingOut                 = 2,
	AEAS_MAX                       = 3
};


// Enum TgGame.TgRepInfo_Game.EFlagState
enum class EFlagState : uint8_t
{
	FLAG_Home                      = 0,
	FLAG_HeldFriendly              = 1,
	FLAG_HeldEnemy                 = 2,
	FLAG_Down                      = 3,
	FLAG_MAX                       = 4
};


// Enum TgGame.TgGame_Paladins.EVictoryType
enum class EVictoryType : uint8_t
{
	EVT_Default                    = 0,
	EVT_Capture                    = 1,
	EVT_Defend                     = 2,
	EVT_Payload                    = 3,
	EVT_Siege                      = 4,
	EVT_Survival                   = 5,
	EVT_Kill                       = 6,
	EVT_Ticket                     = 7,
	EVT_TimeLimit                  = 8,
	EVT_Goal                       = 9,
	EVT_MAX                        = 10
};


// Enum TgGame.TgGame_Paladins.EGamePhase
enum class EGamePhase : uint8_t
{
	EGP_None                       = 0,
	EGP_Standard                   = 1,
	EGP_ApplyGlobalEffect          = 2,
	EGP_AutoBuyOnRespawn           = 3,
	EGP_Bombardment                = 4,
	EGP_Capture                    = 5,
	EGP_ChangeRespawnTime          = 6,
	EGP_ConquestRoundTracking      = 7,
	EGP_CooldownReduction          = 8,
	EGP_CrazyKingInitialPoint      = 9,
	EGP_CrazyKingRandomPoint       = 10,
	EGP_CrazyKingPointAlert        = 11,
	EGP_CreditsOnPointTick         = 12,
	EGP_DisableAI                  = 13,
	EGP_DisableAimAssist           = 14,
	EGP_DisableAutoHealing         = 15,
	EGP_DisableCreditSpooling      = 16,
	EGP_DisableEnergyChargeDevices = 17,
	EGP_DisablePassiveUltCharge    = 18,
	EGP_DisableLoadoutChanging     = 19,
	EGP_EnableAI                   = 20,
	EGP_EnableAimAssist            = 21,
	EGP_EnableCreditSpooling       = 22,
	EGP_EnableGlobalMounting       = 23,
	EGP_EndGame                    = 24,
	EGP_EndTicketGame              = 25,
	EGP_EndWhenScoreReached        = 26,
	EGP_EquipDevice                = 27,
	EGP_FlagballActive             = 28,
	EGP_Force3P                    = 29,
	EGP_FreezePlayers              = 30,
	EGP_Gather                     = 31,
	EGP_GlobalItemPurchasing       = 32,
	EGP_GlobalLoadoutChanging      = 33,
	EGP_KismetNotify               = 34,
	EGP_Loop                       = 35,
	EGP_ManageCapturePoint         = 36,
	EGP_NoRespawn                  = 37,
	EGP_Parallel                   = 38,
	EGP_PlayMovie                  = 39,
	EGP_PlayMusic                  = 40,
	EGP_PlaySound                  = 41,
	EGP_Push                       = 42,
	EGP_RandomChild                = 43,
	EGP_RandomlySpawnCreditCaches  = 44,
	EGP_ResetUltCharge             = 45,
	EGP_RespawnAllOnBegin          = 46,
	EGP_RespawnDeadOnBegin         = 47,
	EGP_RoundEnd                   = 48,
	EGP_RoundReset                 = 49,
	EGP_ScoreOnKill                = 50,
	EGP_SendMessageToClients       = 51,
	EGP_SetHUD                     = 52,
	EGP_Setup                      = 53,
	EGP_SetupStasis                = 54,
	EGP_SpawnFlagball              = 55,
	EGP_TDMMain                    = 56,
	EGP_Ticket                     = 57,
	EGP_TicketsOnKill              = 58,
	EGP_TicketsOnPointTick         = 59,
	EGP_TieBranch                  = 60,
	EGP_TieBreaker                 = 61,
	EGP_ToggleAttackingTeam        = 62,
	EGP_UltAcceleration            = 63,
	EGP_MAX                        = 64
};


// Enum TgGame.TgGame_Paladins.EOM_CURRENCY_TYPE
enum class EOM_CURRENCY_TYPE : uint8_t
{
	EOMCT_NONE                     = 0,
	EOMCT_PLAYERTOKENS             = 1,
	EOMCT_CHARACTERXP              = 2,
	EOMCT_PLAYERXP                 = 3,
	EOMCT_BATTLEPASSXP             = 4,
	EOMCT_MAX                      = 5
};


// Enum TgGame.TgGame_Paladins.EOM_BONUS_SOURCE_TYPE
enum class EOM_BONUS_SOURCE_TYPE : uint8_t
{
	EOMBST_NONE                    = 0,
	EOMBST_PARTY                   = 1,
	EOMBST_MATCHBOOST              = 2,
	EOMBST_ACCOLADES               = 3,
	EOMBST_EVENTBOOST              = 4,
	EOMBST_EOMMULT                 = 5,
	EOMBST_MAX                     = 6
};


// Enum TgGame.TgGame_Paladins.EOM_BONUS_TYPE
enum class EOM_BONUS_TYPE : uint8_t
{
	EOMBT_NONE                     = 0,
	EOMBT_ADDITIVE                 = 1,
	EOMBT_MULTIPLICATIVE           = 2,
	EOMBT_FLAT                     = 3,
	EOMBT_MAX                      = 4
};


// Enum TgGame.TgGame_PaladinsExtended.ETeamStatus
enum class ETeamStatus : uint8_t
{
	TEAM_WINNING                   = 0,
	TEAM_LOSING                    = 1,
	TEAM_TIED                      = 2,
	TEAM_MAX                       = 3
};


// Enum TgGame.TgGame_Paladins_Flagball.EFlagballLeadState
enum class EFlagballLeadState : uint8_t
{
	EFBLS_TIED                     = 0,
	EFBLS_TF1                      = 1,
	EFBLS_TF2                      = 2,
	EFBLS_MAX                      = 3
};


// Enum TgGame.TgGame_Paladins_Flagball.EFlagballPossessionState
enum class EFlagballPossessionState : uint8_t
{
	EFBPS_Neutral                  = 0,
	EFBPS_TF1                      = 1,
	EFBPS_TF2                      = 2,
	EFBPS_MAX                      = 3
};


// Enum TgGame.TgGame_Paladins_TeamDeathMatch.TDMProgressState
enum class ETDMProgressState : uint8_t
{
	TDMPS_None                     = 0,
	TDMPS_Low                      = 1,
	TDMPS_Medium                   = 2,
	TDMPS_High                     = 3,
	TDMPS_MAX                      = 4
};


// Enum TgGame.TgGame_Paladins_Tutorial.ETutorialAnnouncerLine
enum class ETutorialAnnouncerLine : uint8_t
{
	Announcer_Line_Tutorial_A_PortalRoom_010 = 0,
	Announcer_Line_Tutorial_A_PortalRoom_020 = 1,
	Announcer_Line_Tutorial_A_PortalRoom_030 = 2,
	Announcer_Line_Tutorial_A_PortalRoom_040 = 3,
	Announcer_Line_Tutorial_A_PortalRoom_050 = 4,
	Announcer_Line_Tutorial_A_PortalRoom_060 = 5,
	Announcer_Line_Tutorial_A_PortalRoom_070 = 6,
	Announcer_Line_Tutorial_A_PortalRoom_080 = 7,
	Announcer_Line_Tutorial_A_PortalRoom_090 = 8,
	Announcer_Line_Tutorial_A_PortalRoom = 9,
	Announcer_Line_Tutorial_A_PortalRoom01 = 10,
	Announcer_Line_Tutorial_B_BasicTraining_020 = 11,
	Announcer_Line_Tutorial_B_BasicTraining_030 = 12,
	Announcer_Line_Tutorial_B_BasicTraining_050 = 13,
	Announcer_Line_Tutorial_B_BasicTraining_060 = 14,
	Announcer_Line_Tutorial_B_BasicTraining_070 = 15,
	Announcer_Line_Tutorial_B_BasicTraining_080 = 16,
	Announcer_Line_Tutorial_B_BasicTraining_090 = 17,
	Announcer_Line_Tutorial_B_BasicTraining = 18,
	Announcer_Line_Tutorial_B_BasicTraining01 = 19,
	Announcer_Line_Tutorial_B_BasicTraining02 = 20,
	Announcer_Line_Tutorial_B_BasicTraining03 = 21,
	Announcer_Line_Tutorial_B_BasicTraining04 = 22,
	Announcer_Line_Tutorial_B_BasicTraining05 = 23,
	Announcer_Line_Tutorial_B_BasicTraining06 = 24,
	Announcer_Line_Tutorial_B_BasicTraining07 = 25,
	Announcer_Line_Tutorial_B_BasicTraining08 = 26,
	Announcer_Line_Tutorial_B_BasicTraining09 = 27,
	Announcer_Line_Tutorial_B_BasicTraining10 = 28,
	Announcer_Line_Tutorial_B_BasicTraining11 = 29,
	Announcer_Line_Tutorial_B_BasicTraining12 = 30,
	Announcer_Line_Tutorial_B_BasicTraining13 = 31,
	Announcer_Line_Tutorial_B_BasicTraining14 = 32,
	Announcer_Line_Tutorial_B_BasicTraining15 = 33,
	Announcer_Line_Tutorial_B_BasicTraining16 = 34,
	Announcer_Line_Tutorial_B_BasicTraining17 = 35,
	Announcer_Line_Tutorial_B_BasicTraining18 = 36,
	Announcer_Line_Tutorial_B_BasicTraining19 = 37,
	Announcer_Line_Tutorial_B_BasicTraining20 = 38,
	Announcer_Line_Tutorial_B_BasicTraining21 = 39,
	Announcer_Line_Tutorial_B_BasicTraining22 = 40,
	Announcer_Line_Tutorial_B_BasicTraining23 = 41,
	Announcer_Line_Tutorial_B_BasicTraining24 = 42,
	Announcer_Line_Tutorial_B_BasicTraining25 = 43,
	Announcer_Line_Tutorial_B_BasicTraining26 = 44,
	Announcer_Line_Tutorial_B_BasicTraining27 = 45,
	Announcer_Line_Tutorial_B_BasicTraining28 = 46,
	Announcer_Line_Tutorial_B_BasicTraining29 = 47,
	Announcer_Line_Tutorial_B_BasicTraining30 = 48,
	Announcer_Line_Tutorial_B_BasicTraining31 = 49,
	Announcer_Line_Tutorial_B_BasicTraining32 = 50,
	Announcer_Line_Tutorial_B_BasicTraining33 = 51,
	Announcer_Line_Tutorial_B_BasicTraining34 = 52,
	Announcer_Line_Tutorial_B_BasicTraining35 = 53,
	Announcer_Line_Tutorial_B_BasicTraining36 = 54,
	Announcer_Line_Tutorial_C_PortalRoom2_010 = 55,
	Announcer_Line_Tutorial_C_PortalRoom2_020 = 56,
	Announcer_Line_Tutorial_C_PortalRoom2_030 = 57,
	Announcer_Line_Tutorial_C_PortalRoom2_040 = 58,
	Announcer_Line_Tutorial_C_PortalRoom2_050 = 59,
	Announcer_Line_Tutorial_C_PortalRoom2_060 = 60,
	Announcer_Line_Tutorial_C_PortalRoom2_070 = 61,
	Announcer_Line_Tutorial_C_PortalRoom2_080 = 62,
	Announcer_Line_Tutorial_C_PortalRoom2_085 = 63,
	Announcer_Line_Tutorial_C_PortalRoom2_090 = 64,
	Announcer_Line_Tutorial_C_PortalRoom2 = 65,
	Announcer_Line_Tutorial_C_PortalRoom201 = 66,
	Announcer_Line_Tutorial_D_Objective_012 = 67,
	Announcer_Line_Tutorial_D_Objective_015 = 68,
	Announcer_Line_Tutorial_D_Objective_018 = 69,
	Announcer_Line_Tutorial_D_Objective_020 = 70,
	Announcer_Line_Tutorial_D_Objective_022 = 71,
	Announcer_Line_Tutorial_D_Objective_025 = 72,
	Announcer_Line_Tutorial_D_Objective_028 = 73,
	Announcer_Line_Tutorial_D_Objective_030 = 74,
	Announcer_Line_Tutorial_D_Objective_040 = 75,
	Announcer_Line_Tutorial_D_Objective_050 = 76,
	Announcer_Line_Tutorial_D_Objective_060 = 77,
	Announcer_Line_Tutorial_D_Objective_065 = 78,
	Announcer_Line_Tutorial_D_Objective_070 = 79,
	Announcer_Line_Tutorial_D_Objective_080 = 80,
	Announcer_Line_Tutorial_D_Objective_090 = 81,
	Announcer_Line_Tutorial_D_Objective = 82,
	Announcer_Line_Tutorial_D_Objective01 = 83,
	Announcer_Line_Tutorial_D_Objective02 = 84,
	Announcer_Line_Tutorial_D_Objective03 = 85,
	Announcer_Line_Tutorial_D_Objective04 = 86,
	Announcer_Line_Tutorial_D_Objective05 = 87,
	Announcer_Line_Tutorial_D_Objective06 = 88,
	Announcer_Line_Tutorial_D_Objective07 = 89,
	Announcer_Line_Tutorial_MAX    = 90
};


// Enum TgGame.TgGame_Paladins_Tutorial.ETutorialState
enum class ETutorialState : uint8_t
{
	ETutState_Invalid              = 0,
	ETutState_TutorialIntro        = 1,
	ETutState_MoveForwardBackward  = 2,
	ETutState_MoveRightLeft        = 3,
	ETutState_PlayerApproachBot    = 4,
	ETutState_PlayerMoveToShootingRange = 5,
	ETutState_HealthBar            = 6,
	ETutState_AutoAbility          = 7,
	ETutState_AutoAbilityMultipleEnemies = 8,
	ETutState_BattleAbility        = 9,
	ETutState_CooldownExplain      = 10,
	ETutState_MovementAbility      = 11,
	ETutState_PlayerMoveToUltimateShootingRange = 12,
	ETutState_AltAbility           = 13,
	ETutState_UltimateAbilityCharge = 14,
	ETutState_UltimateAbility      = 15,
	ETutState_Mount                = 16,
	ETutState_PlayerMovingToJumpArea = 17,
	ETutState_Jump                 = 18,
	ETutState_PlayerMovingToObjective = 19,
	ETutState_CapturingObjective   = 20,
	ETutState_ContestingObjective  = 21,
	ETutState_PayloadSpawn         = 22,
	ETutState_PayloadContest       = 23,
	ETutState_PayloadPush          = 24,
	ETutState_TutorialComplete     = 25,
	ETutState_MAX                  = 26
};


// Enum TgGame.TgGame_Paladins_Tutorial.ETutorialUI
enum class ETutorialUI : uint8_t
{
	ETUI_Health                    = 0,
	ETUI_Auto                      = 1,
	ETUI_BattleAbility             = 2,
	ETUI_MovementAbility           = 3,
	ETUI_Alt                       = 4,
	ETUI_Ultimate                  = 5,
	ETUI_CapturePoint              = 6,
	ETUI_Payload                   = 7,
	ETUI_ScoreSection              = 8,
	ETUI_PushTime                  = 9,
	ETUI_Cards                     = 10,
	ETUI_Prompt                    = 11,
	ETUI_Killfeed                  = 12,
	ETUI_MAX                       = 13
};


// Enum TgGame.TgGame_Siege.SIEGE_TIER
enum class ESIEGE_TIER : uint8_t
{
	SGT_NONE                       = 0,
	SGT_TOWERA                     = 1,
	SGT_TOWERB                     = 2,
	SGT_CASTLE                     = 3,
	SGT_MAX                        = 4
};


// Enum TgGame.TgGameplayCurvesSet_BulletMagnetOverDist.EPaladinsBulletMagnetType
enum class EPaladinsBulletMagnetType : uint8_t
{
	PBMT_AimAssistOnly             = 0,
	PBMT_NoAimAssistOnly           = 1,
	PBMT_AlwaysApplied             = 2,
	PBMT_MAX                       = 3
};


// Enum TgGame.TgGameplayCurvesSet_Recoil.EPaladinsRecoilType
enum class EPaladinsRecoilType : uint8_t
{
	PRT_Normal                     = 0,
	PRT_AimDownSights              = 1,
	PRT_StimActive                 = 2,
	PRT_MAX                        = 3
};


// Enum TgGame.TgInventoryObject.EReplicatedState
enum class EReplicatedState : uint8_t
{
	IORS_Ok                        = 0,
	IORS_Edited                    = 1,
	IORS_Deleted                   = 2,
	IORS_MAX                       = 3
};


// Enum TgGame.TgInventoryObject_Listen_DuringAbility.EDuringAbilityType
enum class EDuringAbilityType : uint8_t
{
	DURINGABILITY_PREFIRE          = 0,
	DURINGABILITY_FIRE             = 1,
	DURINGABILITY_POSTFIRE         = 2,
	DURINGABILITY_MAX              = 3
};


// Enum TgGame.TgInventoryObject_Listen_DeployOnAbility.EDeployOnAbilityType
enum class EDeployOnAbilityType : uint8_t
{
	DEPLOYON_STARTFIRE             = 0,
	DEPLOYON_FIRE                  = 1,
	DEPLOYON_STOPFIRE              = 2,
	DEPLOYON_MAX                   = 3
};


// Enum TgGame.TgLevelStreamingSpectator.SpectatorStreamingMethod
enum class ESpectatorStreamingMethod : uint8_t
{
	SSM_OnlyLoadIfSpectating       = 0,
	SSM_OnlyLoadIfNotSpectating    = 1,
	SSM_AlwaysLoad                 = 2,
	SSM_MAX                        = 3
};


// Enum TgGame.TgMenuContentData.MenuContentDataType
enum class EMenuContentDataType : uint8_t
{
	MCDT_None                      = 0,
	MCDT_MainMenu                  = 1,
	MCDT_MAX                       = 2
};


// Enum TgGame.TgNavRouteIndicator.eSetRouteResult
enum class EeSetRouteResult : uint8_t
{
	SetRoute_Failed                = 0,
	SetRoute_OK                    = 1,
	SetRoute_AtDestination         = 2,
	SetRoute_MAX                   = 3
};


// Enum TgGame.TgPawn_Blades.DjBladesFace
enum class EDjBladesFace : uint8_t
{
	eDBF_Base                      = 0,
	eDBF_VGS_Positive              = 1,
	eDBF_VGS_Negative              = 2,
	eDBF_VGS_Silly                 = 3,
	eDBF_Ability                   = 4,
	eDBF_Ability01                 = 5,
	eDBF_CrowdControl              = 6,
	eDBF_Death                     = 7,
	eDBF_MAX                       = 8
};


// Enum TgGame.TgPawn_Blades.GemEmissiveAnim
enum class EGemEmissiveAnim : uint8_t
{
	eGEA_None                      = 0,
	eGEA_Idle                      = 1,
	eGEA_Pounce                    = 2,
	eGEA_Prowl                     = 3,
	eGEA_AirJump                   = 4,
	eGEA_NineLives                 = 5,
	eGEA_Midnight                  = 6,
	eGEA_MAX                       = 7
};


// Enum TgGame.TgPawn_Blades.DjBladesFacePriority
enum class EDjBladesFacePriority : uint8_t
{
	eDBFP_Ability                  = 0,
	eDBFP_VGS                      = 1,
	eDBFP_Status                   = 2,
	eDBFP_MAX                      = 3
};


// Enum TgGame.TgPawn_BombKing.EWeaponMeshState
enum class EWeaponMeshState : uint8_t
{
	WMS_Inhand                     = 0,
	WMS_Grumpy                     = 1,
	WMS_Poppy                      = 2,
	WMS_MAX                        = 3
};


// Enum TgGame.TgPawn_LanePusher.EDestroyedAnimStages
enum class EDestroyedAnimStages : uint8_t
{
	EngineDestruction_FullHealth_Idle = 0,
	EngineDestruction_FirstDestruction = 1,
	EngineDestruction_SecondDestruction = 2,
	EngineDestruction_MAX          = 3
};


// Enum TgGame.TgPawn_Lex.ETheLawTargetState
enum class ETheLawTargetState : uint8_t
{
	ETLTS_WontExecute              = 0,
	ETLTS_WillExecute              = 1,
	ETLTS_Firing                   = 2,
	ETLTS_MAX                      = 3
};


// Enum TgGame.TgPawn_SiegeEngine_Payload.EAutoMovePayload
enum class EAutoMovePayload : uint8_t
{
	AUTOMOVE_None                  = 0,
	AUTOMOVE_Forward               = 1,
	AUTOMOVE_Backward              = 2,
	AUTOMOVE_MAX                   = 3
};


// Enum TgGame.TgPawn_SiegeEngine_Payload.EPayloadControlState
enum class EPayloadControlState : uint8_t
{
	PAYLOADCONTROL_None            = 0,
	PAYLOADCONTROL_Ally            = 1,
	PAYLOADCONTROL_Enemy           = 2,
	PAYLOADCONTROL_Contested       = 3,
	PAYLOADCONTROL_MAX             = 4
};


// Enum TgGame.TgPawn_Tower_FA.ETowerType
enum class ETowerType : uint8_t
{
	TowerType_Default              = 0,
	TowerType_Inner                = 1,
	TowerType_Outer                = 2,
	TowerType_Upper                = 3,
	TowerType_MAX                  = 4
};


// Enum TgGame.TgPhysAnimTestActor.EPATAState
enum class EPATAState : uint8_t
{
	PATA_FixedAll                  = 0,
	PATA_FixedLower                = 1,
	PATA_MotorRagdoll              = 2,
	PATA_Floppy                    = 3,
	PATA_Recover                   = 4,
	PATA_MAX                       = 5
};


// Enum TgGame.TgPlayerCamera.CameraEffectVisiblity
enum class ECameraEffectVisiblity : uint8_t
{
	CEV_1pAnd3p                    = 0,
	CEV_1pOnly                     = 1,
	CEV_3pOnly                     = 2,
	CEV_MAX                        = 3
};


// Enum TgGame.TgRepInfo_Factory.ReplicatedFactoryState
enum class EReplicatedFactoryState : uint8_t
{
	RFS_None                       = 0,
	RFS_Vacant                     = 1,
	RFS_Spawned                    = 2,
	RFS_OwnedByTF1                 = 3,
	RFS_OwnedByTF2                 = 4,
	RFS_MAX                        = 5
};


// Enum TgGame.TgRepInfo_Player.GAME_MODE_INSTRUCTION
enum class EGAME_MODE_INSTRUCTION : uint8_t
{
	GMI_NONE                       = 0,
	GMI_CAPTURE_POINT              = 1,
	GMI_PUSH_PAYLOAD               = 2,
	GMI_DEFEND_AGAINST_PAYLOAD     = 3,
	GMI_MAX                        = 4
};


// Enum TgGame.TgRepInfo_Player.SCORE_TYPE
enum class ESCORE_TYPE : uint8_t
{
	STYPE_REPPTS                   = 0,
	STYPE_KILLS                    = 1,
	STYPE_ASSISTS                  = 2,
	STYPE_DAMAGETAKEN              = 3,
	STYPE_DAMAGE                   = 4,
	STYPE_BUFFVALUE                = 5,
	STYPE_HEALING                  = 6,
	STYPE_DEFENSE                  = 7,
	STYPE_DEATHS                   = 8,
	STYPE_OBJS                     = 9,
	STYPE_KILLS_BOT                = 10,
	STYPE_EARNED_XP                = 11,
	STYPE_EARNED_GOLD              = 12,
	STYPE_CURRENT_GOLD             = 13,
	STYPE_GOLD_PER_MIN             = 14,
	STYPE_XP_PER_MIN               = 15,
	STYPE_PLAYER_DMG               = 16,
	STYPE_BOT_DMG                  = 17,
	STYPE_STRUCT_DMG               = 18,
	STYPE_OBJ_ASSISTS              = 19,
	STYPE_KILLS_SOLO               = 20,
	STYPE_DMG_MITIGATED            = 21,
	STYPE_KILLS_TOTAL              = 22,
	STYPE_MAX                      = 23
};


// Enum TgGame.TgRepInfo_Player.DEVICE_STATS
enum class EDEVICE_STATS : uint8_t
{
	DS_ID                          = 0,
	DS_DAMAGE                      = 1,
	DS_HEALING                     = 2,
	DS_PLAYER_KILLS                = 3,
	DS_BOT_KILLS                   = 4,
	DS_DPM                         = 5,
	DS_HPM                         = 6,
	DS_MODE_COUNT                  = 7,
	DS_BUFF_VALUE                  = 8,
	DS_MAX                         = 9
};


// Enum TgGame.TgRespawnBeaconEntrance.ERespawnBeaconChargingState
enum class ERespawnBeaconChargingState : uint8_t
{
	RBCS_Inactive                  = 0,
	RBCS_Waiting                   = 1,
	RBCS_BuildUp                   = 2,
	RBCS_Active                    = 3,
	RBCS_MAX                       = 4
};


// Enum TgGame.TgRespawnBeaconExit.ERespawnBeaconActiveState
enum class ERespawnBeaconActiveState : uint8_t
{
	RBAS_Inactive                  = 0,
	RBAS_Carried                   = 1,
	RBAS_Deploying                 = 2,
	RBAS_Active                    = 3,
	RBAS_MAX                       = 4
};


// Enum TgGame.TgSeqAct_ForceClientTutorialAction.eForcedClientTutorialAction
enum class EeForcedClientTutorialAction : uint8_t
{
	FCTA_BlockAvl                  = 0,
	FCTA_UnblockAvl                = 1,
	FCTA_Open                      = 2,
	FCTA_Close                     = 3,
	FCTA_MAX                       = 4
};


// Enum TgGame.TgSeqAct_RequestMission.EMissionDifficultyLevel
enum class EMissionDifficultyLevel : uint8_t
{
	DL_Easy                        = 0,
	DL_Medium                      = 1,
	DL_Hard                        = 2,
	DL_MAX                         = 3
};


// Enum TgGame.TgSeqAct_TutorialHighlighter.eTutorialHighlighterElement
enum class EeTutorialHighlighterElement : uint8_t
{
	THE_Ability1                   = 0,
	THE_ActiveItem                 = 1,
	THE_ConsumableItem             = 2,
	THE_Gold                       = 3,
	THE_ItemShop_Gold              = 4,
	THE_ItemShop_Item              = 5,
	THE_ItemShop_Item2             = 6,
	THE_ItemShop_Item3             = 7,
	THE_ItemShop_Purchase          = 8,
	THE_ItemShop_AllItems          = 9,
	THE_ItemShop_RemoveOverlay     = 10,
	THE_ItemShop_AddBlocker        = 11,
	THE_Stats_Display              = 12,
	THE_MAX                        = 13
};


// Enum TgGame.TgSeqCond_HasCondition.ConditionType
enum class EConditionType : uint8_t
{
	TGCT_POISON                    = 0,
	TGCT_DISEASE                   = 1,
	TGCT_REGENERATION              = 2,
	TGCT_STUN                      = 3,
	TGCT_STEALTH                   = 4,
	TGCT_EMP_STUN                  = 5,
	TGCT_IGNITE                    = 6,
	TGCT_INVULNERABLE              = 7,
	TGCT_SLOW                      = 8,
	TGCT_MAX                       = 9
};


// Enum TgGame.TgSeqEvent_MICParameterEvent.eMICEventType
enum class EeMICEventType : uint8_t
{
	MET_NONE                       = 0,
	MET_DEFENSE_ALARM              = 1,
	MET_MAX                        = 2
};


// Enum TgGame.TgSeqEvent_Named.TSE_NAME
enum class ETSE_NAME : uint8_t
{
	TSE_NONE                       = 0,
	TSE_MENU_CLOSE                 = 1,
	TSE_MOVIE_DONE                 = 2,
	TSE_MAX                        = 3
};


// Enum TgGame.TgSeqEvent_PlayerMoved.EPlayerCardinalDirection
enum class EPlayerCardinalDirection : uint8_t
{
	PCD_Forward                    = 0,
	PCD_Backward                   = 1,
	PCD_Left                       = 2,
	PCD_Right                      = 3,
	PCD_MAX                        = 4
};


// Enum TgGame.TgSeqEvent_Tutorial.EPaladinsTutorialEvent
enum class EPaladinsTutorialEvent : uint8_t
{
	PTE_Started                    = 0,
	PTE_HelperSpawned              = 1,
	PTE_MovingToAutoShootingRange  = 2,
	PTE_PlayerReachedAutoShootingRange = 3,
	PTE_WaitingForMovementAbility  = 4,
	PTE_ReceivedMovementAbility    = 5,
	PTE_PlayerReachedUltimateShootingRange = 6,
	PTE_PlayerUltimateComplete     = 7,
	PTE_PlayerReachedLowerJumpArea = 8,
	PTE_PlayerReachedUpperJumpArea = 9,
	PTE_PlayerReachedObjective     = 10,
	PTE_MoveBotToCapturePoint      = 11,
	PTE_MoveBotToPayload           = 12,
	PTE_Complete                   = 13,
	PTE_MAX                        = 14
};


// Enum TgGame.TgSeqEvent_TutorialEvent.TUTORIAL_EVENT
enum class ETUTORIAL_EVENT : uint8_t
{
	TUTEVT_OPENED_ITEM_SHOP        = 0,
	TUTEVT_BOUGHT_ITEM             = 1,
	TUTEVT_CLOSED_ITEM_SHOP        = 2,
	TUTEVT_OPENED_SKILLS           = 3,
	TUTEVT_BOUGHT_SKILL            = 4,
	TUTEVT_CLOSED_SKILLS           = 5,
	TUTEVT_USED_ABILITY            = 6,
	TUTEVT_USED_RECALL             = 7,
	TUTEVT_TARGETED                = 8,
	TUTEVT_OPENED_INTRO            = 9,
	TUTEVT_CLOSED_INTRO            = 10,
	TUTEVT_USED_ACTIVE_ITEM        = 11,
	TUTEVT_SELECTED_SHOP_ITEM      = 12,
	TUTEVT_SELECTED_SHOP_ITEM2     = 13,
	TUTEVT_SELECTED_SHOP_ITEM3     = 14,
	TUTEVT_USED_CONSUMABLE_ITEM    = 15,
	TUTEVT_SELECTED_ALL_ITEMS      = 16,
	TUTEVT_MAX                     = 17
};


// Enum TgGame.TgSeqEvent_TutorialEvent.TUTORIAL_TARGET_TYPE
enum class ETUTORIAL_TARGET_TYPE : uint8_t
{
	TUT_TARGET_TOWER               = 0,
	TUT_TARGET_PHOENIX             = 1,
	TUT_TARGET_GUARDIAN            = 2,
	TUT_TARGET_MAX                 = 3
};


// Enum TgGame.TgSiegePushActor.EPushState
enum class EPushState : uint8_t
{
	PushState_Paused               = 0,
	PushState_Forward              = 1,
	PushState_PendingReverse       = 2,
	PushState_Reverse              = 3,
	PushState_MAX                  = 4
};


// Enum TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupOnType
enum class EDisplayGroupOnType : uint8_t
{
	DISPLAYGROUP_ON_INACTIVE       = 0,
	DISPLAYGROUP_ON_ACTIVE         = 1,
	DISPLAYGROUP_ON_STRENGTHABOVE  = 2,
	DISPLAYGROUP_ON_STRENGTHBELOW  = 3,
	DISPLAYGROUP_ON_MAX            = 4
};


// Enum TgGame.TgSkeletalMeshActor_Loader.LobbyMeterBusIntent
enum class ELobbyMeterBusIntent : uint8_t
{
	LMB_RuckusGem                  = 0,
	LMB_MAX                        = 1
};


// Enum TgGame.TgSkeletalMeshActor_Loader.LobbyAnimPose
enum class ELobbyAnimPose : uint8_t
{
	LAP_Match                      = 0,
	LAP_Victory                    = 1,
	LAP_Defeat                     = 2,
	LAP_InGame                     = 3,
	LAP_MAX                        = 4
};


// Enum TgGame.TgSoundGroup.eTG_SOUNDS
enum class EeTG_SOUNDS : uint8_t
{
	TGS_FOOTSTEP                   = 0,
	TGS_DODGE                      = 1,
	TGS_JUMP                       = 2,
	TGS_LAND                       = 3,
	TGS_DOUBLEJUMP                 = 4,
	TGS_DOUBLELAND                 = 5,
	TGS_DYING                      = 6,
	TGS_HIT                        = 7,
	TGS_MAX                        = 8
};


// Enum TgGame.TgSpawnGate.ESpawnGateType
enum class ESpawnGateType : uint8_t
{
	SPGT_Standard                  = 0,
	SPGT_Attackers                 = 1,
	SPGT_Defenders                 = 2,
	SPGT_MAX                       = 3
};


// Enum TgGame.TgSpecialFxLightManager.SpecialFxLightState
enum class ESpecialFxLightState : uint8_t
{
	FxLight_Normal                 = 0,
	FxLight_Dying                  = 1,
	FxLight_Kill                   = 2,
	FxLight_MAX                    = 3
};


// Enum TgGame.TgTeleportPlayerVolume.TgTeleportVolumeType
enum class ETgTeleportVolumeType : uint8_t
{
	Inactive                       = 0,
	Respawn                        = 1,
	TgTeleportVolumeType_MAX       = 2
};


// Enum TgGame.TgWeaponMeshActor.EFirstPersonWeaponAttachState
enum class EFirstPersonWeaponAttachState : uint8_t
{
	FPAS_NeedsUpdate               = 0,
	FPAS_Attached                  = 1,
	FPAS_Detached                  = 2,
	FPAS_MAX                       = 3
};


// Enum TgGame.TgWeaponMeshActor.TG_PLAY_FIRE_EFFECT_ON
enum class ETG_PLAY_FIRE_EFFECT_ON : uint8_t
{
	START_FIRE                     = 0,
	Fire                           = 1,
	NEVER                          = 2,
	TG_PLAY_FIRE_EFFECT_ON_MAX     = 3
};


// Enum TgGame.TgWeaponMeshActor_LexInhand.EBeamState
enum class EBeamState : uint8_t
{
	EBS_Hidden                     = 0,
	EBS_Targeting                  = 1,
	EBS_Hitting                    = 2,
	EBS_MAX                        = 3
};


// Enum TgGame.TgAnimBlendByPaladinsCharacter_Azaan.AzaanRetrieveState
enum class EAzaanRetrieveState : uint8_t
{
	AZAAN_STATE_NEUTRAL            = 0,
	AZAAN_STATE_POSTSLAM           = 1,
	AZAAN_STATE_POSTULT            = 2,
	AZAAN_STATE_MAX                = 3
};


// Enum TgGame.TgDevice_YagorathUlt.YagorathUltAnimState
enum class EYagorathUltAnimState : uint8_t
{
	YUAS_Start                     = 0,
	YUAS_Pull                      = 1,
	YUAS_EAT                       = 2,
	YUAS_PullCanceled              = 3,
	YUAS_MAX                       = 4
};


// Enum TgGame.TgAnimNodeBlendBySevenLatch.EBlendGrapplingHook
enum class EBlendGrapplingHook : uint8_t
{
	BlendGrapplingHook_Flying      = 0,
	BlendGrapplingHook_Latched     = 1,
	BlendGrapplingHook_HitEnemy    = 2,
	BlendGrapplingHook_Normal      = 3,
	BlendGrapplingHook_MAX         = 4
};


// Enum TgGame.TgDevice_AzaanUlt.AzaanUltAnimState
enum class EAzaanUltAnimState : uint8_t
{
	AzaanUltAnimState_FlyUp        = 0,
	AzaanUltAnimState_Hover        = 1,
	AzaanUltAnimState_Fire         = 2,
	AzaanUltAnimState_Travel       = 3,
	AzaanUltAnimState_Land         = 4,
	AzaanUltAnimState_MAX          = 5
};


// Enum TgGame.TgDevice_CorrupterUlt.CorrupterUltAnimState
enum class ECorrupterUltAnimState : uint8_t
{
	CorrupterUltAnimState_Buildup  = 0,
	CorrupterUltAnimState_UnderGround = 1,
	CorrupterUltAnimState_Execute  = 2,
	CorrupterUltAnimState_NoExecute = 3,
	CorrupterUltAnimState_NoTarget = 4,
	CorrupterUltAnimState_MAX      = 5
};


// Enum TgGame.TgDevice_CorvusUlt.CorvusUltAnimState
enum class ECorvusUltAnimState : uint8_t
{
	CorvusUltAnimState_Buildup     = 0,
	CorvusUltAnimState_Flying      = 1,
	CorvusUltAnimState_Fire        = 2,
	CorvusUltAnimState_NoFire      = 3,
	CorvusUltAnimState_MAX         = 4
};


// Enum TgGame.TgDeviceForm_ShadowUlt.VatuUltAnimState
enum class EVatuUltAnimState : uint8_t
{
	VatuUltAnimState_Buildup       = 0,
	VatuUltAnimState_ChargeUp      = 1,
	VatuUltAnimState_Fire          = 2,
	VatuUltAnimState_MAX           = 3
};


// Enum TgGame.TgDevice_BunnyLink.EBunnySpiritLinkAnimType
enum class EBunnySpiritLinkAnimType : uint8_t
{
	EBSA_Summon                    = 0,
	EBSA_Recast                    = 1,
	EBSA_Break                     = 2,
	EBSA_MAX                       = 3
};


// Enum TgGame.TgPawn_Corvus.CorvusDaggerState
enum class ECorvusDaggerState : uint8_t
{
	ECDS_None                      = 0,
	ECDS_InFlightThrown            = 1,
	ECDS_Deployed                  = 2,
	ECDS_MAX                       = 3
};


// Enum TgGame.TgDevice_DragonFlight.EFlightThrottle
enum class EFlightThrottle : uint8_t
{
	EFT_Hover                      = 0,
	EFT_Cruise                     = 1,
	EFT_Boost                      = 2,
	EFT_MAX                        = 3
};


// Enum TgGame.TgDevice_RaumSuck.ERaumShardCache
enum class ERaumShardCache : uint8_t
{
	RSC_None                       = 0,
	RSC_Health                     = 1,
	RSC_Stacks                     = 2,
	RSC_HealthAndStacks            = 3,
	RSC_MAX                        = 4
};


// Enum TgGame.TgDevice_SaatiPassive.ESaatiBuffType
enum class ESaatiBuffType : uint8_t
{
	SBT_None                       = 0,
	SBT_Damage                     = 1,
	SBT_Movement                   = 2,
	SBT_MAX                        = 3
};


// Enum TgGame.TgPawn_Tiberius.TigerBladeState
enum class ETigerBladeState : uint8_t
{
	ETBS_None                      = 0,
	ETBS_InFlightThrown            = 1,
	ETBS_Deployed                  = 2,
	ETBS_InFlightRecalled          = 3,
	ETBS_MAX                       = 4
};


// Enum TgGame.TgPawn_Yagorath.YagoTravelState
enum class EYagoTravelState : uint8_t
{
	EYTS_None                      = 0,
	EYTS_Acceleration              = 1,
	EYTS_ForcedDeceleration        = 2,
	EYTS_PassiveDeceleration       = 3,
	EYTS_MAX                       = 4
};


// Enum TgGame.TgPawn_Caspian.ECaspianStackSource
enum class ECaspianStackSource : uint8_t
{
	CSS_None                       = 0,
	CSS_Inhand                     = 1,
	CSS_Altfire                    = 2,
	CSS_Wildcard                   = 3,
	CSS_MAX                        = 4
};


// Enum TgGame.TgPawn_Imani.ESummonState
enum class ESummonState : uint8_t
{
	ESS_None                       = 0,
	ESS_Transition                 = 1,
	ESS_Active                     = 2,
	ESS_Dispelled                  = 3,
	ESS_ImaniDied                  = 4,
	ESS_AvatarDied                 = 5,
	ESS_MAX                        = 6
};


// Enum TgGame.TgPawn_ImaniAvatar.EAvatarIntroState
enum class EAvatarIntroState : uint8_t
{
	EIS_None                       = 0,
	EIS_Preparing                  = 1,
	EIS_Played                     = 2,
	EIS_MAX                        = 3
};


// Enum TgGame.TgPawn_ImaniAvatar.EAvatarState
enum class EAvatarState : uint8_t
{
	EAS_Waiting                    = 0,
	EAS_Ready                      = 1,
	EAS_Dead                       = 2,
	EAS_MAX                        = 3
};


// Enum TgGame.TgPawn_ImaniAvatar.EAvatarCamera
enum class EAvatarCamera : uint8_t
{
	EAC_Behind                     = 0,
	EAC_Underwing                  = 1,
	EAC_Neck                       = 2,
	EAC_MAX                        = 3
};


// Enum TgGame.TgPawn_Imani.DigitizedImaniFace
enum class EDigitizedImaniFace : uint8_t
{
	eDIF_Base                      = 0,
	eDIF_Stare                     = 1,
	eDIF_Eye                       = 2,
	eDIF_Smile                     = 3,
	eDIF_Kiss                      = 4,
	eDIF_Heart                     = 5,
	eDIF_Death                     = 6,
	eDIF_UwU                       = 7,
	eDIF_MAX                       = 8
};


// Enum TgGame.TgPawn_Raum.ERaumFiringState
enum class ERaumFiringState : uint8_t
{
	ERFS_None                      = 0,
	ERFS_Idle                      = 1,
	ERFS_Spinning                  = 2,
	ERFS_FireLow                   = 3,
	ERFS_FireHigh                  = 4,
	ERFS_MAX                       = 5
};


// Enum TgGame.TgPawnMod.EReplicatedPawnMods
enum class EReplicatedPawnMods : uint8_t
{
	ERPM_RewindTween               = 0,
	ERPM_MAX                       = 1
};


// Enum TgGame.TgPawnMod_FxAudio.FxAudioMeshSource
enum class EFxAudioMeshSource : uint8_t
{
	FXAMS_Core                     = 0,
	FXAMS_Body                     = 1,
	FXAMS_Head                     = 2,
	FXAMS_Hands                    = 3,
	FXAMS_Weapon1P                 = 4,
	FXAMS_Weapon3P                 = 5,
	FXAMS_MAX                      = 6
};


// Enum TgGame.TgProj_MoonShard.MOONSHARD_WITHIN_RANGE
enum class EMOONSHARD_WITHIN_RANGE : uint8_t
{
	MSWR_None                      = 0,
	MSWR_Outer                     = 1,
	MSWR_Knockup                   = 2,
	MSWR_Inner                     = 3,
	MSWR_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgGame.TgAIDirector.SkillLevelRawData
// 0x0028
struct FSkillLevelRawData
{
	float                                              NumDeaths;                                                // 0x0000(0x0004)
	float                                              Damage;                                                   // 0x0004(0x0004)
	float                                              Kills;                                                    // 0x0008(0x0004)
	float                                              SoloKills;                                                // 0x000C(0x0004)
	float                                              Assists;                                                  // 0x0010(0x0004)
	float                                              Healing;                                                  // 0x0014(0x0004)
	float                                              Credits;                                                  // 0x0018(0x0004)
	float                                              Killstreak;                                               // 0x001C(0x0004)
	float                                              ObjectiveTime;                                            // 0x0020(0x0004)
	float                                              Shielding;                                                // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgAIDirector.SkillLevelPercentageData
// 0x0028
struct FSkillLevelPercentageData
{
	float                                              NumDeathsPercentage;                                      // 0x0000(0x0004)
	float                                              DamagePercentage;                                         // 0x0004(0x0004)
	float                                              KillsPercentage;                                          // 0x0008(0x0004)
	float                                              SoloKillsPercentage;                                      // 0x000C(0x0004)
	float                                              AssistsPercentage;                                        // 0x0010(0x0004)
	float                                              HealingPercentage;                                        // 0x0014(0x0004)
	float                                              CreditsPercentage;                                        // 0x0018(0x0004)
	float                                              ObjectiveTimePercentage;                                  // 0x001C(0x0004)
	float                                              ShieldingPercentage;                                      // 0x0020(0x0004)
	float                                              KillstreakMultiplier;                                     // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgObject.ExtraDamageInfo
// 0x0004
struct FExtraDamageInfo
{
	unsigned long                                      bCritical : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bHeadShot : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bKillingBlow : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bCombo : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bLatent : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bCapped : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bNoInstigator : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgObject.WeaponMeshSwapStrategy
// 0x000C
struct FWeaponMeshSwapStrategy
{
	unsigned long                                      bPlayPutAway : 1;                                         // 0x0000(0x0004)
	TEnumAsByte<EWeaponMeshSwapRetrieveStrategy>       RetrieveStrategy;                                         // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bClearEquipPoint : 1;                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.CLIENT_PAWN_FUNCTION_ARGS
// 0x000C
struct FCLIENT_PAWN_FUNCTION_ARGS
{
	float                                              fArg1;                                                    // 0x0000(0x0004)
	float                                              fArg2;                                                    // 0x0004(0x0004)
	float                                              fArg3;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.BinocularSettings
// 0x002C
struct FBinocularSettings
{
	int                                                nTargets;                                                 // 0x0000(0x0004)
	struct FRotator                                    rHeading;                                                 // 0x0004(0x000C)
	float                                              fRange;                                                   // 0x0010(0x0004)
	float                                              fTimer1;                                                  // 0x0014(0x0004)
	float                                              fTimer2;                                                  // 0x0018(0x0004)
	float                                              fTimer3;                                                  // 0x001C(0x0004)
	float                                              fTimerDuration;                                           // 0x0020(0x0004)
	float                                              fRefireTimerPercent;                                      // 0x0024(0x0004)
	float                                              fDurationPercent;                                         // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.SZombieInfo
// 0x0054
struct FSZombieInfo
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	int                                                Mode;                                                     // 0x0004(0x0004)
	unsigned long                                      RemoveNextTime : 1;                                       // 0x0008(0x0004)
	int                                                TicksUntilCheckLocation;                                  // 0x000C(0x0004)
	struct FVector                                     LastLocation;                                             // 0x0010(0x000C)
	float                                              VelocityCap;                                              // 0x001C(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C)
	float                                              fLastMoveTime;                                            // 0x002C(0x0004)
	float                                              fSecondsUntilInhandFireStateChange;                       // 0x0030(0x0004)
	unsigned long                                      bFiringInhand : 1;                                        // 0x0034(0x0004)
	float                                              fSecondsUntilAbility1FireStateChange;                     // 0x0038(0x0004)
	unsigned long                                      bFiringAbility1 : 1;                                      // 0x003C(0x0004)
	float                                              fSecondsUntilAbility2FireStateChange;                     // 0x0040(0x0004)
	unsigned long                                      bFiringAbility2 : 1;                                      // 0x0044(0x0004)
	float                                              fSecondsUntilAltFireFireStateChange;                      // 0x0048(0x0004)
	unsigned long                                      bFiringAltFire : 1;                                       // 0x004C(0x0004)
	float                                              fSecondsUntilChangeMove;                                  // 0x0050(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.FLOOD
// 0x0008
struct FFLOOD
{
	int                                                m_nCount;                                                 // 0x0000(0x0004)
	float                                              m_fLastUpdate;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.TG_LAST_PURCHASE
// 0x0008
struct FTG_LAST_PURCHASE
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nCount;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.CameraStackInfo
// 0x0008
struct FCameraStackInfo
{
	TEnumAsByte<ETG_CAMERAPOSTURE>                     ePosture;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nStackId;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.sSimProjectileFireInfo
// 0x0040
struct FsSimProjectileFireInfo
{
	int                                                nOwnerFireModeId;                                         // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	struct FVector                                     vVelocity;                                                // 0x0010(0x000C)
	struct FVector                                     vDirectionMunged;                                         // 0x001C(0x000C)
	int                                                nActorID;                                                 // 0x0028(0x0004)
	int                                                nClientFireRequestId;                                     // 0x002C(0x0004)
	TEnumAsByte<ECMTargetType>                         ActorType;                                                // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              fGeneric1;                                                // 0x0034(0x0004)
	float                                              fGeneric2;                                                // 0x0038(0x0004)
	float                                              fTimeDilation;                                            // 0x003C(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.DefaultAudioSwitch
// 0x0020
struct FDefaultAudioSwitch
{
	struct FString                                     sSwitchName;                                              // 0x0000(0x0010) (Config, AlwaysInit, NeedCtorLink)
	struct FString                                     sSwitchValue;                                             // 0x0010(0x0010) (Config, AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgPlayerController.AnnouncerEvent
// 0x0008
struct FAnnouncerEvent
{
	class UAkEvent*                                    akSound;                                                  // 0x0000(0x0008)
};

// ScriptStruct TgGame.TgProperty.TgPropertyInstance
// 0x001C
struct FTgPropertyInstance
{
	int                                                m_nPropIndex;                                             // 0x0000(0x0004)
	int                                                m_nPropertyId;                                            // 0x0004(0x0004)
	float                                              m_fBase;                                                  // 0x0008(0x0004)
	float                                              m_fRaw;                                                   // 0x000C(0x0004)
	float                                              m_fMinimum;                                               // 0x0010(0x0004)
	float                                              m_fMaximum;                                               // 0x0014(0x0004)
	float                                              m_fScalingFactor;                                         // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgAimAssistKeyframe.AimAssistKeyframeData
// 0x000C
struct FAimAssistKeyframeData
{
	struct FName                                       KeyframeName;                                             // 0x0000(0x0008)
	float                                              Distance;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgCustomCharacterComponent.CompositeTextureType
// 0x0010
struct FCompositeTextureType
{
	class UTexture2DComposite*                         CompTexture;                                              // 0x0000(0x0008)
	struct FName                                       TextureParamName;                                         // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgCustomCharacterComponent.CompositePartInfo
// 0x0014
struct FCompositePartInfo
{
	int                                                MeshAsmId;                                                // 0x0000(0x0004)
	int                                                DestOffsetX;                                              // 0x0004(0x0004)
	int                                                DestOffsetY;                                              // 0x0008(0x0004)
	int                                                RegionSizeX;                                              // 0x000C(0x0004)
	int                                                RegionSizeY;                                              // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgRespawnBeaconEntrance.PendingTeleportInfo
// 0x0010
struct FPendingTeleportInfo
{
	class AActor*                                      PendingActor;                                             // 0x0000(0x0008)
	float                                              TouchTimestamp;                                           // 0x0008(0x0004)
	unsigned long                                      HasPlayedPreTeleport : 1;                                 // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDistributionFloatSoundAttenuation.AttenuationGroup
// 0x000C
struct FAttenuationGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008)
	float                                              AttenuationDistance;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgExplosionLight.LightValues
// 0x0018
struct FLightValues
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	float                                              Radius;                                                   // 0x0004(0x0004)
	float                                              Brightness;                                               // 0x0008(0x0004)
	struct FColor                                      LightColor;                                               // 0x000C(0x0004)
	struct FColor                                      EnemyLightColor;                                          // 0x0010(0x0004)
	struct FColor                                      LocalLightColor;                                          // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgFlagContentData.FlagMeshData
// 0x000C
struct FFlagMeshData
{
	TEnumAsByte<EFlagContentDataType>                  ContentDataType;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UTgMenuMeshInfo*                             MainMeshInfo;                                             // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgMarkComponent.TargetMark
// 0x0020
struct FTargetMark
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              fTimeLeft;                                                // 0x0008(0x0004)
	int                                                nNumMarks;                                                // 0x000C(0x0004)
	TArray<class UTgEffectGroup*>                      AppliedEffects;                                           // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgMenuContentData.MeshData
// 0x0018
struct FMeshData
{
	TEnumAsByte<EMenuContentDataType>                  ContentDataType;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UTgMenuMeshInfo*                             MainMeshInfo;                                             // 0x0004(0x0008)
	int                                                nBotId;                                                   // 0x000C(0x0004)
	int                                                nSkinId;                                                  // 0x0010(0x0004)
	int                                                nDeviceSkinId;                                            // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgMenuMeshInfo.LobbyMeshInfo
// 0x006C
struct FLobbyMeshInfo
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x001C(0x0008) (Edit)
	class UPhysicsAsset*                               PhysAsset;                                                // 0x0024(0x0008) (Edit)
	class UAnimTree*                                   AnimTreeTemplate;                                         // 0x002C(0x0008) (Edit)
	TArray<class UAnimSet*>                            AnimSets;                                                 // 0x0034(0x0010) (Edit, NeedCtorLink)
	class UMorphTargetSet*                             MorphTargetSet;                                           // 0x0044(0x0008) (Edit)
	unsigned long                                      bOnlySelfShadow : 1;                                      // 0x004C(0x0004) (Edit)
	unsigned long                                      bUseParentAnimComponent : 1;                              // 0x004C(0x0004) (Edit)
	unsigned long                                      bUseBoundsFromParentAnimComponent : 1;                    // 0x004C(0x0004) (Edit)
	struct FName                                       AttachSocketName;                                         // 0x0050(0x0008) (Edit)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0058(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bUseIndividualLightEnvironment : 1;                       // 0x0068(0x0004) (Edit)
	unsigned long                                      bUseOverlayMesh : 1;                                      // 0x0068(0x0004) (Edit)
};

// ScriptStruct TgGame.TgMenuMeshInfo.ParticleSystemInfo
// 0x0010
struct FParticleSystemInfo
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgSpectatorDirector.ViewTargetInfo
// 0x002C
struct FViewTargetInfo
{
	class ATgPawn*                                     Pawn;                                                     // 0x0000(0x0008)
	class ATgPawn_Tower*                               ClosestEnemyTower;                                        // 0x0008(0x0008)
	int                                                Rating;                                                   // 0x0010(0x0004)
	float                                              DistSqToClosestEnemy;                                     // 0x0014(0x0004)
	float                                              DistSqToClosestFriend;                                    // 0x0018(0x0004)
	float                                              DistSqToGoldFury;                                         // 0x001C(0x0004)
	float                                              DistSqToEnemyTower;                                       // 0x0020(0x0004)
	int                                                NumCloseEnemies;                                          // 0x0024(0x0004)
	int                                                NumCloseFriends;                                          // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgWeaponMeshActor.QueuedImpactDecal
// 0x0020
struct FQueuedImpactDecal
{
	class UTgSpecialFx*                                ImpactFx;                                                 // 0x0000(0x0008)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0014(0x000C)
};

// ScriptStruct TgGame.TgWeaponMeshActor.QueuedImpactEffect
// 0x0034
struct FQueuedImpactEffect
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C)
	unsigned long                                      bSuccessfulHit : 1;                                       // 0x000C(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0010(0x0008)
	struct FVector                                     HitNormal;                                                // 0x0018(0x000C)
	struct FVector                                     FireOrigin;                                               // 0x0024(0x000C)
	int                                                nEquipSlot;                                               // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgObject.AimData
// 0x0034
struct FAimData
{
	struct FVector                                     StartTrace;                                               // 0x0000(0x000C)
	struct FVector                                     EndTrace;                                                 // 0x000C(0x000C)
	struct FVector                                     AimVector;                                                // 0x0018(0x000C)
	class AActor*                                      HitActor;                                                 // 0x0024(0x0008)
	float                                              ClientMovementTimeStamp;                                  // 0x002C(0x0004)
	unsigned long                                      bResult : 1;                                              // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgAnimBlendBySpeed.ResetSynchGroup
// 0x0028
struct FResetSynchGroup
{
	struct FName                                       AnimNodeSynchName;                                        // 0x0000(0x0008) (Edit)
	class UAnimNodeSynch*                              SynchNode;                                                // 0x0008(0x0008)
	struct FName                                       GroupName;                                                // 0x0010(0x0008) (Edit)
	TArray<int>                                        ResetChannels;                                            // 0x0018(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimMetaData_Keyframed.MetaDataKeyFrame
// 0x0008
struct FMetaDataKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	float                                              TargetValue;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameterExtended.AlternateMaterialOverride
// 0x0010
struct FAlternateMaterialOverride
{
	class UMaterialInstanceConstant*                   MaterialToFind;                                           // 0x0000(0x0008) (Edit, Const)
	class UMaterialInstanceConstant*                   MaterialToReplace;                                        // 0x0008(0x0008) (Edit, Const)
};

// ScriptStruct TgGame.TgAnimMetaData_MeshAccessory.MeshPlacement
// 0x0010
struct FMeshPlacement
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nMeshId;                                                  // 0x0004(0x0004) (Edit)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeHitReactionOffset.HitReactionInfo
// 0x000C
struct FHitReactionInfo
{
	struct FVector2D                                   vDesiredAngle;                                            // 0x0000(0x0008)
	float                                              fHitTime;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildBlendInfo
// 0x0008
struct FChildBlendInfo
{
	TEnumAsByte<EPhysics>                              m_PhysicsState;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_fBlendTime;                                             // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildrenBlendInfo
// 0x0014
struct FChildrenBlendInfo
{
	TEnumAsByte<EPhysics>                              m_PhysicsState;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FChildBlendInfo>                     m_ChildBlendInfo;                                         // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimNodeBlendList.ChildBlendParam
// 0x0010
struct FChildBlendParam
{
	int                                                FromChild;                                                // 0x0000(0x0004) (Edit)
	int                                                ToChild;                                                  // 0x0004(0x0004) (Edit)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit)
	float                                              MaxBlendTime;                                             // 0x000C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByAmmo.AmmoBlendParams
// 0x000C
struct FAmmoBlendParams
{
	int                                                MinAmmo;                                                  // 0x0000(0x0004) (Edit)
	int                                                MaxAmmo;                                                  // 0x0004(0x0004) (Edit)
	int                                                ChildNum;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByEmote.EmoteChildAnimInfo
// 0x0008
struct FEmoteChildAnimInfo
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nChildIndex;                                              // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAnimBlendByFire.DeviceParameters
// 0x0014
struct FDeviceParameters
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bShouldInterruptIfStopped : 1;                            // 0x0010(0x0004) (Edit)
	unsigned long                                      bShouldInterruptIfInterrupted : 1;                        // 0x0010(0x0004) (Edit)
	unsigned long                                      bShouldInterruptIfJumping : 1;                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByHeadSkin.HeadSkinChildInfo
// 0x0008
struct FHeadSkinChildInfo
{
	int                                                nHeadSkinId;                                              // 0x0000(0x0004) (Edit)
	int                                                nChildIndex;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByMountSkin.MountSkinChildInfo
// 0x0008
struct FMountSkinChildInfo
{
	int                                                nMountSkinId;                                             // 0x0000(0x0004) (Edit)
	int                                                nChildIndex;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByNodeName.NodeNameToChildIndex
// 0x000C
struct FNodeNameToChildIndex
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (Edit)
	int                                                ChildIndex;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByNodeName.RelevantNodeNameNodes
// 0x000C
struct FRelevantNodeNameNodes
{
	class UAnimNode*                                   CachedNode;                                               // 0x0000(0x0008)
	int                                                ChildIndex;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAnimBlendByPaladinsCharacter.ChildAnimParameters
// 0x0038
struct FChildAnimParameters
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (Edit, Const, EditConst, NeedCtorLink)
	TEnumAsByte<ETG_EQUIP_POINT>                       EquipSlot;                                                // 0x0010(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ChildIndex;                                               // 0x0014(0x0004) (Edit, Const, EditConst)
	unsigned long                                      bBlendInOnTargeting : 1;                                  // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendInOnBuildup : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendInOnStartFire : 1;                                  // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendInOnFire : 1;                                       // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendOutIfStopped : 1;                                   // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendOutOnAnimEnd : 1;                                   // 0x0018(0x0004) (Edit)
	unsigned long                                      bBlendOutOnChildNotification : 1;                         // 0x0018(0x0004) (Edit)
	unsigned long                                      bEndCurrentAnimIfNoChild : 1;                             // 0x0018(0x0004) (Edit)
	unsigned long                                      bAddToStackIfOtherAnimInterrupted : 1;                    // 0x0018(0x0004) (Edit)
	unsigned long                                      bAddToStackOnCeaseRelevant : 1;                           // 0x0018(0x0004) (Edit)
	unsigned long                                      bIgnoreSwapLogicIfNotRelevant : 1;                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bReplayIfActivatedFromStack : 1;                          // 0x0018(0x0004) (Edit)
	unsigned long                                      bReplayIfActive : 1;                                      // 0x0018(0x0004) (Edit)
	unsigned long                                      bAutoScaleByDuration : 1;                                 // 0x0018(0x0004) (Edit)
	float                                              fAutoScaledPlayRateMultiplier;                            // 0x001C(0x0004) (Edit)
	unsigned long                                      bInterruptOtherAnims : 1;                                 // 0x0020(0x0004) (Edit)
	TArray<int>                                        nInterruptExceptionsByChildIndex;                         // 0x0024(0x0010) (Edit, NeedCtorLink)
	int                                                nCustomRetrieveIndex;                                     // 0x0034(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPercent.BlendByPercentValues
// 0x0004
struct FBlendByPercentValues
{
	float                                              fPercent;                                                 // 0x0000(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseTransitionAnimSet
// 0x000C
struct Fm_PhaseTransitionAnimSet
{
	int                                                m_TransitionToPhase;                                      // 0x0000(0x0004) (Edit)
	struct FName                                       m_TransitionAnimName;                                     // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseProfile
// 0x0014
struct Fm_PhaseProfile
{
	int                                                m_Phase;                                                  // 0x0000(0x0004) (Edit)
	TArray<struct Fm_PhaseTransitionAnimSet>           m_TransitionAnimSets;                                     // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_TransitionAnimSet
// 0x000C
struct Fm_TransitionAnimSet
{
	TEnumAsByte<ETG_POSTURE>                           m_TransitionToPosture;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       m_TransitionAnimName;                                     // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_PostureProfile
// 0x0034
struct Fm_PostureProfile
{
	TEnumAsByte<ETG_POSTURE>                           m_Posture;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct Fm_TransitionAnimSet>                m_TransitionAnimSets;                                     // 0x0004(0x0010) (Edit, NeedCtorLink)
	class UCameraAnim*                                 m_CameraAnim;                                             // 0x0014(0x0008) (Edit)
	float                                              m_fCameraAnimBlendInTime;                                 // 0x001C(0x0004) (Edit)
	float                                              m_fCameraAnimBlendOutTime;                                // 0x0020(0x0004) (Edit)
	unsigned long                                      m_bCameraAnimBlendInOnTransitionIn : 1;                   // 0x0024(0x0004) (Edit)
	unsigned long                                      m_bCameraAnimBlendOutAfterTransitionOut : 1;              // 0x0024(0x0004) (Edit)
	class UCameraAnimInst*                             m_CameraAnimInst;                                         // 0x0028(0x0008)
	unsigned long                                      m_bPlayingCameraAnim : 1;                                 // 0x0030(0x0004)
	unsigned long                                      m_bResetBlendByFireToIdleOnTransition : 1;                // 0x0030(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendBySkin.SkinChildInfo
// 0x0008
struct FSkinChildInfo
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nChildIndex;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByTag.TagInfo
// 0x000C
struct FTagInfo
{
	struct FName                                       nmTag;                                                    // 0x0000(0x0008) (Edit)
	int                                                nChildIndex;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByWeaponSkin.WeaponSkinChildInfo
// 0x0008
struct FWeaponSkinChildInfo
{
	int                                                nWeaponSkinId;                                            // 0x0000(0x0004) (Edit)
	int                                                nChildIndex;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeBlendByAndroxusDrift.DriftInfo
// 0x0008
struct FDriftInfo
{
	float                                              fStartTime;                                               // 0x0000(0x0004)
	float                                              fEndTime;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeBlendByDrogozFlying.BoosterFlightInfo
// 0x0008
struct FBoosterFlightInfo
{
	float                                              fStartTime;                                               // 0x0000(0x0004)
	float                                              fEndTime;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeRandom.TgRandomAnimInfo
// 0x0020
struct FTgRandomAnimInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit)
	unsigned char                                      LoopCountMin;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      LoopCountMax;                                             // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit)
	unsigned long                                      bCanRepeat : 1;                                           // 0x000C(0x0004) (Edit)
	unsigned char                                      LoopCount;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bCallOnAnimEndOnParent : 1;                               // 0x0014(0x0004) (Edit)
	unsigned long                                      m_bChooseNewNodeOnAnimEnd : 1;                            // 0x0014(0x0004) (Edit)
	struct FVector2D                                   m_ChildActiveTime;                                        // 0x0018(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitionerSynchronized.StanceTransitionParam
// 0x0008
struct FStanceTransitionParam
{
	int                                                FromChild;                                                // 0x0000(0x0004) (Edit)
	int                                                ToChild;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence.EmoteAnimInfo
// 0x0008
struct FEmoteAnimInfo
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nAnimArrayIndex;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceInfo
// 0x000C
struct FCachedTgAnimNodeStanceInfo
{
	int                                                Index;                                                    // 0x0000(0x0004)
	class UTgAnimNodeStance*                           Node;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceTransitionInfo
// 0x000C
struct FCachedTgAnimNodeStanceTransitionInfo
{
	int                                                Index;                                                    // 0x0000(0x0004)
	class UTgAnimNodeStanceTransition*                 Node;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgAnimNotify_AkEvent.PSE_SkinAk
// 0x000C
struct FPSE_SkinAk
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	class UAkEvent*                                    AkEvent;                                                  // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNotify_PlayParticleEffect_Skinned.PPE_Skin
// 0x000C
struct FPPE_Skin
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	class UParticleSystem*                             PSTemplate;                                               // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNotify_Sound.PSE_Skin
// 0x000C
struct FPSE_Skin
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	class USoundCue*                                   SoundCue;                                                 // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimTurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                           // 0x0000(0x0004) (Edit)
	struct FName                                       TransName;                                                // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimTurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                                // 0x0000(0x0008)
	struct FName                                       AnimName;                                                 // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_CCD_IK_FootPlacement.JointConstraintInformation
// 0x0008
struct FJointConstraintInformation
{
	float                                              AngleConstraint;                                          // 0x0000(0x0004) (Edit)
	float                                              StretchConstraint;                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_Gate.SkelControlGateChild
// 0x000C
struct FSkelControlGateChild
{
	class USkelControlBase*                            SkelControl;                                              // 0x0000(0x0008)
	float                                              DrawY;                                                    // 0x0008(0x0004) (Transient, EditConst)
};

// ScriptStruct TgGame.TgSkelCon_HitReaction.RecoilInfo
// 0x00E0
struct FRecoilInfo
{
	struct FRecoilDef                                  Min;                                                      // 0x0000(0x0070) (Edit)
	struct FRecoilDef                                  Max;                                                      // 0x0070(0x0070) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_SkinGate.SkelControlSkinGateChild
// 0x0014
struct FSkelControlSkinGateChild
{
	class USkelControlBase*                            SkelControl;                                              // 0x0000(0x0008)
	int                                                nSkinId;                                                  // 0x0008(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x000C(0x0004) (Edit)
	float                                              DrawY;                                                    // 0x0010(0x0004) (Transient, EditConst)
};

// ScriptStruct TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupInfo
// 0x0014
struct FDisplayGroupInfo
{
	struct FName                                       DisplayGroupName;                                         // 0x0000(0x0008) (Edit)
	TEnumAsByte<EDisplayGroupOnType>                   WhenDisplayGroupOn;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x000C(0x0004) (Edit)
	unsigned long                                      bOn : 1;                                                  // 0x0010(0x0004) (Transient)
	unsigned long                                      ForceOffIfMeshHidden : 1;                                 // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelControlSingleBone_Skinned.SkinStrengthOverride
// 0x0008
struct FSkinStrengthOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	float                                              fDesiredStrength;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgDevice.AttackSpeedModifier
// 0x0010
struct FAttackSpeedModifier
{
	int                                                nSourceId;                                                // 0x0000(0x0004)
	float                                              fPercChange;                                              // 0x0004(0x0004)
	float                                              fExpirationTime;                                          // 0x0008(0x0004)
	unsigned long                                      bReplicated : 1;                                          // 0x000C(0x0004)
	unsigned long                                      bHasLeniencyApplied : 1;                                  // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice.AmmoTransaction
// 0x0010
struct FAmmoTransaction
{
	float                                              TransactionTimestamp;                                     // 0x0000(0x0004)
	int                                                TransactionId;                                            // 0x0004(0x0004)
	int                                                AmmoAmountChanged;                                        // 0x0008(0x0004)
	unsigned long                                      FilledClip : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice.ImpactToValidate
// 0x0088
struct FImpactToValidate
{
	int                                                PackedAssociatedShotIDs;                                  // 0x0000(0x0004)
	float                                              ImpactTimeStamp;                                          // 0x0004(0x0004)
	struct FImpactInfo                                 Impact;                                                   // 0x0008(0x007C) (Component)
	unsigned char                                      byPackedExtraInfo;                                        // 0x0084(0x0001)
	unsigned char                                      byOffsetX;                                                // 0x0085(0x0001)
	unsigned char                                      byOffsetY;                                                // 0x0086(0x0001)
	unsigned char                                      byOffsetZ;                                                // 0x0087(0x0001)
};

// ScriptStruct TgGame.TgDevice.TgQueuedSimulatedProjectileSpawn
// 0x0059
struct FTgQueuedSimulatedProjectileSpawn
{
	float                                              TimeStampToSpawn;                                         // 0x0000(0x0004)
	int                                                FireRequestId;                                            // 0x0004(0x0004)
	class UTgDeviceFire*                               FireMode;                                                 // 0x0008(0x0008)
	struct FVector                                     ProjectileSpawnLocation;                                  // 0x0010(0x000C)
	struct FVector                                     ProjectileSpawnDir;                                       // 0x001C(0x000C)
	int                                                ProjectileIndex;                                          // 0x0028(0x0004)
	int                                                ProjectileIdOverride;                                     // 0x002C(0x0004)
	float                                              Range;                                                    // 0x0030(0x0004)
	class AActor*                                      trackingTarget;                                           // 0x0034(0x0008)
	struct FVector                                     EndTrace;                                                 // 0x003C(0x000C)
	float                                              ClientMovementTimeStamp;                                  // 0x0048(0x0004)
	float                                              AccuracyRandomValue1;                                     // 0x004C(0x0004)
	float                                              AccuracyRandomValue2;                                     // 0x0050(0x0004)
	float                                              AccuracyValue;                                            // 0x0054(0x0004)
	unsigned char                                      ExtraInfo;                                                // 0x0058(0x0001)
};

// ScriptStruct TgGame.TgDevice.TgQueuedInstantFireShot
// 0x00E0
struct FTgQueuedInstantFireShot
{
	int                                                FireRequestId;                                            // 0x0000(0x0004)
	struct FAimData                                    Aim;                                                      // 0x0004(0x0034)
	struct FImpactToValidate                           PrimaryImpact;                                            // 0x0038(0x0088) (Component)
	TArray<struct FImpactToValidate>                   Impacts;                                                  // 0x00C0(0x0010) (Component, NeedCtorLink)
	int                                                AmmoToConsume;                                            // 0x00D0(0x0004)
	float                                              AccuracyRandomValue1;                                     // 0x00D4(0x0004)
	float                                              AccuracyRandomValue2;                                     // 0x00D8(0x0004)
	float                                              AccuracyValue;                                            // 0x00DC(0x0004)
};

// ScriptStruct TgGame.TgDevice.TgQueuedRefire
// 0x0040
struct FTgQueuedRefire
{
	int                                                ClientFireRequestId;                                      // 0x0000(0x0004)
	unsigned char                                      DesiredFireMode;                                          // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              AttackSpeedPercChange;                                    // 0x0008(0x0004)
	struct FAimData                                    Aim;                                                      // 0x000C(0x0034)
};

// ScriptStruct TgGame.TgDevice.TgQueuedProjectileExplosion
// 0x0030
struct FTgQueuedProjectileExplosion
{
	int                                                ClientFireRequestId;                                      // 0x0000(0x0004)
	class AActor*                                      Target;                                                   // 0x0004(0x0008)
	struct FVector                                     HitLocation;                                              // 0x000C(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0018(0x000C)
	float                                              ProjectileAliveTime;                                      // 0x0024(0x0004)
	float                                              MovementTimeStamp;                                        // 0x0028(0x0004)
	float                                              AoeRewindTimeStamp;                                       // 0x002C(0x0004)
};

// ScriptStruct TgGame.TgDevice.TrackedFiringAmmoConsumption
// 0x0008
struct FTrackedFiringAmmoConsumption
{
	int                                                FiringRequestID;                                          // 0x0000(0x0004)
	int                                                AmmoConsumed;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDevice.AccuracySettings
// 0x001C
struct FAccuracySettings
{
	unsigned long                                      bUsesAdvancedAccuracy : 1;                                // 0x0000(0x0004)
	float                                              fMaxAccuracy;                                             // 0x0004(0x0004)
	float                                              fMinAccuracy;                                             // 0x0008(0x0004)
	float                                              fAccuracyLossPerShot;                                     // 0x000C(0x0004)
	float                                              fAccuracyGainPerSec;                                      // 0x0010(0x0004)
	float                                              fAccuracyGainDelay;                                       // 0x0014(0x0004)
	int                                                nNumFreeShots;                                            // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgDevice.RecoilSettings
// 0x0010
struct FRecoilSettings
{
	unsigned long                                      bUsesRecoil : 1;                                          // 0x0000(0x0004)
	float                                              fRecoilReductionPerSec;                                   // 0x0004(0x0004)
	float                                              fRecoilCenterDelay;                                       // 0x0008(0x0004)
	float                                              fRecoilSmoothRate;                                        // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_ArcingBeam.ArcingInfo
// 0x002C
struct FArcingInfo
{
	float                                              ArcTime;                                                  // 0x0000(0x0004)
	float                                              RemainingArcTime;                                         // 0x0004(0x0004)
	int                                                JumpsRemaining;                                           // 0x0008(0x0004)
	class AActor*                                      PreviousArcTarget;                                        // 0x000C(0x0008)
	TArray<class AActor*>                              PreviousTargets;                                          // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgDeviceFire*                               ArcFiremode;                                              // 0x0024(0x0008)
};

// ScriptStruct TgGame.TgDevice_Charge.TimestampedActor
// 0x000C
struct FTimestampedActor
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	class AActor*                                      pActor;                                                   // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgDevice_LongReach.NuggetPullVals
// 0x0010
struct FNuggetPullVals
{
	class AActor*                                      nugget;                                                   // 0x0000(0x0008)
	float                                              fPullTime;                                                // 0x0008(0x0004)
	float                                              fCheckTime;                                               // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDeviceFire.WeaponFireResults
// 0x0080
struct FWeaponFireResults
{
	unsigned long                                      bDidServerValidation : 1;                                 // 0x0000(0x0004)
	struct FImpactInfo                                 Impact;                                                   // 0x0004(0x007C) (Component)
};

// ScriptStruct TgGame.TgObject.EquipDeviceInfo
// 0x000C
struct FEquipDeviceInfo
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nDeviceInstanceId;                                        // 0x0004(0x0004)
	int                                                nMode;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm.ModeData
// 0x0028
struct FModeData
{
	float                                              c_fBuildupTime;                                           // 0x0000(0x0004) (AlwaysInit)
	unsigned long                                      c_bContinuousFire : 1;                                    // 0x0004(0x0004) (AlwaysInit)
	unsigned long                                      c_FxInstantFire : 1;                                      // 0x0004(0x0004) (AlwaysInit)
	struct FName                                       c_nmOffhandAnimationType;                                 // 0x0008(0x0008) (AlwaysInit)
	unsigned long                                      c_bScaleFireAnimsWithRefire : 1;                          // 0x0010(0x0004) (AlwaysInit)
	unsigned long                                      c_bInterruptAnimOnRefire : 1;                             // 0x0010(0x0004) (AlwaysInit)
	float                                              c_fEffectRadius;                                          // 0x0014(0x0004) (AlwaysInit)
	float                                              c_fMaxRange;                                              // 0x0018(0x0004) (AlwaysInit)
	int                                                c_nDamageOverrideDeviceId;                                // 0x001C(0x0004) (AlwaysInit)
	class UCameraAnim*                                 c_WhileFiringCameraAnim;                                  // 0x0020(0x0008) (AlwaysInit)
};

// ScriptStruct TgGame.TgDeviceForm.SyntheticImpactEffectArgs
// 0x0018
struct FSyntheticImpactEffectArgs
{
	struct FVector                                     vHitLocation;                                             // 0x0000(0x000C)
	int                                                nEquipSlot;                                               // 0x000C(0x0004)
	int                                                nSocketIndex;                                             // 0x0010(0x0004)
	unsigned long                                      bSuccessfulHit : 1;                                       // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm_Spray.SpraySetup
// 0x0015
struct FSpraySetup
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	class UTexture*                                    Texture;                                                  // 0x0004(0x0008)
	int                                                nMaterialIndex;                                           // 0x000C(0x0004)
	unsigned long                                      bInitializedSprayParams : 1;                              // 0x0010(0x0004)
	TEnumAsByte<ESprayDisplayBehavior>                 Behavior;                                                 // 0x0014(0x0001)
};

// ScriptStruct TgGame.TgObject.DiminishedEffectInfo
// 0x0010
struct FDiminishedEffectInfo
{
	float                                              fMaxPosValue;                                             // 0x0000(0x0004)
	float                                              fPosTotal;                                                // 0x0004(0x0004)
	float                                              fMaxNegValue;                                             // 0x0008(0x0004)
	float                                              fNegTotal;                                                // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDeployable.CollisionSettingsDeployable
// 0x0014
struct FCollisionSettingsDeployable
{
	TEnumAsByte<EAdvancedCollisionMode>                mCollisionMode;                                           // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bUseMeshForCollision : 1;                                 // 0x0004(0x0004) (Const)
	unsigned long                                      bPawnsCanBaseOnMe : 1;                                    // 0x0004(0x0004) (Const)
	unsigned long                                      bAutoRegisterObstacle : 1;                                // 0x0004(0x0004)
	unsigned long                                      bHasRegisteredObstacle : 1;                               // 0x0004(0x0004)
	unsigned long                                      bOnlyBlockShotsFromFront : 1;                             // 0x0004(0x0004)
	unsigned long                                      bBlockFriendlyFire : 1;                                   // 0x0004(0x0004)
	unsigned long                                      bBlockEnemyFire : 1;                                      // 0x0004(0x0004)
	float                                              fProjectileAllowanceRadius;                               // 0x0008(0x0004)
	float                                              fExplosionAllowanceRadius;                                // 0x000C(0x0004)
	unsigned long                                      bProjectilesPassThrough : 1;                              // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgDeploy_EffectSpots.EffectSpotInfo
// 0x002C
struct FEffectSpotInfo
{
	unsigned long                                      bIsActive : 1;                                            // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	struct FRotator                                    rRotation;                                                // 0x0010(0x000C)
	float                                              fRadius;                                                  // 0x001C(0x0004)
	float                                              fHeight;                                                  // 0x0020(0x0004)
	int                                                nFXIndex;                                                 // 0x0024(0x0004)
	int                                                nIntensityLevel;                                          // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgDeploy_EffectSpots.EffectSpotTarget
// 0x000C
struct FEffectSpotTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	unsigned long                                      bNeedsRefresh : 1;                                        // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_EffectSpots.EffectSpotFXInfo
// 0x000C
struct FEffectSpotFXInfo
{
	class UTgSpecialFx*                                Fx;                                                       // 0x0000(0x0008)
	int                                                nFXIndex;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgImpactFx.IMPACT_FX
// 0x0034
struct FIMPACT_FX
{
	struct FName                                       nmMaterialType;                                           // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0008)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0010(0x0008)
	float                                              fDecalWidth;                                              // 0x0018(0x0004)
	float                                              fDecalHeight;                                             // 0x001C(0x0004)
	unsigned long                                      bRandomRotation : 1;                                      // 0x0020(0x0004)
	class UParticleSystem*                             Particles;                                                // 0x0024(0x0008)
	class UTgSpecialFx*                                SpecialFx;                                                // 0x002C(0x0008)
};

// ScriptStruct TgGame.TgProjectile.CollisionSettingsProjectile
// 0x0004
struct FCollisionSettingsProjectile
{
	unsigned long                                      bPassThroughFriends : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bPassThroughEnemies : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bPassThroughShieldsEnemies : 1;                           // 0x0000(0x0004)
	unsigned long                                      bPassThroughShieldsFriends : 1;                           // 0x0000(0x0004)
	unsigned long                                      bPassThroughBlocker : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bExplodeOnShields : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bExplodeOnBlockers : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bHitAndPassThrough : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bHitOnTick : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bOnlyHitOnceOnPassThrough : 1;                            // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgProjectile.TrackingSettings
// 0x001C
struct FTrackingSettings
{
	unsigned long                                      bUsesTracking : 1;                                        // 0x0000(0x0004) (Const)
	class AActor*                                      mTarget;                                                  // 0x0004(0x0008)
	float                                              fTurnStrength;                                            // 0x000C(0x0004)
	float                                              fVertTurnStrength;                                        // 0x0010(0x0004)
	float                                              fTrackingProximityDistance;                               // 0x0014(0x0004)
	unsigned long                                      bIgnoreNonTargets : 1;                                    // 0x0018(0x0004)
	unsigned long                                      bIgnoreWorldIfSeeking : 1;                                // 0x0018(0x0004)
	unsigned long                                      bIgnoreWorldIfNotSeeking : 1;                             // 0x0018(0x0004)
	unsigned long                                      bInfiniteRangeWhileTracking : 1;                          // 0x0018(0x0004)
	unsigned long                                      bDestroyIfTargetDied : 1;                                 // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgProj_NonSimulated.LagCompedQueuedHitInfo
// 0x0020
struct FLagCompedQueuedHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0014(0x000C)
};

// ScriptStruct TgGame.TgProj_ExtraColliders.TrackedCollision
// 0x0018
struct FTrackedCollision
{
	unsigned long                                      IsColliding : 1;                                          // 0x0000(0x0004)
	class AActor*                                      Target;                                                   // 0x0004(0x0008)
	class UPrimitiveComponent*                         TargetComp;                                               // 0x000C(0x0008) (ExportObject, Component, EditInline)
	int                                                NumTouches;                                               // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Sound
// 0x0020
struct FFx_Sound
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class UAkBaseSoundObject*                          c_SoundObject;                                            // 0x0004(0x0008)
	class UAudioComponent*                             c_acSound;                                                // 0x000C(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      c_bAllowSoundToFinishFlag : 1;                            // 0x0014(0x0004)
	unsigned long                                      c_bCanHearThroughStealth : 1;                             // 0x0014(0x0004)
	unsigned long                                      c_bForceAudioComponent : 1;                               // 0x0014(0x0004)
	class UAkEvent*                                    c_AkEvent;                                                // 0x0018(0x0008)
};

// ScriptStruct TgGame.TgSilhouetteComponentPaladins.SilhouetteColorSettings
// 0x0024
struct FSilhouetteColorSettings
{
	unsigned long                                      bUsesMultipleColors : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bUsesEnemyRangeColorVariance : 1;                         // 0x0000(0x0004)
	struct FColor                                      BlueColor;                                                // 0x0004(0x0004) (Const)
	struct FColor                                      EnemyColor;                                               // 0x0008(0x0004) (Const)
	struct FColor                                      PurpleColor;                                              // 0x000C(0x0004) (Const)
	struct FColor                                      OrangeColor;                                              // 0x0010(0x0004) (Const)
	struct FColor                                      EnemyTargetedEffectiveRangeColor;                         // 0x0014(0x0004) (Const)
	struct FColor                                      EnemyTargetedMaxRangeColor;                               // 0x0018(0x0004) (Const)
	struct FColor                                      RedColor;                                                 // 0x001C(0x0004) (Const)
	struct FColor                                      AbyssalEchoColor;                                         // 0x0020(0x0004) (Const)
};

// ScriptStruct TgGame.TgSilhouetteComponentPaladins.SilhouetteFadeSettings
// 0x0014
struct FSilhouetteFadeSettings
{
	unsigned long                                      bUsesDistanceFade : 1;                                    // 0x0000(0x0004)
	float                                              fAlphaFadeNearDist;                                       // 0x0004(0x0004) (Const)
	float                                              fAlphaFadeNear;                                           // 0x0008(0x0004) (Const)
	float                                              fAlphaFadeFarDist;                                        // 0x000C(0x0004) (Const)
	float                                              fAlphaFadeFar;                                            // 0x0010(0x0004) (Const)
};

// ScriptStruct TgGame.TgSilhouetteComponentPaladins.SilhouettePulseSettings
// 0x002C
struct FSilhouettePulseSettings
{
	unsigned long                                      bUsesPulse : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bUsePulseAlpha : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bPulseMaintainsDistanceDimming : 1;                       // 0x0000(0x0004)
	struct FVector2D                                   vPulseAlpha;                                              // 0x0004(0x0008)
	unsigned long                                      bPulseUseCustomColor : 1;                                 // 0x000C(0x0004)
	struct FColor                                      PulseCustomColor;                                         // 0x0010(0x0004)
	unsigned long                                      bUsePulseThicknessMultiplier : 1;                         // 0x0014(0x0004)
	struct FVector2D                                   vPulseThicknessMultiplier;                                // 0x0018(0x0008)
	float                                              fPulseElapsedTime;                                        // 0x0020(0x0004)
	float                                              fPulseDuration;                                           // 0x0024(0x0004)
	float                                              fPulseWaveTime;                                           // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgSilhouetteManager.TgSilhouetteInfo
// 0x0014
struct FTgSilhouetteInfo
{
	class UTgSilhouetteComponent*                      Silhouette;                                               // 0x0000(0x0008) (ExportObject, Component)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UMeshComponent*                              ParentMesh;                                               // 0x000C(0x0008) (ExportObject, Component, EditInline)
};

// ScriptStruct TgGame.TgSoundGroup.FootstepSoundInfo
// 0x0010
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Decal
// 0x0034
struct FFx_Decal
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class UMaterialInstanceTimeVarying*                c_MITV;                                                   // 0x0004(0x0008)
	float                                              c_fWidth;                                                 // 0x000C(0x0004)
	float                                              c_fHeight;                                                // 0x0010(0x0004)
	float                                              c_fThickness;                                             // 0x0014(0x0004)
	unsigned long                                      c_bNoClip : 1;                                            // 0x0018(0x0004)
	unsigned long                                      c_bAttach : 1;                                            // 0x0018(0x0004)
	class UDecalComponent*                             c_Decal;                                                  // 0x001C(0x0008) (ExportObject, Component, EditInline)
	float                                              c_fLifetime;                                              // 0x0024(0x0004)
	float                                              c_fFadeOutTime;                                           // 0x0028(0x0004)
	TEnumAsByte<EManagedDecalState>                    c_eState;                                                 // 0x002C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              c_fHideAtTimeSeconds;                                     // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_PSC
// 0x0038
struct FFx_PSC
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class UParticleSystemComponent*                    c_PSC;                                                    // 0x0004(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystem*                             c_PSCTemplate;                                            // 0x000C(0x0008) (Const)
	float                                              c_fScale;                                                 // 0x0014(0x0004)
	int                                                c_nScaleType;                                             // 0x0018(0x0004)
	unsigned long                                      c_bRunning : 1;                                           // 0x001C(0x0004)
	struct FName                                       c_nmSocketDisplayGrp;                                     // 0x0020(0x0008)
	struct FName                                       c_nmSocket;                                               // 0x0028(0x0008)
	class ATgEmitter_CameraEffect*                     c_pCameraEffect;                                          // 0x0030(0x0008)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Material
// 0x001C
struct FFx_Material
{
	int                                                nFxMatId;                                                 // 0x0000(0x0004)
	class UMaterialInstanceTimeVarying*                c_MITV;                                                   // 0x0004(0x0008)
	int                                                nFxMatTypeCode;                                           // 0x000C(0x0004)
	struct FName                                       nmMIC;                                                    // 0x0010(0x0008)
	unsigned long                                      bApplyIfSameTeam : 1;                                     // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.AppliedMaterialHandle
// 0x0014
struct FAppliedMaterialHandle
{
	int                                                nHandle;                                                  // 0x0000(0x0004)
	TScriptInterface<class UTgMeshCompInterface_MaterialStack> pAppliedMesh;                                             // 0x0004(0x0010)
};

// ScriptStruct TgGame.TgEffectForm_WithMeshes.EffectMeshInfo
// 0x0034
struct FEffectMeshInfo
{
	class UMeshComponent*                              Mesh;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	int                                                nMeshId;                                                  // 0x0008(0x0004)
	struct FName                                       DisplayGroup;                                             // 0x000C(0x0008)
	unsigned long                                      AbsoluteTranslation : 1;                                  // 0x0014(0x0004)
	unsigned long                                      AbsoluteRotation : 1;                                     // 0x0014(0x0004)
	unsigned long                                      AbsoluteScale : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bWillSelfDestruct : 1;                                    // 0x0014(0x0004)
	struct FVector                                     vAdditiveTranslation;                                     // 0x0018(0x000C)
	struct FRotator                                    rAdditiveRotation;                                        // 0x0024(0x000C)
	float                                              fScaleMultipler;                                          // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgEffectGroup.LifeTimeCalcInfo
// 0x0020
struct FLifeTimeCalcInfo
{
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004)
	float                                              fReductionFromPawnProtections;                            // 0x0004(0x0004)
	float                                              fReductionFromCCProtectionsPerc;                          // 0x0008(0x0004)
	float                                              fReductionFromDoTProtections;                             // 0x000C(0x0004)
	float                                              fReductionFromDoTProtectionsPerc;                         // 0x0010(0x0004)
	int                                                nCrowdControlCount;                                       // 0x0014(0x0004)
	unsigned long                                      bCrowdControlImmune : 1;                                  // 0x0018(0x0004)
	float                                              m_fCalculatedLifeTime;                                    // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPawn.KnockbackHit
// 0x0014
struct FKnockbackHit
{
	struct FVector                                     vHitNormal;                                               // 0x0000(0x000C)
	class AActor*                                      aHitActor;                                                // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgEffectManager.ReduceActiveCooldownEntry
// 0x001C
struct FReduceActiveCooldownEntry
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nFireMode;                                                // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	unsigned long                                      bPercent : 1;                                             // 0x000C(0x0004)
	float                                              fApplicationTime;                                         // 0x0010(0x0004)
	float                                              fCooldownFloor;                                           // 0x0014(0x0004)
	unsigned long                                      bIgnoreChargeScaling : 1;                                 // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgEffectManager.EffectListEntry
// 0x0010
struct FEffectListEntry
{
	int                                                nEffectGroupID;                                           // 0x0000(0x0004)
	unsigned char                                      byNumStacks;                                              // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fInitTimeRemaining;                                       // 0x0008(0x0004)
	int                                                nExtraInfo;                                               // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgEffectManager.EffectQueueEntry
// 0x0020
struct FEffectQueueEntry
{
	int                                                nEffectGroupID;                                           // 0x0000(0x0004)
	int                                                nExtraInfo;                                               // 0x0004(0x0004)
	struct FVector                                     vHitLocation;                                             // 0x0008(0x000C)
	struct FRotator                                    rHitNormal;                                               // 0x0014(0x000C)
};

// ScriptStruct TgGame.TgEffectManager.StunStackEntry
// 0x0009
struct FStunStackEntry
{
	class UTgEffect*                                   Effect;                                                   // 0x0000(0x0008)
	TEnumAsByte<EStunType>                             StunType;                                                 // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgEffectManager.EnergyStunStackEntry
// 0x0008
struct FEnergyStunStackEntry
{
	class UTgEffect*                                   Effect;                                                   // 0x0000(0x0008)
};

// ScriptStruct TgGame.TgEffectManager.DiminishingReturnsStackInfo
// 0x002C
struct FDiminishingReturnsStackInfo
{
	TEnumAsByte<EDiminshingReturnsStackType>           StackType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<int>                                        DevicesApplyingThisTick;                                  // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<float>                                      Timestamps;                                               // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nStackCount;                                              // 0x0024(0x0004)
	float                                              fRelevancyTime;                                           // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgBotFactory.SpawnQueueEntry
// 0x001C
struct FSpawnQueueEntry
{
	float                                              fSpawnTime;                                               // 0x0000(0x0004)
	int                                                nBotId;                                                   // 0x0004(0x0004)
	int                                                nSkinId;                                                  // 0x0008(0x0004)
	int                                                nWeaponSkinId;                                            // 0x000C(0x0004)
	int                                                nSpawnTableDetailId;                                      // 0x0010(0x0004)
	struct FName                                       BehaviorTreeOverride;                                     // 0x0014(0x0008)
};

// ScriptStruct TgGame.TgAkAudioManagement.AkMeterCallbackState
// 0x0010
struct FAkMeterCallbackState
{
	struct Fdword                                      dwBusID;                                                  // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0004(0x0004)
	float                                              fLevel;                                                   // 0x0008(0x0004)
	float                                              fTimestamp;                                               // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgSoundEventsManager.TimestampedGameObjectId
// 0x000C
struct FTimestampedGameObjectId
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	struct FQWord                                      qwGameObjectId;                                           // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgSoundEventsManager.QueuedSoundEvent
// 0x0015
struct FQueuedSoundEvent
{
	float                                              fDelay;                                                   // 0x0000(0x0004)
	TScriptInterface<class UTgSoundNotifyActorInterface> SNActor;                                                  // 0x0004(0x0010)
	TEnumAsByte<ENotifySound>                          eSound;                                                   // 0x0014(0x0001)
};

// ScriptStruct TgGame.TgInventoryManager.InventoryData
// 0x0024
struct FInventoryData
{
	struct FQWord                                      nInvId;                                                   // 0x0000(0x0008) (AlwaysInit)
	int                                                nItemId;                                                  // 0x0008(0x0004) (AlwaysInit)
	int                                                nPower;                                                   // 0x000C(0x0004) (AlwaysInit)
	int                                                nLevel;                                                   // 0x0010(0x0004) (AlwaysInit)
	int                                                nInstanceCount;                                           // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      bBoundFlag : 1;                                           // 0x0018(0x0004) (AlwaysInit)
	float                                              fAcquiredDatetime;                                        // 0x001C(0x0004) (AlwaysInit)
	int                                                nEquipSlotValueId;                                        // 0x0020(0x0004) (AlwaysInit)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_Barik.ComboInfo
// 0x0014
struct FComboInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008)
	float                                              fMarkTime;                                                // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_Barik.UIMarkInfo
// 0x000C
struct FUIMarkInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	int                                                nUIMarkCount;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_Barik.BurningMarkInfo
// 0x000C
struct FBurningMarkInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	int                                                nMarkCount;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_BombKing.StickyHitInfo
// 0x000C
struct FStickyHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                NumHits;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_Makoa.MarkedTargetHook
// 0x0010
struct FMarkedTargetHook
{
	class AActor*                                      aActor;                                                   // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
	unsigned long                                      bFiredSince : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Combo_Viktor.TimedMarkedTarget
// 0x000C
struct FTimedMarkedTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              EndTimestamp;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PoisonBolts.PoisonBoltInfo
// 0x0014
struct FPoisonBoltInfo
{
	class ATgPawn*                                     pawnTarget;                                               // 0x0000(0x0008)
	class ATgDeployable*                               DeployableTarget;                                         // 0x0008(0x0008)
	unsigned long                                      bEffectActive : 1;                                        // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgInvListener_TargetOverHealed.TOHInfo
// 0x0010
struct FTOHInfo
{
	class AActor*                                      pTarget;                                                  // 0x0000(0x0008)
	int                                                fAccumulator;                                             // 0x0008(0x0004)
	float                                              fResetTimer;                                              // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInvListener_ConsecutiveHitsForDamageBonusByCredits.TrackedDamagedTargets
// 0x000C
struct FTrackedDamagedTargets
{
	class AActor*                                      pTarget;                                                  // 0x0000(0x0008)
	float                                              fBonusDamageEndTime;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInvListener_ConsecutiveInhandHits.CIHStack
// 0x0010
struct FCIHStack
{
	class ATgPawn*                                     pTarget;                                                  // 0x0000(0x0008)
	int                                                nStackCount;                                              // 0x0008(0x0004)
	float                                              fLifetime;                                                // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInvListener_TakingHitsForDamageBonusByCredits.TrackedBullies
// 0x000C
struct FTrackedBullies
{
	class AActor*                                      pTarget;                                                  // 0x0000(0x0008)
	float                                              fBonusDamageEndTime;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.MeshAssets
// 0x0040
struct FMeshAssets
{
	struct FString                                     m_sSkeletalMesh;                                          // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sPhysicsAsset;                                          // 0x0010(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sAnimTreeTemplate;                                      // 0x0020(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sAnimSets;                                              // 0x0030(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAudioPawnDialogue.ChatterEvent
// 0x0008
struct FChatterEvent
{
	int                                                nChatterTypeId;                                           // 0x0000(0x0004)
	int                                                nAkEventSuffixId;                                         // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAudioPawnDialogue.DialogueEvent
// 0x0016
struct FDialogueEvent
{
	float                                              fRequestTime;                                             // 0x0000(0x0004)
	int                                                nPriority;                                                // 0x0004(0x0004)
	float                                              fRelevance;                                               // 0x0008(0x0004)
	int                                                ExtraInfo;                                                // 0x000C(0x0004)
	float                                              fPause;                                                   // 0x0010(0x0004)
	TEnumAsByte<EEmote>                                EEmote;                                                   // 0x0014(0x0001)
	TEnumAsByte<EEmoteCategory>                        eCat;                                                     // 0x0015(0x0001)
};

// ScriptStruct TgGame.TgMaterialStack.MaterialStackInstance
// 0x001C
struct FMaterialStackInstance
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nPriority;                                                // 0x0004(0x0004)
	TArray<class UMaterialInstanceConstant*>           MICs;                                                     // 0x0008(0x0010) (NeedCtorLink)
	unsigned long                                      bTimelapse : 1;                                           // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgObject.AdjustHealParams
// 0x008C
struct FAdjustHealParams
{
	class ATgDevice*                                   Dev;                                                      // 0x0000(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0008(0x007C) (Component)
	float                                              fBaseHeal;                                                // 0x0084(0x0004)
	int                                                nPropertyId;                                              // 0x0088(0x0004)
};

// ScriptStruct TgGame.TgObject.AdjustDamageParams
// 0x0094
struct FAdjustDamageParams
{
	class ATgDevice*                                   Dev;                                                      // 0x0000(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0008(0x007C) (Component)
	float                                              fBaseDamage;                                              // 0x0084(0x0004)
	int                                                nPropertyId;                                              // 0x0088(0x0004)
	unsigned long                                      bCritical : 1;                                            // 0x008C(0x0004)
	struct FExtraDamageInfo                            ExtraInfo;                                                // 0x0090(0x0004)
};

// ScriptStruct TgGame.TgObject.OnHealedParams
// 0x00A4
struct FOnHealedParams
{
	class ATgPawn*                                     Healer;                                                   // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgEffectGroup*                              eg;                                                       // 0x0010(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0018(0x007C) (Component)
	float                                              fHealAmount;                                              // 0x0094(0x0004)
	float                                              fHealthChange;                                            // 0x0098(0x0004)
	int                                                nPropertyId;                                              // 0x009C(0x0004)
	unsigned long                                      bPlayCameraHealEffect : 1;                                // 0x00A0(0x0004)
};

// ScriptStruct TgGame.TgObject.OnDamagedParams
// 0x00AC
struct FOnDamagedParams
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgEffectGroup*                              eg;                                                       // 0x0010(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0018(0x007C) (Component)
	float                                              fBuffedDamage;                                            // 0x0094(0x0004)
	float                                              fMitigatedDamage;                                         // 0x0098(0x0004)
	float                                              fPreDamageHealth;                                         // 0x009C(0x0004)
	float                                              fShieldDamage;                                            // 0x00A0(0x0004)
	struct FExtraDamageInfo                            ExtraInfo;                                                // 0x00A4(0x0004)
	int                                                nPropertyId;                                              // 0x00A8(0x0004)
};

// ScriptStruct TgGame.TgPawn.DebugPropertyMod
// 0x0020
struct FDebugPropertyMod
{
	struct FString                                     sProperty;                                                // 0x0000(0x0010) (NeedCtorLink)
	float                                              fModifier;                                                // 0x0010(0x0004)
	unsigned long                                      bPercent : 1;                                             // 0x0014(0x0004)
	class UTgEffectPermanent*                          pEffect;                                                  // 0x0018(0x0008)
};

// ScriptStruct TgGame.TgPawn.EEmoteCategoryChance
// 0x002C
struct FEEmoteCategoryChance
{
	float                                              fDefault;                                                 // 0x0000(0x0004)
	float                                              fPlayerVGS;                                               // 0x0004(0x0004)
	float                                              fAbilityOnCooldown;                                       // 0x0008(0x0004)
	float                                              fTakingDamage;                                            // 0x000C(0x0004)
	float                                              fCelebration;                                             // 0x0010(0x0004)
	float                                              fKills;                                                   // 0x0014(0x0004)
	float                                              fAction;                                                  // 0x0018(0x0004)
	float                                              fContext;                                                 // 0x001C(0x0004)
	float                                              fUltimate;                                                // 0x0020(0x0004)
	float                                              fOverride;                                                // 0x0024(0x0004)
	float                                              fMovement;                                                // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgPawn.EEmoteAbilityChance
// 0x0014
struct FEEmoteAbilityChance
{
	float                                              fDefault;                                                 // 0x0000(0x0004)
	float                                              fAbility1;                                                // 0x0004(0x0004)
	float                                              fAbility2;                                                // 0x0008(0x0004)
	float                                              fAbility3;                                                // 0x000C(0x0004)
	float                                              fMount;                                                   // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgPawn.DeathInfo
// 0x0024
struct FDeathInfo
{
	unsigned long                                      bDead : 1;                                                // 0x0000(0x0004)
	struct FVector                                     Momentum;                                                 // 0x0004(0x000C)
	class UClass*                                      dmgType;                                                  // 0x0010(0x0008)
	struct FVector                                     HitLoc;                                                   // 0x0018(0x000C)
};

// ScriptStruct TgGame.TgPawn.PostureStack
// 0x0024
struct FPostureStack
{
	TArray<int>                                        GUIDs;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<ETG_POSTURE>>                   Postures;                                                 // 0x0010(0x0010) (NeedCtorLink)
	int                                                NewPostureGUID;                                           // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgPawn.PawnDamagerStruct
// 0x000C
struct FPawnDamagerStruct
{
	class ATgPawn*                                     DamagerPawn;                                              // 0x0000(0x0008)
	float                                              fTimestamp;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn.PawnDamageMitigator
// 0x0009
struct FPawnDamageMitigator
{
	class ATgPawn*                                     MitigatingPawn;                                           // 0x0000(0x0008)
	TEnumAsByte<EPawnDamageMitigatorReason>            eReason;                                                  // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgPawn.OverlayMICList
// 0x0010
struct FOverlayMICList
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                     // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn.OverlayInfo
// 0x0074
struct FOverlayInfo
{
	class UTgSkeletalMeshComponent*                    OverlayMesh;                                              // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      ParentMesh;                                               // 0x0008(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bIs1POverlay : 1;                                         // 0x0010(0x0004)
	unsigned long                                      bIsVisible : 1;                                           // 0x0010(0x0004)
	struct FOverlayMICList                             OverlayMICInstances[0x6];                                 // 0x0014(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn.SilhouetteInfo
// 0x0015
struct FSilhouetteInfo
{
	class UTgSilhouetteComponent*                      Silhouette;                                               // 0x0000(0x0008) (ExportObject, Component)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UMeshComponent*                              ParentMesh;                                               // 0x000C(0x0008) (ExportObject, Component, EditInline)
	TEnumAsByte<EOverlayState>                         CurrentState;                                             // 0x0014(0x0001)
};

// ScriptStruct TgGame.TgPawn.HealingInfo
// 0x0010
struct FHealingInfo
{
	class ATgPawn*                                     HealerPawn;                                               // 0x0000(0x0008)
	float                                              HealAmount;                                               // 0x0008(0x0004)
	float                                              TimeStamp;                                                // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn.RigidBodyImpactInfo
// 0x000C
struct FRigidBodyImpactInfo
{
	float                                              LastImpactTime;                                           // 0x0000(0x0004)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgPawn_Character.TeleportParams
// 0x0050
struct FTeleportParams
{
	struct FVector                                     vTargetLocation;                                          // 0x0000(0x000C)
	struct FRotator                                    rTargetRotation;                                          // 0x000C(0x000C)
	unsigned long                                      bPlayFx : 1;                                              // 0x0018(0x0004)
	unsigned long                                      bDoBackTrace : 1;                                         // 0x0018(0x0004)
	struct FVector                                     vBackTraceDir;                                            // 0x001C(0x000C)
	float                                              fBackTraceIncrement;                                      // 0x0028(0x0004)
	float                                              fBackTraceMaxDist;                                        // 0x002C(0x0004)
	unsigned long                                      bLookForGround : 1;                                       // 0x0030(0x0004)
	float                                              fGroundSearchHeight;                                      // 0x0034(0x0004)
	float                                              fGroundSearchRayRadius;                                   // 0x0038(0x0004)
	unsigned long                                      bCheckLineOfSight : 1;                                    // 0x003C(0x0004)
	float                                              fMovementCorrectionDisableTime;                           // 0x0040(0x0004)
	int                                                nTeleportEnterState;                                      // 0x0044(0x0004)
	int                                                nTeleportExitState;                                       // 0x0048(0x0004)
	unsigned long                                      bFakeTeleport : 1;                                        // 0x004C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Character.ForceFaceTargetActor
// 0x0049
struct FForceFaceTargetActor
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0008)
	float                                              HeightOffset;                                             // 0x0008(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       InitialQuat;                                              // 0x0010(0x0010)
	float                                              InterpTime;                                               // 0x0020(0x0004)
	float                                              StartTime;                                                // 0x0024(0x0004)
	float                                              Duration;                                                 // 0x0028(0x0004)
	class UObject*                                     ForceRotationInstigator;                                  // 0x002C(0x0008)
	struct FName                                       ViewSocketName;                                           // 0x0034(0x0008)
	struct FRotator                                    rLastForcedViewRot;                                       // 0x003C(0x000C)
	TEnumAsByte<EForceFaceActorReason>                 eReason;                                                  // 0x0048(0x0001)
};

// ScriptStruct TgGame.TgPawn_Character.WeaponDOF
// 0x0028
struct FWeaponDOF
{
	unsigned long                                      IsActive : 1;                                             // 0x0000(0x0004)
	TEnumAsByte<EDOFType>                              DOFType;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Falloff;                                                  // 0x0008(0x0004)
	float                                              BlurKernelSize;                                           // 0x000C(0x0004)
	TEnumAsByte<EFocusType>                            FocusType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              FocusInnerRadius;                                         // 0x0014(0x0004)
	float                                              FocusDistance;                                            // 0x0018(0x0004)
	float                                              MaxNearBlurAmount;                                        // 0x001C(0x0004)
	float                                              MinBlurAmount;                                            // 0x0020(0x0004)
	float                                              MaxFarBlurAmount;                                         // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgPawn_LanePusherBase.ServerSplineSync
// 0x0008
struct FServerSplineSync
{
	float                                              SplineDist;                                               // 0x0000(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_TowerBase.NavMeshBorderEdges
// 0x0018
struct FNavMeshBorderEdges
{
	struct FVector                                     P1;                                                       // 0x0000(0x000C)
	struct FVector                                     P2;                                                       // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgPawnMod_FxAudio.ModFxAudioValues
// 0x002C
struct FModFxAudioValues
{
	unsigned long                                      bApplyToBodyParam : 1;                                    // 0x0000(0x0004)
	struct FName                                       nmParamName;                                              // 0x0004(0x0008)
	float                                              fOnBeatMultiplier;                                        // 0x000C(0x0004)
	float                                              fOffBeatMultiplier;                                       // 0x0010(0x0004)
	float                                              fTarget;                                                  // 0x0014(0x0004)
	float                                              fActual;                                                  // 0x0018(0x0004)
	float                                              fLambda;                                                  // 0x001C(0x0004)
	float                                              fDecay;                                                   // 0x0020(0x0004)
	float                                              fRaw;                                                     // 0x0024(0x0004)
	float                                              fDampenAmt;                                               // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgSpectatorController.SpectatorBookmark
// 0x0030
struct FSpectatorBookmark
{
	class AActor*                                      ViewTarget;                                               // 0x0000(0x0008) (Transient)
	TEnumAsByte<ESpectatorCameraMode>                  ViewMode;                                                 // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FTPOV                                       POV;                                                      // 0x000C(0x0024)
};

// ScriptStruct TgGame.TgSpectatorController.BroadcastChannel
// 0x0008
struct FBroadcastChannel
{
	TEnumAsByte<ESpectatorMode>                        Channel;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayerID;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDemoRecSpectator.SpectatorCommand
// 0x000C
struct FSpectatorCommand
{
	int                                                nFrame;                                                   // 0x0000(0x0004)
	unsigned long                                      bUseIndex : 1;                                            // 0x0004(0x0004)
	float                                              fSpeed;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDemoRecSpectator.DilationData
// 0x0014
struct FDilationData
{
	float                                              fValue;                                                   // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPlayerInput.AimAssistTargetWeight
// 0x0020
struct FAimAssistTargetWeight
{
	TScriptInterface<class UTgCombatActor>             Target;                                                   // 0x0000(0x0010)
	float                                              Weight;                                                   // 0x0010(0x0004)
	float                                              horizAssistVal;                                           // 0x0014(0x0004)
	float                                              vertAssistVal;                                            // 0x0018(0x0004)
	float                                              lastUpdateTimestamp;                                      // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPlayerInput.AimAssistTargetWeightVars
// 0x001C
struct FAimAssistTargetWeightVars
{
	float                                              CurrentTargetBonus;                                       // 0x0000(0x0004)
	float                                              NotCurrentTargetPenalty;                                  // 0x0004(0x0004)
	float                                              MinAccuracyBonus;                                         // 0x0008(0x0004)
	float                                              MaxAccuracyBonus;                                         // 0x000C(0x0004)
	float                                              MinInaccuracyPenalty;                                     // 0x0010(0x0004)
	float                                              MaxInaccuracyPenalty;                                     // 0x0014(0x0004)
	float                                              MaxWeight;                                                // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgSkeletalMeshActor_Loader.LobbySMAMeterBus
// 0x0010
struct FLobbySMAMeterBus
{
	struct Fdword                                      dwBusID;                                                  // 0x0000(0x0004)
	TEnumAsByte<ELobbyMeterBusIntent>                  eIntent;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UAkEvent*                                    akOnStop;                                                 // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgSkeletalMeshActor_Loader.CharacterSpecificData_Maeve
// 0x0019
struct FCharacterSpecificData_Maeve
{
	float                                              fMaterialAnimationValue;                                  // 0x0000(0x0004) (Transient)
	float                                              fMaterialAnimationTarget;                                 // 0x0004(0x0004) (Transient)
	float                                              fMaterialAnimationTimer;                                  // 0x0008(0x0004) (Transient)
	float                                              fDjSwapDelayTimer;                                        // 0x000C(0x0004) (Transient)
	float                                              fDjSwapHoldTimer;                                         // 0x0010(0x0004) (Transient)
	float                                              fDjSwapChompTimer;                                        // 0x0014(0x0004) (Transient)
	TEnumAsByte<EDjBladesFace>                         eDjCurrentFace;                                           // 0x0018(0x0001) (Transient)
};

// ScriptStruct TgGame.TgSkeletalMeshActor_Loader.CharacterSpecificData
// 0x001C
struct FCharacterSpecificData
{
	struct FCharacterSpecificData_Maeve                MaeveData;                                                // 0x0000(0x001C)
};

// ScriptStruct TgGame.TgSkeletalMeshComponent.AnimNotifyParticleCacheEntry
// 0x0014
struct FAnimNotifyParticleCacheEntry
{
	unsigned long                                      bCached : 1;                                              // 0x0000(0x0004)
	class UAnimNotify_PlayParticleEffect*              Notify;                                                   // 0x0004(0x0008)
	class UParticleSystemComponent*                    PSC;                                                      // 0x000C(0x0008) (ExportObject, Component, EditInline)
};

// ScriptStruct TgGame.TgSkeletalMeshComponent.MeshAccessoryStorage
// 0x0010
struct FMeshAccessoryStorage
{
	class UTgSkeletalMeshComponent*                    m_Accessory;                                              // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UTgAnimMetaData_MeshAccessory*               m_Source;                                                 // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgSkeletalMeshComponent.SwappedMeshResetInfo
// 0x0014
struct FSwappedMeshResetInfo
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // 0x0000(0x0008) (ExportObject, Component, EditInline)
	int                                                MaterialIndex;                                            // 0x0008(0x0004)
	class UMaterialInstanceConstant*                   OrigMatInst;                                              // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgSkeletalMeshComponent.MICScalarParamMetaDataStorage
// 0x002C
struct FMICScalarParamMetaDataStorage
{
	class UTgAnimMetaData_MICScalarParameterExtended*  m_Source;                                                 // 0x0000(0x0008)
	TArray<struct FSwappedMeshResetInfo>               MaterialsToReset;                                         // 0x0008(0x0010) (Component, AlwaysInit, NeedCtorLink)
	TArray<class UMaterialInstanceConstant*>           CurrentModifiedMICs;                                      // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bHasSetMICs : 1;                                          // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgSkeletalMeshComponent.MICStateParamInterpData
// 0x0044
struct FMICStateParamInterpData
{
	int                                                nMaterialIndex;                                           // 0x0000(0x0004)
	struct FName                                       nmToStateName;                                            // 0x0004(0x0008)
	struct FName                                       nmFromStateName;                                          // 0x000C(0x0008)
	float                                              fStartTime;                                               // 0x0014(0x0004)
	float                                              fEndTime;                                                 // 0x0018(0x0004)
	struct FMICStateParams                             SavedState;                                               // 0x001C(0x0028) (NeedCtorLink)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_AssemblyData
// 0x0024
struct FFx_AssemblyData
{
	struct FName                                       m_nmSocketName;                                           // 0x0000(0x0008)
	struct FName                                       m_nmDisplayGroup;                                         // 0x0008(0x0008)
	int                                                m_nDisplayMode;                                           // 0x0010(0x0004)
	int                                                m_nSpecialFxId;                                           // 0x0014(0x0004)
	int                                                m_nIndex;                                                 // 0x0018(0x0004)
	int                                                m_nEquipmentSlot;                                         // 0x001C(0x0004)
	unsigned long                                      m_bAppliesToAllModes : 1;                                 // 0x0020(0x0004)
	unsigned long                                      m_bAttachToGround : 1;                                    // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgSubtitledMessages.QueuedSubtitle
// 0x0024
struct FQueuedSubtitle
{
	unsigned long                                      CurrentlyPlaying : 1;                                     // 0x0000(0x0004)
	int                                                SubtitleMessageId;                                        // 0x0004(0x0004)
	struct FString                                     SubtitleText;                                             // 0x0008(0x0010) (NeedCtorLink)
	class UAkBaseSoundObject*                          SubtitleSound;                                            // 0x0018(0x0008)
	int                                                AkId;                                                     // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.DeferredNode
// 0x0024
struct FDeferredNode
{
	float                                              WorldTime;                                                // 0x0000(0x0004)
	struct FPointer                                    CurrentNode;                                              // 0x0004(0x0008) (Native)
	struct FPointer                                    CachedStatus;                                             // 0x000C(0x0008) (Native)
	struct FPointer                                    StorageMemory;                                            // 0x0014(0x0008) (Native)
	struct FPointer                                    WorkingMemory;                                            // 0x001C(0x0008) (Native)
};

// ScriptStruct TgGame.TgAIBehaviorNode.BehaviorStateData
// 0x0009
struct FBehaviorStateData
{
	float                                              LastTickTime;                                             // 0x0000(0x0004)
	int                                                NodeToken;                                                // 0x0004(0x0004)
	TEnumAsByte<EBehaviorStatus>                       Status;                                                   // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgAIController_Behavior.NavigationQueueEntry
// 0x002C
struct FNavigationQueueEntry
{
	class ATgPawn*                                     TargetPawn;                                               // 0x0000(0x0008)
	class AActor*                                      TargetActor;                                              // 0x0008(0x0008)
	struct FVector                                     TargetLocation;                                           // 0x0010(0x000C)
	unsigned long                                      bNewEntry : 1;                                            // 0x001C(0x0004)
	unsigned long                                      bCanCacheLOS : 1;                                         // 0x001C(0x0004)
	unsigned long                                      bCachedLOS : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bLookAtTarget : 1;                                        // 0x001C(0x0004)
	unsigned long                                      bMustHaveLOS : 1;                                         // 0x001C(0x0004)
	unsigned long                                      bStopNavOnReachedDestination : 1;                         // 0x001C(0x0004)
	float                                              DistanceTolerance;                                        // 0x0020(0x0004)
	int                                                NodeToken;                                                // 0x0024(0x0004)
	int                                                TeleportIndex;                                            // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.FollowLaneState
// 0x0008
struct FFollowLaneState
{
	int                                                LastLaneIndex;                                            // 0x0000(0x0004)
	unsigned long                                      bFinalApproach : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bLockedToMarker : 1;                                      // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.IncomingDamageEntry
// 0x0030
struct FIncomingDamageEntry
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	TEnumAsByte<ETG_EQUIP_POINT>                       DeviceSlot;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     SourceInitialLocation;                                    // 0x000C(0x000C)
	struct FRotator                                    SourceInitialAim;                                         // 0x0018(0x000C)
	float                                              ExpireTime;                                               // 0x0024(0x0004)
	float                                              RemovalTime;                                              // 0x0028(0x0004)
	float                                              Weight;                                                   // 0x002C(0x0004)
};

// ScriptStruct TgGame.TgAIController_BehaviorMapNpc.ThreatEntry
// 0x000C
struct FThreatEntry
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	float                                              ThreatLevel;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAILocalPositionSolver.DefaultRepulsorData
// 0x000D
struct FDefaultRepulsorData
{
	unsigned char                                      TargetType;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxEnemyWeight;                                           // 0x0004(0x0004)
	float                                              MaxFriendlyWeight;                                        // 0x0008(0x0004)
	TEnumAsByte<ERepulsorWeightMethod>                 SolverType;                                               // 0x000C(0x0001)
};

// ScriptStruct TgGame.TgAIObstacleAvoidance.ObstacleQueryCache
// 0x0029
struct FObstacleQueryCache
{
	struct FVector                                     RealGoalPos;                                              // 0x0000(0x000C)
	struct FVector                                     ModifiedGoalPos;                                          // 0x000C(0x000C)
	TArray<struct FVector>                             IntermediatePoints;                                       // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EObstacleAvoidanceStatus>              PathStatus;                                               // 0x0028(0x0001)
};

// ScriptStruct TgGame.TgAIUtilityHandle.UtilityFunctionList
// 0x0024
struct FUtilityFunctionList
{
	struct FPointer                                    UtilityFunctionList;                                      // 0x0000(0x0008) (Native)
	int                                                UtilityFunctionListCount;                                 // 0x0008(0x0004)
	struct FPointer                                    StaticMemory;                                             // 0x000C(0x0008) (Native)
	struct FPointer                                    CachedUtilities;                                          // 0x0014(0x0008) (Native, Transient)
	struct FPointer                                    DynamicStorageMemory;                                     // 0x001C(0x0008) (Native, Transient)
};

// ScriptStruct TgGame.TgAIUtilityHandle.UtilitySet
// 0x0048
struct FUtilitySet
{
	struct FUtilityFunctionList                        Functions;                                                // 0x0000(0x0024)
	struct FUtilityFunctionList                        Filters;                                                  // 0x0024(0x0024)
};

// ScriptStruct TgGame.TgAIUtilityHandle.UtilityPair
// 0x0048
struct FUtilityPair
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) UNKNOWN PROPERTY: MapProperty TgGame.TgAIUtilityHandle.UtilityPair.FilteredAnnotationPoints
};

// ScriptStruct TgGame.TgCameraModule_SpectatorOverview.CameraPitchInfo
// 0x0008
struct FCameraPitchInfo
{
	float                                              ZHeight;                                                  // 0x0000(0x0004)
	float                                              Pitch;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgCameraModule_ThirdPerson.ServerCorrectionSmoothingParams
// 0x0020
struct FServerCorrectionSmoothingParams
{
	float                                              fServerCorrectSnapDist;                                   // 0x0000(0x0004)
	float                                              fMinBaseSpeed;                                            // 0x0004(0x0004)
	float                                              fMaxBaseSpeed;                                            // 0x0008(0x0004)
	float                                              fBaseSpeedMultiplier;                                     // 0x000C(0x0004)
	float                                              fNewInfoWeight;                                           // 0x0010(0x0004)
	float                                              fMinCorrectionModifier;                                   // 0x0014(0x0004)
	float                                              fMaxCorrectionModifier;                                   // 0x0018(0x0004)
	float                                              fCorrectionModifierMultiplier;                            // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPlayerCamera.PropertyDecayState
// 0x000C
struct FPropertyDecayState
{
	float                                              PropertyLevel;                                            // 0x0000(0x0004)
	float                                              PropertyMax;                                              // 0x0004(0x0004)
	float                                              LastDecayTimestamp;                                       // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPlayerCamera.PropertyDecayParams
// 0x0014
struct FPropertyDecayParams
{
	float                                              LambdaImpulse;                                            // 0x0000(0x0004)
	float                                              LambdaAccumulation;                                       // 0x0004(0x0004)
	float                                              DecayImpulse;                                             // 0x0008(0x0004)
	float                                              DecayAccumulation;                                        // 0x000C(0x0004)
	float                                              AccumulationImpulseMix;                                   // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgSpawnTeleporterEntrance.ExitInfo
// 0x0010
struct FExitInfo
{
	class ATgSpawnTeleporterExit*                      Exit;                                                     // 0x0000(0x0008)
	float                                              Rating;                                                   // 0x0008(0x0004)
	unsigned long                                      bEnemyHasLOS : 1;                                         // 0x000C(0x0004)
	unsigned long                                      bIsOpenSpot : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgAudioConversations.VoxConversation
// 0x0028
struct FVoxConversation
{
	struct FString                                     sTypeSpokenFirst;                                         // 0x0000(0x0010) (Config, NeedCtorLink)
	struct FString                                     sTypeSpokenSecond;                                        // 0x0010(0x0010) (Config, NeedCtorLink)
	int                                                nTypeSpokenFirst;                                         // 0x0020(0x0004)
	int                                                nTypeSpokenSecond;                                        // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgObject.ScoreKillData
// 0x0084
struct FScoreKillData
{
	class AController*                                 Killer;                                                   // 0x0000(0x0008)
	class ATgRepInfo_Player*                           KillerPRI;                                                // 0x0008(0x0008)
	class ATgPawn*                                     KillerPawn;                                               // 0x0010(0x0008)
	struct FPointer                                    KillerBotAssembly;                                        // 0x0018(0x0008) (Native)
	unsigned long                                      bKillerIsGod : 1;                                         // 0x0020(0x0004)
	unsigned long                                      bKillerIsMinion : 1;                                      // 0x0020(0x0004)
	unsigned long                                      bKillerIsTower : 1;                                       // 0x0020(0x0004)
	class AController*                                 Victim;                                                   // 0x0024(0x0008)
	class ATgPawn*                                     VictimPawn;                                               // 0x002C(0x0008)
	class ATgRepInfo_Player*                           VictimPRI;                                                // 0x0034(0x0008)
	class ATgRepInfo_TaskForce*                        VictimTaskForce;                                          // 0x003C(0x0008)
	struct FPointer                                    VictimBotAssembly;                                        // 0x0044(0x0008) (Native)
	unsigned long                                      VictimCanScore : 1;                                       // 0x004C(0x0004)
	unsigned long                                      bVictimIsGod : 1;                                         // 0x004C(0x0004)
	unsigned long                                      bVictimIsMinion : 1;                                      // 0x004C(0x0004)
	unsigned long                                      bVictimIsTower : 1;                                       // 0x004C(0x0004)
	class AController*                                 Scorer;                                                   // 0x0050(0x0008)
	class ATgPawn*                                     ScorerPawn;                                               // 0x0058(0x0008)
	class ATgRepInfo_Player*                           ScorerPRI;                                                // 0x0060(0x0008)
	class ATgRepInfo_TaskForce*                        ScorerTaskForce;                                          // 0x0068(0x0008)
	unsigned long                                      ScorerCanScore : 1;                                       // 0x0070(0x0004)
	unsigned long                                      bSuicide : 1;                                             // 0x0070(0x0004)
	unsigned long                                      bFakeDeath : 1;                                           // 0x0070(0x0004)
	TArray<class ATgRepInfo_Player*>                   AssistingPlayers;                                         // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGame.TgAIBotPlayersToSpawn
// 0x0020
struct FTgAIBotPlayersToSpawn
{
	struct FString                                     fsName;                                                   // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nBotId;                                                   // 0x0010(0x0004)
	struct Fdword                                      dwPlayerId;                                               // 0x0014(0x0004)
	int                                                nTaskForceId;                                             // 0x0018(0x0004)
	int                                                nSpawnTableDetailId;                                      // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgGame.PlayOfTheGameInfo
// 0x000C
struct FPlayOfTheGameInfo
{
	class ATgRepInfo_Player*                           PRI;                                                      // 0x0000(0x0008)
	float                                              Rating;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgGame.PlayOfTheGameEventConfig
// 0x0020
struct FPlayOfTheGameEventConfig
{
	TEnumAsByte<EPlayOfTheGameEventType>               EventType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BaseRating;                                               // 0x0004(0x0004)
	float                                              MultMod;                                                  // 0x0008(0x0004)
	float                                              MaxTimeDiff;                                              // 0x000C(0x0004)
	unsigned long                                      ScaleByTimeDiff : 1;                                      // 0x0010(0x0004)
	int                                                MaxMultInstances;                                         // 0x0014(0x0004)
	float                                              Threshold;                                                // 0x0018(0x0004)
	float                                              ThresholdTimeOut;                                         // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgCharacterPerformance.DeviceToCharacterID
// 0x0008
struct FDeviceToCharacterID
{
	int                                                CharacterID;                                              // 0x0000(0x0004)
	int                                                DeviceID;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderVote
// 0x0008
struct FSurrenderVote
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	unsigned long                                      bSurrender : 1;                                           // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderData
// 0x0024
struct FSurrenderData
{
	float                                              fLastSurrenderTime;                                       // 0x0000(0x0004)
	TArray<struct FSurrenderVote>                      SurrenderVotes;                                           // 0x0004(0x0010) (NeedCtorLink)
	int                                                nSurrenderTotal;                                          // 0x0014(0x0004)
	int                                                nSurrenderNeeded;                                         // 0x0018(0x0004)
	int                                                nSurrenderVoteCount;                                      // 0x001C(0x0004)
	int                                                nNoSurrenderVoteCount;                                    // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.TimeDilationWindow
// 0x001C
struct FTimeDilationWindow
{
	int                                                nWindowId;                                                // 0x0000(0x0004)
	float                                              fRampUpTime;                                              // 0x0004(0x0004)
	float                                              fRampDownTime;                                            // 0x0008(0x0004)
	float                                              fWindowLength;                                            // 0x000C(0x0004)
	float                                              fIntendedTimeDilation;                                    // 0x0010(0x0004)
	float                                              fCurrentTimeDilation;                                     // 0x0014(0x0004)
	float                                              fTimeLeft;                                                // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgGame_Paladins.TeamDifficultyData
// 0x0008
struct FTeamDifficultyData
{
	TEnumAsByte<EBotDifficultyLevel>                   CurrentBotDifficultyLevel;                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TeamSkillLevel;                                           // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.CardInfo
// 0x001C
struct FCardInfo
{
	int                                                Id;                                                       // 0x0000(0x0004)
	int                                                Count;                                                    // 0x0004(0x0004)
	int                                                Owner;                                                    // 0x0008(0x0004)
	struct FString                                     sOwner;                                                   // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGameTipManager.GameTipInfo
// 0x0034
struct FGameTipInfo
{
	int                                                nTipId;                                                   // 0x0000(0x0004)
	int                                                nPriority;                                                // 0x0004(0x0004)
	unsigned long                                      bSelfSuppress : 1;                                        // 0x0008(0x0004)
	float                                              fDuration;                                                // 0x000C(0x0004)
	float                                              fRemainingTime;                                           // 0x0010(0x0004)
	float                                              fTimeOnTop;                                               // 0x0014(0x0004)
	float                                              fMinSecondsBetweenVisible;                                // 0x0018(0x0004)
	unsigned long                                      bRemoveOnTimer : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bDismissed : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bWaitForDismiss : 1;                                      // 0x001C(0x0004)
	unsigned long                                      bDisplayAlways : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bPopupDisplay : 1;                                        // 0x001C(0x0004)
	class USoundCue*                                   PopupSoundCue;                                            // 0x0020(0x0008)
	class ATgHelpTipActor*                             HelpTipActor;                                             // 0x0028(0x0008)
	int                                                PropertyId;                                               // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgGameTipManager.TipSavedState
// 0x0014
struct FTipSavedState
{
	int                                                nTipId;                                                   // 0x0000(0x0004)
	int                                                nMatchVisibleCount;                                       // 0x0004(0x0004)
	int                                                nTotalVisibleCount;                                       // 0x0008(0x0004)
	float                                              fLastVisibleTime;                                         // 0x000C(0x0004)
	unsigned long                                      nCompletedCount : 1;                                      // 0x0010(0x0004)
	unsigned long                                      bSuppressed : 1;                                          // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO
// 0x0004
struct FTG_HUD_INFO
{
	unsigned long                                      bEnemy : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bShowNameplate : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bShowOverlays : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bIsTargeted : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bLocalPlayerHasLOS : 1;                                   // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Game.GraphData
// 0x000C
struct FGraphData
{
	int                                                XP;                                                       // 0x0000(0x0004)
	int                                                Gold;                                                     // 0x0004(0x0004)
	int                                                Time;                                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Game.BotDifficultyDebugData
// 0x0064
struct FBotDifficultyDebugData
{
	unsigned long                                      CurrentlyActive : 1;                                      // 0x0000(0x0004)
	unsigned long                                      DisparityDetected : 1;                                    // 0x0000(0x0004)
	unsigned long                                      ChangesLockedOut : 1;                                     // 0x0000(0x0004)
	int                                                TimeBeforeTrigger;                                        // 0x0004(0x0004)
	TEnumAsByte<EBotDifficultyLevel>                   TaskForce1BotDifficulty;                                  // 0x0008(0x0001)
	TEnumAsByte<EBotDifficultyLevel>                   TaskForce2BotDifficulty;                                  // 0x0009(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              TaskForce1Skill;                                          // 0x000C(0x0004)
	float                                              TaskForce2Skill;                                          // 0x0010(0x0004)
	struct FSkillLevelPercentageData                   SkillPercentages[0x2];                                    // 0x0014(0x0028)
};

// ScriptStruct TgGame.TgRepInfo_Player.SimulatedProjectileOverrides
// 0x0018
struct FSimulatedProjectileOverrides
{
	int                                                FireModeID;                                               // 0x0000(0x0004)
	float                                              RemoteProximityDist;                                      // 0x0004(0x0004)
	float                                              Range;                                                    // 0x0008(0x0004)
	float                                              Speed;                                                    // 0x000C(0x0004)
	float                                              GravityScale;                                             // 0x0010(0x0004)
	float                                              FireAngle;                                                // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.DeviceTeamInfo
// 0x0028
struct FDeviceTeamInfo
{
	int                                                Power;                                                    // 0x0000(0x0004)
	int                                                Level;                                                    // 0x0004(0x0004)
	int                                                CurrentDeviceId;                                          // 0x0008(0x0004)
	int                                                LastKnownDeviceId[0x3];                                   // 0x000C(0x0004)
	int                                                CurrentDeviceCount;                                       // 0x0018(0x0004)
	int                                                LastKnownDeviceCount[0x3];                                // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.MarkedTargetInfo
// 0x0008
struct FMarkedTargetInfo
{
	int                                                PawnId;                                                   // 0x0000(0x0004)
	int                                                Count;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.sPingInfo
// 0x0019
struct FsPingInfo
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	float                                              fStartTime;                                               // 0x0004(0x0004)
	struct FVector                                     vPingedLoc;                                               // 0x0008(0x000C)
	unsigned long                                      bPinging : 1;                                             // 0x0014(0x0004)
	TEnumAsByte<EPING_TYPE>                            eType;                                                    // 0x0018(0x0001)
};

// ScriptStruct TgGame.TgRepInfo_Player.DeckCardData
// 0x0008
struct FDeckCardData
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nPlayerId;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.TgAbilityInfo
// 0x0044
struct FTgAbilityInfo
{
	int                                                DeviceIds[0x11];                                          // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.PlayOfTheGameEventData
// 0x000C
struct FPlayOfTheGameEventData
{
	TEnumAsByte<EPlayOfTheGameEventType>               EventType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeStamp;                                                // 0x0004(0x0004)
	float                                              WeightedRating;                                           // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.PlayOfTheGameEventCounter
// 0x0014
struct FPlayOfTheGameEventCounter
{
	TEnumAsByte<EPlayOfTheGameEventType>               EventType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Threshold;                                                // 0x0004(0x0004)
	float                                              Counter;                                                  // 0x0008(0x0004)
	float                                              TimeOut;                                                  // 0x000C(0x0004)
	float                                              Timer;                                                    // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.TrackedProjectileInitData
// 0x0030
struct FTrackedProjectileInitData
{
	int                                                FireModeID;                                               // 0x0000(0x0004)
	int                                                ProjectileId;                                             // 0x0004(0x0004)
	struct FVector                                     SpawnLocation;                                            // 0x0008(0x000C)
	struct FVector                                     SpawnRotation;                                            // 0x0014(0x000C)
	struct FVector                                     SpawnVelocity;                                            // 0x0020(0x000C)
	float                                              SpawnServerTime;                                          // 0x002C(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.TrackedProjectileUpdateData
// 0x001C
struct FTrackedProjectileUpdateData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
	float                                              UpdateServerTime;                                         // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TGTEAM_ENTRY
// 0x0034
struct FTGTEAM_ENTRY
{
	struct FString                                     fsName;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     fsMapName;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                nHealth;                                                  // 0x0020(0x0004)
	int                                                nMaxHealth;                                               // 0x0024(0x0004)
	unsigned long                                      bLeader : 1;                                              // 0x0028(0x0004)
	class ATgRepInfo_Player*                           pPrep;                                                    // 0x002C(0x0008)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TEAMTIMEMANAGER_ENTRY
// 0x000C
struct FTEAMTIMEMANAGER_ENTRY
{
	class UTgTimerManager*                             m_TimerManager;                                           // 0x0000(0x0008)
	int                                                m_nDeviceId;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.GLOBALEFFECT_ENTRY
// 0x0010
struct FGLOBALEFFECT_ENTRY
{
	class UTgEffectGroup*                              eg;                                                       // 0x0000(0x0008)
	class ATgPawn*                                     pawnInstigator;                                           // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgAchievement_DeviceHitCombo.DeviceHitComboEntry
// 0x000C
struct FDeviceHitComboEntry
{
	class ATgPawn_Character*                           pTarget;                                                  // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAchievement_FastDamage.FastDamageEntry
// 0x0008
struct FFastDamageEntry
{
	int                                                nDamage;                                                  // 0x0000(0x0004)
	float                                              fTime;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAchievement_FastHealDifferentPlayers.FastHealDifferentPlayersEntry
// 0x000C
struct FFastHealDifferentPlayersEntry
{
	class ATgPawn_Character*                           pTarget;                                                  // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAchievement_KillWithCombo.KillWithComboEntry
// 0x000C
struct FKillWithComboEntry
{
	class ATgPawn_Character*                           pTarget;                                                  // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAchievement_MaldambaSpecificChallenge.MaldambaSpecificChallengeEntry
// 0x0008
struct FMaldambaSpecificChallengeEntry
{
	TEnumAsByte<EMaldambaSpecificChallengeEntryType>   Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              fTime;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_BarrierTank.WallPlacementInfo
// 0x0010
struct FWallPlacementInfo
{
	unsigned long                                      bIsValidLocation : 1;                                     // 0x0000(0x0004)
	struct FVector                                     vSpawnLocation;                                           // 0x0004(0x000C)
};

// ScriptStruct TgGame.TgPawn_Blades.DjBladesFaceConfig
// 0x0008
struct FDjBladesFaceConfig
{
	float                                              fShiftX;                                                  // 0x0000(0x0004)
	float                                              fShiftY;                                                  // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Blades.DjBladesVGSFace
// 0x0005
struct FDjBladesVGSFace
{
	int                                                nVgsId;                                                   // 0x0000(0x0004)
	TEnumAsByte<EDjBladesFace>                         eFace;                                                    // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgDevice_BombKingInhand.StickyBombPendingDetonate
// 0x0014
struct FStickyBombPendingDetonate
{
	int                                                nProjID;                                                  // 0x0000(0x0004)
	int                                                nDeployID;                                                // 0x0004(0x0004)
	struct FVector                                     vExplodeLocation;                                         // 0x0008(0x000C)
};

// ScriptStruct TgGame.TgDevice_BunnyHeal.BunnyHealHistoryEntry
// 0x0018
struct FBunnyHealHistoryEntry
{
	class ATgPawn*                                     TargetPawn;                                               // 0x0000(0x0008)
	float                                              fBounceDelay;                                             // 0x0008(0x0004)
	class ATgProj_BunnyHeal*                           HealProj;                                                 // 0x000C(0x0008)
	unsigned long                                      bValidImpact : 1;                                         // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgPawn_Bunny.SpiritLink
// 0x0020
struct FSpiritLink
{
	class ATgPawn*                                     LinkedPawn;                                               // 0x0000(0x0008)
	float                                              fAddedTimestamp;                                          // 0x0008(0x0004)
	class UTgBeamHelper*                               LinkBeam1P;                                               // 0x000C(0x0008)
	class UTgBeamHelper*                               LinkBeam3P;                                               // 0x0014(0x0008)
	float                                              fSecondsUntilBreak;                                       // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Bunny.BreakingSpiritLink
// 0x0018
struct FBreakingSpiritLink
{
	class ATgPawn*                                     LinkedPawn;                                               // 0x0000(0x0008)
	float                                              fAddedTimestamp;                                          // 0x0008(0x0004)
	class UTgBeamHelper*                               LinkBreakBeam1P;                                          // 0x000C(0x0008)
	float                                              fLinkBreakBeamTTL;                                        // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgPawn_Corvus.BeaconInfo
// 0x008C
struct FBeaconInfo
{
	class ATgRepInfo_Player*                           BeaconTarget;                                             // 0x0000(0x0008)
	class ATgPawn*                                     BeaconPawn;                                               // 0x0008(0x0008)
	struct FImpactInfo                                 BeaconImpactInfo;                                         // 0x0010(0x007C) (Component)
};

// ScriptStruct TgGame.TgDeviceForm_ArcingBeam.ArcingFXInfo
// 0x001C
struct FArcingFXInfo
{
	class AActor*                                      Source;                                                   // 0x0000(0x0008)
	class AActor*                                      Target;                                                   // 0x0008(0x0008)
	class UTgSpecialFx*                                ArcingFX;                                                 // 0x0010(0x0008)
	float                                              fRemainingActiveTime;                                     // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgPawn_Imani.DigitizedImaniConfig
// 0x0008
struct FDigitizedImaniConfig
{
	float                                              fShiftX;                                                  // 0x0000(0x0004)
	float                                              fShiftY;                                                  // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeploy_MoonShardTween.AffectedPawn
// 0x001C
struct FAffectedPawn
{
	class ATgPawn_Character*                           pPawn;                                                    // 0x0000(0x0008)
	struct FVector                                     vRelativeOffsetAtGrab;                                    // 0x0008(0x000C)
	float                                              fInvPullInTimeTotal;                                      // 0x0014(0x0004)
	float                                              fPullInTimeLeft;                                          // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgDevice_DruidRMB.DelayedImpactInfo
// 0x0080
struct FDelayedImpactInfo
{
	float                                              fDeliveryDelayRemaining;                                  // 0x0000(0x0004) (AlwaysInit)
	struct FImpactInfo                                 Impact;                                                   // 0x0004(0x007C) (Component, AlwaysInit)
};

// ScriptStruct TgGame.TgDeviceForm_DruidRMB.DruidHealBeam
// 0x000C
struct FDruidHealBeam
{
	float                                              fDeliveryDelayRemaining;                                  // 0x0000(0x0004) (AlwaysInit)
	class UTgBeamHelper*                               Beam;                                                     // 0x0004(0x0008) (AlwaysInit)
};

// ScriptStruct TgGame.TgProj_MoonShard.MoonShardPawnRecord
// 0x0009
struct FMoonShardPawnRecord
{
	class ATgPawn_Character*                           pCharacter;                                               // 0x0000(0x0008)
	TEnumAsByte<EMOONSHARD_WITHIN_RANGE>               eWithin;                                                  // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgPawn_Raum.RaumShard
// 0x0018
struct FRaumShard
{
	unsigned char                                      nNonce;                                                   // 0x0000(0x0001)
	unsigned char                                      nId;                                                      // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	unsigned long                                      bIsActive : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bIsSucking : 1;                                           // 0x0004(0x0004)
	float                                              fCurrentSpeed;                                            // 0x0008(0x0004)
	float                                              fTTL;                                                     // 0x000C(0x0004)
	class ATgRaumShard*                                aShardActor;                                              // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgProj_RaumStomp.StompElement
// 0x000C
struct FStompElement
{
	float                                              fTangentToVelocity;                                       // 0x0000(0x0004)
	class ATgPropActor*                                pStompRep;                                                // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgProj_TigronChakram.HistoricPosition
// 0x0010
struct FHistoricPosition
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	struct FVector                                     vPosition;                                                // 0x0004(0x000C)
};

// ScriptStruct TgGame.TgDeploy_DarkConvergence.PullData
// 0x0020
struct FPullData
{
	class ATgPawn_Character*                           Character;                                                // 0x0000(0x0008)
	struct FVector                                     SourceLocation;                                           // 0x0008(0x000C)
	struct FVector                                     TargetLocation;                                           // 0x0014(0x000C)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovStrandInfo
// 0x0028
struct FMolotovStrandInfo
{
	struct FVector                                     vStartDirection;                                          // 0x0000(0x000C)
	float                                              fAllowanceWeight;                                         // 0x000C(0x0004)
	int                                                nHeadIndex;                                               // 0x0010(0x0004)
	int                                                nAllowableSize;                                           // 0x0014(0x0004)
	TArray<int>                                        nStrandTrace;                                             // 0x0018(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovTriangleInfo
// 0x0038
struct FMolotovTriangleInfo
{
	int                                                index1;                                                   // 0x0000(0x0004)
	int                                                index2;                                                   // 0x0004(0x0004)
	int                                                index3;                                                   // 0x0008(0x0004)
	int                                                neighborIndex1;                                           // 0x000C(0x0004)
	int                                                neighborIndex2;                                           // 0x0010(0x0004)
	int                                                neighborIndex3;                                           // 0x0014(0x0004)
	int                                                nRank;                                                    // 0x0018(0x0004)
	float                                              fHeatLevel;                                               // 0x001C(0x0004)
	struct FVector                                     vTriCenter;                                               // 0x0020(0x000C)
	struct FVector                                     vCenterDirection;                                         // 0x002C(0x000C)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovEligibilityRecord
// 0x001C
struct FMolotovEligibilityRecord
{
	unsigned long                                      bIsEligible : 1;                                          // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	struct FVector                                     vHitNormal;                                               // 0x0010(0x000C)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovPointInfo
// 0x0030
struct FMolotovPointInfo
{
	struct FVector                                     vLocation;                                                // 0x0000(0x000C)
	struct FRotator                                    rRotation;                                                // 0x000C(0x000C)
	int                                                nEffectSpotIndex;                                         // 0x0018(0x0004)
	float                                              fHeatLevel;                                               // 0x001C(0x0004)
	TArray<int>                                        nTriNeighbors;                                            // 0x0020(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovCenterInfo
// 0x0048
struct FMolotovCenterInfo
{
	int                                                ChildrenFront[0x3];                                       // 0x0000(0x0004)
	int                                                ChildrenFrontLeft[0x3];                                   // 0x000C(0x0004)
	int                                                ChildrenFrontRight[0x3];                                  // 0x0018(0x0004)
	int                                                ChildrenBack[0x3];                                        // 0x0024(0x0004)
	int                                                ChildrenBackLeft[0x3];                                    // 0x0030(0x0004)
	int                                                ChildrenBackRight[0x3];                                   // 0x003C(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovGrowthInfo
// 0x001C
struct FMolotovGrowthInfo
{
	int                                                nStrandAllotment;                                         // 0x0000(0x0004)
	int                                                nMaxSpots;                                                // 0x0004(0x0004)
	int                                                nMaxInitialStrands;                                       // 0x0008(0x0004)
	float                                              fStrandGrowthFraction;                                    // 0x000C(0x0004)
	unsigned long                                      bStrandsAreSaturated : 1;                                 // 0x0010(0x0004)
	int                                                nCenterGrowthVariance;                                    // 0x0014(0x0004)
	int                                                nSpreadsPerTick;                                          // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Molotov.MolotovGeneralSettings
// 0x0018
struct FMolotovGeneralSettings
{
	struct FVector                                     vBiasDirection;                                           // 0x0000(0x000C)
	float                                              fUpFactor;                                                // 0x000C(0x0004)
	float                                              fSpotRadius;                                              // 0x0010(0x0004) (Const)
	float                                              fSpotHeight;                                              // 0x0014(0x0004) (Const)
};

// ScriptStruct TgGame.TgDeviceFire_SnakeToss.RecentStunnedTarget
// 0x000C
struct FRecentStunnedTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              fTimestamp;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_DimensionalLink.DLTeleportTargets
// 0x0020
struct FDLTeleportTargets
{
	struct FVector                                     TargetPosition;                                           // 0x0000(0x000C)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C)
	class AActor*                                      TargetIllusion;                                           // 0x0018(0x0008)
};

// ScriptStruct TgGame.TgDevice_DimensionalLink.DLDeadTeleportTargets
// 0x001C
struct FDLDeadTeleportTargets
{
	struct FVector                                     TargetPosition;                                           // 0x0000(0x000C)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C)
	float                                              ValidTimeRemaining;                                       // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgDevice_DimensionalLink.DLRewindTargets
// 0x0018
struct FDLRewindTargets
{
	struct FVector                                     RewindPosition;                                           // 0x0000(0x000C)
	struct FRotator                                    RewindRotation;                                           // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgInvListener_CrackShot.CrackShotBonusDamageTarget
// 0x000C
struct FCrackShotBonusDamageTarget
{
	class AActor*                                      pTarget;                                                  // 0x0000(0x0008)
	float                                              fBonusDamageEndTime;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_LazarusInhand.HitSoundData
// 0x000C
struct FHitSoundData
{
	float                                              fAngle;                                                   // 0x0000(0x0004)
	class AActor*                                      pHitActor;                                                // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgPawn_Lazarus.BloodStoneTarget
// 0x000C
struct FBloodStoneTarget
{
	class ATgPawn*                                     pTarget;                                                  // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm_LazarusInhand.HitPawn
// 0x0008
struct FHitPawn
{
	int                                                nPawnId;                                                  // 0x0000(0x0004)
	float                                              fTimeHit;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInvListener_RiderShield.RiderShieldPerTargetHistory
// 0x000C
struct FRiderShieldPerTargetHistory
{
	class AActor*                                      HitTarget;                                                // 0x0000(0x0008)
	float                                              fLockOutTime;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Rider.RiderMarkedTargetInfo
// 0x0008
struct FRiderMarkedTargetInfo
{
	int                                                nTargetPawnId;                                            // 0x0000(0x0004)
	int                                                nMarkedCount;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Rider.RiderLastMaxMarkedTarget
// 0x0008
struct FRiderLastMaxMarkedTarget
{
	int                                                nTargetPawnId;                                            // 0x0000(0x0004)
	float                                              nMaxMarksTimestamp;                                       // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeploy_DredgeF.TargetToTeleport
// 0x000C
struct FTargetToTeleport
{
	float                                              fTime;                                                    // 0x0000(0x0004)
	class ATgPawn*                                     pTarget;                                                  // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgDevice_AtlasRMB.QueuedRewind
// 0x0014
struct FQueuedRewind
{
	class ATgPawn*                                     pTarget;                                                  // 0x0000(0x0008)
	float                                              fDelay;                                                   // 0x0008(0x0004)
	float                                              fDuration;                                                // 0x000C(0x0004)
	float                                              fRate;                                                    // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgPawn_Atlas.RewindingPawn
// 0x0018
struct FRewindingPawn
{
	class ATgPawn*                                     pPawn;                                                    // 0x0000(0x0008)
	int                                                nRMBFireMode;                                             // 0x0008(0x0004)
	float                                              fStartTime;                                               // 0x000C(0x0004)
	float                                              fFailsafeTTL;                                             // 0x0010(0x0004)
	int                                                nCallbackHandle;                                          // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgObject.SavedRewindVals
// 0x0024
struct FSavedRewindVals
{
	float                                              fHealth;                                                  // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	struct FRotator                                    rRotation;                                                // 0x0010(0x000C)
	float                                              fTime;                                                    // 0x001C(0x0004)
	unsigned long                                      bCollideWorld : 1;                                        // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgProj_ShadowStickyBombHoming.HomingBombTrackingTargets
// 0x000C
struct FHomingBombTrackingTargets
{
	class AActor*                                      PotentialTarget;                                          // 0x0000(0x0008)
	float                                              fScore;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_SevenMaskedFear.FearTarget
// 0x0010
struct FFearTarget
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	float                                              TimeFeared;                                               // 0x0008(0x0004)
	unsigned long                                      MarkedForFear : 1;                                        // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Seven.SevenMarkedTargetInfo
// 0x0008
struct FSevenMarkedTargetInfo
{
	int                                                nTargetPawnId;                                            // 0x0000(0x0004)
	int                                                nMarkedCount;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Vampire.VampMark
// 0x0014
struct FVampMark
{
	class ATgPawn*                                     MarkedPawn;                                               // 0x0000(0x0008)
	float                                              fAddedTimestamp;                                          // 0x0008(0x0004)
	float                                              fSecondsUntilBreak;                                       // 0x000C(0x0004)
	float                                              fSecondsApplyNextInterval;                                // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgDevice_CaspianUlt.CaspianSword
// 0x002C
struct FCaspianSword
{
	int                                                nNonce;                                                   // 0x0000(0x0004)
	int                                                nId;                                                      // 0x0004(0x0004)
	int                                                nPosition;                                                // 0x0008(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x000C(0x0004)
	unsigned long                                      bIsFired : 1;                                             // 0x000C(0x0004)
	float                                              fCreatedTimestamp;                                        // 0x0010(0x0004)
	class ATgProjectile*                               s_SwordProjectile;                                        // 0x0014(0x0008)
	float                                              c_fSimulatedFireAttempt;                                  // 0x001C(0x0004)
	unsigned long                                      c_bFxActive : 1;                                          // 0x0020(0x0004)
	class ATgPropActor*                                c_SwordProp;                                              // 0x0024(0x0008)
};

// ScriptStruct TgGame.TgPawn_Caspian.CaspianStackCountHistoryEntry
// 0x000C
struct FCaspianStackCountHistoryEntry
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	TEnumAsByte<ECaspianStackSource>                   eSource;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                nCount;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Caspian.CaspianPassiveStack
// 0x0005
struct FCaspianPassiveStack
{
	float                                              fCreatedTimestamp;                                        // 0x0000(0x0004)
	TEnumAsByte<ECaspianStackSource>                   eSource;                                                  // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgPawn_Caspian.CaspianStackConfig
// 0x0008
struct FCaspianStackConfig
{
	int                                                nMaxStacks;                                               // 0x0000(0x0004)
	float                                              fStackExpirationTime;                                     // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGameplayCurvesSet_TargetAimTracking.TargetAimTrackingDebugVals
// 0x003C
struct FTargetAimTrackingDebugVals
{
	int                                                DebugState;                                               // 0x0000(0x0004)
	struct FName                                       trackingCurveSetName;                                     // 0x0004(0x0008)
	float                                              strengthMultiplier[0x2];                                  // 0x000C(0x0004)
	float                                              strengthByAccuracy[0x2];                                  // 0x0014(0x0004)
	float                                              strengthByDesiredAngle[0x2];                              // 0x001C(0x0004)
	float                                              strengthFinal[0x2];                                       // 0x0024(0x0004)
	float                                              rawDesiredTurnAmt[0x2];                                   // 0x002C(0x0004)
	float                                              rawDesiredTurnAmtPerSec[0x2];                             // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgCallbackContainer.FunctionWrapperInfo
// 0x0014
struct FFunctionWrapperInfo
{
	struct FPointer                                    FunctionWrapper;                                          // 0x0000(0x0008) (Native)
	unsigned char                                      CallbackType;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	class UTgCallbackContainer*                        HandleOwner;                                              // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgObject.LootData
// 0x0010
struct FLootData
{
	int                                                nBot;                                                     // 0x0000(0x0004)
	int                                                nTier;                                                    // 0x0004(0x0004)
	int                                                nType;                                                    // 0x0008(0x0004)
	int                                                nDevice;                                                  // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgObject.ChargeHitInfo
// 0x000C
struct FChargeHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	float                                              TimeStamp;                                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.OffhandAnimation
// 0x0014
struct FOffhandAnimation
{
	struct FName                                       m_OffhandUseType;                                         // 0x0000(0x0008)
	struct FName                                       m_AnimName;                                               // 0x0008(0x0008) (Edit)
	unsigned long                                      m_bFullBody : 1;                                          // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgObject.DateTimeWrapper
// 0x0008
struct FDateTimeWrapper
{
	struct FQWord                                      qTime;                                                    // 0x0000(0x0008)
};

// ScriptStruct TgGame.TgObject.RewardInfo
// 0x0018
struct FRewardInfo
{
	int                                                RequestedReward;                                          // 0x0000(0x0004) (Const)
	int                                                BoostReward;                                              // 0x0004(0x0004)
	int                                                ActualReward;                                             // 0x0008(0x0004)
	int                                                ActualRewardAccum;                                        // 0x000C(0x0004)
	int                                                BoostRewardAccum;                                         // 0x0010(0x0004)
	int                                                ErrorMessage;                                             // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgObject.ObjectiveMICInfo
// 0x0014
struct FObjectiveMICInfo
{
	int                                                MyTeam;                                                   // 0x0000(0x0004)
	float                                              AmountFilled;                                             // 0x0004(0x0004)
	int                                                ObjStatus;                                                // 0x0008(0x0004)
	int                                                IsContested;                                              // 0x000C(0x0004)
	int                                                Flip;                                                     // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgAIController.ThreatStruct
// 0x000C
struct FThreatStruct
{
	class AActor*                                      Threatener;                                               // 0x0000(0x0008)
	float                                              fThreat;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn.TGEQUIP_SLOTS_STRUCT
// 0x0188
struct FTGEQUIP_SLOTS_STRUCT
{
	int                                                SlotIndices[0x31];                                        // 0x0000(0x0004)
	int                                                MiscItems[0x31];                                          // 0x00C4(0x0004)
};

// ScriptStruct TgGame.TgTimerManager.TGT_REG_LINK
// 0x0018
struct FTGT_REG_LINK
{
	struct FPointer                                    NextLink;                                                 // 0x0000(0x0008)
	class UObject*                                     RegObject;                                                // 0x0008(0x0008)
	class UFunction*                                   RegFunction;                                              // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgTimerManager.TgTimerData
// 0x0030
struct FTgTimerData
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	unsigned char                                      byTimer;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fStartTime;                                               // 0x0008(0x0004)
	float                                              fRemaining;                                               // 0x000C(0x0004)
	unsigned long                                      bRepeat : 1;                                              // 0x0010(0x0004)
	unsigned long                                      bPausedByGame : 1;                                        // 0x0010(0x0004)
	float                                              Rate;                                                     // 0x0014(0x0004)
	struct FTGT_REG_LINK                               CallbackRegistry;                                         // 0x0018(0x0018)
};

// ScriptStruct TgGame.TgAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                          // 0x0000(0x000C) (Edit)
	struct FName                                       AnimName;                                                 // 0x000C(0x0008) (Edit)
};

// ScriptStruct TgGame.TgChampionTickManager.ChampionEntry
// 0x0008
struct FChampionEntry
{
	int                                                m_nId;                                                    // 0x0000(0x0004)
	float                                              m_fLastDeltaTime;                                         // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.InventoryChangeFlags
// 0x0004
struct FInventoryChangeFlags
{
	unsigned long                                      bDevice : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bComponent : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bEquipped : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bDeviceFailed : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgDevice_ArcingBeam.PotentialTargetInfo
// 0x0010
struct FPotentialTargetInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	int                                                NumHits;                                                  // 0x0008(0x0004)
	float                                              Dist;                                                     // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Vengeance_Lex.TargetScoreInfo
// 0x0008
struct FTargetScoreInfo
{
	int                                                Score;                                                    // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeviceFire.AoeActorInRangeData
// 0x0014
struct FAoeActorInRangeData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
};

// ScriptStruct TgGame.TgEffectDamage_AstroDOT.EffectInstanceInfo
// 0x0008
struct FEffectInstanceInfo
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	float                                              fDamageValue;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgEffectDamage_PresenceDoT.PresenceDoTInstanceInfo
// 0x0008
struct FPresenceDoTInstanceInfo
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	float                                              fDamageValue;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame_Paladins.CurrencyBonus
// 0x000C
struct FCurrencyBonus
{
	unsigned char                                      m_BonusSourceType;                                        // 0x0000(0x0001)
	unsigned char                                      m_BonusType;                                              // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              m_fBonusValue;                                            // 0x0004(0x0004)
	float                                              m_fBonusTotal;                                            // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgGame_Paladins.CurrencyEntry
// 0x0030
struct FCurrencyEntry
{
	struct Fdword                                      m_dwCurrencyId;                                           // 0x0000(0x0004)
	struct Fdword                                      m_dwCharacterId;                                          // 0x0004(0x0004)
	float                                              m_fBaseValue;                                             // 0x0008(0x0004)
	float                                              m_fTotal;                                                 // 0x000C(0x0004)
	TArray<struct FCurrencyBonus>                      m_vCurrencyBonuses;                                       // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      m_CurrencyType;                                           // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FCurrencyBonus                              m_NullBonus;                                              // 0x0024(0x000C)
};

// ScriptStruct TgGame.TgInterpolatingCameraActor.InterpolatingCameraInfo
// 0x0040
struct FInterpolatingCameraInfo
{
	unsigned long                                      m_bInterpLocation : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      m_bInterpRotation : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      m_bInterpFOVAngle : 1;                                    // 0x0000(0x0004) (Edit)
	struct FVector                                     m_BaseLocation;                                           // 0x0004(0x000C) (Edit)
	struct FVector                                     m_TargetLocation;                                         // 0x0010(0x000C) (Edit)
	struct FRotator                                    m_BaseRotation;                                           // 0x001C(0x000C) (Edit)
	struct FRotator                                    m_TargetRotation;                                         // 0x0028(0x000C) (Edit)
	float                                              m_fBaseFOVAngle;                                          // 0x0034(0x0004) (Edit)
	float                                              m_fTargetFOVAngle;                                        // 0x0038(0x0004) (Edit)
	float                                              m_fInterpSpeed;                                           // 0x003C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgInventoryObject.sInventoryReq
// 0x0010
struct FsInventoryReq
{
	unsigned long                                      m_bLevelFail : 1;                                         // 0x0000(0x0004)
	unsigned long                                      m_bSkillFail : 1;                                         // 0x0000(0x0004)
	int                                                m_nSkillLevelReq;                                         // 0x0004(0x0004)
	int                                                m_nSkillIdReq;                                            // 0x0008(0x0004)
	unsigned long                                      m_bFlairFail : 1;                                         // 0x000C(0x0004)
	unsigned long                                      m_bLocationFail : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgMinimapManager.MiniMapServerEntity
// 0x0058
struct FMiniMapServerEntity
{
	struct FVector                                     vLocation;                                                // 0x0000(0x000C)
	TEnumAsByte<EMiniMapEntityType>                    eType;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nSubType;                                                 // 0x0010(0x0004)
	int                                                nProfileId;                                               // 0x0014(0x0004)
	TEnumAsByte<ETgMapTeam>                            Team;                                                     // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                nVisionRange;                                             // 0x001C(0x0004)
	unsigned long                                      bIsDead : 1;                                              // 0x0020(0x0004)
	class AReplicationInfo*                            RepInfo;                                                  // 0x0024(0x0008)
	int                                                nIdx;                                                     // 0x002C(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0030(0x0004)
	unsigned char                                      bVisibleOnMap;                                            // 0x0034(0x0001)
	unsigned char                                      bVisibleBySentinel;                                       // 0x0035(0x0001)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	unsigned long                                      bVisibleByDetector : 1;                                   // 0x0038(0x0004)
	float                                              fLastPingTime;                                            // 0x003C(0x0004)
	unsigned long                                      bRequireLOS : 1;                                          // 0x0040(0x0004)
	unsigned long                                      bDetector : 1;                                            // 0x0040(0x0004)
	unsigned long                                      bSentinel : 1;                                            // 0x0040(0x0004)
	unsigned char                                      byVisionMask;                                             // 0x0044(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              fHealthPCT;                                               // 0x0048(0x0004)
	class AActor*                                      FogOfWarArea;                                             // 0x004C(0x0008)
	unsigned long                                      FogOfWarAreaRevealed : 1;                                 // 0x0054(0x0004)
};

// ScriptStruct TgGame.TgProj_FuriaF.FuriaFTrackingTargets
// 0x000C
struct FFuriaFTrackingTargets
{
	class AActor*                                      PotentialTarget;                                          // 0x0000(0x0008)
	float                                              fScore;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.sPredefinedLevelDeployInfo
// 0x0010
struct FsPredefinedLevelDeployInfo
{
	int                                                m_Id;                                                     // 0x0000(0x0004)
	struct FVector                                     m_Location;                                               // 0x0004(0x000C)
};

// ScriptStruct TgGame.TgSpecialFxLightManager.TgFxLight
// 0x0014
struct FTgFxLight
{
	struct FPointer                                    m_FxEmitter;                                              // 0x0000(0x0008)
	class UTgSpecialFx*                                m_OwnerSpecialFx;                                         // 0x0008(0x0008)
	float                                              m_Score;                                                  // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm_WallBangFire.SaatiAimInfo
// 0x0018
struct FSaatiAimInfo
{
	struct FVector                                     CachedAimVector;                                          // 0x0000(0x000C)
	struct FVector                                     CachedStartLocation;                                      // 0x000C(0x000C)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
